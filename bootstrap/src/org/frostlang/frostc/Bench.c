#include "org/frostlang/frostc/Bench.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/time/Timer.h"
#include "org/frostlang/frostc/Compiler/Settings.h"
#include "frost/threads/MessageQueue.h"
#include "frost/io/MemoryOutputStream.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/threads/ScopedLock.h"
#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/io/File.h"
#include "frost/collections/Array.h"
#include "frost/collections/ImmutableArray.h"
#include "frost/collections/ListView.h"
#include "frost/core/Bit.h"
#include "frost/io/OutputStream.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"
#include "frost/threads/Lock.h"
#include "frost/core/Immutable.h"
#include "frost/core/Real64.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Config.h"
#include "frost/io/Console.h"
#include "frost/core/Error.h"
#include "frost/core/MutableString.h"
#include "frost/core/Maybe.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/System.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Bench$class_type org$frostlang$frostc$Bench$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Bench$cleanup, org$frostlang$frostc$Bench$bench$frost$core$String$frost$core$String$frost$core$Int$frost$core$Int, org$frostlang$frostc$Bench$bench$frost$core$String$frost$core$String, org$frostlang$frostc$Bench$run} };

typedef void (*$fn2)(frost$time$Timer*);
typedef frost$collections$Iterator* (*$fn3)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn7)(frost$collections$CollectionView*);
typedef void (*$fn8)(org$frostlang$frostc$CodeGenerator*);
typedef frost$core$String* (*$fn9)(frost$core$Object*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);
typedef frost$core$Real64 (*$fn13)(frost$time$Timer*);
typedef frost$core$String* (*$fn14)(frost$core$Object*);
typedef void (*$fn15)(frost$time$Timer*);
typedef frost$core$String* (*$fn27)(frost$core$Object*);
typedef frost$core$String* (*$fn30)(frost$core$Object*);
typedef frost$core$String* (*$fn36)(frost$core$Object*);
typedef frost$core$String* (*$fn39)(frost$core$Object*);
typedef frost$core$Real64 (*$fn45)(frost$time$Timer*);
typedef frost$core$String* (*$fn47)(frost$core$Object*);
typedef void (*$fn50)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*, frost$core$Int, frost$core$Int);
typedef void (*$fn51)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*, frost$core$Int, frost$core$Int);
typedef void (*$fn53)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*, frost$core$Int, frost$core$Int);
typedef void (*$fn55)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*, frost$core$Int, frost$core$Int);
typedef void (*$fn56)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*);
typedef frost$core$String* (*$fn57)(frost$core$Object*);
typedef void (*$fn58)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*);
typedef frost$core$String* (*$fn59)(frost$core$Object*);
typedef void (*$fn60)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*);
typedef void (*$fn61)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*);
typedef frost$core$String* (*$fn65)(frost$core$Object*);
typedef void (*$fn68)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*);
typedef frost$core$String* (*$fn72)(frost$core$Object*);
typedef void (*$fn76)(org$frostlang$frostc$Bench*, frost$core$String*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x42\x65\x6e\x63\x68", 26, 7935502561105279878, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f\x66\x61\x6b\x65\x2f\x70\x61\x74\x68\x2f\x42\x65\x6e\x63\x68\x44\x75\x6d\x6d\x79\x2e\x66\x72\x6f\x73\x74", 27, 6552183172853563514, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 107, -867402159131882985, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, -5861202104196742523, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 2890546785777135939, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x65\x6e\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -8597413136814869315, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x4f\x30", 3, -2382319437966649185, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d\x4f\x33", 3, -2382318338455020974, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x48\x65\x6c\x6c\x6f", 5, 7201466553693376363, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6d\x65\x74\x68\x6f\x64\x20\x6d\x61\x69\x6e\x28\x29\x20\x7b\x20\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x70\x72\x69\x6e\x74\x4c\x69\x6e\x65\x28\x22\x48\x65\x6c\x6c\x6f\x2c\x20\x57\x6f\x72\x6c\x64\x21\x22\x29\x20\x7d", 52, 1470744474518815592, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x2e\x2f\x74\x65\x73\x74\x2f\x74\x65\x73\x74\x73\x2f\x57\x75\x6d\x70\x75\x73\x2e\x66\x72\x6f\x73\x74", 26, -1641527893991703732, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x65\x6e\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -8597413136814869315, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x57\x75\x6d\x70\x75\x73", 6, 1639335822486632976, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6d\x65\x74\x68\x6f\x64\x20\x6d\x61\x69\x6e\x28\x29\x20\x7b\x0a", 16, 2825733708493219975, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20\x20\x20\x20\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x70\x72\x69\x6e\x74\x4c\x69\x6e\x65\x28\x22", 23, -4489290791127773989, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x22\x29", 2, 561959326539097764, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x42\x69\x67", 3, 1611498228082597561, NULL };

