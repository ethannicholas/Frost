#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/Key.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit(((org$frostlang$frostc$parser$Token$Kind$wrapper*) p0)->value, ((org$frostlang$frostc$parser$Token$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int org$frostlang$frostc$parser$Token$Kind$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$parser$Token$Kind$get_hash$R$frost$core$Int(((org$frostlang$frostc$parser$Token$Kind$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$parser$Token$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$parser$Token$Kind$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$frostc$parser$Token$Kind$_frost$core$Equatable, { org$frostlang$frostc$parser$Token$Kind$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
org$frostlang$frostc$parser$Token$Kind$class_type org$frostlang$frostc$parser$Token$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$parser$Token$Kind$_frost$collections$Key, { org$frostlang$frostc$parser$Token$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$parser$Token$Kind$cleanup$shim, org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit$shim, org$frostlang$frostc$parser$Token$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$parser$Token$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$parser$Token$Kind$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &org$frostlang$frostc$parser$Token$Kind$wrapper_frost$core$Equatable, { org$frostlang$frostc$parser$Token$Kind$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s2;
org$frostlang$frostc$parser$Token$Kind$wrapperclass_type org$frostlang$frostc$parser$Token$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$parser$Token$Kind$wrapper_frost$collections$Key, { org$frostlang$frostc$parser$Token$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 38, -5226343182384548052, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 38, -5226343182384548052, NULL };
static frost$core$String $s807 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x6f\x6b\x65\x6e\x2e\x66\x72\x6f\x73\x74", 11, -2945524549076434626, NULL };
static frost$core$String $s815 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, -2780652702254013407, NULL };
static frost$core$String $s816 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, -2780652702254013407, NULL };
static frost$core$String $s823 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54", 10, -854006556755980733, NULL };
static frost$core$String $s824 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54", 10, -854006556755980733, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, -1832243356126634376, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, -1832243356126634376, NULL };
static frost$core$String $s839 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x43\x49\x4d\x41\x4c", 7, -4421263928146067476, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x43\x49\x4d\x41\x4c", 7, -4421263928146067476, NULL };
static frost$core$String $s847 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x4e\x41\x52\x59", 6, 3180398050091593148, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x4e\x41\x52\x59", 6, 3180398050091593148, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x45\x58", 3, 5314357622289828202, NULL };
static frost$core$String $s856 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x45\x58", 3, 5314357622289828202, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c", 4, -8527112705117131683, NULL };
static frost$core$String $s864 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c", 4, -8527112705117131683, NULL };
static frost$core$String $s871 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 8524030245501661566, NULL };
static frost$core$String $s872 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 8524030245501661566, NULL };
static frost$core$String $s879 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x55\x42\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 5858367662667776935, NULL };
static frost$core$String $s880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x55\x42\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 5858367662667776935, NULL };
static frost$core$String $s887 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x49\x4e\x45\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 12, -4985822287803552931, NULL };
static frost$core$String $s888 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x49\x4e\x45\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 12, -4985822287803552931, NULL };
static frost$core$String $s895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x53\x54\x41\x52\x54", 19, -1035988180762846889, NULL };
static frost$core$String $s896 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x53\x54\x41\x52\x54", 19, -1035988180762846889, NULL };
static frost$core$String $s903 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x45\x4e\x44", 17, -3169533535160638894, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x45\x4e\x44", 17, -3169533535160638894, NULL };
static frost$core$String $s911 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x43\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 11, -854743268890280045, NULL };
static frost$core$String $s912 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x43\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 11, -854743268890280045, NULL };
static frost$core$String $s919 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x54\x45\x53\x50\x41\x43\x45", 10, -3276662447725882720, NULL };
static frost$core$String $s920 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x54\x45\x53\x50\x41\x43\x45", 10, -3276662447725882720, NULL };
static frost$core$String $s927 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x4e\x4f\x54\x41\x54\x49\x4f\x4e", 10, -6766455421495095064, NULL };
static frost$core$String $s928 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x4e\x4f\x54\x41\x54\x49\x4f\x4e", 10, -6766455421495095064, NULL };
static frost$core$String $s935 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x43\x4b\x41\x47\x45", 7, 4214258907844905339, NULL };
static frost$core$String $s936 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x43\x4b\x41\x47\x45", 7, 4214258907844905339, NULL };
static frost$core$String $s943 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x53\x45\x53", 4, -7962572020183094811, NULL };
static frost$core$String $s944 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x53\x45\x53", 4, -7962572020183094811, NULL };
static frost$core$String $s951 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53", 2, 650898822127487629, NULL };
static frost$core$String $s952 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53", 2, 650898822127487629, NULL };
static frost$core$String $s959 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s960 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x45\x52\x46\x41\x43\x45", 9, 6497765481944569648, NULL };
static frost$core$String $s968 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x45\x52\x46\x41\x43\x45", 9, 6497765481944569648, NULL };
static frost$core$String $s975 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x48\x4f\x49\x43\x45", 6, 422481043336243254, NULL };
static frost$core$String $s976 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x48\x4f\x49\x43\x45", 6, 422481043336243254, NULL };
static frost$core$String $s983 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x55\x4e\x43\x54\x49\x4f\x4e", 8, 5163167664221876233, NULL };
static frost$core$String $s984 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x55\x4e\x43\x54\x49\x4f\x4e", 8, 5163167664221876233, NULL };
static frost$core$String $s991 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44", 6, 7192733565866671856, NULL };
static frost$core$String $s992 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44", 6, 7192733565866671856, NULL };
static frost$core$String $s999 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x49\x54", 4, 775939446952026579, NULL };
static frost$core$String $s1000 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x49\x54", 4, 775939446952026579, NULL };
static frost$core$String $s1007 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52", 3, 8940586553584031198, NULL };
static frost$core$String $s1008 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52", 3, 8940586553584031198, NULL };
static frost$core$String $s1015 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x46", 3, -2290544294605466196, NULL };
static frost$core$String $s1016 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x46", 3, -2290544294605466196, NULL };
static frost$core$String $s1023 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x52\x4f\x50\x45\x52\x54\x59", 8, 6193835437963882760, NULL };
static frost$core$String $s1024 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x52\x4f\x50\x45\x52\x54\x59", 8, 6193835437963882760, NULL };
static frost$core$String $s1031 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x53\x54\x41\x4e\x54", 8, 7784245047744762789, NULL };
static frost$core$String $s1032 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x53\x54\x41\x4e\x54", 8, 7784245047744762789, NULL };
static frost$core$String $s1039 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x54\x55\x52\x4e", 6, 3682372857926802591, NULL };
static frost$core$String $s1040 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x54\x55\x52\x4e", 6, 3682372857926802591, NULL };
static frost$core$String $s1047 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x52\x45\x41\x4b", 5, 1390767274722343896, NULL };
static frost$core$String $s1048 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x52\x45\x41\x4b", 5, 1390767274722343896, NULL };
static frost$core$String $s1055 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x54\x49\x4e\x55\x45", 8, -1218937278262061340, NULL };
static frost$core$String $s1056 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x54\x49\x4e\x55\x45", 8, -1218937278262061340, NULL };
static frost$core$String $s1063 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f", 2, 648018101662142484, NULL };
static frost$core$String $s1064 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f", 2, 648018101662142484, NULL };
static frost$core$String $s1071 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x4c\x45", 5, -6746519810156181554, NULL };
static frost$core$String $s1072 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x4c\x45", 5, -6746519810156181554, NULL };
static frost$core$String $s1079 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x4f\x52", 3, -925357672022179216, NULL };
static frost$core$String $s1080 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x4f\x52", 3, -925357672022179216, NULL };
static frost$core$String $s1087 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x59", 2, 653913683011474516, NULL };
static frost$core$String $s1088 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x59", 2, 653913683011474516, NULL };
static frost$core$String $s1095 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e", 2, 658677866895566654, NULL };
static frost$core$String $s1096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e", 2, 658677866895566654, NULL };
static frost$core$String $s1103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50", 4, 7310791030102272107, NULL };
static frost$core$String $s1104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50", 4, 7310791030102272107, NULL };
static frost$core$String $s1111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x46", 2, 658669070802540966, NULL };
static frost$core$String $s1112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x46", 2, 658669070802540966, NULL };
static frost$core$String $s1119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x53\x45", 4, -4659697924760971984, NULL };
static frost$core$String $s1120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x53\x45", 4, -4659697924760971984, NULL };
static frost$core$String $s1127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x41\x54\x43\x48", 5, -7462029077894567594, NULL };
static frost$core$String $s1128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x41\x54\x43\x48", 5, -7462029077894567594, NULL };
static frost$core$String $s1135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x45\x4e", 4, -2585065074016245767, NULL };
static frost$core$String $s1136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x45\x4e", 4, -2585065074016245767, NULL };
static frost$core$String $s1143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x54\x48\x45\x52\x57\x49\x53\x45", 9, 4281552231092500061, NULL };
static frost$core$String $s1144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x54\x48\x45\x52\x57\x49\x53\x45", 9, 4281552231092500061, NULL };
static frost$core$String $s1151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x55\x45", 4, 8092504513751138981, NULL };
static frost$core$String $s1152 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x55\x45", 4, 8092504513751138981, NULL };
static frost$core$String $s1159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 710666245702197400, NULL };
static frost$core$String $s1160 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 710666245702197400, NULL };
static frost$core$String $s1167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 8049205518224136996, NULL };
static frost$core$String $s1168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 8049205518224136996, NULL };
static frost$core$String $s1175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x45\x52\x54", 6, -2770764151085366373, NULL };
static frost$core$String $s1176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x45\x52\x54", 6, -2770764151085366373, NULL };
static frost$core$String $s1183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x52\x45\x41\x43\x48\x41\x42\x4c\x45", 11, -1266078107571979791, NULL };
static frost$core$String $s1184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x52\x45\x41\x43\x48\x41\x42\x4c\x45", 11, -1266078107571979791, NULL };
static frost$core$String $s1191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x59", 3, 7829227687881249998, NULL };
static frost$core$String $s1192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x59", 3, 7829227687881249998, NULL };
static frost$core$String $s1199 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x49\x4c", 4, 3215402482899151853, NULL };
static frost$core$String $s1200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x49\x4c", 4, 3215402482899151853, NULL };
static frost$core$String $s1207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x45\x4c\x46", 4, 4758868999504809847, NULL };
static frost$core$String $s1208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x45\x4c\x46", 4, 4758868999504809847, NULL };
static frost$core$String $s1215 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x50\x45\x52", 5, 5795199294677836756, NULL };
static frost$core$String $s1216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x50\x45\x52", 5, 5795199294677836756, NULL };
static frost$core$String $s1223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x41\x5a\x59", 4, -7529778104896043217, NULL };
static frost$core$String $s1224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x41\x5a\x59", 4, -7529778104896043217, NULL };
static frost$core$String $s1231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x4f\x44\x55\x4c\x45", 6, 72160643508752349, NULL };
static frost$core$String $s1232 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x4f\x44\x55\x4c\x45", 6, 72160643508752349, NULL };
static frost$core$String $s1239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52", 10, 6705406146079849566, NULL };
static frost$core$String $s1240 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52", 10, 6705406146079849566, NULL };
static frost$core$String $s1247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x4f\x54", 3, 3960658697195819050, NULL };
static frost$core$String $s1248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x4f\x54", 3, 3960658697195819050, NULL };
static frost$core$String $s1255 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4e\x4f\x54", 10, 7590891947359604737, NULL };
static frost$core$String $s1256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4e\x4f\x54", 10, 7590891947359604737, NULL };
static frost$core$String $s1263 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44", 3, -424742331256529164, NULL };
static frost$core$String $s1264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44", 3, -424742331256529164, NULL };
static frost$core$String $s1271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42", 3, -7490157870346156267, NULL };
static frost$core$String $s1272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42", 3, -7490157870346156267, NULL };
static frost$core$String $s1279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c", 3, 2187805048830972289, NULL };
static frost$core$String $s1280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c", 3, 2187805048830972289, NULL };
static frost$core$String $s1287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56", 3, -2286568460558612120, NULL };
static frost$core$String $s1288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56", 3, -2286568460558612120, NULL };
static frost$core$String $s1295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56", 6, 236947128255071689, NULL };
static frost$core$String $s1296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56", 6, 236947128255071689, NULL };
static frost$core$String $s1303 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d", 3, -6890851465363405241, NULL };
static frost$core$String $s1304 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d", 3, -6890851465363405241, NULL };
static frost$core$String $s1311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57", 3, -8271037625575719083, NULL };
static frost$core$String $s1312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57", 3, -8271037625575719083, NULL };
static frost$core$String $s1319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x51", 2, 647211060127224835, NULL };
static frost$core$String $s1320 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x51", 2, 647211060127224835, NULL };
static frost$core$String $s1327 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x45\x51", 3, 3951089647497390967, NULL };
static frost$core$String $s1328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x45\x51", 3, 3951089647497390967, NULL };
static frost$core$String $s1335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x54\x59", 8, -5582706505953877701, NULL };
static frost$core$String $s1336 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x54\x59", 8, -5582706505953877701, NULL };
static frost$core$String $s1343 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x49\x44\x45\x4e\x54\x49\x54\x59", 9, 6439203883259295967, NULL };
static frost$core$String $s1344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x49\x44\x45\x4e\x54\x49\x54\x59", 9, 6439203883259295967, NULL };
static frost$core$String $s1351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54", 2, 655682797220887565, NULL };
static frost$core$String $s1352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54", 2, 655682797220887565, NULL };
static frost$core$String $s1359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54", 2, 649118712801792470, NULL };
static frost$core$String $s1360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54", 2, 649118712801792470, NULL };
static frost$core$String $s1367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54\x45\x51", 4, 5720195730142804299, NULL };
static frost$core$String $s1368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54\x45\x51", 4, 5720195730142804299, NULL };
static frost$core$String $s1375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54\x45\x51", 4, -194475579662543288, NULL };
static frost$core$String $s1376 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54\x45\x51", 4, -194475579662543288, NULL };
static frost$core$String $s1383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44", 3, -430490578047680922, NULL };
static frost$core$String $s1384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44", 3, -430490578047680922, NULL };
static frost$core$String $s1391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44", 10, -508925442021829239, NULL };
static frost$core$String $s1392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44", 10, -508925442021829239, NULL };
static frost$core$String $s1399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52", 2, 656738328383780900, NULL };
static frost$core$String $s1400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52", 2, 656738328383780900, NULL };
static frost$core$String $s1407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52", 9, 4106761120429910253, NULL };
static frost$core$String $s1408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52", 9, 4106761120429910253, NULL };
static frost$core$String $s1415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52", 3, -3262591736092274978, NULL };
static frost$core$String $s1416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52", 3, -3262591736092274978, NULL };
static frost$core$String $s1423 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52", 10, -6137086871326903227, NULL };
static frost$core$String $s1424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52", 10, -6137086871326903227, NULL };
static frost$core$String $s1431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54", 9, -2576167377767570706, NULL };
static frost$core$String $s1432 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54", 9, -2576167377767570706, NULL };
static frost$core$String $s1439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x49\x47\x4e\x4d\x45\x4e\x54", 10, -4802925920175815696, NULL };
static frost$core$String $s1440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x49\x47\x4e\x4d\x45\x4e\x54", 10, -4802925920175815696, NULL };
static frost$core$String $s1447 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44\x45\x51", 5, 8976745075867355670, NULL };
static frost$core$String $s1448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44\x45\x51", 5, 8976745075867355670, NULL };
static frost$core$String $s1455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42\x45\x51", 5, -1294301046623021677, NULL };
static frost$core$String $s1456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42\x45\x51", 5, -1294301046623021677, NULL };
static frost$core$String $s1463 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c\x45\x51", 5, -6678819885994840569, NULL };
static frost$core$String $s1464 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c\x45\x51", 5, -6678819885994840569, NULL };
static frost$core$String $s1471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56\x45\x51", 5, -4675304909104048750, NULL };
static frost$core$String $s1472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56\x45\x51", 5, -4675304909104048750, NULL };
static frost$core$String $s1479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d\x45\x51", 5, 1790334097051036789, NULL };
static frost$core$String $s1480 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d\x45\x51", 5, 1790334097051036789, NULL };
static frost$core$String $s1487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56\x45\x51", 8, 525286096538892175, NULL };
static frost$core$String $s1488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56\x45\x51", 8, 525286096538892175, NULL };
static frost$core$String $s1495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57\x45\x51", 5, 7905706922760248531, NULL };
static frost$core$String $s1496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57\x45\x51", 5, 7905706922760248531, NULL };
static frost$core$String $s1503 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52\x45\x51", 4, -362280561266835226, NULL };
static frost$core$String $s1504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52\x45\x51", 4, -362280561266835226, NULL };
static frost$core$String $s1511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52\x45\x51", 11, 8723670896618697899, NULL };
static frost$core$String $s1512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52\x45\x51", 11, 8723670896618697899, NULL };
static frost$core$String $s1519 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44\x45\x51", 5, 8604071991207326456, NULL };
static frost$core$String $s1520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44\x45\x51", 5, 8604071991207326456, NULL };
static frost$core$String $s1527 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44\x45\x51", 12, -4110952405141345457, NULL };
static frost$core$String $s1528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44\x45\x51", 12, -4110952405141345457, NULL };
static frost$core$String $s1535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52\x45\x51", 5, 4441309431091541136, NULL };
static frost$core$String $s1536 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52\x45\x51", 5, 4441309431091541136, NULL };
static frost$core$String $s1543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52\x45\x51", 12, -4045050825354945117, NULL };
static frost$core$String $s1544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52\x45\x51", 12, -4045050825354945117, NULL };
static frost$core$String $s1551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54\x45\x51", 11, 8065439914669260352, NULL };
static frost$core$String $s1552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54\x45\x51", 11, 8065439914669260352, NULL };
static frost$core$String $s1559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54\x45\x51", 12, 5231704650367263801, NULL };
static frost$core$String $s1560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54\x45\x51", 12, 5231704650367263801, NULL };
static frost$core$String $s1567 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x41\x53\x54", 4, -3929828708733151922, NULL };
static frost$core$String $s1568 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x41\x53\x54", 4, -3929828708733151922, NULL };
static frost$core$String $s1575 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53", 6, 5021467569829040391, NULL };
static frost$core$String $s1576 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53", 6, 5021467569829040391, NULL };
static frost$core$String $s1583 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44", 13, 2812181468845568921, NULL };
static frost$core$String $s1584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44", 13, 2812181468845568921, NULL };
static frost$core$String $s1591 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 16, -531539132585377116, NULL };
static frost$core$String $s1592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 16, -531539132585377116, NULL };
static frost$core$String $s1599 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 23, 1977457359173694958, NULL };
static frost$core$String $s1600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 23, 1977457359173694958, NULL };
static frost$core$String $s1607 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, -1653254887467171387, NULL };
static frost$core$String $s1608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, -1653254887467171387, NULL };
static frost$core$String $s1615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, -609265884448102340, NULL };
static frost$core$String $s1616 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, -609265884448102340, NULL };
static frost$core$String $s1623 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x4c\x49\x50\x53\x49\x53", 8, 3616480144494687938, NULL };
static frost$core$String $s1624 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x4c\x49\x50\x53\x49\x53", 8, 3616480144494687938, NULL };
static frost$core$String $s1631 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54\x44\x4f\x54", 6, 5185479590340089303, NULL };
static frost$core$String $s1632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54\x44\x4f\x54", 6, 5185479590340089303, NULL };
static frost$core$String $s1639 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54", 3, -2284688295674749760, NULL };
static frost$core$String $s1640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54", 3, -2284688295674749760, NULL };
static frost$core$String $s1647 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 718761851555915894, NULL };
static frost$core$String $s1648 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 718761851555915894, NULL };
static frost$core$String $s1655 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 2789542229241279848, NULL };
static frost$core$String $s1656 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 2789542229241279848, NULL };
static frost$core$String $s1663 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, -5015735881644584683, NULL };
static frost$core$String $s1664 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, -5015735881644584683, NULL };
static frost$core$String $s1671 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 8505961967228289923, NULL };
static frost$core$String $s1672 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 8505961967228289923, NULL };
static frost$core$String $s1679 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x50\x41\x52\x45\x4e", 6, 3876691553076048869, NULL };
static frost$core$String $s1680 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x50\x41\x52\x45\x4e", 6, 3876691553076048869, NULL };
static frost$core$String $s1687 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x50\x41\x52\x45\x4e", 6, -3536911959274103509, NULL };
static frost$core$String $s1688 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x50\x41\x52\x45\x4e", 6, -3536911959274103509, NULL };
static frost$core$String $s1695 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, -1378825067955875400, NULL };
static frost$core$String $s1696 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, -1378825067955875400, NULL };
static frost$core$String $s1703 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x41\x43\x4b\x53\x4c\x41\x53\x48", 9, -3293626981209672713, NULL };
static frost$core$String $s1704 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x41\x43\x4b\x53\x4c\x41\x53\x48", 9, -3293626981209672713, NULL };
static frost$core$String $s1711 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x56\x41\x4c\x49\x44", 7, 4384553811495809008, NULL };
static frost$core$String $s1712 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x56\x41\x4c\x49\x44", 7, 4384553811495809008, NULL };
static frost$core$String $s1714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x6f\x6b\x65\x6e\x2e\x66\x72\x6f\x73\x74", 11, -2945524549076434626, NULL };

