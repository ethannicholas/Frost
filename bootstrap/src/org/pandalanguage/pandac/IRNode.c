#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Bit.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/Symbol.h"


org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit} };

typedef org$pandalanguage$pandac$Type* (*$fn243)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn256)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn271)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn273)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn276)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn335)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn388)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn439)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn442)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn456)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn460)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn472)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn478)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn484)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn486)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn500)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn506)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn512)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn514)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn536)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn551)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn561)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn566)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn572)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn578)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn580)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn594)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn599)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn605)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn611)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn613)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn615)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn623)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn628)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn638)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn644)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn650)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn652)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn661)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn666)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn672)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn678)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn680)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn685)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn691)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn697)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn699)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn715)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn726)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn731)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn737)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn743)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn745)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn753)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn763)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn779)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn782)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn786)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn829)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn835)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn841)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn843)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn856)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn862)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn868)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn870)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn875)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn881)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn887)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn889)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn898)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn903)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn909)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn915)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn917)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn943)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn969)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn975)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn981)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1012)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1030)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1074)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1081)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1101)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1107)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1113)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1127)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1152)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1158)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1164)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1208)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1214)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1220)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1244)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1250)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1256)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1264)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1270)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1276)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1287)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1308)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1341)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1347)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1353)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1433)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1448)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1465)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1552)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1558)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1564)(panda$collections$Iterator*);

