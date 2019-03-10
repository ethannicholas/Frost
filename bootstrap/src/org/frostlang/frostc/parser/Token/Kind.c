#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"

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

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$parser$Token$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$parser$Token$Kind$class_type org$frostlang$frostc$parser$Token$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$parser$Token$Kind$_frost$core$Equatable, { org$frostlang$frostc$parser$Token$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$parser$Token$Kind$cleanup$shim, org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$parser$Token$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$parser$Token$Kind$wrapperclass_type org$frostlang$frostc$parser$Token$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$parser$Token$Kind$wrapper_frost$core$Equatable, { org$frostlang$frostc$parser$Token$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 38, -5226343182384548052, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 38, -5226343182384548052, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x41\x54\x43\x48", 5, -7462029077894567594, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x41\x54\x43\x48", 5, -7462029077894567594, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44", 3, -424742331256529164, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44", 3, -424742331256529164, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x52\x45\x41\x43\x48\x41\x42\x4c\x45", 11, -1266078107571979791, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x52\x45\x41\x43\x48\x41\x42\x4c\x45", 11, -1266078107571979791, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54", 9, -2576167377767570706, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54", 9, -2576167377767570706, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x41\x5a\x59", 4, -7529778104896043217, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x41\x5a\x59", 4, -7529778104896043217, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x43\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 11, -854743268890280045, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x43\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 11, -854743268890280045, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x53\x45\x53", 4, -7962572020183094811, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x53\x45\x53", 4, -7962572020183094811, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x53\x54\x41\x52\x54", 19, -1035988180762846889, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x53\x54\x41\x52\x54", 19, -1035988180762846889, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x4c\x49\x50\x53\x49\x53", 8, 3616480144494687938, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x4c\x49\x50\x53\x49\x53", 8, 3616480144494687938, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52", 3, 8940586553584031198, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52", 3, 8940586553584031198, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x4e\x41\x52\x59", 6, 3180398050091593148, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x4e\x41\x52\x59", 6, 3180398050091593148, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52", 2, 656738328383780900, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52", 2, 656738328383780900, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x53\x45", 4, -4659697924760971984, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x53\x45", 4, -4659697924760971984, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 8505961967228289923, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 8505961967228289923, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 8524030245501661566, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 8524030245501661566, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x52\x4f\x50\x45\x52\x54\x59", 8, 6193835437963882760, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x52\x4f\x50\x45\x52\x54\x59", 8, 6193835437963882760, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56", 6, 236947128255071689, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56", 6, 236947128255071689, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x4f\x44\x55\x4c\x45", 6, 72160643508752349, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x4f\x44\x55\x4c\x45", 6, 72160643508752349, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 8049205518224136996, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 8049205518224136996, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56\x45\x51", 8, 525286096538892175, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56\x45\x51", 8, 525286096538892175, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44\x45\x51", 12, -4110952405141345457, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44\x45\x51", 12, -4110952405141345457, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x53\x54\x41\x4e\x54", 8, 7784245047744762789, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x53\x54\x41\x4e\x54", 8, 7784245047744762789, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52\x45\x51", 4, -362280561266835226, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52\x45\x51", 4, -362280561266835226, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x45\x4c\x46", 4, 4758868999504809847, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x45\x4c\x46", 4, 4758868999504809847, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42\x45\x51", 5, -1294301046623021677, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42\x45\x51", 5, -1294301046623021677, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x55\x45", 4, 8092504513751138981, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x55\x45", 4, 8092504513751138981, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x54\x48\x45\x52\x57\x49\x53\x45", 9, 4281552231092500061, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x54\x48\x45\x52\x57\x49\x53\x45", 9, 4281552231092500061, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56\x45\x51", 5, -4675304909104048750, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56\x45\x51", 5, -4675304909104048750, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52\x45\x51", 12, -4045050825354945117, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52\x45\x51", 12, -4045050825354945117, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 710666245702197400, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 710666245702197400, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e", 2, 658677866895566654, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e", 2, 658677866895566654, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57", 3, -8271037625575719083, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57", 3, -8271037625575719083, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x45\x51", 3, 3951089647497390967, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x45\x51", 3, 3951089647497390967, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x46", 2, 658669070802540966, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x46", 2, 658669070802540966, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 718761851555915894, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 718761851555915894, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, -609265884448102340, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, -609265884448102340, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44", 10, -508925442021829239, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44", 10, -508925442021829239, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x50\x41\x52\x45\x4e", 6, 3876691553076048869, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x50\x41\x52\x45\x4e", 6, 3876691553076048869, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x54\x55\x52\x4e", 6, 3682372857926802591, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x54\x55\x52\x4e", 6, 3682372857926802591, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x4e\x4f\x54\x41\x54\x49\x4f\x4e", 10, -6766455421495095064, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x4e\x4f\x54\x41\x54\x49\x4f\x4e", 10, -6766455421495095064, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 23, 1977457359173694958, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 23, 1977457359173694958, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x4f\x52", 3, -925357672022179216, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x4f\x52", 3, -925357672022179216, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f", 2, 648018101662142484, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f", 2, 648018101662142484, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c", 3, 2187805048830972289, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c", 3, 2187805048830972289, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x54\x59", 8, -5582706505953877701, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x54\x59", 8, -5582706505953877701, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54", 2, 649118712801792470, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54", 2, 649118712801792470, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x56\x41\x4c\x49\x44", 7, 4384553811495809008, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x56\x41\x4c\x49\x44", 7, 4384553811495809008, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52\x45\x51", 5, 4441309431091541136, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52\x45\x51", 5, 4441309431091541136, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57\x45\x51", 5, 7905706922760248531, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57\x45\x51", 5, 7905706922760248531, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53", 2, 650898822127487629, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53", 2, 650898822127487629, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x49\x4c", 4, 3215402482899151853, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x49\x4c", 4, 3215402482899151853, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x49\x44\x45\x4e\x54\x49\x54\x59", 9, 6439203883259295967, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x49\x44\x45\x4e\x54\x49\x54\x59", 9, 6439203883259295967, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x49\x54", 4, 775939446952026579, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x49\x54", 4, 775939446952026579, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50", 4, 7310791030102272107, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50", 4, 7310791030102272107, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54\x45\x51", 4, 5720195730142804299, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54\x45\x51", 4, 5720195730142804299, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53", 6, 5021467569829040391, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53", 6, 5021467569829040391, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52", 10, -6137086871326903227, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52", 10, -6137086871326903227, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x55\x4e\x43\x54\x49\x4f\x4e", 8, 5163167664221876233, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x55\x4e\x43\x54\x49\x4f\x4e", 8, 5163167664221876233, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44", 6, 7192733565866671856, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44", 6, 7192733565866671856, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x43\x4b\x41\x47\x45", 7, 4214258907844905339, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x43\x4b\x41\x47\x45", 7, 4214258907844905339, NULL };
static frost$core$String $s490 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x4f\x54", 3, 3960658697195819050, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x4f\x54", 3, 3960658697195819050, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54", 2, 655682797220887565, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54", 2, 655682797220887565, NULL };
static frost$core$String $s506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52", 3, -3262591736092274978, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52", 3, -3262591736092274978, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, -5015735881644584683, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, -5015735881644584683, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x45\x4e\x44", 17, -3169533535160638894, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x45\x4e\x44", 17, -3169533535160638894, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c", 4, -8527112705117131683, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c", 4, -8527112705117131683, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x46", 3, -2290544294605466196, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x46", 3, -2290544294605466196, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x41\x43\x4b\x53\x4c\x41\x53\x48", 9, -3293626981209672713, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x41\x43\x4b\x53\x4c\x41\x53\x48", 9, -3293626981209672713, NULL };
static frost$core$String $s554 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d\x45\x51", 5, 1790334097051036789, NULL };
static frost$core$String $s555 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d\x45\x51", 5, 1790334097051036789, NULL };
static frost$core$String $s562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52", 10, 6705406146079849566, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52", 10, 6705406146079849566, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x54\x49\x4e\x55\x45", 8, -1218937278262061340, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x54\x49\x4e\x55\x45", 8, -1218937278262061340, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x45\x58", 3, 5314357622289828202, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x45\x58", 3, 5314357622289828202, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x48\x4f\x49\x43\x45", 6, 422481043336243254, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x48\x4f\x49\x43\x45", 6, 422481043336243254, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54", 3, -2284688295674749760, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54", 3, -2284688295674749760, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x55\x42\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 5858367662667776935, NULL };
static frost$core$String $s603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x55\x42\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 5858367662667776935, NULL };
static frost$core$String $s610 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54\x45\x51", 12, 5231704650367263801, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54\x45\x51", 12, 5231704650367263801, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x49\x4e\x45\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 12, -4985822287803552931, NULL };
static frost$core$String $s619 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x49\x4e\x45\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 12, -4985822287803552931, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x59", 3, 7829227687881249998, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x59", 3, 7829227687881249998, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x45\x52\x54", 6, -2770764151085366373, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x45\x52\x54", 6, -2770764151085366373, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44\x45\x51", 5, 8976745075867355670, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44\x45\x51", 5, 8976745075867355670, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44", 13, 2812181468845568921, NULL };
static frost$core$String $s651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44", 13, 2812181468845568921, NULL };
static frost$core$String $s658 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54\x44\x4f\x54", 6, 5185479590340089303, NULL };
static frost$core$String $s659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54\x44\x4f\x54", 6, 5185479590340089303, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52\x45\x51", 11, 8723670896618697899, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52\x45\x51", 11, 8723670896618697899, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x59", 2, 653913683011474516, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x59", 2, 653913683011474516, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54\x45\x51", 11, 8065439914669260352, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54\x45\x51", 11, 8065439914669260352, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x43\x49\x4d\x41\x4c", 7, -4421263928146067476, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x43\x49\x4d\x41\x4c", 7, -4421263928146067476, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x41\x53\x54", 4, -3929828708733151922, NULL };
static frost$core$String $s699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x41\x53\x54", 4, -3929828708733151922, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d", 3, -6890851465363405241, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d", 3, -6890851465363405241, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 16, -531539132585377116, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 16, -531539132585377116, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54\x45\x51", 4, -194475579662543288, NULL };
static frost$core$String $s731 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54\x45\x51", 4, -194475579662543288, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x51", 2, 647211060127224835, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x51", 2, 647211060127224835, NULL };
static frost$core$String $s746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c\x45\x51", 5, -6678819885994840569, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c\x45\x51", 5, -6678819885994840569, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56", 3, -2286568460558612120, NULL };
static frost$core$String $s755 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56", 3, -2286568460558612120, NULL };
static frost$core$String $s762 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x52\x45\x41\x4b", 5, 1390767274722343896, NULL };
static frost$core$String $s763 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x52\x45\x41\x4b", 5, 1390767274722343896, NULL };
static frost$core$String $s770 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 2789542229241279848, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 2789542229241279848, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x45\x52\x46\x41\x43\x45", 9, 6497765481944569648, NULL };
static frost$core$String $s779 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x45\x52\x46\x41\x43\x45", 9, 6497765481944569648, NULL };
static frost$core$String $s786 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44\x45\x51", 5, 8604071991207326456, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44\x45\x51", 5, 8604071991207326456, NULL };
static frost$core$String $s794 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x49\x47\x4e\x4d\x45\x4e\x54", 10, -4802925920175815696, NULL };
static frost$core$String $s795 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x49\x47\x4e\x4d\x45\x4e\x54", 10, -4802925920175815696, NULL };
static frost$core$String $s802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4e\x4f\x54", 10, 7590891947359604737, NULL };
static frost$core$String $s803 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4e\x4f\x54", 10, 7590891947359604737, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x50\x45\x52", 5, 5795199294677836756, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x50\x45\x52", 5, 5795199294677836756, NULL };
static frost$core$String $s818 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, -1378825067955875400, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, -1378825067955875400, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42", 3, -7490157870346156267, NULL };
static frost$core$String $s827 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42", 3, -7490157870346156267, NULL };
static frost$core$String $s834 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x4c\x45", 5, -6746519810156181554, NULL };
static frost$core$String $s835 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x4c\x45", 5, -6746519810156181554, NULL };
static frost$core$String $s842 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44", 3, -430490578047680922, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44", 3, -430490578047680922, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x50\x41\x52\x45\x4e", 6, -3536911959274103509, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x50\x41\x52\x45\x4e", 6, -3536911959274103509, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x45\x4e", 4, -2585065074016245767, NULL };
static frost$core$String $s859 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x45\x4e", 4, -2585065074016245767, NULL };
static frost$core$String $s866 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x54\x45\x53\x50\x41\x43\x45", 10, -3276662447725882720, NULL };
static frost$core$String $s867 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x54\x45\x53\x50\x41\x43\x45", 10, -3276662447725882720, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52", 9, 4106761120429910253, NULL };
static frost$core$String $s875 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52", 9, 4106761120429910253, NULL };
static frost$core$String $s882 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, -1653254887467171387, NULL };
static frost$core$String $s883 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, -1653254887467171387, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, -2780652702254013407, NULL };
static frost$core$String $s891 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, -2780652702254013407, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 581116117633633517, NULL };
static frost$core$String $s899 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 581116117633633517, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, -1832243356126634376, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, -1832243356126634376, NULL };
static frost$core$String $s909 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x6f\x6b\x65\x6e\x2e\x66\x72\x6f\x73\x74", 11, -2945524549076434626, NULL };

