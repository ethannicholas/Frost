#include "org/frostlang/frostc/frostdoc/Markdown/_Closure28.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/frostdoc/Markdown.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/frostdoc/Markdown/LinkDefinition.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/HashMap.h"
#include "frost/collections/HashKey.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Equatable.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure28$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure28$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure28$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object} };

typedef frost$core$Object* (*$fn2)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn3)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn4)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$String* (*$fn5)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn6)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn7)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn8)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn9)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn20)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn23)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn32)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn35)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x38", 49, -4904429618807066033, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e", 145, -8025614966919154007, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e", 145, -8025614966919154007, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x2a", 2, 671060566850019011, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x74\x69\x74\x6c\x65\x3d\x22", 8, -6648448206422497324, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 6240236502603552868, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x61\x3e", 4, 8936268775352766043, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure28$init$org$frostlang$frostc$frostdoc$Markdown(void* rawSelf, org$frostlang$frostc$frostdoc$Markdown* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure28* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure28*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
org$frostlang$frostc$frostdoc$Markdown** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:936
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$self;
*_7 = param1;
return;

}
void org$frostlang$frostc$frostdoc$Markdown$_Closure28$cleanup(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown$_Closure28* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure28*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:936
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$Object* org$frostlang$frostc$frostdoc$Markdown$_Closure28$$anonymous27$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$Object(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure28* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure28*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$String* local7 = NULL;
frost$core$Int _3;
$fn2 _4;
frost$core$Object* _5;
frost$core$String* _6;
frost$core$Object* _8;
frost$core$String* _10;
frost$core$Object* _11;
frost$core$Object* _14;
frost$core$Int _17;
$fn3 _18;
frost$core$Object* _19;
frost$core$String* _20;
frost$core$Object* _22;
frost$core$String* _24;
frost$core$Object* _25;
frost$core$Object* _28;
frost$core$Int _31;
$fn4 _32;
frost$core$Object* _33;
frost$core$String* _34;
frost$core$Object* _36;
frost$core$String* _38;
frost$core$Object* _39;
frost$core$Object* _42;
frost$core$String* _45;
bool _46;
frost$core$Bit _47;
bool _48;
frost$core$Int _50;
frost$core$String* _53;
frost$core$Bit _54;
bool _55;
frost$core$String* _58;
frost$core$Object* _59;
frost$core$String* _61;
frost$core$Object* _62;
org$frostlang$frostc$frostdoc$Markdown** _67;
org$frostlang$frostc$frostdoc$Markdown* _68;
frost$collections$HashMap** _69;
frost$collections$HashMap* _70;
frost$core$String* _71;
bool _72;
frost$core$Bit _73;
bool _74;
frost$core$Int _76;
frost$core$String* _79;
frost$collections$HashKey* _80;
frost$core$Object* _81;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _82;
frost$core$Object* _84;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _86;
frost$core$Object* _87;
frost$core$Object* _90;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _93;
bool _94;
frost$core$Bit _95;
bool _96;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _99;
bool _100;
frost$core$Bit _101;
bool _102;
frost$core$Int _104;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _107;
frost$core$String** _108;
frost$core$String* _109;
frost$core$Object* _111;
frost$core$String* _113;
frost$core$Object* _114;
frost$core$String* _118;
org$frostlang$frostc$frostdoc$Markdown** _119;
org$frostlang$frostc$frostdoc$Markdown* _120;
org$frostlang$frostc$frostdoc$Protector** _121;
org$frostlang$frostc$frostdoc$Protector* _122;
$fn5 _123;
frost$core$String* _124;
frost$core$String* _125;
frost$core$Object* _126;
frost$core$String* _128;
frost$core$Object* _129;
frost$core$Object* _132;
frost$core$Object* _134;
frost$core$String* _137;
org$frostlang$frostc$frostdoc$Markdown** _138;
org$frostlang$frostc$frostdoc$Markdown* _139;
org$frostlang$frostc$frostdoc$Protector** _140;
org$frostlang$frostc$frostdoc$Protector* _141;
$fn6 _142;
frost$core$String* _143;
frost$core$String* _144;
frost$core$Object* _145;
frost$core$String* _147;
frost$core$Object* _148;
frost$core$Object* _151;
frost$core$Object* _153;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _156;
bool _157;
frost$core$Bit _158;
bool _159;
frost$core$Int _161;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _164;
frost$core$String** _165;
frost$core$String* _166;
frost$core$Object* _168;
frost$core$String* _170;
frost$core$Object* _171;
frost$core$Object* _176;
frost$core$String* _178;
frost$core$Object* _179;
frost$core$String* _183;
frost$core$Bit _184;
bool _185;
frost$core$String* _187;
frost$core$Equatable* _188;
frost$core$Equatable* _189;
$fn7 _190;
frost$core$Bit _191;
bool _192;
frost$core$String* _195;
org$frostlang$frostc$frostdoc$Markdown** _196;
org$frostlang$frostc$frostdoc$Markdown* _197;
org$frostlang$frostc$frostdoc$Protector** _198;
org$frostlang$frostc$frostdoc$Protector* _199;
$fn8 _200;
frost$core$String* _201;
frost$core$String* _202;
frost$core$Object* _203;
frost$core$String* _205;
frost$core$Object* _206;
frost$core$Object* _209;
frost$core$Object* _211;
frost$core$String* _214;
org$frostlang$frostc$frostdoc$Markdown** _215;
org$frostlang$frostc$frostdoc$Markdown* _216;
org$frostlang$frostc$frostdoc$Protector** _217;
org$frostlang$frostc$frostdoc$Protector* _218;
$fn9 _219;
frost$core$String* _220;
frost$core$String* _221;
frost$core$Object* _222;
frost$core$String* _224;
frost$core$Object* _225;
frost$core$Object* _228;
frost$core$Object* _230;
frost$core$String* _233;
frost$core$String* _234;
frost$core$String* _235;
frost$core$Object* _236;
frost$core$String* _238;
frost$core$Object* _239;
frost$core$Object* _242;
frost$core$Object* _244;
frost$core$String* _248;
frost$core$String* _249;
frost$core$String* _250;
frost$core$String* _251;
frost$core$String* _252;
frost$core$String* _253;
frost$core$String* _254;
bool _255;
frost$core$Bit _256;
bool _257;
frost$core$Int _259;
frost$core$String* _262;
frost$core$String* _263;
frost$core$String* _264;
frost$core$Object* _265;
frost$core$String* _267;
frost$core$Object* _268;
frost$core$Object* _271;
frost$core$Object* _273;
frost$core$Object* _275;
frost$core$Object* _277;
frost$core$Object* _279;
frost$core$Object* _281;
frost$core$String* _283;
frost$core$Object* _284;
frost$core$String* _287;
frost$core$Object* _288;
frost$core$String* _291;
frost$core$Object* _292;
frost$core$String* _298;
bool _299;
frost$core$Bit _300;
bool _301;
frost$core$Int _303;
frost$core$String* _306;
frost$core$Object* _307;
frost$core$String* _309;
frost$core$Object* _310;
frost$core$String* _315;
frost$core$Object* _316;
frost$core$Object* _317;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _319;
frost$core$Object* _320;
frost$core$String* _323;
frost$core$Object* _324;
frost$core$String* _327;
frost$core$Object* _328;
frost$core$String* _331;
frost$core$Object* _332;
frost$core$String* _335;
frost$core$Object* _336;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:937
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:938
_3 = (frost$core$Int) {1u};
ITable* $tmp10 = param1->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp10 = $tmp10->next;
}
_4 = $tmp10->methods[0];
_5 = _4(param1, _3);
_6 = ((frost$core$String*) _5);
*(&local1) = ((frost$core$String*) NULL);
_8 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = *(&local1);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
*(&local1) = _6;
_14 = _5;
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:939
_17 = (frost$core$Int) {2u};
ITable* $tmp11 = param1->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp11 = $tmp11->next;
}
_18 = $tmp11->methods[0];
_19 = _18(param1, _17);
_20 = ((frost$core$String*) _19);
*(&local2) = ((frost$core$String*) NULL);
_22 = ((frost$core$Object*) _20);
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = *(&local2);
_25 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_25);
*(&local2) = _20;
_28 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_28);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:940
_31 = (frost$core$Int) {3u};
ITable* $tmp12 = param1->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp12 = $tmp12->next;
}
_32 = $tmp12->methods[0];
_33 = _32(param1, _31);
_34 = ((frost$core$String*) _33);
*(&local3) = ((frost$core$String*) NULL);
_36 = ((frost$core$Object*) _34);
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = *(&local3);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local3) = _34;
_42 = _33;
frost$core$Frost$unref$frost$core$Object$Q(_42);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:941
_45 = *(&local3);
_46 = _45 != NULL;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block3; else goto block4;
block4:;
_50 = (frost$core$Int) {941u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _50, &$s14);
abort(); // unreachable
block3:;
_53 = _45;
_54 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_53, &$s15);
_55 = _54.value;
if (_55) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:942
_58 = *(&local2);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$ref$frost$core$Object$Q(_59);
_61 = *(&local3);
_62 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_62);
*(&local3) = _58;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:945
_67 = &param0->$self;
_68 = *_67;
_69 = &_68->linkDefinitions;
_70 = *_69;
_71 = *(&local3);
_72 = _71 != NULL;
_73 = (frost$core$Bit) {_72};
_74 = _73.value;
if (_74) goto block5; else goto block6;
block6:;
_76 = (frost$core$Int) {945u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _76, &$s17);
abort(); // unreachable
block5:;
_79 = _71;
_80 = ((frost$collections$HashKey*) _79);
_81 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_70, _80);
_82 = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) _81);
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
_84 = ((frost$core$Object*) _82);
frost$core$Frost$ref$frost$core$Object$Q(_84);
_86 = *(&local4);
_87 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_87);
*(&local4) = _82;
_90 = _81;
frost$core$Frost$unref$frost$core$Object$Q(_90);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:946
_93 = *(&local4);
_94 = _93 != NULL;
_95 = (frost$core$Bit) {_94};
_96 = _95.value;
if (_96) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:947
_99 = *(&local4);
_100 = _99 != NULL;
_101 = (frost$core$Bit) {_100};
_102 = _101.value;
if (_102) goto block10; else goto block11;
block11:;
_104 = (frost$core$Int) {947u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _104, &$s19);
abort(); // unreachable
block10:;
_107 = _99;
_108 = &_107->url;
_109 = *_108;
*(&local5) = ((frost$core$String*) NULL);
_111 = ((frost$core$Object*) _109);
frost$core$Frost$ref$frost$core$Object$Q(_111);
_113 = *(&local5);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_114);
*(&local5) = _109;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:949
_118 = *(&local5);
_119 = &param0->$self;
_120 = *_119;
_121 = &_120->charProtector;
_122 = *_121;
_123 = ($fn20) _122->$class->vtable[2];
_124 = _123(_122, &$s21);
_125 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_118, &$s22, _124);
_126 = ((frost$core$Object*) _125);
frost$core$Frost$ref$frost$core$Object$Q(_126);
_128 = *(&local5);
_129 = ((frost$core$Object*) _128);
frost$core$Frost$unref$frost$core$Object$Q(_129);
*(&local5) = _125;
_132 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_132);
_134 = ((frost$core$Object*) _124);
frost$core$Frost$unref$frost$core$Object$Q(_134);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:950
_137 = *(&local5);
_138 = &param0->$self;
_139 = *_138;
_140 = &_139->charProtector;
_141 = *_140;
_142 = ($fn23) _141->$class->vtable[2];
_143 = _142(_141, &$s24);
_144 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_137, &$s25, _143);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$ref$frost$core$Object$Q(_145);
_147 = *(&local5);
_148 = ((frost$core$Object*) _147);
frost$core$Frost$unref$frost$core$Object$Q(_148);
*(&local5) = _144;
_151 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_151);
_153 = ((frost$core$Object*) _143);
frost$core$Frost$unref$frost$core$Object$Q(_153);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:951
_156 = *(&local4);
_157 = _156 != NULL;
_158 = (frost$core$Bit) {_157};
_159 = _158.value;
if (_159) goto block12; else goto block13;
block13:;
_161 = (frost$core$Int) {951u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _161, &$s27);
abort(); // unreachable
block12:;
_164 = _156;
_165 = &_164->title;
_166 = *_165;
*(&local6) = ((frost$core$String*) NULL);
_168 = ((frost$core$Object*) _166);
frost$core$Frost$ref$frost$core$Object$Q(_168);
_170 = *(&local6);
_171 = ((frost$core$Object*) _170);
frost$core$Frost$unref$frost$core$Object$Q(_171);
*(&local6) = _166;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:952
*(&local7) = ((frost$core$String*) NULL);
_176 = ((frost$core$Object*) &$s28);
frost$core$Frost$ref$frost$core$Object$Q(_176);
_178 = *(&local7);
_179 = ((frost$core$Object*) _178);
frost$core$Frost$unref$frost$core$Object$Q(_179);
*(&local7) = &$s29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:953
_183 = *(&local6);
_184 = (frost$core$Bit) {true};
_185 = _184.value;
if (_185) goto block16; else goto block15;
block16:;
_187 = *(&local6);
_188 = ((frost$core$Equatable*) _187);
_189 = ((frost$core$Equatable*) &$s30);
ITable* $tmp31 = _188->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp31 = $tmp31->next;
}
_190 = $tmp31->methods[1];
_191 = _190(_188, _189);
_192 = _191.value;
if (_192) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:955
_195 = *(&local6);
_196 = &param0->$self;
_197 = *_196;
_198 = &_197->charProtector;
_199 = *_198;
_200 = ($fn32) _199->$class->vtable[2];
_201 = _200(_199, &$s33);
_202 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_195, &$s34, _201);
_203 = ((frost$core$Object*) _202);
frost$core$Frost$ref$frost$core$Object$Q(_203);
_205 = *(&local6);
_206 = ((frost$core$Object*) _205);
frost$core$Frost$unref$frost$core$Object$Q(_206);
*(&local6) = _202;
_209 = ((frost$core$Object*) _202);
frost$core$Frost$unref$frost$core$Object$Q(_209);
_211 = ((frost$core$Object*) _201);
frost$core$Frost$unref$frost$core$Object$Q(_211);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:956
_214 = *(&local6);
_215 = &param0->$self;
_216 = *_215;
_217 = &_216->charProtector;
_218 = *_217;
_219 = ($fn35) _218->$class->vtable[2];
_220 = _219(_218, &$s36);
_221 = frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(_214, &$s37, _220);
_222 = ((frost$core$Object*) _221);
frost$core$Frost$ref$frost$core$Object$Q(_222);
_224 = *(&local6);
_225 = ((frost$core$Object*) _224);
frost$core$Frost$unref$frost$core$Object$Q(_225);
*(&local6) = _221;
_228 = ((frost$core$Object*) _221);
frost$core$Frost$unref$frost$core$Object$Q(_228);
_230 = ((frost$core$Object*) _220);
frost$core$Frost$unref$frost$core$Object$Q(_230);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:957
_233 = *(&local6);
_234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s38, _233);
_235 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_234, &$s39);
_236 = ((frost$core$Object*) _235);
frost$core$Frost$ref$frost$core$Object$Q(_236);
_238 = *(&local7);
_239 = ((frost$core$Object*) _238);
frost$core$Frost$unref$frost$core$Object$Q(_239);
*(&local7) = _235;
_242 = ((frost$core$Object*) _235);
frost$core$Frost$unref$frost$core$Object$Q(_242);
_244 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_244);
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:959
_248 = *(&local5);
_249 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s40, _248);
_250 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_249, &$s41);
_251 = *(&local7);
_252 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_250, _251);
_253 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_252, &$s42);
_254 = *(&local2);
_255 = _254 != NULL;
_256 = (frost$core$Bit) {_255};
_257 = _256.value;
if (_257) goto block17; else goto block18;
block18:;
_259 = (frost$core$Int) {959u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s43, _259, &$s44);
abort(); // unreachable
block17:;
_262 = _254;
_263 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_253, _262);
_264 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_263, &$s45);
_265 = ((frost$core$Object*) _264);
frost$core$Frost$ref$frost$core$Object$Q(_265);
_267 = *(&local0);
_268 = ((frost$core$Object*) _267);
frost$core$Frost$unref$frost$core$Object$Q(_268);
*(&local0) = _264;
_271 = ((frost$core$Object*) _264);
frost$core$Frost$unref$frost$core$Object$Q(_271);
_273 = ((frost$core$Object*) _263);
frost$core$Frost$unref$frost$core$Object$Q(_273);
_275 = ((frost$core$Object*) _253);
frost$core$Frost$unref$frost$core$Object$Q(_275);
_277 = ((frost$core$Object*) _252);
frost$core$Frost$unref$frost$core$Object$Q(_277);
_279 = ((frost$core$Object*) _250);
frost$core$Frost$unref$frost$core$Object$Q(_279);
_281 = ((frost$core$Object*) _249);
frost$core$Frost$unref$frost$core$Object$Q(_281);
_283 = *(&local7);
_284 = ((frost$core$Object*) _283);
frost$core$Frost$unref$frost$core$Object$Q(_284);
*(&local7) = ((frost$core$String*) NULL);
_287 = *(&local6);
_288 = ((frost$core$Object*) _287);
frost$core$Frost$unref$frost$core$Object$Q(_288);
*(&local6) = ((frost$core$String*) NULL);
_291 = *(&local5);
_292 = ((frost$core$Object*) _291);
frost$core$Frost$unref$frost$core$Object$Q(_292);
*(&local5) = ((frost$core$String*) NULL);
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:962
_298 = *(&local1);
_299 = _298 != NULL;
_300 = (frost$core$Bit) {_299};
_301 = _300.value;
if (_301) goto block19; else goto block20;
block20:;
_303 = (frost$core$Int) {962u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _303, &$s47);
abort(); // unreachable
block19:;
_306 = _298;
_307 = ((frost$core$Object*) _306);
frost$core$Frost$ref$frost$core$Object$Q(_307);
_309 = *(&local0);
_310 = ((frost$core$Object*) _309);
frost$core$Frost$unref$frost$core$Object$Q(_310);
*(&local0) = _306;
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:964
_315 = *(&local0);
_316 = ((frost$core$Object*) _315);
_317 = _316;
frost$core$Frost$ref$frost$core$Object$Q(_317);
_319 = *(&local4);
_320 = ((frost$core$Object*) _319);
frost$core$Frost$unref$frost$core$Object$Q(_320);
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
_323 = *(&local3);
_324 = ((frost$core$Object*) _323);
frost$core$Frost$unref$frost$core$Object$Q(_324);
*(&local3) = ((frost$core$String*) NULL);
_327 = *(&local2);
_328 = ((frost$core$Object*) _327);
frost$core$Frost$unref$frost$core$Object$Q(_328);
*(&local2) = ((frost$core$String*) NULL);
_331 = *(&local1);
_332 = ((frost$core$Object*) _331);
frost$core$Frost$unref$frost$core$Object$Q(_332);
*(&local1) = ((frost$core$String*) NULL);
_335 = *(&local0);
_336 = ((frost$core$Object*) _335);
frost$core$Frost$unref$frost$core$Object$Q(_336);
*(&local0) = ((frost$core$String*) NULL);
return _316;

}

