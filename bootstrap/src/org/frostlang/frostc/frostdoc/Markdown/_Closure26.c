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
frost$collections$ListView* _3;
frost$core$Int _4;
$fn2 _5;
frost$core$Object* _6;
frost$core$String* _7;
frost$core$Object* _9;
frost$core$String* _11;
frost$core$Object* _12;
frost$core$Object* _15;
frost$collections$ListView* _18;
frost$core$Int _19;
$fn3 _20;
frost$core$Object* _21;
frost$core$String* _22;
frost$core$Object* _24;
frost$core$String* _26;
frost$core$Object* _27;
frost$core$Object* _30;
frost$collections$ListView* _33;
frost$core$Int _34;
$fn4 _35;
frost$core$Object* _36;
frost$core$String* _37;
frost$core$Object* _39;
frost$core$String* _41;
frost$core$Object* _42;
frost$core$Object* _45;
frost$core$String* _48;
bool _49;
frost$core$Bit _50;
bool _51;
frost$core$Int _53;
frost$core$String* _56;
frost$core$Bit _57;
bool _58;
frost$core$String* _61;
frost$core$Object* _62;
frost$core$String* _64;
frost$core$Object* _65;
org$frostlang$frostc$frostdoc$Markdown** _70;
org$frostlang$frostc$frostdoc$Markdown* _71;
frost$collections$HashMap** _72;
frost$collections$HashMap* _73;
frost$collections$HashMap* _74;
frost$core$String* _75;
bool _76;
frost$core$Bit _77;
bool _78;
frost$core$Int _80;
frost$core$String* _83;
frost$collections$HashKey* _84;
frost$core$Object* _85;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _86;
frost$core$Object* _88;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _90;
frost$core$Object* _91;
frost$core$Object* _94;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _97;
bool _98;
frost$core$Bit _99;
bool _100;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _103;
bool _104;
frost$core$Bit _105;
bool _106;
frost$core$Int _108;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _111;
frost$core$String** _112;
frost$core$String* _113;
frost$core$Object* _115;
frost$core$String* _117;
frost$core$Object* _118;
frost$core$String* _122;
frost$core$RegularExpression* _123;
org$frostlang$frostc$frostdoc$Markdown** _125;
org$frostlang$frostc$frostdoc$Markdown* _126;
org$frostlang$frostc$frostdoc$Protector** _127;
org$frostlang$frostc$frostdoc$Protector* _128;
$fn5 _129;
frost$core$String* _130;
frost$core$Bit _133;
frost$core$String* _134;
frost$core$Object* _135;
frost$core$Object* _137;
frost$core$Object* _140;
frost$core$String* _142;
frost$core$Object* _143;
frost$core$Object* _146;
frost$core$Object* _148;
frost$core$Object* _150;
frost$core$String* _153;
frost$core$RegularExpression* _154;
org$frostlang$frostc$frostdoc$Markdown** _156;
org$frostlang$frostc$frostdoc$Markdown* _157;
org$frostlang$frostc$frostdoc$Protector** _158;
org$frostlang$frostc$frostdoc$Protector* _159;
$fn6 _160;
frost$core$String* _161;
frost$core$Bit _164;
frost$core$String* _165;
frost$core$Object* _166;
frost$core$Object* _168;
frost$core$Object* _171;
frost$core$String* _173;
frost$core$Object* _174;
frost$core$Object* _177;
frost$core$Object* _179;
frost$core$Object* _181;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _184;
bool _185;
frost$core$Bit _186;
bool _187;
frost$core$Int _189;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _192;
frost$core$String** _193;
frost$core$String* _194;
frost$core$Object* _196;
frost$core$String* _198;
frost$core$Object* _199;
frost$core$Object* _204;
frost$core$String* _206;
frost$core$Object* _207;
frost$core$String* _211;
frost$core$Bit _212;
bool _213;
frost$core$String* _215;
frost$core$Equatable* _216;
frost$core$Equatable* _217;
frost$core$Equatable* _218;
$fn7 _219;
frost$core$Bit _220;
bool _221;
frost$core$String* _224;
frost$core$RegularExpression* _225;
org$frostlang$frostc$frostdoc$Markdown** _227;
org$frostlang$frostc$frostdoc$Markdown* _228;
org$frostlang$frostc$frostdoc$Protector** _229;
org$frostlang$frostc$frostdoc$Protector* _230;
$fn8 _231;
frost$core$String* _232;
frost$core$Bit _235;
frost$core$String* _236;
frost$core$Object* _237;
frost$core$Object* _239;
frost$core$Object* _242;
frost$core$String* _244;
frost$core$Object* _245;
frost$core$Object* _248;
frost$core$Object* _250;
frost$core$Object* _252;
frost$core$String* _255;
frost$core$RegularExpression* _256;
org$frostlang$frostc$frostdoc$Markdown** _258;
org$frostlang$frostc$frostdoc$Markdown* _259;
org$frostlang$frostc$frostdoc$Protector** _260;
org$frostlang$frostc$frostdoc$Protector* _261;
$fn9 _262;
frost$core$String* _263;
frost$core$Bit _266;
frost$core$String* _267;
frost$core$Object* _268;
frost$core$Object* _270;
frost$core$Object* _273;
frost$core$String* _275;
frost$core$Object* _276;
frost$core$Object* _279;
frost$core$Object* _281;
frost$core$Object* _283;
frost$core$String* _286;
bool _287;
frost$core$Bit _288;
bool _289;
frost$core$Int _291;
frost$core$String* _294;
frost$core$String* _295;
frost$core$String* _296;
frost$core$String* _297;
frost$core$String* _298;
frost$core$String* _299;
frost$core$Object* _300;
frost$core$String* _302;
frost$core$Object* _303;
frost$core$Object* _306;
frost$core$Object* _308;
frost$core$Object* _310;
frost$core$Object* _312;
frost$core$String* _316;
frost$core$String* _317;
frost$core$String* _318;
frost$core$String* _319;
frost$core$String* _320;
frost$core$String* _321;
frost$core$Object* _322;
frost$core$String* _324;
frost$core$Object* _325;
frost$core$Object* _328;
frost$core$Object* _330;
frost$core$Object* _332;
frost$core$Object* _334;
frost$core$String* _336;
frost$core$Object* _337;
frost$core$String* _340;
frost$core$Object* _341;
frost$core$String* _344;
frost$core$Object* _345;
frost$core$String* _351;
bool _352;
frost$core$Bit _353;
bool _354;
frost$core$Int _356;
frost$core$String* _359;
frost$core$Object* _360;
frost$core$String* _362;
frost$core$Object* _363;
frost$core$String* _368;
frost$core$Object* _369;
org$frostlang$frostc$frostdoc$Markdown$LinkDefinition* _371;
frost$core$Object* _372;
frost$core$String* _375;
frost$core$Object* _376;
frost$core$String* _379;
frost$core$Object* _380;
frost$core$String* _383;
frost$core$Object* _384;
frost$core$String* _387;
frost$core$Object* _388;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:899
*(&local0) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:900
_3 = param1;
_4 = (frost$core$Int) {1u};
ITable* $tmp10 = _3->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp10 = $tmp10->next;
}
_5 = $tmp10->methods[0];
_6 = _5(_3, _4);
_7 = ((frost$core$String*) _6);
*(&local1) = ((frost$core$String*) NULL);
_9 = ((frost$core$Object*) _7);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = *(&local1);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_12);
*(&local1) = _7;
_15 = _6;
frost$core$Frost$unref$frost$core$Object$Q(_15);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:901
_18 = param1;
_19 = (frost$core$Int) {2u};
ITable* $tmp11 = _18->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp11 = $tmp11->next;
}
_20 = $tmp11->methods[0];
_21 = _20(_18, _19);
_22 = ((frost$core$String*) _21);
*(&local2) = ((frost$core$String*) NULL);
_24 = ((frost$core$Object*) _22);
frost$core$Frost$ref$frost$core$Object$Q(_24);
_26 = *(&local2);
_27 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_27);
*(&local2) = _22;
_30 = _21;
frost$core$Frost$unref$frost$core$Object$Q(_30);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:902
_33 = param1;
_34 = (frost$core$Int) {3u};
ITable* $tmp12 = _33->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp12 = $tmp12->next;
}
_35 = $tmp12->methods[0];
_36 = _35(_33, _34);
_37 = ((frost$core$String*) _36);
*(&local3) = ((frost$core$String*) NULL);
_39 = ((frost$core$Object*) _37);
frost$core$Frost$ref$frost$core$Object$Q(_39);
_41 = *(&local3);
_42 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_42);
*(&local3) = _37;
_45 = _36;
frost$core$Frost$unref$frost$core$Object$Q(_45);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:903
_48 = *(&local3);
_49 = _48 != NULL;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block3; else goto block4;
block4:;
_53 = (frost$core$Int) {903u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _53, &$s14);
abort(); // unreachable
block3:;
_56 = _48;
_57 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_56, &$s15);
_58 = _57.value;
if (_58) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:904
_61 = *(&local2);
_62 = ((frost$core$Object*) _61);
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = *(&local3);
_65 = ((frost$core$Object*) _64);
frost$core$Frost$unref$frost$core$Object$Q(_65);
*(&local3) = _61;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:908
_70 = &param0->$self;
_71 = *_70;
_72 = &_71->linkDefinitions;
_73 = *_72;
_74 = _73;
_75 = *(&local3);
_76 = _75 != NULL;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block5; else goto block6;
block6:;
_80 = (frost$core$Int) {908u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _80, &$s17);
abort(); // unreachable
block5:;
_83 = _75;
_84 = ((frost$collections$HashKey*) _83);
_85 = frost$collections$HashMap$$IDX$frost$collections$HashMap$K$R$frost$collections$HashMap$V$Q(_74, _84);
_86 = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) _85);
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
_88 = ((frost$core$Object*) _86);
frost$core$Frost$ref$frost$core$Object$Q(_88);
_90 = *(&local4);
_91 = ((frost$core$Object*) _90);
frost$core$Frost$unref$frost$core$Object$Q(_91);
*(&local4) = _86;
_94 = _85;
frost$core$Frost$unref$frost$core$Object$Q(_94);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:909
_97 = *(&local4);
_98 = _97 != NULL;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:910
_103 = *(&local4);
_104 = _103 != NULL;
_105 = (frost$core$Bit) {_104};
_106 = _105.value;
if (_106) goto block10; else goto block11;
block11:;
_108 = (frost$core$Int) {910u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _108, &$s19);
abort(); // unreachable
block10:;
_111 = _103;
_112 = &_111->url;
_113 = *_112;
*(&local5) = ((frost$core$String*) NULL);
_115 = ((frost$core$Object*) _113);
frost$core$Frost$ref$frost$core$Object$Q(_115);
_117 = *(&local5);
_118 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_118);
*(&local5) = _113;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:911
_122 = *(&local5);
_123 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_123, &$s20);
_125 = &param0->$self;
_126 = *_125;
_127 = &_126->charProtector;
_128 = *_127;
_129 = ($fn21) _128->$class->vtable[2];
_130 = _129(_128, &$s22);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:911:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_133 = (frost$core$Bit) {true};
_134 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(_122, _123, _130, _133);
_135 = ((frost$core$Object*) _134);
frost$core$Frost$ref$frost$core$Object$Q(_135);
_137 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_137);
_140 = ((frost$core$Object*) _134);
frost$core$Frost$ref$frost$core$Object$Q(_140);
_142 = *(&local5);
_143 = ((frost$core$Object*) _142);
frost$core$Frost$unref$frost$core$Object$Q(_143);
*(&local5) = _134;
_146 = ((frost$core$Object*) _134);
frost$core$Frost$unref$frost$core$Object$Q(_146);
_148 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_148);
_150 = ((frost$core$Object*) _123);
frost$core$Frost$unref$frost$core$Object$Q(_150);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:912
_153 = *(&local5);
_154 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_154, &$s23);
_156 = &param0->$self;
_157 = *_156;
_158 = &_157->charProtector;
_159 = *_158;
_160 = ($fn24) _159->$class->vtable[2];
_161 = _160(_159, &$s25);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:912:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_164 = (frost$core$Bit) {true};
_165 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(_153, _154, _161, _164);
_166 = ((frost$core$Object*) _165);
frost$core$Frost$ref$frost$core$Object$Q(_166);
_168 = ((frost$core$Object*) _165);
frost$core$Frost$unref$frost$core$Object$Q(_168);
_171 = ((frost$core$Object*) _165);
frost$core$Frost$ref$frost$core$Object$Q(_171);
_173 = *(&local5);
_174 = ((frost$core$Object*) _173);
frost$core$Frost$unref$frost$core$Object$Q(_174);
*(&local5) = _165;
_177 = ((frost$core$Object*) _165);
frost$core$Frost$unref$frost$core$Object$Q(_177);
_179 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_179);
_181 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_181);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:913
_184 = *(&local4);
_185 = _184 != NULL;
_186 = (frost$core$Bit) {_185};
_187 = _186.value;
if (_187) goto block14; else goto block15;
block15:;
_189 = (frost$core$Int) {913u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _189, &$s27);
abort(); // unreachable
block14:;
_192 = _184;
_193 = &_192->title;
_194 = *_193;
*(&local6) = ((frost$core$String*) NULL);
_196 = ((frost$core$Object*) _194);
frost$core$Frost$ref$frost$core$Object$Q(_196);
_198 = *(&local6);
_199 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_199);
*(&local6) = _194;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:914
*(&local7) = ((frost$core$String*) NULL);
_204 = ((frost$core$Object*) &$s28);
frost$core$Frost$ref$frost$core$Object$Q(_204);
_206 = *(&local7);
_207 = ((frost$core$Object*) _206);
frost$core$Frost$unref$frost$core$Object$Q(_207);
*(&local7) = &$s29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:915
_211 = *(&local6);
_212 = (frost$core$Bit) {true};
_213 = _212.value;
if (_213) goto block18; else goto block17;
block18:;
_215 = *(&local6);
_216 = ((frost$core$Equatable*) _215);
_217 = _216;
_218 = ((frost$core$Equatable*) &$s30);
ITable* $tmp31 = _217->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp31 = $tmp31->next;
}
_219 = $tmp31->methods[1];
_220 = _219(_217, _218);
_221 = _220.value;
if (_221) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:916
_224 = *(&local6);
_225 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_225, &$s32);
_227 = &param0->$self;
_228 = *_227;
_229 = &_228->charProtector;
_230 = *_229;
_231 = ($fn33) _230->$class->vtable[2];
_232 = _231(_230, &$s34);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:916:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_235 = (frost$core$Bit) {true};
_236 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(_224, _225, _232, _235);
_237 = ((frost$core$Object*) _236);
frost$core$Frost$ref$frost$core$Object$Q(_237);
_239 = ((frost$core$Object*) _236);
frost$core$Frost$unref$frost$core$Object$Q(_239);
_242 = ((frost$core$Object*) _236);
frost$core$Frost$ref$frost$core$Object$Q(_242);
_244 = *(&local6);
_245 = ((frost$core$Object*) _244);
frost$core$Frost$unref$frost$core$Object$Q(_245);
*(&local6) = _236;
_248 = ((frost$core$Object*) _236);
frost$core$Frost$unref$frost$core$Object$Q(_248);
_250 = ((frost$core$Object*) _232);
frost$core$Frost$unref$frost$core$Object$Q(_250);
_252 = ((frost$core$Object*) _225);
frost$core$Frost$unref$frost$core$Object$Q(_252);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:917
_255 = *(&local6);
_256 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_256, &$s35);
_258 = &param0->$self;
_259 = *_258;
_260 = &_259->charProtector;
_261 = *_260;
_262 = ($fn36) _261->$class->vtable[2];
_263 = _262(_261, &$s37);
// begin inline call to function frost.core.String.replace(search:frost.core.RegularExpression, replacement:frost.core.String):frost.core.String from Markdown.frost:917:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1120
_266 = (frost$core$Bit) {true};
_267 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(_255, _256, _263, _266);
_268 = ((frost$core$Object*) _267);
frost$core$Frost$ref$frost$core$Object$Q(_268);
_270 = ((frost$core$Object*) _267);
frost$core$Frost$unref$frost$core$Object$Q(_270);
_273 = ((frost$core$Object*) _267);
frost$core$Frost$ref$frost$core$Object$Q(_273);
_275 = *(&local6);
_276 = ((frost$core$Object*) _275);
frost$core$Frost$unref$frost$core$Object$Q(_276);
*(&local6) = _267;
_279 = ((frost$core$Object*) _267);
frost$core$Frost$unref$frost$core$Object$Q(_279);
_281 = ((frost$core$Object*) _263);
frost$core$Frost$unref$frost$core$Object$Q(_281);
_283 = ((frost$core$Object*) _256);
frost$core$Frost$unref$frost$core$Object$Q(_283);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:918
_286 = *(&local2);
_287 = _286 != NULL;
_288 = (frost$core$Bit) {_287};
_289 = _288.value;
if (_289) goto block21; else goto block22;
block22:;
_291 = (frost$core$Int) {918u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s38, _291, &$s39);
abort(); // unreachable
block21:;
_294 = _286;
_295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s40, _294);
_296 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_295, &$s41);
_297 = *(&local6);
_298 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_296, _297);
_299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_298, &$s42);
_300 = ((frost$core$Object*) _299);
frost$core$Frost$ref$frost$core$Object$Q(_300);
_302 = *(&local7);
_303 = ((frost$core$Object*) _302);
frost$core$Frost$unref$frost$core$Object$Q(_303);
*(&local7) = _299;
_306 = ((frost$core$Object*) _299);
frost$core$Frost$unref$frost$core$Object$Q(_306);
_308 = ((frost$core$Object*) _298);
frost$core$Frost$unref$frost$core$Object$Q(_308);
_310 = ((frost$core$Object*) _296);
frost$core$Frost$unref$frost$core$Object$Q(_310);
_312 = ((frost$core$Object*) _295);
frost$core$Frost$unref$frost$core$Object$Q(_312);
goto block17;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:920
_316 = *(&local5);
_317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s43, _316);
_318 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_317, &$s44);
_319 = *(&local7);
_320 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_318, _319);
_321 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_320, &$s45);
_322 = ((frost$core$Object*) _321);
frost$core$Frost$ref$frost$core$Object$Q(_322);
_324 = *(&local0);
_325 = ((frost$core$Object*) _324);
frost$core$Frost$unref$frost$core$Object$Q(_325);
*(&local0) = _321;
_328 = ((frost$core$Object*) _321);
frost$core$Frost$unref$frost$core$Object$Q(_328);
_330 = ((frost$core$Object*) _320);
frost$core$Frost$unref$frost$core$Object$Q(_330);
_332 = ((frost$core$Object*) _318);
frost$core$Frost$unref$frost$core$Object$Q(_332);
_334 = ((frost$core$Object*) _317);
frost$core$Frost$unref$frost$core$Object$Q(_334);
_336 = *(&local7);
_337 = ((frost$core$Object*) _336);
frost$core$Frost$unref$frost$core$Object$Q(_337);
*(&local7) = ((frost$core$String*) NULL);
_340 = *(&local6);
_341 = ((frost$core$Object*) _340);
frost$core$Frost$unref$frost$core$Object$Q(_341);
*(&local6) = ((frost$core$String*) NULL);
_344 = *(&local5);
_345 = ((frost$core$Object*) _344);
frost$core$Frost$unref$frost$core$Object$Q(_345);
*(&local5) = ((frost$core$String*) NULL);
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:923
_351 = *(&local1);
_352 = _351 != NULL;
_353 = (frost$core$Bit) {_352};
_354 = _353.value;
if (_354) goto block23; else goto block24;
block24:;
_356 = (frost$core$Int) {923u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s46, _356, &$s47);
abort(); // unreachable
block23:;
_359 = _351;
_360 = ((frost$core$Object*) _359);
frost$core$Frost$ref$frost$core$Object$Q(_360);
_362 = *(&local0);
_363 = ((frost$core$Object*) _362);
frost$core$Frost$unref$frost$core$Object$Q(_363);
*(&local0) = _359;
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/frostdoc/Markdown.frost:925
_368 = *(&local0);
_369 = ((frost$core$Object*) _368);
frost$core$Frost$ref$frost$core$Object$Q(_369);
_371 = *(&local4);
_372 = ((frost$core$Object*) _371);
frost$core$Frost$unref$frost$core$Object$Q(_372);
*(&local4) = ((org$frostlang$frostc$frostdoc$Markdown$LinkDefinition*) NULL);
_375 = *(&local3);
_376 = ((frost$core$Object*) _375);
frost$core$Frost$unref$frost$core$Object$Q(_376);
*(&local3) = ((frost$core$String*) NULL);
_379 = *(&local2);
_380 = ((frost$core$Object*) _379);
frost$core$Frost$unref$frost$core$Object$Q(_380);
*(&local2) = ((frost$core$String*) NULL);
_383 = *(&local1);
_384 = ((frost$core$Object*) _383);
frost$core$Frost$unref$frost$core$Object$Q(_384);
*(&local1) = ((frost$core$String*) NULL);
_387 = *(&local0);
_388 = ((frost$core$Object*) _387);
frost$core$Frost$unref$frost$core$Object$Q(_388);
*(&local0) = ((frost$core$String*) NULL);
return _368;

}