frost$core$String* org$frostlang$frostc$parser$Token$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$parser$Token$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:128
frost$core$Int64 $tmp3 = param0.$rawValue;
frost$core$Int64 $tmp4 = (frost$core$Int64) {39u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:129:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:129
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s10));
return &$s11;
block3:;
frost$core$Int64 $tmp12 = (frost$core$Int64) {56u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:130:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp13 = $tmp3.value;
int64_t $tmp14 = $tmp12.value;
bool $tmp15 = $tmp13 == $tmp14;
frost$core$Bit $tmp16 = (frost$core$Bit) {$tmp15};
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:130
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s18));
return &$s19;
block6:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {46u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:131:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp21 = $tmp3.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 == $tmp22;
frost$core$Bit $tmp24 = (frost$core$Bit) {$tmp23};
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s26));
return &$s27;
block9:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {77u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:132:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp29 = $tmp3.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 == $tmp30;
frost$core$Bit $tmp32 = (frost$core$Bit) {$tmp31};
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:132
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s34));
return &$s35;
block12:;
frost$core$Int64 $tmp36 = (frost$core$Int64) {51u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:133:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp37 = $tmp3.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 == $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:133
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s42));
return &$s43;
block15:;
frost$core$Int64 $tmp44 = (frost$core$Int64) {12u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:134:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp45 = $tmp3.value;
int64_t $tmp46 = $tmp44.value;
bool $tmp47 = $tmp45 == $tmp46;
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s50));
return &$s51;
block18:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:135:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp53 = $tmp3.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 == $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:135
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s58));
return &$s59;
block21:;
frost$core$Int64 $tmp60 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:136:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp61 = $tmp3.value;
int64_t $tmp62 = $tmp60.value;
bool $tmp63 = $tmp61 == $tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:136
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s66));
return &$s67;
block24:;
frost$core$Int64 $tmp68 = (frost$core$Int64) {101u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:137:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp69 = $tmp3.value;
int64_t $tmp70 = $tmp68.value;
bool $tmp71 = $tmp69 == $tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:137
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s74));
return &$s75;
block27:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {24u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:138:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp77 = $tmp3.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 == $tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s82));
return &$s83;
block30:;
frost$core$Int64 $tmp84 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:139:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp85 = $tmp3.value;
int64_t $tmp86 = $tmp84.value;
bool $tmp87 = $tmp85 == $tmp86;
frost$core$Bit $tmp88 = (frost$core$Bit) {$tmp87};
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:139
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s90));
return &$s91;
block33:;
frost$core$Int64 $tmp92 = (frost$core$Int64) {73u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:140:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp93 = $tmp3.value;
int64_t $tmp94 = $tmp92.value;
bool $tmp95 = $tmp93 == $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s98));
return &$s99;
block36:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {38u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:141:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp101 = $tmp3.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 == $tmp102;
frost$core$Bit $tmp104 = (frost$core$Bit) {$tmp103};
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:141
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s106));
return &$s107;
block39:;
frost$core$Int64 $tmp108 = (frost$core$Int64) {107u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:142:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp109 = $tmp3.value;
int64_t $tmp110 = $tmp108.value;
bool $tmp111 = $tmp109 == $tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {$tmp111};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s114));
return &$s115;
block42:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {7u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:143:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp117 = $tmp3.value;
int64_t $tmp118 = $tmp116.value;
bool $tmp119 = $tmp117 == $tmp118;
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119};
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s122));
return &$s123;
block45:;
frost$core$Int64 $tmp124 = (frost$core$Int64) {26u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:144:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp125 = $tmp3.value;
int64_t $tmp126 = $tmp124.value;
bool $tmp127 = $tmp125 == $tmp126;
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:144
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s130));
return &$s131;
block48:;
frost$core$Int64 $tmp132 = (frost$core$Int64) {60u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:145:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp133 = $tmp3.value;
int64_t $tmp134 = $tmp132.value;
bool $tmp135 = $tmp133 == $tmp134;
frost$core$Bit $tmp136 = (frost$core$Bit) {$tmp135};
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s138));
return &$s139;
block51:;
frost$core$Int64 $tmp140 = (frost$core$Int64) {52u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:146:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp141 = $tmp3.value;
int64_t $tmp142 = $tmp140.value;
bool $tmp143 = $tmp141 == $tmp142;
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:146
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s146));
return &$s147;
block54:;
frost$core$Int64 $tmp148 = (frost$core$Int64) {44u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:147:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp149 = $tmp3.value;
int64_t $tmp150 = $tmp148.value;
bool $tmp151 = $tmp149 == $tmp150;
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:147
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s154));
return &$s155;
block57:;
frost$core$Int64 $tmp156 = (frost$core$Int64) {84u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:148:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp157 = $tmp3.value;
int64_t $tmp158 = $tmp156.value;
bool $tmp159 = $tmp157 == $tmp158;
frost$core$Bit $tmp160 = (frost$core$Bit) {$tmp159};
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:148
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s162));
return &$s163;
block60:;
frost$core$Int64 $tmp164 = (frost$core$Int64) {89u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:149:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp165 = $tmp3.value;
int64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 == $tmp166;
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:149
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s170));
return &$s171;
block63:;
frost$core$Int64 $tmp172 = (frost$core$Int64) {27u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:150:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp173 = $tmp3.value;
int64_t $tmp174 = $tmp172.value;
bool $tmp175 = $tmp173 == $tmp174;
frost$core$Bit $tmp176 = (frost$core$Bit) {$tmp175};
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:150
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s178));
return &$s179;
block66:;
frost$core$Int64 $tmp180 = (frost$core$Int64) {86u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:151:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp181 = $tmp3.value;
int64_t $tmp182 = $tmp180.value;
bool $tmp183 = $tmp181 == $tmp182;
frost$core$Bit $tmp184 = (frost$core$Bit) {$tmp183};
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:151
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s186));
return &$s187;
block69:;
frost$core$Int64 $tmp188 = (frost$core$Int64) {49u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:152:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp189 = $tmp3.value;
int64_t $tmp190 = $tmp188.value;
bool $tmp191 = $tmp189 == $tmp190;
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:152
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s194));
return &$s195;
block72:;
frost$core$Int64 $tmp196 = (frost$core$Int64) {80u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:153:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp197 = $tmp3.value;
int64_t $tmp198 = $tmp196.value;
bool $tmp199 = $tmp197 == $tmp198;
frost$core$Bit $tmp200 = (frost$core$Bit) {$tmp199};
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:153
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s202));
return &$s203;
block75:;
frost$core$Int64 $tmp204 = (frost$core$Int64) {42u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:154:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp205 = $tmp3.value;
int64_t $tmp206 = $tmp204.value;
bool $tmp207 = $tmp205 == $tmp206;
frost$core$Bit $tmp208 = (frost$core$Bit) {$tmp207};
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:154
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s210));
return &$s211;
block78:;
frost$core$Int64 $tmp212 = (frost$core$Int64) {41u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:155:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp213 = $tmp3.value;
int64_t $tmp214 = $tmp212.value;
bool $tmp215 = $tmp213 == $tmp214;
frost$core$Bit $tmp216 = (frost$core$Bit) {$tmp215};
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s218));
return &$s219;
block81:;
frost$core$Int64 $tmp220 = (frost$core$Int64) {82u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:156:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp221 = $tmp3.value;
int64_t $tmp222 = $tmp220.value;
bool $tmp223 = $tmp221 == $tmp222;
frost$core$Bit $tmp224 = (frost$core$Bit) {$tmp223};
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:156
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s226));
return &$s227;
block84:;
frost$core$Int64 $tmp228 = (frost$core$Int64) {91u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:157:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp229 = $tmp3.value;
int64_t $tmp230 = $tmp228.value;
bool $tmp231 = $tmp229 == $tmp230;
frost$core$Bit $tmp232 = (frost$core$Bit) {$tmp231};
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:157
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s234));
return &$s235;
block87:;
frost$core$Int64 $tmp236 = (frost$core$Int64) {43u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:158:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp237 = $tmp3.value;
int64_t $tmp238 = $tmp236.value;
bool $tmp239 = $tmp237 == $tmp238;
frost$core$Bit $tmp240 = (frost$core$Bit) {$tmp239};
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:158
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s242));
return &$s243;
block90:;
frost$core$Int64 $tmp244 = (frost$core$Int64) {35u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:159:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp245 = $tmp3.value;
int64_t $tmp246 = $tmp244.value;
bool $tmp247 = $tmp245 == $tmp246;
frost$core$Bit $tmp248 = (frost$core$Bit) {$tmp247};
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:159
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s250));
return &$s251;
block93:;
frost$core$Int64 $tmp252 = (frost$core$Int64) {62u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:160:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp253 = $tmp3.value;
int64_t $tmp254 = $tmp252.value;
bool $tmp255 = $tmp253 == $tmp254;
frost$core$Bit $tmp256 = (frost$core$Bit) {$tmp255};
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:160
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s258));
return &$s259;
block96:;
frost$core$Int64 $tmp260 = (frost$core$Int64) {64u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:161:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp261 = $tmp3.value;
int64_t $tmp262 = $tmp260.value;
bool $tmp263 = $tmp261 == $tmp262;
frost$core$Bit $tmp264 = (frost$core$Bit) {$tmp263};
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:161
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s266));
return &$s267;
block99:;
frost$core$Int64 $tmp268 = (frost$core$Int64) {37u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:162:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp269 = $tmp3.value;
int64_t $tmp270 = $tmp268.value;
bool $tmp271 = $tmp269 == $tmp270;
frost$core$Bit $tmp272 = (frost$core$Bit) {$tmp271};
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:162
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s274));
return &$s275;
block102:;
frost$core$Int64 $tmp276 = (frost$core$Int64) {104u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:163:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp277 = $tmp3.value;
int64_t $tmp278 = $tmp276.value;
bool $tmp279 = $tmp277 == $tmp278;
frost$core$Bit $tmp280 = (frost$core$Bit) {$tmp279};
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:163
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s282));
return &$s283;
block105:;
frost$core$Int64 $tmp284 = (frost$core$Int64) {100u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:164:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp285 = $tmp3.value;
int64_t $tmp286 = $tmp284.value;
bool $tmp287 = $tmp285 == $tmp286;
frost$core$Bit $tmp288 = (frost$core$Bit) {$tmp287};
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:164
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s290));
return &$s291;
block108:;
frost$core$Int64 $tmp292 = (frost$core$Int64) {72u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:165:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp293 = $tmp3.value;
int64_t $tmp294 = $tmp292.value;
bool $tmp295 = $tmp293 == $tmp294;
frost$core$Bit $tmp296 = (frost$core$Bit) {$tmp295};
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s298));
return &$s299;
block111:;
frost$core$Int64 $tmp300 = (frost$core$Int64) {108u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:166:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp301 = $tmp3.value;
int64_t $tmp302 = $tmp300.value;
bool $tmp303 = $tmp301 == $tmp302;
frost$core$Bit $tmp304 = (frost$core$Bit) {$tmp303};
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:166
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s306));
return &$s307;
block114:;
frost$core$Int64 $tmp308 = (frost$core$Int64) {28u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:167:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp309 = $tmp3.value;
int64_t $tmp310 = $tmp308.value;
bool $tmp311 = $tmp309 == $tmp310;
frost$core$Bit $tmp312 = (frost$core$Bit) {$tmp311};
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s314));
return &$s315;
block117:;
frost$core$Int64 $tmp316 = (frost$core$Int64) {14u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:168:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp317 = $tmp3.value;
int64_t $tmp318 = $tmp316.value;
bool $tmp319 = $tmp317 == $tmp318;
frost$core$Bit $tmp320 = (frost$core$Bit) {$tmp319};
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block119; else goto block120;
block119:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:168
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s322));
return &$s323;
block120:;
frost$core$Int64 $tmp324 = (frost$core$Int64) {98u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:169:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp325 = $tmp3.value;
int64_t $tmp326 = $tmp324.value;
bool $tmp327 = $tmp325 == $tmp326;
frost$core$Bit $tmp328 = (frost$core$Bit) {$tmp327};
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:169
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s330));
return &$s331;
block123:;
frost$core$Int64 $tmp332 = (frost$core$Int64) {33u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:170:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp333 = $tmp3.value;
int64_t $tmp334 = $tmp332.value;
bool $tmp335 = $tmp333 == $tmp334;
frost$core$Bit $tmp336 = (frost$core$Bit) {$tmp335};
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block125; else goto block126;
block125:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:170
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s338));
return &$s339;
block126:;
frost$core$Int64 $tmp340 = (frost$core$Int64) {31u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:171:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp341 = $tmp3.value;
int64_t $tmp342 = $tmp340.value;
bool $tmp343 = $tmp341 == $tmp342;
frost$core$Bit $tmp344 = (frost$core$Bit) {$tmp343};
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:171
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s346));
return &$s347;
block129:;
frost$core$Int64 $tmp348 = (frost$core$Int64) {58u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:172:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp349 = $tmp3.value;
int64_t $tmp350 = $tmp348.value;
bool $tmp351 = $tmp349 == $tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block131; else goto block132;
block131:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:172
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s354));
return &$s355;
block132:;
frost$core$Int64 $tmp356 = (frost$core$Int64) {65u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:173:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp357 = $tmp3.value;
int64_t $tmp358 = $tmp356.value;
bool $tmp359 = $tmp357 == $tmp358;
frost$core$Bit $tmp360 = (frost$core$Bit) {$tmp359};
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:173
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s362));
return &$s363;
block135:;
frost$core$Int64 $tmp364 = (frost$core$Int64) {68u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:174:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp365 = $tmp3.value;
int64_t $tmp366 = $tmp364.value;
bool $tmp367 = $tmp365 == $tmp366;
frost$core$Bit $tmp368 = (frost$core$Bit) {$tmp367};
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block137; else goto block138;
block137:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s370));
return &$s371;
block138:;
frost$core$Int64 $tmp372 = (frost$core$Int64) {112u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:175:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp373 = $tmp3.value;
int64_t $tmp374 = $tmp372.value;
bool $tmp375 = $tmp373 == $tmp374;
frost$core$Bit $tmp376 = (frost$core$Bit) {$tmp375};
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block140; else goto block141;
block140:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:175
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s378));
return &$s379;
block141:;
frost$core$Int64 $tmp380 = (frost$core$Int64) {90u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:176:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp381 = $tmp3.value;
int64_t $tmp382 = $tmp380.value;
bool $tmp383 = $tmp381 == $tmp382;
frost$core$Bit $tmp384 = (frost$core$Bit) {$tmp383};
bool $tmp385 = $tmp384.value;
if ($tmp385) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s386));
return &$s387;
block144:;
frost$core$Int64 $tmp388 = (frost$core$Int64) {85u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:177:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp389 = $tmp3.value;
int64_t $tmp390 = $tmp388.value;
bool $tmp391 = $tmp389 == $tmp390;
frost$core$Bit $tmp392 = (frost$core$Bit) {$tmp391};
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:177
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s394));
return &$s395;
block147:;
frost$core$Int64 $tmp396 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:178:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp397 = $tmp3.value;
int64_t $tmp398 = $tmp396.value;
bool $tmp399 = $tmp397 == $tmp398;
frost$core$Bit $tmp400 = (frost$core$Bit) {$tmp399};
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block149; else goto block150;
block149:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:178
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s402));
return &$s403;
block150:;
frost$core$Int64 $tmp404 = (frost$core$Int64) {48u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:179:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp405 = $tmp3.value;
int64_t $tmp406 = $tmp404.value;
bool $tmp407 = $tmp405 == $tmp406;
frost$core$Bit $tmp408 = (frost$core$Bit) {$tmp407};
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:179
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s410));
return &$s411;
block153:;
frost$core$Int64 $tmp412 = (frost$core$Int64) {66u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:180:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp413 = $tmp3.value;
int64_t $tmp414 = $tmp412.value;
bool $tmp415 = $tmp413 == $tmp414;
frost$core$Bit $tmp416 = (frost$core$Bit) {$tmp415};
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:180
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s418));
return &$s419;
block156:;
frost$core$Int64 $tmp420 = (frost$core$Int64) {23u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:181:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp421 = $tmp3.value;
int64_t $tmp422 = $tmp420.value;
bool $tmp423 = $tmp421 == $tmp422;
frost$core$Bit $tmp424 = (frost$core$Bit) {$tmp423};
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block158; else goto block159;
block158:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:181
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s426));
return &$s427;
block159:;
frost$core$Int64 $tmp428 = (frost$core$Int64) {36u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:182:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp429 = $tmp3.value;
int64_t $tmp430 = $tmp428.value;
bool $tmp431 = $tmp429 == $tmp430;
frost$core$Bit $tmp432 = (frost$core$Bit) {$tmp431};
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block161; else goto block162;
block161:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s434));
return &$s435;
block162:;
frost$core$Int64 $tmp436 = (frost$core$Int64) {69u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:183:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp437 = $tmp3.value;
int64_t $tmp438 = $tmp436.value;
bool $tmp439 = $tmp437 == $tmp438;
frost$core$Bit $tmp440 = (frost$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:183
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s442));
return &$s443;
block165:;
frost$core$Int64 $tmp444 = (frost$core$Int64) {95u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:184:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp445 = $tmp3.value;
int64_t $tmp446 = $tmp444.value;
bool $tmp447 = $tmp445 == $tmp446;
frost$core$Bit $tmp448 = (frost$core$Bit) {$tmp447};
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block167; else goto block168;
block167:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:184
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s450));
return &$s451;
block168:;
frost$core$Int64 $tmp452 = (frost$core$Int64) {76u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:185:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp453 = $tmp3.value;
int64_t $tmp454 = $tmp452.value;
bool $tmp455 = $tmp453 == $tmp454;
frost$core$Bit $tmp456 = (frost$core$Bit) {$tmp455};
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s458));
return &$s459;
block171:;
frost$core$Int64 $tmp460 = (frost$core$Int64) {21u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:186:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp461 = $tmp3.value;
int64_t $tmp462 = $tmp460.value;
bool $tmp463 = $tmp461 == $tmp462;
frost$core$Bit $tmp464 = (frost$core$Bit) {$tmp463};
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block173; else goto block174;
block173:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:186
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s466));
return &$s467;
block174:;
frost$core$Int64 $tmp468 = (frost$core$Int64) {22u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:187:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp469 = $tmp3.value;
int64_t $tmp470 = $tmp468.value;
bool $tmp471 = $tmp469 == $tmp470;
frost$core$Bit $tmp472 = (frost$core$Bit) {$tmp471};
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:187
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s474));
return &$s475;
block177:;
frost$core$Int64 $tmp476 = (frost$core$Int64) {15u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:188:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp477 = $tmp3.value;
int64_t $tmp478 = $tmp476.value;
bool $tmp479 = $tmp477 == $tmp478;
frost$core$Bit $tmp480 = (frost$core$Bit) {$tmp479};
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block179; else goto block180;
block179:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:188
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s482));
return &$s483;
block180:;
frost$core$Int64 $tmp484 = (frost$core$Int64) {54u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:189:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp485 = $tmp3.value;
int64_t $tmp486 = $tmp484.value;
bool $tmp487 = $tmp485 == $tmp486;
frost$core$Bit $tmp488 = (frost$core$Bit) {$tmp487};
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block182; else goto block183;
block182:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:189
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s490));
return &$s491;
block183:;
frost$core$Int64 $tmp492 = (frost$core$Int64) {67u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:190:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp493 = $tmp3.value;
int64_t $tmp494 = $tmp492.value;
bool $tmp495 = $tmp493 == $tmp494;
frost$core$Bit $tmp496 = (frost$core$Bit) {$tmp495};
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block185; else goto block186;
block185:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:190
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s498));
return &$s499;
block186:;
frost$core$Int64 $tmp500 = (frost$core$Int64) {75u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:191:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp501 = $tmp3.value;
int64_t $tmp502 = $tmp500.value;
bool $tmp503 = $tmp501 == $tmp502;
frost$core$Bit $tmp504 = (frost$core$Bit) {$tmp503};
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block188; else goto block189;
block188:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:191
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s506));
return &$s507;
block189:;
frost$core$Int64 $tmp508 = (frost$core$Int64) {106u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:192:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp509 = $tmp3.value;
int64_t $tmp510 = $tmp508.value;
bool $tmp511 = $tmp509 == $tmp510;
frost$core$Bit $tmp512 = (frost$core$Bit) {$tmp511};
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block191; else goto block192;
block191:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:192
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s514));
return &$s515;
block192:;
frost$core$Int64 $tmp516 = (frost$core$Int64) {11u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:193:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp517 = $tmp3.value;
int64_t $tmp518 = $tmp516.value;
bool $tmp519 = $tmp517 == $tmp518;
frost$core$Bit $tmp520 = (frost$core$Bit) {$tmp519};
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block194; else goto block195;
block194:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:193
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s522));
return &$s523;
block195:;
frost$core$Int64 $tmp524 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:194:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp525 = $tmp3.value;
int64_t $tmp526 = $tmp524.value;
bool $tmp527 = $tmp525 == $tmp526;
frost$core$Bit $tmp528 = (frost$core$Bit) {$tmp527};
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block197; else goto block198;
block197:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:194
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s530));
return &$s531;
block198:;
frost$core$Int64 $tmp532 = (frost$core$Int64) {25u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:195:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp533 = $tmp3.value;
int64_t $tmp534 = $tmp532.value;
bool $tmp535 = $tmp533 == $tmp534;
frost$core$Bit $tmp536 = (frost$core$Bit) {$tmp535};
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block200; else goto block201;
block200:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:195
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s538));
return &$s539;
block201:;
frost$core$Int64 $tmp540 = (frost$core$Int64) {111u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:196:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp541 = $tmp3.value;
int64_t $tmp542 = $tmp540.value;
bool $tmp543 = $tmp541 == $tmp542;
frost$core$Bit $tmp544 = (frost$core$Bit) {$tmp543};
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block203; else goto block204;
block203:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:196
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s546));
return &$s547;
block204:;
frost$core$Int64 $tmp548 = (frost$core$Int64) {83u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:197:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp549 = $tmp3.value;
int64_t $tmp550 = $tmp548.value;
bool $tmp551 = $tmp549 == $tmp550;
frost$core$Bit $tmp552 = (frost$core$Bit) {$tmp551};
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block206; else goto block207;
block206:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:197
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s554));
return &$s555;
block207:;
frost$core$Int64 $tmp556 = (frost$core$Int64) {53u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:198:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp557 = $tmp3.value;
int64_t $tmp558 = $tmp556.value;
bool $tmp559 = $tmp557 == $tmp558;
frost$core$Bit $tmp560 = (frost$core$Bit) {$tmp559};
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block209; else goto block210;
block209:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:198
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s562));
return &$s563;
block210:;
frost$core$Int64 $tmp564 = (frost$core$Int64) {30u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:199:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp565 = $tmp3.value;
int64_t $tmp566 = $tmp564.value;
bool $tmp567 = $tmp565 == $tmp566;
frost$core$Bit $tmp568 = (frost$core$Bit) {$tmp567};
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block212; else goto block213;
block212:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:199
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s570));
return &$s571;
block213:;
frost$core$Int64 $tmp572 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:200:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp573 = $tmp3.value;
int64_t $tmp574 = $tmp572.value;
bool $tmp575 = $tmp573 == $tmp574;
frost$core$Bit $tmp576 = (frost$core$Bit) {$tmp575};
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block215; else goto block216;
block215:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s578));
return &$s579;
block216:;
frost$core$Int64 $tmp580 = (frost$core$Int64) {20u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:201:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp581 = $tmp3.value;
int64_t $tmp582 = $tmp580.value;
bool $tmp583 = $tmp581 == $tmp582;
frost$core$Bit $tmp584 = (frost$core$Bit) {$tmp583};
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block218; else goto block219;
block218:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:201
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s586));
return &$s587;
block219:;
frost$core$Int64 $tmp588 = (frost$core$Int64) {103u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:202:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp589 = $tmp3.value;
int64_t $tmp590 = $tmp588.value;
bool $tmp591 = $tmp589 == $tmp590;
frost$core$Bit $tmp592 = (frost$core$Bit) {$tmp591};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block221; else goto block222;
block221:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:202
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s594));
return &$s595;
block222:;
frost$core$Int64 $tmp596 = (frost$core$Int64) {8u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:203:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp597 = $tmp3.value;
int64_t $tmp598 = $tmp596.value;
bool $tmp599 = $tmp597 == $tmp598;
frost$core$Bit $tmp600 = (frost$core$Bit) {$tmp599};
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block224; else goto block225;
block224:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:203
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s602));
return &$s603;
block225:;
frost$core$Int64 $tmp604 = (frost$core$Int64) {93u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:204:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp605 = $tmp3.value;
int64_t $tmp606 = $tmp604.value;
bool $tmp607 = $tmp605 == $tmp606;
frost$core$Bit $tmp608 = (frost$core$Bit) {$tmp607};
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block227; else goto block228;
block227:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:204
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s610));
return &$s611;
block228:;
frost$core$Int64 $tmp612 = (frost$core$Int64) {9u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:205:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp613 = $tmp3.value;
int64_t $tmp614 = $tmp612.value;
bool $tmp615 = $tmp613 == $tmp614;
frost$core$Bit $tmp616 = (frost$core$Bit) {$tmp615};
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block230; else goto block231;
block230:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:205
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s618));
return &$s619;
block231:;
frost$core$Int64 $tmp620 = (frost$core$Int64) {47u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:206:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp621 = $tmp3.value;
int64_t $tmp622 = $tmp620.value;
bool $tmp623 = $tmp621 == $tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block233; else goto block234;
block233:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:206
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s626));
return &$s627;
block234:;
frost$core$Int64 $tmp628 = (frost$core$Int64) {45u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:207:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp629 = $tmp3.value;
int64_t $tmp630 = $tmp628.value;
bool $tmp631 = $tmp629 == $tmp630;
frost$core$Bit $tmp632 = (frost$core$Bit) {$tmp631};
bool $tmp633 = $tmp632.value;
if ($tmp633) goto block236; else goto block237;
block236:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:207
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s634));
return &$s635;
block237:;
frost$core$Int64 $tmp636 = (frost$core$Int64) {79u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:208:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp637 = $tmp3.value;
int64_t $tmp638 = $tmp636.value;
bool $tmp639 = $tmp637 == $tmp638;
frost$core$Bit $tmp640 = (frost$core$Bit) {$tmp639};
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block239; else goto block240;
block239:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:208
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s642));
return &$s643;
block240:;
frost$core$Int64 $tmp644 = (frost$core$Int64) {96u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:209:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp645 = $tmp3.value;
int64_t $tmp646 = $tmp644.value;
bool $tmp647 = $tmp645 == $tmp646;
frost$core$Bit $tmp648 = (frost$core$Bit) {$tmp647};
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block242; else goto block243;
block242:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:209
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s650));
return &$s651;
block243:;
frost$core$Int64 $tmp652 = (frost$core$Int64) {102u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:210:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp653 = $tmp3.value;
int64_t $tmp654 = $tmp652.value;
bool $tmp655 = $tmp653 == $tmp654;
frost$core$Bit $tmp656 = (frost$core$Bit) {$tmp655};
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block245; else goto block246;
block245:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:210
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s658));
return &$s659;
block246:;
frost$core$Int64 $tmp660 = (frost$core$Int64) {87u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:211:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp661 = $tmp3.value;
int64_t $tmp662 = $tmp660.value;
bool $tmp663 = $tmp661 == $tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block248; else goto block249;
block248:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:211
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s666));
return &$s667;
block249:;
frost$core$Int64 $tmp668 = (frost$core$Int64) {34u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:212:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp669 = $tmp3.value;
int64_t $tmp670 = $tmp668.value;
bool $tmp671 = $tmp669 == $tmp670;
frost$core$Bit $tmp672 = (frost$core$Bit) {$tmp671};
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block251; else goto block252;
block251:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:212
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s674));
return &$s675;
block252:;
frost$core$Int64 $tmp676 = (frost$core$Int64) {92u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:213:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp677 = $tmp3.value;
int64_t $tmp678 = $tmp676.value;
bool $tmp679 = $tmp677 == $tmp678;
frost$core$Bit $tmp680 = (frost$core$Bit) {$tmp679};
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block254; else goto block255;
block254:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:213
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s682));
return &$s683;
block255:;
frost$core$Int64 $tmp684 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:214:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp685 = $tmp3.value;
int64_t $tmp686 = $tmp684.value;
bool $tmp687 = $tmp685 == $tmp686;
frost$core$Bit $tmp688 = (frost$core$Bit) {$tmp687};
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block257; else goto block258;
block257:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:214
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s690));
return &$s691;
block258:;
frost$core$Int64 $tmp692 = (frost$core$Int64) {94u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:215:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp693 = $tmp3.value;
int64_t $tmp694 = $tmp692.value;
bool $tmp695 = $tmp693 == $tmp694;
frost$core$Bit $tmp696 = (frost$core$Bit) {$tmp695};
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block260; else goto block261;
block260:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:215
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s698));
return &$s699;
block261:;
frost$core$Int64 $tmp700 = (frost$core$Int64) {61u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:216:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp701 = $tmp3.value;
int64_t $tmp702 = $tmp700.value;
bool $tmp703 = $tmp701 == $tmp702;
frost$core$Bit $tmp704 = (frost$core$Bit) {$tmp703};
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block263; else goto block264;
block263:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:216
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s706));
return &$s707;
block264:;
frost$core$Int64 $tmp708 = (frost$core$Int64) {97u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:217:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp709 = $tmp3.value;
int64_t $tmp710 = $tmp708.value;
bool $tmp711 = $tmp709 == $tmp710;
frost$core$Bit $tmp712 = (frost$core$Bit) {$tmp711};
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block266; else goto block267;
block266:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:217
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s714));
return &$s715;
block267:;
frost$core$Int64 $tmp716 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:218:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp717 = $tmp3.value;
int64_t $tmp718 = $tmp716.value;
bool $tmp719 = $tmp717 == $tmp718;
frost$core$Bit $tmp720 = (frost$core$Bit) {$tmp719};
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block269; else goto block270;
block269:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:218
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s722));
return &$s723;
block270:;
frost$core$Int64 $tmp724 = (frost$core$Int64) {70u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:219:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp725 = $tmp3.value;
int64_t $tmp726 = $tmp724.value;
bool $tmp727 = $tmp725 == $tmp726;
frost$core$Bit $tmp728 = (frost$core$Bit) {$tmp727};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block272; else goto block273;
block272:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:219
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s730));
return &$s731;
block273:;
frost$core$Int64 $tmp732 = (frost$core$Int64) {63u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:220:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp733 = $tmp3.value;
int64_t $tmp734 = $tmp732.value;
bool $tmp735 = $tmp733 == $tmp734;
frost$core$Bit $tmp736 = (frost$core$Bit) {$tmp735};
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block275; else goto block276;
block275:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:220
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s738));
return &$s739;
block276:;
frost$core$Int64 $tmp740 = (frost$core$Int64) {81u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:221:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp741 = $tmp3.value;
int64_t $tmp742 = $tmp740.value;
bool $tmp743 = $tmp741 == $tmp742;
frost$core$Bit $tmp744 = (frost$core$Bit) {$tmp743};
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block278; else goto block279;
block278:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:221
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s746));
return &$s747;
block279:;
frost$core$Int64 $tmp748 = (frost$core$Int64) {59u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:222:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp749 = $tmp3.value;
int64_t $tmp750 = $tmp748.value;
bool $tmp751 = $tmp749 == $tmp750;
frost$core$Bit $tmp752 = (frost$core$Bit) {$tmp751};
bool $tmp753 = $tmp752.value;
if ($tmp753) goto block281; else goto block282;
block281:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s754));
return &$s755;
block282:;
frost$core$Int64 $tmp756 = (frost$core$Int64) {29u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:223:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp757 = $tmp3.value;
int64_t $tmp758 = $tmp756.value;
bool $tmp759 = $tmp757 == $tmp758;
frost$core$Bit $tmp760 = (frost$core$Bit) {$tmp759};
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block284; else goto block285;
block284:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:223
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s762));
return &$s763;
block285:;
frost$core$Int64 $tmp764 = (frost$core$Int64) {105u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:224:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp765 = $tmp3.value;
int64_t $tmp766 = $tmp764.value;
bool $tmp767 = $tmp765 == $tmp766;
frost$core$Bit $tmp768 = (frost$core$Bit) {$tmp767};
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block287; else goto block288;
block287:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:224
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s770));
return &$s771;
block288:;
frost$core$Int64 $tmp772 = (frost$core$Int64) {19u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:225:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp773 = $tmp3.value;
int64_t $tmp774 = $tmp772.value;
bool $tmp775 = $tmp773 == $tmp774;
frost$core$Bit $tmp776 = (frost$core$Bit) {$tmp775};
bool $tmp777 = $tmp776.value;
if ($tmp777) goto block290; else goto block291;
block290:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:225
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s778));
return &$s779;
block291:;
frost$core$Int64 $tmp780 = (frost$core$Int64) {88u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:226:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp781 = $tmp3.value;
int64_t $tmp782 = $tmp780.value;
bool $tmp783 = $tmp781 == $tmp782;
frost$core$Bit $tmp784 = (frost$core$Bit) {$tmp783};
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block293; else goto block294;
block293:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:226
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s786));
return &$s787;
block294:;
frost$core$Int64 $tmp788 = (frost$core$Int64) {78u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:227:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp789 = $tmp3.value;
int64_t $tmp790 = $tmp788.value;
bool $tmp791 = $tmp789 == $tmp790;
frost$core$Bit $tmp792 = (frost$core$Bit) {$tmp791};
bool $tmp793 = $tmp792.value;
if ($tmp793) goto block296; else goto block297;
block296:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:227
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s794));
return &$s795;
block297:;
frost$core$Int64 $tmp796 = (frost$core$Int64) {55u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:228:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp797 = $tmp3.value;
int64_t $tmp798 = $tmp796.value;
bool $tmp799 = $tmp797 == $tmp798;
frost$core$Bit $tmp800 = (frost$core$Bit) {$tmp799};
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block299; else goto block300;
block299:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:228
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s802));
return &$s803;
block300:;
frost$core$Int64 $tmp804 = (frost$core$Int64) {50u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:229:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp805 = $tmp3.value;
int64_t $tmp806 = $tmp804.value;
bool $tmp807 = $tmp805 == $tmp806;
frost$core$Bit $tmp808 = (frost$core$Bit) {$tmp807};
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block302; else goto block303;
block302:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:229
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s810));
return &$s811;
block303:;
frost$core$Int64 $tmp812 = (frost$core$Int64) {110u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:230:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp813 = $tmp3.value;
int64_t $tmp814 = $tmp812.value;
bool $tmp815 = $tmp813 == $tmp814;
frost$core$Bit $tmp816 = (frost$core$Bit) {$tmp815};
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block305; else goto block306;
block305:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:230
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s818));
return &$s819;
block306:;
frost$core$Int64 $tmp820 = (frost$core$Int64) {57u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:231:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp821 = $tmp3.value;
int64_t $tmp822 = $tmp820.value;
bool $tmp823 = $tmp821 == $tmp822;
frost$core$Bit $tmp824 = (frost$core$Bit) {$tmp823};
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block308; else goto block309;
block308:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:231
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s826));
return &$s827;
block309:;
frost$core$Int64 $tmp828 = (frost$core$Int64) {32u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:232:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp829 = $tmp3.value;
int64_t $tmp830 = $tmp828.value;
bool $tmp831 = $tmp829 == $tmp830;
frost$core$Bit $tmp832 = (frost$core$Bit) {$tmp831};
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block311; else goto block312;
block311:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:232
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s834));
return &$s835;
block312:;
frost$core$Int64 $tmp836 = (frost$core$Int64) {71u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:233:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp837 = $tmp3.value;
int64_t $tmp838 = $tmp836.value;
bool $tmp839 = $tmp837 == $tmp838;
frost$core$Bit $tmp840 = (frost$core$Bit) {$tmp839};
bool $tmp841 = $tmp840.value;
if ($tmp841) goto block314; else goto block315;
block314:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:233
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s842));
return &$s843;
block315:;
frost$core$Int64 $tmp844 = (frost$core$Int64) {109u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:234:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp845 = $tmp3.value;
int64_t $tmp846 = $tmp844.value;
bool $tmp847 = $tmp845 == $tmp846;
frost$core$Bit $tmp848 = (frost$core$Bit) {$tmp847};
bool $tmp849 = $tmp848.value;
if ($tmp849) goto block317; else goto block318;
block317:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:234
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s850));
return &$s851;
block318:;
frost$core$Int64 $tmp852 = (frost$core$Int64) {40u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:235:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp853 = $tmp3.value;
int64_t $tmp854 = $tmp852.value;
bool $tmp855 = $tmp853 == $tmp854;
frost$core$Bit $tmp856 = (frost$core$Bit) {$tmp855};
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block320; else goto block321;
block320:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s858));
return &$s859;
block321:;
frost$core$Int64 $tmp860 = (frost$core$Int64) {13u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:236:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp861 = $tmp3.value;
int64_t $tmp862 = $tmp860.value;
bool $tmp863 = $tmp861 == $tmp862;
frost$core$Bit $tmp864 = (frost$core$Bit) {$tmp863};
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block323; else goto block324;
block323:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:236
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s866));
return &$s867;
block324:;
frost$core$Int64 $tmp868 = (frost$core$Int64) {74u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:237:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp869 = $tmp3.value;
int64_t $tmp870 = $tmp868.value;
bool $tmp871 = $tmp869 == $tmp870;
frost$core$Bit $tmp872 = (frost$core$Bit) {$tmp871};
bool $tmp873 = $tmp872.value;
if ($tmp873) goto block326; else goto block327;
block326:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:237
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s874));
return &$s875;
block327:;
frost$core$Int64 $tmp876 = (frost$core$Int64) {99u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:238:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp877 = $tmp3.value;
int64_t $tmp878 = $tmp876.value;
bool $tmp879 = $tmp877 == $tmp878;
frost$core$Bit $tmp880 = (frost$core$Bit) {$tmp879};
bool $tmp881 = $tmp880.value;
if ($tmp881) goto block329; else goto block330;
block329:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:238
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s882));
return &$s883;
block330:;
frost$core$Int64 $tmp884 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:239:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp885 = $tmp3.value;
int64_t $tmp886 = $tmp884.value;
bool $tmp887 = $tmp885 == $tmp886;
frost$core$Bit $tmp888 = (frost$core$Bit) {$tmp887};
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block332; else goto block333;
block332:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:239
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s890));
return &$s891;
block333:;
frost$core$Int64 $tmp892 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:240:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp893 = $tmp3.value;
int64_t $tmp894 = $tmp892.value;
bool $tmp895 = $tmp893 == $tmp894;
frost$core$Bit $tmp896 = (frost$core$Bit) {$tmp895};
bool $tmp897 = $tmp896.value;
if ($tmp897) goto block335; else goto block336;
block335:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:240
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s898));
return &$s899;
block336:;
frost$core$Int64 $tmp900 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:241:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp901 = $tmp3.value;
int64_t $tmp902 = $tmp900.value;
bool $tmp903 = $tmp901 == $tmp902;
frost$core$Bit $tmp904 = (frost$core$Bit) {$tmp903};
bool $tmp905 = $tmp904.value;
if ($tmp905) goto block338; else goto block1;
block338:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:241
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s906));
return &$s907;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:243
frost$core$Int $tmp908 = (frost$core$Int) {243u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s909, $tmp908);
abort(); // unreachable

}
void org$frostlang$frostc$parser$Token$Kind$cleanup(org$frostlang$frostc$parser$Token$Kind param0) {

return;

}
org$frostlang$frostc$parser$Token$Kind org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$parser$Token$Kind local0;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int64* $tmp910 = &(&local0)->$rawValue;
*$tmp910 = param0;
org$frostlang$frostc$parser$Token$Kind $tmp911 = *(&local0);
return $tmp911;

}
frost$core$Bit org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit(org$frostlang$frostc$parser$Token$Kind param0, org$frostlang$frostc$parser$Token$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int64 $tmp912 = param0.$rawValue;
frost$core$Int64 $tmp913 = param1.$rawValue;
int64_t $tmp914 = $tmp912.value;
int64_t $tmp915 = $tmp913.value;
bool $tmp916 = $tmp914 != $tmp915;
frost$core$Bit $tmp917 = (frost$core$Bit) {$tmp916};
bool $tmp918 = $tmp917.value;
if ($tmp918) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Bit $tmp919 = (frost$core$Bit) {false};
return $tmp919;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Bit $tmp920 = (frost$core$Bit) {true};
return $tmp920;

}