static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s1278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s1336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x3a\x20", 17, -7730994269199854653, NULL };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3a\x20", 28, 2945252663019609900, NULL };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp2 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp3 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp2 = ((org$pandalanguage$pandac$IRNode*) $tmp3);
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp5 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp4 = ((org$pandalanguage$pandac$IRNode*) $tmp5);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp6 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp6 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp7 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        panda$core$Object* $tmp8 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp7 = ((org$pandalanguage$pandac$Type*) $tmp8);
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp9 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp10 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp9 = ((org$pandalanguage$pandac$IRNode*) $tmp10);
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp11 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp11 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp12 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        panda$core$Object* $tmp13 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f4));
        *$tmp12 = ((org$pandalanguage$pandac$IRNode*) $tmp13);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp14 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp14 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp15 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        panda$core$Object* $tmp16 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp15 = ((org$pandalanguage$pandac$Type*) $tmp16);
    }
    panda$core$Bit* $tmp17 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp17 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp18 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp18 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp19 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$core$Object* $tmp20 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp19 = ((panda$collections$ImmutableArray*) $tmp20);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp21 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp21 = p_f0;
    {
        panda$core$String** $tmp22 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$Object* $tmp23 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp22 = ((panda$core$String*) $tmp23);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp24 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp24 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp25 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        panda$core$Object* $tmp26 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp25 = ((org$pandalanguage$pandac$Type*) $tmp26);
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp27 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        panda$core$Object* $tmp28 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp27 = ((org$pandalanguage$pandac$MethodRef*) $tmp28);
    }
    {
        panda$collections$ImmutableArray** $tmp29 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$core$Object* $tmp30 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp29 = ((panda$collections$ImmutableArray*) $tmp30);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp31 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp31 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp32 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp33 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp32 = ((org$pandalanguage$pandac$IRNode*) $tmp33);
    }
    {
        org$pandalanguage$pandac$Type** $tmp34 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        panda$core$Object* $tmp35 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp34 = ((org$pandalanguage$pandac$Type*) $tmp35);
    }
    panda$core$Bit* $tmp36 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp36 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp37 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp37 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp38 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        panda$core$Object* $tmp39 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp38 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp39);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp40 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp40 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp41 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp42 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp41 = ((org$pandalanguage$pandac$IRNode*) $tmp42);
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp43 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        panda$core$Object* $tmp44 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp43 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp44);
    }
    panda$core$Int64* $tmp45 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp45 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp46 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp46 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp47 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        panda$core$Object* $tmp48 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp47 = ((org$pandalanguage$pandac$Type*) $tmp48);
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp49 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp50 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp49 = ((org$pandalanguage$pandac$IRNode*) $tmp50);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp51 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp51 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp52 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        panda$core$Object* $tmp53 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp52 = ((org$pandalanguage$pandac$Type*) $tmp53);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp54 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        panda$core$Object* $tmp55 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f0));
        *$tmp54 = ((org$pandalanguage$pandac$IRNode*) $tmp55);
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp56 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        panda$core$Object* $tmp57 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp56 = ((org$pandalanguage$pandac$IRNode*) $tmp57);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp58 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp58 = p_f0;
    {
        panda$core$String** $tmp59 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$Object* $tmp60 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp59 = ((panda$core$String*) $tmp60);
    }
    {
        panda$collections$ImmutableArray** $tmp61 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp62 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp61 = ((panda$collections$ImmutableArray*) $tmp62);
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp63 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        panda$core$Object* $tmp64 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp63 = ((org$pandalanguage$pandac$IRNode*) $tmp64);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp65 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp65 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp66 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        panda$core$Object* $tmp67 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp66 = ((org$pandalanguage$pandac$Type*) $tmp67);
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp68 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp69 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp68 = ((org$pandalanguage$pandac$IRNode*) $tmp69);
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp70 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        panda$core$Object* $tmp71 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp70 = ((org$pandalanguage$pandac$FieldDecl*) $tmp71);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp72 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp72 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp73 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp74 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp73 = ((org$pandalanguage$pandac$IRNode*) $tmp74);
    }
    {
        panda$collections$ImmutableArray** $tmp75 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp76 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp75 = ((panda$collections$ImmutableArray*) $tmp76);
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp77 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        panda$core$Object* $tmp78 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp77 = ((org$pandalanguage$pandac$IRNode*) $tmp78);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp79 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp79 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp80 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        panda$core$Object* $tmp81 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp80 = ((org$pandalanguage$pandac$Type*) $tmp81);
    }
    panda$core$UInt64* $tmp82 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp82 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp83 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp83 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp84 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp85 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp84 = ((org$pandalanguage$pandac$IRNode*) $tmp85);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp86 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp86 = p_f0;
    {
        panda$core$String** $tmp87 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$Object* $tmp88 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp87 = ((panda$core$String*) $tmp88);
    }
    {
        panda$collections$ImmutableArray** $tmp89 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp90 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp89 = ((panda$collections$ImmutableArray*) $tmp90);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp91 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp91 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp92 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp93 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp92 = ((org$pandalanguage$pandac$IRNode*) $tmp93);
    }
    {
        panda$collections$ImmutableArray** $tmp94 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp95 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp94 = ((panda$collections$ImmutableArray*) $tmp95);
    }
    {
        panda$collections$ImmutableArray** $tmp96 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$core$Object* $tmp97 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp96 = ((panda$collections$ImmutableArray*) $tmp97);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$MethodRef* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp98 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp98 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp99 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp100 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp99 = ((org$pandalanguage$pandac$IRNode*) $tmp100);
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp101 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        panda$core$Object* $tmp102 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp101 = ((org$pandalanguage$pandac$MethodRef*) $tmp102);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp103 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp103 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp104 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp104 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp105 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp106 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp105 = ((org$pandalanguage$pandac$IRNode*) $tmp106);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp107 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp107 = p_f0;
    {
        panda$core$String** $tmp108 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$Object* $tmp109 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp108 = ((panda$core$String*) $tmp109);
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp110 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp111 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp110 = ((org$pandalanguage$pandac$IRNode*) $tmp111);
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp112 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        panda$core$Object* $tmp113 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp112 = ((org$pandalanguage$pandac$IRNode*) $tmp113);
    }
    {
        panda$collections$ImmutableArray** $tmp114 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        panda$core$Object* $tmp115 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f4));
        *$tmp114 = ((panda$collections$ImmutableArray*) $tmp115);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp116 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp116 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp117 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        panda$core$Object* $tmp118 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp117 = ((org$pandalanguage$pandac$Type*) $tmp118);
    }
    panda$core$Real64* $tmp119 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp119 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp120 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp120 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp121 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp122 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp121 = ((org$pandalanguage$pandac$IRNode*) $tmp122);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp123 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp123 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp124 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        panda$core$Object* $tmp125 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp124 = ((org$pandalanguage$pandac$Type*) $tmp125);
    }
    panda$core$Int64* $tmp126 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp126 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp127 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        panda$core$Object* $tmp128 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f0));
        *$tmp127 = ((org$pandalanguage$pandac$IRNode*) $tmp128);
    }
    panda$core$Int64* $tmp129 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp129 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp130 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp130 = p_f0;
    {
        panda$core$String** $tmp131 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$Object* $tmp132 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp131 = ((panda$core$String*) $tmp132);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp133 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp133 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp134 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp135 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp134 = ((org$pandalanguage$pandac$IRNode*) $tmp135);
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp136 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp137 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp136 = ((org$pandalanguage$pandac$IRNode*) $tmp137);
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp138 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        panda$core$Object* $tmp139 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp138 = ((org$pandalanguage$pandac$IRNode*) $tmp139);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp140 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp140 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp141 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        panda$core$Object* $tmp142 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp141 = ((org$pandalanguage$pandac$Type*) $tmp142);
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp143 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp144 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp143 = ((org$pandalanguage$pandac$IRNode*) $tmp144);
    }
    {
        panda$collections$ImmutableArray** $tmp145 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$core$Object* $tmp146 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp145 = ((panda$collections$ImmutableArray*) $tmp146);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp147 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp147 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp148 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        panda$core$Object* $tmp149 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp148 = ((org$pandalanguage$pandac$Type*) $tmp149);
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp150 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp151 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp150 = ((org$pandalanguage$pandac$IRNode*) $tmp151);
    }
    {
        panda$collections$ImmutableArray** $tmp152 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$core$Object* $tmp153 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp152 = ((panda$collections$ImmutableArray*) $tmp153);
    }
    {
        panda$collections$ImmutableArray** $tmp154 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        panda$core$Object* $tmp155 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f4));
        *$tmp154 = ((panda$collections$ImmutableArray*) $tmp155);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp156 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp156 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp157 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp158 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp157 = ((org$pandalanguage$pandac$IRNode*) $tmp158);
    }
    {
        panda$collections$ImmutableArray** $tmp159 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp160 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp159 = ((panda$collections$ImmutableArray*) $tmp160);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp161 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp161 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp162 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp163 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp162 = ((org$pandalanguage$pandac$IRNode*) $tmp163);
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp164 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp165 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp164 = ((org$pandalanguage$pandac$IRNode*) $tmp165);
    }
    panda$core$Bit* $tmp166 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp166 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp167 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        panda$core$Object* $tmp168 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f4));
        *$tmp167 = ((org$pandalanguage$pandac$IRNode*) $tmp168);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp169 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp169 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp170 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp170 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp171 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp172 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp171 = ((panda$collections$ImmutableArray*) $tmp172);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp173 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp173 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp174 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        panda$core$Object* $tmp175 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp174 = ((org$pandalanguage$pandac$Variable*) $tmp175);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp176 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp176 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp177 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$core$Object* $tmp178 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp177 = ((panda$collections$ImmutableArray*) $tmp178);
    }
    {
        panda$collections$ImmutableArray** $tmp179 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp180 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp179 = ((panda$collections$ImmutableArray*) $tmp180);
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp181 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp181 = p_f0;
    {
        panda$core$String** $tmp182 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$Object* $tmp183 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp182 = ((panda$core$String*) $tmp183);
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp184 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp185 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp184 = ((org$pandalanguage$pandac$IRNode*) $tmp185);
    }
    {
        panda$collections$ImmutableArray** $tmp186 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$core$Object* $tmp187 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp186 = ((panda$collections$ImmutableArray*) $tmp187);
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$63_9188;
    org$pandalanguage$pandac$Type* type190;
    org$pandalanguage$pandac$Type* type193;
    org$pandalanguage$pandac$Type* type196;
    org$pandalanguage$pandac$Type* type199;
    org$pandalanguage$pandac$ChoiceEntry* ce202;
    org$pandalanguage$pandac$ChoiceEntry* ce206;
    panda$core$Int64 field208;
    org$pandalanguage$pandac$Type* type212;
    org$pandalanguage$pandac$Type* type215;
    org$pandalanguage$pandac$Type* type218;
    org$pandalanguage$pandac$Type* type221;
    org$pandalanguage$pandac$IRNode* ref228;
    org$pandalanguage$pandac$Position $tmp233;
    org$pandalanguage$pandac$Type* type235;
    org$pandalanguage$pandac$Type* type238;
    org$pandalanguage$pandac$IRNode* base241;
    org$pandalanguage$pandac$Type* type246;
    org$pandalanguage$pandac$Type* type249;
    panda$core$Int64 id251;
    org$pandalanguage$pandac$IRNode* base254;
    org$pandalanguage$pandac$Type* type259;
    org$pandalanguage$pandac$Type* type264;
    org$pandalanguage$pandac$IRNode* ifTrue267;
    org$pandalanguage$pandac$IRNode* ifFalse269;
    org$pandalanguage$pandac$Type* type283;
    org$pandalanguage$pandac$Type* type286;
    org$pandalanguage$pandac$Variable* variable293;
    {
        $match$63_9188 = self;
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp189.value) {
        {
            org$pandalanguage$pandac$Type** $tmp191 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 16));
            type190 = *$tmp191;
            return type190;
        }
        }
        else {
        panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp192.value) {
        {
            org$pandalanguage$pandac$Type** $tmp194 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 16));
            type193 = *$tmp194;
            return type193;
        }
        }
        else {
        panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp195.value) {
        {
            org$pandalanguage$pandac$Type** $tmp197 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 16));
            type196 = *$tmp197;
            return type196;
        }
        }
        else {
        panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp198.value) {
        {
            org$pandalanguage$pandac$Type** $tmp200 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 24));
            type199 = *$tmp200;
            return type199;
        }
        }
        else {
        panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp201.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp203 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$63_9188->$data + 16));
            ce202 = *$tmp203;
            org$pandalanguage$pandac$Type* $tmp204 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp204;
        }
        }
        else {
        panda$core$Bit $tmp205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp205.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp207 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$63_9188->$data + 24));
            ce206 = *$tmp207;
            panda$core$Int64* $tmp209 = ((panda$core$Int64*) ((char*) $match$63_9188->$data + 32));
            field208 = *$tmp209;
            panda$core$Object* $tmp210 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce206->fields, field208);
            return ((org$pandalanguage$pandac$Type*) $tmp210);
        }
        }
        else {
        panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp211.value) {
        {
            org$pandalanguage$pandac$Type** $tmp213 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 16));
            type212 = *$tmp213;
            return type212;
        }
        }
        else {
        panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp214.value) {
        {
            org$pandalanguage$pandac$Type** $tmp216 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 16));
            type215 = *$tmp216;
            return type215;
        }
        }
        else {
        panda$core$Bit $tmp217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp217.value) {
        {
            org$pandalanguage$pandac$Type** $tmp219 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 16));
            type218 = *$tmp219;
            return type218;
        }
        }
        else {
        panda$core$Bit $tmp220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp220.value) {
        {
            org$pandalanguage$pandac$Type** $tmp222 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 16));
            type221 = *$tmp222;
            return type221;
        }
        }
        else {
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp223.value) {
        {
            org$pandalanguage$pandac$Type* $tmp224 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            return $tmp224;
        }
        }
        else {
        panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp225.value) {
        {
            org$pandalanguage$pandac$Type* $tmp226 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            return $tmp226;
        }
        }
        else {
        panda$core$Bit $tmp227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp227.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp229 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$63_9188->$data + 16));
            ref228 = *$tmp229;
            org$pandalanguage$pandac$Type* $tmp230 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp230->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp230->refCount.value = 1;
            org$pandalanguage$pandac$Position$init(&$tmp233);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp230, &$s232, ((panda$core$Int64) { 16 }), $tmp233, ((panda$core$Bit) { true }));
            return $tmp230;
        }
        }
        else {
        panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp234.value) {
        {
            org$pandalanguage$pandac$Type** $tmp236 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 16));
            type235 = *$tmp236;
            return type235;
        }
        }
        else {
        panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp237.value) {
        {
            org$pandalanguage$pandac$Type** $tmp239 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 16));
            type238 = *$tmp239;
            return type238;
        }
        }
        else {
        panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp240.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp242 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$63_9188->$data + 24));
            base241 = *$tmp242;
            org$pandalanguage$pandac$Type* $tmp244 = (($fn243) base241->$class->vtable[2])(base241);
            return $tmp244;
        }
        }
        else {
        panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp245.value) {
        {
            org$pandalanguage$pandac$Type** $tmp247 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 16));
            type246 = *$tmp247;
            return type246;
        }
        }
        else {
        panda$core$Bit $tmp248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp248.value) {
        {
            org$pandalanguage$pandac$Type** $tmp250 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 16));
            type249 = *$tmp250;
            panda$core$Int64* $tmp252 = ((panda$core$Int64*) ((char*) $match$63_9188->$data + 24));
            id251 = *$tmp252;
            return type249;
        }
        }
        else {
        panda$core$Bit $tmp253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp253.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp255 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$63_9188->$data + 0));
            base254 = *$tmp255;
            org$pandalanguage$pandac$Type* $tmp257 = (($fn256) base254->$class->vtable[2])(base254);
            return $tmp257;
        }
        }
        else {
        panda$core$Bit $tmp258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp258.value) {
        {
            org$pandalanguage$pandac$Type** $tmp260 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 16));
            type259 = *$tmp260;
            return type259;
        }
        }
        else {
        panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp261.value) {
        {
            org$pandalanguage$pandac$Type* $tmp262 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            return $tmp262;
        }
        }
        else {
        panda$core$Bit $tmp263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp263.value) {
        {
            org$pandalanguage$pandac$Type** $tmp265 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 16));
            type264 = *$tmp265;
            return type264;
        }
        }
        else {
        panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp266.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp268 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$63_9188->$data + 24));
            ifTrue267 = *$tmp268;
            org$pandalanguage$pandac$IRNode** $tmp270 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$63_9188->$data + 32));
            ifFalse269 = *$tmp270;
            org$pandalanguage$pandac$Type* $tmp272 = (($fn271) ifTrue267->$class->vtable[2])(ifTrue267);
            org$pandalanguage$pandac$Type* $tmp274 = (($fn273) ifFalse269->$class->vtable[2])(ifFalse269);
            panda$core$Bit $tmp275 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp272, $tmp274);
            PANDA_ASSERT($tmp275.value);
            org$pandalanguage$pandac$Type* $tmp277 = (($fn276) ifTrue267->$class->vtable[2])(ifTrue267);
            return $tmp277;
        }
        }
        else {
        panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp278.value) {
        {
            org$pandalanguage$pandac$Type* $tmp279 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            return $tmp279;
        }
        }
        else {
        panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp280.value) {
        {
            org$pandalanguage$pandac$Type* $tmp281 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp281;
        }
        }
        else {
        panda$core$Bit $tmp282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp282.value) {
        {
            org$pandalanguage$pandac$Type** $tmp284 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 16));
            type283 = *$tmp284;
            return type283;
        }
        }
        else {
        panda$core$Bit $tmp285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp285.value) {
        {
            org$pandalanguage$pandac$Type** $tmp287 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9188->$data + 16));
            type286 = *$tmp287;
            return type286;
        }
        }
        else {
        panda$core$Bit $tmp288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp288.value) {
        {
            org$pandalanguage$pandac$Type* $tmp289 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp289;
        }
        }
        else {
        panda$core$Bit $tmp290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp290.value) {
        {
            org$pandalanguage$pandac$Type* $tmp291 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp291;
        }
        }
        else {
        panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9188->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp292.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp294 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$63_9188->$data + 16));
            variable293 = *$tmp294;
            return variable293->type;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$131_9295;
    org$pandalanguage$pandac$Position position297;
    org$pandalanguage$pandac$Position position300;
    org$pandalanguage$pandac$Position position303;
    org$pandalanguage$pandac$Position position306;
    org$pandalanguage$pandac$Position position309;
    org$pandalanguage$pandac$Position position312;
    org$pandalanguage$pandac$Position position315;
    org$pandalanguage$pandac$Position position318;
    org$pandalanguage$pandac$Position position321;
    org$pandalanguage$pandac$Position position324;
    org$pandalanguage$pandac$Position position327;
    org$pandalanguage$pandac$Position position330;
    org$pandalanguage$pandac$IRNode* target333;
    org$pandalanguage$pandac$Position position338;
    org$pandalanguage$pandac$Position position341;
    org$pandalanguage$pandac$Position position344;
    org$pandalanguage$pandac$Position position347;
    org$pandalanguage$pandac$Position position350;
    org$pandalanguage$pandac$Position position353;
    org$pandalanguage$pandac$Position position356;
    org$pandalanguage$pandac$Position position359;
    org$pandalanguage$pandac$Position position362;
    org$pandalanguage$pandac$Position position365;
    org$pandalanguage$pandac$Position position368;
    org$pandalanguage$pandac$Position position371;
    org$pandalanguage$pandac$Position position374;
    org$pandalanguage$pandac$Position position377;
    org$pandalanguage$pandac$Position position380;
    org$pandalanguage$pandac$Position position383;
    org$pandalanguage$pandac$IRNode* base386;
    org$pandalanguage$pandac$Position position391;
    org$pandalanguage$pandac$Position position394;
    org$pandalanguage$pandac$Position position397;
    org$pandalanguage$pandac$Position position400;
    org$pandalanguage$pandac$Position position403;
    org$pandalanguage$pandac$Position position406;
    org$pandalanguage$pandac$Position position409;
    org$pandalanguage$pandac$Position position412;
    org$pandalanguage$pandac$Position position415;
    org$pandalanguage$pandac$Position position418;
    org$pandalanguage$pandac$Position position421;
    org$pandalanguage$pandac$Position position424;
    org$pandalanguage$pandac$Position position427;
    org$pandalanguage$pandac$Position position430;
    {
        $match$131_9295 = self;
        panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp296.value) {
        {
            org$pandalanguage$pandac$Position* $tmp298 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position297 = *$tmp298;
            return position297;
        }
        }
        else {
        panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp299.value) {
        {
            org$pandalanguage$pandac$Position* $tmp301 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position300 = *$tmp301;
            return position300;
        }
        }
        else {
        panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp302.value) {
        {
            org$pandalanguage$pandac$Position* $tmp304 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position303 = *$tmp304;
            return position303;
        }
        }
        else {
        panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp305.value) {
        {
            org$pandalanguage$pandac$Position* $tmp307 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position306 = *$tmp307;
            return position306;
        }
        }
        else {
        panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp308.value) {
        {
            org$pandalanguage$pandac$Position* $tmp310 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position309 = *$tmp310;
            return position309;
        }
        }
        else {
        panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp311.value) {
        {
            org$pandalanguage$pandac$Position* $tmp313 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position312 = *$tmp313;
            return position312;
        }
        }
        else {
        panda$core$Bit $tmp314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp314.value) {
        {
            org$pandalanguage$pandac$Position* $tmp316 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position315 = *$tmp316;
            return position315;
        }
        }
        else {
        panda$core$Bit $tmp317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp317.value) {
        {
            org$pandalanguage$pandac$Position* $tmp319 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position318 = *$tmp319;
            return position318;
        }
        }
        else {
        panda$core$Bit $tmp320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp320.value) {
        {
            org$pandalanguage$pandac$Position* $tmp322 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position321 = *$tmp322;
            return position321;
        }
        }
        else {
        panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp323.value) {
        {
            org$pandalanguage$pandac$Position* $tmp325 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position324 = *$tmp325;
            return position324;
        }
        }
        else {
        panda$core$Bit $tmp326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp326.value) {
        {
            org$pandalanguage$pandac$Position* $tmp328 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position327 = *$tmp328;
            return position327;
        }
        }
        else {
        panda$core$Bit $tmp329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp329.value) {
        {
            org$pandalanguage$pandac$Position* $tmp331 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position330 = *$tmp331;
            return position330;
        }
        }
        else {
        panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp332.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp334 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$131_9295->$data + 0));
            target333 = *$tmp334;
            org$pandalanguage$pandac$Position $tmp336 = (($fn335) target333->$class->vtable[3])(target333);
            return $tmp336;
        }
        }
        else {
        panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp337.value) {
        {
            org$pandalanguage$pandac$Position* $tmp339 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position338 = *$tmp339;
            return position338;
        }
        }
        else {
        panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp340.value) {
        {
            org$pandalanguage$pandac$Position* $tmp342 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position341 = *$tmp342;
            return position341;
        }
        }
        else {
        panda$core$Bit $tmp343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp343.value) {
        {
            org$pandalanguage$pandac$Position* $tmp345 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position344 = *$tmp345;
            return position344;
        }
        }
        else {
        panda$core$Bit $tmp346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp346.value) {
        {
            org$pandalanguage$pandac$Position* $tmp348 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position347 = *$tmp348;
            return position347;
        }
        }
        else {
        panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp349.value) {
        {
            org$pandalanguage$pandac$Position* $tmp351 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position350 = *$tmp351;
            return position350;
        }
        }
        else {
        panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp352.value) {
        {
            org$pandalanguage$pandac$Position* $tmp354 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position353 = *$tmp354;
            return position353;
        }
        }
        else {
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp355.value) {
        {
            org$pandalanguage$pandac$Position* $tmp357 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position356 = *$tmp357;
            return position356;
        }
        }
        else {
        panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp358.value) {
        {
            org$pandalanguage$pandac$Position* $tmp360 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position359 = *$tmp360;
            return position359;
        }
        }
        else {
        panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp361.value) {
        {
            org$pandalanguage$pandac$Position* $tmp363 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position362 = *$tmp363;
            return position362;
        }
        }
        else {
        panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp364.value) {
        {
            org$pandalanguage$pandac$Position* $tmp366 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position365 = *$tmp366;
            return position365;
        }
        }
        else {
        panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp367.value) {
        {
            org$pandalanguage$pandac$Position* $tmp369 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position368 = *$tmp369;
            return position368;
        }
        }
        else {
        panda$core$Bit $tmp370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp370.value) {
        {
            org$pandalanguage$pandac$Position* $tmp372 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position371 = *$tmp372;
            return position371;
        }
        }
        else {
        panda$core$Bit $tmp373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp373.value) {
        {
            org$pandalanguage$pandac$Position* $tmp375 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position374 = *$tmp375;
            return position374;
        }
        }
        else {
        panda$core$Bit $tmp376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp376.value) {
        {
            org$pandalanguage$pandac$Position* $tmp378 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position377 = *$tmp378;
            return position377;
        }
        }
        else {
        panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp379.value) {
        {
            org$pandalanguage$pandac$Position* $tmp381 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position380 = *$tmp381;
            return position380;
        }
        }
        else {
        panda$core$Bit $tmp382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp382.value) {
        {
            org$pandalanguage$pandac$Position* $tmp384 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position383 = *$tmp384;
            return position383;
        }
        }
        else {
        panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp385.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp387 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$131_9295->$data + 0));
            base386 = *$tmp387;
            org$pandalanguage$pandac$Position $tmp389 = (($fn388) base386->$class->vtable[3])(base386);
            return $tmp389;
        }
        }
        else {
        panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp390.value) {
        {
            org$pandalanguage$pandac$Position* $tmp392 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position391 = *$tmp392;
            return position391;
        }
        }
        else {
        panda$core$Bit $tmp393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp393.value) {
        {
            org$pandalanguage$pandac$Position* $tmp395 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position394 = *$tmp395;
            return position394;
        }
        }
        else {
        panda$core$Bit $tmp396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp396.value) {
        {
            org$pandalanguage$pandac$Position* $tmp398 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position397 = *$tmp398;
            return position397;
        }
        }
        else {
        panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp399.value) {
        {
            org$pandalanguage$pandac$Position* $tmp401 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position400 = *$tmp401;
            return position400;
        }
        }
        else {
        panda$core$Bit $tmp402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp402.value) {
        {
            org$pandalanguage$pandac$Position* $tmp404 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position403 = *$tmp404;
            return position403;
        }
        }
        else {
        panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp405.value) {
        {
            org$pandalanguage$pandac$Position* $tmp407 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position406 = *$tmp407;
            return position406;
        }
        }
        else {
        panda$core$Bit $tmp408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp408.value) {
        {
            org$pandalanguage$pandac$Position* $tmp410 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position409 = *$tmp410;
            return position409;
        }
        }
        else {
        panda$core$Bit $tmp411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp411.value) {
        {
            org$pandalanguage$pandac$Position* $tmp413 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position412 = *$tmp413;
            return position412;
        }
        }
        else {
        panda$core$Bit $tmp414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp414.value) {
        {
            org$pandalanguage$pandac$Position* $tmp416 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position415 = *$tmp416;
            return position415;
        }
        }
        else {
        panda$core$Bit $tmp417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp417.value) {
        {
            org$pandalanguage$pandac$Position* $tmp419 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position418 = *$tmp419;
            return position418;
        }
        }
        else {
        panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp420.value) {
        {
            org$pandalanguage$pandac$Position* $tmp422 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position421 = *$tmp422;
            return position421;
        }
        }
        else {
        panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp423.value) {
        {
            org$pandalanguage$pandac$Position* $tmp425 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position424 = *$tmp425;
            return position424;
        }
        }
        else {
        panda$core$Bit $tmp426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp426.value) {
        {
            org$pandalanguage$pandac$Position* $tmp428 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position427 = *$tmp428;
            return position427;
        }
        }
        else {
        panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9295->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp429.value) {
        {
            org$pandalanguage$pandac$Position* $tmp431 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9295->$data + 0));
            position430 = *$tmp431;
            return position430;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$226_9432;
    org$pandalanguage$pandac$IRNode* test434;
    org$pandalanguage$pandac$IRNode* msg436;
    org$pandalanguage$pandac$IRNode* left446;
    org$pandalanguage$pandac$parser$Token$Kind op448;
    org$pandalanguage$pandac$IRNode* right450;
    panda$core$Bit bit464;
    panda$collections$ImmutableArray* statements467;
    panda$collections$Iterator* s$Iter469;
    org$pandalanguage$pandac$IRNode* s481;
    panda$core$String* label489;
    org$pandalanguage$pandac$MethodRef* m492;
    panda$collections$ImmutableArray* args494;
    panda$collections$Iterator* arg$Iter497;
    org$pandalanguage$pandac$IRNode* arg509;
    org$pandalanguage$pandac$IRNode* value517;
    org$pandalanguage$pandac$Type* type519;
    org$pandalanguage$pandac$ChoiceEntry* ce522;
    org$pandalanguage$pandac$IRNode* base525;
    org$pandalanguage$pandac$ChoiceEntry* ce527;
    panda$core$Int64 field529;
    org$pandalanguage$pandac$Type* type532;
    org$pandalanguage$pandac$IRNode* call534;
    org$pandalanguage$pandac$Type* Type539;
    panda$core$String* label542;
    org$pandalanguage$pandac$IRNode* target545;
    org$pandalanguage$pandac$IRNode* value547;
    panda$core$String* label555;
    panda$collections$ImmutableArray* statements557;
    org$pandalanguage$pandac$IRNode* test559;
    panda$collections$Iterator* s$Iter563;
    org$pandalanguage$pandac$IRNode* s575;
    org$pandalanguage$pandac$IRNode* base583;
    org$pandalanguage$pandac$FieldDecl* field585;
    org$pandalanguage$pandac$IRNode* test588;
    panda$collections$ImmutableArray* ifTrue590;
    org$pandalanguage$pandac$IRNode* ifFalse592;
    panda$collections$Iterator* s$Iter596;
    org$pandalanguage$pandac$IRNode* s608;
    panda$core$UInt64 value618;
    org$pandalanguage$pandac$IRNode* value621;
    org$pandalanguage$pandac$IRNode* value626;
    panda$core$String* label631;
    panda$collections$ImmutableArray* statements633;
    panda$collections$Iterator* s$Iter635;
    org$pandalanguage$pandac$IRNode* s647;
    org$pandalanguage$pandac$IRNode* value655;
    panda$collections$ImmutableArray* whens657;
    panda$collections$ImmutableArray* other659;
    panda$collections$Iterator* w$Iter663;
    org$pandalanguage$pandac$IRNode* w675;
    panda$collections$Iterator* s$Iter682;
    org$pandalanguage$pandac$IRNode* s694;
    org$pandalanguage$pandac$IRNode* target702;
    org$pandalanguage$pandac$MethodRef* m704;
    panda$core$UInt64 value707;
    org$pandalanguage$pandac$parser$Token$Kind op711;
    org$pandalanguage$pandac$IRNode* base713;
    panda$core$String* label718;
    org$pandalanguage$pandac$IRNode* target720;
    org$pandalanguage$pandac$IRNode* list722;
    panda$collections$ImmutableArray* statements724;
    panda$collections$Iterator* s$Iter728;
    org$pandalanguage$pandac$IRNode* s740;
    panda$core$Real64 value748;
    org$pandalanguage$pandac$IRNode* value751;
    panda$core$Int64 id756;
    org$pandalanguage$pandac$IRNode* base759;
    panda$core$Int64 id761;
    panda$core$String* str767;
    org$pandalanguage$pandac$IRNode* test771;
    org$pandalanguage$pandac$IRNode* ifTrue773;
    org$pandalanguage$pandac$IRNode* ifFalse775;
    org$pandalanguage$pandac$Type* type790;
    panda$core$String* name793;
    org$pandalanguage$pandac$IRNode* base796;
    panda$collections$ImmutableArray* args798;
    org$pandalanguage$pandac$IRNode* target801;
    panda$collections$ImmutableArray* methods803;
    panda$collections$ImmutableArray* args805;
    org$pandalanguage$pandac$IRNode* target808;
    panda$collections$ImmutableArray* methods810;
    org$pandalanguage$pandac$IRNode* start813;
    org$pandalanguage$pandac$IRNode* end815;
    panda$core$Bit inclusive817;
    org$pandalanguage$pandac$IRNode* step819;
    org$pandalanguage$pandac$Variable$Kind kind822;
    panda$collections$ImmutableArray* decls824;
    panda$collections$Iterator* d$Iter826;
    org$pandalanguage$pandac$IRNode* d838;
    org$pandalanguage$pandac$Variable* variable846;
    panda$collections$ImmutableArray* tests849;
    panda$collections$ImmutableArray* statements851;
    panda$collections$Iterator* t$Iter853;
    org$pandalanguage$pandac$IRNode* t865;
    panda$collections$Iterator* s$Iter872;
    org$pandalanguage$pandac$IRNode* s884;
    panda$core$String* label892;
    org$pandalanguage$pandac$IRNode* test894;
    panda$collections$ImmutableArray* statements896;
    panda$collections$Iterator* s$Iter900;
    org$pandalanguage$pandac$IRNode* s912;
    {
        $match$226_9432 = self;
        panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp433.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp435 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 16));
            test434 = *$tmp435;
            org$pandalanguage$pandac$IRNode** $tmp437 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 24));
            msg436 = *$tmp437;
            panda$core$Bit $tmp440 = (($fn439) test434->$class->vtable[4])(test434);
            bool $tmp438 = $tmp440.value;
            if ($tmp438) goto $l441;
            panda$core$Bit $tmp443 = (($fn442) msg436->$class->vtable[4])(msg436);
            $tmp438 = $tmp443.value;
            $l441:;
            panda$core$Bit $tmp444 = { $tmp438 };
            return $tmp444;
        }
        }
        else {
        panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp445.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp447 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 24));
            left446 = *$tmp447;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp449 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$226_9432->$data + 32));
            op448 = *$tmp449;
            org$pandalanguage$pandac$IRNode** $tmp451 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 40));
            right450 = *$tmp451;
            panda$core$Bit $tmp454 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op448);
            bool $tmp453 = $tmp454.value;
            if ($tmp453) goto $l455;
            panda$core$Bit $tmp457 = (($fn456) left446->$class->vtable[4])(left446);
            $tmp453 = $tmp457.value;
            $l455:;
            panda$core$Bit $tmp458 = { $tmp453 };
            bool $tmp452 = $tmp458.value;
            if ($tmp452) goto $l459;
            panda$core$Bit $tmp461 = (($fn460) right450->$class->vtable[4])(right450);
            $tmp452 = $tmp461.value;
            $l459:;
            panda$core$Bit $tmp462 = { $tmp452 };
            return $tmp462;
        }
        }
        else {
        panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp463.value) {
        {
            panda$core$Bit* $tmp465 = ((panda$core$Bit*) ((char*) $match$226_9432->$data + 24));
            bit464 = *$tmp465;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp466.value) {
        {
            panda$collections$ImmutableArray** $tmp468 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 16));
            statements467 = *$tmp468;
            {
                ITable* $tmp470 = ((panda$collections$Iterable*) statements467)->$class->itable;
                while ($tmp470->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp470 = $tmp470->next;
                }
                $fn472 $tmp471 = $tmp470->methods[0];
                panda$collections$Iterator* $tmp473 = $tmp471(((panda$collections$Iterable*) statements467));
                s$Iter469 = $tmp473;
                $l474:;
                ITable* $tmp476 = s$Iter469->$class->itable;
                while ($tmp476->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp476 = $tmp476->next;
                }
                $fn478 $tmp477 = $tmp476->methods[0];
                panda$core$Bit $tmp479 = $tmp477(s$Iter469);
                panda$core$Bit $tmp480 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp479);
                if (!$tmp480.value) goto $l475;
                {
                    ITable* $tmp482 = s$Iter469->$class->itable;
                    while ($tmp482->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp482 = $tmp482->next;
                    }
                    $fn484 $tmp483 = $tmp482->methods[1];
                    panda$core$Object* $tmp485 = $tmp483(s$Iter469);
                    s481 = ((org$pandalanguage$pandac$IRNode*) $tmp485);
                    panda$core$Bit $tmp487 = (($fn486) s481->$class->vtable[4])(s481);
                    if ($tmp487.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l474;
                $l475:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp488.value) {
        {
            panda$core$String** $tmp490 = ((panda$core$String**) ((char*) $match$226_9432->$data + 16));
            label489 = *$tmp490;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp491.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp493 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$226_9432->$data + 24));
            m492 = *$tmp493;
            panda$collections$ImmutableArray** $tmp495 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 32));
            args494 = *$tmp495;
            panda$core$Bit $tmp496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m492->value->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp496.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp498 = ((panda$collections$Iterable*) args494)->$class->itable;
                while ($tmp498->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp498 = $tmp498->next;
                }
                $fn500 $tmp499 = $tmp498->methods[0];
                panda$collections$Iterator* $tmp501 = $tmp499(((panda$collections$Iterable*) args494));
                arg$Iter497 = $tmp501;
                $l502:;
                ITable* $tmp504 = arg$Iter497->$class->itable;
                while ($tmp504->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp504 = $tmp504->next;
                }
                $fn506 $tmp505 = $tmp504->methods[0];
                panda$core$Bit $tmp507 = $tmp505(arg$Iter497);
                panda$core$Bit $tmp508 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp507);
                if (!$tmp508.value) goto $l503;
                {
                    ITable* $tmp510 = arg$Iter497->$class->itable;
                    while ($tmp510->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp510 = $tmp510->next;
                    }
                    $fn512 $tmp511 = $tmp510->methods[1];
                    panda$core$Object* $tmp513 = $tmp511(arg$Iter497);
                    arg509 = ((org$pandalanguage$pandac$IRNode*) $tmp513);
                    panda$core$Bit $tmp515 = (($fn514) arg509->$class->vtable[4])(arg509);
                    if ($tmp515.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l502;
                $l503:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp516.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp518 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 16));
            value517 = *$tmp518;
            org$pandalanguage$pandac$Type** $tmp520 = ((org$pandalanguage$pandac$Type**) ((char*) $match$226_9432->$data + 24));
            type519 = *$tmp520;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp521.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp523 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$226_9432->$data + 16));
            ce522 = *$tmp523;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp524.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp526 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 16));
            base525 = *$tmp526;
            org$pandalanguage$pandac$ChoiceEntry** $tmp528 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$226_9432->$data + 24));
            ce527 = *$tmp528;
            panda$core$Int64* $tmp530 = ((panda$core$Int64*) ((char*) $match$226_9432->$data + 32));
            field529 = *$tmp530;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp531.value) {
        {
            org$pandalanguage$pandac$Type** $tmp533 = ((org$pandalanguage$pandac$Type**) ((char*) $match$226_9432->$data + 16));
            type532 = *$tmp533;
            org$pandalanguage$pandac$IRNode** $tmp535 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 24));
            call534 = *$tmp535;
            panda$core$Bit $tmp537 = (($fn536) call534->$class->vtable[4])(call534);
            return $tmp537;
        }
        }
        else {
        panda$core$Bit $tmp538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp538.value) {
        {
            org$pandalanguage$pandac$Type** $tmp540 = ((org$pandalanguage$pandac$Type**) ((char*) $match$226_9432->$data + 16));
            Type539 = *$tmp540;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp541.value) {
        {
            panda$core$String** $tmp543 = ((panda$core$String**) ((char*) $match$226_9432->$data + 16));
            label542 = *$tmp543;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp544.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp546 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 0));
            target545 = *$tmp546;
            org$pandalanguage$pandac$IRNode** $tmp548 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 8));
            value547 = *$tmp548;
            bool $tmp549 = ((panda$core$Bit) { value547 != NULL }).value;
            if (!$tmp549) goto $l550;
            panda$core$Bit $tmp552 = (($fn551) value547->$class->vtable[4])(value547);
            $tmp549 = $tmp552.value;
            $l550:;
            panda$core$Bit $tmp553 = { $tmp549 };
            return $tmp553;
        }
        }
        else {
        panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp554.value) {
        {
            panda$core$String** $tmp556 = ((panda$core$String**) ((char*) $match$226_9432->$data + 16));
            label555 = *$tmp556;
            panda$collections$ImmutableArray** $tmp558 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 24));
            statements557 = *$tmp558;
            org$pandalanguage$pandac$IRNode** $tmp560 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 32));
            test559 = *$tmp560;
            panda$core$Bit $tmp562 = (($fn561) test559->$class->vtable[4])(test559);
            if ($tmp562.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp564 = ((panda$collections$Iterable*) statements557)->$class->itable;
                while ($tmp564->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp564 = $tmp564->next;
                }
                $fn566 $tmp565 = $tmp564->methods[0];
                panda$collections$Iterator* $tmp567 = $tmp565(((panda$collections$Iterable*) statements557));
                s$Iter563 = $tmp567;
                $l568:;
                ITable* $tmp570 = s$Iter563->$class->itable;
                while ($tmp570->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp570 = $tmp570->next;
                }
                $fn572 $tmp571 = $tmp570->methods[0];
                panda$core$Bit $tmp573 = $tmp571(s$Iter563);
                panda$core$Bit $tmp574 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp573);
                if (!$tmp574.value) goto $l569;
                {
                    ITable* $tmp576 = s$Iter563->$class->itable;
                    while ($tmp576->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp576 = $tmp576->next;
                    }
                    $fn578 $tmp577 = $tmp576->methods[1];
                    panda$core$Object* $tmp579 = $tmp577(s$Iter563);
                    s575 = ((org$pandalanguage$pandac$IRNode*) $tmp579);
                    panda$core$Bit $tmp581 = (($fn580) s575->$class->vtable[4])(s575);
                    if ($tmp581.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l568;
                $l569:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp582.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp584 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 24));
            base583 = *$tmp584;
            org$pandalanguage$pandac$FieldDecl** $tmp586 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$226_9432->$data + 32));
            field585 = *$tmp586;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp587.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp589 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 16));
            test588 = *$tmp589;
            panda$collections$ImmutableArray** $tmp591 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 24));
            ifTrue590 = *$tmp591;
            org$pandalanguage$pandac$IRNode** $tmp593 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 32));
            ifFalse592 = *$tmp593;
            panda$core$Bit $tmp595 = (($fn594) test588->$class->vtable[4])(test588);
            if ($tmp595.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp597 = ((panda$collections$Iterable*) ifTrue590)->$class->itable;
                while ($tmp597->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp597 = $tmp597->next;
                }
                $fn599 $tmp598 = $tmp597->methods[0];
                panda$collections$Iterator* $tmp600 = $tmp598(((panda$collections$Iterable*) ifTrue590));
                s$Iter596 = $tmp600;
                $l601:;
                ITable* $tmp603 = s$Iter596->$class->itable;
                while ($tmp603->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp603 = $tmp603->next;
                }
                $fn605 $tmp604 = $tmp603->methods[0];
                panda$core$Bit $tmp606 = $tmp604(s$Iter596);
                panda$core$Bit $tmp607 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp606);
                if (!$tmp607.value) goto $l602;
                {
                    ITable* $tmp609 = s$Iter596->$class->itable;
                    while ($tmp609->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp609 = $tmp609->next;
                    }
                    $fn611 $tmp610 = $tmp609->methods[1];
                    panda$core$Object* $tmp612 = $tmp610(s$Iter596);
                    s608 = ((org$pandalanguage$pandac$IRNode*) $tmp612);
                    panda$core$Bit $tmp614 = (($fn613) s608->$class->vtable[4])(s608);
                    if ($tmp614.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l601;
                $l602:;
            }
            panda$core$Bit $tmp616 = (($fn615) ifFalse592->$class->vtable[4])(ifFalse592);
            return $tmp616;
        }
        }
        else {
        panda$core$Bit $tmp617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp617.value) {
        {
            panda$core$UInt64* $tmp619 = ((panda$core$UInt64*) ((char*) $match$226_9432->$data + 24));
            value618 = *$tmp619;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp620.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp622 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 16));
            value621 = *$tmp622;
            panda$core$Bit $tmp624 = (($fn623) value621->$class->vtable[4])(value621);
            return $tmp624;
        }
        }
        else {
        panda$core$Bit $tmp625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp625.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp627 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 16));
            value626 = *$tmp627;
            panda$core$Bit $tmp629 = (($fn628) value626->$class->vtable[4])(value626);
            return $tmp629;
        }
        }
        else {
        panda$core$Bit $tmp630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp630.value) {
        {
            panda$core$String** $tmp632 = ((panda$core$String**) ((char*) $match$226_9432->$data + 16));
            label631 = *$tmp632;
            panda$collections$ImmutableArray** $tmp634 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 24));
            statements633 = *$tmp634;
            {
                ITable* $tmp636 = ((panda$collections$Iterable*) statements633)->$class->itable;
                while ($tmp636->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp636 = $tmp636->next;
                }
                $fn638 $tmp637 = $tmp636->methods[0];
                panda$collections$Iterator* $tmp639 = $tmp637(((panda$collections$Iterable*) statements633));
                s$Iter635 = $tmp639;
                $l640:;
                ITable* $tmp642 = s$Iter635->$class->itable;
                while ($tmp642->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp642 = $tmp642->next;
                }
                $fn644 $tmp643 = $tmp642->methods[0];
                panda$core$Bit $tmp645 = $tmp643(s$Iter635);
                panda$core$Bit $tmp646 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp645);
                if (!$tmp646.value) goto $l641;
                {
                    ITable* $tmp648 = s$Iter635->$class->itable;
                    while ($tmp648->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp648 = $tmp648->next;
                    }
                    $fn650 $tmp649 = $tmp648->methods[1];
                    panda$core$Object* $tmp651 = $tmp649(s$Iter635);
                    s647 = ((org$pandalanguage$pandac$IRNode*) $tmp651);
                    panda$core$Bit $tmp653 = (($fn652) s647->$class->vtable[4])(s647);
                    if ($tmp653.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l640;
                $l641:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp654.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp656 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 16));
            value655 = *$tmp656;
            panda$collections$ImmutableArray** $tmp658 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 24));
            whens657 = *$tmp658;
            panda$collections$ImmutableArray** $tmp660 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 32));
            other659 = *$tmp660;
            panda$core$Bit $tmp662 = (($fn661) value655->$class->vtable[4])(value655);
            if ($tmp662.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp664 = ((panda$collections$Iterable*) whens657)->$class->itable;
                while ($tmp664->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp664 = $tmp664->next;
                }
                $fn666 $tmp665 = $tmp664->methods[0];
                panda$collections$Iterator* $tmp667 = $tmp665(((panda$collections$Iterable*) whens657));
                w$Iter663 = $tmp667;
                $l668:;
                ITable* $tmp670 = w$Iter663->$class->itable;
                while ($tmp670->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp670 = $tmp670->next;
                }
                $fn672 $tmp671 = $tmp670->methods[0];
                panda$core$Bit $tmp673 = $tmp671(w$Iter663);
                panda$core$Bit $tmp674 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp673);
                if (!$tmp674.value) goto $l669;
                {
                    ITable* $tmp676 = w$Iter663->$class->itable;
                    while ($tmp676->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp676 = $tmp676->next;
                    }
                    $fn678 $tmp677 = $tmp676->methods[1];
                    panda$core$Object* $tmp679 = $tmp677(w$Iter663);
                    w675 = ((org$pandalanguage$pandac$IRNode*) $tmp679);
                    panda$core$Bit $tmp681 = (($fn680) w675->$class->vtable[4])(w675);
                    if ($tmp681.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l668;
                $l669:;
            }
            {
                ITable* $tmp683 = ((panda$collections$Iterable*) other659)->$class->itable;
                while ($tmp683->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp683 = $tmp683->next;
                }
                $fn685 $tmp684 = $tmp683->methods[0];
                panda$collections$Iterator* $tmp686 = $tmp684(((panda$collections$Iterable*) other659));
                s$Iter682 = $tmp686;
                $l687:;
                ITable* $tmp689 = s$Iter682->$class->itable;
                while ($tmp689->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp689 = $tmp689->next;
                }
                $fn691 $tmp690 = $tmp689->methods[0];
                panda$core$Bit $tmp692 = $tmp690(s$Iter682);
                panda$core$Bit $tmp693 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp692);
                if (!$tmp693.value) goto $l688;
                {
                    ITable* $tmp695 = s$Iter682->$class->itable;
                    while ($tmp695->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp695 = $tmp695->next;
                    }
                    $fn697 $tmp696 = $tmp695->methods[1];
                    panda$core$Object* $tmp698 = $tmp696(s$Iter682);
                    s694 = ((org$pandalanguage$pandac$IRNode*) $tmp698);
                    panda$core$Bit $tmp700 = (($fn699) s694->$class->vtable[4])(s694);
                    if ($tmp700.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l687;
                $l688:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp701.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp703 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 16));
            target702 = *$tmp703;
            org$pandalanguage$pandac$MethodRef** $tmp705 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$226_9432->$data + 24));
            m704 = *$tmp705;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp706.value) {
        {
            panda$core$UInt64* $tmp708 = ((panda$core$UInt64*) ((char*) $match$226_9432->$data + 24));
            value707 = *$tmp708;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp709.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp710.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp712 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$226_9432->$data + 16));
            op711 = *$tmp712;
            org$pandalanguage$pandac$IRNode** $tmp714 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 24));
            base713 = *$tmp714;
            panda$core$Bit $tmp716 = (($fn715) base713->$class->vtable[4])(base713);
            return $tmp716;
        }
        }
        else {
        panda$core$Bit $tmp717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp717.value) {
        {
            panda$core$String** $tmp719 = ((panda$core$String**) ((char*) $match$226_9432->$data + 16));
            label718 = *$tmp719;
            org$pandalanguage$pandac$IRNode** $tmp721 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 24));
            target720 = *$tmp721;
            org$pandalanguage$pandac$IRNode** $tmp723 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 32));
            list722 = *$tmp723;
            panda$collections$ImmutableArray** $tmp725 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 40));
            statements724 = *$tmp725;
            panda$core$Bit $tmp727 = (($fn726) list722->$class->vtable[4])(list722);
            if ($tmp727.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp729 = ((panda$collections$Iterable*) statements724)->$class->itable;
                while ($tmp729->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp729 = $tmp729->next;
                }
                $fn731 $tmp730 = $tmp729->methods[0];
                panda$collections$Iterator* $tmp732 = $tmp730(((panda$collections$Iterable*) statements724));
                s$Iter728 = $tmp732;
                $l733:;
                ITable* $tmp735 = s$Iter728->$class->itable;
                while ($tmp735->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp735 = $tmp735->next;
                }
                $fn737 $tmp736 = $tmp735->methods[0];
                panda$core$Bit $tmp738 = $tmp736(s$Iter728);
                panda$core$Bit $tmp739 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp738);
                if (!$tmp739.value) goto $l734;
                {
                    ITable* $tmp741 = s$Iter728->$class->itable;
                    while ($tmp741->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp741 = $tmp741->next;
                    }
                    $fn743 $tmp742 = $tmp741->methods[1];
                    panda$core$Object* $tmp744 = $tmp742(s$Iter728);
                    s740 = ((org$pandalanguage$pandac$IRNode*) $tmp744);
                    panda$core$Bit $tmp746 = (($fn745) s740->$class->vtable[4])(s740);
                    if ($tmp746.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l733;
                $l734:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp747.value) {
        {
            panda$core$Real64* $tmp749 = ((panda$core$Real64*) ((char*) $match$226_9432->$data + 24));
            value748 = *$tmp749;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp750.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp752 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 16));
            value751 = *$tmp752;
            panda$core$Bit $tmp754 = (($fn753) value751->$class->vtable[4])(value751);
            return $tmp754;
        }
        }
        else {
        panda$core$Bit $tmp755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp755.value) {
        {
            panda$core$Int64* $tmp757 = ((panda$core$Int64*) ((char*) $match$226_9432->$data + 24));
            id756 = *$tmp757;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp758.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp760 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 0));
            base759 = *$tmp760;
            panda$core$Int64* $tmp762 = ((panda$core$Int64*) ((char*) $match$226_9432->$data + 8));
            id761 = *$tmp762;
            panda$core$Bit $tmp764 = (($fn763) base759->$class->vtable[4])(base759);
            return $tmp764;
        }
        }
        else {
        panda$core$Bit $tmp765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp765.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp766.value) {
        {
            panda$core$String** $tmp768 = ((panda$core$String**) ((char*) $match$226_9432->$data + 16));
            str767 = *$tmp768;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp769.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp770.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp772 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 16));
            test771 = *$tmp772;
            org$pandalanguage$pandac$IRNode** $tmp774 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 24));
            ifTrue773 = *$tmp774;
            org$pandalanguage$pandac$IRNode** $tmp776 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 32));
            ifFalse775 = *$tmp776;
            panda$core$Bit $tmp780 = (($fn779) test771->$class->vtable[4])(test771);
            bool $tmp778 = $tmp780.value;
            if ($tmp778) goto $l781;
            panda$core$Bit $tmp783 = (($fn782) ifTrue773->$class->vtable[4])(ifTrue773);
            $tmp778 = $tmp783.value;
            $l781:;
            panda$core$Bit $tmp784 = { $tmp778 };
            bool $tmp777 = $tmp784.value;
            if ($tmp777) goto $l785;
            panda$core$Bit $tmp787 = (($fn786) ifFalse775->$class->vtable[4])(ifFalse775);
            $tmp777 = $tmp787.value;
            $l785:;
            panda$core$Bit $tmp788 = { $tmp777 };
            return $tmp788;
        }
        }
        else {
        panda$core$Bit $tmp789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp789.value) {
        {
            org$pandalanguage$pandac$Type** $tmp791 = ((org$pandalanguage$pandac$Type**) ((char*) $match$226_9432->$data + 16));
            type790 = *$tmp791;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp792.value) {
        {
            panda$core$String** $tmp794 = ((panda$core$String**) ((char*) $match$226_9432->$data + 16));
            name793 = *$tmp794;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp795.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp797 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 24));
            base796 = *$tmp797;
            panda$collections$ImmutableArray** $tmp799 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 32));
            args798 = *$tmp799;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp800.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp802 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 24));
            target801 = *$tmp802;
            panda$collections$ImmutableArray** $tmp804 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 32));
            methods803 = *$tmp804;
            panda$collections$ImmutableArray** $tmp806 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 40));
            args805 = *$tmp806;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp807.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp809 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 16));
            target808 = *$tmp809;
            panda$collections$ImmutableArray** $tmp811 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 24));
            methods810 = *$tmp811;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp812.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp814 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 16));
            start813 = *$tmp814;
            org$pandalanguage$pandac$IRNode** $tmp816 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 24));
            end815 = *$tmp816;
            panda$core$Bit* $tmp818 = ((panda$core$Bit*) ((char*) $match$226_9432->$data + 32));
            inclusive817 = *$tmp818;
            org$pandalanguage$pandac$IRNode** $tmp820 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 33));
            step819 = *$tmp820;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp821.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp823 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$226_9432->$data + 16));
            kind822 = *$tmp823;
            panda$collections$ImmutableArray** $tmp825 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 24));
            decls824 = *$tmp825;
            {
                ITable* $tmp827 = ((panda$collections$Iterable*) decls824)->$class->itable;
                while ($tmp827->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp827 = $tmp827->next;
                }
                $fn829 $tmp828 = $tmp827->methods[0];
                panda$collections$Iterator* $tmp830 = $tmp828(((panda$collections$Iterable*) decls824));
                d$Iter826 = $tmp830;
                $l831:;
                ITable* $tmp833 = d$Iter826->$class->itable;
                while ($tmp833->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp833 = $tmp833->next;
                }
                $fn835 $tmp834 = $tmp833->methods[0];
                panda$core$Bit $tmp836 = $tmp834(d$Iter826);
                panda$core$Bit $tmp837 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp836);
                if (!$tmp837.value) goto $l832;
                {
                    ITable* $tmp839 = d$Iter826->$class->itable;
                    while ($tmp839->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp839 = $tmp839->next;
                    }
                    $fn841 $tmp840 = $tmp839->methods[1];
                    panda$core$Object* $tmp842 = $tmp840(d$Iter826);
                    d838 = ((org$pandalanguage$pandac$IRNode*) $tmp842);
                    panda$core$Bit $tmp844 = (($fn843) d838->$class->vtable[4])(d838);
                    if ($tmp844.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l831;
                $l832:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp845.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp847 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$226_9432->$data + 16));
            variable846 = *$tmp847;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp848.value) {
        {
            panda$collections$ImmutableArray** $tmp850 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 16));
            tests849 = *$tmp850;
            panda$collections$ImmutableArray** $tmp852 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 24));
            statements851 = *$tmp852;
            {
                ITable* $tmp854 = ((panda$collections$Iterable*) tests849)->$class->itable;
                while ($tmp854->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp854 = $tmp854->next;
                }
                $fn856 $tmp855 = $tmp854->methods[0];
                panda$collections$Iterator* $tmp857 = $tmp855(((panda$collections$Iterable*) tests849));
                t$Iter853 = $tmp857;
                $l858:;
                ITable* $tmp860 = t$Iter853->$class->itable;
                while ($tmp860->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp860 = $tmp860->next;
                }
                $fn862 $tmp861 = $tmp860->methods[0];
                panda$core$Bit $tmp863 = $tmp861(t$Iter853);
                panda$core$Bit $tmp864 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp863);
                if (!$tmp864.value) goto $l859;
                {
                    ITable* $tmp866 = t$Iter853->$class->itable;
                    while ($tmp866->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp866 = $tmp866->next;
                    }
                    $fn868 $tmp867 = $tmp866->methods[1];
                    panda$core$Object* $tmp869 = $tmp867(t$Iter853);
                    t865 = ((org$pandalanguage$pandac$IRNode*) $tmp869);
                    panda$core$Bit $tmp871 = (($fn870) t865->$class->vtable[4])(t865);
                    if ($tmp871.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l858;
                $l859:;
            }
            {
                ITable* $tmp873 = ((panda$collections$Iterable*) statements851)->$class->itable;
                while ($tmp873->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp873 = $tmp873->next;
                }
                $fn875 $tmp874 = $tmp873->methods[0];
                panda$collections$Iterator* $tmp876 = $tmp874(((panda$collections$Iterable*) statements851));
                s$Iter872 = $tmp876;
                $l877:;
                ITable* $tmp879 = s$Iter872->$class->itable;
                while ($tmp879->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp879 = $tmp879->next;
                }
                $fn881 $tmp880 = $tmp879->methods[0];
                panda$core$Bit $tmp882 = $tmp880(s$Iter872);
                panda$core$Bit $tmp883 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp882);
                if (!$tmp883.value) goto $l878;
                {
                    ITable* $tmp885 = s$Iter872->$class->itable;
                    while ($tmp885->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp885 = $tmp885->next;
                    }
                    $fn887 $tmp886 = $tmp885->methods[1];
                    panda$core$Object* $tmp888 = $tmp886(s$Iter872);
                    s884 = ((org$pandalanguage$pandac$IRNode*) $tmp888);
                    panda$core$Bit $tmp890 = (($fn889) s884->$class->vtable[4])(s884);
                    if ($tmp890.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l877;
                $l878:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$226_9432->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp891.value) {
        {
            panda$core$String** $tmp893 = ((panda$core$String**) ((char*) $match$226_9432->$data + 16));
            label892 = *$tmp893;
            org$pandalanguage$pandac$IRNode** $tmp895 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$226_9432->$data + 24));
            test894 = *$tmp895;
            panda$collections$ImmutableArray** $tmp897 = ((panda$collections$ImmutableArray**) ((char*) $match$226_9432->$data + 32));
            statements896 = *$tmp897;
            panda$core$Bit $tmp899 = (($fn898) test894->$class->vtable[4])(test894);
            if ($tmp899.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp901 = ((panda$collections$Iterable*) statements896)->$class->itable;
                while ($tmp901->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp901 = $tmp901->next;
                }
                $fn903 $tmp902 = $tmp901->methods[0];
                panda$collections$Iterator* $tmp904 = $tmp902(((panda$collections$Iterable*) statements896));
                s$Iter900 = $tmp904;
                $l905:;
                ITable* $tmp907 = s$Iter900->$class->itable;
                while ($tmp907->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp907 = $tmp907->next;
                }
                $fn909 $tmp908 = $tmp907->methods[0];
                panda$core$Bit $tmp910 = $tmp908(s$Iter900);
                panda$core$Bit $tmp911 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp910);
                if (!$tmp911.value) goto $l906;
                {
                    ITable* $tmp913 = s$Iter900->$class->itable;
                    while ($tmp913->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp913 = $tmp913->next;
                    }
                    $fn915 $tmp914 = $tmp913->methods[1];
                    panda$core$Object* $tmp916 = $tmp914(s$Iter900);
                    s912 = ((org$pandalanguage$pandac$IRNode*) $tmp916);
                    panda$core$Bit $tmp918 = (($fn917) s912->$class->vtable[4])(s912);
                    if ($tmp918.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l905;
                $l906:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$401_9919;
    org$pandalanguage$pandac$IRNode* test921;
    org$pandalanguage$pandac$IRNode* msg923;
    org$pandalanguage$pandac$IRNode* left937;
    org$pandalanguage$pandac$parser$Token$Kind op939;
    org$pandalanguage$pandac$IRNode* right941;
    panda$core$Bit bit955;
    panda$collections$ImmutableArray* statements959;
    panda$core$MutableString* result961;
    panda$collections$Iterator* s$Iter966;
    org$pandalanguage$pandac$IRNode* s978;
    panda$core$Char8 $tmp985;
    panda$core$String* label988;
    org$pandalanguage$pandac$MethodRef* m996;
    panda$collections$ImmutableArray* args998;
    org$pandalanguage$pandac$IRNode* value1008;
    org$pandalanguage$pandac$Type* type1010;
    org$pandalanguage$pandac$ChoiceEntry* ce1020;
    org$pandalanguage$pandac$IRNode* base1024;
    org$pandalanguage$pandac$ChoiceEntry* ce1026;
    panda$core$Int64 field1028;
    org$pandalanguage$pandac$Type* type1042;
    org$pandalanguage$pandac$IRNode* call1044;
    org$pandalanguage$pandac$IRNode* $match$432_171046;
    panda$collections$ImmutableArray* args1048;
    org$pandalanguage$pandac$Type* Type1058;
    panda$core$String* label1062;
    org$pandalanguage$pandac$IRNode* target1070;
    org$pandalanguage$pandac$IRNode* value1072;
    panda$core$String* label1084;
    panda$collections$ImmutableArray* statements1086;
    org$pandalanguage$pandac$IRNode* test1088;
    panda$core$MutableString* result1090;
    panda$collections$Iterator* s$Iter1098;
    org$pandalanguage$pandac$IRNode* s1110;
    org$pandalanguage$pandac$IRNode* base1123;
    org$pandalanguage$pandac$FieldDecl* field1125;
    org$pandalanguage$pandac$IRNode* test1135;
    panda$collections$ImmutableArray* ifTrue1137;
    org$pandalanguage$pandac$IRNode* ifFalse1139;
    panda$core$MutableString* result1141;
    panda$collections$Iterator* s$Iter1149;
    org$pandalanguage$pandac$IRNode* s1161;
    panda$core$Char8 $tmp1168;
    panda$core$UInt64 value1175;
    org$pandalanguage$pandac$IRNode* value1179;
    org$pandalanguage$pandac$IRNode* value1186;
    panda$core$String* label1193;
    panda$collections$ImmutableArray* statements1195;
    panda$core$MutableString* result1197;
    panda$collections$Iterator* s$Iter1205;
    org$pandalanguage$pandac$IRNode* s1217;
    panda$core$Char8 $tmp1224;
    org$pandalanguage$pandac$IRNode* value1227;
    panda$collections$ImmutableArray* whens1229;
    panda$collections$ImmutableArray* other1231;
    panda$core$MutableString* result1233;
    panda$collections$Iterator* w$Iter1241;
    org$pandalanguage$pandac$IRNode* w1253;
    panda$collections$Iterator* s$Iter1261;
    org$pandalanguage$pandac$IRNode* s1273;
    panda$core$Char8 $tmp1280;
    org$pandalanguage$pandac$IRNode* target1283;
    org$pandalanguage$pandac$MethodRef* m1285;
    panda$core$UInt64 value1295;
    org$pandalanguage$pandac$parser$Token$Kind op1303;
    org$pandalanguage$pandac$IRNode* base1305;
    panda$core$String* label1316;
    org$pandalanguage$pandac$IRNode* target1318;
    org$pandalanguage$pandac$IRNode* list1320;
    panda$collections$ImmutableArray* statements1322;
    panda$core$MutableString* result1324;
    panda$collections$Iterator* s$Iter1338;
    org$pandalanguage$pandac$IRNode* s1350;
    panda$core$Char8 $tmp1357;
    panda$core$Real64 value1360;
    org$pandalanguage$pandac$IRNode* value1364;
    org$pandalanguage$pandac$Type* type1372;
    panda$core$Int64 id1374;
    org$pandalanguage$pandac$IRNode* base1385;
    panda$core$Int64 id1387;
    panda$core$String* str1400;
    org$pandalanguage$pandac$IRNode* test1405;
    org$pandalanguage$pandac$IRNode* ifTrue1407;
    org$pandalanguage$pandac$IRNode* ifFalse1409;
    org$pandalanguage$pandac$Type* type1422;
    panda$core$String* name1426;
    org$pandalanguage$pandac$IRNode* base1429;
    panda$collections$ImmutableArray* args1431;
    org$pandalanguage$pandac$IRNode* target1442;
    panda$collections$ImmutableArray* methods1444;
    panda$collections$ImmutableArray* args1446;
    org$pandalanguage$pandac$IRNode* target1461;
    panda$collections$ImmutableArray* methods1463;
    org$pandalanguage$pandac$IRNode* start1474;
    org$pandalanguage$pandac$IRNode* end1476;
    panda$core$Bit inclusive1478;
    org$pandalanguage$pandac$IRNode* step1480;
    panda$core$MutableString* result1482;
    org$pandalanguage$pandac$Variable$Kind kind1494;
    panda$collections$ImmutableArray* decls1496;
    panda$core$MutableString* result1498;
    org$pandalanguage$pandac$Variable$Kind $match$571_171502;
    org$pandalanguage$pandac$Variable* variable1514;
    panda$collections$ImmutableArray* tests1517;
    panda$collections$ImmutableArray* statements1519;
    panda$core$String* label1532;
    org$pandalanguage$pandac$IRNode* test1534;
    panda$collections$ImmutableArray* statements1536;
    panda$core$MutableString* result1538;
    panda$collections$Iterator* s$Iter1549;
    org$pandalanguage$pandac$IRNode* s1561;
    panda$core$Char8 $tmp1568;
    {
        $match$401_9919 = self;
        panda$core$Bit $tmp920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp920.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp922 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 16));
            test921 = *$tmp922;
            org$pandalanguage$pandac$IRNode** $tmp924 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 24));
            msg923 = *$tmp924;
            if (((panda$core$Bit) { msg923 != NULL }).value) {
            {
                panda$core$String* $tmp926 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s925, ((panda$core$Object*) test921));
                panda$core$String* $tmp928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp926, &$s927);
                panda$core$String* $tmp929 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp928, ((panda$core$Object*) msg923));
                panda$core$String* $tmp931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp929, &$s930);
                return $tmp931;
            }
            }
            panda$core$String* $tmp933 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s932, ((panda$core$Object*) test921));
            panda$core$String* $tmp935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp933, &$s934);
            return $tmp935;
        }
        }
        else {
        panda$core$Bit $tmp936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp936.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp938 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 24));
            left937 = *$tmp938;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp940 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$401_9919->$data + 32));
            op939 = *$tmp940;
            org$pandalanguage$pandac$IRNode** $tmp942 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 40));
            right941 = *$tmp942;
            panda$core$String* $tmp944 = (($fn943) left937->$class->vtable[0])(left937);
            panda$core$String* $tmp946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp944, &$s945);
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp947;
            $tmp947 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
            $tmp947->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp947->refCount = 1;
            $tmp947->value = op939;
            panda$core$String* $tmp948 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp946, ((panda$core$Object*) $tmp947));
            panda$core$String* $tmp950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp948, &$s949);
            panda$core$String* $tmp951 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp950, ((panda$core$Object*) right941));
            panda$core$String* $tmp953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp951, &$s952);
            return $tmp953;
        }
        }
        else {
        panda$core$Bit $tmp954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp954.value) {
        {
            panda$core$Bit* $tmp956 = ((panda$core$Bit*) ((char*) $match$401_9919->$data + 24));
            bit955 = *$tmp956;
            panda$core$String* $tmp957 = panda$core$Bit$convert$R$panda$core$String(bit955);
            return $tmp957;
        }
        }
        else {
        panda$core$Bit $tmp958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp958.value) {
        {
            panda$collections$ImmutableArray** $tmp960 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 16));
            statements959 = *$tmp960;
            panda$core$MutableString* $tmp962 = (panda$core$MutableString*) malloc(48);
            $tmp962->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp962->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp962, &$s964);
            panda$core$Object* $tmp965 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp962));
            result961 = ((panda$core$MutableString*) $tmp965);
            {
                ITable* $tmp967 = ((panda$collections$Iterable*) statements959)->$class->itable;
                while ($tmp967->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp967 = $tmp967->next;
                }
                $fn969 $tmp968 = $tmp967->methods[0];
                panda$collections$Iterator* $tmp970 = $tmp968(((panda$collections$Iterable*) statements959));
                s$Iter966 = $tmp970;
                $l971:;
                ITable* $tmp973 = s$Iter966->$class->itable;
                while ($tmp973->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp973 = $tmp973->next;
                }
                $fn975 $tmp974 = $tmp973->methods[0];
                panda$core$Bit $tmp976 = $tmp974(s$Iter966);
                panda$core$Bit $tmp977 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp976);
                if (!$tmp977.value) goto $l972;
                {
                    ITable* $tmp979 = s$Iter966->$class->itable;
                    while ($tmp979->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp979 = $tmp979->next;
                    }
                    $fn981 $tmp980 = $tmp979->methods[1];
                    panda$core$Object* $tmp982 = $tmp980(s$Iter966);
                    s978 = ((org$pandalanguage$pandac$IRNode*) $tmp982);
                    panda$core$String* $tmp984 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s978), &$s983);
                    panda$core$MutableString$append$panda$core$String(result961, $tmp984);
                }
                goto $l971;
                $l972:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp985, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result961, $tmp985);
            panda$core$String* $tmp986 = panda$core$MutableString$finish$R$panda$core$String(result961);
            return $tmp986;
        }
        }
        else {
        panda$core$Bit $tmp987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp987.value) {
        {
            panda$core$String** $tmp989 = ((panda$core$String**) ((char*) $match$401_9919->$data + 16));
            label988 = *$tmp989;
            if (((panda$core$Bit) { label988 != NULL }).value) {
            {
                panda$core$String* $tmp991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s990, label988);
                panda$core$String* $tmp993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp991, &$s992);
                return $tmp993;
            }
            }
            return &$s994;
        }
        }
        else {
        panda$core$Bit $tmp995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp995.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp997 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$401_9919->$data + 24));
            m996 = *$tmp997;
            panda$collections$ImmutableArray** $tmp999 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 32));
            args998 = *$tmp999;
            panda$core$String* $tmp1000 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m996->value)->name);
            panda$core$String* $tmp1002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1000, &$s1001);
            panda$core$String* $tmp1003 = panda$collections$ImmutableArray$join$R$panda$core$String(args998);
            panda$core$String* $tmp1004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1002, $tmp1003);
            panda$core$String* $tmp1006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1004, &$s1005);
            return $tmp1006;
        }
        }
        else {
        panda$core$Bit $tmp1007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1007.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1009 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 16));
            value1008 = *$tmp1009;
            org$pandalanguage$pandac$Type** $tmp1011 = ((org$pandalanguage$pandac$Type**) ((char*) $match$401_9919->$data + 24));
            type1010 = *$tmp1011;
            panda$core$String* $tmp1013 = (($fn1012) value1008->$class->vtable[0])(value1008);
            panda$core$String* $tmp1015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1013, &$s1014);
            panda$core$String* $tmp1016 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1015, ((panda$core$Object*) type1010));
            panda$core$String* $tmp1018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1016, &$s1017);
            return $tmp1018;
        }
        }
        else {
        panda$core$Bit $tmp1019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1019.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1021 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$401_9919->$data + 16));
            ce1020 = *$tmp1021;
            panda$core$String* $tmp1022 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce1020);
            return $tmp1022;
        }
        }
        else {
        panda$core$Bit $tmp1023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1023.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1025 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 16));
            base1024 = *$tmp1025;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1027 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$401_9919->$data + 24));
            ce1026 = *$tmp1027;
            panda$core$Int64* $tmp1029 = ((panda$core$Int64*) ((char*) $match$401_9919->$data + 32));
            field1028 = *$tmp1029;
            panda$core$String* $tmp1031 = (($fn1030) base1024->$class->vtable[0])(base1024);
            panda$core$String* $tmp1033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1031, &$s1032);
            panda$core$String* $tmp1034 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1033, ((panda$core$Object*) ce1026));
            panda$core$String* $tmp1036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1034, &$s1035);
            panda$core$Int64$wrapper* $tmp1037;
            $tmp1037 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp1037->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1037->refCount = 1;
            $tmp1037->value = field1028;
            panda$core$String* $tmp1038 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1036, ((panda$core$Object*) $tmp1037));
            panda$core$String* $tmp1040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1038, &$s1039);
            return $tmp1040;
        }
        }
        else {
        panda$core$Bit $tmp1041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1041.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1043 = ((org$pandalanguage$pandac$Type**) ((char*) $match$401_9919->$data + 16));
            type1042 = *$tmp1043;
            org$pandalanguage$pandac$IRNode** $tmp1045 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 24));
            call1044 = *$tmp1045;
            {
                $match$432_171046 = call1044;
                panda$core$Bit $tmp1047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$432_171046->$rawValue, ((panda$core$Int64) { 5 }));
                if ($tmp1047.value) {
                {
                    panda$collections$ImmutableArray** $tmp1049 = ((panda$collections$ImmutableArray**) ((char*) $match$432_171046->$data + 32));
                    args1048 = *$tmp1049;
                    panda$core$String* $tmp1050 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1042);
                    panda$core$String* $tmp1052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1050, &$s1051);
                    panda$core$String* $tmp1053 = panda$collections$ImmutableArray$join$R$panda$core$String(args1048);
                    panda$core$String* $tmp1054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1052, $tmp1053);
                    panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1054, &$s1055);
                    return $tmp1056;
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
        }
        }
        else {
        panda$core$Bit $tmp1057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1057.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1059 = ((org$pandalanguage$pandac$Type**) ((char*) $match$401_9919->$data + 16));
            Type1058 = *$tmp1059;
            return &$s1060;
        }
        }
        else {
        panda$core$Bit $tmp1061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1061.value) {
        {
            panda$core$String** $tmp1063 = ((panda$core$String**) ((char*) $match$401_9919->$data + 16));
            label1062 = *$tmp1063;
            if (((panda$core$Bit) { label1062 != NULL }).value) {
            {
                panda$core$String* $tmp1065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1064, label1062);
                panda$core$String* $tmp1067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1065, &$s1066);
                return $tmp1067;
            }
            }
            return &$s1068;
        }
        }
        else {
        panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1069.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1071 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 0));
            target1070 = *$tmp1071;
            org$pandalanguage$pandac$IRNode** $tmp1073 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 8));
            value1072 = *$tmp1073;
            if (((panda$core$Bit) { value1072 != NULL }).value) {
            {
                panda$core$String* $tmp1075 = (($fn1074) target1070->$class->vtable[0])(target1070);
                panda$core$String* $tmp1077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1075, &$s1076);
                panda$core$String* $tmp1078 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1077, ((panda$core$Object*) value1072));
                panda$core$String* $tmp1080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1078, &$s1079);
                return $tmp1080;
            }
            }
            panda$core$String* $tmp1082 = (($fn1081) target1070->$class->vtable[0])(target1070);
            return $tmp1082;
        }
        }
        else {
        panda$core$Bit $tmp1083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1083.value) {
        {
            panda$core$String** $tmp1085 = ((panda$core$String**) ((char*) $match$401_9919->$data + 16));
            label1084 = *$tmp1085;
            panda$collections$ImmutableArray** $tmp1087 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 24));
            statements1086 = *$tmp1087;
            org$pandalanguage$pandac$IRNode** $tmp1089 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 32));
            test1088 = *$tmp1089;
            panda$core$MutableString* $tmp1091 = (panda$core$MutableString*) malloc(48);
            $tmp1091->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1091->refCount.value = 1;
            panda$core$MutableString$init($tmp1091);
            panda$core$Object* $tmp1093 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1091));
            result1090 = ((panda$core$MutableString*) $tmp1093);
            if (((panda$core$Bit) { label1084 != NULL }).value) {
            {
                panda$core$String* $tmp1094 = panda$core$String$convert$R$panda$core$String(label1084);
                panda$core$String* $tmp1096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1094, &$s1095);
                panda$core$MutableString$append$panda$core$String(result1090, $tmp1096);
            }
            }
            panda$core$MutableString$append$panda$core$String(result1090, &$s1097);
            {
                ITable* $tmp1099 = ((panda$collections$Iterable*) statements1086)->$class->itable;
                while ($tmp1099->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1099 = $tmp1099->next;
                }
                $fn1101 $tmp1100 = $tmp1099->methods[0];
                panda$collections$Iterator* $tmp1102 = $tmp1100(((panda$collections$Iterable*) statements1086));
                s$Iter1098 = $tmp1102;
                $l1103:;
                ITable* $tmp1105 = s$Iter1098->$class->itable;
                while ($tmp1105->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1105 = $tmp1105->next;
                }
                $fn1107 $tmp1106 = $tmp1105->methods[0];
                panda$core$Bit $tmp1108 = $tmp1106(s$Iter1098);
                panda$core$Bit $tmp1109 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1108);
                if (!$tmp1109.value) goto $l1104;
                {
                    ITable* $tmp1111 = s$Iter1098->$class->itable;
                    while ($tmp1111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1111 = $tmp1111->next;
                    }
                    $fn1113 $tmp1112 = $tmp1111->methods[1];
                    panda$core$Object* $tmp1114 = $tmp1112(s$Iter1098);
                    s1110 = ((org$pandalanguage$pandac$IRNode*) $tmp1114);
                    panda$core$String* $tmp1116 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1110), &$s1115);
                    panda$core$MutableString$append$panda$core$String(result1090, $tmp1116);
                }
                goto $l1103;
                $l1104:;
            }
            panda$core$String* $tmp1118 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1117, ((panda$core$Object*) test1088));
            panda$core$String* $tmp1120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1118, &$s1119);
            panda$core$MutableString$append$panda$core$String(result1090, $tmp1120);
            panda$core$String* $tmp1121 = panda$core$MutableString$finish$R$panda$core$String(result1090);
            return $tmp1121;
        }
        }
        else {
        panda$core$Bit $tmp1122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1122.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1124 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 24));
            base1123 = *$tmp1124;
            org$pandalanguage$pandac$FieldDecl** $tmp1126 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$401_9919->$data + 32));
            field1125 = *$tmp1126;
            panda$core$String* $tmp1128 = (($fn1127) base1123->$class->vtable[0])(base1123);
            panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1128, &$s1129);
            panda$core$String* $tmp1131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1130, ((org$pandalanguage$pandac$Symbol*) field1125)->name);
            panda$core$String* $tmp1133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1131, &$s1132);
            return $tmp1133;
        }
        }
        else {
        panda$core$Bit $tmp1134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1134.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1136 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 16));
            test1135 = *$tmp1136;
            panda$collections$ImmutableArray** $tmp1138 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 24));
            ifTrue1137 = *$tmp1138;
            org$pandalanguage$pandac$IRNode** $tmp1140 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 32));
            ifFalse1139 = *$tmp1140;
            panda$core$MutableString* $tmp1142 = (panda$core$MutableString*) malloc(48);
            $tmp1142->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1142->refCount.value = 1;
            panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1144, ((panda$core$Object*) test1135));
            panda$core$String* $tmp1147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1145, &$s1146);
            panda$core$MutableString$init$panda$core$String($tmp1142, $tmp1147);
            panda$core$Object* $tmp1148 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1142));
            result1141 = ((panda$core$MutableString*) $tmp1148);
            {
                ITable* $tmp1150 = ((panda$collections$Iterable*) ifTrue1137)->$class->itable;
                while ($tmp1150->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1150 = $tmp1150->next;
                }
                $fn1152 $tmp1151 = $tmp1150->methods[0];
                panda$collections$Iterator* $tmp1153 = $tmp1151(((panda$collections$Iterable*) ifTrue1137));
                s$Iter1149 = $tmp1153;
                $l1154:;
                ITable* $tmp1156 = s$Iter1149->$class->itable;
                while ($tmp1156->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1156 = $tmp1156->next;
                }
                $fn1158 $tmp1157 = $tmp1156->methods[0];
                panda$core$Bit $tmp1159 = $tmp1157(s$Iter1149);
                panda$core$Bit $tmp1160 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1159);
                if (!$tmp1160.value) goto $l1155;
                {
                    ITable* $tmp1162 = s$Iter1149->$class->itable;
                    while ($tmp1162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1162 = $tmp1162->next;
                    }
                    $fn1164 $tmp1163 = $tmp1162->methods[1];
                    panda$core$Object* $tmp1165 = $tmp1163(s$Iter1149);
                    s1161 = ((org$pandalanguage$pandac$IRNode*) $tmp1165);
                    panda$core$String* $tmp1167 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1161), &$s1166);
                    panda$core$MutableString$append$panda$core$String(result1141, $tmp1167);
                }
                goto $l1154;
                $l1155:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1168, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1141, $tmp1168);
            if (((panda$core$Bit) { ifFalse1139 != NULL }).value) {
            {
                panda$core$String* $tmp1170 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1169, ((panda$core$Object*) ifFalse1139));
                panda$core$String* $tmp1172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1170, &$s1171);
                panda$core$MutableString$append$panda$core$String(result1141, $tmp1172);
            }
            }
            panda$core$String* $tmp1173 = panda$core$MutableString$finish$R$panda$core$String(result1141);
            return $tmp1173;
        }
        }
        else {
        panda$core$Bit $tmp1174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1174.value) {
        {
            panda$core$UInt64* $tmp1176 = ((panda$core$UInt64*) ((char*) $match$401_9919->$data + 24));
            value1175 = *$tmp1176;
            panda$core$String* $tmp1177 = panda$core$UInt64$convert$R$panda$core$String(value1175);
            return $tmp1177;
        }
        }
        else {
        panda$core$Bit $tmp1178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1178.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1180 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 16));
            value1179 = *$tmp1180;
            panda$core$String* $tmp1182 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1181, ((panda$core$Object*) value1179));
            panda$core$String* $tmp1184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1182, &$s1183);
            return $tmp1184;
        }
        }
        else {
        panda$core$Bit $tmp1185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1185.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1187 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 16));
            value1186 = *$tmp1187;
            panda$core$String* $tmp1189 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1188, ((panda$core$Object*) value1186));
            panda$core$String* $tmp1191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1189, &$s1190);
            return $tmp1191;
        }
        }
        else {
        panda$core$Bit $tmp1192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1192.value) {
        {
            panda$core$String** $tmp1194 = ((panda$core$String**) ((char*) $match$401_9919->$data + 16));
            label1193 = *$tmp1194;
            panda$collections$ImmutableArray** $tmp1196 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 24));
            statements1195 = *$tmp1196;
            panda$core$MutableString* $tmp1198 = (panda$core$MutableString*) malloc(48);
            $tmp1198->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1198->refCount.value = 1;
            panda$core$MutableString$init($tmp1198);
            panda$core$Object* $tmp1200 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1198));
            result1197 = ((panda$core$MutableString*) $tmp1200);
            if (((panda$core$Bit) { label1193 != NULL }).value) {
            {
                panda$core$String* $tmp1201 = panda$core$String$convert$R$panda$core$String(label1193);
                panda$core$String* $tmp1203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1201, &$s1202);
                panda$core$MutableString$append$panda$core$String(result1197, $tmp1203);
            }
            }
            panda$core$MutableString$append$panda$core$String(result1197, &$s1204);
            {
                ITable* $tmp1206 = ((panda$collections$Iterable*) statements1195)->$class->itable;
                while ($tmp1206->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1206 = $tmp1206->next;
                }
                $fn1208 $tmp1207 = $tmp1206->methods[0];
                panda$collections$Iterator* $tmp1209 = $tmp1207(((panda$collections$Iterable*) statements1195));
                s$Iter1205 = $tmp1209;
                $l1210:;
                ITable* $tmp1212 = s$Iter1205->$class->itable;
                while ($tmp1212->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1212 = $tmp1212->next;
                }
                $fn1214 $tmp1213 = $tmp1212->methods[0];
                panda$core$Bit $tmp1215 = $tmp1213(s$Iter1205);
                panda$core$Bit $tmp1216 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1215);
                if (!$tmp1216.value) goto $l1211;
                {
                    ITable* $tmp1218 = s$Iter1205->$class->itable;
                    while ($tmp1218->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1218 = $tmp1218->next;
                    }
                    $fn1220 $tmp1219 = $tmp1218->methods[1];
                    panda$core$Object* $tmp1221 = $tmp1219(s$Iter1205);
                    s1217 = ((org$pandalanguage$pandac$IRNode*) $tmp1221);
                    panda$core$String* $tmp1223 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1217), &$s1222);
                    panda$core$MutableString$append$panda$core$String(result1197, $tmp1223);
                }
                goto $l1210;
                $l1211:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1224, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1197, $tmp1224);
            panda$core$String* $tmp1225 = panda$core$MutableString$finish$R$panda$core$String(result1197);
            return $tmp1225;
        }
        }
        else {
        panda$core$Bit $tmp1226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1226.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1228 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 16));
            value1227 = *$tmp1228;
            panda$collections$ImmutableArray** $tmp1230 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 24));
            whens1229 = *$tmp1230;
            panda$collections$ImmutableArray** $tmp1232 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 32));
            other1231 = *$tmp1232;
            panda$core$MutableString* $tmp1234 = (panda$core$MutableString*) malloc(48);
            $tmp1234->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1234->refCount.value = 1;
            panda$core$String* $tmp1237 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1236, ((panda$core$Object*) value1227));
            panda$core$String* $tmp1239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1237, &$s1238);
            panda$core$MutableString$init$panda$core$String($tmp1234, $tmp1239);
            panda$core$Object* $tmp1240 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1234));
            result1233 = ((panda$core$MutableString*) $tmp1240);
            {
                ITable* $tmp1242 = ((panda$collections$Iterable*) whens1229)->$class->itable;
                while ($tmp1242->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1242 = $tmp1242->next;
                }
                $fn1244 $tmp1243 = $tmp1242->methods[0];
                panda$collections$Iterator* $tmp1245 = $tmp1243(((panda$collections$Iterable*) whens1229));
                w$Iter1241 = $tmp1245;
                $l1246:;
                ITable* $tmp1248 = w$Iter1241->$class->itable;
                while ($tmp1248->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1248 = $tmp1248->next;
                }
                $fn1250 $tmp1249 = $tmp1248->methods[0];
                panda$core$Bit $tmp1251 = $tmp1249(w$Iter1241);
                panda$core$Bit $tmp1252 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1251);
                if (!$tmp1252.value) goto $l1247;
                {
                    ITable* $tmp1254 = w$Iter1241->$class->itable;
                    while ($tmp1254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1254 = $tmp1254->next;
                    }
                    $fn1256 $tmp1255 = $tmp1254->methods[1];
                    panda$core$Object* $tmp1257 = $tmp1255(w$Iter1241);
                    w1253 = ((org$pandalanguage$pandac$IRNode*) $tmp1257);
                    panda$core$String* $tmp1259 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1253), &$s1258);
                    panda$core$MutableString$append$panda$core$String(result1233, $tmp1259);
                }
                goto $l1246;
                $l1247:;
            }
            if (((panda$core$Bit) { other1231 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result1233, &$s1260);
                {
                    ITable* $tmp1262 = ((panda$collections$Iterable*) other1231)->$class->itable;
                    while ($tmp1262->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1262 = $tmp1262->next;
                    }
                    $fn1264 $tmp1263 = $tmp1262->methods[0];
                    panda$collections$Iterator* $tmp1265 = $tmp1263(((panda$collections$Iterable*) other1231));
                    s$Iter1261 = $tmp1265;
                    $l1266:;
                    ITable* $tmp1268 = s$Iter1261->$class->itable;
                    while ($tmp1268->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1268 = $tmp1268->next;
                    }
                    $fn1270 $tmp1269 = $tmp1268->methods[0];
                    panda$core$Bit $tmp1271 = $tmp1269(s$Iter1261);
                    panda$core$Bit $tmp1272 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1271);
                    if (!$tmp1272.value) goto $l1267;
                    {
                        ITable* $tmp1274 = s$Iter1261->$class->itable;
                        while ($tmp1274->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1274 = $tmp1274->next;
                        }
                        $fn1276 $tmp1275 = $tmp1274->methods[1];
                        panda$core$Object* $tmp1277 = $tmp1275(s$Iter1261);
                        s1273 = ((org$pandalanguage$pandac$IRNode*) $tmp1277);
                        panda$core$String* $tmp1279 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1273), &$s1278);
                        panda$core$MutableString$append$panda$core$String(result1233, $tmp1279);
                    }
                    goto $l1266;
                    $l1267:;
                }
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1280, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1233, $tmp1280);
            panda$core$String* $tmp1281 = panda$core$MutableString$finish$R$panda$core$String(result1233);
            return $tmp1281;
        }
        }
        else {
        panda$core$Bit $tmp1282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1282.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1284 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 16));
            target1283 = *$tmp1284;
            org$pandalanguage$pandac$MethodRef** $tmp1286 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$401_9919->$data + 24));
            m1285 = *$tmp1286;
            panda$core$String* $tmp1288 = (($fn1287) target1283->$class->vtable[0])(target1283);
            panda$core$String* $tmp1290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1288, &$s1289);
            panda$core$String* $tmp1291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1290, ((org$pandalanguage$pandac$Symbol*) m1285->value)->name);
            panda$core$String* $tmp1293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1291, &$s1292);
            return $tmp1293;
        }
        }
        else {
        panda$core$Bit $tmp1294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1294.value) {
        {
            panda$core$UInt64* $tmp1296 = ((panda$core$UInt64*) ((char*) $match$401_9919->$data + 24));
            value1295 = *$tmp1296;
            panda$core$UInt64$wrapper* $tmp1298;
            $tmp1298 = (panda$core$UInt64$wrapper*) malloc(24);
            $tmp1298->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
            $tmp1298->refCount = 1;
            $tmp1298->value = value1295;
            panda$core$String* $tmp1299 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1297, ((panda$core$Object*) $tmp1298));
            return $tmp1299;
        }
        }
        else {
        panda$core$Bit $tmp1300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1300.value) {
        {
            return &$s1301;
        }
        }
        else {
        panda$core$Bit $tmp1302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1302.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1304 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$401_9919->$data + 16));
            op1303 = *$tmp1304;
            org$pandalanguage$pandac$IRNode** $tmp1306 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 24));
            base1305 = *$tmp1306;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1307;
            $tmp1307 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
            $tmp1307->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp1307->refCount = 1;
            $tmp1307->value = op1303;
            panda$core$String* $tmp1309 = (($fn1308) ((panda$core$Object*) $tmp1307)->$class->vtable[0])(((panda$core$Object*) $tmp1307));
            panda$core$String* $tmp1311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1309, &$s1310);
            panda$core$String* $tmp1312 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1311, ((panda$core$Object*) base1305));
            panda$core$String* $tmp1314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1312, &$s1313);
            return $tmp1314;
        }
        }
        else {
        panda$core$Bit $tmp1315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1315.value) {
        {
            panda$core$String** $tmp1317 = ((panda$core$String**) ((char*) $match$401_9919->$data + 16));
            label1316 = *$tmp1317;
            org$pandalanguage$pandac$IRNode** $tmp1319 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 24));
            target1318 = *$tmp1319;
            org$pandalanguage$pandac$IRNode** $tmp1321 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 32));
            list1320 = *$tmp1321;
            panda$collections$ImmutableArray** $tmp1323 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 40));
            statements1322 = *$tmp1323;
            panda$core$MutableString* $tmp1325 = (panda$core$MutableString*) malloc(48);
            $tmp1325->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1325->refCount.value = 1;
            panda$core$MutableString$init($tmp1325);
            panda$core$Object* $tmp1327 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1325));
            result1324 = ((panda$core$MutableString*) $tmp1327);
            if (((panda$core$Bit) { label1316 != NULL }).value) {
            {
                panda$core$String* $tmp1328 = panda$core$String$convert$R$panda$core$String(label1316);
                panda$core$String* $tmp1330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1328, &$s1329);
                panda$core$MutableString$append$panda$core$String(result1324, $tmp1330);
            }
            }
            panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1331, ((panda$core$Object*) target1318));
            panda$core$String* $tmp1334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1332, &$s1333);
            panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1334, ((panda$core$Object*) list1320));
            panda$core$String* $tmp1337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1335, &$s1336);
            panda$core$MutableString$append$panda$core$String(result1324, $tmp1337);
            {
                ITable* $tmp1339 = ((panda$collections$Iterable*) statements1322)->$class->itable;
                while ($tmp1339->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1339 = $tmp1339->next;
                }
                $fn1341 $tmp1340 = $tmp1339->methods[0];
                panda$collections$Iterator* $tmp1342 = $tmp1340(((panda$collections$Iterable*) statements1322));
                s$Iter1338 = $tmp1342;
                $l1343:;
                ITable* $tmp1345 = s$Iter1338->$class->itable;
                while ($tmp1345->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1345 = $tmp1345->next;
                }
                $fn1347 $tmp1346 = $tmp1345->methods[0];
                panda$core$Bit $tmp1348 = $tmp1346(s$Iter1338);
                panda$core$Bit $tmp1349 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1348);
                if (!$tmp1349.value) goto $l1344;
                {
                    ITable* $tmp1351 = s$Iter1338->$class->itable;
                    while ($tmp1351->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1351 = $tmp1351->next;
                    }
                    $fn1353 $tmp1352 = $tmp1351->methods[1];
                    panda$core$Object* $tmp1354 = $tmp1352(s$Iter1338);
                    s1350 = ((org$pandalanguage$pandac$IRNode*) $tmp1354);
                    panda$core$String* $tmp1356 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1350), &$s1355);
                    panda$core$MutableString$append$panda$core$String(result1324, $tmp1356);
                }
                goto $l1343;
                $l1344:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1357, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1324, $tmp1357);
            panda$core$String* $tmp1358 = panda$core$MutableString$finish$R$panda$core$String(result1324);
            return $tmp1358;
        }
        }
        else {
        panda$core$Bit $tmp1359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1359.value) {
        {
            panda$core$Real64* $tmp1361 = ((panda$core$Real64*) ((char*) $match$401_9919->$data + 24));
            value1360 = *$tmp1361;
            panda$core$String* $tmp1362 = panda$core$Real64$convert$R$panda$core$String(value1360);
            return $tmp1362;
        }
        }
        else {
        panda$core$Bit $tmp1363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1363.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1365 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 16));
            value1364 = *$tmp1365;
            if (((panda$core$Bit) { value1364 != NULL }).value) {
            {
                panda$core$String* $tmp1367 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1366, ((panda$core$Object*) value1364));
                panda$core$String* $tmp1369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1367, &$s1368);
                return $tmp1369;
            }
            }
            return &$s1370;
        }
        }
        else {
        panda$core$Bit $tmp1371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1371.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1373 = ((org$pandalanguage$pandac$Type**) ((char*) $match$401_9919->$data + 16));
            type1372 = *$tmp1373;
            panda$core$Int64* $tmp1375 = ((panda$core$Int64*) ((char*) $match$401_9919->$data + 24));
            id1374 = *$tmp1375;
            panda$core$Int64$wrapper* $tmp1377;
            $tmp1377 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp1377->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1377->refCount = 1;
            $tmp1377->value = id1374;
            panda$core$String* $tmp1378 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1376, ((panda$core$Object*) $tmp1377));
            panda$core$String* $tmp1380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1378, &$s1379);
            panda$core$String* $tmp1381 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1380, ((panda$core$Object*) type1372));
            panda$core$String* $tmp1383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1381, &$s1382);
            return $tmp1383;
        }
        }
        else {
        panda$core$Bit $tmp1384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1384.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1386 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 0));
            base1385 = *$tmp1386;
            panda$core$Int64* $tmp1388 = ((panda$core$Int64*) ((char*) $match$401_9919->$data + 8));
            id1387 = *$tmp1388;
            panda$core$Int64$wrapper* $tmp1390;
            $tmp1390 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp1390->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1390->refCount = 1;
            $tmp1390->value = id1387;
            panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1389, ((panda$core$Object*) $tmp1390));
            panda$core$String* $tmp1393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1391, &$s1392);
            panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1393, ((panda$core$Object*) base1385));
            panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1394, &$s1395);
            return $tmp1396;
        }
        }
        else {
        panda$core$Bit $tmp1397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1397.value) {
        {
            return &$s1398;
        }
        }
        else {
        panda$core$Bit $tmp1399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1399.value) {
        {
            panda$core$String** $tmp1401 = ((panda$core$String**) ((char*) $match$401_9919->$data + 16));
            str1400 = *$tmp1401;
            return str1400;
        }
        }
        else {
        panda$core$Bit $tmp1402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1402.value) {
        {
            return &$s1403;
        }
        }
        else {
        panda$core$Bit $tmp1404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1404.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1406 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 16));
            test1405 = *$tmp1406;
            org$pandalanguage$pandac$IRNode** $tmp1408 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 24));
            ifTrue1407 = *$tmp1408;
            org$pandalanguage$pandac$IRNode** $tmp1410 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 32));
            ifFalse1409 = *$tmp1410;
            panda$core$String* $tmp1412 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1411, ((panda$core$Object*) test1405));
            panda$core$String* $tmp1414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1412, &$s1413);
            panda$core$String* $tmp1415 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1414, ((panda$core$Object*) ifTrue1407));
            panda$core$String* $tmp1417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1415, &$s1416);
            panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1417, ((panda$core$Object*) ifFalse1409));
            panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1418, &$s1419);
            return $tmp1420;
        }
        }
        else {
        panda$core$Bit $tmp1421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1421.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1423 = ((org$pandalanguage$pandac$Type**) ((char*) $match$401_9919->$data + 16));
            type1422 = *$tmp1423;
            panda$core$String* $tmp1424 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1422);
            return $tmp1424;
        }
        }
        else {
        panda$core$Bit $tmp1425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1425.value) {
        {
            panda$core$String** $tmp1427 = ((panda$core$String**) ((char*) $match$401_9919->$data + 16));
            name1426 = *$tmp1427;
            return name1426;
        }
        }
        else {
        panda$core$Bit $tmp1428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1428.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1430 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 24));
            base1429 = *$tmp1430;
            panda$collections$ImmutableArray** $tmp1432 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 32));
            args1431 = *$tmp1432;
            panda$core$String* $tmp1434 = (($fn1433) base1429->$class->vtable[0])(base1429);
            panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, &$s1435);
            panda$core$String* $tmp1437 = panda$collections$ImmutableArray$join$R$panda$core$String(args1431);
            panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1436, $tmp1437);
            panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1438, &$s1439);
            return $tmp1440;
        }
        }
        else {
        panda$core$Bit $tmp1441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1441.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1443 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 24));
            target1442 = *$tmp1443;
            panda$collections$ImmutableArray** $tmp1445 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 32));
            methods1444 = *$tmp1445;
            panda$collections$ImmutableArray** $tmp1447 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 40));
            args1446 = *$tmp1447;
            panda$core$String* $tmp1449 = (($fn1448) target1442->$class->vtable[0])(target1442);
            panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1449, &$s1450);
            panda$core$Object* $tmp1452 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods1444, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1451, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp1452)->value)->name);
            panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1453, &$s1454);
            panda$core$String* $tmp1456 = panda$collections$ImmutableArray$join$R$panda$core$String(args1446);
            panda$core$String* $tmp1457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1455, $tmp1456);
            panda$core$String* $tmp1459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1457, &$s1458);
            return $tmp1459;
        }
        }
        else {
        panda$core$Bit $tmp1460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1460.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1462 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 16));
            target1461 = *$tmp1462;
            panda$collections$ImmutableArray** $tmp1464 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 24));
            methods1463 = *$tmp1464;
            panda$core$String* $tmp1466 = (($fn1465) target1461->$class->vtable[0])(target1461);
            panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1466, &$s1467);
            panda$core$Object* $tmp1469 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods1463, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1468, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp1469)->value)->name);
            panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1470, &$s1471);
            return $tmp1472;
        }
        }
        else {
        panda$core$Bit $tmp1473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1473.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1475 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 16));
            start1474 = *$tmp1475;
            org$pandalanguage$pandac$IRNode** $tmp1477 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 24));
            end1476 = *$tmp1477;
            panda$core$Bit* $tmp1479 = ((panda$core$Bit*) ((char*) $match$401_9919->$data + 32));
            inclusive1478 = *$tmp1479;
            org$pandalanguage$pandac$IRNode** $tmp1481 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 33));
            step1480 = *$tmp1481;
            panda$core$MutableString* $tmp1483 = (panda$core$MutableString*) malloc(48);
            $tmp1483->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1483->refCount.value = 1;
            panda$core$MutableString$init($tmp1483);
            panda$core$Object* $tmp1485 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1483));
            result1482 = ((panda$core$MutableString*) $tmp1485);
            if (((panda$core$Bit) { start1474 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1482, ((panda$core$Object*) start1474));
            }
            }
            if (inclusive1478.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1482, &$s1486);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result1482, &$s1487);
            }
            }
            if (((panda$core$Bit) { end1476 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1482, ((panda$core$Object*) end1476));
            }
            }
            if (((panda$core$Bit) { step1480 != NULL }).value) {
            {
                panda$core$String* $tmp1489 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1488, ((panda$core$Object*) step1480));
                panda$core$String* $tmp1491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1489, &$s1490);
                panda$core$MutableString$append$panda$core$String(result1482, $tmp1491);
            }
            }
            panda$core$String* $tmp1492 = panda$core$MutableString$finish$R$panda$core$String(result1482);
            return $tmp1492;
        }
        }
        else {
        panda$core$Bit $tmp1493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1493.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1495 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$401_9919->$data + 16));
            kind1494 = *$tmp1495;
            panda$collections$ImmutableArray** $tmp1497 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 24));
            decls1496 = *$tmp1497;
            panda$core$MutableString* $tmp1499 = (panda$core$MutableString*) malloc(48);
            $tmp1499->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1499->refCount.value = 1;
            panda$core$MutableString$init($tmp1499);
            panda$core$Object* $tmp1501 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1499));
            result1498 = ((panda$core$MutableString*) $tmp1501);
            {
                $match$571_171502 = kind1494;
                panda$core$Bit $tmp1503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$571_171502.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp1503.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1498, &$s1504);
                }
                }
                else {
                panda$core$Bit $tmp1505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$571_171502.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp1505.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1498, &$s1506);
                }
                }
                else {
                panda$core$Bit $tmp1507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$571_171502.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp1507.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1498, &$s1508);
                }
                }
                else {
                panda$core$Bit $tmp1509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$571_171502.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp1509.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1498, &$s1510);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp1511 = panda$collections$ImmutableArray$join$R$panda$core$String(decls1496);
            panda$core$MutableString$append$panda$core$String(result1498, $tmp1511);
            panda$core$String* $tmp1512 = panda$core$MutableString$finish$R$panda$core$String(result1498);
            return $tmp1512;
        }
        }
        else {
        panda$core$Bit $tmp1513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1513.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1515 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$401_9919->$data + 16));
            variable1514 = *$tmp1515;
            return ((org$pandalanguage$pandac$Symbol*) variable1514)->name;
        }
        }
        else {
        panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1516.value) {
        {
            panda$collections$ImmutableArray** $tmp1518 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 16));
            tests1517 = *$tmp1518;
            panda$collections$ImmutableArray** $tmp1520 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 24));
            statements1519 = *$tmp1520;
            panda$core$String* $tmp1522 = panda$collections$ImmutableArray$join$R$panda$core$String(tests1517);
            panda$core$String* $tmp1523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1521, $tmp1522);
            panda$core$String* $tmp1525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1523, &$s1524);
            panda$core$String* $tmp1527 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(statements1519, &$s1526);
            panda$core$String* $tmp1528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1525, $tmp1527);
            panda$core$String* $tmp1530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1528, &$s1529);
            return $tmp1530;
        }
        }
        else {
        panda$core$Bit $tmp1531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$401_9919->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1531.value) {
        {
            panda$core$String** $tmp1533 = ((panda$core$String**) ((char*) $match$401_9919->$data + 16));
            label1532 = *$tmp1533;
            org$pandalanguage$pandac$IRNode** $tmp1535 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$401_9919->$data + 24));
            test1534 = *$tmp1535;
            panda$collections$ImmutableArray** $tmp1537 = ((panda$collections$ImmutableArray**) ((char*) $match$401_9919->$data + 32));
            statements1536 = *$tmp1537;
            panda$core$MutableString* $tmp1539 = (panda$core$MutableString*) malloc(48);
            $tmp1539->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1539->refCount.value = 1;
            panda$core$MutableString$init($tmp1539);
            panda$core$Object* $tmp1541 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1539));
            result1538 = ((panda$core$MutableString*) $tmp1541);
            if (((panda$core$Bit) { label1532 != NULL }).value) {
            {
                panda$core$String* $tmp1542 = panda$core$String$convert$R$panda$core$String(label1532);
                panda$core$String* $tmp1544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1542, &$s1543);
                panda$core$MutableString$append$panda$core$String(result1538, $tmp1544);
            }
            }
            panda$core$String* $tmp1546 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1545, ((panda$core$Object*) test1534));
            panda$core$String* $tmp1548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1546, &$s1547);
            panda$core$MutableString$append$panda$core$String(result1538, $tmp1548);
            {
                ITable* $tmp1550 = ((panda$collections$Iterable*) statements1536)->$class->itable;
                while ($tmp1550->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1550 = $tmp1550->next;
                }
                $fn1552 $tmp1551 = $tmp1550->methods[0];
                panda$collections$Iterator* $tmp1553 = $tmp1551(((panda$collections$Iterable*) statements1536));
                s$Iter1549 = $tmp1553;
                $l1554:;
                ITable* $tmp1556 = s$Iter1549->$class->itable;
                while ($tmp1556->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1556 = $tmp1556->next;
                }
                $fn1558 $tmp1557 = $tmp1556->methods[0];
                panda$core$Bit $tmp1559 = $tmp1557(s$Iter1549);
                panda$core$Bit $tmp1560 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1559);
                if (!$tmp1560.value) goto $l1555;
                {
                    ITable* $tmp1562 = s$Iter1549->$class->itable;
                    while ($tmp1562->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1562 = $tmp1562->next;
                    }
                    $fn1564 $tmp1563 = $tmp1562->methods[1];
                    panda$core$Object* $tmp1565 = $tmp1563(s$Iter1549);
                    s1561 = ((org$pandalanguage$pandac$IRNode*) $tmp1565);
                    panda$core$String* $tmp1567 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1561), &$s1566);
                    panda$core$MutableString$append$panda$core$String(result1538, $tmp1567);
                }
                goto $l1554;
                $l1555:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1568, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1538, $tmp1568);
            panda$core$String* $tmp1569 = panda$core$MutableString$finish$R$panda$core$String(result1538);
            return $tmp1569;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}