void org$frostlang$frostc$parser$Token$Kind$cleanup(org$frostlang$frostc$parser$Token$Kind param0) {

return;

}
org$frostlang$frostc$parser$Token$Kind org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$frostc$parser$Token$Kind local0;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int* $tmp3 = &(&local0)->$rawValue;
*$tmp3 = param0;
org$frostlang$frostc$parser$Token$Kind $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Bit org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit(org$frostlang$frostc$parser$Token$Kind param0, org$frostlang$frostc$parser$Token$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp5 = param0.$rawValue;
frost$core$Int $tmp6 = param1.$rawValue;
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 != $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Bit $tmp12 = (frost$core$Bit) {false};
return $tmp12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Bit $tmp13 = (frost$core$Bit) {true};
return $tmp13;

}
frost$core$Int org$frostlang$frostc$parser$Token$Kind$get_hash$R$frost$core$Int(org$frostlang$frostc$parser$Token$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp14 = param0.$rawValue;
frost$core$Int $tmp15 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 == $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp21 = (frost$core$Int) {13220400891325003564u};
return $tmp21;
block3:;
frost$core$Int $tmp22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp23 = $tmp14.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp28 = (frost$core$Int) {7994057708940455512u};
return $tmp28;
block6:;
frost$core$Int $tmp29 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp30 = $tmp14.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 == $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp35 = (frost$core$Int) {2767714526555907460u};
return $tmp35;
block9:;
frost$core$Int $tmp36 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp37 = $tmp14.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 == $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp42 = (frost$core$Int) {15988115417880911024u};
return $tmp42;
block12:;
frost$core$Int $tmp43 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp44 = $tmp14.value;
int64_t $tmp45 = $tmp43.value;
bool $tmp46 = $tmp44 == $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp49 = (frost$core$Int) {10761772235496362972u};
return $tmp49;
block15:;
frost$core$Int $tmp50 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp51 = $tmp14.value;
int64_t $tmp52 = $tmp50.value;
bool $tmp53 = $tmp51 == $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp56 = (frost$core$Int) {5535429053111814920u};
return $tmp56;
block18:;
frost$core$Int $tmp57 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp58 = $tmp14.value;
int64_t $tmp59 = $tmp57.value;
bool $tmp60 = $tmp58 == $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp63 = (frost$core$Int) {309085870727266868u};
return $tmp63;
block21:;
frost$core$Int $tmp64 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp65 = $tmp14.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 == $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp70 = (frost$core$Int) {13529486762052270432u};
return $tmp70;
block24:;
frost$core$Int $tmp71 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp72 = $tmp14.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 == $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp77 = (frost$core$Int) {8303143579667722380u};
return $tmp77;
block27:;
frost$core$Int $tmp78 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp79 = $tmp14.value;
int64_t $tmp80 = $tmp78.value;
bool $tmp81 = $tmp79 == $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp84 = (frost$core$Int) {3076800397283174328u};
return $tmp84;
block30:;
frost$core$Int $tmp85 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp86 = $tmp14.value;
int64_t $tmp87 = $tmp85.value;
bool $tmp88 = $tmp86 == $tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp91 = (frost$core$Int) {16297201288608177892u};
return $tmp91;
block33:;
frost$core$Int $tmp92 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp93 = $tmp14.value;
int64_t $tmp94 = $tmp92.value;
bool $tmp95 = $tmp93 == $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp98 = (frost$core$Int) {11070858106223629840u};
return $tmp98;
block36:;
frost$core$Int $tmp99 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp100 = $tmp14.value;
int64_t $tmp101 = $tmp99.value;
bool $tmp102 = $tmp100 == $tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp105 = (frost$core$Int) {5844514923839081788u};
return $tmp105;
block39:;
frost$core$Int $tmp106 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp107 = $tmp14.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 == $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp112 = (frost$core$Int) {618171741454533736u};
return $tmp112;
block42:;
frost$core$Int $tmp113 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp114 = $tmp14.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 == $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp119 = (frost$core$Int) {13838572632779537300u};
return $tmp119;
block45:;
frost$core$Int $tmp120 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp121 = $tmp14.value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 == $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp126 = (frost$core$Int) {8612229450394989248u};
return $tmp126;
block48:;
frost$core$Int $tmp127 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp128 = $tmp14.value;
int64_t $tmp129 = $tmp127.value;
bool $tmp130 = $tmp128 == $tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130};
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp133 = (frost$core$Int) {3385886268010441196u};
return $tmp133;
block51:;
frost$core$Int $tmp134 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp135 = $tmp14.value;
int64_t $tmp136 = $tmp134.value;
bool $tmp137 = $tmp135 == $tmp136;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp140 = (frost$core$Int) {16606287159335444760u};
return $tmp140;
block54:;
frost$core$Int $tmp141 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp142 = $tmp14.value;
int64_t $tmp143 = $tmp141.value;
bool $tmp144 = $tmp142 == $tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp147 = (frost$core$Int) {11379943976950896708u};
return $tmp147;
block57:;
frost$core$Int $tmp148 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp149 = $tmp14.value;
int64_t $tmp150 = $tmp148.value;
bool $tmp151 = $tmp149 == $tmp150;
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp154 = (frost$core$Int) {6153600794566348656u};
return $tmp154;
block60:;
frost$core$Int $tmp155 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp156 = $tmp14.value;
int64_t $tmp157 = $tmp155.value;
bool $tmp158 = $tmp156 == $tmp157;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp161 = (frost$core$Int) {927257612181800604u};
return $tmp161;
block63:;
frost$core$Int $tmp162 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp163 = $tmp14.value;
int64_t $tmp164 = $tmp162.value;
bool $tmp165 = $tmp163 == $tmp164;
frost$core$Bit $tmp166 = (frost$core$Bit) {$tmp165};
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp168 = (frost$core$Int) {14147658503506804168u};
return $tmp168;
block66:;
frost$core$Int $tmp169 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp170 = $tmp14.value;
int64_t $tmp171 = $tmp169.value;
bool $tmp172 = $tmp170 == $tmp171;
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp175 = (frost$core$Int) {8921315321122256116u};
return $tmp175;
block69:;
frost$core$Int $tmp176 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp177 = $tmp14.value;
int64_t $tmp178 = $tmp176.value;
bool $tmp179 = $tmp177 == $tmp178;
frost$core$Bit $tmp180 = (frost$core$Bit) {$tmp179};
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp182 = (frost$core$Int) {3694972138737708064u};
return $tmp182;
block72:;
frost$core$Int $tmp183 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp184 = $tmp14.value;
int64_t $tmp185 = $tmp183.value;
bool $tmp186 = $tmp184 == $tmp185;
frost$core$Bit $tmp187 = (frost$core$Bit) {$tmp186};
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp189 = (frost$core$Int) {16915373030062711628u};
return $tmp189;
block75:;
frost$core$Int $tmp190 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp191 = $tmp14.value;
int64_t $tmp192 = $tmp190.value;
bool $tmp193 = $tmp191 == $tmp192;
frost$core$Bit $tmp194 = (frost$core$Bit) {$tmp193};
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp196 = (frost$core$Int) {11689029847678163576u};
return $tmp196;
block78:;
frost$core$Int $tmp197 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp198 = $tmp14.value;
int64_t $tmp199 = $tmp197.value;
bool $tmp200 = $tmp198 == $tmp199;
frost$core$Bit $tmp201 = (frost$core$Bit) {$tmp200};
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp203 = (frost$core$Int) {6462686665293615524u};
return $tmp203;
block81:;
frost$core$Int $tmp204 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp205 = $tmp14.value;
int64_t $tmp206 = $tmp204.value;
bool $tmp207 = $tmp205 == $tmp206;
frost$core$Bit $tmp208 = (frost$core$Bit) {$tmp207};
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp210 = (frost$core$Int) {1236343482909067472u};
return $tmp210;
block84:;
frost$core$Int $tmp211 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp212 = $tmp14.value;
int64_t $tmp213 = $tmp211.value;
bool $tmp214 = $tmp212 == $tmp213;
frost$core$Bit $tmp215 = (frost$core$Bit) {$tmp214};
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp217 = (frost$core$Int) {14456744374234071036u};
return $tmp217;
block87:;
frost$core$Int $tmp218 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp219 = $tmp14.value;
int64_t $tmp220 = $tmp218.value;
bool $tmp221 = $tmp219 == $tmp220;
frost$core$Bit $tmp222 = (frost$core$Bit) {$tmp221};
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp224 = (frost$core$Int) {9230401191849522984u};
return $tmp224;
block90:;
frost$core$Int $tmp225 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp226 = $tmp14.value;
int64_t $tmp227 = $tmp225.value;
bool $tmp228 = $tmp226 == $tmp227;
frost$core$Bit $tmp229 = (frost$core$Bit) {$tmp228};
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp231 = (frost$core$Int) {4004058009464974932u};
return $tmp231;
block93:;
frost$core$Int $tmp232 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp233 = $tmp14.value;
int64_t $tmp234 = $tmp232.value;
bool $tmp235 = $tmp233 == $tmp234;
frost$core$Bit $tmp236 = (frost$core$Bit) {$tmp235};
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp238 = (frost$core$Int) {17224458900789978496u};
return $tmp238;
block96:;
frost$core$Int $tmp239 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp240 = $tmp14.value;
int64_t $tmp241 = $tmp239.value;
bool $tmp242 = $tmp240 == $tmp241;
frost$core$Bit $tmp243 = (frost$core$Bit) {$tmp242};
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp245 = (frost$core$Int) {11998115718405430444u};
return $tmp245;
block99:;
frost$core$Int $tmp246 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp247 = $tmp14.value;
int64_t $tmp248 = $tmp246.value;
bool $tmp249 = $tmp247 == $tmp248;
frost$core$Bit $tmp250 = (frost$core$Bit) {$tmp249};
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp252 = (frost$core$Int) {6771772536020882392u};
return $tmp252;
block102:;
frost$core$Int $tmp253 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp254 = $tmp14.value;
int64_t $tmp255 = $tmp253.value;
bool $tmp256 = $tmp254 == $tmp255;
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp259 = (frost$core$Int) {1545429353636334340u};
return $tmp259;
block105:;
frost$core$Int $tmp260 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp261 = $tmp14.value;
int64_t $tmp262 = $tmp260.value;
bool $tmp263 = $tmp261 == $tmp262;
frost$core$Bit $tmp264 = (frost$core$Bit) {$tmp263};
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp266 = (frost$core$Int) {14765830244961337904u};
return $tmp266;
block108:;
frost$core$Int $tmp267 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp268 = $tmp14.value;
int64_t $tmp269 = $tmp267.value;
bool $tmp270 = $tmp268 == $tmp269;
frost$core$Bit $tmp271 = (frost$core$Bit) {$tmp270};
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp273 = (frost$core$Int) {9539487062576789852u};
return $tmp273;
block111:;
frost$core$Int $tmp274 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp275 = $tmp14.value;
int64_t $tmp276 = $tmp274.value;
bool $tmp277 = $tmp275 == $tmp276;
frost$core$Bit $tmp278 = (frost$core$Bit) {$tmp277};
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp280 = (frost$core$Int) {4313143880192241800u};
return $tmp280;
block114:;
frost$core$Int $tmp281 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp282 = $tmp14.value;
int64_t $tmp283 = $tmp281.value;
bool $tmp284 = $tmp282 == $tmp283;
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284};
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp287 = (frost$core$Int) {17533544771517245364u};
return $tmp287;
block117:;
frost$core$Int $tmp288 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp289 = $tmp14.value;
int64_t $tmp290 = $tmp288.value;
bool $tmp291 = $tmp289 == $tmp290;
frost$core$Bit $tmp292 = (frost$core$Bit) {$tmp291};
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block119; else goto block120;
block119:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp294 = (frost$core$Int) {12307201589132697312u};
return $tmp294;
block120:;
frost$core$Int $tmp295 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp296 = $tmp14.value;
int64_t $tmp297 = $tmp295.value;
bool $tmp298 = $tmp296 == $tmp297;
frost$core$Bit $tmp299 = (frost$core$Bit) {$tmp298};
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp301 = (frost$core$Int) {7080858406748149260u};
return $tmp301;
block123:;
frost$core$Int $tmp302 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp303 = $tmp14.value;
int64_t $tmp304 = $tmp302.value;
bool $tmp305 = $tmp303 == $tmp304;
frost$core$Bit $tmp306 = (frost$core$Bit) {$tmp305};
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block125; else goto block126;
block125:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp308 = (frost$core$Int) {1854515224363601208u};
return $tmp308;
block126:;
frost$core$Int $tmp309 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp310 = $tmp14.value;
int64_t $tmp311 = $tmp309.value;
bool $tmp312 = $tmp310 == $tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp315 = (frost$core$Int) {15074916115688604772u};
return $tmp315;
block129:;
frost$core$Int $tmp316 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp317 = $tmp14.value;
int64_t $tmp318 = $tmp316.value;
bool $tmp319 = $tmp317 == $tmp318;
frost$core$Bit $tmp320 = (frost$core$Bit) {$tmp319};
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block131; else goto block132;
block131:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp322 = (frost$core$Int) {9848572933304056720u};
return $tmp322;
block132:;
frost$core$Int $tmp323 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp324 = $tmp14.value;
int64_t $tmp325 = $tmp323.value;
bool $tmp326 = $tmp324 == $tmp325;
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326};
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp329 = (frost$core$Int) {4622229750919508668u};
return $tmp329;
block135:;
frost$core$Int $tmp330 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp331 = $tmp14.value;
int64_t $tmp332 = $tmp330.value;
bool $tmp333 = $tmp331 == $tmp332;
frost$core$Bit $tmp334 = (frost$core$Bit) {$tmp333};
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block137; else goto block138;
block137:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp336 = (frost$core$Int) {17842630642244512232u};
return $tmp336;
block138:;
frost$core$Int $tmp337 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp338 = $tmp14.value;
int64_t $tmp339 = $tmp337.value;
bool $tmp340 = $tmp338 == $tmp339;
frost$core$Bit $tmp341 = (frost$core$Bit) {$tmp340};
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block140; else goto block141;
block140:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp343 = (frost$core$Int) {12616287459859964180u};
return $tmp343;
block141:;
frost$core$Int $tmp344 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp345 = $tmp14.value;
int64_t $tmp346 = $tmp344.value;
bool $tmp347 = $tmp345 == $tmp346;
frost$core$Bit $tmp348 = (frost$core$Bit) {$tmp347};
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp350 = (frost$core$Int) {7389944277475416128u};
return $tmp350;
block144:;
frost$core$Int $tmp351 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp352 = $tmp14.value;
int64_t $tmp353 = $tmp351.value;
bool $tmp354 = $tmp352 == $tmp353;
frost$core$Bit $tmp355 = (frost$core$Bit) {$tmp354};
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp357 = (frost$core$Int) {2163601095090868076u};
return $tmp357;
block147:;
frost$core$Int $tmp358 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp359 = $tmp14.value;
int64_t $tmp360 = $tmp358.value;
bool $tmp361 = $tmp359 == $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block149; else goto block150;
block149:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp364 = (frost$core$Int) {15384001986415871640u};
return $tmp364;
block150:;
frost$core$Int $tmp365 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp366 = $tmp14.value;
int64_t $tmp367 = $tmp365.value;
bool $tmp368 = $tmp366 == $tmp367;
frost$core$Bit $tmp369 = (frost$core$Bit) {$tmp368};
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp371 = (frost$core$Int) {10157658804031323588u};
return $tmp371;
block153:;
frost$core$Int $tmp372 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp373 = $tmp14.value;
int64_t $tmp374 = $tmp372.value;
bool $tmp375 = $tmp373 == $tmp374;
frost$core$Bit $tmp376 = (frost$core$Bit) {$tmp375};
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp378 = (frost$core$Int) {4931315621646775536u};
return $tmp378;
block156:;
frost$core$Int $tmp379 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp380 = $tmp14.value;
int64_t $tmp381 = $tmp379.value;
bool $tmp382 = $tmp380 == $tmp381;
frost$core$Bit $tmp383 = (frost$core$Bit) {$tmp382};
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block158; else goto block159;
block158:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp385 = (frost$core$Int) {18151716512971779100u};
return $tmp385;
block159:;
frost$core$Int $tmp386 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp387 = $tmp14.value;
int64_t $tmp388 = $tmp386.value;
bool $tmp389 = $tmp387 == $tmp388;
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389};
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block161; else goto block162;
block161:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp392 = (frost$core$Int) {12925373330587231048u};
return $tmp392;
block162:;
frost$core$Int $tmp393 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp394 = $tmp14.value;
int64_t $tmp395 = $tmp393.value;
bool $tmp396 = $tmp394 == $tmp395;
frost$core$Bit $tmp397 = (frost$core$Bit) {$tmp396};
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp399 = (frost$core$Int) {7699030148202682996u};
return $tmp399;
block165:;
frost$core$Int $tmp400 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp401 = $tmp14.value;
int64_t $tmp402 = $tmp400.value;
bool $tmp403 = $tmp401 == $tmp402;
frost$core$Bit $tmp404 = (frost$core$Bit) {$tmp403};
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block167; else goto block168;
block167:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp406 = (frost$core$Int) {2472686965818134944u};
return $tmp406;
block168:;
frost$core$Int $tmp407 = (frost$core$Int) {56u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp408 = $tmp14.value;
int64_t $tmp409 = $tmp407.value;
bool $tmp410 = $tmp408 == $tmp409;
frost$core$Bit $tmp411 = (frost$core$Bit) {$tmp410};
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp413 = (frost$core$Int) {15693087857143138508u};
return $tmp413;
block171:;
frost$core$Int $tmp414 = (frost$core$Int) {57u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp415 = $tmp14.value;
int64_t $tmp416 = $tmp414.value;
bool $tmp417 = $tmp415 == $tmp416;
frost$core$Bit $tmp418 = (frost$core$Bit) {$tmp417};
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block173; else goto block174;
block173:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp420 = (frost$core$Int) {10466744674758590456u};
return $tmp420;
block174:;
frost$core$Int $tmp421 = (frost$core$Int) {58u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp422 = $tmp14.value;
int64_t $tmp423 = $tmp421.value;
bool $tmp424 = $tmp422 == $tmp423;
frost$core$Bit $tmp425 = (frost$core$Bit) {$tmp424};
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp427 = (frost$core$Int) {5240401492374042404u};
return $tmp427;
block177:;
frost$core$Int $tmp428 = (frost$core$Int) {59u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp429 = $tmp14.value;
int64_t $tmp430 = $tmp428.value;
bool $tmp431 = $tmp429 == $tmp430;
frost$core$Bit $tmp432 = (frost$core$Bit) {$tmp431};
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block179; else goto block180;
block179:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp434 = (frost$core$Int) {14058309989494352u};
return $tmp434;
block180:;
frost$core$Int $tmp435 = (frost$core$Int) {60u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp436 = $tmp14.value;
int64_t $tmp437 = $tmp435.value;
bool $tmp438 = $tmp436 == $tmp437;
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438};
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block182; else goto block183;
block182:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp441 = (frost$core$Int) {13234459201314497916u};
return $tmp441;
block183:;
frost$core$Int $tmp442 = (frost$core$Int) {61u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp443 = $tmp14.value;
int64_t $tmp444 = $tmp442.value;
bool $tmp445 = $tmp443 == $tmp444;
frost$core$Bit $tmp446 = (frost$core$Bit) {$tmp445};
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block185; else goto block186;
block185:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp448 = (frost$core$Int) {8008116018929949864u};
return $tmp448;
block186:;
frost$core$Int $tmp449 = (frost$core$Int) {62u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp450 = $tmp14.value;
int64_t $tmp451 = $tmp449.value;
bool $tmp452 = $tmp450 == $tmp451;
frost$core$Bit $tmp453 = (frost$core$Bit) {$tmp452};
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block188; else goto block189;
block188:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp455 = (frost$core$Int) {2781772836545401812u};
return $tmp455;
block189:;
frost$core$Int $tmp456 = (frost$core$Int) {63u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp457 = $tmp14.value;
int64_t $tmp458 = $tmp456.value;
bool $tmp459 = $tmp457 == $tmp458;
frost$core$Bit $tmp460 = (frost$core$Bit) {$tmp459};
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block191; else goto block192;
block191:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp462 = (frost$core$Int) {16002173727870405376u};
return $tmp462;
block192:;
frost$core$Int $tmp463 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp464 = $tmp14.value;
int64_t $tmp465 = $tmp463.value;
bool $tmp466 = $tmp464 == $tmp465;
frost$core$Bit $tmp467 = (frost$core$Bit) {$tmp466};
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block194; else goto block195;
block194:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp469 = (frost$core$Int) {10775830545485857324u};
return $tmp469;
block195:;
frost$core$Int $tmp470 = (frost$core$Int) {65u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp471 = $tmp14.value;
int64_t $tmp472 = $tmp470.value;
bool $tmp473 = $tmp471 == $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block197; else goto block198;
block197:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp476 = (frost$core$Int) {5549487363101309272u};
return $tmp476;
block198:;
frost$core$Int $tmp477 = (frost$core$Int) {66u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp478 = $tmp14.value;
int64_t $tmp479 = $tmp477.value;
bool $tmp480 = $tmp478 == $tmp479;
frost$core$Bit $tmp481 = (frost$core$Bit) {$tmp480};
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block200; else goto block201;
block200:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp483 = (frost$core$Int) {323144180716761220u};
return $tmp483;
block201:;
frost$core$Int $tmp484 = (frost$core$Int) {67u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp485 = $tmp14.value;
int64_t $tmp486 = $tmp484.value;
bool $tmp487 = $tmp485 == $tmp486;
frost$core$Bit $tmp488 = (frost$core$Bit) {$tmp487};
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block203; else goto block204;
block203:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp490 = (frost$core$Int) {13543545072041764784u};
return $tmp490;
block204:;
frost$core$Int $tmp491 = (frost$core$Int) {68u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp492 = $tmp14.value;
int64_t $tmp493 = $tmp491.value;
bool $tmp494 = $tmp492 == $tmp493;
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494};
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block206; else goto block207;
block206:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp497 = (frost$core$Int) {8317201889657216732u};
return $tmp497;
block207:;
frost$core$Int $tmp498 = (frost$core$Int) {69u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp499 = $tmp14.value;
int64_t $tmp500 = $tmp498.value;
bool $tmp501 = $tmp499 == $tmp500;
frost$core$Bit $tmp502 = (frost$core$Bit) {$tmp501};
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block209; else goto block210;
block209:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp504 = (frost$core$Int) {3090858707272668680u};
return $tmp504;
block210:;
frost$core$Int $tmp505 = (frost$core$Int) {70u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp506 = $tmp14.value;
int64_t $tmp507 = $tmp505.value;
bool $tmp508 = $tmp506 == $tmp507;
frost$core$Bit $tmp509 = (frost$core$Bit) {$tmp508};
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block212; else goto block213;
block212:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp511 = (frost$core$Int) {16311259598597672244u};
return $tmp511;
block213:;
frost$core$Int $tmp512 = (frost$core$Int) {71u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp513 = $tmp14.value;
int64_t $tmp514 = $tmp512.value;
bool $tmp515 = $tmp513 == $tmp514;
frost$core$Bit $tmp516 = (frost$core$Bit) {$tmp515};
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block215; else goto block216;
block215:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp518 = (frost$core$Int) {11084916416213124192u};
return $tmp518;
block216:;
frost$core$Int $tmp519 = (frost$core$Int) {72u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp520 = $tmp14.value;
int64_t $tmp521 = $tmp519.value;
bool $tmp522 = $tmp520 == $tmp521;
frost$core$Bit $tmp523 = (frost$core$Bit) {$tmp522};
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block218; else goto block219;
block218:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp525 = (frost$core$Int) {5858573233828576140u};
return $tmp525;
block219:;
frost$core$Int $tmp526 = (frost$core$Int) {73u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp527 = $tmp14.value;
int64_t $tmp528 = $tmp526.value;
bool $tmp529 = $tmp527 == $tmp528;
frost$core$Bit $tmp530 = (frost$core$Bit) {$tmp529};
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block221; else goto block222;
block221:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp532 = (frost$core$Int) {632230051444028088u};
return $tmp532;
block222:;
frost$core$Int $tmp533 = (frost$core$Int) {74u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp534 = $tmp14.value;
int64_t $tmp535 = $tmp533.value;
bool $tmp536 = $tmp534 == $tmp535;
frost$core$Bit $tmp537 = (frost$core$Bit) {$tmp536};
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block224; else goto block225;
block224:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp539 = (frost$core$Int) {13852630942769031652u};
return $tmp539;
block225:;
frost$core$Int $tmp540 = (frost$core$Int) {75u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp541 = $tmp14.value;
int64_t $tmp542 = $tmp540.value;
bool $tmp543 = $tmp541 == $tmp542;
frost$core$Bit $tmp544 = (frost$core$Bit) {$tmp543};
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block227; else goto block228;
block227:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp546 = (frost$core$Int) {8626287760384483600u};
return $tmp546;
block228:;
frost$core$Int $tmp547 = (frost$core$Int) {76u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp548 = $tmp14.value;
int64_t $tmp549 = $tmp547.value;
bool $tmp550 = $tmp548 == $tmp549;
frost$core$Bit $tmp551 = (frost$core$Bit) {$tmp550};
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block230; else goto block231;
block230:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp553 = (frost$core$Int) {3399944577999935548u};
return $tmp553;
block231:;
frost$core$Int $tmp554 = (frost$core$Int) {77u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp555 = $tmp14.value;
int64_t $tmp556 = $tmp554.value;
bool $tmp557 = $tmp555 == $tmp556;
frost$core$Bit $tmp558 = (frost$core$Bit) {$tmp557};
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block233; else goto block234;
block233:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp560 = (frost$core$Int) {16620345469324939112u};
return $tmp560;
block234:;
frost$core$Int $tmp561 = (frost$core$Int) {78u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp562 = $tmp14.value;
int64_t $tmp563 = $tmp561.value;
bool $tmp564 = $tmp562 == $tmp563;
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block236; else goto block237;
block236:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp567 = (frost$core$Int) {11394002286940391060u};
return $tmp567;
block237:;
frost$core$Int $tmp568 = (frost$core$Int) {79u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp569 = $tmp14.value;
int64_t $tmp570 = $tmp568.value;
bool $tmp571 = $tmp569 == $tmp570;
frost$core$Bit $tmp572 = (frost$core$Bit) {$tmp571};
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block239; else goto block240;
block239:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp574 = (frost$core$Int) {6167659104555843008u};
return $tmp574;
block240:;
frost$core$Int $tmp575 = (frost$core$Int) {80u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp576 = $tmp14.value;
int64_t $tmp577 = $tmp575.value;
bool $tmp578 = $tmp576 == $tmp577;
frost$core$Bit $tmp579 = (frost$core$Bit) {$tmp578};
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block242; else goto block243;
block242:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp581 = (frost$core$Int) {941315922171294956u};
return $tmp581;
block243:;
frost$core$Int $tmp582 = (frost$core$Int) {81u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp583 = $tmp14.value;
int64_t $tmp584 = $tmp582.value;
bool $tmp585 = $tmp583 == $tmp584;
frost$core$Bit $tmp586 = (frost$core$Bit) {$tmp585};
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block245; else goto block246;
block245:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp588 = (frost$core$Int) {14161716813496298520u};
return $tmp588;
block246:;
frost$core$Int $tmp589 = (frost$core$Int) {82u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp590 = $tmp14.value;
int64_t $tmp591 = $tmp589.value;
bool $tmp592 = $tmp590 == $tmp591;
frost$core$Bit $tmp593 = (frost$core$Bit) {$tmp592};
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block248; else goto block249;
block248:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp595 = (frost$core$Int) {8935373631111750468u};
return $tmp595;
block249:;
frost$core$Int $tmp596 = (frost$core$Int) {83u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp597 = $tmp14.value;
int64_t $tmp598 = $tmp596.value;
bool $tmp599 = $tmp597 == $tmp598;
frost$core$Bit $tmp600 = (frost$core$Bit) {$tmp599};
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block251; else goto block252;
block251:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp602 = (frost$core$Int) {3709030448727202416u};
return $tmp602;
block252:;
frost$core$Int $tmp603 = (frost$core$Int) {84u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp604 = $tmp14.value;
int64_t $tmp605 = $tmp603.value;
bool $tmp606 = $tmp604 == $tmp605;
frost$core$Bit $tmp607 = (frost$core$Bit) {$tmp606};
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block254; else goto block255;
block254:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp609 = (frost$core$Int) {16929431340052205980u};
return $tmp609;
block255:;
frost$core$Int $tmp610 = (frost$core$Int) {85u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp611 = $tmp14.value;
int64_t $tmp612 = $tmp610.value;
bool $tmp613 = $tmp611 == $tmp612;
frost$core$Bit $tmp614 = (frost$core$Bit) {$tmp613};
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block257; else goto block258;
block257:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp616 = (frost$core$Int) {11703088157667657928u};
return $tmp616;
block258:;
frost$core$Int $tmp617 = (frost$core$Int) {86u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp618 = $tmp14.value;
int64_t $tmp619 = $tmp617.value;
bool $tmp620 = $tmp618 == $tmp619;
frost$core$Bit $tmp621 = (frost$core$Bit) {$tmp620};
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block260; else goto block261;
block260:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp623 = (frost$core$Int) {6476744975283109876u};
return $tmp623;
block261:;
frost$core$Int $tmp624 = (frost$core$Int) {87u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp625 = $tmp14.value;
int64_t $tmp626 = $tmp624.value;
bool $tmp627 = $tmp625 == $tmp626;
frost$core$Bit $tmp628 = (frost$core$Bit) {$tmp627};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block263; else goto block264;
block263:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp630 = (frost$core$Int) {1250401792898561824u};
return $tmp630;
block264:;
frost$core$Int $tmp631 = (frost$core$Int) {88u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp632 = $tmp14.value;
int64_t $tmp633 = $tmp631.value;
bool $tmp634 = $tmp632 == $tmp633;
frost$core$Bit $tmp635 = (frost$core$Bit) {$tmp634};
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block266; else goto block267;
block266:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp637 = (frost$core$Int) {14470802684223565388u};
return $tmp637;
block267:;
frost$core$Int $tmp638 = (frost$core$Int) {89u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp639 = $tmp14.value;
int64_t $tmp640 = $tmp638.value;
bool $tmp641 = $tmp639 == $tmp640;
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block269; else goto block270;
block269:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp644 = (frost$core$Int) {9244459501839017336u};
return $tmp644;
block270:;
frost$core$Int $tmp645 = (frost$core$Int) {90u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp646 = $tmp14.value;
int64_t $tmp647 = $tmp645.value;
bool $tmp648 = $tmp646 == $tmp647;
frost$core$Bit $tmp649 = (frost$core$Bit) {$tmp648};
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block272; else goto block273;
block272:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp651 = (frost$core$Int) {4018116319454469284u};
return $tmp651;
block273:;
frost$core$Int $tmp652 = (frost$core$Int) {91u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp653 = $tmp14.value;
int64_t $tmp654 = $tmp652.value;
bool $tmp655 = $tmp653 == $tmp654;
frost$core$Bit $tmp656 = (frost$core$Bit) {$tmp655};
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block275; else goto block276;
block275:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp658 = (frost$core$Int) {17238517210779472848u};
return $tmp658;
block276:;
frost$core$Int $tmp659 = (frost$core$Int) {92u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp660 = $tmp14.value;
int64_t $tmp661 = $tmp659.value;
bool $tmp662 = $tmp660 == $tmp661;
frost$core$Bit $tmp663 = (frost$core$Bit) {$tmp662};
bool $tmp664 = $tmp663.value;
if ($tmp664) goto block278; else goto block279;
block278:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp665 = (frost$core$Int) {12012174028394924796u};
return $tmp665;
block279:;
frost$core$Int $tmp666 = (frost$core$Int) {93u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp667 = $tmp14.value;
int64_t $tmp668 = $tmp666.value;
bool $tmp669 = $tmp667 == $tmp668;
frost$core$Bit $tmp670 = (frost$core$Bit) {$tmp669};
bool $tmp671 = $tmp670.value;
if ($tmp671) goto block281; else goto block282;
block281:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp672 = (frost$core$Int) {6785830846010376744u};
return $tmp672;
block282:;
frost$core$Int $tmp673 = (frost$core$Int) {94u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp674 = $tmp14.value;
int64_t $tmp675 = $tmp673.value;
bool $tmp676 = $tmp674 == $tmp675;
frost$core$Bit $tmp677 = (frost$core$Bit) {$tmp676};
bool $tmp678 = $tmp677.value;
if ($tmp678) goto block284; else goto block285;
block284:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp679 = (frost$core$Int) {1559487663625828692u};
return $tmp679;
block285:;
frost$core$Int $tmp680 = (frost$core$Int) {95u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp681 = $tmp14.value;
int64_t $tmp682 = $tmp680.value;
bool $tmp683 = $tmp681 == $tmp682;
frost$core$Bit $tmp684 = (frost$core$Bit) {$tmp683};
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block287; else goto block288;
block287:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp686 = (frost$core$Int) {14779888554950832256u};
return $tmp686;
block288:;
frost$core$Int $tmp687 = (frost$core$Int) {96u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp688 = $tmp14.value;
int64_t $tmp689 = $tmp687.value;
bool $tmp690 = $tmp688 == $tmp689;
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block290; else goto block291;
block290:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp693 = (frost$core$Int) {9553545372566284204u};
return $tmp693;
block291:;
frost$core$Int $tmp694 = (frost$core$Int) {97u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp695 = $tmp14.value;
int64_t $tmp696 = $tmp694.value;
bool $tmp697 = $tmp695 == $tmp696;
frost$core$Bit $tmp698 = (frost$core$Bit) {$tmp697};
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block293; else goto block294;
block293:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp700 = (frost$core$Int) {4327202190181736152u};
return $tmp700;
block294:;
frost$core$Int $tmp701 = (frost$core$Int) {98u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp702 = $tmp14.value;
int64_t $tmp703 = $tmp701.value;
bool $tmp704 = $tmp702 == $tmp703;
frost$core$Bit $tmp705 = (frost$core$Bit) {$tmp704};
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block296; else goto block297;
block296:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp707 = (frost$core$Int) {17547603081506739716u};
return $tmp707;
block297:;
frost$core$Int $tmp708 = (frost$core$Int) {99u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp709 = $tmp14.value;
int64_t $tmp710 = $tmp708.value;
bool $tmp711 = $tmp709 == $tmp710;
frost$core$Bit $tmp712 = (frost$core$Bit) {$tmp711};
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block299; else goto block300;
block299:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp714 = (frost$core$Int) {12321259899122191664u};
return $tmp714;
block300:;
frost$core$Int $tmp715 = (frost$core$Int) {100u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp716 = $tmp14.value;
int64_t $tmp717 = $tmp715.value;
bool $tmp718 = $tmp716 == $tmp717;
frost$core$Bit $tmp719 = (frost$core$Bit) {$tmp718};
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block302; else goto block303;
block302:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp721 = (frost$core$Int) {7094916716737643612u};
return $tmp721;
block303:;
frost$core$Int $tmp722 = (frost$core$Int) {101u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp723 = $tmp14.value;
int64_t $tmp724 = $tmp722.value;
bool $tmp725 = $tmp723 == $tmp724;
frost$core$Bit $tmp726 = (frost$core$Bit) {$tmp725};
bool $tmp727 = $tmp726.value;
if ($tmp727) goto block305; else goto block306;
block305:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp728 = (frost$core$Int) {1868573534353095560u};
return $tmp728;
block306:;
frost$core$Int $tmp729 = (frost$core$Int) {102u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp730 = $tmp14.value;
int64_t $tmp731 = $tmp729.value;
bool $tmp732 = $tmp730 == $tmp731;
frost$core$Bit $tmp733 = (frost$core$Bit) {$tmp732};
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block308; else goto block309;
block308:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp735 = (frost$core$Int) {15088974425678099124u};
return $tmp735;
block309:;
frost$core$Int $tmp736 = (frost$core$Int) {103u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp737 = $tmp14.value;
int64_t $tmp738 = $tmp736.value;
bool $tmp739 = $tmp737 == $tmp738;
frost$core$Bit $tmp740 = (frost$core$Bit) {$tmp739};
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block311; else goto block312;
block311:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp742 = (frost$core$Int) {9862631243293551072u};
return $tmp742;
block312:;
frost$core$Int $tmp743 = (frost$core$Int) {104u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp744 = $tmp14.value;
int64_t $tmp745 = $tmp743.value;
bool $tmp746 = $tmp744 == $tmp745;
frost$core$Bit $tmp747 = (frost$core$Bit) {$tmp746};
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block314; else goto block315;
block314:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp749 = (frost$core$Int) {4636288060909003020u};
return $tmp749;
block315:;
frost$core$Int $tmp750 = (frost$core$Int) {105u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp751 = $tmp14.value;
int64_t $tmp752 = $tmp750.value;
bool $tmp753 = $tmp751 == $tmp752;
frost$core$Bit $tmp754 = (frost$core$Bit) {$tmp753};
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block317; else goto block318;
block317:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp756 = (frost$core$Int) {17856688952234006584u};
return $tmp756;
block318:;
frost$core$Int $tmp757 = (frost$core$Int) {106u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp758 = $tmp14.value;
int64_t $tmp759 = $tmp757.value;
bool $tmp760 = $tmp758 == $tmp759;
frost$core$Bit $tmp761 = (frost$core$Bit) {$tmp760};
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block320; else goto block321;
block320:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp763 = (frost$core$Int) {12630345769849458532u};
return $tmp763;
block321:;
frost$core$Int $tmp764 = (frost$core$Int) {107u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp765 = $tmp14.value;
int64_t $tmp766 = $tmp764.value;
bool $tmp767 = $tmp765 == $tmp766;
frost$core$Bit $tmp768 = (frost$core$Bit) {$tmp767};
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block323; else goto block324;
block323:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp770 = (frost$core$Int) {7404002587464910480u};
return $tmp770;
block324:;
frost$core$Int $tmp771 = (frost$core$Int) {108u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp772 = $tmp14.value;
int64_t $tmp773 = $tmp771.value;
bool $tmp774 = $tmp772 == $tmp773;
frost$core$Bit $tmp775 = (frost$core$Bit) {$tmp774};
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block326; else goto block327;
block326:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp777 = (frost$core$Int) {2177659405080362428u};
return $tmp777;
block327:;
frost$core$Int $tmp778 = (frost$core$Int) {109u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp779 = $tmp14.value;
int64_t $tmp780 = $tmp778.value;
bool $tmp781 = $tmp779 == $tmp780;
frost$core$Bit $tmp782 = (frost$core$Bit) {$tmp781};
bool $tmp783 = $tmp782.value;
if ($tmp783) goto block329; else goto block330;
block329:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp784 = (frost$core$Int) {15398060296405365992u};
return $tmp784;
block330:;
frost$core$Int $tmp785 = (frost$core$Int) {110u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp786 = $tmp14.value;
int64_t $tmp787 = $tmp785.value;
bool $tmp788 = $tmp786 == $tmp787;
frost$core$Bit $tmp789 = (frost$core$Bit) {$tmp788};
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block332; else goto block333;
block332:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp791 = (frost$core$Int) {10171717114020817940u};
return $tmp791;
block333:;
frost$core$Int $tmp792 = (frost$core$Int) {111u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp793 = $tmp14.value;
int64_t $tmp794 = $tmp792.value;
bool $tmp795 = $tmp793 == $tmp794;
frost$core$Bit $tmp796 = (frost$core$Bit) {$tmp795};
bool $tmp797 = $tmp796.value;
if ($tmp797) goto block335; else goto block336;
block335:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp798 = (frost$core$Int) {4945373931636269888u};
return $tmp798;
block336:;
frost$core$Int $tmp799 = (frost$core$Int) {112u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp800 = $tmp14.value;
int64_t $tmp801 = $tmp799.value;
bool $tmp802 = $tmp800 == $tmp801;
frost$core$Bit $tmp803 = (frost$core$Bit) {$tmp802};
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block338; else goto block339;
block338:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp805 = (frost$core$Int) {18165774822961273452u};
return $tmp805;
block339:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp806 = (frost$core$Int) {11u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s807, $tmp806);
abort(); // unreachable
block1:;
goto block341;
block341:;

}
frost$core$String* org$frostlang$frostc$parser$Token$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$parser$Token$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp808 = param0.$rawValue;
frost$core$Int $tmp809 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp810 = $tmp808.value;
int64_t $tmp811 = $tmp809.value;
bool $tmp812 = $tmp810 == $tmp811;
frost$core$Bit $tmp813 = (frost$core$Bit) {$tmp812};
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s815));
return &$s816;
block3:;
frost$core$Int $tmp817 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp818 = $tmp808.value;
int64_t $tmp819 = $tmp817.value;
bool $tmp820 = $tmp818 == $tmp819;
frost$core$Bit $tmp821 = (frost$core$Bit) {$tmp820};
bool $tmp822 = $tmp821.value;
if ($tmp822) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s823));
return &$s824;
block6:;
frost$core$Int $tmp825 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp826 = $tmp808.value;
int64_t $tmp827 = $tmp825.value;
bool $tmp828 = $tmp826 == $tmp827;
frost$core$Bit $tmp829 = (frost$core$Bit) {$tmp828};
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s831));
return &$s832;
block9:;
frost$core$Int $tmp833 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp834 = $tmp808.value;
int64_t $tmp835 = $tmp833.value;
bool $tmp836 = $tmp834 == $tmp835;
frost$core$Bit $tmp837 = (frost$core$Bit) {$tmp836};
bool $tmp838 = $tmp837.value;
if ($tmp838) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s839));
return &$s840;
block12:;
frost$core$Int $tmp841 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp842 = $tmp808.value;
int64_t $tmp843 = $tmp841.value;
bool $tmp844 = $tmp842 == $tmp843;
frost$core$Bit $tmp845 = (frost$core$Bit) {$tmp844};
bool $tmp846 = $tmp845.value;
if ($tmp846) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s847));
return &$s848;
block15:;
frost$core$Int $tmp849 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp850 = $tmp808.value;
int64_t $tmp851 = $tmp849.value;
bool $tmp852 = $tmp850 == $tmp851;
frost$core$Bit $tmp853 = (frost$core$Bit) {$tmp852};
bool $tmp854 = $tmp853.value;
if ($tmp854) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s855));
return &$s856;
block18:;
frost$core$Int $tmp857 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp858 = $tmp808.value;
int64_t $tmp859 = $tmp857.value;
bool $tmp860 = $tmp858 == $tmp859;
frost$core$Bit $tmp861 = (frost$core$Bit) {$tmp860};
bool $tmp862 = $tmp861.value;
if ($tmp862) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s863));
return &$s864;
block21:;
frost$core$Int $tmp865 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp866 = $tmp808.value;
int64_t $tmp867 = $tmp865.value;
bool $tmp868 = $tmp866 == $tmp867;
frost$core$Bit $tmp869 = (frost$core$Bit) {$tmp868};
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s871));
return &$s872;
block24:;
frost$core$Int $tmp873 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp874 = $tmp808.value;
int64_t $tmp875 = $tmp873.value;
bool $tmp876 = $tmp874 == $tmp875;
frost$core$Bit $tmp877 = (frost$core$Bit) {$tmp876};
bool $tmp878 = $tmp877.value;
if ($tmp878) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s879));
return &$s880;
block27:;
frost$core$Int $tmp881 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp882 = $tmp808.value;
int64_t $tmp883 = $tmp881.value;
bool $tmp884 = $tmp882 == $tmp883;
frost$core$Bit $tmp885 = (frost$core$Bit) {$tmp884};
bool $tmp886 = $tmp885.value;
if ($tmp886) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s887));
return &$s888;
block30:;
frost$core$Int $tmp889 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp890 = $tmp808.value;
int64_t $tmp891 = $tmp889.value;
bool $tmp892 = $tmp890 == $tmp891;
frost$core$Bit $tmp893 = (frost$core$Bit) {$tmp892};
bool $tmp894 = $tmp893.value;
if ($tmp894) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s895));
return &$s896;
block33:;
frost$core$Int $tmp897 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp898 = $tmp808.value;
int64_t $tmp899 = $tmp897.value;
bool $tmp900 = $tmp898 == $tmp899;
frost$core$Bit $tmp901 = (frost$core$Bit) {$tmp900};
bool $tmp902 = $tmp901.value;
if ($tmp902) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s903));
return &$s904;
block36:;
frost$core$Int $tmp905 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp906 = $tmp808.value;
int64_t $tmp907 = $tmp905.value;
bool $tmp908 = $tmp906 == $tmp907;
frost$core$Bit $tmp909 = (frost$core$Bit) {$tmp908};
bool $tmp910 = $tmp909.value;
if ($tmp910) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s911));
return &$s912;
block39:;
frost$core$Int $tmp913 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp914 = $tmp808.value;
int64_t $tmp915 = $tmp913.value;
bool $tmp916 = $tmp914 == $tmp915;
frost$core$Bit $tmp917 = (frost$core$Bit) {$tmp916};
bool $tmp918 = $tmp917.value;
if ($tmp918) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s919));
return &$s920;
block42:;
frost$core$Int $tmp921 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp922 = $tmp808.value;
int64_t $tmp923 = $tmp921.value;
bool $tmp924 = $tmp922 == $tmp923;
frost$core$Bit $tmp925 = (frost$core$Bit) {$tmp924};
bool $tmp926 = $tmp925.value;
if ($tmp926) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s927));
return &$s928;
block45:;
frost$core$Int $tmp929 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp930 = $tmp808.value;
int64_t $tmp931 = $tmp929.value;
bool $tmp932 = $tmp930 == $tmp931;
frost$core$Bit $tmp933 = (frost$core$Bit) {$tmp932};
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s935));
return &$s936;
block48:;
frost$core$Int $tmp937 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp938 = $tmp808.value;
int64_t $tmp939 = $tmp937.value;
bool $tmp940 = $tmp938 == $tmp939;
frost$core$Bit $tmp941 = (frost$core$Bit) {$tmp940};
bool $tmp942 = $tmp941.value;
if ($tmp942) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s943));
return &$s944;
block51:;
frost$core$Int $tmp945 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp946 = $tmp808.value;
int64_t $tmp947 = $tmp945.value;
bool $tmp948 = $tmp946 == $tmp947;
frost$core$Bit $tmp949 = (frost$core$Bit) {$tmp948};
bool $tmp950 = $tmp949.value;
if ($tmp950) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s951));
return &$s952;
block54:;
frost$core$Int $tmp953 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp954 = $tmp808.value;
int64_t $tmp955 = $tmp953.value;
bool $tmp956 = $tmp954 == $tmp955;
frost$core$Bit $tmp957 = (frost$core$Bit) {$tmp956};
bool $tmp958 = $tmp957.value;
if ($tmp958) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s959));
return &$s960;
block57:;
frost$core$Int $tmp961 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp962 = $tmp808.value;
int64_t $tmp963 = $tmp961.value;
bool $tmp964 = $tmp962 == $tmp963;
frost$core$Bit $tmp965 = (frost$core$Bit) {$tmp964};
bool $tmp966 = $tmp965.value;
if ($tmp966) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s967));
return &$s968;
block60:;
frost$core$Int $tmp969 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp970 = $tmp808.value;
int64_t $tmp971 = $tmp969.value;
bool $tmp972 = $tmp970 == $tmp971;
frost$core$Bit $tmp973 = (frost$core$Bit) {$tmp972};
bool $tmp974 = $tmp973.value;
if ($tmp974) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s975));
return &$s976;
block63:;
frost$core$Int $tmp977 = (frost$core$Int) {21u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp978 = $tmp808.value;
int64_t $tmp979 = $tmp977.value;
bool $tmp980 = $tmp978 == $tmp979;
frost$core$Bit $tmp981 = (frost$core$Bit) {$tmp980};
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s983));
return &$s984;
block66:;
frost$core$Int $tmp985 = (frost$core$Int) {22u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp986 = $tmp808.value;
int64_t $tmp987 = $tmp985.value;
bool $tmp988 = $tmp986 == $tmp987;
frost$core$Bit $tmp989 = (frost$core$Bit) {$tmp988};
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s991));
return &$s992;
block69:;
frost$core$Int $tmp993 = (frost$core$Int) {23u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp994 = $tmp808.value;
int64_t $tmp995 = $tmp993.value;
bool $tmp996 = $tmp994 == $tmp995;
frost$core$Bit $tmp997 = (frost$core$Bit) {$tmp996};
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s999));
return &$s1000;
block72:;
frost$core$Int $tmp1001 = (frost$core$Int) {24u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1002 = $tmp808.value;
int64_t $tmp1003 = $tmp1001.value;
bool $tmp1004 = $tmp1002 == $tmp1003;
frost$core$Bit $tmp1005 = (frost$core$Bit) {$tmp1004};
bool $tmp1006 = $tmp1005.value;
if ($tmp1006) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1007));
return &$s1008;
block75:;
frost$core$Int $tmp1009 = (frost$core$Int) {25u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1010 = $tmp808.value;
int64_t $tmp1011 = $tmp1009.value;
bool $tmp1012 = $tmp1010 == $tmp1011;
frost$core$Bit $tmp1013 = (frost$core$Bit) {$tmp1012};
bool $tmp1014 = $tmp1013.value;
if ($tmp1014) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1015));
return &$s1016;
block78:;
frost$core$Int $tmp1017 = (frost$core$Int) {26u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1018 = $tmp808.value;
int64_t $tmp1019 = $tmp1017.value;
bool $tmp1020 = $tmp1018 == $tmp1019;
frost$core$Bit $tmp1021 = (frost$core$Bit) {$tmp1020};
bool $tmp1022 = $tmp1021.value;
if ($tmp1022) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1023));
return &$s1024;
block81:;
frost$core$Int $tmp1025 = (frost$core$Int) {27u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1026 = $tmp808.value;
int64_t $tmp1027 = $tmp1025.value;
bool $tmp1028 = $tmp1026 == $tmp1027;
frost$core$Bit $tmp1029 = (frost$core$Bit) {$tmp1028};
bool $tmp1030 = $tmp1029.value;
if ($tmp1030) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1031));
return &$s1032;
block84:;
frost$core$Int $tmp1033 = (frost$core$Int) {28u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1034 = $tmp808.value;
int64_t $tmp1035 = $tmp1033.value;
bool $tmp1036 = $tmp1034 == $tmp1035;
frost$core$Bit $tmp1037 = (frost$core$Bit) {$tmp1036};
bool $tmp1038 = $tmp1037.value;
if ($tmp1038) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1039));
return &$s1040;
block87:;
frost$core$Int $tmp1041 = (frost$core$Int) {29u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1042 = $tmp808.value;
int64_t $tmp1043 = $tmp1041.value;
bool $tmp1044 = $tmp1042 == $tmp1043;
frost$core$Bit $tmp1045 = (frost$core$Bit) {$tmp1044};
bool $tmp1046 = $tmp1045.value;
if ($tmp1046) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1047));
return &$s1048;
block90:;
frost$core$Int $tmp1049 = (frost$core$Int) {30u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1050 = $tmp808.value;
int64_t $tmp1051 = $tmp1049.value;
bool $tmp1052 = $tmp1050 == $tmp1051;
frost$core$Bit $tmp1053 = (frost$core$Bit) {$tmp1052};
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1055));
return &$s1056;
block93:;
frost$core$Int $tmp1057 = (frost$core$Int) {31u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1058 = $tmp808.value;
int64_t $tmp1059 = $tmp1057.value;
bool $tmp1060 = $tmp1058 == $tmp1059;
frost$core$Bit $tmp1061 = (frost$core$Bit) {$tmp1060};
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1063));
return &$s1064;
block96:;
frost$core$Int $tmp1065 = (frost$core$Int) {32u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1066 = $tmp808.value;
int64_t $tmp1067 = $tmp1065.value;
bool $tmp1068 = $tmp1066 == $tmp1067;
frost$core$Bit $tmp1069 = (frost$core$Bit) {$tmp1068};
bool $tmp1070 = $tmp1069.value;
if ($tmp1070) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1071));
return &$s1072;
block99:;
frost$core$Int $tmp1073 = (frost$core$Int) {33u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1074 = $tmp808.value;
int64_t $tmp1075 = $tmp1073.value;
bool $tmp1076 = $tmp1074 == $tmp1075;
frost$core$Bit $tmp1077 = (frost$core$Bit) {$tmp1076};
bool $tmp1078 = $tmp1077.value;
if ($tmp1078) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1079));
return &$s1080;
block102:;
frost$core$Int $tmp1081 = (frost$core$Int) {34u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1082 = $tmp808.value;
int64_t $tmp1083 = $tmp1081.value;
bool $tmp1084 = $tmp1082 == $tmp1083;
frost$core$Bit $tmp1085 = (frost$core$Bit) {$tmp1084};
bool $tmp1086 = $tmp1085.value;
if ($tmp1086) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1087));
return &$s1088;
block105:;
frost$core$Int $tmp1089 = (frost$core$Int) {35u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1090 = $tmp808.value;
int64_t $tmp1091 = $tmp1089.value;
bool $tmp1092 = $tmp1090 == $tmp1091;
frost$core$Bit $tmp1093 = (frost$core$Bit) {$tmp1092};
bool $tmp1094 = $tmp1093.value;
if ($tmp1094) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1095));
return &$s1096;
block108:;
frost$core$Int $tmp1097 = (frost$core$Int) {36u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1098 = $tmp808.value;
int64_t $tmp1099 = $tmp1097.value;
bool $tmp1100 = $tmp1098 == $tmp1099;
frost$core$Bit $tmp1101 = (frost$core$Bit) {$tmp1100};
bool $tmp1102 = $tmp1101.value;
if ($tmp1102) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1103));
return &$s1104;
block111:;
frost$core$Int $tmp1105 = (frost$core$Int) {37u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1106 = $tmp808.value;
int64_t $tmp1107 = $tmp1105.value;
bool $tmp1108 = $tmp1106 == $tmp1107;
frost$core$Bit $tmp1109 = (frost$core$Bit) {$tmp1108};
bool $tmp1110 = $tmp1109.value;
if ($tmp1110) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1111));
return &$s1112;
block114:;
frost$core$Int $tmp1113 = (frost$core$Int) {38u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1114 = $tmp808.value;
int64_t $tmp1115 = $tmp1113.value;
bool $tmp1116 = $tmp1114 == $tmp1115;
frost$core$Bit $tmp1117 = (frost$core$Bit) {$tmp1116};
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1119));
return &$s1120;
block117:;
frost$core$Int $tmp1121 = (frost$core$Int) {39u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1122 = $tmp808.value;
int64_t $tmp1123 = $tmp1121.value;
bool $tmp1124 = $tmp1122 == $tmp1123;
frost$core$Bit $tmp1125 = (frost$core$Bit) {$tmp1124};
bool $tmp1126 = $tmp1125.value;
if ($tmp1126) goto block119; else goto block120;
block119:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1127));
return &$s1128;
block120:;
frost$core$Int $tmp1129 = (frost$core$Int) {40u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1130 = $tmp808.value;
int64_t $tmp1131 = $tmp1129.value;
bool $tmp1132 = $tmp1130 == $tmp1131;
frost$core$Bit $tmp1133 = (frost$core$Bit) {$tmp1132};
bool $tmp1134 = $tmp1133.value;
if ($tmp1134) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1135));
return &$s1136;
block123:;
frost$core$Int $tmp1137 = (frost$core$Int) {41u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1138 = $tmp808.value;
int64_t $tmp1139 = $tmp1137.value;
bool $tmp1140 = $tmp1138 == $tmp1139;
frost$core$Bit $tmp1141 = (frost$core$Bit) {$tmp1140};
bool $tmp1142 = $tmp1141.value;
if ($tmp1142) goto block125; else goto block126;
block125:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1143));
return &$s1144;
block126:;
frost$core$Int $tmp1145 = (frost$core$Int) {42u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1146 = $tmp808.value;
int64_t $tmp1147 = $tmp1145.value;
bool $tmp1148 = $tmp1146 == $tmp1147;
frost$core$Bit $tmp1149 = (frost$core$Bit) {$tmp1148};
bool $tmp1150 = $tmp1149.value;
if ($tmp1150) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1151));
return &$s1152;
block129:;
frost$core$Int $tmp1153 = (frost$core$Int) {43u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1154 = $tmp808.value;
int64_t $tmp1155 = $tmp1153.value;
bool $tmp1156 = $tmp1154 == $tmp1155;
frost$core$Bit $tmp1157 = (frost$core$Bit) {$tmp1156};
bool $tmp1158 = $tmp1157.value;
if ($tmp1158) goto block131; else goto block132;
block131:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1159));
return &$s1160;
block132:;
frost$core$Int $tmp1161 = (frost$core$Int) {44u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1162 = $tmp808.value;
int64_t $tmp1163 = $tmp1161.value;
bool $tmp1164 = $tmp1162 == $tmp1163;
frost$core$Bit $tmp1165 = (frost$core$Bit) {$tmp1164};
bool $tmp1166 = $tmp1165.value;
if ($tmp1166) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1167));
return &$s1168;
block135:;
frost$core$Int $tmp1169 = (frost$core$Int) {45u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1170 = $tmp808.value;
int64_t $tmp1171 = $tmp1169.value;
bool $tmp1172 = $tmp1170 == $tmp1171;
frost$core$Bit $tmp1173 = (frost$core$Bit) {$tmp1172};
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block137; else goto block138;
block137:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1175));
return &$s1176;
block138:;
frost$core$Int $tmp1177 = (frost$core$Int) {46u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1178 = $tmp808.value;
int64_t $tmp1179 = $tmp1177.value;
bool $tmp1180 = $tmp1178 == $tmp1179;
frost$core$Bit $tmp1181 = (frost$core$Bit) {$tmp1180};
bool $tmp1182 = $tmp1181.value;
if ($tmp1182) goto block140; else goto block141;
block140:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1183));
return &$s1184;
block141:;
frost$core$Int $tmp1185 = (frost$core$Int) {47u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1186 = $tmp808.value;
int64_t $tmp1187 = $tmp1185.value;
bool $tmp1188 = $tmp1186 == $tmp1187;
frost$core$Bit $tmp1189 = (frost$core$Bit) {$tmp1188};
bool $tmp1190 = $tmp1189.value;
if ($tmp1190) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1191));
return &$s1192;
block144:;
frost$core$Int $tmp1193 = (frost$core$Int) {48u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1194 = $tmp808.value;
int64_t $tmp1195 = $tmp1193.value;
bool $tmp1196 = $tmp1194 == $tmp1195;
frost$core$Bit $tmp1197 = (frost$core$Bit) {$tmp1196};
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1199));
return &$s1200;
block147:;
frost$core$Int $tmp1201 = (frost$core$Int) {49u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1202 = $tmp808.value;
int64_t $tmp1203 = $tmp1201.value;
bool $tmp1204 = $tmp1202 == $tmp1203;
frost$core$Bit $tmp1205 = (frost$core$Bit) {$tmp1204};
bool $tmp1206 = $tmp1205.value;
if ($tmp1206) goto block149; else goto block150;
block149:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1207));
return &$s1208;
block150:;
frost$core$Int $tmp1209 = (frost$core$Int) {50u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1210 = $tmp808.value;
int64_t $tmp1211 = $tmp1209.value;
bool $tmp1212 = $tmp1210 == $tmp1211;
frost$core$Bit $tmp1213 = (frost$core$Bit) {$tmp1212};
bool $tmp1214 = $tmp1213.value;
if ($tmp1214) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1215));
return &$s1216;
block153:;
frost$core$Int $tmp1217 = (frost$core$Int) {51u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1218 = $tmp808.value;
int64_t $tmp1219 = $tmp1217.value;
bool $tmp1220 = $tmp1218 == $tmp1219;
frost$core$Bit $tmp1221 = (frost$core$Bit) {$tmp1220};
bool $tmp1222 = $tmp1221.value;
if ($tmp1222) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1223));
return &$s1224;
block156:;
frost$core$Int $tmp1225 = (frost$core$Int) {52u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1226 = $tmp808.value;
int64_t $tmp1227 = $tmp1225.value;
bool $tmp1228 = $tmp1226 == $tmp1227;
frost$core$Bit $tmp1229 = (frost$core$Bit) {$tmp1228};
bool $tmp1230 = $tmp1229.value;
if ($tmp1230) goto block158; else goto block159;
block158:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1231));
return &$s1232;
block159:;
frost$core$Int $tmp1233 = (frost$core$Int) {53u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1234 = $tmp808.value;
int64_t $tmp1235 = $tmp1233.value;
bool $tmp1236 = $tmp1234 == $tmp1235;
frost$core$Bit $tmp1237 = (frost$core$Bit) {$tmp1236};
bool $tmp1238 = $tmp1237.value;
if ($tmp1238) goto block161; else goto block162;
block161:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1239));
return &$s1240;
block162:;
frost$core$Int $tmp1241 = (frost$core$Int) {54u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1242 = $tmp808.value;
int64_t $tmp1243 = $tmp1241.value;
bool $tmp1244 = $tmp1242 == $tmp1243;
frost$core$Bit $tmp1245 = (frost$core$Bit) {$tmp1244};
bool $tmp1246 = $tmp1245.value;
if ($tmp1246) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1247));
return &$s1248;
block165:;
frost$core$Int $tmp1249 = (frost$core$Int) {55u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1250 = $tmp808.value;
int64_t $tmp1251 = $tmp1249.value;
bool $tmp1252 = $tmp1250 == $tmp1251;
frost$core$Bit $tmp1253 = (frost$core$Bit) {$tmp1252};
bool $tmp1254 = $tmp1253.value;
if ($tmp1254) goto block167; else goto block168;
block167:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1255));
return &$s1256;
block168:;
frost$core$Int $tmp1257 = (frost$core$Int) {56u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1258 = $tmp808.value;
int64_t $tmp1259 = $tmp1257.value;
bool $tmp1260 = $tmp1258 == $tmp1259;
frost$core$Bit $tmp1261 = (frost$core$Bit) {$tmp1260};
bool $tmp1262 = $tmp1261.value;
if ($tmp1262) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1263));
return &$s1264;
block171:;
frost$core$Int $tmp1265 = (frost$core$Int) {57u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1266 = $tmp808.value;
int64_t $tmp1267 = $tmp1265.value;
bool $tmp1268 = $tmp1266 == $tmp1267;
frost$core$Bit $tmp1269 = (frost$core$Bit) {$tmp1268};
bool $tmp1270 = $tmp1269.value;
if ($tmp1270) goto block173; else goto block174;
block173:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1271));
return &$s1272;
block174:;
frost$core$Int $tmp1273 = (frost$core$Int) {58u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1274 = $tmp808.value;
int64_t $tmp1275 = $tmp1273.value;
bool $tmp1276 = $tmp1274 == $tmp1275;
frost$core$Bit $tmp1277 = (frost$core$Bit) {$tmp1276};
bool $tmp1278 = $tmp1277.value;
if ($tmp1278) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1279));
return &$s1280;
block177:;
frost$core$Int $tmp1281 = (frost$core$Int) {59u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1282 = $tmp808.value;
int64_t $tmp1283 = $tmp1281.value;
bool $tmp1284 = $tmp1282 == $tmp1283;
frost$core$Bit $tmp1285 = (frost$core$Bit) {$tmp1284};
bool $tmp1286 = $tmp1285.value;
if ($tmp1286) goto block179; else goto block180;
block179:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1287));
return &$s1288;
block180:;
frost$core$Int $tmp1289 = (frost$core$Int) {60u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1290 = $tmp808.value;
int64_t $tmp1291 = $tmp1289.value;
bool $tmp1292 = $tmp1290 == $tmp1291;
frost$core$Bit $tmp1293 = (frost$core$Bit) {$tmp1292};
bool $tmp1294 = $tmp1293.value;
if ($tmp1294) goto block182; else goto block183;
block182:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1295));
return &$s1296;
block183:;
frost$core$Int $tmp1297 = (frost$core$Int) {61u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1298 = $tmp808.value;
int64_t $tmp1299 = $tmp1297.value;
bool $tmp1300 = $tmp1298 == $tmp1299;
frost$core$Bit $tmp1301 = (frost$core$Bit) {$tmp1300};
bool $tmp1302 = $tmp1301.value;
if ($tmp1302) goto block185; else goto block186;
block185:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1303));
return &$s1304;
block186:;
frost$core$Int $tmp1305 = (frost$core$Int) {62u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1306 = $tmp808.value;
int64_t $tmp1307 = $tmp1305.value;
bool $tmp1308 = $tmp1306 == $tmp1307;
frost$core$Bit $tmp1309 = (frost$core$Bit) {$tmp1308};
bool $tmp1310 = $tmp1309.value;
if ($tmp1310) goto block188; else goto block189;
block188:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1311));
return &$s1312;
block189:;
frost$core$Int $tmp1313 = (frost$core$Int) {63u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1314 = $tmp808.value;
int64_t $tmp1315 = $tmp1313.value;
bool $tmp1316 = $tmp1314 == $tmp1315;
frost$core$Bit $tmp1317 = (frost$core$Bit) {$tmp1316};
bool $tmp1318 = $tmp1317.value;
if ($tmp1318) goto block191; else goto block192;
block191:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1319));
return &$s1320;
block192:;
frost$core$Int $tmp1321 = (frost$core$Int) {64u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1322 = $tmp808.value;
int64_t $tmp1323 = $tmp1321.value;
bool $tmp1324 = $tmp1322 == $tmp1323;
frost$core$Bit $tmp1325 = (frost$core$Bit) {$tmp1324};
bool $tmp1326 = $tmp1325.value;
if ($tmp1326) goto block194; else goto block195;
block194:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1327));
return &$s1328;
block195:;
frost$core$Int $tmp1329 = (frost$core$Int) {65u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1330 = $tmp808.value;
int64_t $tmp1331 = $tmp1329.value;
bool $tmp1332 = $tmp1330 == $tmp1331;
frost$core$Bit $tmp1333 = (frost$core$Bit) {$tmp1332};
bool $tmp1334 = $tmp1333.value;
if ($tmp1334) goto block197; else goto block198;
block197:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1335));
return &$s1336;
block198:;
frost$core$Int $tmp1337 = (frost$core$Int) {66u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1338 = $tmp808.value;
int64_t $tmp1339 = $tmp1337.value;
bool $tmp1340 = $tmp1338 == $tmp1339;
frost$core$Bit $tmp1341 = (frost$core$Bit) {$tmp1340};
bool $tmp1342 = $tmp1341.value;
if ($tmp1342) goto block200; else goto block201;
block200:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1343));
return &$s1344;
block201:;
frost$core$Int $tmp1345 = (frost$core$Int) {67u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1346 = $tmp808.value;
int64_t $tmp1347 = $tmp1345.value;
bool $tmp1348 = $tmp1346 == $tmp1347;
frost$core$Bit $tmp1349 = (frost$core$Bit) {$tmp1348};
bool $tmp1350 = $tmp1349.value;
if ($tmp1350) goto block203; else goto block204;
block203:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1351));
return &$s1352;
block204:;
frost$core$Int $tmp1353 = (frost$core$Int) {68u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1354 = $tmp808.value;
int64_t $tmp1355 = $tmp1353.value;
bool $tmp1356 = $tmp1354 == $tmp1355;
frost$core$Bit $tmp1357 = (frost$core$Bit) {$tmp1356};
bool $tmp1358 = $tmp1357.value;
if ($tmp1358) goto block206; else goto block207;
block206:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1359));
return &$s1360;
block207:;
frost$core$Int $tmp1361 = (frost$core$Int) {69u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1362 = $tmp808.value;
int64_t $tmp1363 = $tmp1361.value;
bool $tmp1364 = $tmp1362 == $tmp1363;
frost$core$Bit $tmp1365 = (frost$core$Bit) {$tmp1364};
bool $tmp1366 = $tmp1365.value;
if ($tmp1366) goto block209; else goto block210;
block209:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1367));
return &$s1368;
block210:;
frost$core$Int $tmp1369 = (frost$core$Int) {70u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1370 = $tmp808.value;
int64_t $tmp1371 = $tmp1369.value;
bool $tmp1372 = $tmp1370 == $tmp1371;
frost$core$Bit $tmp1373 = (frost$core$Bit) {$tmp1372};
bool $tmp1374 = $tmp1373.value;
if ($tmp1374) goto block212; else goto block213;
block212:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1375));
return &$s1376;
block213:;
frost$core$Int $tmp1377 = (frost$core$Int) {71u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1378 = $tmp808.value;
int64_t $tmp1379 = $tmp1377.value;
bool $tmp1380 = $tmp1378 == $tmp1379;
frost$core$Bit $tmp1381 = (frost$core$Bit) {$tmp1380};
bool $tmp1382 = $tmp1381.value;
if ($tmp1382) goto block215; else goto block216;
block215:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1383));
return &$s1384;
block216:;
frost$core$Int $tmp1385 = (frost$core$Int) {72u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1386 = $tmp808.value;
int64_t $tmp1387 = $tmp1385.value;
bool $tmp1388 = $tmp1386 == $tmp1387;
frost$core$Bit $tmp1389 = (frost$core$Bit) {$tmp1388};
bool $tmp1390 = $tmp1389.value;
if ($tmp1390) goto block218; else goto block219;
block218:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1391));
return &$s1392;
block219:;
frost$core$Int $tmp1393 = (frost$core$Int) {73u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1394 = $tmp808.value;
int64_t $tmp1395 = $tmp1393.value;
bool $tmp1396 = $tmp1394 == $tmp1395;
frost$core$Bit $tmp1397 = (frost$core$Bit) {$tmp1396};
bool $tmp1398 = $tmp1397.value;
if ($tmp1398) goto block221; else goto block222;
block221:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1399));
return &$s1400;
block222:;
frost$core$Int $tmp1401 = (frost$core$Int) {74u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1402 = $tmp808.value;
int64_t $tmp1403 = $tmp1401.value;
bool $tmp1404 = $tmp1402 == $tmp1403;
frost$core$Bit $tmp1405 = (frost$core$Bit) {$tmp1404};
bool $tmp1406 = $tmp1405.value;
if ($tmp1406) goto block224; else goto block225;
block224:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1407));
return &$s1408;
block225:;
frost$core$Int $tmp1409 = (frost$core$Int) {75u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1410 = $tmp808.value;
int64_t $tmp1411 = $tmp1409.value;
bool $tmp1412 = $tmp1410 == $tmp1411;
frost$core$Bit $tmp1413 = (frost$core$Bit) {$tmp1412};
bool $tmp1414 = $tmp1413.value;
if ($tmp1414) goto block227; else goto block228;
block227:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1415));
return &$s1416;
block228:;
frost$core$Int $tmp1417 = (frost$core$Int) {76u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1418 = $tmp808.value;
int64_t $tmp1419 = $tmp1417.value;
bool $tmp1420 = $tmp1418 == $tmp1419;
frost$core$Bit $tmp1421 = (frost$core$Bit) {$tmp1420};
bool $tmp1422 = $tmp1421.value;
if ($tmp1422) goto block230; else goto block231;
block230:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1423));
return &$s1424;
block231:;
frost$core$Int $tmp1425 = (frost$core$Int) {77u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1426 = $tmp808.value;
int64_t $tmp1427 = $tmp1425.value;
bool $tmp1428 = $tmp1426 == $tmp1427;
frost$core$Bit $tmp1429 = (frost$core$Bit) {$tmp1428};
bool $tmp1430 = $tmp1429.value;
if ($tmp1430) goto block233; else goto block234;
block233:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1431));
return &$s1432;
block234:;
frost$core$Int $tmp1433 = (frost$core$Int) {78u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1434 = $tmp808.value;
int64_t $tmp1435 = $tmp1433.value;
bool $tmp1436 = $tmp1434 == $tmp1435;
frost$core$Bit $tmp1437 = (frost$core$Bit) {$tmp1436};
bool $tmp1438 = $tmp1437.value;
if ($tmp1438) goto block236; else goto block237;
block236:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1439));
return &$s1440;
block237:;
frost$core$Int $tmp1441 = (frost$core$Int) {79u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1442 = $tmp808.value;
int64_t $tmp1443 = $tmp1441.value;
bool $tmp1444 = $tmp1442 == $tmp1443;
frost$core$Bit $tmp1445 = (frost$core$Bit) {$tmp1444};
bool $tmp1446 = $tmp1445.value;
if ($tmp1446) goto block239; else goto block240;
block239:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1447));
return &$s1448;
block240:;
frost$core$Int $tmp1449 = (frost$core$Int) {80u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1450 = $tmp808.value;
int64_t $tmp1451 = $tmp1449.value;
bool $tmp1452 = $tmp1450 == $tmp1451;
frost$core$Bit $tmp1453 = (frost$core$Bit) {$tmp1452};
bool $tmp1454 = $tmp1453.value;
if ($tmp1454) goto block242; else goto block243;
block242:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1455));
return &$s1456;
block243:;
frost$core$Int $tmp1457 = (frost$core$Int) {81u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1458 = $tmp808.value;
int64_t $tmp1459 = $tmp1457.value;
bool $tmp1460 = $tmp1458 == $tmp1459;
frost$core$Bit $tmp1461 = (frost$core$Bit) {$tmp1460};
bool $tmp1462 = $tmp1461.value;
if ($tmp1462) goto block245; else goto block246;
block245:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1463));
return &$s1464;
block246:;
frost$core$Int $tmp1465 = (frost$core$Int) {82u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1466 = $tmp808.value;
int64_t $tmp1467 = $tmp1465.value;
bool $tmp1468 = $tmp1466 == $tmp1467;
frost$core$Bit $tmp1469 = (frost$core$Bit) {$tmp1468};
bool $tmp1470 = $tmp1469.value;
if ($tmp1470) goto block248; else goto block249;
block248:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1471));
return &$s1472;
block249:;
frost$core$Int $tmp1473 = (frost$core$Int) {83u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1474 = $tmp808.value;
int64_t $tmp1475 = $tmp1473.value;
bool $tmp1476 = $tmp1474 == $tmp1475;
frost$core$Bit $tmp1477 = (frost$core$Bit) {$tmp1476};
bool $tmp1478 = $tmp1477.value;
if ($tmp1478) goto block251; else goto block252;
block251:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1479));
return &$s1480;
block252:;
frost$core$Int $tmp1481 = (frost$core$Int) {84u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1482 = $tmp808.value;
int64_t $tmp1483 = $tmp1481.value;
bool $tmp1484 = $tmp1482 == $tmp1483;
frost$core$Bit $tmp1485 = (frost$core$Bit) {$tmp1484};
bool $tmp1486 = $tmp1485.value;
if ($tmp1486) goto block254; else goto block255;
block254:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1487));
return &$s1488;
block255:;
frost$core$Int $tmp1489 = (frost$core$Int) {85u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1490 = $tmp808.value;
int64_t $tmp1491 = $tmp1489.value;
bool $tmp1492 = $tmp1490 == $tmp1491;
frost$core$Bit $tmp1493 = (frost$core$Bit) {$tmp1492};
bool $tmp1494 = $tmp1493.value;
if ($tmp1494) goto block257; else goto block258;
block257:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1495));
return &$s1496;
block258:;
frost$core$Int $tmp1497 = (frost$core$Int) {86u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1498 = $tmp808.value;
int64_t $tmp1499 = $tmp1497.value;
bool $tmp1500 = $tmp1498 == $tmp1499;
frost$core$Bit $tmp1501 = (frost$core$Bit) {$tmp1500};
bool $tmp1502 = $tmp1501.value;
if ($tmp1502) goto block260; else goto block261;
block260:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1503));
return &$s1504;
block261:;
frost$core$Int $tmp1505 = (frost$core$Int) {87u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1506 = $tmp808.value;
int64_t $tmp1507 = $tmp1505.value;
bool $tmp1508 = $tmp1506 == $tmp1507;
frost$core$Bit $tmp1509 = (frost$core$Bit) {$tmp1508};
bool $tmp1510 = $tmp1509.value;
if ($tmp1510) goto block263; else goto block264;
block263:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1511));
return &$s1512;
block264:;
frost$core$Int $tmp1513 = (frost$core$Int) {88u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1514 = $tmp808.value;
int64_t $tmp1515 = $tmp1513.value;
bool $tmp1516 = $tmp1514 == $tmp1515;
frost$core$Bit $tmp1517 = (frost$core$Bit) {$tmp1516};
bool $tmp1518 = $tmp1517.value;
if ($tmp1518) goto block266; else goto block267;
block266:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1519));
return &$s1520;
block267:;
frost$core$Int $tmp1521 = (frost$core$Int) {89u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1522 = $tmp808.value;
int64_t $tmp1523 = $tmp1521.value;
bool $tmp1524 = $tmp1522 == $tmp1523;
frost$core$Bit $tmp1525 = (frost$core$Bit) {$tmp1524};
bool $tmp1526 = $tmp1525.value;
if ($tmp1526) goto block269; else goto block270;
block269:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1527));
return &$s1528;
block270:;
frost$core$Int $tmp1529 = (frost$core$Int) {90u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1530 = $tmp808.value;
int64_t $tmp1531 = $tmp1529.value;
bool $tmp1532 = $tmp1530 == $tmp1531;
frost$core$Bit $tmp1533 = (frost$core$Bit) {$tmp1532};
bool $tmp1534 = $tmp1533.value;
if ($tmp1534) goto block272; else goto block273;
block272:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1535));
return &$s1536;
block273:;
frost$core$Int $tmp1537 = (frost$core$Int) {91u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1538 = $tmp808.value;
int64_t $tmp1539 = $tmp1537.value;
bool $tmp1540 = $tmp1538 == $tmp1539;
frost$core$Bit $tmp1541 = (frost$core$Bit) {$tmp1540};
bool $tmp1542 = $tmp1541.value;
if ($tmp1542) goto block275; else goto block276;
block275:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1543));
return &$s1544;
block276:;
frost$core$Int $tmp1545 = (frost$core$Int) {92u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1546 = $tmp808.value;
int64_t $tmp1547 = $tmp1545.value;
bool $tmp1548 = $tmp1546 == $tmp1547;
frost$core$Bit $tmp1549 = (frost$core$Bit) {$tmp1548};
bool $tmp1550 = $tmp1549.value;
if ($tmp1550) goto block278; else goto block279;
block278:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1551));
return &$s1552;
block279:;
frost$core$Int $tmp1553 = (frost$core$Int) {93u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1554 = $tmp808.value;
int64_t $tmp1555 = $tmp1553.value;
bool $tmp1556 = $tmp1554 == $tmp1555;
frost$core$Bit $tmp1557 = (frost$core$Bit) {$tmp1556};
bool $tmp1558 = $tmp1557.value;
if ($tmp1558) goto block281; else goto block282;
block281:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1559));
return &$s1560;
block282:;
frost$core$Int $tmp1561 = (frost$core$Int) {94u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1562 = $tmp808.value;
int64_t $tmp1563 = $tmp1561.value;
bool $tmp1564 = $tmp1562 == $tmp1563;
frost$core$Bit $tmp1565 = (frost$core$Bit) {$tmp1564};
bool $tmp1566 = $tmp1565.value;
if ($tmp1566) goto block284; else goto block285;
block284:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1567));
return &$s1568;
block285:;
frost$core$Int $tmp1569 = (frost$core$Int) {95u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1570 = $tmp808.value;
int64_t $tmp1571 = $tmp1569.value;
bool $tmp1572 = $tmp1570 == $tmp1571;
frost$core$Bit $tmp1573 = (frost$core$Bit) {$tmp1572};
bool $tmp1574 = $tmp1573.value;
if ($tmp1574) goto block287; else goto block288;
block287:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1575));
return &$s1576;
block288:;
frost$core$Int $tmp1577 = (frost$core$Int) {96u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1578 = $tmp808.value;
int64_t $tmp1579 = $tmp1577.value;
bool $tmp1580 = $tmp1578 == $tmp1579;
frost$core$Bit $tmp1581 = (frost$core$Bit) {$tmp1580};
bool $tmp1582 = $tmp1581.value;
if ($tmp1582) goto block290; else goto block291;
block290:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1583));
return &$s1584;
block291:;
frost$core$Int $tmp1585 = (frost$core$Int) {97u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1586 = $tmp808.value;
int64_t $tmp1587 = $tmp1585.value;
bool $tmp1588 = $tmp1586 == $tmp1587;
frost$core$Bit $tmp1589 = (frost$core$Bit) {$tmp1588};
bool $tmp1590 = $tmp1589.value;
if ($tmp1590) goto block293; else goto block294;
block293:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1591));
return &$s1592;
block294:;
frost$core$Int $tmp1593 = (frost$core$Int) {98u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1594 = $tmp808.value;
int64_t $tmp1595 = $tmp1593.value;
bool $tmp1596 = $tmp1594 == $tmp1595;
frost$core$Bit $tmp1597 = (frost$core$Bit) {$tmp1596};
bool $tmp1598 = $tmp1597.value;
if ($tmp1598) goto block296; else goto block297;
block296:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1599));
return &$s1600;
block297:;
frost$core$Int $tmp1601 = (frost$core$Int) {99u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1602 = $tmp808.value;
int64_t $tmp1603 = $tmp1601.value;
bool $tmp1604 = $tmp1602 == $tmp1603;
frost$core$Bit $tmp1605 = (frost$core$Bit) {$tmp1604};
bool $tmp1606 = $tmp1605.value;
if ($tmp1606) goto block299; else goto block300;
block299:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1607));
return &$s1608;
block300:;
frost$core$Int $tmp1609 = (frost$core$Int) {100u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1610 = $tmp808.value;
int64_t $tmp1611 = $tmp1609.value;
bool $tmp1612 = $tmp1610 == $tmp1611;
frost$core$Bit $tmp1613 = (frost$core$Bit) {$tmp1612};
bool $tmp1614 = $tmp1613.value;
if ($tmp1614) goto block302; else goto block303;
block302:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1615));
return &$s1616;
block303:;
frost$core$Int $tmp1617 = (frost$core$Int) {101u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1618 = $tmp808.value;
int64_t $tmp1619 = $tmp1617.value;
bool $tmp1620 = $tmp1618 == $tmp1619;
frost$core$Bit $tmp1621 = (frost$core$Bit) {$tmp1620};
bool $tmp1622 = $tmp1621.value;
if ($tmp1622) goto block305; else goto block306;
block305:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1623));
return &$s1624;
block306:;
frost$core$Int $tmp1625 = (frost$core$Int) {102u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1626 = $tmp808.value;
int64_t $tmp1627 = $tmp1625.value;
bool $tmp1628 = $tmp1626 == $tmp1627;
frost$core$Bit $tmp1629 = (frost$core$Bit) {$tmp1628};
bool $tmp1630 = $tmp1629.value;
if ($tmp1630) goto block308; else goto block309;
block308:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1631));
return &$s1632;
block309:;
frost$core$Int $tmp1633 = (frost$core$Int) {103u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1634 = $tmp808.value;
int64_t $tmp1635 = $tmp1633.value;
bool $tmp1636 = $tmp1634 == $tmp1635;
frost$core$Bit $tmp1637 = (frost$core$Bit) {$tmp1636};
bool $tmp1638 = $tmp1637.value;
if ($tmp1638) goto block311; else goto block312;
block311:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1639));
return &$s1640;
block312:;
frost$core$Int $tmp1641 = (frost$core$Int) {104u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1642 = $tmp808.value;
int64_t $tmp1643 = $tmp1641.value;
bool $tmp1644 = $tmp1642 == $tmp1643;
frost$core$Bit $tmp1645 = (frost$core$Bit) {$tmp1644};
bool $tmp1646 = $tmp1645.value;
if ($tmp1646) goto block314; else goto block315;
block314:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1647));
return &$s1648;
block315:;
frost$core$Int $tmp1649 = (frost$core$Int) {105u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1650 = $tmp808.value;
int64_t $tmp1651 = $tmp1649.value;
bool $tmp1652 = $tmp1650 == $tmp1651;
frost$core$Bit $tmp1653 = (frost$core$Bit) {$tmp1652};
bool $tmp1654 = $tmp1653.value;
if ($tmp1654) goto block317; else goto block318;
block317:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1655));
return &$s1656;
block318:;
frost$core$Int $tmp1657 = (frost$core$Int) {106u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1658 = $tmp808.value;
int64_t $tmp1659 = $tmp1657.value;
bool $tmp1660 = $tmp1658 == $tmp1659;
frost$core$Bit $tmp1661 = (frost$core$Bit) {$tmp1660};
bool $tmp1662 = $tmp1661.value;
if ($tmp1662) goto block320; else goto block321;
block320:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1663));
return &$s1664;
block321:;
frost$core$Int $tmp1665 = (frost$core$Int) {107u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1666 = $tmp808.value;
int64_t $tmp1667 = $tmp1665.value;
bool $tmp1668 = $tmp1666 == $tmp1667;
frost$core$Bit $tmp1669 = (frost$core$Bit) {$tmp1668};
bool $tmp1670 = $tmp1669.value;
if ($tmp1670) goto block323; else goto block324;
block323:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1671));
return &$s1672;
block324:;
frost$core$Int $tmp1673 = (frost$core$Int) {108u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1674 = $tmp808.value;
int64_t $tmp1675 = $tmp1673.value;
bool $tmp1676 = $tmp1674 == $tmp1675;
frost$core$Bit $tmp1677 = (frost$core$Bit) {$tmp1676};
bool $tmp1678 = $tmp1677.value;
if ($tmp1678) goto block326; else goto block327;
block326:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1679));
return &$s1680;
block327:;
frost$core$Int $tmp1681 = (frost$core$Int) {109u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1682 = $tmp808.value;
int64_t $tmp1683 = $tmp1681.value;
bool $tmp1684 = $tmp1682 == $tmp1683;
frost$core$Bit $tmp1685 = (frost$core$Bit) {$tmp1684};
bool $tmp1686 = $tmp1685.value;
if ($tmp1686) goto block329; else goto block330;
block329:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1687));
return &$s1688;
block330:;
frost$core$Int $tmp1689 = (frost$core$Int) {110u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1690 = $tmp808.value;
int64_t $tmp1691 = $tmp1689.value;
bool $tmp1692 = $tmp1690 == $tmp1691;
frost$core$Bit $tmp1693 = (frost$core$Bit) {$tmp1692};
bool $tmp1694 = $tmp1693.value;
if ($tmp1694) goto block332; else goto block333;
block332:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1695));
return &$s1696;
block333:;
frost$core$Int $tmp1697 = (frost$core$Int) {111u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1698 = $tmp808.value;
int64_t $tmp1699 = $tmp1697.value;
bool $tmp1700 = $tmp1698 == $tmp1699;
frost$core$Bit $tmp1701 = (frost$core$Bit) {$tmp1700};
bool $tmp1702 = $tmp1701.value;
if ($tmp1702) goto block335; else goto block336;
block335:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1703));
return &$s1704;
block336:;
frost$core$Int $tmp1705 = (frost$core$Int) {112u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1706 = $tmp808.value;
int64_t $tmp1707 = $tmp1705.value;
bool $tmp1708 = $tmp1706 == $tmp1707;
frost$core$Bit $tmp1709 = (frost$core$Bit) {$tmp1708};
bool $tmp1710 = $tmp1709.value;
if ($tmp1710) goto block338; else goto block339;
block338:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1711));
return &$s1712;
block339:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int $tmp1713 = (frost$core$Int) {11u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1714, $tmp1713);
abort(); // unreachable
block1:;
goto block341;
block341:;

}






