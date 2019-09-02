#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit(((org$frostlang$frostc$Type$Kind$wrapper*) p0)->value, ((org$frostlang$frostc$Type$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int org$frostlang$frostc$Type$Kind$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$Type$Kind$get_hash$R$frost$core$Int(((org$frostlang$frostc$Type$Kind$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$Type$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$Type$Kind$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$Type$Kind$_frost$core$Equatable, { org$frostlang$frostc$Type$Kind$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
org$frostlang$frostc$Type$Kind$class_type org$frostlang$frostc$Type$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Type$Kind$_frost$collections$HashKey, { org$frostlang$frostc$Type$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$Type$Kind$cleanup$shim, org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit$shim, org$frostlang$frostc$Type$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$Type$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$Type$Kind$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &org$frostlang$frostc$Type$Kind$wrapper_frost$core$Equatable, { org$frostlang$frostc$Type$Kind$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s2;
org$frostlang$frostc$Type$Kind$wrapperclass_type org$frostlang$frostc$Type$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$Type$Kind$wrapper_frost$collections$HashKey, { org$frostlang$frostc$Type$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64", 30, -3317522302346774756, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x2e\x4b\x69\x6e\x64", 30, -3317522302346774756, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4c\x41\x53\x53", 5, 8927326264370171455, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c\x41\x42\x4c\x45", 8, -4077656870780187428, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c\x41\x42\x4c\x45", 8, -4077656870780187428, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x49\x4e\x54", 11, 3257052524527998998, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x49\x4e\x54", 11, 3257052524527998998, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x55\x49\x4e\x54", 12, -5664791725291654135, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x55\x49\x4e\x54", 12, -5664791725291654135, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x4f\x49\x44", 4, -4025362609874592865, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x56\x4f\x49\x44", 4, -4025362609874592865, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x5f\x4c\x49\x54\x45\x52\x41\x4c", 11, 471347064954069474, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x54\x5f\x4c\x49\x54\x45\x52\x41\x4c", 11, 471347064954069474, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x56\x41\x4c\x49\x44", 7, 4384553811495809008, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4e\x56\x41\x4c\x49\x44", 7, 4384553811495809008, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x5f\x4c\x49\x54\x45\x52\x41\x4c", 11, -3716115370077692644, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x49\x54\x5f\x4c\x49\x54\x45\x52\x41\x4c", 11, -3716115370077692644, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x42\x49\x54", 11, -8200369908874943432, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x42\x49\x54", 11, -8200369908874943432, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x46\x4c\x4f\x41\x54", 13, 7901463294791601949, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x55\x49\x4c\x54\x49\x4e\x5f\x46\x4c\x4f\x41\x54", 13, 7901463294791601949, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x55\x50\x4c\x45", 5, 4380538076207717425, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x55\x50\x4c\x45", 5, 4380538076207717425, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43", 7, 97069434756602714, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43", 7, 97069434756602714, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x43\x4c\x41\x53\x53\x5f\x50\x41\x52\x41\x4d\x45\x54\x45\x52", 23, -7648455814006618867, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x43\x4c\x41\x53\x53\x5f\x50\x41\x52\x41\x4d\x45\x54\x45\x52", 23, -7648455814006618867, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x50\x41\x52\x41\x4d\x45\x54\x45\x52", 24, -4456505922421967406, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x5f\x50\x41\x52\x41\x4d\x45\x54\x45\x52", 24, -4456505922421967406, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 8049205518224136996, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4e\x55\x4c\x4c", 4, 8049205518224136996, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x55\x4e\x43\x54\x49\x4f\x4e", 8, 5163167664221876233, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x55\x4e\x43\x54\x49\x4f\x4e", 8, 5163167664221876233, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44", 6, 7192733565866671856, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44", 6, 7192733565866671856, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e", 18, 6164967037718831496, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45\x5f\x46\x55\x4e\x43\x54\x49\x4f\x4e", 18, 6164967037718831496, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45\x5f\x4d\x45\x54\x48\x4f\x44", 16, 7797005312102195201, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x4d\x4d\x55\x54\x41\x42\x4c\x45\x5f\x4d\x45\x54\x48\x4f\x44", 16, 7797005312102195201, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c\x5f\x4c\x49\x54\x45\x52\x41\x4c", 12, 823228636561368765, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x52\x45\x41\x4c\x5f\x4c\x49\x54\x45\x52\x41\x4c", 12, 823228636561368765, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };

void org$frostlang$frostc$Type$Kind$cleanup(org$frostlang$frostc$Type$Kind param0) {

return;

}
org$frostlang$frostc$Type$Kind org$frostlang$frostc$Type$Kind$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$frostc$Type$Kind local0;
frost$core$Int* _1;
org$frostlang$frostc$Type$Kind _3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_1 = &(&local0)->$rawValue;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Bit org$frostlang$frostc$Type$Kind$$EQ$org$frostlang$frostc$Type$Kind$R$frost$core$Bit(org$frostlang$frostc$Type$Kind param0, org$frostlang$frostc$Type$Kind param1) {

frost$core$Int _1;
frost$core$Int _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
frost$core$Bit _10;
frost$core$Bit _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_1 = param0.$rawValue;
_2 = param1.$rawValue;
_3 = _1.value;
_4 = _2.value;
_5 = _3 != _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_10 = (frost$core$Bit) {false};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_13 = (frost$core$Bit) {true};
return _13;

}
frost$core$Int org$frostlang$frostc$Type$Kind$get_hash$R$frost$core$Int(org$frostlang$frostc$Type$Kind param0) {

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
frost$core$Int _263;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_13 = (frost$core$Int) {15129221771362776860u};
return _13;
block3:;
_15 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_18 = _1.value;
_19 = _15.value;
_20 = _18 == _19;
_21 = (frost$core$Bit) {_20};
_23 = _21.value;
if (_23) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_26 = (frost$core$Int) {11811699469016002104u};
return _26;
block6:;
_28 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_31 = _1.value;
_32 = _28.value;
_33 = _31 == _32;
_34 = (frost$core$Bit) {_33};
_36 = _34.value;
if (_36) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_39 = (frost$core$Int) {8494177166669227348u};
return _39;
block9:;
_41 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_44 = _1.value;
_45 = _41.value;
_46 = _44 == _45;
_47 = (frost$core$Bit) {_46};
_49 = _47.value;
if (_49) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_52 = (frost$core$Int) {5176654864322452592u};
return _52;
block12:;
_54 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_57 = _1.value;
_58 = _54.value;
_59 = _57 == _58;
_60 = (frost$core$Bit) {_59};
_62 = _60.value;
if (_62) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_65 = (frost$core$Int) {1859132561975677836u};
return _65;
block15:;
_67 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_70 = _1.value;
_71 = _67.value;
_72 = _70 == _71;
_73 = (frost$core$Bit) {_72};
_75 = _73.value;
if (_75) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_78 = (frost$core$Int) {16988354333338454696u};
return _78;
block18:;
_80 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_83 = _1.value;
_84 = _80.value;
_85 = _83 == _84;
_86 = (frost$core$Bit) {_85};
_88 = _86.value;
if (_88) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_91 = (frost$core$Int) {13670832030991679940u};
return _91;
block21:;
_93 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_96 = _1.value;
_97 = _93.value;
_98 = _96 == _97;
_99 = (frost$core$Bit) {_98};
_101 = _99.value;
if (_101) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_104 = (frost$core$Int) {10353309728644905184u};
return _104;
block24:;
_106 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_109 = _1.value;
_110 = _106.value;
_111 = _109 == _110;
_112 = (frost$core$Bit) {_111};
_114 = _112.value;
if (_114) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_117 = (frost$core$Int) {7035787426298130428u};
return _117;
block27:;
_119 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_122 = _1.value;
_123 = _119.value;
_124 = _122 == _123;
_125 = (frost$core$Bit) {_124};
_127 = _125.value;
if (_127) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_130 = (frost$core$Int) {3718265123951355672u};
return _130;
block30:;
_132 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_135 = _1.value;
_136 = _132.value;
_137 = _135 == _136;
_138 = (frost$core$Bit) {_137};
_140 = _138.value;
if (_140) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_143 = (frost$core$Int) {400742821604580916u};
return _143;
block33:;
_145 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_148 = _1.value;
_149 = _145.value;
_150 = _148 == _149;
_151 = (frost$core$Bit) {_150};
_153 = _151.value;
if (_153) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_156 = (frost$core$Int) {15529964592967357776u};
return _156;
block36:;
_158 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_161 = _1.value;
_162 = _158.value;
_163 = _161 == _162;
_164 = (frost$core$Bit) {_163};
_166 = _164.value;
if (_166) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_169 = (frost$core$Int) {12212442290620583020u};
return _169;
block39:;
_171 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_174 = _1.value;
_175 = _171.value;
_176 = _174 == _175;
_177 = (frost$core$Bit) {_176};
_179 = _177.value;
if (_179) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_182 = (frost$core$Int) {8894919988273808264u};
return _182;
block42:;
_184 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_187 = _1.value;
_188 = _184.value;
_189 = _187 == _188;
_190 = (frost$core$Bit) {_189};
_192 = _190.value;
if (_192) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_195 = (frost$core$Int) {5577397685927033508u};
return _195;
block45:;
_197 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_200 = _1.value;
_201 = _197.value;
_202 = _200 == _201;
_203 = (frost$core$Bit) {_202};
_205 = _203.value;
if (_205) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_208 = (frost$core$Int) {2259875383580258752u};
return _208;
block48:;
_210 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_213 = _1.value;
_214 = _210.value;
_215 = _213 == _214;
_216 = (frost$core$Bit) {_215};
_218 = _216.value;
if (_218) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_221 = (frost$core$Int) {17389097154943035612u};
return _221;
block51:;
_223 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_226 = _1.value;
_227 = _223.value;
_228 = _226 == _227;
_229 = (frost$core$Bit) {_228};
_231 = _229.value;
if (_231) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_234 = (frost$core$Int) {14071574852596260856u};
return _234;
block54:;
_236 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_239 = _1.value;
_240 = _236.value;
_241 = _239 == _240;
_242 = (frost$core$Bit) {_241};
_244 = _242.value;
if (_244) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_247 = (frost$core$Int) {10754052550249486100u};
return _247;
block57:;
_249 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_252 = _1.value;
_253 = _249.value;
_254 = _252 == _253;
_255 = (frost$core$Bit) {_254};
_257 = _255.value;
if (_257) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_260 = (frost$core$Int) {7436530247902711344u};
return _260;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_263 = (frost$core$Int) {5u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3, _263);
abort(); // unreachable
block1:;
goto block62;
block62:;

}
frost$core$String* org$frostlang$frostc$Type$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$Type$Kind param0) {

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
frost$core$Int _283;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_13 = ((frost$core$Object*) &$s4);
frost$core$Frost$ref$frost$core$Object$Q(_13);
return &$s5;
block3:;
_16 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_19 = _1.value;
_20 = _16.value;
_21 = _19 == _20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_27 = ((frost$core$Object*) &$s6);
frost$core$Frost$ref$frost$core$Object$Q(_27);
return &$s7;
block6:;
_30 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_33 = _1.value;
_34 = _30.value;
_35 = _33 == _34;
_36 = (frost$core$Bit) {_35};
_38 = _36.value;
if (_38) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_41 = ((frost$core$Object*) &$s8);
frost$core$Frost$ref$frost$core$Object$Q(_41);
return &$s9;
block9:;
_44 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_47 = _1.value;
_48 = _44.value;
_49 = _47 == _48;
_50 = (frost$core$Bit) {_49};
_52 = _50.value;
if (_52) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_55 = ((frost$core$Object*) &$s10);
frost$core$Frost$ref$frost$core$Object$Q(_55);
return &$s11;
block12:;
_58 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_61 = _1.value;
_62 = _58.value;
_63 = _61 == _62;
_64 = (frost$core$Bit) {_63};
_66 = _64.value;
if (_66) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_69 = ((frost$core$Object*) &$s12);
frost$core$Frost$ref$frost$core$Object$Q(_69);
return &$s13;
block15:;
_72 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_75 = _1.value;
_76 = _72.value;
_77 = _75 == _76;
_78 = (frost$core$Bit) {_77};
_80 = _78.value;
if (_80) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_83 = ((frost$core$Object*) &$s14);
frost$core$Frost$ref$frost$core$Object$Q(_83);
return &$s15;
block18:;
_86 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_89 = _1.value;
_90 = _86.value;
_91 = _89 == _90;
_92 = (frost$core$Bit) {_91};
_94 = _92.value;
if (_94) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_97 = ((frost$core$Object*) &$s16);
frost$core$Frost$ref$frost$core$Object$Q(_97);
return &$s17;
block21:;
_100 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_103 = _1.value;
_104 = _100.value;
_105 = _103 == _104;
_106 = (frost$core$Bit) {_105};
_108 = _106.value;
if (_108) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_111 = ((frost$core$Object*) &$s18);
frost$core$Frost$ref$frost$core$Object$Q(_111);
return &$s19;
block24:;
_114 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_117 = _1.value;
_118 = _114.value;
_119 = _117 == _118;
_120 = (frost$core$Bit) {_119};
_122 = _120.value;
if (_122) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_125 = ((frost$core$Object*) &$s20);
frost$core$Frost$ref$frost$core$Object$Q(_125);
return &$s21;
block27:;
_128 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_131 = _1.value;
_132 = _128.value;
_133 = _131 == _132;
_134 = (frost$core$Bit) {_133};
_136 = _134.value;
if (_136) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_139 = ((frost$core$Object*) &$s22);
frost$core$Frost$ref$frost$core$Object$Q(_139);
return &$s23;
block30:;
_142 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_145 = _1.value;
_146 = _142.value;
_147 = _145 == _146;
_148 = (frost$core$Bit) {_147};
_150 = _148.value;
if (_150) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_153 = ((frost$core$Object*) &$s24);
frost$core$Frost$ref$frost$core$Object$Q(_153);
return &$s25;
block33:;
_156 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_159 = _1.value;
_160 = _156.value;
_161 = _159 == _160;
_162 = (frost$core$Bit) {_161};
_164 = _162.value;
if (_164) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_167 = ((frost$core$Object*) &$s26);
frost$core$Frost$ref$frost$core$Object$Q(_167);
return &$s27;
block36:;
_170 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_173 = _1.value;
_174 = _170.value;
_175 = _173 == _174;
_176 = (frost$core$Bit) {_175};
_178 = _176.value;
if (_178) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_181 = ((frost$core$Object*) &$s28);
frost$core$Frost$ref$frost$core$Object$Q(_181);
return &$s29;
block39:;
_184 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_187 = _1.value;
_188 = _184.value;
_189 = _187 == _188;
_190 = (frost$core$Bit) {_189};
_192 = _190.value;
if (_192) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_195 = ((frost$core$Object*) &$s30);
frost$core$Frost$ref$frost$core$Object$Q(_195);
return &$s31;
block42:;
_198 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_201 = _1.value;
_202 = _198.value;
_203 = _201 == _202;
_204 = (frost$core$Bit) {_203};
_206 = _204.value;
if (_206) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_209 = ((frost$core$Object*) &$s32);
frost$core$Frost$ref$frost$core$Object$Q(_209);
return &$s33;
block45:;
_212 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_215 = _1.value;
_216 = _212.value;
_217 = _215 == _216;
_218 = (frost$core$Bit) {_217};
_220 = _218.value;
if (_220) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_223 = ((frost$core$Object*) &$s34);
frost$core$Frost$ref$frost$core$Object$Q(_223);
return &$s35;
block48:;
_226 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_229 = _1.value;
_230 = _226.value;
_231 = _229 == _230;
_232 = (frost$core$Bit) {_231};
_234 = _232.value;
if (_234) goto block50; else goto block51;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_237 = ((frost$core$Object*) &$s36);
frost$core$Frost$ref$frost$core$Object$Q(_237);
return &$s37;
block51:;
_240 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_243 = _1.value;
_244 = _240.value;
_245 = _243 == _244;
_246 = (frost$core$Bit) {_245};
_248 = _246.value;
if (_248) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_251 = ((frost$core$Object*) &$s38);
frost$core$Frost$ref$frost$core$Object$Q(_251);
return &$s39;
block54:;
_254 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_257 = _1.value;
_258 = _254.value;
_259 = _257 == _258;
_260 = (frost$core$Bit) {_259};
_262 = _260.value;
if (_262) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_265 = ((frost$core$Object*) &$s40);
frost$core$Frost$ref$frost$core$Object$Q(_265);
return &$s41;
block57:;
_268 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Type.frost:5:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_271 = _1.value;
_272 = _268.value;
_273 = _271 == _272;
_274 = (frost$core$Bit) {_273};
_276 = _274.value;
if (_276) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_279 = ((frost$core$Object*) &$s42);
frost$core$Frost$ref$frost$core$Object$Q(_279);
return &$s43;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_283 = (frost$core$Int) {5u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s44, _283);
abort(); // unreachable
block1:;
goto block62;
block62:;

}






