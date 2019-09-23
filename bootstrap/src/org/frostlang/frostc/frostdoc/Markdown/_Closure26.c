#include "org/frostlang/frostc/frostdoc/Markdown/_Closure26.h"
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
#include "frost/core/RegularExpression.h"
#include "org/frostlang/frostc/frostdoc/Protector.h"
#include "frost/core/Equatable.h"


static frost$core$String $s1;
org$frostlang$frostc$frostdoc$Markdown$_Closure26$class_type org$frostlang$frostc$frostdoc$Markdown$_Closure26$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$frostdoc$Markdown$_Closure26$cleanup, org$frostlang$frostc$frostdoc$Markdown$_Closure26$$anonymous25$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String} };

typedef frost$core$Object* (*$fn2)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn3)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn4)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$String* (*$fn5)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn6)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$Bit (*$fn7)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn8)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn9)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn21)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn24)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn33)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);
typedef frost$core$String* (*$fn36)(org$frostlang$frostc$frostdoc$Protector*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x36", 49, -4904423021737296767, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e", 145, -8025614966919154007, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c\x2a", 3, -5656837679511394947, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x66\x72\x6f\x73\x74\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x4c\x69\x6e\x6b\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e", 145, -8025614966919154007, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5c\x5c\x2a", 3, -5656837679511394947, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2a", 1, -5808615147270204803, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5f", 1, -5808497499525986226, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x6c\x74\x3d\x22", 6, 7389945467677129405, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x20\x74\x69\x74\x6c\x65\x3d\x22", 9, 5695104004738728724, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x69\x6d\x67\x20\x73\x72\x63\x3d\x22", 10, -4640319832027825661, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22", 1, -5808623943363230491, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x3e", 2, 564788369957916992, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -4595392010584278012, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };

