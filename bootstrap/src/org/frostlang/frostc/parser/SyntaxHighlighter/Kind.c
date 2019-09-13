#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Int org$frostlang$frostc$parser$SyntaxHighlighter$Kind$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$get_hash$R$frost$core$Int(((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit org$frostlang$frostc$parser$SyntaxHighlighter$Kind$$EQ$org$frostlang$frostc$parser$SyntaxHighlighter$Kind$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$$EQ$org$frostlang$frostc$parser$SyntaxHighlighter$Kind$R$frost$core$Bit(((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) p0)->value, ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* org$frostlang$frostc$parser$SyntaxHighlighter$Kind$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = org$frostlang$frostc$parser$SyntaxHighlighter$Kind$get_asString$R$frost$core$String(((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$frostlang$frostc$parser$SyntaxHighlighter$Kind$cleanup$shim(frost$core$Object* p0) {
    org$frostlang$frostc$parser$SyntaxHighlighter$Kind$cleanup(((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$parser$SyntaxHighlighter$Kind$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$parser$SyntaxHighlighter$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$parser$SyntaxHighlighter$Kind$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$_frost$collections$HashKey, { org$frostlang$frostc$parser$SyntaxHighlighter$Kind$$EQ$org$frostlang$frostc$parser$SyntaxHighlighter$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$class_type org$frostlang$frostc$parser$SyntaxHighlighter$Kind$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$_frost$core$Equatable, { org$frostlang$frostc$parser$SyntaxHighlighter$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, org$frostlang$frostc$parser$SyntaxHighlighter$Kind$cleanup$shim, org$frostlang$frostc$parser$SyntaxHighlighter$Kind$$EQ$org$frostlang$frostc$parser$SyntaxHighlighter$Kind$R$frost$core$Bit$shim, org$frostlang$frostc$parser$SyntaxHighlighter$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { org$frostlang$frostc$parser$SyntaxHighlighter$Kind$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper_frost$collections$HashKey, { org$frostlang$frostc$parser$SyntaxHighlighter$Kind$$EQ$org$frostlang$frostc$parser$SyntaxHighlighter$Kind$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s2;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass_type org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, (ITable*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper_frost$core$Equatable, { org$frostlang$frostc$parser$SyntaxHighlighter$Kind$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x2e\x4b\x69\x6e\x64", 50, -8996191960429878727, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x2e\x4b\x69\x6e\x64", 50, -8996191960429878727, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 23, -3132022240999228739, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 23, -3132022240999228739, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x46\x41\x55\x4c\x54", 7, 2932904599003471774, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x45\x46\x41\x55\x4c\x54", 7, 2932904599003471774, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x45\x4e\x54", 7, 5153933372201459998, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4d\x4d\x45\x4e\x54", 7, 5153933372201459998, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x43\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 11, -854743268890280045, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x4f\x43\x5f\x43\x4f\x4d\x4d\x45\x4e\x54", 11, -854743268890280045, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x4e\x4f\x54\x41\x54\x49\x4f\x4e", 10, -6766455421495095064, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x4e\x4e\x4f\x54\x41\x54\x49\x4f\x4e", 10, -6766455421495095064, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x5f\x4e\x41\x4d\x45", 11, -6323369730864483362, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x5f\x4e\x41\x4d\x45", 11, -6323369730864483362, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x5f\x50\x41\x52\x41\x4d\x45\x54\x45\x52", 16, 7072395964652926728, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x5f\x50\x41\x52\x41\x4d\x45\x54\x45\x52", 16, 7072395964652926728, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x59\x50\x45", 4, -4862204267268759763, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x59\x50\x45", 4, -4862204267268759763, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4b\x45\x59\x57\x4f\x52\x44", 7, 2658439252042964036, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4b\x45\x59\x57\x4f\x52\x44", 7, 2658439252042964036, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x54\x52\x4f\x4c\x5f\x4b\x45\x59\x57\x4f\x52\x44", 15, -8895969894742760530, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x4f\x4e\x54\x52\x4f\x4c\x5f\x4b\x45\x59\x57\x4f\x52\x44", 15, -8895969894742760530, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x49\x54\x45\x52\x41\x4c", 7, 5541113819957048324, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x49\x54\x45\x52\x41\x4c", 7, 5541113819957048324, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x54\x52\x49\x4e\x47", 6, -5915885403257564456, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x54\x52\x49\x4e\x47", 6, -5915885403257564456, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x50\x45\x52\x41\x54\x4f\x52", 8, 8694425183453984925, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x50\x45\x52\x41\x54\x4f\x52", 8, 8694425183453984925, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x41\x42\x45\x4c", 5, 7613578176224052381, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x41\x42\x45\x4c", 5, 7613578176224052381, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 23, -3132022240999228739, NULL };

void org$frostlang$frostc$parser$SyntaxHighlighter$Kind$cleanup(org$frostlang$frostc$parser$SyntaxHighlighter$Kind param0) {

return;

}
org$frostlang$frostc$parser$SyntaxHighlighter$Kind org$frostlang$frostc$parser$SyntaxHighlighter$Kind$init$frost$core$Int(frost$core$Int param0) {

org$frostlang$frostc$parser$SyntaxHighlighter$Kind local0;
frost$core$Int* _1;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind _3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_1 = &(&local0)->$rawValue;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Bit org$frostlang$frostc$parser$SyntaxHighlighter$Kind$$EQ$org$frostlang$frostc$parser$SyntaxHighlighter$Kind$R$frost$core$Bit(org$frostlang$frostc$parser$SyntaxHighlighter$Kind param0, org$frostlang$frostc$parser$SyntaxHighlighter$Kind param1) {

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
frost$core$Int _380;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_13 = param1.$rawValue;
_14 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_17 = _13.value;
_18 = _14.value;
_19 = _17 == _18;
_20 = (frost$core$Bit) {_19};
_22 = _20.value;
if (_22) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_25 = (frost$core$Bit) {true};
return _25;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_28 = (frost$core$Bit) {false};
return _28;
block5:;
goto block1;
block3:;
_31 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_34 = _1.value;
_35 = _31.value;
_36 = _34 == _35;
_37 = (frost$core$Bit) {_36};
_39 = _37.value;
if (_39) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_42 = param1.$rawValue;
_43 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_46 = _42.value;
_47 = _43.value;
_48 = _46 == _47;
_49 = (frost$core$Bit) {_48};
_51 = _49.value;
if (_51) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_54 = (frost$core$Bit) {true};
return _54;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_57 = (frost$core$Bit) {false};
return _57;
block12:;
goto block1;
block10:;
_60 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_63 = _1.value;
_64 = _60.value;
_65 = _63 == _64;
_66 = (frost$core$Bit) {_65};
_68 = _66.value;
if (_68) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_71 = param1.$rawValue;
_72 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_75 = _71.value;
_76 = _72.value;
_77 = _75 == _76;
_78 = (frost$core$Bit) {_77};
_80 = _78.value;
if (_80) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_83 = (frost$core$Bit) {true};
return _83;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_86 = (frost$core$Bit) {false};
return _86;
block19:;
goto block1;
block17:;
_89 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_92 = _1.value;
_93 = _89.value;
_94 = _92 == _93;
_95 = (frost$core$Bit) {_94};
_97 = _95.value;
if (_97) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_100 = param1.$rawValue;
_101 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_104 = _100.value;
_105 = _101.value;
_106 = _104 == _105;
_107 = (frost$core$Bit) {_106};
_109 = _107.value;
if (_109) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_112 = (frost$core$Bit) {true};
return _112;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_115 = (frost$core$Bit) {false};
return _115;
block26:;
goto block1;
block24:;
_118 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_121 = _1.value;
_122 = _118.value;
_123 = _121 == _122;
_124 = (frost$core$Bit) {_123};
_126 = _124.value;
if (_126) goto block30; else goto block31;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_129 = param1.$rawValue;
_130 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_133 = _129.value;
_134 = _130.value;
_135 = _133 == _134;
_136 = (frost$core$Bit) {_135};
_138 = _136.value;
if (_138) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_141 = (frost$core$Bit) {true};
return _141;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_144 = (frost$core$Bit) {false};
return _144;
block33:;
goto block1;
block31:;
_147 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_150 = _1.value;
_151 = _147.value;
_152 = _150 == _151;
_153 = (frost$core$Bit) {_152};
_155 = _153.value;
if (_155) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_158 = param1.$rawValue;
_159 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_162 = _158.value;
_163 = _159.value;
_164 = _162 == _163;
_165 = (frost$core$Bit) {_164};
_167 = _165.value;
if (_167) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_170 = (frost$core$Bit) {true};
return _170;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_173 = (frost$core$Bit) {false};
return _173;
block40:;
goto block1;
block38:;
_176 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_179 = _1.value;
_180 = _176.value;
_181 = _179 == _180;
_182 = (frost$core$Bit) {_181};
_184 = _182.value;
if (_184) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_187 = param1.$rawValue;
_188 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_191 = _187.value;
_192 = _188.value;
_193 = _191 == _192;
_194 = (frost$core$Bit) {_193};
_196 = _194.value;
if (_196) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_199 = (frost$core$Bit) {true};
return _199;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_202 = (frost$core$Bit) {false};
return _202;
block47:;
goto block1;
block45:;
_205 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_208 = _1.value;
_209 = _205.value;
_210 = _208 == _209;
_211 = (frost$core$Bit) {_210};
_213 = _211.value;
if (_213) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_216 = param1.$rawValue;
_217 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_220 = _216.value;
_221 = _217.value;
_222 = _220 == _221;
_223 = (frost$core$Bit) {_222};
_225 = _223.value;
if (_225) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_228 = (frost$core$Bit) {true};
return _228;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_231 = (frost$core$Bit) {false};
return _231;
block54:;
goto block1;
block52:;
_234 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_237 = _1.value;
_238 = _234.value;
_239 = _237 == _238;
_240 = (frost$core$Bit) {_239};
_242 = _240.value;
if (_242) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_245 = param1.$rawValue;
_246 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_249 = _245.value;
_250 = _246.value;
_251 = _249 == _250;
_252 = (frost$core$Bit) {_251};
_254 = _252.value;
if (_254) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_257 = (frost$core$Bit) {true};
return _257;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_260 = (frost$core$Bit) {false};
return _260;
block61:;
goto block1;
block59:;
_263 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_266 = _1.value;
_267 = _263.value;
_268 = _266 == _267;
_269 = (frost$core$Bit) {_268};
_271 = _269.value;
if (_271) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_274 = param1.$rawValue;
_275 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_278 = _274.value;
_279 = _275.value;
_280 = _278 == _279;
_281 = (frost$core$Bit) {_280};
_283 = _281.value;
if (_283) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_286 = (frost$core$Bit) {true};
return _286;
block70:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_289 = (frost$core$Bit) {false};
return _289;
block68:;
goto block1;
block66:;
_292 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_295 = _1.value;
_296 = _292.value;
_297 = _295 == _296;
_298 = (frost$core$Bit) {_297};
_300 = _298.value;
if (_300) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_303 = param1.$rawValue;
_304 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_307 = _303.value;
_308 = _304.value;
_309 = _307 == _308;
_310 = (frost$core$Bit) {_309};
_312 = _310.value;
if (_312) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_315 = (frost$core$Bit) {true};
return _315;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_318 = (frost$core$Bit) {false};
return _318;
block75:;
goto block1;
block73:;
_321 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_324 = _1.value;
_325 = _321.value;
_326 = _324 == _325;
_327 = (frost$core$Bit) {_326};
_329 = _327.value;
if (_329) goto block79; else goto block80;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_332 = param1.$rawValue;
_333 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_336 = _332.value;
_337 = _333.value;
_338 = _336 == _337;
_339 = (frost$core$Bit) {_338};
_341 = _339.value;
if (_341) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_344 = (frost$core$Bit) {true};
return _344;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_347 = (frost$core$Bit) {false};
return _347;
block82:;
goto block1;
block80:;
_350 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_353 = _1.value;
_354 = _350.value;
_355 = _353 == _354;
_356 = (frost$core$Bit) {_355};
_358 = _356.value;
if (_358) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_361 = param1.$rawValue;
_362 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_365 = _361.value;
_366 = _362.value;
_367 = _365 == _366;
_368 = (frost$core$Bit) {_367};
_370 = _368.value;
if (_370) goto block90; else goto block91;
block90:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_373 = (frost$core$Bit) {true};
return _373;
block91:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_376 = (frost$core$Bit) {false};
return _376;
block89:;
goto block1;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_380 = (frost$core$Int) {6u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s3, _380);
abort(); // unreachable
block1:;
goto block93;
block93:;

}
frost$core$Int org$frostlang$frostc$parser$SyntaxHighlighter$Kind$get_hash$R$frost$core$Int(org$frostlang$frostc$parser$SyntaxHighlighter$Kind param0) {

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
frost$core$Int _172;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_13 = (frost$core$Int) {9450552113279672889u};
return _13;
block3:;
_15 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_18 = _1.value;
_19 = _15.value;
_20 = _18 == _19;
_21 = (frost$core$Bit) {_20};
_23 = _21.value;
if (_23) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_26 = (frost$core$Int) {454360152849794162u};
return _26;
block6:;
_28 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_31 = _1.value;
_32 = _28.value;
_33 = _31 == _32;
_34 = (frost$core$Bit) {_33};
_36 = _34.value;
if (_36) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_39 = (frost$core$Int) {9904912266129467051u};
return _39;
block9:;
_41 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_44 = _1.value;
_45 = _41.value;
_46 = _44 == _45;
_47 = (frost$core$Bit) {_46};
_49 = _47.value;
if (_49) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_52 = (frost$core$Int) {908720305699588324u};
return _52;
block12:;
_54 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_57 = _1.value;
_58 = _54.value;
_59 = _57 == _58;
_60 = (frost$core$Bit) {_59};
_62 = _60.value;
if (_62) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_65 = (frost$core$Int) {10359272418979261213u};
return _65;
block15:;
_67 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_70 = _1.value;
_71 = _67.value;
_72 = _70 == _71;
_73 = (frost$core$Bit) {_72};
_75 = _73.value;
if (_75) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_78 = (frost$core$Int) {1363080458549382486u};
return _78;
block18:;
_80 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_83 = _1.value;
_84 = _80.value;
_85 = _83 == _84;
_86 = (frost$core$Bit) {_85};
_88 = _86.value;
if (_88) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_91 = (frost$core$Int) {10813632571829055375u};
return _91;
block21:;
_93 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_96 = _1.value;
_97 = _93.value;
_98 = _96 == _97;
_99 = (frost$core$Bit) {_98};
_101 = _99.value;
if (_101) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_104 = (frost$core$Int) {1817440611399176648u};
return _104;
block24:;
_106 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_109 = _1.value;
_110 = _106.value;
_111 = _109 == _110;
_112 = (frost$core$Bit) {_111};
_114 = _112.value;
if (_114) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_117 = (frost$core$Int) {11267992724678849537u};
return _117;
block27:;
_119 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_122 = _1.value;
_123 = _119.value;
_124 = _122 == _123;
_125 = (frost$core$Bit) {_124};
_127 = _125.value;
if (_127) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_130 = (frost$core$Int) {2271800764248970810u};
return _130;
block30:;
_132 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_135 = _1.value;
_136 = _132.value;
_137 = _135 == _136;
_138 = (frost$core$Bit) {_137};
_140 = _138.value;
if (_140) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_143 = (frost$core$Int) {11722352877528643699u};
return _143;
block33:;
_145 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_148 = _1.value;
_149 = _145.value;
_150 = _148 == _149;
_151 = (frost$core$Bit) {_150};
_153 = _151.value;
if (_153) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_156 = (frost$core$Int) {2726160917098764972u};
return _156;
block36:;
_158 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_161 = _1.value;
_162 = _158.value;
_163 = _161 == _162;
_164 = (frost$core$Bit) {_163};
_166 = _164.value;
if (_166) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_169 = (frost$core$Int) {12176713030378437861u};
return _169;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_172 = (frost$core$Int) {6u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s4, _172);
abort(); // unreachable
block1:;
goto block41;
block41:;

}
frost$core$String* org$frostlang$frostc$parser$SyntaxHighlighter$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$parser$SyntaxHighlighter$Kind param0) {

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
frost$core$Int _185;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_1 = param0.$rawValue;
_2 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_5 = _1.value;
_6 = _2.value;
_7 = _5 == _6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_13 = ((frost$core$Object*) &$s5);
frost$core$Frost$ref$frost$core$Object$Q(_13);
return &$s6;
block3:;
_16 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_19 = _1.value;
_20 = _16.value;
_21 = _19 == _20;
_22 = (frost$core$Bit) {_21};
_24 = _22.value;
if (_24) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_27 = ((frost$core$Object*) &$s7);
frost$core$Frost$ref$frost$core$Object$Q(_27);
return &$s8;
block6:;
_30 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_33 = _1.value;
_34 = _30.value;
_35 = _33 == _34;
_36 = (frost$core$Bit) {_35};
_38 = _36.value;
if (_38) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_41 = ((frost$core$Object*) &$s9);
frost$core$Frost$ref$frost$core$Object$Q(_41);
return &$s10;
block9:;
_44 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_47 = _1.value;
_48 = _44.value;
_49 = _47 == _48;
_50 = (frost$core$Bit) {_49};
_52 = _50.value;
if (_52) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_55 = ((frost$core$Object*) &$s11);
frost$core$Frost$ref$frost$core$Object$Q(_55);
return &$s12;
block12:;
_58 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_61 = _1.value;
_62 = _58.value;
_63 = _61 == _62;
_64 = (frost$core$Bit) {_63};
_66 = _64.value;
if (_66) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_69 = ((frost$core$Object*) &$s13);
frost$core$Frost$ref$frost$core$Object$Q(_69);
return &$s14;
block15:;
_72 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_75 = _1.value;
_76 = _72.value;
_77 = _75 == _76;
_78 = (frost$core$Bit) {_77};
_80 = _78.value;
if (_80) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_83 = ((frost$core$Object*) &$s15);
frost$core$Frost$ref$frost$core$Object$Q(_83);
return &$s16;
block18:;
_86 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_89 = _1.value;
_90 = _86.value;
_91 = _89 == _90;
_92 = (frost$core$Bit) {_91};
_94 = _92.value;
if (_94) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_97 = ((frost$core$Object*) &$s17);
frost$core$Frost$ref$frost$core$Object$Q(_97);
return &$s18;
block21:;
_100 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_103 = _1.value;
_104 = _100.value;
_105 = _103 == _104;
_106 = (frost$core$Bit) {_105};
_108 = _106.value;
if (_108) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_111 = ((frost$core$Object*) &$s19);
frost$core$Frost$ref$frost$core$Object$Q(_111);
return &$s20;
block24:;
_114 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_117 = _1.value;
_118 = _114.value;
_119 = _117 == _118;
_120 = (frost$core$Bit) {_119};
_122 = _120.value;
if (_122) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_125 = ((frost$core$Object*) &$s21);
frost$core$Frost$ref$frost$core$Object$Q(_125);
return &$s22;
block27:;
_128 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_131 = _1.value;
_132 = _128.value;
_133 = _131 == _132;
_134 = (frost$core$Bit) {_133};
_136 = _134.value;
if (_136) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_139 = ((frost$core$Object*) &$s23);
frost$core$Frost$ref$frost$core$Object$Q(_139);
return &$s24;
block30:;
_142 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_145 = _1.value;
_146 = _142.value;
_147 = _145 == _146;
_148 = (frost$core$Bit) {_147};
_150 = _148.value;
if (_150) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_153 = ((frost$core$Object*) &$s25);
frost$core$Frost$ref$frost$core$Object$Q(_153);
return &$s26;
block33:;
_156 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_159 = _1.value;
_160 = _156.value;
_161 = _159 == _160;
_162 = (frost$core$Bit) {_161};
_164 = _162.value;
if (_164) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_167 = ((frost$core$Object*) &$s27);
frost$core$Frost$ref$frost$core$Object$Q(_167);
return &$s28;
block36:;
_170 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from SyntaxHighlighter.frost:6:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_173 = _1.value;
_174 = _170.value;
_175 = _173 == _174;
_176 = (frost$core$Bit) {_175};
_178 = _176.value;
if (_178) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_181 = ((frost$core$Object*) &$s29);
frost$core$Frost$ref$frost$core$Object$Q(_181);
return &$s30;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
_185 = (frost$core$Int) {6u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s31, _185);
abort(); // unreachable
block1:;
goto block41;
block41:;

}






