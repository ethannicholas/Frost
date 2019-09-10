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

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x42\x65\x6e\x63\x68", 26, 7935502561105279878, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x66\x61\x6b\x65\x2f\x70\x61\x74\x68\x2f\x42\x65\x6e\x63\x68\x44\x75\x6d\x6d\x79\x2e\x66\x72\x6f\x73\x74", 27, 6552183172853563514, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -1909310572556369220, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 107, -867402159131882985, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, -5861202104196742523, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 2890546785777135939, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x65\x6e\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -8597413136814869315, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20", 2, 584909432750204567, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f\x30", 3, -2382319437966649185, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f\x33", 3, -2382318338455020974, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x65\x6c\x6c\x6f", 5, 7201466553693376363, NULL };
static frost$core$String $s63 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6d\x61\x69\x6e\x28\x29\x20\x7b\x20\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x70\x72\x69\x6e\x74\x4c\x69\x6e\x65\x28\x22\x48\x65\x6c\x6c\x6f\x2c\x20\x57\x6f\x72\x6c\x64\x21\x22\x29\x20\x7d", 52, 1470744474518815592, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e\x2f\x74\x65\x73\x74\x2f\x74\x65\x73\x74\x73\x2f\x57\x75\x6d\x70\x75\x73\x2e\x66\x72\x6f\x73\x74", 26, -1641527893991703732, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x65\x6e\x63\x68\x2e\x66\x72\x6f\x73\x74", 11, -8597413136814869315, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x75\x6d\x70\x75\x73", 6, 1639335822486632976, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6d\x61\x69\x6e\x28\x29\x20\x7b\x0a", 16, 2825733708493219975, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x43\x6f\x6e\x73\x6f\x6c\x65\x2e\x70\x72\x69\x6e\x74\x4c\x69\x6e\x65\x28\x22", 23, -4489290791127773989, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x29", 2, 561959326539097764, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x42\x69\x67", 3, 1611498228082597561, NULL };

