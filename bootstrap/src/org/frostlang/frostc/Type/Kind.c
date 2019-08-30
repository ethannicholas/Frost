#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int org$frostlang$frostc$Type$Kind$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$Type$Kind$get_hash$R$frost$core$Int(((org$frostlang$frostc$Type$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit(((org$frostlang$frostc$Type$Kind$wrapper*) p0)->value, ((org$frostlang$frostc$Type$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$Type$Kind$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$Type$Kind$get_asString$R$frost$core$String(((org$frostlang$frostc$Type$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$Type$Kind$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$Type$Kind$cleanup(((org$frostlang$frostc$Type$Kind$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Type$Kind$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { org$frostlang$frostc$Type$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Type$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$Type$Kind$_frost$collections$Key, { org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$Type$Kind$class_type org$frostlang$frostc$Type$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Type$Kind$_frost$core$Equatable, { org$frostlang$frostc$Type$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$Type$Kind$cleanup$shim, org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit$shim, org$frostlang$frostc$Type$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$Type$Kind$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { org$frostlang$frostc$Type$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$Type$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$Type$Kind$wrapper_frost$collections$Key, { org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$Type$Kind$wrapperclass_type org$frostlang$frostc$Type$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Type$Kind$wrapper_frost$core$Equatable, { org$frostlang$frostc$Type$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64", 30, -3317522302346774756, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64", 30, -3317522302346774756, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c\x41\x42\x4c\x45", 8, -4077656870780187428, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c\x41\x42\x4c\x45", 8, -4077656870780187428, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x49\x4e\x54", 11, 3257052524527998998, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x49\x4e\x54", 11, 3257052524527998998, NULL };
static frost$core$String $s188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x55\x49\x4e\x54", 12, -5664791725291654135, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x55\x49\x4e\x54", 12, -5664791725291654135, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x4f\x49\x44", 4, -4025362609874592865, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x4f\x49\x44", 4, -4025362609874592865, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x5f\x4c\x49\x54\x45\x52\x41\x4c", 11, 471347064954069474, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x5f\x4c\x49\x54\x45\x52\x41\x4c", 11, 471347064954069474, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x56\x41\x4c\x49\x44", 7, 4384553811495809008, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x56\x41\x4c\x49\x44", 7, 4384553811495809008, NULL };
static frost$core$String $s220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x5f\x4c\x49\x54\x45\x52\x41\x4c", 11, -3716115370077692644, NULL };
static frost$core$String $s221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x5f\x4c\x49\x54\x45\x52\x41\x4c", 11, -3716115370077692644, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x42\x49\x54", 11, -8200369908874943432, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x42\x49\x54", 11, -8200369908874943432, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x46\x4c\x4f\x41\x54", 13, 7901463294791601949, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x46\x4c\x4f\x41\x54", 13, 7901463294791601949, NULL };
static frost$core$String $s244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x55\x50\x4c\x45", 5, 4380538076207717425, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x55\x50\x4c\x45", 5, 4380538076207717425, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43", 7, 97069434756602714, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43", 7, 97069434756602714, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x43\x4c\x41\x53\x53\x5f\x50\x41\x52\x41\x4d\x45\x54\x45\x52", 23, -7648455814006618867, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x43\x4c\x41\x53\x53\x5f\x50\x41\x52\x41\x4d\x45\x54\x45\x52", 23, -7648455814006618867, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x50\x41\x52\x41\x4d\x45\x54\x45\x52", 24, -4456505922421967406, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x50\x41\x52\x41\x4d\x45\x54\x45\x52", 24, -4456505922421967406, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 8049205518224136996, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 8049205518224136996, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x55\x4e\x43\x54\x49\x4f\x4e", 8, 5163167664221876233, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x55\x4e\x43\x54\x49\x4f\x4e", 8, 5163167664221876233, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44", 6, 7192733565866671856, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44", 6, 7192733565866671856, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e", 18, 6164967037718831496, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e", 18, 6164967037718831496, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45\x5f\x4d\x45\x54\x48\x4f\x44", 16, 7797005312102195201, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45\x5f\x4d\x45\x54\x48\x4f\x44", 16, 7797005312102195201, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c\x5f\x4c\x49\x54\x45\x52\x41\x4c", 12, 823228636561368765, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c\x5f\x4c\x49\x54\x45\x52\x41\x4c", 12, 823228636561368765, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };

