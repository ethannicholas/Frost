#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"

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
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 38, 2175759591942331444, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x2e\x4b\x69\x6e\x64", 38, 2175759591942331444, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, 19603826542394533, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x51\x55\x45\x53\x54\x49\x4f\x4e", 8, 19603826542394533, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50", 4, 183177215, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x4f\x4f\x50", 4, 183177215, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x53\x45\x53", 4, 192489721, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x53\x45\x53", 4, 192489721, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57", 3, 1854447, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57", 3, 1854447, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c", 4, 189255593, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c", 4, 189255593, NULL };
static frost$core$String $s50 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x41\x5a\x59", 4, 183035521, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x41\x5a\x59", 4, 183035521, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 19691005935467391, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x4b\x45\x54", 8, 19691005935467391, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x45\x58", 3, 1771830, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x45\x58", 3, 1771830, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x49\x47\x4e\x4d\x45\x4e\x54", 10, -2007937437012926198, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x49\x47\x4e\x4d\x45\x4e\x54", 10, -2007937437012926198, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x54\x49\x4e\x55\x45", 8, 18096562612224314, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x54\x49\x4e\x55\x45", 8, 18096562612224314, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x43\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 11, -5087895732336707131, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x43\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 11, -5087895732336707131, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44\x45\x51", 5, 17355090762, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44\x45\x51", 5, 17355090762, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52", 9, 1816287376223305197, NULL };
static frost$core$String $s107 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52", 9, 1816287376223305197, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x53\x45", 4, 175934898, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x53\x45", 4, 175934898, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, 17564334466, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x41", 5, 17564334466, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x52\x45\x41\x4b", 5, 17463282158, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x52\x45\x41\x4b", 5, 17463282158, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x49\x44\x45\x4e\x54\x49\x54\x59", 9, 1946213007915829797, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x49\x44\x45\x4e\x54\x49\x54\x59", 9, 1946213007915829797, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x46", 3, 1731008, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x46", 3, 1731008, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54\x44\x4f\x54", 6, 1784515003363, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54\x44\x4f\x54", 6, 1784515003363, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x41\x54\x43\x48", 5, 18590584666, NULL };
static frost$core$String $s163 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x41\x54\x43\x48", 5, 18590584666, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x49\x54", 4, 180075509, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x49\x54", 4, 180075509, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x46", 2, 17644, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x46", 2, 17644, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x55\x42\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 3557881984066762397, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x55\x42\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, 3557881984066762397, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53", 6, 2004587377459, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53", 6, 2004587377459, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c\x45\x51", 5, 18611109289, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c\x45\x51", 5, 18611109289, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e", 2, 17652, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e", 2, 17652, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x54\x45\x53\x50\x41\x43\x45", 10, 3486219771587072774, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x54\x45\x53\x50\x41\x43\x45", 10, 3486219771587072774, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d", 3, 1873829, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d", 3, 1873829, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d\x45\x51", 5, 19114936679, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x4d\x45\x51", 5, 19114936679, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x50\x45\x52", 5, 19235512500, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x50\x45\x52", 5, 19235512500, NULL };
static frost$core$String $s258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x4f\x44\x55\x4c\x45", 6, 1879089596155, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x4f\x44\x55\x4c\x45", 6, 1879089596155, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52", 10, -1022415738541599675, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52", 10, -1022415738541599675, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44\x45\x51", 5, 17344787752, NULL };
static frost$core$String $s275 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44\x45\x51", 5, 17344787752, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53", 2, 16849, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53", 2, 16849, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x55\x4e\x43\x54\x49\x4f\x4e", 8, 18424570581014915, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x55\x4e\x43\x54\x49\x4f\x4e", 8, 18424570581014915, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54\x45\x51", 11, 2491581992959570536, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54\x45\x51", 11, 2491581992959570536, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x53\x54\x41\x52\x54", 19, -5413669984936692349, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x53\x54\x41\x52\x54", 19, -5413669984936692349, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x49\x4e\x45\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 12, 5366021567322428751, NULL };
static frost$core$String $s315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x49\x4e\x45\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 12, 5366021567322428751, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f", 2, 17148, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f", 2, 17148, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x59", 3, 1895556, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x59", 3, 1895556, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 1930301532732, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x42\x52\x41\x43\x45", 6, 1930301532732, NULL };
static frost$core$String $s346 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x45\x52\x54", 6, 1753399923667, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x53\x53\x45\x52\x54", 6, 1753399923667, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x4e\x4f\x54\x41\x54\x49\x4f\x4e", 10, -2062609835563705796, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x4e\x4f\x54\x41\x54\x49\x4f\x4e", 10, -2062609835563705796, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54", 3, 1732032, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x54", 3, 1732032, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57\x45\x51", 5, 18917220897, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x4f\x57\x45\x51", 5, 18917220897, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 1867240929726, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x45", 6, 1867240929726, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56", 6, 1836961444863, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56", 6, 1836961444863, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54", 9, 2000253948388954382, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x4c\x45\x46\x54", 9, 2000253948388954382, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, 19047724724203185, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x42\x52\x41\x43\x4b\x45\x54", 8, 19047724724203185, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52\x45\x51", 11, 7416474849546499183, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4f\x52\x45\x51", 11, 7416474849546499183, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44", 10, -1022415738541834413, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44", 10, -1022415738541834413, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52\x45\x51", 5, 19749653100, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52\x45\x51", 5, 19749653100, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x4f\x52", 3, 1752432, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x4f\x52", 3, 1752432, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x50\x41\x52\x45\x4e", 6, 1868680433851, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x50\x41\x52\x45\x4e", 6, 1868680433851, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44", 13, -2202632615105515729, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44", 13, -2202632615105515729, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x48\x4f\x49\x43\x45", 6, 1773271378328, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x48\x4f\x49\x43\x45", 6, 1773271378328, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x43\x49\x4d\x41\x4c", 7, 180129150437096, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x43\x49\x4d\x41\x4c", 7, 180129150437096, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x54\x59", 8, 18728071897847219, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x54\x59", 8, 18728071897847219, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x41\x53\x54", 4, 173762100, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x41\x53\x54", 4, 173762100, NULL };
static frost$core$String $s490 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x45\x4c\x46", 4, 190286999, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x45\x4c\x46", 4, 190286999, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44\x45\x51", 12, -7252547219356176923, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x41\x4e\x44\x45\x51", 12, -7252547219356176923, NULL };
static frost$core$String $s506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x52\x45\x41\x43\x48\x41\x42\x4c\x45", 11, 8714519453596415907, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x4e\x52\x45\x41\x43\x48\x41\x42\x4c\x45", 11, 8714519453596415907, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x45\x51", 3, 1833029, NULL };
static frost$core$String $s515 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x45\x51", 3, 1833029, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52", 3, 1914234, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x41\x52", 3, 1914234, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x55\x45", 4, 191450821, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x52\x55\x45", 4, 191450821, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56\x45\x51", 8, 18738843699054513, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x44\x49\x56\x45\x51", 8, 18738843699054513, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44", 6, 1878065344650, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44", 6, 1878065344650, NULL };
static frost$core$String $s554 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x54\x48\x45\x52\x57\x49\x53\x45", 9, 1958225170359363099, NULL };
static frost$core$String $s555 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x54\x48\x45\x52\x57\x49\x53\x45", 9, 1958225170359363099, NULL };
static frost$core$String $s562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x52\x4f\x50\x45\x52\x54\x59", 8, 19493533220193646, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x52\x4f\x50\x45\x52\x54\x59", 8, 19493533220193646, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x59", 2, 16956, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x59", 2, 16956, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56", 3, 1731428, NULL };
static frost$core$String $s579 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56", 3, 1731428, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52", 2, 18262, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52", 2, 18262, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x4c\x45", 5, 19638289478, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x49\x4c\x45", 5, 19638289478, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44", 3, 1700302, NULL };
static frost$core$String $s603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x44\x44", 3, 1700302, NULL };
static frost$core$String $s610 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x50\x41\x52\x45\x4e", 6, 1931741036857, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x50\x41\x52\x45\x4e", 6, 1931741036857, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54\x45\x51", 4, 178075706, NULL };
static frost$core$String $s619 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54\x45\x51", 4, 178075706, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x4c\x49\x50\x53\x49\x53", 8, 18307782964590414, NULL };
static frost$core$String $s627 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4c\x4c\x49\x50\x53\x49\x53", 8, 18307782964590414, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x45\x52\x46\x41\x43\x45", 9, 1892623225034622958, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x45\x52\x46\x41\x43\x45", 9, 1892623225034622958, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x4f\x54", 3, 1834042, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x4f\x54", 3, 1834042, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x41\x43\x4b\x53\x4c\x41\x53\x48", 9, 1815411497011204853, NULL };
static frost$core$String $s651 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x41\x43\x4b\x53\x4c\x41\x53\x48", 9, 1815411497011204853, NULL };
static frost$core$String $s658 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54", 2, 17961, NULL };
static frost$core$String $s659 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54", 2, 17961, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x53\x54\x41\x4e\x54", 8, 18096562519363919, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x53\x54\x41\x4e\x54", 8, 18096562519363919, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, 17564324480, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4c\x4f\x4e", 5, 17564324480, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, -1344497578190201572, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x49\x4e\x47\x4c\x45\x5f\x51\x55\x4f\x54\x45", 12, -1344497578190201572, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x49\x4c", 4, 176851985, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x49\x4c", 4, 176851985, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x54\x55\x52\x4e", 6, 1930615980081, NULL };
static frost$core$String $s699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x54\x55\x52\x4e", 6, 1930615980081, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x45\x4e\x44", 17, -5684102567753702620, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x4c\x4f\x43\x4b\x5f\x43\x4f\x4d\x4d\x45\x4e\x54\x5f\x45\x4e\x44", 17, -5684102567753702620, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4c\x41\x53\x53", 5, 17561121775, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4c\x41\x53\x53", 5, 17561121775, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54\x45\x51", 4, 183227211, NULL };
static frost$core$String $s723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x54\x45\x51", 4, 183227211, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c", 3, 1824439, NULL };
static frost$core$String $s731 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x55\x4c", 3, 1824439, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52", 10, 6577620692829384480, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52", 10, 6577620692829384480, NULL };
static frost$core$String $s746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52", 3, 1936050, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x58\x4f\x52", 3, 1936050, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x56\x41\x4c\x49\x44", 7, 185533310990420, NULL };
static frost$core$String $s755 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x56\x41\x4c\x49\x44", 7, 185533310990420, NULL };
static frost$core$String $s762 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x51", 2, 17251, NULL };
static frost$core$String $s763 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x51", 2, 17251, NULL };
static frost$core$String $s770 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 16, -832259711227942438, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 16, -832259711227942438, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42", 3, 1885635, NULL };
static frost$core$String $s779 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42", 3, 1885635, NULL };
static frost$core$String $s786 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x4e\x41\x52\x59", 6, 1762864227854, NULL };
static frost$core$String $s787 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x4e\x41\x52\x59", 6, 1762864227854, NULL };
static frost$core$String $s794 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56\x45\x51", 5, 17662304078, NULL };
static frost$core$String $s795 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x49\x56\x45\x51", 5, 17662304078, NULL };
static frost$core$String $s802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52\x45\x51", 12, -7252547216961614585, NULL };
static frost$core$String $s803 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x58\x4f\x52\x45\x51", 12, -7252547216961614585, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54\x45\x51", 12, -6604629331763944205, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x48\x49\x46\x54\x52\x49\x47\x48\x54\x45\x51", 12, -6604629331763944205, NULL };
static frost$core$String $s818 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52\x45\x51", 4, 186297712, NULL };
static frost$core$String $s819 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x52\x45\x51", 4, 186297712, NULL };
static frost$core$String $s826 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44", 3, 1701312, NULL };
static frost$core$String $s827 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x44", 3, 1701312, NULL };
static frost$core$String $s834 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4e\x4f\x54", 10, -1022415738541701683, NULL };
static frost$core$String $s835 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x57\x49\x53\x45\x4e\x4f\x54", 10, -1022415738541701683, NULL };
static frost$core$String $s842 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42\x45\x51", 5, 19235369685, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x42\x45\x51", 5, 19235369685, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 23, 7233023796892450550, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x59\x49\x45\x4c\x44\x53\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45", 23, 7233023796892450550, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x43\x4b\x41\x47\x45", 7, 192825353781093, NULL };
static frost$core$String $s859 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x50\x41\x43\x4b\x41\x47\x45", 7, 192825353781093, NULL };
static frost$core$String $s866 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x45\x4e", 4, 194438107, NULL };
static frost$core$String $s867 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x48\x45\x4e", 4, 194438107, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 17862081864, NULL };
static frost$core$String $s875 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x41\x4c\x53\x45", 5, 17862081864, NULL };
static frost$core$String $s882 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54", 2, 17456, NULL };
static frost$core$String $s883 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x54", 2, 17456, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, 1742219, NULL };
static frost$core$String $s891 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x45\x4f\x46", 3, 1742219, NULL };
static frost$core$String $s898 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s899 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, 19114875480, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x47\x45\x58", 5, 19114875480, NULL };
static frost$core$String $s909 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x6f\x6b\x65\x6e\x2e\x66\x72\x6f\x73\x74", 11, 8405089766299269894, NULL };