void org$frostlang$frostc$Bench$bench$frost$core$String$frost$core$String$frost$core$Int$frost$core$Int(org$frostlang$frostc$Bench* param0, frost$core$String* param1, frost$core$String* param2, frost$core$Int param3, frost$core$Int param4) {

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
frost$collections$Array* _22;
frost$core$Int _23;
frost$collections$Array* _25;
frost$io$File* _26;
frost$core$String* _27;
frost$core$Object* _29;
frost$collections$Array* _31;
frost$collections$ImmutableArray* _32;
frost$collections$ImmutableArray* _33;
frost$collections$ListView* _34;
frost$core$Bit _35;
frost$core$Object* _38;
org$frostlang$frostc$Compiler$Settings* _40;
frost$core$Object* _41;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$Object* _54;
frost$core$Object* _56;
frost$threads$MessageQueue* _59;
frost$threads$MessageQueue* _60;
frost$core$Object* _63;
frost$threads$MessageQueue* _65;
frost$core$Object* _66;
frost$core$Object* _69;
frost$io$MemoryOutputStream* _72;
frost$core$Object* _75;
frost$io$MemoryOutputStream* _77;
frost$core$Object* _78;
frost$core$Object* _81;
org$frostlang$frostc$LLVMCodeGenerator* _84;
frost$core$String* _85;
frost$io$MemoryOutputStream* _86;
frost$io$OutputStream* _87;
frost$core$Object* _90;
org$frostlang$frostc$LLVMCodeGenerator* _92;
frost$core$Object* _93;
frost$core$Object* _96;
frost$core$Object* _98;
org$frostlang$frostc$Compiler* _101;
frost$threads$MessageQueue* _102;
org$frostlang$frostc$LLVMCodeGenerator* _103;
org$frostlang$frostc$CodeGenerator* _104;
org$frostlang$frostc$Compiler$Settings* _105;
frost$core$Object* _108;
org$frostlang$frostc$Compiler* _110;
frost$core$Object* _111;
frost$core$Object* _114;
org$frostlang$frostc$Compiler* _117;
frost$io$File* _118;
frost$collections$ListView* _122;
frost$collections$Iterable* _123;
frost$collections$Iterable* _124;
$fn3 _125;
frost$collections$Iterator* _126;
frost$collections$Iterator* _127;
frost$collections$Iterator* _129;
$fn4 _130;
frost$core$Bit _131;
bool _132;
frost$collections$Iterator* _135;
$fn5 _136;
frost$core$Object* _137;
org$frostlang$frostc$ClassDecl* _138;
frost$core$Object* _139;
org$frostlang$frostc$ClassDecl* _141;
frost$core$Object* _142;
org$frostlang$frostc$ClassDecl* _146;
frost$core$Object* _148;
org$frostlang$frostc$ClassDecl* _150;
frost$core$Object* _151;
frost$core$Object* _155;
frost$core$Object* _157;
frost$core$Object* _160;
org$frostlang$frostc$Compiler* _163;
frost$collections$Array** _167;
frost$collections$Array* _168;
frost$collections$CollectionView* _169;
$fn6 _170;
frost$core$Int _171;
frost$core$Int _172;
int64_t _173;
int64_t _174;
bool _175;
frost$core$Bit _176;
bool _177;
frost$collections$Array** _180;
frost$collections$Array* _181;
frost$collections$Array* _182;
frost$collections$Array** _183;
frost$collections$Array* _184;
frost$collections$CollectionView* _185;
$fn7 _186;
frost$core$Int _187;
frost$core$Int _188;
int64_t _189;
int64_t _190;
int64_t _191;
frost$core$Int _192;
frost$core$Object* _193;
org$frostlang$frostc$ClassDecl* _194;
frost$core$Object* _196;
org$frostlang$frostc$ClassDecl* _198;
frost$core$Object* _199;
frost$core$Object* _202;
org$frostlang$frostc$ClassDecl* _205;
org$frostlang$frostc$ClassDecl* _207;
frost$core$Object* _208;
org$frostlang$frostc$CodeGenerator** _213;
org$frostlang$frostc$CodeGenerator* _214;
bool _215;
frost$core$Bit _216;
bool _217;
frost$core$Int _219;
org$frostlang$frostc$CodeGenerator* _222;
$fn8 _223;
frost$threads$MessageQueue* _228;
frost$threads$MessageQueue* _229;
frost$threads$ScopedLock* _234;
frost$threads$Lock** _235;
frost$threads$Lock* _236;
frost$core$Object* _239;
frost$threads$ScopedLock* _241;
frost$core$Object* _242;
frost$core$Object* _245;
frost$core$Int* _248;
frost$core$Int _249;
frost$threads$ScopedLock* _250;
frost$core$Object* _251;
frost$core$Int _255;
int64_t _256;
int64_t _257;
bool _258;
frost$core$Bit _259;
bool _261;
frost$threads$MessageQueue* _264;
frost$threads$MessageQueue* _265;
frost$core$Immutable* _266;
org$frostlang$frostc$Compiler$Message* _267;
frost$core$Object* _269;
org$frostlang$frostc$Compiler$Message* _271;
frost$core$Object* _272;
frost$core$Object* _275;
org$frostlang$frostc$Compiler$Message* _278;
frost$core$Int* _279;
frost$core$Int _280;
frost$core$Int _281;
int64_t _284;
int64_t _285;
bool _286;
frost$core$Bit _287;
bool _289;
frost$core$String** _291;
frost$core$String* _292;
frost$core$Object* _294;
frost$core$String* _296;
frost$core$Object* _297;
frost$core$Int* _300;
frost$core$Int _301;
frost$core$Int* _303;
frost$core$Int _304;
frost$core$String** _306;
frost$core$String* _307;
frost$core$Object* _309;
frost$core$String* _311;
frost$core$Object* _312;
frost$core$String* _316;
frost$core$Object* _319;
frost$core$String* _322;
frost$core$Int _323;
frost$core$Object* _324;
$fn9 _327;
frost$core$String* _328;
frost$core$String* _329;
frost$core$Object* _330;
frost$core$Object* _332;
frost$core$Object* _334;
frost$core$String* _337;
frost$core$Int _338;
frost$core$Object* _339;
$fn10 _342;
frost$core$String* _343;
frost$core$String* _344;
frost$core$Object* _345;
frost$core$Object* _347;
frost$core$Object* _349;
frost$core$String* _352;
frost$core$String* _353;
frost$core$String* _354;
frost$core$String* _355;
frost$core$Object* _365;
frost$core$Object* _367;
frost$core$Object* _369;
frost$core$Object* _371;
frost$core$Object* _373;
frost$core$Object* _375;
frost$core$Object* _377;
frost$core$Object* _379;
frost$core$Object* _381;
frost$core$Object* _383;
frost$core$String* _385;
frost$core$Object* _386;
frost$core$String* _389;
frost$core$Object* _390;
frost$core$Int _394;
int64_t _397;
int64_t _398;
bool _399;
frost$core$Bit _400;
bool _402;
frost$core$String** _404;
frost$core$String* _405;
frost$core$Object* _407;
frost$core$String* _409;
frost$core$Object* _410;
frost$core$Int* _413;
frost$core$Int _414;
frost$core$Int* _416;
frost$core$Int _417;
frost$core$String** _419;
frost$core$String* _420;
frost$core$Object* _422;
frost$core$String* _424;
frost$core$Object* _425;
frost$core$String* _429;
frost$core$Object* _432;
frost$core$String* _435;
frost$core$Int _436;
frost$core$Object* _437;
$fn11 _440;
frost$core$String* _441;
frost$core$String* _442;
frost$core$Object* _443;
frost$core$Object* _445;
frost$core$Object* _447;
frost$core$String* _450;
frost$core$Int _451;
frost$core$Object* _452;
$fn12 _455;
frost$core$String* _456;
frost$core$String* _457;
frost$core$Object* _458;
frost$core$Object* _460;
frost$core$Object* _462;
frost$core$String* _465;
frost$core$String* _466;
frost$core$String* _467;
frost$core$String* _468;
frost$core$Object* _478;
frost$core$Object* _480;
frost$core$Object* _482;
frost$core$Object* _484;
frost$core$Object* _486;
frost$core$Object* _488;
frost$core$Object* _490;
frost$core$Object* _492;
frost$core$Object* _494;
frost$core$Object* _496;
frost$core$String* _498;
frost$core$Object* _499;
frost$core$String* _502;
frost$core$Object* _503;
org$frostlang$frostc$Compiler$Message* _507;
frost$core$Object* _508;
org$frostlang$frostc$Compiler* _513;
frost$core$Int* _514;
frost$core$Int _515;
frost$core$Int _516;
int64_t _519;
int64_t _520;
bool _521;
frost$core$Bit _522;
bool _524;
frost$core$Int _526;
frost$core$Object* _532;
frost$core$String* _535;
frost$time$Timer* _536;
$fn13 _537;
frost$core$Real64 _538;
frost$core$Object* _539;
$fn14 _542;
frost$core$String* _543;
frost$core$String* _544;
frost$core$Object* _545;
frost$core$Object* _547;
frost$core$Object* _549;
frost$core$String* _552;
frost$core$Object* _562;
frost$core$Object* _564;
frost$core$Object* _566;
frost$core$Object* _568;
frost$core$Object* _570;
org$frostlang$frostc$Compiler* _572;
frost$core$Object* _573;
org$frostlang$frostc$LLVMCodeGenerator* _576;
frost$core$Object* _577;
frost$io$MemoryOutputStream* _580;
frost$core$Object* _581;
frost$threads$MessageQueue* _584;
frost$core$Object* _585;
org$frostlang$frostc$Compiler$Settings* _588;
frost$core$Object* _589;
frost$time$Timer* _592;
frost$core$Object* _593;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:7
FROST_ASSERT(32 == sizeof(frost$time$Timer));
_1 = (frost$time$Timer*) frostObjectAlloc(32, (frost$core$Class*) &frost$time$Timer$class);
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
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Compiler$Settings));
_17 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
FROST_ASSERT(24 == sizeof(frost$io$File));
_18 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
_19 = org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String();
frost$io$File$init$frost$core$String(_18, _19);
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_21 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_22 = _21;
_23 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_22, _23);
_25 = _21;
FROST_ASSERT(24 == sizeof(frost$io$File));
_26 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
_27 = org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String();
frost$io$File$init$frost$core$String(_26, _27);
_29 = ((frost$core$Object*) _26);
frost$collections$Array$add$frost$collections$Array$T(_25, _29);
_31 = _21;
_32 = frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT(_31);
_33 = _32;
_34 = ((frost$collections$ListView*) _33);
_35 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int$frost$core$Int$frost$core$Bit(_17, _18, _34, param3, param4, _35);
*(&local1) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_38 = ((frost$core$Object*) _17);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = *(&local1);
_41 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_41);
*(&local1) = _17;
_44 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_52);
_54 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_56);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:11
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
_59 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
_60 = _59;
frost$threads$MessageQueue$init(_60);
*(&local2) = ((frost$threads$MessageQueue*) NULL);
_63 = ((frost$core$Object*) _59);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = *(&local2);
_66 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_66);
*(&local2) = _59;
_69 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_69);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:12
FROST_ASSERT(40 == sizeof(frost$io$MemoryOutputStream));
_72 = (frost$io$MemoryOutputStream*) frostObjectAlloc(40, (frost$core$Class*) &frost$io$MemoryOutputStream$class);
frost$io$MemoryOutputStream$init(_72);
*(&local3) = ((frost$io$MemoryOutputStream*) NULL);
_75 = ((frost$core$Object*) _72);
frost$core$Frost$ref$frost$core$Object$Q(_75);
_77 = *(&local3);
_78 = ((frost$core$Object*) _77);
frost$core$Frost$unref$frost$core$Object$Q(_78);
*(&local3) = _72;
_81 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_81);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:13
FROST_ASSERT(264 == sizeof(org$frostlang$frostc$LLVMCodeGenerator));
_84 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(264, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
_85 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
_86 = *(&local3);
_87 = ((frost$io$OutputStream*) _86);
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream(_84, _85, _87);
*(&local4) = ((org$frostlang$frostc$LLVMCodeGenerator*) NULL);
_90 = ((frost$core$Object*) _84);
frost$core$Frost$ref$frost$core$Object$Q(_90);
_92 = *(&local4);
_93 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_93);
*(&local4) = _84;
_96 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_96);
_98 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_98);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:14
FROST_ASSERT(728 == sizeof(org$frostlang$frostc$Compiler));
_101 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(728, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
_102 = *(&local2);
_103 = *(&local4);
_104 = ((org$frostlang$frostc$CodeGenerator*) _103);
_105 = *(&local1);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$Q$org$frostlang$frostc$Compiler$Settings(_101, _102, _104, _105);
*(&local5) = ((org$frostlang$frostc$Compiler*) NULL);
_108 = ((frost$core$Object*) _101);
frost$core$Frost$ref$frost$core$Object$Q(_108);
_110 = *(&local5);
_111 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_111);
*(&local5) = _101;
_114 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_114);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:15
_117 = *(&local5);
FROST_ASSERT(24 == sizeof(frost$io$File));
_118 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String(_118, &$s16);
// begin inline call to method org.frostlang.frostc.Compiler.compile(path:frost.io.File, text:frost.core.String) from Bench.frost:15:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6098
_122 = org$frostlang$frostc$Compiler$scan$frost$io$File$frost$core$String$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT(_117, _118, param2);
_123 = ((frost$collections$Iterable*) _122);
_124 = _123;
ITable* $tmp17 = _124->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp17 = $tmp17->next;
}
_125 = $tmp17->methods[0];
_126 = _125(_124);
_127 = _126;
goto block2;
block2:;
_129 = _127;
ITable* $tmp18 = _129->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp18 = $tmp18->next;
}
_130 = $tmp18->methods[0];
_131 = _130(_129);
_132 = _131.value;
if (_132) goto block4; else goto block3;
block3:;
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
_135 = _127;
ITable* $tmp19 = _135->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
_136 = $tmp19->methods[1];
_137 = _136(_135);
_138 = ((org$frostlang$frostc$ClassDecl*) _137);
_139 = ((frost$core$Object*) _138);
frost$core$Frost$ref$frost$core$Object$Q(_139);
_141 = *(&local6);
_142 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_142);
*(&local6) = _138;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6099
_146 = *(&local6);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl(_117, _146);
_148 = _137;
frost$core$Frost$unref$frost$core$Object$Q(_148);
_150 = *(&local6);
_151 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_151);
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block2;
block4:;
_155 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_155);
_157 = ((frost$core$Object*) _122);
frost$core$Frost$unref$frost$core$Object$Q(_157);
_160 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_160);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:16
_163 = *(&local5);
// begin inline call to method org.frostlang.frostc.Compiler.finish() from Bench.frost:16:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6131
goto block6;
block6:;
_167 = &_163->pendingClasses;
_168 = *_167;
_169 = ((frost$collections$CollectionView*) _168);
ITable* $tmp20 = _169->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_170 = $tmp20->methods[0];
_171 = _170(_169);
_172 = (frost$core$Int) {0u};
_173 = _171.value;
_174 = _172.value;
_175 = _173 > _174;
_176 = (frost$core$Bit) {_175};
_177 = _176.value;
if (_177) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6132
_180 = &_163->pendingClasses;
_181 = *_180;
_182 = _181;
_183 = &_163->pendingClasses;
_184 = *_183;
_185 = ((frost$collections$CollectionView*) _184);
ITable* $tmp21 = _185->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp21 = $tmp21->next;
}
_186 = $tmp21->methods[0];
_187 = _186(_185);
_188 = (frost$core$Int) {1u};
_189 = _187.value;
_190 = _188.value;
_191 = _189 - _190;
_192 = (frost$core$Int) {_191};
_193 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_182, _192);
_194 = ((org$frostlang$frostc$ClassDecl*) _193);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
_196 = ((frost$core$Object*) _194);
frost$core$Frost$ref$frost$core$Object$Q(_196);
_198 = *(&local7);
_199 = ((frost$core$Object*) _198);
frost$core$Frost$unref$frost$core$Object$Q(_199);
*(&local7) = _194;
_202 = _193;
frost$core$Frost$unref$frost$core$Object$Q(_202);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6133
_205 = *(&local7);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl(_163, _205);
_207 = *(&local7);
_208 = ((frost$core$Object*) _207);
frost$core$Frost$unref$frost$core$Object$Q(_208);
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6135
_213 = &_163->codeGenerator;
_214 = *_213;
_215 = _214 != NULL;
_216 = (frost$core$Bit) {_215};
_217 = _216.value;
if (_217) goto block9; else goto block10;
block10:;
_219 = (frost$core$Int) {6135u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _219, &$s23);
abort(); // unreachable
block9:;
_222 = _214;
ITable* $tmp24 = _222->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class) {
    $tmp24 = $tmp24->next;
}
_223 = $tmp24->methods[5];
_223(_222);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:17
goto block11;
block11:;
_228 = *(&local2);
_229 = _228;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Bench.frost:17:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
_234 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
_235 = &_229->lock;
_236 = *_235;
frost$threads$ScopedLock$init$frost$threads$Lock(_234, _236);
*(&local8) = ((frost$threads$ScopedLock*) NULL);
_239 = ((frost$core$Object*) _234);
frost$core$Frost$ref$frost$core$Object$Q(_239);
_241 = *(&local8);
_242 = ((frost$core$Object*) _241);
frost$core$Frost$unref$frost$core$Object$Q(_242);
*(&local8) = _234;
_245 = ((frost$core$Object*) _234);
frost$core$Frost$unref$frost$core$Object$Q(_245);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_248 = &_229->count;
_249 = *_248;
_250 = *(&local8);
_251 = ((frost$core$Object*) _250);
frost$core$Frost$unref$frost$core$Object$Q(_251);
*(&local8) = ((frost$threads$ScopedLock*) NULL);
_255 = (frost$core$Int) {0u};
_256 = _249.value;
_257 = _255.value;
_258 = _256 > _257;
_259 = (frost$core$Bit) {_258};
_261 = _259.value;
if (_261) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:18
_264 = *(&local2);
_265 = _264;
_266 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_265);
_267 = ((org$frostlang$frostc$Compiler$Message*) _266);
*(&local9) = ((org$frostlang$frostc$Compiler$Message*) NULL);
_269 = ((frost$core$Object*) _267);
frost$core$Frost$ref$frost$core$Object$Q(_269);
_271 = *(&local9);
_272 = ((frost$core$Object*) _271);
frost$core$Frost$unref$frost$core$Object$Q(_272);
*(&local9) = _267;
_275 = ((frost$core$Object*) _266);
frost$core$Frost$unref$frost$core$Object$Q(_275);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:19
_278 = *(&local9);
_279 = &_278->$rawValue;
_280 = *_279;
_281 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Bench.frost:20:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_284 = _280.value;
_285 = _281.value;
_286 = _284 == _285;
_287 = (frost$core$Bit) {_286};
_289 = _287.value;
if (_289) goto block17; else goto block18;
block17:;
_291 = (frost$core$String**) (_278->$data + 0);
_292 = *_291;
*(&local10) = ((frost$core$String*) NULL);
_294 = ((frost$core$Object*) _292);
frost$core$Frost$ref$frost$core$Object$Q(_294);
_296 = *(&local10);
_297 = ((frost$core$Object*) _296);
frost$core$Frost$unref$frost$core$Object$Q(_297);
*(&local10) = _292;
_300 = (frost$core$Int*) (_278->$data + 8);
_301 = *_300;
*(&local11) = _301;
_303 = (frost$core$Int*) (_278->$data + 16);
_304 = *_303;
*(&local12) = _304;
_306 = (frost$core$String**) (_278->$data + 24);
_307 = *_306;
*(&local13) = ((frost$core$String*) NULL);
_309 = ((frost$core$Object*) _307);
frost$core$Frost$ref$frost$core$Object$Q(_309);
_311 = *(&local13);
_312 = ((frost$core$Object*) _311);
frost$core$Frost$unref$frost$core$Object$Q(_312);
*(&local13) = _307;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:21
_316 = *(&local10);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Bench.frost:21:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_319 = ((frost$core$Object*) _316);
frost$core$Frost$ref$frost$core$Object$Q(_319);
_322 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_316, &$s25);
_323 = *(&local11);
frost$core$Int$wrapper* $tmp26;
$tmp26 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp26->value = _323;
_324 = ((frost$core$Object*) $tmp26);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:21:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_327 = ($fn27) _324->$class->vtable[0];
_328 = _327(_324);
_329 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_322, _328);
_330 = ((frost$core$Object*) _329);
frost$core$Frost$ref$frost$core$Object$Q(_330);
_332 = ((frost$core$Object*) _329);
frost$core$Frost$unref$frost$core$Object$Q(_332);
_334 = ((frost$core$Object*) _328);
frost$core$Frost$unref$frost$core$Object$Q(_334);
_337 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_329, &$s28);
_338 = *(&local12);
frost$core$Int$wrapper* $tmp29;
$tmp29 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp29->value = _338;
_339 = ((frost$core$Object*) $tmp29);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:21:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_342 = ($fn30) _339->$class->vtable[0];
_343 = _342(_339);
_344 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_337, _343);
_345 = ((frost$core$Object*) _344);
frost$core$Frost$ref$frost$core$Object$Q(_345);
_347 = ((frost$core$Object*) _344);
frost$core$Frost$unref$frost$core$Object$Q(_347);
_349 = ((frost$core$Object*) _343);
frost$core$Frost$unref$frost$core$Object$Q(_349);
_352 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_344, &$s31);
_353 = *(&local13);
_354 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_352, _353);
_355 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_354, &$s32);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Bench.frost:21:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_355);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s33);
_365 = ((frost$core$Object*) _355);
frost$core$Frost$unref$frost$core$Object$Q(_365);
_367 = ((frost$core$Object*) _354);
frost$core$Frost$unref$frost$core$Object$Q(_367);
_369 = ((frost$core$Object*) _352);
frost$core$Frost$unref$frost$core$Object$Q(_369);
_371 = ((frost$core$Object*) _344);
frost$core$Frost$unref$frost$core$Object$Q(_371);
_373 = _339;
frost$core$Frost$unref$frost$core$Object$Q(_373);
_375 = ((frost$core$Object*) _337);
frost$core$Frost$unref$frost$core$Object$Q(_375);
_377 = ((frost$core$Object*) _329);
frost$core$Frost$unref$frost$core$Object$Q(_377);
_379 = _324;
frost$core$Frost$unref$frost$core$Object$Q(_379);
_381 = ((frost$core$Object*) _322);
frost$core$Frost$unref$frost$core$Object$Q(_381);
_383 = ((frost$core$Object*) _316);
frost$core$Frost$unref$frost$core$Object$Q(_383);
_385 = *(&local13);
_386 = ((frost$core$Object*) _385);
frost$core$Frost$unref$frost$core$Object$Q(_386);
*(&local13) = ((frost$core$String*) NULL);
_389 = *(&local10);
_390 = ((frost$core$Object*) _389);
frost$core$Frost$unref$frost$core$Object$Q(_390);
*(&local10) = ((frost$core$String*) NULL);
goto block16;
block18:;
_394 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Bench.frost:23:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_397 = _280.value;
_398 = _394.value;
_399 = _397 == _398;
_400 = (frost$core$Bit) {_399};
_402 = _400.value;
if (_402) goto block25; else goto block16;
block25:;
_404 = (frost$core$String**) (_278->$data + 0);
_405 = *_404;
*(&local14) = ((frost$core$String*) NULL);
_407 = ((frost$core$Object*) _405);
frost$core$Frost$ref$frost$core$Object$Q(_407);
_409 = *(&local14);
_410 = ((frost$core$Object*) _409);
frost$core$Frost$unref$frost$core$Object$Q(_410);
*(&local14) = _405;
_413 = (frost$core$Int*) (_278->$data + 8);
_414 = *_413;
*(&local15) = _414;
_416 = (frost$core$Int*) (_278->$data + 16);
_417 = *_416;
*(&local16) = _417;
_419 = (frost$core$String**) (_278->$data + 24);
_420 = *_419;
*(&local17) = ((frost$core$String*) NULL);
_422 = ((frost$core$Object*) _420);
frost$core$Frost$ref$frost$core$Object$Q(_422);
_424 = *(&local17);
_425 = ((frost$core$Object*) _424);
frost$core$Frost$unref$frost$core$Object$Q(_425);
*(&local17) = _420;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:24
_429 = *(&local14);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Bench.frost:24:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_432 = ((frost$core$Object*) _429);
frost$core$Frost$ref$frost$core$Object$Q(_432);
_435 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_429, &$s34);
_436 = *(&local15);
frost$core$Int$wrapper* $tmp35;
$tmp35 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp35->value = _436;
_437 = ((frost$core$Object*) $tmp35);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:24:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_440 = ($fn36) _437->$class->vtable[0];
_441 = _440(_437);
_442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_435, _441);
_443 = ((frost$core$Object*) _442);
frost$core$Frost$ref$frost$core$Object$Q(_443);
_445 = ((frost$core$Object*) _442);
frost$core$Frost$unref$frost$core$Object$Q(_445);
_447 = ((frost$core$Object*) _441);
frost$core$Frost$unref$frost$core$Object$Q(_447);
_450 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_442, &$s37);
_451 = *(&local16);
frost$core$Int$wrapper* $tmp38;
$tmp38 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp38->value = _451;
_452 = ((frost$core$Object*) $tmp38);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:24:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_455 = ($fn39) _452->$class->vtable[0];
_456 = _455(_452);
_457 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_450, _456);
_458 = ((frost$core$Object*) _457);
frost$core$Frost$ref$frost$core$Object$Q(_458);
_460 = ((frost$core$Object*) _457);
frost$core$Frost$unref$frost$core$Object$Q(_460);
_462 = ((frost$core$Object*) _456);
frost$core$Frost$unref$frost$core$Object$Q(_462);
_465 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_457, &$s40);
_466 = *(&local17);
_467 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_465, _466);
_468 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_467, &$s41);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Bench.frost:24:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_468);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s42);
_478 = ((frost$core$Object*) _468);
frost$core$Frost$unref$frost$core$Object$Q(_478);
_480 = ((frost$core$Object*) _467);
frost$core$Frost$unref$frost$core$Object$Q(_480);
_482 = ((frost$core$Object*) _465);
frost$core$Frost$unref$frost$core$Object$Q(_482);
_484 = ((frost$core$Object*) _457);
frost$core$Frost$unref$frost$core$Object$Q(_484);
_486 = _452;
frost$core$Frost$unref$frost$core$Object$Q(_486);
_488 = ((frost$core$Object*) _450);
frost$core$Frost$unref$frost$core$Object$Q(_488);
_490 = ((frost$core$Object*) _442);
frost$core$Frost$unref$frost$core$Object$Q(_490);
_492 = _437;
frost$core$Frost$unref$frost$core$Object$Q(_492);
_494 = ((frost$core$Object*) _435);
frost$core$Frost$unref$frost$core$Object$Q(_494);
_496 = ((frost$core$Object*) _429);
frost$core$Frost$unref$frost$core$Object$Q(_496);
_498 = *(&local17);
_499 = ((frost$core$Object*) _498);
frost$core$Frost$unref$frost$core$Object$Q(_499);
*(&local17) = ((frost$core$String*) NULL);
_502 = *(&local14);
_503 = ((frost$core$Object*) _502);
frost$core$Frost$unref$frost$core$Object$Q(_503);
*(&local14) = ((frost$core$String*) NULL);
goto block16;
block16:;
_507 = *(&local9);
_508 = ((frost$core$Object*) _507);
frost$core$Frost$unref$frost$core$Object$Q(_508);
*(&local9) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:28
_513 = *(&local5);
_514 = &_513->errorCount;
_515 = *_514;
_516 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Bench.frost:28:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_519 = _515.value;
_520 = _516.value;
_521 = _519 == _520;
_522 = (frost$core$Bit) {_521};
_524 = _522.value;
if (_524) goto block33; else goto block34;
block34:;
_526 = (frost$core$Int) {28u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s43, _526);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:29
// begin inline call to function frost.core.String.get_asString():frost.core.String from Bench.frost:29:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_532 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_532);
_535 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param1, &$s44);
_536 = *(&local0);
_537 = ($fn45) _536->$class->vtable[4];
_538 = _537(_536);
frost$core$Real64$wrapper* $tmp46;
$tmp46 = (frost$core$Real64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Real64$wrapperclass);
$tmp46->value = _538;
_539 = ((frost$core$Object*) $tmp46);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:29:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_542 = ($fn47) _539->$class->vtable[0];
_543 = _542(_539);
_544 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_535, _543);
_545 = ((frost$core$Object*) _544);
frost$core$Frost$ref$frost$core$Object$Q(_545);
_547 = ((frost$core$Object*) _544);
frost$core$Frost$unref$frost$core$Object$Q(_547);
_549 = ((frost$core$Object*) _543);
frost$core$Frost$unref$frost$core$Object$Q(_549);
_552 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_544, &$s48);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Bench.frost:29:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_552);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s49);
_562 = ((frost$core$Object*) _552);
frost$core$Frost$unref$frost$core$Object$Q(_562);
_564 = ((frost$core$Object*) _544);
frost$core$Frost$unref$frost$core$Object$Q(_564);
_566 = _539;
frost$core$Frost$unref$frost$core$Object$Q(_566);
_568 = ((frost$core$Object*) _535);
frost$core$Frost$unref$frost$core$Object$Q(_568);
_570 = ((frost$core$Object*) param1);
frost$core$Frost$unref$frost$core$Object$Q(_570);
_572 = *(&local5);
_573 = ((frost$core$Object*) _572);
frost$core$Frost$unref$frost$core$Object$Q(_573);
*(&local5) = ((org$frostlang$frostc$Compiler*) NULL);
_576 = *(&local4);
_577 = ((frost$core$Object*) _576);
frost$core$Frost$unref$frost$core$Object$Q(_577);
*(&local4) = ((org$frostlang$frostc$LLVMCodeGenerator*) NULL);
_580 = *(&local3);
_581 = ((frost$core$Object*) _580);
frost$core$Frost$unref$frost$core$Object$Q(_581);
*(&local3) = ((frost$io$MemoryOutputStream*) NULL);
_584 = *(&local2);
_585 = ((frost$core$Object*) _584);
frost$core$Frost$unref$frost$core$Object$Q(_585);
*(&local2) = ((frost$threads$MessageQueue*) NULL);
_588 = *(&local1);
_589 = ((frost$core$Object*) _588);
frost$core$Frost$unref$frost$core$Object$Q(_589);
*(&local1) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
_592 = *(&local0);
_593 = ((frost$core$Object*) _592);
frost$core$Frost$unref$frost$core$Object$Q(_593);
*(&local0) = ((frost$time$Timer*) NULL);
return;

}
void org$frostlang$frostc$Bench$bench$frost$core$String$frost$core$String(org$frostlang$frostc$Bench* param0, frost$core$String* param1, frost$core$String* param2) {

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
void org$frostlang$frostc$Bench$run(org$frostlang$frostc$Bench* param0) {

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
frost$core$Maybe* _26;
frost$core$Int* _27;
frost$core$Int _28;
int64_t _29;
bool _30;
frost$core$Error** _32;
frost$core$Error* _33;
frost$core$Object* _34;
frost$core$Object* _37;
frost$io$File* _39;
frost$core$Object* _40;
frost$core$Error* _156;
frost$core$Object* _157;
$fn57 _160;
frost$core$String* _161;
frost$core$Object* _168;
frost$core$Int _173;
frost$core$Object** _44;
frost$core$Object* _45;
frost$core$String* _46;
$fn58 _47;
frost$core$Object* _49;
frost$core$MutableString* _52;
frost$core$Object* _55;
frost$core$MutableString* _57;
frost$core$Object* _58;
frost$core$Object* _61;
frost$core$Int _64;
frost$core$Int _65;
frost$core$Bit _66;
frost$core$Range$LTfrost$core$Int$GT _67;
frost$core$Int _68;
frost$core$Int _70;
frost$core$Bit _71;
bool _72;
frost$core$Int _73;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _79;
int64_t _81;
int64_t _82;
bool _83;
frost$core$Bit _84;
bool _85;
frost$core$MutableString* _88;
frost$core$Int _89;
frost$core$Object* _90;
$fn59 _93;
frost$core$String* _94;
frost$core$String* _95;
frost$core$Object* _96;
frost$core$Object* _98;
frost$core$Object* _100;
frost$core$String* _103;
frost$core$Object* _105;
frost$core$Object* _107;
frost$core$Object* _109;
frost$core$Int _112;
int64_t _113;
int64_t _114;
int64_t _115;
frost$core$Int _116;
int64_t _118;
int64_t _119;
bool _120;
frost$core$Bit _121;
bool _122;
int64_t _124;
int64_t _125;
bool _126;
frost$core$Bit _127;
bool _128;
int64_t _130;
int64_t _131;
int64_t _132;
frost$core$Int _133;
frost$core$MutableString* _137;
frost$core$MutableString* _140;
frost$core$String* _141;
$fn60 _142;
frost$core$Object* _144;
frost$core$MutableString* _146;
frost$core$Object* _147;
frost$io$File* _150;
frost$core$Object* _151;
frost$core$Error* _176;
frost$core$Object* _177;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:38
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:39
_3 = ($fn61) param0->$class->vtable[3];
_3(param0, &$s62, &$s63);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:40
FROST_ASSERT(24 == sizeof(frost$io$File));
_6 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
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
_26 = _25;
_27 = &_26->$rawValue;
_28 = *_27;
_29 = _28.value;
_30 = _29 == 0u;
if (_30) goto block3; else goto block4;
block4:;
_32 = (frost$core$Error**) (_25->$data + 0);
_33 = *_32;
_34 = ((frost$core$Object*) _33);
frost$core$Frost$ref$frost$core$Object$Q(_34);
*(&local0) = _33;
_37 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = *(&local1);
_40 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_40);
*(&local1) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:50
_156 = *(&local0);
_157 = ((frost$core$Object*) _156);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from Bench.frost:50:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
_160 = ($fn65) _157->$class->vtable[0];
_161 = _160(_157);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(_161);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
_168 = ((frost$core$Object*) _161);
frost$core$Frost$unref$frost$core$Object$Q(_168);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:51
frost$core$System$crash();
_173 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s66, _173, &$s67);
abort(); // unreachable
block3:;
_44 = (frost$core$Object**) (_25->$data + 0);
_45 = *_44;
_46 = ((frost$core$String*) _45);
_47 = ($fn68) param0->$class->vtable[3];
_47(param0, &$s69, _46);
_49 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_49);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:42
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
_52 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String(_52, &$s70);
*(&local2) = ((frost$core$MutableString*) NULL);
_55 = ((frost$core$Object*) _52);
frost$core$Frost$ref$frost$core$Object$Q(_55);
_57 = *(&local2);
_58 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_58);
*(&local2) = _52;
_61 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_61);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:43
_64 = (frost$core$Int) {1u};
_65 = (frost$core$Int) {10000u};
_66 = (frost$core$Bit) {true};
_67 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_64, _65, _66);
_68 = _67.min;
*(&local3) = _68;
_70 = _67.max;
_71 = _67.inclusive;
_72 = _71.value;
_73 = (frost$core$Int) {1u};
if (_72) goto block8; else goto block9;
block8:;
_75 = _68.value;
_76 = _70.value;
_77 = _75 <= _76;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block5; else goto block6;
block9:;
_81 = _68.value;
_82 = _70.value;
_83 = _81 < _82;
_84 = (frost$core$Bit) {_83};
_85 = _84.value;
if (_85) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:44
_88 = *(&local2);
_89 = *(&local3);
frost$core$Int$wrapper* $tmp71;
$tmp71 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp71->value = _89;
_90 = ((frost$core$Object*) $tmp71);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Bench.frost:44:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_93 = ($fn72) _90->$class->vtable[0];
_94 = _93(_90);
_95 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s73, _94);
_96 = ((frost$core$Object*) _95);
frost$core$Frost$ref$frost$core$Object$Q(_96);
_98 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_98);
_100 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_100);
_103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_95, &$s74);
frost$core$MutableString$append$frost$core$String(_88, _103);
_105 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_107);
_109 = _90;
frost$core$Frost$unref$frost$core$Object$Q(_109);
_112 = *(&local3);
_113 = _70.value;
_114 = _112.value;
_115 = _113 - _114;
_116 = (frost$core$Int) {_115};
if (_72) goto block12; else goto block13;
block12:;
_118 = _116.value;
_119 = _73.value;
_120 = _118 >= _119;
_121 = (frost$core$Bit) {_120};
_122 = _121.value;
if (_122) goto block11; else goto block6;
block13:;
_124 = _116.value;
_125 = _73.value;
_126 = _124 > _125;
_127 = (frost$core$Bit) {_126};
_128 = _127.value;
if (_128) goto block11; else goto block6;
block11:;
_130 = _112.value;
_131 = _73.value;
_132 = _130 + _131;
_133 = (frost$core$Int) {_132};
*(&local3) = _133;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:46
_137 = *(&local2);
frost$core$MutableString$append$frost$core$String(_137, &$s75);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:47
_140 = *(&local2);
_141 = frost$core$MutableString$finish$R$frost$core$String(_140);
_142 = ($fn76) param0->$class->vtable[3];
_142(param0, &$s77, _141);
_144 = ((frost$core$Object*) _141);
frost$core$Frost$unref$frost$core$Object$Q(_144);
_146 = *(&local2);
_147 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_147);
*(&local2) = ((frost$core$MutableString*) NULL);
_150 = *(&local1);
_151 = ((frost$core$Object*) _150);
frost$core$Frost$unref$frost$core$Object$Q(_151);
*(&local1) = ((frost$io$File*) NULL);
_176 = *(&local0);
_177 = ((frost$core$Object*) _176);
frost$core$Frost$unref$frost$core$Object$Q(_177);
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$Bench$init(org$frostlang$frostc$Bench* param0) {

return;

}
void org$frostlang$frostc$Bench$cleanup(org$frostlang$frostc$Bench* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Bench.frost:3
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