void org$frostlang$frostc$Type$Kind$cleanup(org$frostlang$frostc$Type$Kind param0) {

return;

}
org$frostlang$frostc$Type$Kind org$frostlang$frostc$Type$Kind$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$frostc$Type$Kind local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int* $tmp3 = &(&local0)->$rawValue;
*$tmp3 = param0;
org$frostlang$frostc$Type$Kind $tmp4 = *(&local0);
return $tmp4;

}
frost$core$Bit org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit(org$frostlang$frostc$Type$Kind param0, org$frostlang$frostc$Type$Kind param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp5 = param0.$rawValue;
frost$core$Int $tmp6 = param1.$rawValue;
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 != $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Bit $tmp12 = (frost$core$Bit) {false};
return $tmp12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Bit $tmp13 = (frost$core$Bit) {true};
return $tmp13;

}
frost$core$Int org$frostlang$frostc$Type$Kind$get_hash$R$frost$core$Int(org$frostlang$frostc$Type$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp14 = param0.$rawValue;
frost$core$Int $tmp15 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15.value;
bool $tmp18 = $tmp16 == $tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp21 = (frost$core$Int) {15129221771362776860u};
return $tmp21;
block3:;
frost$core$Int $tmp22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp23 = $tmp14.value;
int64_t $tmp24 = $tmp22.value;
bool $tmp25 = $tmp23 == $tmp24;
frost$core$Bit $tmp26 = (frost$core$Bit) {$tmp25};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp28 = (frost$core$Int) {11811699469016002104u};
return $tmp28;
block6:;
frost$core$Int $tmp29 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp30 = $tmp14.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 == $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp35 = (frost$core$Int) {8494177166669227348u};
return $tmp35;
block9:;
frost$core$Int $tmp36 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp37 = $tmp14.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 == $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp42 = (frost$core$Int) {5176654864322452592u};
return $tmp42;
block12:;
frost$core$Int $tmp43 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp44 = $tmp14.value;
int64_t $tmp45 = $tmp43.value;
bool $tmp46 = $tmp44 == $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp49 = (frost$core$Int) {1859132561975677836u};
return $tmp49;
block15:;
frost$core$Int $tmp50 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp51 = $tmp14.value;
int64_t $tmp52 = $tmp50.value;
bool $tmp53 = $tmp51 == $tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp56 = (frost$core$Int) {16988354333338454696u};
return $tmp56;
block18:;
frost$core$Int $tmp57 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp58 = $tmp14.value;
int64_t $tmp59 = $tmp57.value;
bool $tmp60 = $tmp58 == $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp63 = (frost$core$Int) {13670832030991679940u};
return $tmp63;
block21:;
frost$core$Int $tmp64 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp65 = $tmp14.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 == $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp70 = (frost$core$Int) {10353309728644905184u};
return $tmp70;
block24:;
frost$core$Int $tmp71 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp72 = $tmp14.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 == $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp77 = (frost$core$Int) {7035787426298130428u};
return $tmp77;
block27:;
frost$core$Int $tmp78 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp79 = $tmp14.value;
int64_t $tmp80 = $tmp78.value;
bool $tmp81 = $tmp79 == $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp84 = (frost$core$Int) {3718265123951355672u};
return $tmp84;
block30:;
frost$core$Int $tmp85 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp86 = $tmp14.value;
int64_t $tmp87 = $tmp85.value;
bool $tmp88 = $tmp86 == $tmp87;
frost$core$Bit $tmp89 = (frost$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp91 = (frost$core$Int) {400742821604580916u};
return $tmp91;
block33:;
frost$core$Int $tmp92 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp93 = $tmp14.value;
int64_t $tmp94 = $tmp92.value;
bool $tmp95 = $tmp93 == $tmp94;
frost$core$Bit $tmp96 = (frost$core$Bit) {$tmp95};
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp98 = (frost$core$Int) {15529964592967357776u};
return $tmp98;
block36:;
frost$core$Int $tmp99 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp100 = $tmp14.value;
int64_t $tmp101 = $tmp99.value;
bool $tmp102 = $tmp100 == $tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp105 = (frost$core$Int) {12212442290620583020u};
return $tmp105;
block39:;
frost$core$Int $tmp106 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp107 = $tmp14.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 == $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp112 = (frost$core$Int) {8894919988273808264u};
return $tmp112;
block42:;
frost$core$Int $tmp113 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp114 = $tmp14.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 == $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp119 = (frost$core$Int) {5577397685927033508u};
return $tmp119;
block45:;
frost$core$Int $tmp120 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp121 = $tmp14.value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 == $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp126 = (frost$core$Int) {2259875383580258752u};
return $tmp126;
block48:;
frost$core$Int $tmp127 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp128 = $tmp14.value;
int64_t $tmp129 = $tmp127.value;
bool $tmp130 = $tmp128 == $tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130};
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp133 = (frost$core$Int) {17389097154943035612u};
return $tmp133;
block51:;
frost$core$Int $tmp134 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp135 = $tmp14.value;
int64_t $tmp136 = $tmp134.value;
bool $tmp137 = $tmp135 == $tmp136;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp140 = (frost$core$Int) {14071574852596260856u};
return $tmp140;
block54:;
frost$core$Int $tmp141 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp142 = $tmp14.value;
int64_t $tmp143 = $tmp141.value;
bool $tmp144 = $tmp142 == $tmp143;
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
bool $tmp146 = $tmp145.value;
if ($tmp146) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp147 = (frost$core$Int) {10754052550249486100u};
return $tmp147;
block57:;
frost$core$Int $tmp148 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp149 = $tmp14.value;
int64_t $tmp150 = $tmp148.value;
bool $tmp151 = $tmp149 == $tmp150;
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp154 = (frost$core$Int) {7436530247902711344u};
return $tmp154;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp155 = (frost$core$Int) {5u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s156, $tmp155);
abort(); // unreachable
block1:;
goto block62;
block62:;

}
frost$core$String* org$frostlang$frostc$Type$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$Type$Kind param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp157 = param0.$rawValue;
frost$core$Int $tmp158 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp159 = $tmp157.value;
int64_t $tmp160 = $tmp158.value;
bool $tmp161 = $tmp159 == $tmp160;
frost$core$Bit $tmp162 = (frost$core$Bit) {$tmp161};
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s164));
return &$s165;
block3:;
frost$core$Int $tmp166 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp167 = $tmp157.value;
int64_t $tmp168 = $tmp166.value;
bool $tmp169 = $tmp167 == $tmp168;
frost$core$Bit $tmp170 = (frost$core$Bit) {$tmp169};
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s172));
return &$s173;
block6:;
frost$core$Int $tmp174 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp175 = $tmp157.value;
int64_t $tmp176 = $tmp174.value;
bool $tmp177 = $tmp175 == $tmp176;
frost$core$Bit $tmp178 = (frost$core$Bit) {$tmp177};
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s180));
return &$s181;
block9:;
frost$core$Int $tmp182 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp183 = $tmp157.value;
int64_t $tmp184 = $tmp182.value;
bool $tmp185 = $tmp183 == $tmp184;
frost$core$Bit $tmp186 = (frost$core$Bit) {$tmp185};
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s188));
return &$s189;
block12:;
frost$core$Int $tmp190 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp191 = $tmp157.value;
int64_t $tmp192 = $tmp190.value;
bool $tmp193 = $tmp191 == $tmp192;
frost$core$Bit $tmp194 = (frost$core$Bit) {$tmp193};
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s196));
return &$s197;
block15:;
frost$core$Int $tmp198 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp199 = $tmp157.value;
int64_t $tmp200 = $tmp198.value;
bool $tmp201 = $tmp199 == $tmp200;
frost$core$Bit $tmp202 = (frost$core$Bit) {$tmp201};
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s204));
return &$s205;
block18:;
frost$core$Int $tmp206 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp207 = $tmp157.value;
int64_t $tmp208 = $tmp206.value;
bool $tmp209 = $tmp207 == $tmp208;
frost$core$Bit $tmp210 = (frost$core$Bit) {$tmp209};
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s212));
return &$s213;
block21:;
frost$core$Int $tmp214 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp215 = $tmp157.value;
int64_t $tmp216 = $tmp214.value;
bool $tmp217 = $tmp215 == $tmp216;
frost$core$Bit $tmp218 = (frost$core$Bit) {$tmp217};
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s220));
return &$s221;
block24:;
frost$core$Int $tmp222 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp223 = $tmp157.value;
int64_t $tmp224 = $tmp222.value;
bool $tmp225 = $tmp223 == $tmp224;
frost$core$Bit $tmp226 = (frost$core$Bit) {$tmp225};
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s228));
return &$s229;
block27:;
frost$core$Int $tmp230 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp231 = $tmp157.value;
int64_t $tmp232 = $tmp230.value;
bool $tmp233 = $tmp231 == $tmp232;
frost$core$Bit $tmp234 = (frost$core$Bit) {$tmp233};
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s236));
return &$s237;
block30:;
frost$core$Int $tmp238 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp239 = $tmp157.value;
int64_t $tmp240 = $tmp238.value;
bool $tmp241 = $tmp239 == $tmp240;
frost$core$Bit $tmp242 = (frost$core$Bit) {$tmp241};
bool $tmp243 = $tmp242.value;
if ($tmp243) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s244));
return &$s245;
block33:;
frost$core$Int $tmp246 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp247 = $tmp157.value;
int64_t $tmp248 = $tmp246.value;
bool $tmp249 = $tmp247 == $tmp248;
frost$core$Bit $tmp250 = (frost$core$Bit) {$tmp249};
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s252));
return &$s253;
block36:;
frost$core$Int $tmp254 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp255 = $tmp157.value;
int64_t $tmp256 = $tmp254.value;
bool $tmp257 = $tmp255 == $tmp256;
frost$core$Bit $tmp258 = (frost$core$Bit) {$tmp257};
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s260));
return &$s261;
block39:;
frost$core$Int $tmp262 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp263 = $tmp157.value;
int64_t $tmp264 = $tmp262.value;
bool $tmp265 = $tmp263 == $tmp264;
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s268));
return &$s269;
block42:;
frost$core$Int $tmp270 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp271 = $tmp157.value;
int64_t $tmp272 = $tmp270.value;
bool $tmp273 = $tmp271 == $tmp272;
frost$core$Bit $tmp274 = (frost$core$Bit) {$tmp273};
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s276));
return &$s277;
block45:;
frost$core$Int $tmp278 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp279 = $tmp157.value;
int64_t $tmp280 = $tmp278.value;
bool $tmp281 = $tmp279 == $tmp280;
frost$core$Bit $tmp282 = (frost$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s284));
return &$s285;
block48:;
frost$core$Int $tmp286 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp287 = $tmp157.value;
int64_t $tmp288 = $tmp286.value;
bool $tmp289 = $tmp287 == $tmp288;
frost$core$Bit $tmp290 = (frost$core$Bit) {$tmp289};
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s292));
return &$s293;
block51:;
frost$core$Int $tmp294 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp295 = $tmp157.value;
int64_t $tmp296 = $tmp294.value;
bool $tmp297 = $tmp295 == $tmp296;
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s300));
return &$s301;
block54:;
frost$core$Int $tmp302 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp303 = $tmp157.value;
int64_t $tmp304 = $tmp302.value;
bool $tmp305 = $tmp303 == $tmp304;
frost$core$Bit $tmp306 = (frost$core$Bit) {$tmp305};
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s308));
return &$s309;
block57:;
frost$core$Int $tmp310 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp311 = $tmp157.value;
int64_t $tmp312 = $tmp310.value;
bool $tmp313 = $tmp311 == $tmp312;
frost$core$Bit $tmp314 = (frost$core$Bit) {$tmp313};
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s316));
return &$s317;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int $tmp318 = (frost$core$Int) {5u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s319, $tmp318);
abort(); // unreachable
block1:;
goto block62;
block62:;

}