void org$frostlang$frostc$Bench$bench$frost$core$String$frost$core$String$frost$core$Int$frost$core$Int(void* rawSelf, frost$core$String* param1, frost$core$String* param2, frost$core$Int param3, frost$core$Int param4) {
org$frostlang$frostc$Bench* param0 = (org$frostlang$frostc$Bench*) rawSelf;

frost$time$Timer* local0 = NULL;
org$frostlang$frostc$Compiler$Settings* local1 = NULL;
frost$threads$MessageQueue* local2 = NULL;
frost$io$MemoryOutputStream* local3 = NULL;
org$frostlang$frostc$LLVMCodeGenerator* local4 = NULL;
org$frostlang$frostc$Compiler* local5 = NULL;
org$frostlang$frostc$ClassDecl* local6 = NULL;
org$frostlang$frostc$ClassDecl* local7 = NULL;
frost$threads$ScopedLock* local8 = NULL;
org$frostlang$frostc$Compiler$Message* local9 = NULL;
frost$core$String* local10 = NULL;
frost$core$Int local11;
frost$core$Int local12;
frost$core$String* local13 = NULL;
frost$core$String* local14 = NULL;
frost$core$Int local15;
frost$core$Int local16;
frost$core$String* local17 = NULL;
frost$time$Timer* _1;
frost$core$Object* _4;
frost$time$Timer* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$time$Timer* _13;
$fn2 _14;
org$frostlang$frostc$Compiler$Settings* _17;
frost$io$File* _18;
frost$core$String* _19;
frost$collections$Array* _21;
frost$core$Int _22;
frost$io$File* _24;
frost$core$String* _25;
frost$core$Object* _27;
frost$collections$ImmutableArray* _29;
frost$collections$ListView* _30;
frost$core$Bit _31;
frost$core$Object* _34;
org$frostlang$frostc$Compiler$Settings* _36;
frost$core$Object* _37;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _50;
frost$core$Object* _52;
frost$threads$MessageQueue* _55;
frost$core$Object* _58;
frost$threads$MessageQueue* _60;
frost$core$Object* _61;
frost$core$Object* _64;
frost$io$MemoryOutputStream* _67;
frost$core$Object* _70;
frost$io$MemoryOutputStream* _72;
frost$core$Object* _73;
frost$core$Object* _76;
org$frostlang$frostc$LLVMCodeGenerator* _79;
frost$core$String* _80;
frost$io$MemoryOutputStream* _81;
frost$io$OutputStream* _82;
frost$core$Object* _85;
org$frostlang$frostc$LLVMCodeGenerator* _87;
frost$core$Object* _88;
frost$core$Object* _91;
frost$core$Object* _93;
org$frostlang$frostc$Compiler* _96;
frost$threads$MessageQueue* _97;
org$frostlang$frostc$LLVMCodeGenerator* _98;
org$frostlang$frostc$CodeGenerator* _99;
org$frostlang$frostc$Compiler$Settings* _100;
frost$core$Object* _103;
org$frostlang$frostc$Compiler* _105;
frost$core$Object* _106;
frost$core$Object* _109;
org$frostlang$frostc$Compiler* _112;
frost$io$File* _113;
frost$collections$ListView* _117;
frost$collections$Iterable* _118;
$fn3 _119;
frost$collections$Iterator* _120;
$fn4 _122;
frost$core$Bit _123;
bool _124;
$fn5 _127;
frost$core$Object* _128;
org$frostlang$frostc$ClassDecl* _129;
frost$core$Object* _130;
org$frostlang$frostc$ClassDecl* _132;
frost$core$Object* _133;
org$frostlang$frostc$ClassDecl* _137;
frost$core$Object* _139;
org$frostlang$frostc$ClassDecl* _141;
frost$core$Object* _142;
frost$core$Object* _146;
frost$core$Object* _148;
frost$core$Object* _151;
org$frostlang$frostc$Compiler* _154;
frost$collections$Array** _158;
frost$collections$Array* _159;
frost$collections$CollectionView* _160;
$fn6 _161;
frost$core$Int _162;
frost$core$Int _163;
int64_t _164;
int64_t _165;
bool _166;
frost$core$Bit _167;
bool _168;
frost$collections$Array** _171;
frost$collections$Array* _172;
frost$collections$Array** _173;
frost$collections$Array* _174;
frost$collections$CollectionView* _175;
$fn7 _176;
frost$core$Int _177;
frost$core$Int _178;
int64_t _179;
int64_t _180;
int64_t _181;
frost$core$Int _182;
frost$core$Object* _183;
org$frostlang$frostc$ClassDecl* _184;
frost$core$Object* _186;
org$frostlang$frostc$ClassDecl* _188;
frost$core$Object* _189;
frost$core$Object* _192;
org$frostlang$frostc$ClassDecl* _195;
org$frostlang$frostc$ClassDecl* _197;
frost$core$Object* _198;
org$frostlang$frostc$CodeGenerator** _203;
org$frostlang$frostc$CodeGenerator* _204;
bool _205;
frost$core$Bit _206;
bool _207;
frost$core$Int _209;
org$frostlang$frostc$CodeGenerator* _212;
$fn8 _213;
frost$threads$MessageQueue* _218;
frost$threads$ScopedLock* _223;
frost$threads$Lock** _224;
frost$threads$Lock* _225;
frost$core$Object* _228;
frost$threads$ScopedLock* _230;
frost$core$Object* _231;
frost$core$Object* _234;
frost$core$Int* _237;
frost$core$Int _238;
frost$threads$ScopedLock* _239;
frost$core$Object* _240;
frost$core$Int _244;
int64_t _245;
int64_t _246;
bool _247;
frost$core$Bit _248;
bool _250;
frost$threads$MessageQueue* _253;
frost$core$Immutable* _254;
org$frostlang$frostc$Compiler$Message* _255;
frost$core$Object* _257;
org$frostlang$frostc$Compiler$Message* _259;
frost$core$Object* _260;
frost$core$Object* _263;
org$frostlang$frostc$Compiler$Message* _266;
frost$core$Int* _267;
frost$core$Int _268;
frost$core$Int _269;
int64_t _272;
int64_t _273;
bool _274;
frost$core$Bit _275;
bool _277;
frost$core$String** _279;
frost$core$String* _280;
frost$core$Object* _282;
frost$core$String* _284;
frost$core$Object* _285;
frost$core$Int* _288;
frost$core$Int _289;
frost$core$Int* _291;
frost$core$Int _292;
frost$core$String** _294;
frost$core$String* _295;
frost$core$Object* _297;
frost$core$String* _299;
frost$core$Object* _300;
frost$core$String* _304;
frost$core$Object* _307;
frost$core$String* _310;
frost$core$Int _311;
frost$core$Object* _312;
$fn9 _315;
frost$core$String* _316;
frost$core$String* _317;
frost$core$Object* _318;
frost$core$Object* _320;
frost$core$Object* _322;
frost$core$String* _325;
frost$core$Int _326;
frost$core$Object* _327;
$fn10 _330;
frost$core$String* _331;
frost$core$String* _332;
frost$core$Object* _333;
frost$core$Object* _335;
frost$core$Object* _337;
frost$core$String* _340;
frost$core$String* _341;
frost$core$String* _342;
frost$core$String* _343;
frost$core$Object* _353;
frost$core$Object* _355;
frost$core$Object* _357;
frost$core$Object* _359;
frost$core$Object* _361;
frost$core$Object* _363;
frost$core$Object* _365;
frost$core$Object* _367;
frost$core$Object* _369;
frost$core$Object* _371;
frost$core$String* _373;
frost$core$Object* _374;
frost$core$String* _377;
frost$core$Object* _378;
frost$core$Int _382;
int64_t _385;
int64_t _386;
bool _387;
frost$core$Bit _388;
bool _390;
frost$core$String** _392;
frost$core$String* _393;
frost$core$Object* _395;
frost$core$String* _397;
frost$core$Object* _398;
frost$core$Int* _401;
frost$core$Int _402;
frost$core$Int* _404;
frost$core$Int _405;
frost$core$String** _407;
frost$core$String* _408;
frost$core$Object* _410;
frost$core$String* _412;
frost$core$Object* _413;
frost$core$String* _417;
frost$core$Object* _420;
frost$core$String* _423;
frost$core$Int _424;
frost$core$Object* _425;
$fn11 _428;
frost$core$String* _429;
frost$core$String* _430;
frost$core$Object* _431;
frost$core$Object* _433;
frost$core$Object* _435;
frost$core$String* _438;
frost$core$Int _439;
frost$core$Object* _440;
$fn12 _443;
frost$core$String* _444;
frost$core$String* _445;
frost$core$Object* _446;
frost$core$Object* _448;
frost$core$Object* _450;
frost$core$String* _453;
frost$core$String* _454;
frost$core$String* _455;
frost$core$String* _456;
frost$core$Object* _466;
frost$core$Object* _468;
frost$core$Object* _470;
frost$core$Object* _472;
frost$core$Object* _474;
frost$core$Object* _476;
frost$core$Object* _478;
frost$core$Object* _480;
frost$core$Object* _482;
frost$core$Object* _484;
frost$core$String* _486;
frost$core$Object* _487;
frost$core$String* _490;
frost$core$Object* _491;
org$frostlang$frostc$Compiler$Message* _495;
frost$core$Object* _496;
org$frostlang$frostc$Compiler* _501;
frost$core$Int* _502;
frost$core$Int _503;
frost$core$Int _504;
int64_t _507;
int64_t _508;
bool _509;
frost$core$Bit _510;
bool _512;
frost$core$Int _514;
frost$core$Object* _520;
frost$core$String* _523;
frost$time$Timer* _524;
$fn13 _525;
frost$core$Real64 _526;
frost$core$Object* _527;
$fn14 _530;
frost$core$String* _531;
frost$core$String* _532;
frost$core$Object* _533;
frost$core$Object* _535;
frost$core$Object* _537;
frost$core$String* _540;
frost$core$Object* _550;
frost$core$Object* _552;
frost$core$Object* _554;
frost$core$Object* _556;
frost$core$Object* _558;
org$frostlang$frostc$Compiler* _560;
frost$core$Object* _561;
org$frostlang$frostc$LLVMCodeGenerator* _564;
frost$core$Object* _565;
frost$io$MemoryOutputStream* _568;
frost$core$Object* _569;
frost$threads$MessageQueue* _572;
frost$core$Object* _573;
org$frostlang$frostc$Compiler$Settings* _576;
frost$core$Object* _577;
frost$time$Timer* _580;
frost$core$Object* _581;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:7
_1 = (frost$time$Timer*) frostObjectAlloc(sizeof(frost$time$Timer), (frost$core$Class*) &frost$time$Timer$class);
frost$time$Timer$init(_1);
*(&local0) = ((frost$time$Timer*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:8
_13 = *(&local0);
_14 = ($fn15) _13->$class->vtable[6];
_14(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:9
_17 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Settings), (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
_18 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_19 = org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String();
frost$io$File$init$frost$core$String(_18, _19);
_21 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_22 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_21, _22);
_24 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_25 = org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String();
frost$io$File$init$frost$core$String(_24, _25);
_27 = ((frost$core$Object*) _24);
frost$collections$Array$add$frost$collections$Array$T(_21, _27);
_29 = frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT(_21);
_30 = ((frost$collections$ListView*) _29);
_31 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int$frost$core$Int$frost$core$Bit(_17, _18, _30, param3, param4, _31);
*(&local1) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_34 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = *(&local1);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
*(&local1) = _17;
_40 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_52);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:11
_55 = (frost$threads$MessageQueue*) frostObjectAlloc(sizeof(frost$threads$MessageQueue), (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init(_55);
*(&local2) = ((frost$threads$MessageQueue*) NULL);
_58 = ((frost$core$Object*) _55);
frost$core$Frost$ref$frost$core$Object$Q(_58);
_60 = *(&local2);
_61 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_61);
*(&local2) = _55;
_64 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_64);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:12
_67 = (frost$io$MemoryOutputStream*) frostObjectAlloc(sizeof(frost$io$MemoryOutputStream), (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init(_67);
*(&local3) = ((frost$io$MemoryOutputStream*) NULL);
_70 = ((frost$core$Object*) _67);
frost$core$Frost$ref$frost$core$Object$Q(_70);
_72 = *(&local3);
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
*(&local3) = _67;
_76 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_76);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:13
_79 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(sizeof(org$frostlang$frostc$LLVMCodeGenerator), (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
_80 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
_81 = *(&local3);
_82 = ((frost$io$OutputStream*) _81);
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream(_79, _80, _82);
*(&local4) = ((org$frostlang$frostc$LLVMCodeGenerator*) NULL);
_85 = ((frost$core$Object*) _79);
frost$core$Frost$ref$frost$core$Object$Q(_85);
_87 = *(&local4);
_88 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_88);
*(&local4) = _79;
_91 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_91);
_93 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_93);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:14
_96 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler), (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
_97 = *(&local2);
_98 = *(&local4);
_99 = ((org$frostlang$frostc$CodeGenerator*) _98);
_100 = *(&local1);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$Q$org$frostlang$frostc$Compiler$Settings(_96, _97, _99, _100);
*(&local5) = ((org$frostlang$frostc$Compiler*) NULL);
_103 = ((frost$core$Object*) _96);
frost$core$Frost$ref$frost$core$Object$Q(_103);
_105 = *(&local5);
_106 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_106);
*(&local5) = _96;
_109 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_109);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:15
_112 = *(&local5);
_113 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String(_113, &$s16);
// begin inline call to method org.frostlang.frostc.Compiler.compile(path:frost.io.File, text:frost.core.String) from Bench.frost:15:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6088
_117 = org$frostlang$frostc$Compiler$scan$frost$io$File$frost$core$String$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT(_112, _113, param2);
_118 = ((frost$collections$Iterable*) _117);
ITable* $tmp17 = _118->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp17 = $tmp17->next;
}
_119 = $tmp17->methods[0];
_120 = _119(_118);
goto block2;
block2:;
ITable* $tmp18 = _120->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp18 = $tmp18->next;
}
_122 = $tmp18->methods[0];
_123 = _122(_120);
_124 = _123.value;
if (_124) goto block4; else goto block3;
block3:;
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp19 = _120->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
_127 = $tmp19->methods[1];
_128 = _127(_120);
_129 = ((org$frostlang$frostc$ClassDecl*) _128);
_130 = ((frost$core$Object*) _129);
frost$core$Frost$ref$frost$core$Object$Q(_130);
_132 = *(&local6);
_133 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_133);
*(&local6) = _129;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6089
_137 = *(&local6);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl(_112, _137);
_139 = _128;
frost$core$Frost$unref$frost$core$Object$Q(_139);
_141 = *(&local6);
_142 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_142);
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block4:;
_146 = ((frost$core$Object*) _120);
frost$core$Frost$unref$frost$core$Object$Q(_146);
_148 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_148);
_151 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_151);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:16
_154 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.finish() from Bench.frost:16:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6125
goto block6;
block6:;
_158 = &_154->pendingClasses;
_159 = *_158;
_160 = ((frost$collections$CollectionView*) _159);
ITable* $tmp20 = _160->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_161 = $tmp20->methods[0];
_162 = _161(_160);
_163 = (frost$core$Int) {0u};
_164 = _162.value;
_165 = _163.value;
_166 = _164 > _165;
_167 = (frost$core$Bit) {_166};
_168 = _167.value;
if (_168) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6126
_171 = &_154->pendingClasses;
_172 = *_171;
_173 = &_154->pendingClasses;
_174 = *_173;
_175 = ((frost$collections$CollectionView*) _174);
ITable* $tmp21 = _175->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
_176 = $tmp21->methods[0];
_177 = _176(_175);
_178 = (frost$core$Int) {1u};
_179 = _177.value;
_180 = _178.value;
_181 = _179 - _180;
_182 = (frost$core$Int) {_181};
_183 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_172, _182);
_184 = ((org$frostlang$frostc$ClassDecl*) _183);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
_186 = ((frost$core$Object*) _184);
frost$core$Frost$ref$frost$core$Object$Q(_186);
_188 = *(&local7);
_189 = ((frost$core$Object*) _188);
frost$core$Frost$unref$frost$core$Object$Q(_189);
*(&local7) = _184;
_192 = _183;
frost$core$Frost$unref$frost$core$Object$Q(_192);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6127
_195 = *(&local7);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl(_154, _195);
_197 = *(&local7);
_198 = ((frost$core$Object*) _197);
frost$core$Frost$unref$frost$core$Object$Q(_198);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6129
_203 = &_154->codeGenerator;
_204 = *_203;
_205 = _204 != NULL;
_206 = (frost$core$Bit) {_205};
_207 = _206.value;
if (_207) goto block9; else goto block10;
block10:;
_209 = (frost$core$Int) {6129u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _209, &$s23);
abort(); // unreachable
block9:;
_212 = _204;
ITable* $tmp24 = _212->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class) {
    $tmp24 = $tmp24->next;
}
_213 = $tmp24->methods[5];
_213(_212);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:17
goto block11;
block11:;
_218 = *(&local2);
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Bench.frost:17:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
_223 = (frost$threads$ScopedLock*) frostObjectAlloc(sizeof(frost$threads$ScopedLock), (frost$core$Class*) &frost$threads$ScopedLock$class);
_224 = &_218->lock;
_225 = *_224;
frost$threads$ScopedLock$init$frost$threads$Lock(_223, _225);
*(&local8) = ((frost$threads$ScopedLock*) NULL);
_228 = ((frost$core$Object*) _223);
frost$core$Frost$ref$frost$core$Object$Q(_228);
_230 = *(&local8);
_231 = ((frost$core$Object*) _230);
frost$core$Frost$unref$frost$core$Object$Q(_231);
*(&local8) = _223;
_234 = ((frost$core$Object*) _223);
frost$core$Frost$unref$frost$core$Object$Q(_234);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_237 = &_218->count;
_238 = *_237;
_239 = *(&local8);
_240 = ((frost$core$Object*) _239);
frost$core$Frost$unref$frost$core$Object$Q(_240);
*(&local8) = ((frost$threads$ScopedLock*) NULL);
_244 = (frost$core$Int) {0u};
_245 = _238.value;
_246 = _244.value;
_247 = _245 > _246;
_248 = (frost$core$Bit) {_247};
_250 = _248.value;
if (_250) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:18
_253 = *(&local2);
_254 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_253);
_255 = ((org$frostlang$frostc$Compiler$Message*) _254);
*(&local9) = ((org$frostlang$frostc$Compiler$Message*) NULL);
_257 = ((frost$core$Object*) _255);
frost$core$Frost$ref$frost$core$Object$Q(_257);
_259 = *(&local9);
_260 = ((frost$core$Object*) _259);
frost$core$Frost$unref$frost$core$Object$Q(_260);
*(&local9) = _255;
_263 = ((frost$core$Object*) _254);
frost$core$Frost$unref$frost$core$Object$Q(_263);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:19
_266 = *(&local9);
_267 = &_266->$rawValue;
_268 = *_267;
_269 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Bench.frost:20:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_272 = _268.value;
_273 = _269.value;
_274 = _272 == _273;
_275 = (frost$core$Bit) {_274};
_277 = _275.value;
if (_277) goto block17; else goto block18;
block17:;
_279 = &_266->$data.$ERROR.field0;
_280 = *_279;
*(&local10) = ((frost$core$String*) NULL);
_282 = ((frost$core$Object*) _280);
frost$core$Frost$ref$frost$core$Object$Q(_282);
_284 = *(&local10);
_285 = ((frost$core$Object*) _284);
frost$core$Frost$unref$frost$core$Object$Q(_285);
*(&local10) = _280;
_288 = &_266->$data.$ERROR.field1;
_289 = *_288;
*(&local11) = _289;
_291 = &_266->$data.$ERROR.field2;
_292 = *_291;
*(&local12) = _292;
_294 = &_266->$data.$ERROR.field3;
_295 = *_294;
*(&local13) = ((frost$core$String*) NULL);
_297 = ((frost$core$Object*) _295);
frost$core$Frost$ref$frost$core$Object$Q(_297);
_299 = *(&local13);
_300 = ((frost$core$Object*) _299);
frost$core$Frost$unref$frost$core$Object$Q(_300);
*(&local13) = _295;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:21
_304 = *(&local10);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Bench.frost:21:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_307 = ((frost$core$Object*) _304);
frost$core$Frost$ref$frost$core$Object$Q(_307);
_310 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_304, &$s25);
_311 = *(&local11);
frost$core$Int$wrapper* $tmp26;
$tmp26 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp26->value = _311;
_312 = ((frost$core$Object*) $tmp26);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:21:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_315 = ($fn27) _312->$class->vtable[0];
_316 = _315(_312);
_317 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_310, _316);
_318 = ((frost$core$Object*) _317);
frost$core$Frost$ref$frost$core$Object$Q(_318);
_320 = ((frost$core$Object*) _317);
frost$core$Frost$unref$frost$core$Object$Q(_320);
_322 = ((frost$core$Object*) _316);
frost$core$Frost$unref$frost$core$Object$Q(_322);
_325 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_317, &$s28);
_326 = *(&local12);
frost$core$Int$wrapper* $tmp29;
$tmp29 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp29->value = _326;
_327 = ((frost$core$Object*) $tmp29);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:21:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_330 = ($fn30) _327->$class->vtable[0];
_331 = _330(_327);
_332 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_325, _331);
_333 = ((frost$core$Object*) _332);
frost$core$Frost$ref$frost$core$Object$Q(_333);
_335 = ((frost$core$Object*) _332);
frost$core$Frost$unref$frost$core$Object$Q(_335);
_337 = ((frost$core$Object*) _331);
frost$core$Frost$unref$frost$core$Object$Q(_337);
_340 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_332, &$s31);
_341 = *(&local13);
_342 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_340, _341);
_343 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_342, &$s32);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Bench.frost:21:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_343);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s33);
_353 = ((frost$core$Object*) _343);
frost$core$Frost$unref$frost$core$Object$Q(_353);
_355 = ((frost$core$Object*) _342);
frost$core$Frost$unref$frost$core$Object$Q(_355);
_357 = ((frost$core$Object*) _340);
frost$core$Frost$unref$frost$core$Object$Q(_357);
_359 = ((frost$core$Object*) _332);
frost$core$Frost$unref$frost$core$Object$Q(_359);
_361 = _327;
frost$core$Frost$unref$frost$core$Object$Q(_361);
_363 = ((frost$core$Object*) _325);
frost$core$Frost$unref$frost$core$Object$Q(_363);
_365 = ((frost$core$Object*) _317);
frost$core$Frost$unref$frost$core$Object$Q(_365);
_367 = _312;
frost$core$Frost$unref$frost$core$Object$Q(_367);
_369 = ((frost$core$Object*) _310);
frost$core$Frost$unref$frost$core$Object$Q(_369);
_371 = ((frost$core$Object*) _304);
frost$core$Frost$unref$frost$core$Object$Q(_371);
_373 = *(&local13);
_374 = ((frost$core$Object*) _373);
frost$core$Frost$unref$frost$core$Object$Q(_374);
*(&local13) = ((frost$core$String*) NULL);
_377 = *(&local10);
_378 = ((frost$core$Object*) _377);
frost$core$Frost$unref$frost$core$Object$Q(_378);
*(&local10) = ((frost$core$String*) NULL);
goto block16;
block18:;
_382 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Bench.frost:23:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_385 = _268.value;
_386 = _382.value;
_387 = _385 == _386;
_388 = (frost$core$Bit) {_387};
_390 = _388.value;
if (_390) goto block25; else goto block16;
block25:;
_392 = &_266->$data.$WARNING.field0;
_393 = *_392;
*(&local14) = ((frost$core$String*) NULL);
_395 = ((frost$core$Object*) _393);
frost$core$Frost$ref$frost$core$Object$Q(_395);
_397 = *(&local14);
_398 = ((frost$core$Object*) _397);
frost$core$Frost$unref$frost$core$Object$Q(_398);
*(&local14) = _393;
_401 = &_266->$data.$WARNING.field1;
_402 = *_401;
*(&local15) = _402;
_404 = &_266->$data.$WARNING.field2;
_405 = *_404;
*(&local16) = _405;
_407 = &_266->$data.$WARNING.field3;
_408 = *_407;
*(&local17) = ((frost$core$String*) NULL);
_410 = ((frost$core$Object*) _408);
frost$core$Frost$ref$frost$core$Object$Q(_410);
_412 = *(&local17);
_413 = ((frost$core$Object*) _412);
frost$core$Frost$unref$frost$core$Object$Q(_413);
*(&local17) = _408;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:24
_417 = *(&local14);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Bench.frost:24:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_420 = ((frost$core$Object*) _417);
frost$core$Frost$ref$frost$core$Object$Q(_420);
_423 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_417, &$s34);
_424 = *(&local15);
frost$core$Int$wrapper* $tmp35;
$tmp35 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp35->value = _424;
_425 = ((frost$core$Object*) $tmp35);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:24:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_428 = ($fn36) _425->$class->vtable[0];
_429 = _428(_425);
_430 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_423, _429);
_431 = ((frost$core$Object*) _430);
frost$core$Frost$ref$frost$core$Object$Q(_431);
_433 = ((frost$core$Object*) _430);
frost$core$Frost$unref$frost$core$Object$Q(_433);
_435 = ((frost$core$Object*) _429);
frost$core$Frost$unref$frost$core$Object$Q(_435);
_438 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_430, &$s37);
_439 = *(&local16);
frost$core$Int$wrapper* $tmp38;
$tmp38 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp38->value = _439;
_440 = ((frost$core$Object*) $tmp38);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:24:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_443 = ($fn39) _440->$class->vtable[0];
_444 = _443(_440);
_445 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_438, _444);
_446 = ((frost$core$Object*) _445);
frost$core$Frost$ref$frost$core$Object$Q(_446);
_448 = ((frost$core$Object*) _445);
frost$core$Frost$unref$frost$core$Object$Q(_448);
_450 = ((frost$core$Object*) _444);
frost$core$Frost$unref$frost$core$Object$Q(_450);
_453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_445, &$s40);
_454 = *(&local17);
_455 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_453, _454);
_456 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_455, &$s41);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Bench.frost:24:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_456);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s42);
_466 = ((frost$core$Object*) _456);
frost$core$Frost$unref$frost$core$Object$Q(_466);
_468 = ((frost$core$Object*) _455);
frost$core$Frost$unref$frost$core$Object$Q(_468);
_470 = ((frost$core$Object*) _453);
frost$core$Frost$unref$frost$core$Object$Q(_470);
_472 = ((frost$core$Object*) _445);
frost$core$Frost$unref$frost$core$Object$Q(_472);
_474 = _440;
frost$core$Frost$unref$frost$core$Object$Q(_474);
_476 = ((frost$core$Object*) _438);
frost$core$Frost$unref$frost$core$Object$Q(_476);
_478 = ((frost$core$Object*) _430);
frost$core$Frost$unref$frost$core$Object$Q(_478);
_480 = _425;
frost$core$Frost$unref$frost$core$Object$Q(_480);
_482 = ((frost$core$Object*) _423);
frost$core$Frost$unref$frost$core$Object$Q(_482);
_484 = ((frost$core$Object*) _417);
frost$core$Frost$unref$frost$core$Object$Q(_484);
_486 = *(&local17);
_487 = ((frost$core$Object*) _486);
frost$core$Frost$unref$frost$core$Object$Q(_487);
*(&local17) = ((frost$core$String*) NULL);
_490 = *(&local14);
_491 = ((frost$core$Object*) _490);
frost$core$Frost$unref$frost$core$Object$Q(_491);
*(&local14) = ((frost$core$String*) NULL);
goto block16;
block16:;
_495 = *(&local9);
_496 = ((frost$core$Object*) _495);
frost$core$Frost$unref$frost$core$Object$Q(_496);
*(&local9) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:28
_501 = *(&local5);
_502 = &_501->errorCount;
_503 = *_502;
_504 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Bench.frost:28:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_507 = _503.value;
_508 = _504.value;
_509 = _507 == _508;
_510 = (frost$core$Bit) {_509};
_512 = _510.value;
if (_512) goto block33; else goto block34;
block34:;
_514 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s43, _514);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:29
// begin inline call to function frost.core.String.get_asString():frost.core.String from Bench.frost:29:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_520 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_520);
_523 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s44);
_524 = *(&local0);
_525 = ($fn45) _524->$class->vtable[4];
_526 = _525(_524);
frost$core$Real64$wrapper* $tmp46;
$tmp46 = (frost$core$Real64$wrapper*) frostObjectAlloc(sizeof(frost$core$Real64$wrapper), (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp46->value = _526;
_527 = ((frost$core$Object*) $tmp46);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:29:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_530 = ($fn47) _527->$class->vtable[0];
_531 = _530(_527);
_532 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_523, _531);
_533 = ((frost$core$Object*) _532);
frost$core$Frost$ref$frost$core$Object$Q(_533);
_535 = ((frost$core$Object*) _532);
frost$core$Frost$unref$frost$core$Object$Q(_535);
_537 = ((frost$core$Object*) _531);
frost$core$Frost$unref$frost$core$Object$Q(_537);
_540 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_532, &$s48);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Bench.frost:29:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_540);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s49);
_550 = ((frost$core$Object*) _540);
frost$core$Frost$unref$frost$core$Object$Q(_550);
_552 = ((frost$core$Object*) _532);
frost$core$Frost$unref$frost$core$Object$Q(_552);
_554 = _527;
frost$core$Frost$unref$frost$core$Object$Q(_554);
_556 = ((frost$core$Object*) _523);
frost$core$Frost$unref$frost$core$Object$Q(_556);
_558 = ((frost$core$Object*) param1);
frost$core$Frost$unref$frost$core$Object$Q(_558);
_560 = *(&local5);
_561 = ((frost$core$Object*) _560);
frost$core$Frost$unref$frost$core$Object$Q(_561);
*(&local5) = ((org$frostlang$frostc$Compiler*) NULL);
_564 = *(&local4);
_565 = ((frost$core$Object*) _564);
frost$core$Frost$unref$frost$core$Object$Q(_565);
*(&local4) = ((org$frostlang$frostc$LLVMCodeGenerator*) NULL);
_568 = *(&local3);
_569 = ((frost$core$Object*) _568);
frost$core$Frost$unref$frost$core$Object$Q(_569);
*(&local3) = ((frost$io$MemoryOutputStream*) NULL);
_572 = *(&local2);
_573 = ((frost$core$Object*) _572);
frost$core$Frost$unref$frost$core$Object$Q(_573);
*(&local2) = ((frost$threads$MessageQueue*) NULL);
_576 = *(&local1);
_577 = ((frost$core$Object*) _576);
frost$core$Frost$unref$frost$core$Object$Q(_577);
*(&local1) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_580 = *(&local0);
_581 = ((frost$core$Object*) _580);
frost$core$Frost$unref$frost$core$Object$Q(_581);
*(&local0) = ((frost$time$Timer*) NULL);
return;

}
void org$frostlang$frostc$Bench$bench$frost$core$String$frost$core$String(void* rawSelf, frost$core$String* param1, frost$core$String* param2) {
org$frostlang$frostc$Bench* param0 = (org$frostlang$frostc$Bench*) rawSelf;

frost$core$String* _1;
frost$core$Int _2;
frost$core$Int _3;
$fn50 _4;
frost$core$Object* _6;
frost$core$String* _9;
frost$core$Int _10;
frost$core$Int _11;
$fn51 _12;
frost$core$Object* _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:33
_1 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s52);
_2 = (frost$core$Int) {0u};
_3 = (frost$core$Int) {0u};
_4 = ($fn53) param0->$class->vtable[2];
_4(param0, _1, param2, _2, _3);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:34
_9 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s54);
_10 = (frost$core$Int) {3u};
_11 = (frost$core$Int) {3u};
_12 = ($fn55) param0->$class->vtable[2];
_12(param0, _9, param2, _10, _11);
_14 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_14);
return;

}
void org$frostlang$frostc$Bench$run(void* rawSelf) {
org$frostlang$frostc$Bench* param0 = (org$frostlang$frostc$Bench*) rawSelf;

frost$core$Error* local0 = NULL;
frost$io$File* local1 = NULL;
frost$core$MutableString* local2 = NULL;
frost$core$Int local3;
$fn56 _3;
frost$io$File* _6;
frost$core$String* _7;
frost$io$File* _9;
frost$core$Object* _11;
frost$io$File* _13;
frost$core$Object* _14;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _21;
frost$io$File* _24;
frost$core$Maybe* _25;
frost$core$Int* _26;
frost$core$Int _27;
int64_t _28;
bool _29;
frost$core$Error** _31;
frost$core$Error* _32;
frost$core$Object* _33;
frost$core$Object* _36;
frost$io$File* _38;
frost$core$Object* _39;
frost$core$Error* _155;
frost$core$Object* _156;
$fn57 _159;
frost$core$String* _160;
frost$core$Object* _167;
frost$core$Int _172;
frost$core$Object** _43;
frost$core$Object* _44;
frost$core$String* _45;
$fn58 _46;
frost$core$Object* _48;
frost$core$MutableString* _51;
frost$core$Object* _54;
frost$core$MutableString* _56;
frost$core$Object* _57;
frost$core$Object* _60;
frost$core$Int _63;
frost$core$Int _64;
frost$core$Bit _65;
frost$core$Range$LTfrost$core$Int$GT _66;
frost$core$Int _67;
frost$core$Int _69;
frost$core$Bit _70;
bool _71;
frost$core$Int _72;
int64_t _74;
int64_t _75;
bool _76;
frost$core$Bit _77;
bool _78;
int64_t _80;
int64_t _81;
bool _82;
frost$core$Bit _83;
bool _84;
frost$core$MutableString* _87;
frost$core$Int _88;
frost$core$Object* _89;
$fn59 _92;
frost$core$String* _93;
frost$core$String* _94;
frost$core$Object* _95;
frost$core$Object* _97;
frost$core$Object* _99;
frost$core$String* _102;
frost$core$Object* _104;
frost$core$Object* _106;
frost$core$Object* _108;
frost$core$Int _111;
int64_t _112;
int64_t _113;
int64_t _114;
frost$core$Int _115;
int64_t _117;
int64_t _118;
bool _119;
frost$core$Bit _120;
bool _121;
int64_t _123;
int64_t _124;
bool _125;
frost$core$Bit _126;
bool _127;
int64_t _129;
int64_t _130;
int64_t _131;
frost$core$Int _132;
frost$core$MutableString* _136;
frost$core$MutableString* _139;
frost$core$String* _140;
$fn60 _141;
frost$core$Object* _143;
frost$core$MutableString* _145;
frost$core$Object* _146;
frost$io$File* _149;
frost$core$Object* _150;
frost$core$Error* _175;
frost$core$Object* _176;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:38
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:39
_3 = ($fn61) param0->$class->vtable[3];
_3(param0, &$s62, &$s63);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:40
_6 = (frost$io$File*) frostObjectAlloc(sizeof(frost$io$File), (frost$core$Class*) &frost$io$File$class);
_7 = org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String();
frost$io$File$init$frost$core$String(_6, _7);
_9 = frost$io$File$resolve$frost$core$String$R$frost$io$File(_6, &$s64);
*(&local1) = ((frost$io$File*) NULL);
_11 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = *(&local1);
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
*(&local1) = _9;
_17 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_21);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:41
_24 = *(&local1);
_25 = frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT(_24);
_26 = &_25->$rawValue;
_27 = *_26;
_28 = _27.value;
_29 = _28 == 0u;
if (_29) goto block3; else goto block4;
block4:;
_31 = &_25->$data.$ERROR.field0;
_32 = *_31;
_33 = ((frost$core$Object*) _32);
frost$core$Frost$ref$frost$core$Object$Q(_33);
*(&local0) = _32;
_36 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = *(&local1);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local1) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:50
_155 = *(&local0);
_156 = ((frost$core$Object*) _155);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Bench.frost:50:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
_159 = ($fn65) _156->$class->vtable[0];
_160 = _159(_156);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_160);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
_167 = ((frost$core$Object*) _160);
frost$core$Frost$unref$frost$core$Object$Q(_167);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:51
frost$core$System$crash();
_172 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s66, _172, &$s67);
abort(); // unreachable
block3:;
_43 = &_25->$data.$SUCCESS.field0;
_44 = *_43;
_45 = ((frost$core$String*) _44);
_46 = ($fn68) param0->$class->vtable[3];
_46(param0, &$s69, _45);
_48 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_48);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:42
_51 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String(_51, &$s70);
*(&local2) = ((frost$core$MutableString*) NULL);
_54 = ((frost$core$Object*) _51);
frost$core$Frost$ref$frost$core$Object$Q(_54);
_56 = *(&local2);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
*(&local2) = _51;
_60 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_60);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:43
_63 = (frost$core$Int) {1u};
_64 = (frost$core$Int) {10000u};
_65 = (frost$core$Bit) {true};
_66 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_63, _64, _65);
_67 = _66.min;
*(&local3) = _67;
_69 = _66.max;
_70 = _66.inclusive;
_71 = _70.value;
_72 = (frost$core$Int) {1u};
if (_71) goto block8; else goto block9;
block8:;
_74 = _67.value;
_75 = _69.value;
_76 = _74 <= _75;
_77 = (frost$core$Bit) {_76};
_78 = _77.value;
if (_78) goto block5; else goto block6;
block9:;
_80 = _67.value;
_81 = _69.value;
_82 = _80 < _81;
_83 = (frost$core$Bit) {_82};
_84 = _83.value;
if (_84) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:44
_87 = *(&local2);
_88 = *(&local3);
frost$core$Int$wrapper* $tmp71;
$tmp71 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp71->value = _88;
_89 = ((frost$core$Object*) $tmp71);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:44:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_92 = ($fn72) _89->$class->vtable[0];
_93 = _92(_89);
_94 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s73, _93);
_95 = ((frost$core$Object*) _94);
frost$core$Frost$ref$frost$core$Object$Q(_95);
_97 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_97);
_99 = ((frost$core$Object*) _93);
frost$core$Frost$unref$frost$core$Object$Q(_99);
_102 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_94, &$s74);
frost$core$MutableString$append$frost$core$String(_87, _102);
_104 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_104);
_106 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_106);
_108 = _89;
frost$core$Frost$unref$frost$core$Object$Q(_108);
_111 = *(&local3);
_112 = _69.value;
_113 = _111.value;
_114 = _112 - _113;
_115 = (frost$core$Int) {_114};
if (_71) goto block12; else goto block13;
block12:;
_117 = _115.value;
_118 = _72.value;
_119 = _117 >= _118;
_120 = (frost$core$Bit) {_119};
_121 = _120.value;
if (_121) goto block11; else goto block6;
block13:;
_123 = _115.value;
_124 = _72.value;
_125 = _123 > _124;
_126 = (frost$core$Bit) {_125};
_127 = _126.value;
if (_127) goto block11; else goto block6;
block11:;
_129 = _111.value;
_130 = _72.value;
_131 = _129 + _130;
_132 = (frost$core$Int) {_131};
*(&local3) = _132;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:46
_136 = *(&local2);
frost$core$MutableString$append$frost$core$String(_136, &$s75);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:47
_139 = *(&local2);
_140 = frost$core$MutableString$finish$R$frost$core$String(_139);
_141 = ($fn76) param0->$class->vtable[3];
_141(param0, &$s77, _140);
_143 = ((frost$core$Object*) _140);
frost$core$Frost$unref$frost$core$Object$Q(_143);
_145 = *(&local2);
_146 = ((frost$core$Object*) _145);
frost$core$Frost$unref$frost$core$Object$Q(_146);
*(&local2) = ((frost$core$MutableString*) NULL);
_149 = *(&local1);
_150 = ((frost$core$Object*) _149);
frost$core$Frost$unref$frost$core$Object$Q(_150);
*(&local1) = ((frost$io$File*) NULL);
_175 = *(&local0);
_176 = ((frost$core$Object*) _175);
frost$core$Frost$unref$frost$core$Object$Q(_176);
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$Bench$init(void* rawSelf) {
org$frostlang$frostc$Bench* param0 = (org$frostlang$frostc$Bench*) rawSelf;

return;

}
void org$frostlang$frostc$Bench$cleanup(void* rawSelf) {
org$frostlang$frostc$Bench* param0 = (org$frostlang$frostc$Bench*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:3
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