frost$core$String* org$frostlang$frostc$parser$Token$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$parser$Token$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:128
frost$core$Int64 $tmp3 = param0.$rawValue;
frost$core$Int64 $tmp4 = (frost$core$Int64) {99};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:129:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp5 = $tmp3.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 == $tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:129
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s10));
return &$s11;
block3:;
frost$core$Int64 $tmp12 = (frost$core$Int64) {36};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:130:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp13 = $tmp3.value;
int64_t $tmp14 = $tmp12.value;
bool $tmp15 = $tmp13 == $tmp14;
frost$core$Bit $tmp16 = frost$core$Bit$init$builtin_bit($tmp15);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:130
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s18));
return &$s19;
block6:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:131:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp21 = $tmp3.value;
int64_t $tmp22 = $tmp20.value;
bool $tmp23 = $tmp21 == $tmp22;
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit($tmp23);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:131
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s26));
return &$s27;
block9:;
frost$core$Int64 $tmp28 = (frost$core$Int64) {62};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:132:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp29 = $tmp3.value;
int64_t $tmp30 = $tmp28.value;
bool $tmp31 = $tmp29 == $tmp30;
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit($tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:132
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s34));
return &$s35;
block12:;
frost$core$Int64 $tmp36 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:133:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp37 = $tmp3.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 == $tmp38;
frost$core$Bit $tmp40 = frost$core$Bit$init$builtin_bit($tmp39);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:133
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s42));
return &$s43;
block15:;
frost$core$Int64 $tmp44 = (frost$core$Int64) {51};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:134:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp45 = $tmp3.value;
int64_t $tmp46 = $tmp44.value;
bool $tmp47 = $tmp45 == $tmp46;
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:134
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s50));
return &$s51;
block18:;
frost$core$Int64 $tmp52 = (frost$core$Int64) {107};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:135:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp53 = $tmp3.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 == $tmp54;
frost$core$Bit $tmp56 = frost$core$Bit$init$builtin_bit($tmp55);
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:135
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s58));
return &$s59;
block21:;
frost$core$Int64 $tmp60 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:136:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp61 = $tmp3.value;
int64_t $tmp62 = $tmp60.value;
bool $tmp63 = $tmp61 == $tmp62;
frost$core$Bit $tmp64 = frost$core$Bit$init$builtin_bit($tmp63);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:136
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s66));
return &$s67;
block24:;
frost$core$Int64 $tmp68 = (frost$core$Int64) {78};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:137:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp69 = $tmp3.value;
int64_t $tmp70 = $tmp68.value;
bool $tmp71 = $tmp69 == $tmp70;
frost$core$Bit $tmp72 = frost$core$Bit$init$builtin_bit($tmp71);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:137
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s74));
return &$s75;
block27:;
frost$core$Int64 $tmp76 = (frost$core$Int64) {30};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:138:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp77 = $tmp3.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 == $tmp78;
frost$core$Bit $tmp80 = frost$core$Bit$init$builtin_bit($tmp79);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s82));
return &$s83;
block30:;
frost$core$Int64 $tmp84 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:139:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp85 = $tmp3.value;
int64_t $tmp86 = $tmp84.value;
bool $tmp87 = $tmp85 == $tmp86;
frost$core$Bit $tmp88 = frost$core$Bit$init$builtin_bit($tmp87);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:139
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s90));
return &$s91;
block33:;
frost$core$Int64 $tmp92 = (frost$core$Int64) {88};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:140:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp93 = $tmp3.value;
int64_t $tmp94 = $tmp92.value;
bool $tmp95 = $tmp93 == $tmp94;
frost$core$Bit $tmp96 = frost$core$Bit$init$builtin_bit($tmp95);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:140
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s98));
return &$s99;
block36:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {74};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:141:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp101 = $tmp3.value;
int64_t $tmp102 = $tmp100.value;
bool $tmp103 = $tmp101 == $tmp102;
frost$core$Bit $tmp104 = frost$core$Bit$init$builtin_bit($tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:141
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s106));
return &$s107;
block39:;
frost$core$Int64 $tmp108 = (frost$core$Int64) {38};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:142:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp109 = $tmp3.value;
int64_t $tmp110 = $tmp108.value;
bool $tmp111 = $tmp109 == $tmp110;
frost$core$Bit $tmp112 = frost$core$Bit$init$builtin_bit($tmp111);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s114));
return &$s115;
block42:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {110};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:143:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp117 = $tmp3.value;
int64_t $tmp118 = $tmp116.value;
bool $tmp119 = $tmp117 == $tmp118;
frost$core$Bit $tmp120 = frost$core$Bit$init$builtin_bit($tmp119);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s122));
return &$s123;
block45:;
frost$core$Int64 $tmp124 = (frost$core$Int64) {29};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:144:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp125 = $tmp3.value;
int64_t $tmp126 = $tmp124.value;
bool $tmp127 = $tmp125 == $tmp126;
frost$core$Bit $tmp128 = frost$core$Bit$init$builtin_bit($tmp127);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:144
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s130));
return &$s131;
block48:;
frost$core$Int64 $tmp132 = (frost$core$Int64) {66};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:145:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp133 = $tmp3.value;
int64_t $tmp134 = $tmp132.value;
bool $tmp135 = $tmp133 == $tmp134;
frost$core$Bit $tmp136 = frost$core$Bit$init$builtin_bit($tmp135);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s138));
return &$s139;
block51:;
frost$core$Int64 $tmp140 = (frost$core$Int64) {25};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:146:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp141 = $tmp3.value;
int64_t $tmp142 = $tmp140.value;
bool $tmp143 = $tmp141 == $tmp142;
frost$core$Bit $tmp144 = frost$core$Bit$init$builtin_bit($tmp143);
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:146
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s146));
return &$s147;
block54:;
frost$core$Int64 $tmp148 = (frost$core$Int64) {102};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:147:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp149 = $tmp3.value;
int64_t $tmp150 = $tmp148.value;
bool $tmp151 = $tmp149 == $tmp150;
frost$core$Bit $tmp152 = frost$core$Bit$init$builtin_bit($tmp151);
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:147
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s154));
return &$s155;
block57:;
frost$core$Int64 $tmp156 = (frost$core$Int64) {39};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:148:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp157 = $tmp3.value;
int64_t $tmp158 = $tmp156.value;
bool $tmp159 = $tmp157 == $tmp158;
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit($tmp159);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:148
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s162));
return &$s163;
block60:;
frost$core$Int64 $tmp164 = (frost$core$Int64) {23};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:149:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp165 = $tmp3.value;
int64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 == $tmp166;
frost$core$Bit $tmp168 = frost$core$Bit$init$builtin_bit($tmp167);
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:149
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s170));
return &$s171;
block63:;
frost$core$Int64 $tmp172 = (frost$core$Int64) {37};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:150:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp173 = $tmp3.value;
int64_t $tmp174 = $tmp172.value;
bool $tmp175 = $tmp173 == $tmp174;
frost$core$Bit $tmp176 = frost$core$Bit$init$builtin_bit($tmp175);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:150
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s178));
return &$s179;
block66:;
frost$core$Int64 $tmp180 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:151:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp181 = $tmp3.value;
int64_t $tmp182 = $tmp180.value;
bool $tmp183 = $tmp181 == $tmp182;
frost$core$Bit $tmp184 = frost$core$Bit$init$builtin_bit($tmp183);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:151
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s186));
return &$s187;
block69:;
frost$core$Int64 $tmp188 = (frost$core$Int64) {95};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:152:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp189 = $tmp3.value;
int64_t $tmp190 = $tmp188.value;
bool $tmp191 = $tmp189 == $tmp190;
frost$core$Bit $tmp192 = frost$core$Bit$init$builtin_bit($tmp191);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:152
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s194));
return &$s195;
block72:;
frost$core$Int64 $tmp196 = (frost$core$Int64) {81};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:153:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp197 = $tmp3.value;
int64_t $tmp198 = $tmp196.value;
bool $tmp199 = $tmp197 == $tmp198;
frost$core$Bit $tmp200 = frost$core$Bit$init$builtin_bit($tmp199);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:153
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s202));
return &$s203;
block75:;
frost$core$Int64 $tmp204 = (frost$core$Int64) {44};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:154:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp205 = $tmp3.value;
int64_t $tmp206 = $tmp204.value;
bool $tmp207 = $tmp205 == $tmp206;
frost$core$Bit $tmp208 = frost$core$Bit$init$builtin_bit($tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:154
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s210));
return &$s211;
block78:;
frost$core$Int64 $tmp212 = (frost$core$Int64) {35};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp213 = $tmp3.value;
int64_t $tmp214 = $tmp212.value;
bool $tmp215 = $tmp213 == $tmp214;
frost$core$Bit $tmp216 = frost$core$Bit$init$builtin_bit($tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:155
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s218));
return &$s219;
block81:;
frost$core$Int64 $tmp220 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:156:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp221 = $tmp3.value;
int64_t $tmp222 = $tmp220.value;
bool $tmp223 = $tmp221 == $tmp222;
frost$core$Bit $tmp224 = frost$core$Bit$init$builtin_bit($tmp223);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:156
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s226));
return &$s227;
block84:;
frost$core$Int64 $tmp228 = (frost$core$Int64) {61};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:157:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp229 = $tmp3.value;
int64_t $tmp230 = $tmp228.value;
bool $tmp231 = $tmp229 == $tmp230;
frost$core$Bit $tmp232 = frost$core$Bit$init$builtin_bit($tmp231);
bool $tmp233 = $tmp232.value;
if ($tmp233) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:157
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s234));
return &$s235;
block87:;
frost$core$Int64 $tmp236 = (frost$core$Int64) {83};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp237 = $tmp3.value;
int64_t $tmp238 = $tmp236.value;
bool $tmp239 = $tmp237 == $tmp238;
frost$core$Bit $tmp240 = frost$core$Bit$init$builtin_bit($tmp239);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block89; else goto block90;
block89:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:158
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s242));
return &$s243;
block90:;
frost$core$Int64 $tmp244 = (frost$core$Int64) {50};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:159:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp245 = $tmp3.value;
int64_t $tmp246 = $tmp244.value;
bool $tmp247 = $tmp245 == $tmp246;
frost$core$Bit $tmp248 = frost$core$Bit$init$builtin_bit($tmp247);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:159
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s250));
return &$s251;
block93:;
frost$core$Int64 $tmp252 = (frost$core$Int64) {52};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:160:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp253 = $tmp3.value;
int64_t $tmp254 = $tmp252.value;
bool $tmp255 = $tmp253 == $tmp254;
frost$core$Bit $tmp256 = frost$core$Bit$init$builtin_bit($tmp255);
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block95; else goto block96;
block95:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:160
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s258));
return &$s259;
block96:;
frost$core$Int64 $tmp260 = (frost$core$Int64) {76};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:161:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp261 = $tmp3.value;
int64_t $tmp262 = $tmp260.value;
bool $tmp263 = $tmp261 == $tmp262;
frost$core$Bit $tmp264 = frost$core$Bit$init$builtin_bit($tmp263);
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:161
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s266));
return &$s267;
block99:;
frost$core$Int64 $tmp268 = (frost$core$Int64) {79};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:162:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp269 = $tmp3.value;
int64_t $tmp270 = $tmp268.value;
bool $tmp271 = $tmp269 == $tmp270;
frost$core$Bit $tmp272 = frost$core$Bit$init$builtin_bit($tmp271);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:162
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s274));
return &$s275;
block102:;
frost$core$Int64 $tmp276 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:163:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp277 = $tmp3.value;
int64_t $tmp278 = $tmp276.value;
bool $tmp279 = $tmp277 == $tmp278;
frost$core$Bit $tmp280 = frost$core$Bit$init$builtin_bit($tmp279);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:163
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s282));
return &$s283;
block105:;
frost$core$Int64 $tmp284 = (frost$core$Int64) {21};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:164:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp285 = $tmp3.value;
int64_t $tmp286 = $tmp284.value;
bool $tmp287 = $tmp285 == $tmp286;
frost$core$Bit $tmp288 = frost$core$Bit$init$builtin_bit($tmp287);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block107; else goto block108;
block107:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:164
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s290));
return &$s291;
block108:;
frost$core$Int64 $tmp292 = (frost$core$Int64) {92};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:165:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp293 = $tmp3.value;
int64_t $tmp294 = $tmp292.value;
bool $tmp295 = $tmp293 == $tmp294;
frost$core$Bit $tmp296 = frost$core$Bit$init$builtin_bit($tmp295);
bool $tmp297 = $tmp296.value;
if ($tmp297) goto block110; else goto block111;
block110:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:165
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s298));
return &$s299;
block111:;
frost$core$Int64 $tmp300 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp301 = $tmp3.value;
int64_t $tmp302 = $tmp300.value;
bool $tmp303 = $tmp301 == $tmp302;
frost$core$Bit $tmp304 = frost$core$Bit$init$builtin_bit($tmp303);
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:166
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s306));
return &$s307;
block114:;
frost$core$Int64 $tmp308 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:167:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp309 = $tmp3.value;
int64_t $tmp310 = $tmp308.value;
bool $tmp311 = $tmp309 == $tmp310;
frost$core$Bit $tmp312 = frost$core$Bit$init$builtin_bit($tmp311);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:167
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s314));
return &$s315;
block117:;
frost$core$Int64 $tmp316 = (frost$core$Int64) {31};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:168:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp317 = $tmp3.value;
int64_t $tmp318 = $tmp316.value;
bool $tmp319 = $tmp317 == $tmp318;
frost$core$Bit $tmp320 = frost$core$Bit$init$builtin_bit($tmp319);
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block119; else goto block120;
block119:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:168
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s322));
return &$s323;
block120:;
frost$core$Int64 $tmp324 = (frost$core$Int64) {47};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:169:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp325 = $tmp3.value;
int64_t $tmp326 = $tmp324.value;
bool $tmp327 = $tmp325 == $tmp326;
frost$core$Bit $tmp328 = frost$core$Bit$init$builtin_bit($tmp327);
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:169
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s330));
return &$s331;
block123:;
frost$core$Int64 $tmp332 = (frost$core$Int64) {105};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:170:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp333 = $tmp3.value;
int64_t $tmp334 = $tmp332.value;
bool $tmp335 = $tmp333 == $tmp334;
frost$core$Bit $tmp336 = frost$core$Bit$init$builtin_bit($tmp335);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block125; else goto block126;
block125:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:170
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s338));
return &$s339;
block126:;
frost$core$Int64 $tmp340 = (frost$core$Int64) {45};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:171:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp341 = $tmp3.value;
int64_t $tmp342 = $tmp340.value;
bool $tmp343 = $tmp341 == $tmp342;
frost$core$Bit $tmp344 = frost$core$Bit$init$builtin_bit($tmp343);
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block128; else goto block129;
block128:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:171
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s346));
return &$s347;
block129:;
frost$core$Int64 $tmp348 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:172:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp349 = $tmp3.value;
int64_t $tmp350 = $tmp348.value;
bool $tmp351 = $tmp349 == $tmp350;
frost$core$Bit $tmp352 = frost$core$Bit$init$builtin_bit($tmp351);
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block131; else goto block132;
block131:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:172
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s354));
return &$s355;
block132:;
frost$core$Int64 $tmp356 = (frost$core$Int64) {103};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:173:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp357 = $tmp3.value;
int64_t $tmp358 = $tmp356.value;
bool $tmp359 = $tmp357 == $tmp358;
frost$core$Bit $tmp360 = frost$core$Bit$init$builtin_bit($tmp359);
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:173
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s362));
return &$s363;
block135:;
frost$core$Int64 $tmp364 = (frost$core$Int64) {85};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:174:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp365 = $tmp3.value;
int64_t $tmp366 = $tmp364.value;
bool $tmp367 = $tmp365 == $tmp366;
frost$core$Bit $tmp368 = frost$core$Bit$init$builtin_bit($tmp367);
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block137; else goto block138;
block137:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:174
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s370));
return &$s371;
block138:;
frost$core$Int64 $tmp372 = (frost$core$Int64) {104};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:175:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp373 = $tmp3.value;
int64_t $tmp374 = $tmp372.value;
bool $tmp375 = $tmp373 == $tmp374;
frost$core$Bit $tmp376 = frost$core$Bit$init$builtin_bit($tmp375);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block140; else goto block141;
block140:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:175
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s378));
return &$s379;
block141:;
frost$core$Int64 $tmp380 = (frost$core$Int64) {60};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:176:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp381 = $tmp3.value;
int64_t $tmp382 = $tmp380.value;
bool $tmp383 = $tmp381 == $tmp382;
frost$core$Bit $tmp384 = frost$core$Bit$init$builtin_bit($tmp383);
bool $tmp385 = $tmp384.value;
if ($tmp385) goto block143; else goto block144;
block143:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:176
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s386));
return &$s387;
block144:;
frost$core$Int64 $tmp388 = (frost$core$Int64) {77};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:177:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp389 = $tmp3.value;
int64_t $tmp390 = $tmp388.value;
bool $tmp391 = $tmp389 == $tmp390;
frost$core$Bit $tmp392 = frost$core$Bit$init$builtin_bit($tmp391);
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block146; else goto block147;
block146:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:177
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s394));
return &$s395;
block147:;
frost$core$Int64 $tmp396 = (frost$core$Int64) {106};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:178:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp397 = $tmp3.value;
int64_t $tmp398 = $tmp396.value;
bool $tmp399 = $tmp397 == $tmp398;
frost$core$Bit $tmp400 = frost$core$Bit$init$builtin_bit($tmp399);
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block149; else goto block150;
block149:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:178
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s402));
return &$s403;
block150:;
frost$core$Int64 $tmp404 = (frost$core$Int64) {87};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:179:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp405 = $tmp3.value;
int64_t $tmp406 = $tmp404.value;
bool $tmp407 = $tmp405 == $tmp406;
frost$core$Bit $tmp408 = frost$core$Bit$init$builtin_bit($tmp407);
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block152; else goto block153;
block152:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:179
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s410));
return &$s411;
block153:;
frost$core$Int64 $tmp412 = (frost$core$Int64) {72};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:180:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp413 = $tmp3.value;
int64_t $tmp414 = $tmp412.value;
bool $tmp415 = $tmp413 == $tmp414;
frost$core$Bit $tmp416 = frost$core$Bit$init$builtin_bit($tmp415);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block155; else goto block156;
block155:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:180
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s418));
return &$s419;
block156:;
frost$core$Int64 $tmp420 = (frost$core$Int64) {90};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:181:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp421 = $tmp3.value;
int64_t $tmp422 = $tmp420.value;
bool $tmp423 = $tmp421 == $tmp422;
frost$core$Bit $tmp424 = frost$core$Bit$init$builtin_bit($tmp423);
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block158; else goto block159;
block158:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:181
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s426));
return &$s427;
block159:;
frost$core$Int64 $tmp428 = (frost$core$Int64) {33};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:182:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp429 = $tmp3.value;
int64_t $tmp430 = $tmp428.value;
bool $tmp431 = $tmp429 == $tmp430;
frost$core$Bit $tmp432 = frost$core$Bit$init$builtin_bit($tmp431);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block161; else goto block162;
block161:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:182
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s434));
return &$s435;
block162:;
frost$core$Int64 $tmp436 = (frost$core$Int64) {108};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:183:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp437 = $tmp3.value;
int64_t $tmp438 = $tmp436.value;
bool $tmp439 = $tmp437 == $tmp438;
frost$core$Bit $tmp440 = frost$core$Bit$init$builtin_bit($tmp439);
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:183
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s442));
return &$s443;
block165:;
frost$core$Int64 $tmp444 = (frost$core$Int64) {96};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:184:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp445 = $tmp3.value;
int64_t $tmp446 = $tmp444.value;
bool $tmp447 = $tmp445 == $tmp446;
frost$core$Bit $tmp448 = frost$core$Bit$init$builtin_bit($tmp447);
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block167; else goto block168;
block167:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:184
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s450));
return &$s451;
block168:;
frost$core$Int64 $tmp452 = (frost$core$Int64) {20};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:185:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp453 = $tmp3.value;
int64_t $tmp454 = $tmp452.value;
bool $tmp455 = $tmp453 == $tmp454;
frost$core$Bit $tmp456 = frost$core$Bit$init$builtin_bit($tmp455);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s458));
return &$s459;
block171:;
frost$core$Int64 $tmp460 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:186:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp461 = $tmp3.value;
int64_t $tmp462 = $tmp460.value;
bool $tmp463 = $tmp461 == $tmp462;
frost$core$Bit $tmp464 = frost$core$Bit$init$builtin_bit($tmp463);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block173; else goto block174;
block173:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:186
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s466));
return &$s467;
block174:;
frost$core$Int64 $tmp468 = (frost$core$Int64) {65};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:187:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp469 = $tmp3.value;
int64_t $tmp470 = $tmp468.value;
bool $tmp471 = $tmp469 == $tmp470;
frost$core$Bit $tmp472 = frost$core$Bit$init$builtin_bit($tmp471);
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:187
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s474));
return &$s475;
block177:;
frost$core$Int64 $tmp476 = (frost$core$Int64) {94};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:188:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp477 = $tmp3.value;
int64_t $tmp478 = $tmp476.value;
bool $tmp479 = $tmp477 == $tmp478;
frost$core$Bit $tmp480 = frost$core$Bit$init$builtin_bit($tmp479);
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block179; else goto block180;
block179:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:188
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s482));
return &$s483;
block180:;
frost$core$Int64 $tmp484 = (frost$core$Int64) {49};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:189:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp485 = $tmp3.value;
int64_t $tmp486 = $tmp484.value;
bool $tmp487 = $tmp485 == $tmp486;
frost$core$Bit $tmp488 = frost$core$Bit$init$builtin_bit($tmp487);
bool $tmp489 = $tmp488.value;
if ($tmp489) goto block182; else goto block183;
block182:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:189
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s490));
return &$s491;
block183:;
frost$core$Int64 $tmp492 = (frost$core$Int64) {89};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:190:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp493 = $tmp3.value;
int64_t $tmp494 = $tmp492.value;
bool $tmp495 = $tmp493 == $tmp494;
frost$core$Bit $tmp496 = frost$core$Bit$init$builtin_bit($tmp495);
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block185; else goto block186;
block185:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:190
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s498));
return &$s499;
block186:;
frost$core$Int64 $tmp500 = (frost$core$Int64) {46};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:191:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp501 = $tmp3.value;
int64_t $tmp502 = $tmp500.value;
bool $tmp503 = $tmp501 == $tmp502;
frost$core$Bit $tmp504 = frost$core$Bit$init$builtin_bit($tmp503);
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block188; else goto block189;
block188:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:191
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s506));
return &$s507;
block189:;
frost$core$Int64 $tmp508 = (frost$core$Int64) {64};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:192:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp509 = $tmp3.value;
int64_t $tmp510 = $tmp508.value;
bool $tmp511 = $tmp509 == $tmp510;
frost$core$Bit $tmp512 = frost$core$Bit$init$builtin_bit($tmp511);
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block191; else goto block192;
block191:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:192
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s514));
return &$s515;
block192:;
frost$core$Int64 $tmp516 = (frost$core$Int64) {24};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:193:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp517 = $tmp3.value;
int64_t $tmp518 = $tmp516.value;
bool $tmp519 = $tmp517 == $tmp518;
frost$core$Bit $tmp520 = frost$core$Bit$init$builtin_bit($tmp519);
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block194; else goto block195;
block194:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:193
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s522));
return &$s523;
block195:;
frost$core$Int64 $tmp524 = (frost$core$Int64) {42};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:194:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp525 = $tmp3.value;
int64_t $tmp526 = $tmp524.value;
bool $tmp527 = $tmp525 == $tmp526;
frost$core$Bit $tmp528 = frost$core$Bit$init$builtin_bit($tmp527);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block197; else goto block198;
block197:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:194
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s530));
return &$s531;
block198:;
frost$core$Int64 $tmp532 = (frost$core$Int64) {84};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:195:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp533 = $tmp3.value;
int64_t $tmp534 = $tmp532.value;
bool $tmp535 = $tmp533 == $tmp534;
frost$core$Bit $tmp536 = frost$core$Bit$init$builtin_bit($tmp535);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block200; else goto block201;
block200:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:195
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s538));
return &$s539;
block201:;
frost$core$Int64 $tmp540 = (frost$core$Int64) {22};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:196:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp541 = $tmp3.value;
int64_t $tmp542 = $tmp540.value;
bool $tmp543 = $tmp541 == $tmp542;
frost$core$Bit $tmp544 = frost$core$Bit$init$builtin_bit($tmp543);
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block203; else goto block204;
block203:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:196
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s546));
return &$s547;
block204:;
frost$core$Int64 $tmp548 = (frost$core$Int64) {41};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:197:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp549 = $tmp3.value;
int64_t $tmp550 = $tmp548.value;
bool $tmp551 = $tmp549 == $tmp550;
frost$core$Bit $tmp552 = frost$core$Bit$init$builtin_bit($tmp551);
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block206; else goto block207;
block206:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:197
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s554));
return &$s555;
block207:;
frost$core$Int64 $tmp556 = (frost$core$Int64) {26};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:198:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp557 = $tmp3.value;
int64_t $tmp558 = $tmp556.value;
bool $tmp559 = $tmp557 == $tmp558;
frost$core$Bit $tmp560 = frost$core$Bit$init$builtin_bit($tmp559);
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block209; else goto block210;
block209:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:198
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s562));
return &$s563;
block210:;
frost$core$Int64 $tmp564 = (frost$core$Int64) {34};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:199:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp565 = $tmp3.value;
int64_t $tmp566 = $tmp564.value;
bool $tmp567 = $tmp565 == $tmp566;
frost$core$Bit $tmp568 = frost$core$Bit$init$builtin_bit($tmp567);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block212; else goto block213;
block212:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:199
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s570));
return &$s571;
block213:;
frost$core$Int64 $tmp572 = (frost$core$Int64) {59};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:200:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp573 = $tmp3.value;
int64_t $tmp574 = $tmp572.value;
bool $tmp575 = $tmp573 == $tmp574;
frost$core$Bit $tmp576 = frost$core$Bit$init$builtin_bit($tmp575);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block215; else goto block216;
block215:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:200
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s578));
return &$s579;
block216:;
frost$core$Int64 $tmp580 = (frost$core$Int64) {73};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:201:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp581 = $tmp3.value;
int64_t $tmp582 = $tmp580.value;
bool $tmp583 = $tmp581 == $tmp582;
frost$core$Bit $tmp584 = frost$core$Bit$init$builtin_bit($tmp583);
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block218; else goto block219;
block218:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:201
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s586));
return &$s587;
block219:;
frost$core$Int64 $tmp588 = (frost$core$Int64) {32};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:202:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp589 = $tmp3.value;
int64_t $tmp590 = $tmp588.value;
bool $tmp591 = $tmp589 == $tmp590;
frost$core$Bit $tmp592 = frost$core$Bit$init$builtin_bit($tmp591);
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block221; else goto block222;
block221:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:202
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s594));
return &$s595;
block222:;
frost$core$Int64 $tmp596 = (frost$core$Int64) {56};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:203:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp597 = $tmp3.value;
int64_t $tmp598 = $tmp596.value;
bool $tmp599 = $tmp597 == $tmp598;
frost$core$Bit $tmp600 = frost$core$Bit$init$builtin_bit($tmp599);
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block224; else goto block225;
block224:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:203
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s602));
return &$s603;
block225:;
frost$core$Int64 $tmp604 = (frost$core$Int64) {109};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:204:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp605 = $tmp3.value;
int64_t $tmp606 = $tmp604.value;
bool $tmp607 = $tmp605 == $tmp606;
frost$core$Bit $tmp608 = frost$core$Bit$init$builtin_bit($tmp607);
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block227; else goto block228;
block227:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:204
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s610));
return &$s611;
block228:;
frost$core$Int64 $tmp612 = (frost$core$Int64) {70};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:205:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp613 = $tmp3.value;
int64_t $tmp614 = $tmp612.value;
bool $tmp615 = $tmp613 == $tmp614;
frost$core$Bit $tmp616 = frost$core$Bit$init$builtin_bit($tmp615);
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block230; else goto block231;
block230:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:205
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s618));
return &$s619;
block231:;
frost$core$Int64 $tmp620 = (frost$core$Int64) {101};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:206:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp621 = $tmp3.value;
int64_t $tmp622 = $tmp620.value;
bool $tmp623 = $tmp621 == $tmp622;
frost$core$Bit $tmp624 = frost$core$Bit$init$builtin_bit($tmp623);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block233; else goto block234;
block233:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:206
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s626));
return &$s627;
block234:;
frost$core$Int64 $tmp628 = (frost$core$Int64) {19};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:207:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp629 = $tmp3.value;
int64_t $tmp630 = $tmp628.value;
bool $tmp631 = $tmp629 == $tmp630;
frost$core$Bit $tmp632 = frost$core$Bit$init$builtin_bit($tmp631);
bool $tmp633 = $tmp632.value;
if ($tmp633) goto block236; else goto block237;
block236:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:207
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s634));
return &$s635;
block237:;
frost$core$Int64 $tmp636 = (frost$core$Int64) {54};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:208:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp637 = $tmp3.value;
int64_t $tmp638 = $tmp636.value;
bool $tmp639 = $tmp637 == $tmp638;
frost$core$Bit $tmp640 = frost$core$Bit$init$builtin_bit($tmp639);
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block239; else goto block240;
block239:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:208
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s642));
return &$s643;
block240:;
frost$core$Int64 $tmp644 = (frost$core$Int64) {111};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:209:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp645 = $tmp3.value;
int64_t $tmp646 = $tmp644.value;
bool $tmp647 = $tmp645 == $tmp646;
frost$core$Bit $tmp648 = frost$core$Bit$init$builtin_bit($tmp647);
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block242; else goto block243;
block242:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:209
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s650));
return &$s651;
block243:;
frost$core$Int64 $tmp652 = (frost$core$Int64) {67};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:210:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp653 = $tmp3.value;
int64_t $tmp654 = $tmp652.value;
bool $tmp655 = $tmp653 == $tmp654;
frost$core$Bit $tmp656 = frost$core$Bit$init$builtin_bit($tmp655);
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block245; else goto block246;
block245:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:210
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s658));
return &$s659;
block246:;
frost$core$Int64 $tmp660 = (frost$core$Int64) {27};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:211:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp661 = $tmp3.value;
int64_t $tmp662 = $tmp660.value;
bool $tmp663 = $tmp661 == $tmp662;
frost$core$Bit $tmp664 = frost$core$Bit$init$builtin_bit($tmp663);
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block248; else goto block249;
block248:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:211
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s666));
return &$s667;
block249:;
frost$core$Int64 $tmp668 = (frost$core$Int64) {100};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:212:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp669 = $tmp3.value;
int64_t $tmp670 = $tmp668.value;
bool $tmp671 = $tmp669 == $tmp670;
frost$core$Bit $tmp672 = frost$core$Bit$init$builtin_bit($tmp671);
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block251; else goto block252;
block251:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:212
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s674));
return &$s675;
block252:;
frost$core$Int64 $tmp676 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:213:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp677 = $tmp3.value;
int64_t $tmp678 = $tmp676.value;
bool $tmp679 = $tmp677 == $tmp678;
frost$core$Bit $tmp680 = frost$core$Bit$init$builtin_bit($tmp679);
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block254; else goto block255;
block254:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:213
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s682));
return &$s683;
block255:;
frost$core$Int64 $tmp684 = (frost$core$Int64) {48};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:214:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp685 = $tmp3.value;
int64_t $tmp686 = $tmp684.value;
bool $tmp687 = $tmp685 == $tmp686;
frost$core$Bit $tmp688 = frost$core$Bit$init$builtin_bit($tmp687);
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block257; else goto block258;
block257:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:214
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s690));
return &$s691;
block258:;
frost$core$Int64 $tmp692 = (frost$core$Int64) {28};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:215:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp693 = $tmp3.value;
int64_t $tmp694 = $tmp692.value;
bool $tmp695 = $tmp693 == $tmp694;
frost$core$Bit $tmp696 = frost$core$Bit$init$builtin_bit($tmp695);
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block260; else goto block261;
block260:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:215
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s698));
return &$s699;
block261:;
frost$core$Int64 $tmp700 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:216:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp701 = $tmp3.value;
int64_t $tmp702 = $tmp700.value;
bool $tmp703 = $tmp701 == $tmp702;
frost$core$Bit $tmp704 = frost$core$Bit$init$builtin_bit($tmp703);
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block263; else goto block264;
block263:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:216
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s706));
return &$s707;
block264:;
frost$core$Int64 $tmp708 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:217:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp709 = $tmp3.value;
int64_t $tmp710 = $tmp708.value;
bool $tmp711 = $tmp709 == $tmp710;
frost$core$Bit $tmp712 = frost$core$Bit$init$builtin_bit($tmp711);
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block266; else goto block267;
block266:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:217
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s714));
return &$s715;
block267:;
frost$core$Int64 $tmp716 = (frost$core$Int64) {69};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:218:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp717 = $tmp3.value;
int64_t $tmp718 = $tmp716.value;
bool $tmp719 = $tmp717 == $tmp718;
frost$core$Bit $tmp720 = frost$core$Bit$init$builtin_bit($tmp719);
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block269; else goto block270;
block269:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:218
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s722));
return &$s723;
block270:;
frost$core$Int64 $tmp724 = (frost$core$Int64) {58};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:219:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp725 = $tmp3.value;
int64_t $tmp726 = $tmp724.value;
bool $tmp727 = $tmp725 == $tmp726;
frost$core$Bit $tmp728 = frost$core$Bit$init$builtin_bit($tmp727);
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block272; else goto block273;
block272:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:219
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s730));
return &$s731;
block273:;
frost$core$Int64 $tmp732 = (frost$core$Int64) {53};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:220:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp733 = $tmp3.value;
int64_t $tmp734 = $tmp732.value;
bool $tmp735 = $tmp733 == $tmp734;
frost$core$Bit $tmp736 = frost$core$Bit$init$builtin_bit($tmp735);
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block275; else goto block276;
block275:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:220
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s738));
return &$s739;
block276:;
frost$core$Int64 $tmp740 = (frost$core$Int64) {75};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:221:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp741 = $tmp3.value;
int64_t $tmp742 = $tmp740.value;
bool $tmp743 = $tmp741 == $tmp742;
frost$core$Bit $tmp744 = frost$core$Bit$init$builtin_bit($tmp743);
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block278; else goto block279;
block278:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:221
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s746));
return &$s747;
block279:;
frost$core$Int64 $tmp748 = (frost$core$Int64) {112};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:222:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp749 = $tmp3.value;
int64_t $tmp750 = $tmp748.value;
bool $tmp751 = $tmp749 == $tmp750;
frost$core$Bit $tmp752 = frost$core$Bit$init$builtin_bit($tmp751);
bool $tmp753 = $tmp752.value;
if ($tmp753) goto block281; else goto block282;
block281:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s754));
return &$s755;
block282:;
frost$core$Int64 $tmp756 = (frost$core$Int64) {63};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:223:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp757 = $tmp3.value;
int64_t $tmp758 = $tmp756.value;
bool $tmp759 = $tmp757 == $tmp758;
frost$core$Bit $tmp760 = frost$core$Bit$init$builtin_bit($tmp759);
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block284; else goto block285;
block284:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:223
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s762));
return &$s763;
block285:;
frost$core$Int64 $tmp764 = (frost$core$Int64) {97};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:224:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp765 = $tmp3.value;
int64_t $tmp766 = $tmp764.value;
bool $tmp767 = $tmp765 == $tmp766;
frost$core$Bit $tmp768 = frost$core$Bit$init$builtin_bit($tmp767);
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block287; else goto block288;
block287:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:224
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s770));
return &$s771;
block288:;
frost$core$Int64 $tmp772 = (frost$core$Int64) {57};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:225:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp773 = $tmp3.value;
int64_t $tmp774 = $tmp772.value;
bool $tmp775 = $tmp773 == $tmp774;
frost$core$Bit $tmp776 = frost$core$Bit$init$builtin_bit($tmp775);
bool $tmp777 = $tmp776.value;
if ($tmp777) goto block290; else goto block291;
block290:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:225
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s778));
return &$s779;
block291:;
frost$core$Int64 $tmp780 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:226:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp781 = $tmp3.value;
int64_t $tmp782 = $tmp780.value;
bool $tmp783 = $tmp781 == $tmp782;
frost$core$Bit $tmp784 = frost$core$Bit$init$builtin_bit($tmp783);
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block293; else goto block294;
block293:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:226
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s786));
return &$s787;
block294:;
frost$core$Int64 $tmp788 = (frost$core$Int64) {82};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:227:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp789 = $tmp3.value;
int64_t $tmp790 = $tmp788.value;
bool $tmp791 = $tmp789 == $tmp790;
frost$core$Bit $tmp792 = frost$core$Bit$init$builtin_bit($tmp791);
bool $tmp793 = $tmp792.value;
if ($tmp793) goto block296; else goto block297;
block296:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:227
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s794));
return &$s795;
block297:;
frost$core$Int64 $tmp796 = (frost$core$Int64) {91};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:228:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp797 = $tmp3.value;
int64_t $tmp798 = $tmp796.value;
bool $tmp799 = $tmp797 == $tmp798;
frost$core$Bit $tmp800 = frost$core$Bit$init$builtin_bit($tmp799);
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block299; else goto block300;
block299:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:228
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s802));
return &$s803;
block300:;
frost$core$Int64 $tmp804 = (frost$core$Int64) {93};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:229:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp805 = $tmp3.value;
int64_t $tmp806 = $tmp804.value;
bool $tmp807 = $tmp805 == $tmp806;
frost$core$Bit $tmp808 = frost$core$Bit$init$builtin_bit($tmp807);
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block302; else goto block303;
block302:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:229
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s810));
return &$s811;
block303:;
frost$core$Int64 $tmp812 = (frost$core$Int64) {86};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:230:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp813 = $tmp3.value;
int64_t $tmp814 = $tmp812.value;
bool $tmp815 = $tmp813 == $tmp814;
frost$core$Bit $tmp816 = frost$core$Bit$init$builtin_bit($tmp815);
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block305; else goto block306;
block305:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:230
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s818));
return &$s819;
block306:;
frost$core$Int64 $tmp820 = (frost$core$Int64) {71};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:231:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp821 = $tmp3.value;
int64_t $tmp822 = $tmp820.value;
bool $tmp823 = $tmp821 == $tmp822;
frost$core$Bit $tmp824 = frost$core$Bit$init$builtin_bit($tmp823);
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block308; else goto block309;
block308:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:231
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s826));
return &$s827;
block309:;
frost$core$Int64 $tmp828 = (frost$core$Int64) {55};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:232:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp829 = $tmp3.value;
int64_t $tmp830 = $tmp828.value;
bool $tmp831 = $tmp829 == $tmp830;
frost$core$Bit $tmp832 = frost$core$Bit$init$builtin_bit($tmp831);
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block311; else goto block312;
block311:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:232
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s834));
return &$s835;
block312:;
frost$core$Int64 $tmp836 = (frost$core$Int64) {80};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:233:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp837 = $tmp3.value;
int64_t $tmp838 = $tmp836.value;
bool $tmp839 = $tmp837 == $tmp838;
frost$core$Bit $tmp840 = frost$core$Bit$init$builtin_bit($tmp839);
bool $tmp841 = $tmp840.value;
if ($tmp841) goto block314; else goto block315;
block314:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:233
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s842));
return &$s843;
block315:;
frost$core$Int64 $tmp844 = (frost$core$Int64) {98};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:234:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp845 = $tmp3.value;
int64_t $tmp846 = $tmp844.value;
bool $tmp847 = $tmp845 == $tmp846;
frost$core$Bit $tmp848 = frost$core$Bit$init$builtin_bit($tmp847);
bool $tmp849 = $tmp848.value;
if ($tmp849) goto block317; else goto block318;
block317:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:234
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s850));
return &$s851;
block318:;
frost$core$Int64 $tmp852 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:235:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp853 = $tmp3.value;
int64_t $tmp854 = $tmp852.value;
bool $tmp855 = $tmp853 == $tmp854;
frost$core$Bit $tmp856 = frost$core$Bit$init$builtin_bit($tmp855);
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block320; else goto block321;
block320:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s858));
return &$s859;
block321:;
frost$core$Int64 $tmp860 = (frost$core$Int64) {40};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:236:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp861 = $tmp3.value;
int64_t $tmp862 = $tmp860.value;
bool $tmp863 = $tmp861 == $tmp862;
frost$core$Bit $tmp864 = frost$core$Bit$init$builtin_bit($tmp863);
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block323; else goto block324;
block323:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:236
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s866));
return &$s867;
block324:;
frost$core$Int64 $tmp868 = (frost$core$Int64) {43};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:237:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp869 = $tmp3.value;
int64_t $tmp870 = $tmp868.value;
bool $tmp871 = $tmp869 == $tmp870;
frost$core$Bit $tmp872 = frost$core$Bit$init$builtin_bit($tmp871);
bool $tmp873 = $tmp872.value;
if ($tmp873) goto block326; else goto block327;
block326:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:237
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s874));
return &$s875;
block327:;
frost$core$Int64 $tmp876 = (frost$core$Int64) {68};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:238:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp877 = $tmp3.value;
int64_t $tmp878 = $tmp876.value;
bool $tmp879 = $tmp877 == $tmp878;
frost$core$Bit $tmp880 = frost$core$Bit$init$builtin_bit($tmp879);
bool $tmp881 = $tmp880.value;
if ($tmp881) goto block329; else goto block330;
block329:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:238
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s882));
return &$s883;
block330:;
frost$core$Int64 $tmp884 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:239:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp885 = $tmp3.value;
int64_t $tmp886 = $tmp884.value;
bool $tmp887 = $tmp885 == $tmp886;
frost$core$Bit $tmp888 = frost$core$Bit$init$builtin_bit($tmp887);
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block332; else goto block333;
block332:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:239
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s890));
return &$s891;
block333:;
frost$core$Int64 $tmp892 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:240:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp893 = $tmp3.value;
int64_t $tmp894 = $tmp892.value;
bool $tmp895 = $tmp893 == $tmp894;
frost$core$Bit $tmp896 = frost$core$Bit$init$builtin_bit($tmp895);
bool $tmp897 = $tmp896.value;
if ($tmp897) goto block335; else goto block336;
block335:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:240
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s898));
return &$s899;
block336:;
frost$core$Int64 $tmp900 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:241:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp901 = $tmp3.value;
int64_t $tmp902 = $tmp900.value;
bool $tmp903 = $tmp901 == $tmp902;
frost$core$Bit $tmp904 = frost$core$Bit$init$builtin_bit($tmp903);
bool $tmp905 = $tmp904.value;
if ($tmp905) goto block338; else goto block1;
block338:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:241
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s906));
return &$s907;
block1:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:243
frost$core$Int64 $tmp908 = (frost$core$Int64) {243};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s909, $tmp908);
abort(); // unreachable

}
void org$frostlang$frostc$parser$Token$Kind$cleanup(org$frostlang$frostc$parser$Token$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int64 $tmp910 = param0.$rawValue;
frost$core$Int64 $tmp911 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp912 = $tmp910.value;
int64_t $tmp913 = $tmp911.value;
bool $tmp914 = $tmp912 == $tmp913;
frost$core$Bit $tmp915 = frost$core$Bit$init$builtin_bit($tmp914);
bool $tmp916 = $tmp915.value;
if ($tmp916) goto block2; else goto block3;
block2:;
goto block1;
block3:;
frost$core$Int64 $tmp917 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp918 = $tmp910.value;
int64_t $tmp919 = $tmp917.value;
bool $tmp920 = $tmp918 == $tmp919;
frost$core$Bit $tmp921 = frost$core$Bit$init$builtin_bit($tmp920);
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block5; else goto block6;
block5:;
goto block1;
block6:;
frost$core$Int64 $tmp923 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp924 = $tmp910.value;
int64_t $tmp925 = $tmp923.value;
bool $tmp926 = $tmp924 == $tmp925;
frost$core$Bit $tmp927 = frost$core$Bit$init$builtin_bit($tmp926);
bool $tmp928 = $tmp927.value;
if ($tmp928) goto block8; else goto block9;
block8:;
goto block1;
block9:;
frost$core$Int64 $tmp929 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp930 = $tmp910.value;
int64_t $tmp931 = $tmp929.value;
bool $tmp932 = $tmp930 == $tmp931;
frost$core$Bit $tmp933 = frost$core$Bit$init$builtin_bit($tmp932);
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block11; else goto block12;
block11:;
goto block1;
block12:;
frost$core$Int64 $tmp935 = (frost$core$Int64) {4};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp936 = $tmp910.value;
int64_t $tmp937 = $tmp935.value;
bool $tmp938 = $tmp936 == $tmp937;
frost$core$Bit $tmp939 = frost$core$Bit$init$builtin_bit($tmp938);
bool $tmp940 = $tmp939.value;
if ($tmp940) goto block14; else goto block15;
block14:;
goto block1;
block15:;
frost$core$Int64 $tmp941 = (frost$core$Int64) {5};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp942 = $tmp910.value;
int64_t $tmp943 = $tmp941.value;
bool $tmp944 = $tmp942 == $tmp943;
frost$core$Bit $tmp945 = frost$core$Bit$init$builtin_bit($tmp944);
bool $tmp946 = $tmp945.value;
if ($tmp946) goto block17; else goto block18;
block17:;
goto block1;
block18:;
frost$core$Int64 $tmp947 = (frost$core$Int64) {6};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp948 = $tmp910.value;
int64_t $tmp949 = $tmp947.value;
bool $tmp950 = $tmp948 == $tmp949;
frost$core$Bit $tmp951 = frost$core$Bit$init$builtin_bit($tmp950);
bool $tmp952 = $tmp951.value;
if ($tmp952) goto block20; else goto block21;
block20:;
goto block1;
block21:;
frost$core$Int64 $tmp953 = (frost$core$Int64) {7};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp954 = $tmp910.value;
int64_t $tmp955 = $tmp953.value;
bool $tmp956 = $tmp954 == $tmp955;
frost$core$Bit $tmp957 = frost$core$Bit$init$builtin_bit($tmp956);
bool $tmp958 = $tmp957.value;
if ($tmp958) goto block23; else goto block24;
block23:;
goto block1;
block24:;
frost$core$Int64 $tmp959 = (frost$core$Int64) {8};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp960 = $tmp910.value;
int64_t $tmp961 = $tmp959.value;
bool $tmp962 = $tmp960 == $tmp961;
frost$core$Bit $tmp963 = frost$core$Bit$init$builtin_bit($tmp962);
bool $tmp964 = $tmp963.value;
if ($tmp964) goto block26; else goto block27;
block26:;
goto block1;
block27:;
frost$core$Int64 $tmp965 = (frost$core$Int64) {9};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp966 = $tmp910.value;
int64_t $tmp967 = $tmp965.value;
bool $tmp968 = $tmp966 == $tmp967;
frost$core$Bit $tmp969 = frost$core$Bit$init$builtin_bit($tmp968);
bool $tmp970 = $tmp969.value;
if ($tmp970) goto block29; else goto block30;
block29:;
goto block1;
block30:;
frost$core$Int64 $tmp971 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp972 = $tmp910.value;
int64_t $tmp973 = $tmp971.value;
bool $tmp974 = $tmp972 == $tmp973;
frost$core$Bit $tmp975 = frost$core$Bit$init$builtin_bit($tmp974);
bool $tmp976 = $tmp975.value;
if ($tmp976) goto block32; else goto block33;
block32:;
goto block1;
block33:;
frost$core$Int64 $tmp977 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp978 = $tmp910.value;
int64_t $tmp979 = $tmp977.value;
bool $tmp980 = $tmp978 == $tmp979;
frost$core$Bit $tmp981 = frost$core$Bit$init$builtin_bit($tmp980);
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block35; else goto block36;
block35:;
goto block1;
block36:;
frost$core$Int64 $tmp983 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp984 = $tmp910.value;
int64_t $tmp985 = $tmp983.value;
bool $tmp986 = $tmp984 == $tmp985;
frost$core$Bit $tmp987 = frost$core$Bit$init$builtin_bit($tmp986);
bool $tmp988 = $tmp987.value;
if ($tmp988) goto block38; else goto block39;
block38:;
goto block1;
block39:;
frost$core$Int64 $tmp989 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp990 = $tmp910.value;
int64_t $tmp991 = $tmp989.value;
bool $tmp992 = $tmp990 == $tmp991;
frost$core$Bit $tmp993 = frost$core$Bit$init$builtin_bit($tmp992);
bool $tmp994 = $tmp993.value;
if ($tmp994) goto block41; else goto block42;
block41:;
goto block1;
block42:;
frost$core$Int64 $tmp995 = (frost$core$Int64) {14};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp996 = $tmp910.value;
int64_t $tmp997 = $tmp995.value;
bool $tmp998 = $tmp996 == $tmp997;
frost$core$Bit $tmp999 = frost$core$Bit$init$builtin_bit($tmp998);
bool $tmp1000 = $tmp999.value;
if ($tmp1000) goto block44; else goto block45;
block44:;
goto block1;
block45:;
frost$core$Int64 $tmp1001 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1002 = $tmp910.value;
int64_t $tmp1003 = $tmp1001.value;
bool $tmp1004 = $tmp1002 == $tmp1003;
frost$core$Bit $tmp1005 = frost$core$Bit$init$builtin_bit($tmp1004);
bool $tmp1006 = $tmp1005.value;
if ($tmp1006) goto block47; else goto block48;
block47:;
goto block1;
block48:;
frost$core$Int64 $tmp1007 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1008 = $tmp910.value;
int64_t $tmp1009 = $tmp1007.value;
bool $tmp1010 = $tmp1008 == $tmp1009;
frost$core$Bit $tmp1011 = frost$core$Bit$init$builtin_bit($tmp1010);
bool $tmp1012 = $tmp1011.value;
if ($tmp1012) goto block50; else goto block51;
block50:;
goto block1;
block51:;
frost$core$Int64 $tmp1013 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1014 = $tmp910.value;
int64_t $tmp1015 = $tmp1013.value;
bool $tmp1016 = $tmp1014 == $tmp1015;
frost$core$Bit $tmp1017 = frost$core$Bit$init$builtin_bit($tmp1016);
bool $tmp1018 = $tmp1017.value;
if ($tmp1018) goto block53; else goto block54;
block53:;
goto block1;
block54:;
frost$core$Int64 $tmp1019 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1020 = $tmp910.value;
int64_t $tmp1021 = $tmp1019.value;
bool $tmp1022 = $tmp1020 == $tmp1021;
frost$core$Bit $tmp1023 = frost$core$Bit$init$builtin_bit($tmp1022);
bool $tmp1024 = $tmp1023.value;
if ($tmp1024) goto block56; else goto block57;
block56:;
goto block1;
block57:;
frost$core$Int64 $tmp1025 = (frost$core$Int64) {19};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1026 = $tmp910.value;
int64_t $tmp1027 = $tmp1025.value;
bool $tmp1028 = $tmp1026 == $tmp1027;
frost$core$Bit $tmp1029 = frost$core$Bit$init$builtin_bit($tmp1028);
bool $tmp1030 = $tmp1029.value;
if ($tmp1030) goto block59; else goto block60;
block59:;
goto block1;
block60:;
frost$core$Int64 $tmp1031 = (frost$core$Int64) {20};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1032 = $tmp910.value;
int64_t $tmp1033 = $tmp1031.value;
bool $tmp1034 = $tmp1032 == $tmp1033;
frost$core$Bit $tmp1035 = frost$core$Bit$init$builtin_bit($tmp1034);
bool $tmp1036 = $tmp1035.value;
if ($tmp1036) goto block62; else goto block63;
block62:;
goto block1;
block63:;
frost$core$Int64 $tmp1037 = (frost$core$Int64) {21};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1038 = $tmp910.value;
int64_t $tmp1039 = $tmp1037.value;
bool $tmp1040 = $tmp1038 == $tmp1039;
frost$core$Bit $tmp1041 = frost$core$Bit$init$builtin_bit($tmp1040);
bool $tmp1042 = $tmp1041.value;
if ($tmp1042) goto block65; else goto block66;
block65:;
goto block1;
block66:;
frost$core$Int64 $tmp1043 = (frost$core$Int64) {22};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1044 = $tmp910.value;
int64_t $tmp1045 = $tmp1043.value;
bool $tmp1046 = $tmp1044 == $tmp1045;
frost$core$Bit $tmp1047 = frost$core$Bit$init$builtin_bit($tmp1046);
bool $tmp1048 = $tmp1047.value;
if ($tmp1048) goto block68; else goto block69;
block68:;
goto block1;
block69:;
frost$core$Int64 $tmp1049 = (frost$core$Int64) {23};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1050 = $tmp910.value;
int64_t $tmp1051 = $tmp1049.value;
bool $tmp1052 = $tmp1050 == $tmp1051;
frost$core$Bit $tmp1053 = frost$core$Bit$init$builtin_bit($tmp1052);
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block71; else goto block72;
block71:;
goto block1;
block72:;
frost$core$Int64 $tmp1055 = (frost$core$Int64) {24};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1056 = $tmp910.value;
int64_t $tmp1057 = $tmp1055.value;
bool $tmp1058 = $tmp1056 == $tmp1057;
frost$core$Bit $tmp1059 = frost$core$Bit$init$builtin_bit($tmp1058);
bool $tmp1060 = $tmp1059.value;
if ($tmp1060) goto block74; else goto block75;
block74:;
goto block1;
block75:;
frost$core$Int64 $tmp1061 = (frost$core$Int64) {25};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1062 = $tmp910.value;
int64_t $tmp1063 = $tmp1061.value;
bool $tmp1064 = $tmp1062 == $tmp1063;
frost$core$Bit $tmp1065 = frost$core$Bit$init$builtin_bit($tmp1064);
bool $tmp1066 = $tmp1065.value;
if ($tmp1066) goto block77; else goto block78;
block77:;
goto block1;
block78:;
frost$core$Int64 $tmp1067 = (frost$core$Int64) {26};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1068 = $tmp910.value;
int64_t $tmp1069 = $tmp1067.value;
bool $tmp1070 = $tmp1068 == $tmp1069;
frost$core$Bit $tmp1071 = frost$core$Bit$init$builtin_bit($tmp1070);
bool $tmp1072 = $tmp1071.value;
if ($tmp1072) goto block80; else goto block81;
block80:;
goto block1;
block81:;
frost$core$Int64 $tmp1073 = (frost$core$Int64) {27};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1074 = $tmp910.value;
int64_t $tmp1075 = $tmp1073.value;
bool $tmp1076 = $tmp1074 == $tmp1075;
frost$core$Bit $tmp1077 = frost$core$Bit$init$builtin_bit($tmp1076);
bool $tmp1078 = $tmp1077.value;
if ($tmp1078) goto block83; else goto block84;
block83:;
goto block1;
block84:;
frost$core$Int64 $tmp1079 = (frost$core$Int64) {28};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1080 = $tmp910.value;
int64_t $tmp1081 = $tmp1079.value;
bool $tmp1082 = $tmp1080 == $tmp1081;
frost$core$Bit $tmp1083 = frost$core$Bit$init$builtin_bit($tmp1082);
bool $tmp1084 = $tmp1083.value;
if ($tmp1084) goto block86; else goto block87;
block86:;
goto block1;
block87:;
frost$core$Int64 $tmp1085 = (frost$core$Int64) {29};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1086 = $tmp910.value;
int64_t $tmp1087 = $tmp1085.value;
bool $tmp1088 = $tmp1086 == $tmp1087;
frost$core$Bit $tmp1089 = frost$core$Bit$init$builtin_bit($tmp1088);
bool $tmp1090 = $tmp1089.value;
if ($tmp1090) goto block89; else goto block90;
block89:;
goto block1;
block90:;
frost$core$Int64 $tmp1091 = (frost$core$Int64) {30};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1092 = $tmp910.value;
int64_t $tmp1093 = $tmp1091.value;
bool $tmp1094 = $tmp1092 == $tmp1093;
frost$core$Bit $tmp1095 = frost$core$Bit$init$builtin_bit($tmp1094);
bool $tmp1096 = $tmp1095.value;
if ($tmp1096) goto block92; else goto block93;
block92:;
goto block1;
block93:;
frost$core$Int64 $tmp1097 = (frost$core$Int64) {31};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1098 = $tmp910.value;
int64_t $tmp1099 = $tmp1097.value;
bool $tmp1100 = $tmp1098 == $tmp1099;
frost$core$Bit $tmp1101 = frost$core$Bit$init$builtin_bit($tmp1100);
bool $tmp1102 = $tmp1101.value;
if ($tmp1102) goto block95; else goto block96;
block95:;
goto block1;
block96:;
frost$core$Int64 $tmp1103 = (frost$core$Int64) {32};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1104 = $tmp910.value;
int64_t $tmp1105 = $tmp1103.value;
bool $tmp1106 = $tmp1104 == $tmp1105;
frost$core$Bit $tmp1107 = frost$core$Bit$init$builtin_bit($tmp1106);
bool $tmp1108 = $tmp1107.value;
if ($tmp1108) goto block98; else goto block99;
block98:;
goto block1;
block99:;
frost$core$Int64 $tmp1109 = (frost$core$Int64) {33};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1110 = $tmp910.value;
int64_t $tmp1111 = $tmp1109.value;
bool $tmp1112 = $tmp1110 == $tmp1111;
frost$core$Bit $tmp1113 = frost$core$Bit$init$builtin_bit($tmp1112);
bool $tmp1114 = $tmp1113.value;
if ($tmp1114) goto block101; else goto block102;
block101:;
goto block1;
block102:;
frost$core$Int64 $tmp1115 = (frost$core$Int64) {34};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1116 = $tmp910.value;
int64_t $tmp1117 = $tmp1115.value;
bool $tmp1118 = $tmp1116 == $tmp1117;
frost$core$Bit $tmp1119 = frost$core$Bit$init$builtin_bit($tmp1118);
bool $tmp1120 = $tmp1119.value;
if ($tmp1120) goto block104; else goto block105;
block104:;
goto block1;
block105:;
frost$core$Int64 $tmp1121 = (frost$core$Int64) {35};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1122 = $tmp910.value;
int64_t $tmp1123 = $tmp1121.value;
bool $tmp1124 = $tmp1122 == $tmp1123;
frost$core$Bit $tmp1125 = frost$core$Bit$init$builtin_bit($tmp1124);
bool $tmp1126 = $tmp1125.value;
if ($tmp1126) goto block107; else goto block108;
block107:;
goto block1;
block108:;
frost$core$Int64 $tmp1127 = (frost$core$Int64) {36};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1128 = $tmp910.value;
int64_t $tmp1129 = $tmp1127.value;
bool $tmp1130 = $tmp1128 == $tmp1129;
frost$core$Bit $tmp1131 = frost$core$Bit$init$builtin_bit($tmp1130);
bool $tmp1132 = $tmp1131.value;
if ($tmp1132) goto block110; else goto block111;
block110:;
goto block1;
block111:;
frost$core$Int64 $tmp1133 = (frost$core$Int64) {37};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1134 = $tmp910.value;
int64_t $tmp1135 = $tmp1133.value;
bool $tmp1136 = $tmp1134 == $tmp1135;
frost$core$Bit $tmp1137 = frost$core$Bit$init$builtin_bit($tmp1136);
bool $tmp1138 = $tmp1137.value;
if ($tmp1138) goto block113; else goto block114;
block113:;
goto block1;
block114:;
frost$core$Int64 $tmp1139 = (frost$core$Int64) {38};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1140 = $tmp910.value;
int64_t $tmp1141 = $tmp1139.value;
bool $tmp1142 = $tmp1140 == $tmp1141;
frost$core$Bit $tmp1143 = frost$core$Bit$init$builtin_bit($tmp1142);
bool $tmp1144 = $tmp1143.value;
if ($tmp1144) goto block116; else goto block117;
block116:;
goto block1;
block117:;
frost$core$Int64 $tmp1145 = (frost$core$Int64) {39};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1146 = $tmp910.value;
int64_t $tmp1147 = $tmp1145.value;
bool $tmp1148 = $tmp1146 == $tmp1147;
frost$core$Bit $tmp1149 = frost$core$Bit$init$builtin_bit($tmp1148);
bool $tmp1150 = $tmp1149.value;
if ($tmp1150) goto block119; else goto block120;
block119:;
goto block1;
block120:;
frost$core$Int64 $tmp1151 = (frost$core$Int64) {40};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1152 = $tmp910.value;
int64_t $tmp1153 = $tmp1151.value;
bool $tmp1154 = $tmp1152 == $tmp1153;
frost$core$Bit $tmp1155 = frost$core$Bit$init$builtin_bit($tmp1154);
bool $tmp1156 = $tmp1155.value;
if ($tmp1156) goto block122; else goto block123;
block122:;
goto block1;
block123:;
frost$core$Int64 $tmp1157 = (frost$core$Int64) {41};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1158 = $tmp910.value;
int64_t $tmp1159 = $tmp1157.value;
bool $tmp1160 = $tmp1158 == $tmp1159;
frost$core$Bit $tmp1161 = frost$core$Bit$init$builtin_bit($tmp1160);
bool $tmp1162 = $tmp1161.value;
if ($tmp1162) goto block125; else goto block126;
block125:;
goto block1;
block126:;
frost$core$Int64 $tmp1163 = (frost$core$Int64) {42};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1164 = $tmp910.value;
int64_t $tmp1165 = $tmp1163.value;
bool $tmp1166 = $tmp1164 == $tmp1165;
frost$core$Bit $tmp1167 = frost$core$Bit$init$builtin_bit($tmp1166);
bool $tmp1168 = $tmp1167.value;
if ($tmp1168) goto block128; else goto block129;
block128:;
goto block1;
block129:;
frost$core$Int64 $tmp1169 = (frost$core$Int64) {43};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1170 = $tmp910.value;
int64_t $tmp1171 = $tmp1169.value;
bool $tmp1172 = $tmp1170 == $tmp1171;
frost$core$Bit $tmp1173 = frost$core$Bit$init$builtin_bit($tmp1172);
bool $tmp1174 = $tmp1173.value;
if ($tmp1174) goto block131; else goto block132;
block131:;
goto block1;
block132:;
frost$core$Int64 $tmp1175 = (frost$core$Int64) {44};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1176 = $tmp910.value;
int64_t $tmp1177 = $tmp1175.value;
bool $tmp1178 = $tmp1176 == $tmp1177;
frost$core$Bit $tmp1179 = frost$core$Bit$init$builtin_bit($tmp1178);
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block134; else goto block135;
block134:;
goto block1;
block135:;
frost$core$Int64 $tmp1181 = (frost$core$Int64) {45};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1182 = $tmp910.value;
int64_t $tmp1183 = $tmp1181.value;
bool $tmp1184 = $tmp1182 == $tmp1183;
frost$core$Bit $tmp1185 = frost$core$Bit$init$builtin_bit($tmp1184);
bool $tmp1186 = $tmp1185.value;
if ($tmp1186) goto block137; else goto block138;
block137:;
goto block1;
block138:;
frost$core$Int64 $tmp1187 = (frost$core$Int64) {46};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1188 = $tmp910.value;
int64_t $tmp1189 = $tmp1187.value;
bool $tmp1190 = $tmp1188 == $tmp1189;
frost$core$Bit $tmp1191 = frost$core$Bit$init$builtin_bit($tmp1190);
bool $tmp1192 = $tmp1191.value;
if ($tmp1192) goto block140; else goto block141;
block140:;
goto block1;
block141:;
frost$core$Int64 $tmp1193 = (frost$core$Int64) {47};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1194 = $tmp910.value;
int64_t $tmp1195 = $tmp1193.value;
bool $tmp1196 = $tmp1194 == $tmp1195;
frost$core$Bit $tmp1197 = frost$core$Bit$init$builtin_bit($tmp1196);
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block143; else goto block144;
block143:;
goto block1;
block144:;
frost$core$Int64 $tmp1199 = (frost$core$Int64) {48};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1200 = $tmp910.value;
int64_t $tmp1201 = $tmp1199.value;
bool $tmp1202 = $tmp1200 == $tmp1201;
frost$core$Bit $tmp1203 = frost$core$Bit$init$builtin_bit($tmp1202);
bool $tmp1204 = $tmp1203.value;
if ($tmp1204) goto block146; else goto block147;
block146:;
goto block1;
block147:;
frost$core$Int64 $tmp1205 = (frost$core$Int64) {49};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1206 = $tmp910.value;
int64_t $tmp1207 = $tmp1205.value;
bool $tmp1208 = $tmp1206 == $tmp1207;
frost$core$Bit $tmp1209 = frost$core$Bit$init$builtin_bit($tmp1208);
bool $tmp1210 = $tmp1209.value;
if ($tmp1210) goto block149; else goto block150;
block149:;
goto block1;
block150:;
frost$core$Int64 $tmp1211 = (frost$core$Int64) {50};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1212 = $tmp910.value;
int64_t $tmp1213 = $tmp1211.value;
bool $tmp1214 = $tmp1212 == $tmp1213;
frost$core$Bit $tmp1215 = frost$core$Bit$init$builtin_bit($tmp1214);
bool $tmp1216 = $tmp1215.value;
if ($tmp1216) goto block152; else goto block153;
block152:;
goto block1;
block153:;
frost$core$Int64 $tmp1217 = (frost$core$Int64) {51};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1218 = $tmp910.value;
int64_t $tmp1219 = $tmp1217.value;
bool $tmp1220 = $tmp1218 == $tmp1219;
frost$core$Bit $tmp1221 = frost$core$Bit$init$builtin_bit($tmp1220);
bool $tmp1222 = $tmp1221.value;
if ($tmp1222) goto block155; else goto block156;
block155:;
goto block1;
block156:;
frost$core$Int64 $tmp1223 = (frost$core$Int64) {52};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1224 = $tmp910.value;
int64_t $tmp1225 = $tmp1223.value;
bool $tmp1226 = $tmp1224 == $tmp1225;
frost$core$Bit $tmp1227 = frost$core$Bit$init$builtin_bit($tmp1226);
bool $tmp1228 = $tmp1227.value;
if ($tmp1228) goto block158; else goto block159;
block158:;
goto block1;
block159:;
frost$core$Int64 $tmp1229 = (frost$core$Int64) {53};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1230 = $tmp910.value;
int64_t $tmp1231 = $tmp1229.value;
bool $tmp1232 = $tmp1230 == $tmp1231;
frost$core$Bit $tmp1233 = frost$core$Bit$init$builtin_bit($tmp1232);
bool $tmp1234 = $tmp1233.value;
if ($tmp1234) goto block161; else goto block162;
block161:;
goto block1;
block162:;
frost$core$Int64 $tmp1235 = (frost$core$Int64) {54};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1236 = $tmp910.value;
int64_t $tmp1237 = $tmp1235.value;
bool $tmp1238 = $tmp1236 == $tmp1237;
frost$core$Bit $tmp1239 = frost$core$Bit$init$builtin_bit($tmp1238);
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block164; else goto block165;
block164:;
goto block1;
block165:;
frost$core$Int64 $tmp1241 = (frost$core$Int64) {55};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1242 = $tmp910.value;
int64_t $tmp1243 = $tmp1241.value;
bool $tmp1244 = $tmp1242 == $tmp1243;
frost$core$Bit $tmp1245 = frost$core$Bit$init$builtin_bit($tmp1244);
bool $tmp1246 = $tmp1245.value;
if ($tmp1246) goto block167; else goto block168;
block167:;
goto block1;
block168:;
frost$core$Int64 $tmp1247 = (frost$core$Int64) {56};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1248 = $tmp910.value;
int64_t $tmp1249 = $tmp1247.value;
bool $tmp1250 = $tmp1248 == $tmp1249;
frost$core$Bit $tmp1251 = frost$core$Bit$init$builtin_bit($tmp1250);
bool $tmp1252 = $tmp1251.value;
if ($tmp1252) goto block170; else goto block171;
block170:;
goto block1;
block171:;
frost$core$Int64 $tmp1253 = (frost$core$Int64) {57};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1254 = $tmp910.value;
int64_t $tmp1255 = $tmp1253.value;
bool $tmp1256 = $tmp1254 == $tmp1255;
frost$core$Bit $tmp1257 = frost$core$Bit$init$builtin_bit($tmp1256);
bool $tmp1258 = $tmp1257.value;
if ($tmp1258) goto block173; else goto block174;
block173:;
goto block1;
block174:;
frost$core$Int64 $tmp1259 = (frost$core$Int64) {58};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1260 = $tmp910.value;
int64_t $tmp1261 = $tmp1259.value;
bool $tmp1262 = $tmp1260 == $tmp1261;
frost$core$Bit $tmp1263 = frost$core$Bit$init$builtin_bit($tmp1262);
bool $tmp1264 = $tmp1263.value;
if ($tmp1264) goto block176; else goto block177;
block176:;
goto block1;
block177:;
frost$core$Int64 $tmp1265 = (frost$core$Int64) {59};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1266 = $tmp910.value;
int64_t $tmp1267 = $tmp1265.value;
bool $tmp1268 = $tmp1266 == $tmp1267;
frost$core$Bit $tmp1269 = frost$core$Bit$init$builtin_bit($tmp1268);
bool $tmp1270 = $tmp1269.value;
if ($tmp1270) goto block179; else goto block180;
block179:;
goto block1;
block180:;
frost$core$Int64 $tmp1271 = (frost$core$Int64) {60};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1272 = $tmp910.value;
int64_t $tmp1273 = $tmp1271.value;
bool $tmp1274 = $tmp1272 == $tmp1273;
frost$core$Bit $tmp1275 = frost$core$Bit$init$builtin_bit($tmp1274);
bool $tmp1276 = $tmp1275.value;
if ($tmp1276) goto block182; else goto block183;
block182:;
goto block1;
block183:;
frost$core$Int64 $tmp1277 = (frost$core$Int64) {61};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1278 = $tmp910.value;
int64_t $tmp1279 = $tmp1277.value;
bool $tmp1280 = $tmp1278 == $tmp1279;
frost$core$Bit $tmp1281 = frost$core$Bit$init$builtin_bit($tmp1280);
bool $tmp1282 = $tmp1281.value;
if ($tmp1282) goto block185; else goto block186;
block185:;
goto block1;
block186:;
frost$core$Int64 $tmp1283 = (frost$core$Int64) {62};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1284 = $tmp910.value;
int64_t $tmp1285 = $tmp1283.value;
bool $tmp1286 = $tmp1284 == $tmp1285;
frost$core$Bit $tmp1287 = frost$core$Bit$init$builtin_bit($tmp1286);
bool $tmp1288 = $tmp1287.value;
if ($tmp1288) goto block188; else goto block189;
block188:;
goto block1;
block189:;
frost$core$Int64 $tmp1289 = (frost$core$Int64) {63};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1290 = $tmp910.value;
int64_t $tmp1291 = $tmp1289.value;
bool $tmp1292 = $tmp1290 == $tmp1291;
frost$core$Bit $tmp1293 = frost$core$Bit$init$builtin_bit($tmp1292);
bool $tmp1294 = $tmp1293.value;
if ($tmp1294) goto block191; else goto block192;
block191:;
goto block1;
block192:;
frost$core$Int64 $tmp1295 = (frost$core$Int64) {64};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1296 = $tmp910.value;
int64_t $tmp1297 = $tmp1295.value;
bool $tmp1298 = $tmp1296 == $tmp1297;
frost$core$Bit $tmp1299 = frost$core$Bit$init$builtin_bit($tmp1298);
bool $tmp1300 = $tmp1299.value;
if ($tmp1300) goto block194; else goto block195;
block194:;
goto block1;
block195:;
frost$core$Int64 $tmp1301 = (frost$core$Int64) {65};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1302 = $tmp910.value;
int64_t $tmp1303 = $tmp1301.value;
bool $tmp1304 = $tmp1302 == $tmp1303;
frost$core$Bit $tmp1305 = frost$core$Bit$init$builtin_bit($tmp1304);
bool $tmp1306 = $tmp1305.value;
if ($tmp1306) goto block197; else goto block198;
block197:;
goto block1;
block198:;
frost$core$Int64 $tmp1307 = (frost$core$Int64) {66};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1308 = $tmp910.value;
int64_t $tmp1309 = $tmp1307.value;
bool $tmp1310 = $tmp1308 == $tmp1309;
frost$core$Bit $tmp1311 = frost$core$Bit$init$builtin_bit($tmp1310);
bool $tmp1312 = $tmp1311.value;
if ($tmp1312) goto block200; else goto block201;
block200:;
goto block1;
block201:;
frost$core$Int64 $tmp1313 = (frost$core$Int64) {67};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1314 = $tmp910.value;
int64_t $tmp1315 = $tmp1313.value;
bool $tmp1316 = $tmp1314 == $tmp1315;
frost$core$Bit $tmp1317 = frost$core$Bit$init$builtin_bit($tmp1316);
bool $tmp1318 = $tmp1317.value;
if ($tmp1318) goto block203; else goto block204;
block203:;
goto block1;
block204:;
frost$core$Int64 $tmp1319 = (frost$core$Int64) {68};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1320 = $tmp910.value;
int64_t $tmp1321 = $tmp1319.value;
bool $tmp1322 = $tmp1320 == $tmp1321;
frost$core$Bit $tmp1323 = frost$core$Bit$init$builtin_bit($tmp1322);
bool $tmp1324 = $tmp1323.value;
if ($tmp1324) goto block206; else goto block207;
block206:;
goto block1;
block207:;
frost$core$Int64 $tmp1325 = (frost$core$Int64) {69};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1326 = $tmp910.value;
int64_t $tmp1327 = $tmp1325.value;
bool $tmp1328 = $tmp1326 == $tmp1327;
frost$core$Bit $tmp1329 = frost$core$Bit$init$builtin_bit($tmp1328);
bool $tmp1330 = $tmp1329.value;
if ($tmp1330) goto block209; else goto block210;
block209:;
goto block1;
block210:;
frost$core$Int64 $tmp1331 = (frost$core$Int64) {70};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1332 = $tmp910.value;
int64_t $tmp1333 = $tmp1331.value;
bool $tmp1334 = $tmp1332 == $tmp1333;
frost$core$Bit $tmp1335 = frost$core$Bit$init$builtin_bit($tmp1334);
bool $tmp1336 = $tmp1335.value;
if ($tmp1336) goto block212; else goto block213;
block212:;
goto block1;
block213:;
frost$core$Int64 $tmp1337 = (frost$core$Int64) {71};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1338 = $tmp910.value;
int64_t $tmp1339 = $tmp1337.value;
bool $tmp1340 = $tmp1338 == $tmp1339;
frost$core$Bit $tmp1341 = frost$core$Bit$init$builtin_bit($tmp1340);
bool $tmp1342 = $tmp1341.value;
if ($tmp1342) goto block215; else goto block216;
block215:;
goto block1;
block216:;
frost$core$Int64 $tmp1343 = (frost$core$Int64) {72};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1344 = $tmp910.value;
int64_t $tmp1345 = $tmp1343.value;
bool $tmp1346 = $tmp1344 == $tmp1345;
frost$core$Bit $tmp1347 = frost$core$Bit$init$builtin_bit($tmp1346);
bool $tmp1348 = $tmp1347.value;
if ($tmp1348) goto block218; else goto block219;
block218:;
goto block1;
block219:;
frost$core$Int64 $tmp1349 = (frost$core$Int64) {73};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1350 = $tmp910.value;
int64_t $tmp1351 = $tmp1349.value;
bool $tmp1352 = $tmp1350 == $tmp1351;
frost$core$Bit $tmp1353 = frost$core$Bit$init$builtin_bit($tmp1352);
bool $tmp1354 = $tmp1353.value;
if ($tmp1354) goto block221; else goto block222;
block221:;
goto block1;
block222:;
frost$core$Int64 $tmp1355 = (frost$core$Int64) {74};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1356 = $tmp910.value;
int64_t $tmp1357 = $tmp1355.value;
bool $tmp1358 = $tmp1356 == $tmp1357;
frost$core$Bit $tmp1359 = frost$core$Bit$init$builtin_bit($tmp1358);
bool $tmp1360 = $tmp1359.value;
if ($tmp1360) goto block224; else goto block225;
block224:;
goto block1;
block225:;
frost$core$Int64 $tmp1361 = (frost$core$Int64) {75};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1362 = $tmp910.value;
int64_t $tmp1363 = $tmp1361.value;
bool $tmp1364 = $tmp1362 == $tmp1363;
frost$core$Bit $tmp1365 = frost$core$Bit$init$builtin_bit($tmp1364);
bool $tmp1366 = $tmp1365.value;
if ($tmp1366) goto block227; else goto block228;
block227:;
goto block1;
block228:;
frost$core$Int64 $tmp1367 = (frost$core$Int64) {76};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1368 = $tmp910.value;
int64_t $tmp1369 = $tmp1367.value;
bool $tmp1370 = $tmp1368 == $tmp1369;
frost$core$Bit $tmp1371 = frost$core$Bit$init$builtin_bit($tmp1370);
bool $tmp1372 = $tmp1371.value;
if ($tmp1372) goto block230; else goto block231;
block230:;
goto block1;
block231:;
frost$core$Int64 $tmp1373 = (frost$core$Int64) {77};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1374 = $tmp910.value;
int64_t $tmp1375 = $tmp1373.value;
bool $tmp1376 = $tmp1374 == $tmp1375;
frost$core$Bit $tmp1377 = frost$core$Bit$init$builtin_bit($tmp1376);
bool $tmp1378 = $tmp1377.value;
if ($tmp1378) goto block233; else goto block234;
block233:;
goto block1;
block234:;
frost$core$Int64 $tmp1379 = (frost$core$Int64) {78};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1380 = $tmp910.value;
int64_t $tmp1381 = $tmp1379.value;
bool $tmp1382 = $tmp1380 == $tmp1381;
frost$core$Bit $tmp1383 = frost$core$Bit$init$builtin_bit($tmp1382);
bool $tmp1384 = $tmp1383.value;
if ($tmp1384) goto block236; else goto block237;
block236:;
goto block1;
block237:;
frost$core$Int64 $tmp1385 = (frost$core$Int64) {79};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1386 = $tmp910.value;
int64_t $tmp1387 = $tmp1385.value;
bool $tmp1388 = $tmp1386 == $tmp1387;
frost$core$Bit $tmp1389 = frost$core$Bit$init$builtin_bit($tmp1388);
bool $tmp1390 = $tmp1389.value;
if ($tmp1390) goto block239; else goto block240;
block239:;
goto block1;
block240:;
frost$core$Int64 $tmp1391 = (frost$core$Int64) {80};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1392 = $tmp910.value;
int64_t $tmp1393 = $tmp1391.value;
bool $tmp1394 = $tmp1392 == $tmp1393;
frost$core$Bit $tmp1395 = frost$core$Bit$init$builtin_bit($tmp1394);
bool $tmp1396 = $tmp1395.value;
if ($tmp1396) goto block242; else goto block243;
block242:;
goto block1;
block243:;
frost$core$Int64 $tmp1397 = (frost$core$Int64) {81};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1398 = $tmp910.value;
int64_t $tmp1399 = $tmp1397.value;
bool $tmp1400 = $tmp1398 == $tmp1399;
frost$core$Bit $tmp1401 = frost$core$Bit$init$builtin_bit($tmp1400);
bool $tmp1402 = $tmp1401.value;
if ($tmp1402) goto block245; else goto block246;
block245:;
goto block1;
block246:;
frost$core$Int64 $tmp1403 = (frost$core$Int64) {82};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1404 = $tmp910.value;
int64_t $tmp1405 = $tmp1403.value;
bool $tmp1406 = $tmp1404 == $tmp1405;
frost$core$Bit $tmp1407 = frost$core$Bit$init$builtin_bit($tmp1406);
bool $tmp1408 = $tmp1407.value;
if ($tmp1408) goto block248; else goto block249;
block248:;
goto block1;
block249:;
frost$core$Int64 $tmp1409 = (frost$core$Int64) {83};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1410 = $tmp910.value;
int64_t $tmp1411 = $tmp1409.value;
bool $tmp1412 = $tmp1410 == $tmp1411;
frost$core$Bit $tmp1413 = frost$core$Bit$init$builtin_bit($tmp1412);
bool $tmp1414 = $tmp1413.value;
if ($tmp1414) goto block251; else goto block252;
block251:;
goto block1;
block252:;
frost$core$Int64 $tmp1415 = (frost$core$Int64) {84};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1416 = $tmp910.value;
int64_t $tmp1417 = $tmp1415.value;
bool $tmp1418 = $tmp1416 == $tmp1417;
frost$core$Bit $tmp1419 = frost$core$Bit$init$builtin_bit($tmp1418);
bool $tmp1420 = $tmp1419.value;
if ($tmp1420) goto block254; else goto block255;
block254:;
goto block1;
block255:;
frost$core$Int64 $tmp1421 = (frost$core$Int64) {85};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1422 = $tmp910.value;
int64_t $tmp1423 = $tmp1421.value;
bool $tmp1424 = $tmp1422 == $tmp1423;
frost$core$Bit $tmp1425 = frost$core$Bit$init$builtin_bit($tmp1424);
bool $tmp1426 = $tmp1425.value;
if ($tmp1426) goto block257; else goto block258;
block257:;
goto block1;
block258:;
frost$core$Int64 $tmp1427 = (frost$core$Int64) {86};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1428 = $tmp910.value;
int64_t $tmp1429 = $tmp1427.value;
bool $tmp1430 = $tmp1428 == $tmp1429;
frost$core$Bit $tmp1431 = frost$core$Bit$init$builtin_bit($tmp1430);
bool $tmp1432 = $tmp1431.value;
if ($tmp1432) goto block260; else goto block261;
block260:;
goto block1;
block261:;
frost$core$Int64 $tmp1433 = (frost$core$Int64) {87};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1434 = $tmp910.value;
int64_t $tmp1435 = $tmp1433.value;
bool $tmp1436 = $tmp1434 == $tmp1435;
frost$core$Bit $tmp1437 = frost$core$Bit$init$builtin_bit($tmp1436);
bool $tmp1438 = $tmp1437.value;
if ($tmp1438) goto block263; else goto block264;
block263:;
goto block1;
block264:;
frost$core$Int64 $tmp1439 = (frost$core$Int64) {88};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1440 = $tmp910.value;
int64_t $tmp1441 = $tmp1439.value;
bool $tmp1442 = $tmp1440 == $tmp1441;
frost$core$Bit $tmp1443 = frost$core$Bit$init$builtin_bit($tmp1442);
bool $tmp1444 = $tmp1443.value;
if ($tmp1444) goto block266; else goto block267;
block266:;
goto block1;
block267:;
frost$core$Int64 $tmp1445 = (frost$core$Int64) {89};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1446 = $tmp910.value;
int64_t $tmp1447 = $tmp1445.value;
bool $tmp1448 = $tmp1446 == $tmp1447;
frost$core$Bit $tmp1449 = frost$core$Bit$init$builtin_bit($tmp1448);
bool $tmp1450 = $tmp1449.value;
if ($tmp1450) goto block269; else goto block270;
block269:;
goto block1;
block270:;
frost$core$Int64 $tmp1451 = (frost$core$Int64) {90};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1452 = $tmp910.value;
int64_t $tmp1453 = $tmp1451.value;
bool $tmp1454 = $tmp1452 == $tmp1453;
frost$core$Bit $tmp1455 = frost$core$Bit$init$builtin_bit($tmp1454);
bool $tmp1456 = $tmp1455.value;
if ($tmp1456) goto block272; else goto block273;
block272:;
goto block1;
block273:;
frost$core$Int64 $tmp1457 = (frost$core$Int64) {91};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1458 = $tmp910.value;
int64_t $tmp1459 = $tmp1457.value;
bool $tmp1460 = $tmp1458 == $tmp1459;
frost$core$Bit $tmp1461 = frost$core$Bit$init$builtin_bit($tmp1460);
bool $tmp1462 = $tmp1461.value;
if ($tmp1462) goto block275; else goto block276;
block275:;
goto block1;
block276:;
frost$core$Int64 $tmp1463 = (frost$core$Int64) {92};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1464 = $tmp910.value;
int64_t $tmp1465 = $tmp1463.value;
bool $tmp1466 = $tmp1464 == $tmp1465;
frost$core$Bit $tmp1467 = frost$core$Bit$init$builtin_bit($tmp1466);
bool $tmp1468 = $tmp1467.value;
if ($tmp1468) goto block278; else goto block279;
block278:;
goto block1;
block279:;
frost$core$Int64 $tmp1469 = (frost$core$Int64) {93};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1470 = $tmp910.value;
int64_t $tmp1471 = $tmp1469.value;
bool $tmp1472 = $tmp1470 == $tmp1471;
frost$core$Bit $tmp1473 = frost$core$Bit$init$builtin_bit($tmp1472);
bool $tmp1474 = $tmp1473.value;
if ($tmp1474) goto block281; else goto block282;
block281:;
goto block1;
block282:;
frost$core$Int64 $tmp1475 = (frost$core$Int64) {94};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1476 = $tmp910.value;
int64_t $tmp1477 = $tmp1475.value;
bool $tmp1478 = $tmp1476 == $tmp1477;
frost$core$Bit $tmp1479 = frost$core$Bit$init$builtin_bit($tmp1478);
bool $tmp1480 = $tmp1479.value;
if ($tmp1480) goto block284; else goto block285;
block284:;
goto block1;
block285:;
frost$core$Int64 $tmp1481 = (frost$core$Int64) {95};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1482 = $tmp910.value;
int64_t $tmp1483 = $tmp1481.value;
bool $tmp1484 = $tmp1482 == $tmp1483;
frost$core$Bit $tmp1485 = frost$core$Bit$init$builtin_bit($tmp1484);
bool $tmp1486 = $tmp1485.value;
if ($tmp1486) goto block287; else goto block288;
block287:;
goto block1;
block288:;
frost$core$Int64 $tmp1487 = (frost$core$Int64) {96};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1488 = $tmp910.value;
int64_t $tmp1489 = $tmp1487.value;
bool $tmp1490 = $tmp1488 == $tmp1489;
frost$core$Bit $tmp1491 = frost$core$Bit$init$builtin_bit($tmp1490);
bool $tmp1492 = $tmp1491.value;
if ($tmp1492) goto block290; else goto block291;
block290:;
goto block1;
block291:;
frost$core$Int64 $tmp1493 = (frost$core$Int64) {97};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1494 = $tmp910.value;
int64_t $tmp1495 = $tmp1493.value;
bool $tmp1496 = $tmp1494 == $tmp1495;
frost$core$Bit $tmp1497 = frost$core$Bit$init$builtin_bit($tmp1496);
bool $tmp1498 = $tmp1497.value;
if ($tmp1498) goto block293; else goto block294;
block293:;
goto block1;
block294:;
frost$core$Int64 $tmp1499 = (frost$core$Int64) {98};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1500 = $tmp910.value;
int64_t $tmp1501 = $tmp1499.value;
bool $tmp1502 = $tmp1500 == $tmp1501;
frost$core$Bit $tmp1503 = frost$core$Bit$init$builtin_bit($tmp1502);
bool $tmp1504 = $tmp1503.value;
if ($tmp1504) goto block296; else goto block297;
block296:;
goto block1;
block297:;
frost$core$Int64 $tmp1505 = (frost$core$Int64) {99};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1506 = $tmp910.value;
int64_t $tmp1507 = $tmp1505.value;
bool $tmp1508 = $tmp1506 == $tmp1507;
frost$core$Bit $tmp1509 = frost$core$Bit$init$builtin_bit($tmp1508);
bool $tmp1510 = $tmp1509.value;
if ($tmp1510) goto block299; else goto block300;
block299:;
goto block1;
block300:;
frost$core$Int64 $tmp1511 = (frost$core$Int64) {100};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1512 = $tmp910.value;
int64_t $tmp1513 = $tmp1511.value;
bool $tmp1514 = $tmp1512 == $tmp1513;
frost$core$Bit $tmp1515 = frost$core$Bit$init$builtin_bit($tmp1514);
bool $tmp1516 = $tmp1515.value;
if ($tmp1516) goto block302; else goto block303;
block302:;
goto block1;
block303:;
frost$core$Int64 $tmp1517 = (frost$core$Int64) {101};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1518 = $tmp910.value;
int64_t $tmp1519 = $tmp1517.value;
bool $tmp1520 = $tmp1518 == $tmp1519;
frost$core$Bit $tmp1521 = frost$core$Bit$init$builtin_bit($tmp1520);
bool $tmp1522 = $tmp1521.value;
if ($tmp1522) goto block305; else goto block306;
block305:;
goto block1;
block306:;
frost$core$Int64 $tmp1523 = (frost$core$Int64) {102};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1524 = $tmp910.value;
int64_t $tmp1525 = $tmp1523.value;
bool $tmp1526 = $tmp1524 == $tmp1525;
frost$core$Bit $tmp1527 = frost$core$Bit$init$builtin_bit($tmp1526);
bool $tmp1528 = $tmp1527.value;
if ($tmp1528) goto block308; else goto block309;
block308:;
goto block1;
block309:;
frost$core$Int64 $tmp1529 = (frost$core$Int64) {103};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1530 = $tmp910.value;
int64_t $tmp1531 = $tmp1529.value;
bool $tmp1532 = $tmp1530 == $tmp1531;
frost$core$Bit $tmp1533 = frost$core$Bit$init$builtin_bit($tmp1532);
bool $tmp1534 = $tmp1533.value;
if ($tmp1534) goto block311; else goto block312;
block311:;
goto block1;
block312:;
frost$core$Int64 $tmp1535 = (frost$core$Int64) {104};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1536 = $tmp910.value;
int64_t $tmp1537 = $tmp1535.value;
bool $tmp1538 = $tmp1536 == $tmp1537;
frost$core$Bit $tmp1539 = frost$core$Bit$init$builtin_bit($tmp1538);
bool $tmp1540 = $tmp1539.value;
if ($tmp1540) goto block314; else goto block315;
block314:;
goto block1;
block315:;
frost$core$Int64 $tmp1541 = (frost$core$Int64) {105};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1542 = $tmp910.value;
int64_t $tmp1543 = $tmp1541.value;
bool $tmp1544 = $tmp1542 == $tmp1543;
frost$core$Bit $tmp1545 = frost$core$Bit$init$builtin_bit($tmp1544);
bool $tmp1546 = $tmp1545.value;
if ($tmp1546) goto block317; else goto block318;
block317:;
goto block1;
block318:;
frost$core$Int64 $tmp1547 = (frost$core$Int64) {106};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1548 = $tmp910.value;
int64_t $tmp1549 = $tmp1547.value;
bool $tmp1550 = $tmp1548 == $tmp1549;
frost$core$Bit $tmp1551 = frost$core$Bit$init$builtin_bit($tmp1550);
bool $tmp1552 = $tmp1551.value;
if ($tmp1552) goto block320; else goto block321;
block320:;
goto block1;
block321:;
frost$core$Int64 $tmp1553 = (frost$core$Int64) {107};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1554 = $tmp910.value;
int64_t $tmp1555 = $tmp1553.value;
bool $tmp1556 = $tmp1554 == $tmp1555;
frost$core$Bit $tmp1557 = frost$core$Bit$init$builtin_bit($tmp1556);
bool $tmp1558 = $tmp1557.value;
if ($tmp1558) goto block323; else goto block324;
block323:;
goto block1;
block324:;
frost$core$Int64 $tmp1559 = (frost$core$Int64) {108};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1560 = $tmp910.value;
int64_t $tmp1561 = $tmp1559.value;
bool $tmp1562 = $tmp1560 == $tmp1561;
frost$core$Bit $tmp1563 = frost$core$Bit$init$builtin_bit($tmp1562);
bool $tmp1564 = $tmp1563.value;
if ($tmp1564) goto block326; else goto block327;
block326:;
goto block1;
block327:;
frost$core$Int64 $tmp1565 = (frost$core$Int64) {109};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1566 = $tmp910.value;
int64_t $tmp1567 = $tmp1565.value;
bool $tmp1568 = $tmp1566 == $tmp1567;
frost$core$Bit $tmp1569 = frost$core$Bit$init$builtin_bit($tmp1568);
bool $tmp1570 = $tmp1569.value;
if ($tmp1570) goto block329; else goto block330;
block329:;
goto block1;
block330:;
frost$core$Int64 $tmp1571 = (frost$core$Int64) {110};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1572 = $tmp910.value;
int64_t $tmp1573 = $tmp1571.value;
bool $tmp1574 = $tmp1572 == $tmp1573;
frost$core$Bit $tmp1575 = frost$core$Bit$init$builtin_bit($tmp1574);
bool $tmp1576 = $tmp1575.value;
if ($tmp1576) goto block332; else goto block333;
block332:;
goto block1;
block333:;
frost$core$Int64 $tmp1577 = (frost$core$Int64) {111};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1578 = $tmp910.value;
int64_t $tmp1579 = $tmp1577.value;
bool $tmp1580 = $tmp1578 == $tmp1579;
frost$core$Bit $tmp1581 = frost$core$Bit$init$builtin_bit($tmp1580);
bool $tmp1582 = $tmp1581.value;
if ($tmp1582) goto block335; else goto block336;
block335:;
goto block1;
block336:;
frost$core$Int64 $tmp1583 = (frost$core$Int64) {112};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from Token.frost:11:5
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp1584 = $tmp910.value;
int64_t $tmp1585 = $tmp1583.value;
bool $tmp1586 = $tmp1584 == $tmp1585;
frost$core$Bit $tmp1587 = frost$core$Bit$init$builtin_bit($tmp1586);
bool $tmp1588 = $tmp1587.value;
if ($tmp1588) goto block338; else goto block1;
block338:;
goto block1;
block1:;
return;

}
org$frostlang$frostc$parser$Token$Kind org$frostlang$frostc$parser$Token$Kind$init$frost$core$Int64(frost$core$Int64 param0) {

org$frostlang$frostc$parser$Token$Kind local0;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int64* $tmp1589 = &(&local0)->$rawValue;
*$tmp1589 = param0;
org$frostlang$frostc$parser$Token$Kind $tmp1590 = *(&local0);
return $tmp1590;

}
frost$core$Bit org$frostlang$frostc$parser$Token$Kind$$EQ$org$frostlang$frostc$parser$Token$Kind$R$frost$core$Bit(org$frostlang$frostc$parser$Token$Kind param0, org$frostlang$frostc$parser$Token$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Int64 $tmp1591 = param0.$rawValue;
frost$core$Int64 $tmp1592 = param1.$rawValue;
int64_t $tmp1593 = $tmp1591.value;
int64_t $tmp1594 = $tmp1592.value;
bool $tmp1595 = $tmp1593 != $tmp1594;
frost$core$Bit $tmp1596 = (frost$core$Bit) {$tmp1595};
bool $tmp1597 = $tmp1596.value;
if ($tmp1597) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Bit $tmp1598 = frost$core$Bit$init$builtin_bit(false);
return $tmp1598;
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/frostc/parser/Token.frost:11
frost$core$Bit $tmp1599 = frost$core$Bit$init$builtin_bit(true);
return $tmp1599;

}