void org$frostlang$frostc$frostdoc$Markdown$_Closure26$init$org$frostlang$frostc$frostdoc$Markdown(void* rawSelf, org$frostlang$frostc$frostdoc$Markdown* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure26* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure26*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
org$frostlang$frostc$frostdoc$Markdown** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:898
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
void org$frostlang$frostc$frostdoc$Markdown$_Closure26$cleanup(void* rawSelf) {
org$frostlang$frostc$frostdoc$Markdown$_Closure26* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure26*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$frostdoc$Markdown** _3;
org$frostlang$frostc$frostdoc$Markdown* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:898
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$String* org$frostlang$frostc$frostdoc$Markdown$_Closure26$$anonymous25$frost$collections$ListView$LTfrost$core$String$Q$GT$R$frost$core$String(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$frostdoc$Markdown$_Closure26* param0 = (org$frostlang$frostc$frostdoc$Markdown$_Closure26*) rawSelf;

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
frost$core$RegularExpression* _119;
org$frostlang$frostc$frostdoc$Markdown** _121;
org$frostlang$frostc$frostdoc$Markdown* _122;
org$frostlang$frostc$frostdoc$Protector** _123;
org$frostlang$frostc$frostdoc$Protector* _124;
$fn5 _125;
frost$core$String* _126;
frost$core$Bit _129;
frost$core$String* _130;
frost$core$Object* _131;
frost$core$Object* _133;
frost$core$Object* _136;
frost$core$String* _138;
frost$core$Object* _139;
frost$core$Object* _142;
frost$core$Object* _144;
frost$core$Object* _146;
frost$core$String* _149;
frost$core$RegularExpression* _150;
org$frostlang$frostc$frostdoc$Markdown** _152;
org$frostlang$frostc$frostdoc$Markdown* _153;
org$frostlang$frostc$frostdoc$Protector** _154;
org$frostlang$frostc$frostdoc$Protector* _155;
$fn6 _156;
frost$core$String* _157;
frost$core$Bit _160;
frost$core$String* _161;
frost$core$Object* _162;
frost$core$Object* _164;
frost$core$Object* _167;
frost$core$String* _169;
frost$core$Object* _170;
frost$core$Object* _173;
frost$core$Object* _175;
frost$core$Object* _177;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _180;
bool _181;
frost$core$Bit _182;
bool _183;
frost$core$Int _185;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _188;
frost$core$String** _189;
frost$core$String* _190;
frost$core$Object* _192;
frost$core$String* _194;
frost$core$Object* _195;
frost$core$Object* _200;
frost$core$String* _202;
frost$core$Object* _203;
frost$core$String* _207;
frost$core$Bit _208;
bool _209;
frost$core$String* _211;
frost$core$Equatable* _212;
frost$core$Equatable* _213;
$fn7 _214;
frost$core$Bit _215;
bool _216;
frost$core$String* _219;
frost$core$RegularExpression* _220;
org$frostlang$frostc$frostdoc$Markdown** _222;
org$frostlang$frostc$frostdoc$Markdown* _223;
org$frostlang$frostc$frostdoc$Protector** _224;
org$frostlang$frostc$frostdoc$Protector* _225;
$fn8 _226;
frost$core$String* _227;
frost$core$Bit _230;
frost$core$String* _231;
frost$core$Object* _232;
frost$core$Object* _234;
frost$core$Object* _237;
frost$core$String* _239;
frost$core$Object* _240;
frost$core$Object* _243;
frost$core$Object* _245;
frost$core$Object* _247;
frost$core$String* _250;
frost$core$RegularExpression* _251;
org$frostlang$frostc$frostdoc$Markdown** _253;
org$frostlang$frostc$frostdoc$Markdown* _254;
org$frostlang$frostc$frostdoc$Protector** _255;
org$frostlang$frostc$frostdoc$Protector* _256;
$fn9 _257;
frost$core$String* _258;
frost$core$Bit _261;
frost$core$String* _262;
frost$core$Object* _263;
frost$core$Object* _265;
frost$core$Object* _268;
frost$core$String* _270;
frost$core$Object* _271;
frost$core$Object* _274;
frost$core$Object* _276;
frost$core$Object* _278;
frost$core$String* _281;
bool _282;
frost$core$Bit _283;
bool _284;
frost$core$Int _286;
frost$core$String* _289;
frost$core$String* _290;
frost$core$String* _291;
frost$core$String* _292;
frost$core$String* _293;
frost$core$String* _294;
frost$core$Object* _295;
frost$core$String* _297;
frost$core$Object* _298;
frost$core$Object* _301;
frost$core$Object* _303;
frost$core$Object* _305;
frost$core$Object* _307;
frost$core$String* _311;
frost$core$String* _312;
frost$core$String* _313;
frost$core$String* _314;
frost$core$String* _315;
frost$core$String* _316;
frost$core$Object* _317;
frost$core$String* _319;
frost$core$Object* _320;
frost$core$Object* _323;
frost$core$Object* _325;
frost$core$Object* _327;
frost$core$Object* _329;
frost$core$String* _331;
frost$core$Object* _332;
frost$core$String* _335;
frost$core$Object* _336;
frost$core$String* _339;
frost$core$Object* _340;
frost$core$String* _346;
bool _347;
frost$core$Bit _348;
bool _349;
frost$core$Int _351;
frost$core$String* _354;
frost$core$Object* _355;
frost$core$String* _357;
frost$core$Object* _358;
frost$core$String* _363;
frost$core$Object* _364;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _366;
frost$core$Object* _367;
frost$core$String* _370;
frost$core$Object* _371;
frost$core$String* _374;
frost$core$Object* _375;
frost$core$String* _378;
frost$core$Object* _379;
frost$core$String* _382;
frost$core$Object* _383;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:899
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:900
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:901
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:902
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:903
_45 = *(&local3);
_46 = _45 != NULL;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block3; else goto block4;
block4:;
_50 = (frost$core$Int) {903u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _50, &$s14);
abort(); // unreachable
block3:;
_53 = _45;
_54 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_53, &$s15);
_55 = _54.value;
if (_55) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:904
_58 = *(&local2);
_59 = ((frost$core$Object*) _58);
frost$core$Frost$ref$frost$core$Object$Q(_59);
_61 = *(&local3);
_62 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_62);
*(&local3) = _58;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:908
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
_76 = (frost$core$Int) {908u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:909
_93 = *(&local4);
_94 = _93 != NULL;
_95 = (frost$core$Bit) {_94};
_96 = _95.value;
if (_96) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:910
_99 = *(&local4);
_100 = _99 != NULL;
_101 = (frost$core$Bit) {_100};
_102 = _101.value;
if (_102) goto block10; else goto block11;
block11:;
_104 = (frost$core$Int) {910u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:911
_118 = *(&local5);
_119 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_119, &$s20);
_121 = &param0->$self;
_122 = *_121;
_123 = &_122->charProtector;
_124 = *_123;
_125 = ($fn21) _124->$class->vtable[2];
_126 = _125(_124, &$s22);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:911:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_129 = (frost$core$Bit) {true};
_130 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(_118, _119, _126, _129);
_131 = ((frost$core$Object*) _130);
frost$core$Frost$ref$frost$core$Object$Q(_131);
_133 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_133);
_136 = ((frost$core$Object*) _130);
frost$core$Frost$ref$frost$core$Object$Q(_136);
_138 = *(&local5);
_139 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_139);
*(&local5) = _130;
_142 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_142);
_144 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_144);
_146 = ((frost$core$Object*) _119);
frost$core$Frost$unref$frost$core$Object$Q(_146);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:912
_149 = *(&local5);
_150 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_150, &$s23);
_152 = &param0->$self;
_153 = *_152;
_154 = &_153->charProtector;
_155 = *_154;
_156 = ($fn24) _155->$class->vtable[2];
_157 = _156(_155, &$s25);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:912:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_160 = (frost$core$Bit) {true};
_161 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(_149, _150, _157, _160);
_162 = ((frost$core$Object*) _161);
frost$core$Frost$ref$frost$core$Object$Q(_162);
_164 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_164);
_167 = ((frost$core$Object*) _161);
frost$core$Frost$ref$frost$core$Object$Q(_167);
_169 = *(&local5);
_170 = ((frost$core$Object*) _169);
frost$core$Frost$unref$frost$core$Object$Q(_170);
*(&local5) = _161;
_173 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_173);
_175 = ((frost$core$Object*) _157);
frost$core$Frost$unref$frost$core$Object$Q(_175);
_177 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_177);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:913
_180 = *(&local4);
_181 = _180 != NULL;
_182 = (frost$core$Bit) {_181};
_183 = _182.value;
if (_183) goto block14; else goto block15;
block15:;
_185 = (frost$core$Int) {913u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _185, &$s27);
abort(); // unreachable
block14:;
_188 = _180;
_189 = &_188->title;
_190 = *_189;
*(&local6) = ((frost$core$String*) NULL);
_192 = ((frost$core$Object*) _190);
frost$core$Frost$ref$frost$core$Object$Q(_192);
_194 = *(&local6);
_195 = ((frost$core$Object*) _194);
frost$core$Frost$unref$frost$core$Object$Q(_195);
*(&local6) = _190;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:914
*(&local7) = ((frost$core$String*) NULL);
_200 = ((frost$core$Object*) &$s28);
frost$core$Frost$ref$frost$core$Object$Q(_200);
_202 = *(&local7);
_203 = ((frost$core$Object*) _202);
frost$core$Frost$unref$frost$core$Object$Q(_203);
*(&local7) = &$s29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:915
_207 = *(&local6);
_208 = (frost$core$Bit) {true};
_209 = _208.value;
if (_209) goto block18; else goto block17;
block18:;
_211 = *(&local6);
_212 = ((frost$core$Equatable*) _211);
_213 = ((frost$core$Equatable*) &$s30);
ITable* $tmp31 = _212->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp31 = $tmp31->next;
}
_214 = $tmp31->methods[1];
_215 = _214(_212, _213);
_216 = _215.value;
if (_216) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:916
_219 = *(&local6);
_220 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_220, &$s32);
_222 = &param0->$self;
_223 = *_222;
_224 = &_223->charProtector;
_225 = *_224;
_226 = ($fn33) _225->$class->vtable[2];
_227 = _226(_225, &$s34);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:916:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_230 = (frost$core$Bit) {true};
_231 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(_219, _220, _227, _230);
_232 = ((frost$core$Object*) _231);
frost$core$Frost$ref$frost$core$Object$Q(_232);
_234 = ((frost$core$Object*) _231);
frost$core$Frost$unref$frost$core$Object$Q(_234);
_237 = ((frost$core$Object*) _231);
frost$core$Frost$ref$frost$core$Object$Q(_237);
_239 = *(&local6);
_240 = ((frost$core$Object*) _239);
frost$core$Frost$unref$frost$core$Object$Q(_240);
*(&local6) = _231;
_243 = ((frost$core$Object*) _231);
frost$core$Frost$unref$frost$core$Object$Q(_243);
_245 = ((frost$core$Object*) _227);
frost$core$Frost$unref$frost$core$Object$Q(_245);
_247 = ((frost$core$Object*) _220);
frost$core$Frost$unref$frost$core$Object$Q(_247);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:917
_250 = *(&local6);
_251 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_251, &$s35);
_253 = &param0->$self;
_254 = *_253;
_255 = &_254->charProtector;
_256 = *_255;
_257 = ($fn36) _256->$class->vtable[2];
_258 = _257(_256, &$s37);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:917:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_261 = (frost$core$Bit) {true};
_262 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(_250, _251, _258, _261);
_263 = ((frost$core$Object*) _262);
frost$core$Frost$ref$frost$core$Object$Q(_263);
_265 = ((frost$core$Object*) _262);
frost$core$Frost$unref$frost$core$Object$Q(_265);
_268 = ((frost$core$Object*) _262);
frost$core$Frost$ref$frost$core$Object$Q(_268);
_270 = *(&local6);
_271 = ((frost$core$Object*) _270);
frost$core$Frost$unref$frost$core$Object$Q(_271);
*(&local6) = _262;
_274 = ((frost$core$Object*) _262);
frost$core$Frost$unref$frost$core$Object$Q(_274);
_276 = ((frost$core$Object*) _258);
frost$core$Frost$unref$frost$core$Object$Q(_276);
_278 = ((frost$core$Object*) _251);
frost$core$Frost$unref$frost$core$Object$Q(_278);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:918
_281 = *(&local2);
_282 = _281 != NULL;
_283 = (frost$core$Bit) {_282};
_284 = _283.value;
if (_284) goto block21; else goto block22;
block22:;
_286 = (frost$core$Int) {918u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s38, _286, &$s39);
abort(); // unreachable
block21:;
_289 = _281;
_290 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s40, _289);
_291 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_290, &$s41);
_292 = *(&local6);
_293 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_291, _292);
_294 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_293, &$s42);
_295 = ((frost$core$Object*) _294);
frost$core$Frost$ref$frost$core$Object$Q(_295);
_297 = *(&local7);
_298 = ((frost$core$Object*) _297);
frost$core$Frost$unref$frost$core$Object$Q(_298);
*(&local7) = _294;
_301 = ((frost$core$Object*) _294);
frost$core$Frost$unref$frost$core$Object$Q(_301);
_303 = ((frost$core$Object*) _293);
frost$core$Frost$unref$frost$core$Object$Q(_303);
_305 = ((frost$core$Object*) _291);
frost$core$Frost$unref$frost$core$Object$Q(_305);
_307 = ((frost$core$Object*) _290);
frost$core$Frost$unref$frost$core$Object$Q(_307);
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:920
_311 = *(&local5);
_312 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s43, _311);
_313 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_312, &$s44);
_314 = *(&local7);
_315 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_313, _314);
_316 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_315, &$s45);
_317 = ((frost$core$Object*) _316);
frost$core$Frost$ref$frost$core$Object$Q(_317);
_319 = *(&local0);
_320 = ((frost$core$Object*) _319);
frost$core$Frost$unref$frost$core$Object$Q(_320);
*(&local0) = _316;
_323 = ((frost$core$Object*) _316);
frost$core$Frost$unref$frost$core$Object$Q(_323);
_325 = ((frost$core$Object*) _315);
frost$core$Frost$unref$frost$core$Object$Q(_325);
_327 = ((frost$core$Object*) _313);
frost$core$Frost$unref$frost$core$Object$Q(_327);
_329 = ((frost$core$Object*) _312);
frost$core$Frost$unref$frost$core$Object$Q(_329);
_331 = *(&local7);
_332 = ((frost$core$Object*) _331);
frost$core$Frost$unref$frost$core$Object$Q(_332);
*(&local7) = ((frost$core$String*) NULL);
_335 = *(&local6);
_336 = ((frost$core$Object*) _335);
frost$core$Frost$unref$frost$core$Object$Q(_336);
*(&local6) = ((frost$core$String*) NULL);
_339 = *(&local5);
_340 = ((frost$core$Object*) _339);
frost$core$Frost$unref$frost$core$Object$Q(_340);
*(&local5) = ((frost$core$String*) NULL);
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:923
_346 = *(&local1);
_347 = _346 != NULL;
_348 = (frost$core$Bit) {_347};
_349 = _348.value;
if (_349) goto block23; else goto block24;
block24:;
_351 = (frost$core$Int) {923u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _351, &$s47);
abort(); // unreachable
block23:;
_354 = _346;
_355 = ((frost$core$Object*) _354);
frost$core$Frost$ref$frost$core$Object$Q(_355);
_357 = *(&local0);
_358 = ((frost$core$Object*) _357);
frost$core$Frost$unref$frost$core$Object$Q(_358);
*(&local0) = _354;
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:925
_363 = *(&local0);
_364 = ((frost$core$Object*) _363);
frost$core$Frost$ref$frost$core$Object$Q(_364);
_366 = *(&local4);
_367 = ((frost$core$Object*) _366);
frost$core$Frost$unref$frost$core$Object$Q(_367);
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
_370 = *(&local3);
_371 = ((frost$core$Object*) _370);
frost$core$Frost$unref$frost$core$Object$Q(_371);
*(&local3) = ((frost$core$String*) NULL);
_374 = *(&local2);
_375 = ((frost$core$Object*) _374);
frost$core$Frost$unref$frost$core$Object$Q(_375);
*(&local2) = ((frost$core$String*) NULL);
_378 = *(&local1);
_379 = ((frost$core$Object*) _378);
frost$core$Frost$unref$frost$core$Object$Q(_379);
*(&local1) = ((frost$core$String*) NULL);
_382 = *(&local0);
_383 = ((frost$core$Object*) _382);
frost$core$Frost$unref$frost$core$Object$Q(_383);
*(&local0) = ((frost$core$String*) NULL);
return _363;

}

