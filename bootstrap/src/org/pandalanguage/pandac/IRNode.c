#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Bit.h"
#include "panda/collections/ImmutableArray.h"
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
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/Symbol.h"


static panda$core$String $s1;
org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, org$pandalanguage$pandac$IRNode$cleanup, org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit} };

typedef org$pandalanguage$pandac$Type* (*$fn152)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn179)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn192)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn207)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn209)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn212)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn271)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn279)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn329)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn380)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn383)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn397)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn401)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn413)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn419)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn425)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn427)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn443)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn449)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn455)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn457)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn481)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn496)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn506)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn511)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn517)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn523)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn525)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn542)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn547)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn553)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn559)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn561)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn565)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn573)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn578)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn588)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn594)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn600)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn602)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn613)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn618)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn624)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn630)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn632)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn639)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn645)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn651)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn653)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn671)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn682)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn687)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn693)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn699)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn701)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn711)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn721)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn737)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn740)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn744)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn787)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn793)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn799)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn801)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn816)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn822)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn828)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn830)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn837)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn843)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn849)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn851)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn862)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn867)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn873)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn879)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn881)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn909)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn933)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn939)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn945)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn977)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn988)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1006)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1050)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1057)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1075)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1081)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1087)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1102)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1114)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1137)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1143)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1149)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1192)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1198)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1204)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1227)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1233)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1239)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1247)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1253)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1259)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1271)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1292)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1323)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1329)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1335)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1416)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1431)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1448)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1531)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1537)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1543)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54\x36\x34\x5f\x57\x52\x41\x50\x28", 11, -7093166379287162761, NULL };
static panda$core$String $s983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s1261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s1315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x3a\x20", 17, -7730994269199854653, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3a\x20", 28, 2945252663019609900, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp3 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp4 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp5 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp5 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp6 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp6 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp7 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp7 = p_f2;
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp8 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp8 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp9 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        *$tmp9 = p_f4;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp10 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp10 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp11 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp11 = p_f1;
    }
    panda$core$Bit* $tmp12 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp12 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp13 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp13 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp14 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        *$tmp14 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp15 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp15 = p_f0;
    {
        panda$core$String** $tmp16 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp16 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp17 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp17 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp18 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp18 = p_f1;
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp19 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        *$tmp19 = p_f2;
    }
    {
        panda$collections$ImmutableArray** $tmp20 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp20 = p_f3;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp21 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp21 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp22 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp22 = p_f1;
    }
    {
        org$pandalanguage$pandac$Type** $tmp23 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        *$tmp23 = p_f2;
    }
    panda$core$Bit* $tmp24 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp24 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp25 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp25 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp26 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        *$tmp26 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp27 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp27 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp28 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp28 = p_f1;
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp29 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        *$tmp29 = p_f2;
    }
    panda$core$Int64* $tmp30 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp30 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp31 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp31 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp32 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp32 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp33 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp33 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp34 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp34 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp35 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp35 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp36 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        *$tmp36 = p_f0;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp37 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        *$tmp37 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp38 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp38 = p_f0;
    {
        panda$core$String** $tmp39 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp39 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp40 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp40 = p_f2;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp41 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        *$tmp41 = p_f3;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp42 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        *$tmp42 = p_f0;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp43 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        *$tmp43 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp44 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp44 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp45 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp45 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp46 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp46 = p_f2;
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp47 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        *$tmp47 = p_f3;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp48 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp48 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp49 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp49 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp50 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp50 = p_f2;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp51 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        *$tmp51 = p_f3;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp52 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp52 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp53 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp53 = p_f1;
    }
    panda$core$UInt64* $tmp54 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp54 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp55 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp55 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp56 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp56 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp57 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp57 = p_f0;
    {
        panda$core$String** $tmp58 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp58 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp59 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp59 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp60 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp60 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp61 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp61 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp62 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp62 = p_f2;
    }
    {
        panda$collections$ImmutableArray** $tmp63 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp63 = p_f3;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$MethodRef* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp64 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp64 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp65 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp65 = p_f1;
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp66 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        *$tmp66 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp67 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp67 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp68 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp68 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp69 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp69 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp70 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp70 = p_f0;
    {
        panda$core$String** $tmp71 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp71 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp72 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp72 = p_f2;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp73 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        *$tmp73 = p_f3;
    }
    {
        panda$collections$ImmutableArray** $tmp74 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        *$tmp74 = p_f4;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp75 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp75 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp76 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp76 = p_f1;
    }
    panda$core$Real64* $tmp77 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp77 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp78 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp78 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp79 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp79 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp80 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp80 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp81 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp81 = p_f1;
    }
    panda$core$Int64* $tmp82 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp82 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp83 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        *$tmp83 = p_f0;
    }
    panda$core$Int64* $tmp84 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp84 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp85 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp85 = p_f0;
    {
        panda$core$String** $tmp86 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp86 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp87 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp87 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp88 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp88 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp89 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp89 = p_f2;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp90 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        *$tmp90 = p_f3;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp91 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp91 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp92 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp92 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp93 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp93 = p_f2;
    }
    {
        panda$collections$ImmutableArray** $tmp94 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp94 = p_f3;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp95 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp95 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp96 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp96 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp97 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp97 = p_f2;
    }
    {
        panda$collections$ImmutableArray** $tmp98 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp98 = p_f3;
    }
    {
        panda$collections$ImmutableArray** $tmp99 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        *$tmp99 = p_f4;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp100 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp100 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp101 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp101 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp102 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp102 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp103 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp103 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp104 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp104 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp105 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp105 = p_f2;
    }
    panda$core$Bit* $tmp106 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp106 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp107 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        *$tmp107 = p_f4;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp108 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp108 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp109 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp109 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp110 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp110 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp111 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp111 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp112 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        *$tmp112 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp113 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp113 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp114 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        *$tmp114 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp115 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp115 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp116 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp116 = p_f0;
    {
        panda$core$String** $tmp117 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp117 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp118 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp118 = p_f2;
    }
    {
        panda$collections$ImmutableArray** $tmp119 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp119 = p_f3;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$66_9120;
    org$pandalanguage$pandac$Type* type122;
    org$pandalanguage$pandac$Type* type125;
    org$pandalanguage$pandac$Type* type128;
    org$pandalanguage$pandac$Type* type131;
    org$pandalanguage$pandac$ChoiceEntry* ce134;
    org$pandalanguage$pandac$ChoiceEntry* ce138;
    panda$core$Int64 field140;
    org$pandalanguage$pandac$Type* type144;
    org$pandalanguage$pandac$Type* type147;
    org$pandalanguage$pandac$IRNode* expr150;
    org$pandalanguage$pandac$Type* type155;
    org$pandalanguage$pandac$Type* type158;
    org$pandalanguage$pandac$IRNode* ref165;
    org$pandalanguage$pandac$Position $tmp169;
    org$pandalanguage$pandac$Type* type171;
    org$pandalanguage$pandac$Type* type174;
    org$pandalanguage$pandac$IRNode* base177;
    org$pandalanguage$pandac$Type* type182;
    org$pandalanguage$pandac$Type* type185;
    panda$core$Int64 id187;
    org$pandalanguage$pandac$IRNode* base190;
    org$pandalanguage$pandac$Type* type195;
    org$pandalanguage$pandac$Type* type200;
    org$pandalanguage$pandac$IRNode* ifTrue203;
    org$pandalanguage$pandac$IRNode* ifFalse205;
    org$pandalanguage$pandac$Type* type219;
    org$pandalanguage$pandac$Type* type222;
    org$pandalanguage$pandac$Variable* variable229;
    {
        $match$66_9120 = self;
        panda$core$Bit $tmp121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp121.value) {
        {
            org$pandalanguage$pandac$Type** $tmp123 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type122 = *$tmp123;
            return type122;
        }
        }
        else {
        panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp124.value) {
        {
            org$pandalanguage$pandac$Type** $tmp126 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type125 = *$tmp126;
            return type125;
        }
        }
        else {
        panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp127.value) {
        {
            org$pandalanguage$pandac$Type** $tmp129 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type128 = *$tmp129;
            return type128;
        }
        }
        else {
        panda$core$Bit $tmp130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp130.value) {
        {
            org$pandalanguage$pandac$Type** $tmp132 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 24));
            type131 = *$tmp132;
            return type131;
        }
        }
        else {
        panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp133.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp135 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$66_9120->$data + 16));
            ce134 = *$tmp135;
            org$pandalanguage$pandac$Type* $tmp136 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp136;
        }
        }
        else {
        panda$core$Bit $tmp137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp137.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp139 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$66_9120->$data + 24));
            ce138 = *$tmp139;
            panda$core$Int64* $tmp141 = ((panda$core$Int64*) ((char*) $match$66_9120->$data + 32));
            field140 = *$tmp141;
            panda$core$Object* $tmp142 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce138->fields, field140);
            return ((org$pandalanguage$pandac$Type*) $tmp142);
        }
        }
        else {
        panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp143.value) {
        {
            org$pandalanguage$pandac$Type** $tmp145 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type144 = *$tmp145;
            return type144;
        }
        }
        else {
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp146.value) {
        {
            org$pandalanguage$pandac$Type** $tmp148 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type147 = *$tmp148;
            return type147;
        }
        }
        else {
        panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp149.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp151 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9120->$data + 0));
            expr150 = *$tmp151;
            org$pandalanguage$pandac$Type* $tmp153 = (($fn152) expr150->$class->vtable[2])(expr150);
            return $tmp153;
        }
        }
        else {
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp154.value) {
        {
            org$pandalanguage$pandac$Type** $tmp156 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type155 = *$tmp156;
            return type155;
        }
        }
        else {
        panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp157.value) {
        {
            org$pandalanguage$pandac$Type** $tmp159 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type158 = *$tmp159;
            return type158;
        }
        }
        else {
        panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp160.value) {
        {
            org$pandalanguage$pandac$Type* $tmp161 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            return $tmp161;
        }
        }
        else {
        panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp162.value) {
        {
            org$pandalanguage$pandac$Type* $tmp163 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            return $tmp163;
        }
        }
        else {
        panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp164.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp166 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9120->$data + 16));
            ref165 = *$tmp166;
            org$pandalanguage$pandac$Type* $tmp167 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            org$pandalanguage$pandac$Position$init(&$tmp169);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp167, &$s168, ((panda$core$Int64) { 16 }), $tmp169, ((panda$core$Bit) { true }));
            return $tmp167;
        }
        }
        else {
        panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp170.value) {
        {
            org$pandalanguage$pandac$Type** $tmp172 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type171 = *$tmp172;
            return type171;
        }
        }
        else {
        panda$core$Bit $tmp173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp173.value) {
        {
            org$pandalanguage$pandac$Type** $tmp175 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type174 = *$tmp175;
            return type174;
        }
        }
        else {
        panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp176.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp178 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9120->$data + 24));
            base177 = *$tmp178;
            org$pandalanguage$pandac$Type* $tmp180 = (($fn179) base177->$class->vtable[2])(base177);
            return $tmp180;
        }
        }
        else {
        panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp181.value) {
        {
            org$pandalanguage$pandac$Type** $tmp183 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type182 = *$tmp183;
            return type182;
        }
        }
        else {
        panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp184.value) {
        {
            org$pandalanguage$pandac$Type** $tmp186 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type185 = *$tmp186;
            panda$core$Int64* $tmp188 = ((panda$core$Int64*) ((char*) $match$66_9120->$data + 24));
            id187 = *$tmp188;
            return type185;
        }
        }
        else {
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp189.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp191 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9120->$data + 0));
            base190 = *$tmp191;
            org$pandalanguage$pandac$Type* $tmp193 = (($fn192) base190->$class->vtable[2])(base190);
            return $tmp193;
        }
        }
        else {
        panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp194.value) {
        {
            org$pandalanguage$pandac$Type** $tmp196 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type195 = *$tmp196;
            return type195;
        }
        }
        else {
        panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp197.value) {
        {
            org$pandalanguage$pandac$Type* $tmp198 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            return $tmp198;
        }
        }
        else {
        panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp199.value) {
        {
            org$pandalanguage$pandac$Type** $tmp201 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type200 = *$tmp201;
            return type200;
        }
        }
        else {
        panda$core$Bit $tmp202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp202.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp204 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9120->$data + 24));
            ifTrue203 = *$tmp204;
            org$pandalanguage$pandac$IRNode** $tmp206 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9120->$data + 32));
            ifFalse205 = *$tmp206;
            org$pandalanguage$pandac$Type* $tmp208 = (($fn207) ifTrue203->$class->vtable[2])(ifTrue203);
            org$pandalanguage$pandac$Type* $tmp210 = (($fn209) ifFalse205->$class->vtable[2])(ifFalse205);
            panda$core$Bit $tmp211 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp208, $tmp210);
            PANDA_ASSERT($tmp211.value);
            org$pandalanguage$pandac$Type* $tmp213 = (($fn212) ifTrue203->$class->vtable[2])(ifTrue203);
            return $tmp213;
        }
        }
        else {
        panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp214.value) {
        {
            org$pandalanguage$pandac$Type* $tmp215 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            return $tmp215;
        }
        }
        else {
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp216.value) {
        {
            org$pandalanguage$pandac$Type* $tmp217 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp217;
        }
        }
        else {
        panda$core$Bit $tmp218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp218.value) {
        {
            org$pandalanguage$pandac$Type** $tmp220 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type219 = *$tmp220;
            return type219;
        }
        }
        else {
        panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp221.value) {
        {
            org$pandalanguage$pandac$Type** $tmp223 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type222 = *$tmp223;
            return type222;
        }
        }
        else {
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp224.value) {
        {
            org$pandalanguage$pandac$Type* $tmp225 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp225;
        }
        }
        else {
        panda$core$Bit $tmp226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp226.value) {
        {
            org$pandalanguage$pandac$Type* $tmp227 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp227;
        }
        }
        else {
        panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp228.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp230 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$66_9120->$data + 16));
            variable229 = *$tmp230;
            return variable229->type;
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
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$136_9231;
    org$pandalanguage$pandac$Position position233;
    org$pandalanguage$pandac$Position position236;
    org$pandalanguage$pandac$Position position239;
    org$pandalanguage$pandac$Position position242;
    org$pandalanguage$pandac$Position position245;
    org$pandalanguage$pandac$Position position248;
    org$pandalanguage$pandac$Position position251;
    org$pandalanguage$pandac$Position position254;
    org$pandalanguage$pandac$Position position257;
    org$pandalanguage$pandac$Position position260;
    org$pandalanguage$pandac$Position position263;
    org$pandalanguage$pandac$Position position266;
    org$pandalanguage$pandac$IRNode* target269;
    org$pandalanguage$pandac$Position position274;
    org$pandalanguage$pandac$IRNode* expr277;
    org$pandalanguage$pandac$Position position282;
    org$pandalanguage$pandac$Position position285;
    org$pandalanguage$pandac$Position position288;
    org$pandalanguage$pandac$Position position291;
    org$pandalanguage$pandac$Position position294;
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
    org$pandalanguage$pandac$IRNode* base327;
    org$pandalanguage$pandac$Position position332;
    org$pandalanguage$pandac$Position position335;
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
    {
        $match$136_9231 = self;
        panda$core$Bit $tmp232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp232.value) {
        {
            org$pandalanguage$pandac$Position* $tmp234 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position233 = *$tmp234;
            return position233;
        }
        }
        else {
        panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp235.value) {
        {
            org$pandalanguage$pandac$Position* $tmp237 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position236 = *$tmp237;
            return position236;
        }
        }
        else {
        panda$core$Bit $tmp238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp238.value) {
        {
            org$pandalanguage$pandac$Position* $tmp240 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position239 = *$tmp240;
            return position239;
        }
        }
        else {
        panda$core$Bit $tmp241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp241.value) {
        {
            org$pandalanguage$pandac$Position* $tmp243 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position242 = *$tmp243;
            return position242;
        }
        }
        else {
        panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp244.value) {
        {
            org$pandalanguage$pandac$Position* $tmp246 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position245 = *$tmp246;
            return position245;
        }
        }
        else {
        panda$core$Bit $tmp247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp247.value) {
        {
            org$pandalanguage$pandac$Position* $tmp249 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position248 = *$tmp249;
            return position248;
        }
        }
        else {
        panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp250.value) {
        {
            org$pandalanguage$pandac$Position* $tmp252 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position251 = *$tmp252;
            return position251;
        }
        }
        else {
        panda$core$Bit $tmp253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp253.value) {
        {
            org$pandalanguage$pandac$Position* $tmp255 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position254 = *$tmp255;
            return position254;
        }
        }
        else {
        panda$core$Bit $tmp256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp256.value) {
        {
            org$pandalanguage$pandac$Position* $tmp258 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position257 = *$tmp258;
            return position257;
        }
        }
        else {
        panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp259.value) {
        {
            org$pandalanguage$pandac$Position* $tmp261 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position260 = *$tmp261;
            return position260;
        }
        }
        else {
        panda$core$Bit $tmp262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp262.value) {
        {
            org$pandalanguage$pandac$Position* $tmp264 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position263 = *$tmp264;
            return position263;
        }
        }
        else {
        panda$core$Bit $tmp265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp265.value) {
        {
            org$pandalanguage$pandac$Position* $tmp267 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position266 = *$tmp267;
            return position266;
        }
        }
        else {
        panda$core$Bit $tmp268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp268.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp270 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$136_9231->$data + 0));
            target269 = *$tmp270;
            org$pandalanguage$pandac$Position $tmp272 = (($fn271) target269->$class->vtable[3])(target269);
            return $tmp272;
        }
        }
        else {
        panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp273.value) {
        {
            org$pandalanguage$pandac$Position* $tmp275 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position274 = *$tmp275;
            return position274;
        }
        }
        else {
        panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp276.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp278 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$136_9231->$data + 0));
            expr277 = *$tmp278;
            org$pandalanguage$pandac$Position $tmp280 = (($fn279) expr277->$class->vtable[3])(expr277);
            return $tmp280;
        }
        }
        else {
        panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp281.value) {
        {
            org$pandalanguage$pandac$Position* $tmp283 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position282 = *$tmp283;
            return position282;
        }
        }
        else {
        panda$core$Bit $tmp284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp284.value) {
        {
            org$pandalanguage$pandac$Position* $tmp286 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position285 = *$tmp286;
            return position285;
        }
        }
        else {
        panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp287.value) {
        {
            org$pandalanguage$pandac$Position* $tmp289 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position288 = *$tmp289;
            return position288;
        }
        }
        else {
        panda$core$Bit $tmp290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp290.value) {
        {
            org$pandalanguage$pandac$Position* $tmp292 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position291 = *$tmp292;
            return position291;
        }
        }
        else {
        panda$core$Bit $tmp293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp293.value) {
        {
            org$pandalanguage$pandac$Position* $tmp295 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position294 = *$tmp295;
            return position294;
        }
        }
        else {
        panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp296.value) {
        {
            org$pandalanguage$pandac$Position* $tmp298 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position297 = *$tmp298;
            return position297;
        }
        }
        else {
        panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp299.value) {
        {
            org$pandalanguage$pandac$Position* $tmp301 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position300 = *$tmp301;
            return position300;
        }
        }
        else {
        panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp302.value) {
        {
            org$pandalanguage$pandac$Position* $tmp304 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position303 = *$tmp304;
            return position303;
        }
        }
        else {
        panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp305.value) {
        {
            org$pandalanguage$pandac$Position* $tmp307 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position306 = *$tmp307;
            return position306;
        }
        }
        else {
        panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp308.value) {
        {
            org$pandalanguage$pandac$Position* $tmp310 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position309 = *$tmp310;
            return position309;
        }
        }
        else {
        panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp311.value) {
        {
            org$pandalanguage$pandac$Position* $tmp313 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position312 = *$tmp313;
            return position312;
        }
        }
        else {
        panda$core$Bit $tmp314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp314.value) {
        {
            org$pandalanguage$pandac$Position* $tmp316 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position315 = *$tmp316;
            return position315;
        }
        }
        else {
        panda$core$Bit $tmp317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp317.value) {
        {
            org$pandalanguage$pandac$Position* $tmp319 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position318 = *$tmp319;
            return position318;
        }
        }
        else {
        panda$core$Bit $tmp320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp320.value) {
        {
            org$pandalanguage$pandac$Position* $tmp322 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position321 = *$tmp322;
            return position321;
        }
        }
        else {
        panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp323.value) {
        {
            org$pandalanguage$pandac$Position* $tmp325 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position324 = *$tmp325;
            return position324;
        }
        }
        else {
        panda$core$Bit $tmp326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp326.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp328 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$136_9231->$data + 0));
            base327 = *$tmp328;
            org$pandalanguage$pandac$Position $tmp330 = (($fn329) base327->$class->vtable[3])(base327);
            return $tmp330;
        }
        }
        else {
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp331.value) {
        {
            org$pandalanguage$pandac$Position* $tmp333 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position332 = *$tmp333;
            return position332;
        }
        }
        else {
        panda$core$Bit $tmp334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp334.value) {
        {
            org$pandalanguage$pandac$Position* $tmp336 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position335 = *$tmp336;
            return position335;
        }
        }
        else {
        panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp337.value) {
        {
            org$pandalanguage$pandac$Position* $tmp339 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position338 = *$tmp339;
            return position338;
        }
        }
        else {
        panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp340.value) {
        {
            org$pandalanguage$pandac$Position* $tmp342 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position341 = *$tmp342;
            return position341;
        }
        }
        else {
        panda$core$Bit $tmp343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp343.value) {
        {
            org$pandalanguage$pandac$Position* $tmp345 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position344 = *$tmp345;
            return position344;
        }
        }
        else {
        panda$core$Bit $tmp346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp346.value) {
        {
            org$pandalanguage$pandac$Position* $tmp348 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position347 = *$tmp348;
            return position347;
        }
        }
        else {
        panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp349.value) {
        {
            org$pandalanguage$pandac$Position* $tmp351 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position350 = *$tmp351;
            return position350;
        }
        }
        else {
        panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp352.value) {
        {
            org$pandalanguage$pandac$Position* $tmp354 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position353 = *$tmp354;
            return position353;
        }
        }
        else {
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp355.value) {
        {
            org$pandalanguage$pandac$Position* $tmp357 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position356 = *$tmp357;
            return position356;
        }
        }
        else {
        panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp358.value) {
        {
            org$pandalanguage$pandac$Position* $tmp360 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position359 = *$tmp360;
            return position359;
        }
        }
        else {
        panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp361.value) {
        {
            org$pandalanguage$pandac$Position* $tmp363 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position362 = *$tmp363;
            return position362;
        }
        }
        else {
        panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp364.value) {
        {
            org$pandalanguage$pandac$Position* $tmp366 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position365 = *$tmp366;
            return position365;
        }
        }
        else {
        panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp367.value) {
        {
            org$pandalanguage$pandac$Position* $tmp369 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position368 = *$tmp369;
            return position368;
        }
        }
        else {
        panda$core$Bit $tmp370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9231->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp370.value) {
        {
            org$pandalanguage$pandac$Position* $tmp372 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9231->$data + 0));
            position371 = *$tmp372;
            return position371;
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
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$233_9373;
    org$pandalanguage$pandac$IRNode* test375;
    org$pandalanguage$pandac$IRNode* msg377;
    org$pandalanguage$pandac$IRNode* left387;
    org$pandalanguage$pandac$parser$Token$Kind op389;
    org$pandalanguage$pandac$IRNode* right391;
    panda$core$Bit bit405;
    panda$collections$ImmutableArray* statements408;
    panda$collections$Iterator* Iter$241$17410;
    org$pandalanguage$pandac$IRNode* s422;
    panda$core$Bit tmp1429;
    panda$core$Bit tmp2430;
    panda$core$String* label432;
    org$pandalanguage$pandac$MethodRef* m435;
    panda$collections$ImmutableArray* args437;
    panda$collections$Iterator* Iter$253$17440;
    org$pandalanguage$pandac$IRNode* arg452;
    panda$core$Bit tmp3459;
    panda$core$Bit tmp4460;
    org$pandalanguage$pandac$IRNode* value462;
    org$pandalanguage$pandac$Type* type464;
    org$pandalanguage$pandac$ChoiceEntry* ce467;
    org$pandalanguage$pandac$IRNode* base470;
    org$pandalanguage$pandac$ChoiceEntry* ce472;
    panda$core$Int64 field474;
    org$pandalanguage$pandac$Type* type477;
    org$pandalanguage$pandac$IRNode* call479;
    org$pandalanguage$pandac$Type* Type484;
    panda$core$String* label487;
    org$pandalanguage$pandac$IRNode* target490;
    org$pandalanguage$pandac$IRNode* value492;
    panda$core$String* label500;
    panda$collections$ImmutableArray* statements502;
    org$pandalanguage$pandac$IRNode* test504;
    panda$collections$Iterator* Iter$277$17508;
    org$pandalanguage$pandac$IRNode* s520;
    panda$core$Bit tmp5527;
    panda$core$Bit tmp6528;
    org$pandalanguage$pandac$IRNode* base531;
    org$pandalanguage$pandac$FieldDecl* field533;
    org$pandalanguage$pandac$IRNode* test536;
    panda$collections$ImmutableArray* ifTrue538;
    org$pandalanguage$pandac$IRNode* ifFalse540;
    panda$collections$Iterator* Iter$291$17544;
    org$pandalanguage$pandac$IRNode* s556;
    panda$core$Bit tmp7563;
    panda$core$Bit tmp8564;
    panda$core$UInt64 value568;
    org$pandalanguage$pandac$IRNode* value571;
    org$pandalanguage$pandac$IRNode* value576;
    panda$core$String* label581;
    panda$collections$ImmutableArray* statements583;
    panda$collections$Iterator* Iter$304$17585;
    org$pandalanguage$pandac$IRNode* s597;
    panda$core$Bit tmp9604;
    panda$core$Bit tmp10605;
    org$pandalanguage$pandac$IRNode* value607;
    panda$collections$ImmutableArray* whens609;
    panda$collections$ImmutableArray* other611;
    panda$collections$Iterator* Iter$314$17615;
    org$pandalanguage$pandac$IRNode* w627;
    panda$core$Bit tmp11634;
    panda$core$Bit tmp12635;
    panda$collections$Iterator* Iter$319$17636;
    org$pandalanguage$pandac$IRNode* s648;
    panda$core$Bit tmp13655;
    panda$core$Bit tmp14656;
    org$pandalanguage$pandac$IRNode* target658;
    org$pandalanguage$pandac$MethodRef* m660;
    panda$core$UInt64 value663;
    org$pandalanguage$pandac$parser$Token$Kind op667;
    org$pandalanguage$pandac$IRNode* base669;
    panda$core$String* label674;
    org$pandalanguage$pandac$IRNode* target676;
    org$pandalanguage$pandac$IRNode* list678;
    panda$collections$ImmutableArray* statements680;
    panda$collections$Iterator* Iter$338$17684;
    org$pandalanguage$pandac$IRNode* s696;
    panda$core$Bit tmp15703;
    panda$core$Bit tmp16704;
    panda$core$Real64 value706;
    org$pandalanguage$pandac$IRNode* value709;
    panda$core$Int64 id714;
    org$pandalanguage$pandac$IRNode* base717;
    panda$core$Int64 id719;
    panda$core$String* str725;
    org$pandalanguage$pandac$IRNode* test729;
    org$pandalanguage$pandac$IRNode* ifTrue731;
    org$pandalanguage$pandac$IRNode* ifFalse733;
    org$pandalanguage$pandac$Type* type748;
    panda$core$String* name751;
    org$pandalanguage$pandac$IRNode* base754;
    panda$collections$ImmutableArray* args756;
    org$pandalanguage$pandac$IRNode* target759;
    panda$collections$ImmutableArray* methods761;
    panda$collections$ImmutableArray* args763;
    org$pandalanguage$pandac$IRNode* target766;
    panda$collections$ImmutableArray* methods768;
    org$pandalanguage$pandac$IRNode* start771;
    org$pandalanguage$pandac$IRNode* end773;
    panda$core$Bit inclusive775;
    org$pandalanguage$pandac$IRNode* step777;
    org$pandalanguage$pandac$Variable$Kind kind780;
    panda$collections$ImmutableArray* decls782;
    panda$collections$Iterator* Iter$373$17784;
    org$pandalanguage$pandac$IRNode* d796;
    panda$core$Bit tmp17803;
    panda$core$Bit tmp18804;
    org$pandalanguage$pandac$Variable* variable806;
    panda$collections$ImmutableArray* tests809;
    panda$collections$ImmutableArray* statements811;
    panda$collections$Iterator* Iter$382$17813;
    org$pandalanguage$pandac$IRNode* t825;
    panda$core$Bit tmp19832;
    panda$core$Bit tmp20833;
    panda$collections$Iterator* Iter$387$17834;
    org$pandalanguage$pandac$IRNode* s846;
    panda$core$Bit tmp21853;
    panda$core$Bit tmp22854;
    panda$core$String* label856;
    org$pandalanguage$pandac$IRNode* test858;
    panda$collections$ImmutableArray* statements860;
    panda$collections$Iterator* Iter$397$17864;
    org$pandalanguage$pandac$IRNode* s876;
    panda$core$Bit tmp23883;
    panda$core$Bit tmp24884;
    {
        $match$233_9373 = self;
        panda$core$Bit $tmp374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp374.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp376 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            test375 = *$tmp376;
            org$pandalanguage$pandac$IRNode** $tmp378 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            msg377 = *$tmp378;
            panda$core$Bit $tmp381 = (($fn380) test375->$class->vtable[4])(test375);
            bool $tmp379 = $tmp381.value;
            if ($tmp379) goto $l382;
            panda$core$Bit $tmp384 = (($fn383) msg377->$class->vtable[4])(msg377);
            $tmp379 = $tmp384.value;
            $l382:;
            panda$core$Bit $tmp385 = { $tmp379 };
            return $tmp385;
        }
        }
        else {
        panda$core$Bit $tmp386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp386.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp388 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            left387 = *$tmp388;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp390 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$233_9373->$data + 32));
            op389 = *$tmp390;
            org$pandalanguage$pandac$IRNode** $tmp392 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 40));
            right391 = *$tmp392;
            panda$core$Bit $tmp395 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op389);
            bool $tmp394 = $tmp395.value;
            if ($tmp394) goto $l396;
            panda$core$Bit $tmp398 = (($fn397) left387->$class->vtable[4])(left387);
            $tmp394 = $tmp398.value;
            $l396:;
            panda$core$Bit $tmp399 = { $tmp394 };
            bool $tmp393 = $tmp399.value;
            if ($tmp393) goto $l400;
            panda$core$Bit $tmp402 = (($fn401) right391->$class->vtable[4])(right391);
            $tmp393 = $tmp402.value;
            $l400:;
            panda$core$Bit $tmp403 = { $tmp393 };
            return $tmp403;
        }
        }
        else {
        panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp404.value) {
        {
            panda$core$Bit* $tmp406 = ((panda$core$Bit*) ((char*) $match$233_9373->$data + 24));
            bit405 = *$tmp406;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp407.value) {
        {
            panda$collections$ImmutableArray** $tmp409 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 16));
            statements408 = *$tmp409;
            {
                ITable* $tmp411 = ((panda$collections$Iterable*) statements408)->$class->itable;
                while ($tmp411->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp411 = $tmp411->next;
                }
                $fn413 $tmp412 = $tmp411->methods[0];
                panda$collections$Iterator* $tmp414 = $tmp412(((panda$collections$Iterable*) statements408));
                Iter$241$17410 = $tmp414;
                $l415:;
                ITable* $tmp417 = Iter$241$17410->$class->itable;
                while ($tmp417->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp417 = $tmp417->next;
                }
                $fn419 $tmp418 = $tmp417->methods[0];
                panda$core$Bit $tmp420 = $tmp418(Iter$241$17410);
                panda$core$Bit $tmp421 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp420);
                if (!$tmp421.value) goto $l416;
                {
                    ITable* $tmp423 = Iter$241$17410->$class->itable;
                    while ($tmp423->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp423 = $tmp423->next;
                    }
                    $fn425 $tmp424 = $tmp423->methods[1];
                    panda$core$Object* $tmp426 = $tmp424(Iter$241$17410);
                    s422 = ((org$pandalanguage$pandac$IRNode*) $tmp426);
                    panda$core$Bit $tmp428 = (($fn427) s422->$class->vtable[4])(s422);
                    if ($tmp428.value) {
                    {
                        {
                            tmp1429 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s422));
                            {
                                tmp2430 = tmp1429;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$17410));
                                return tmp2430;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s422));
                }
                goto $l415;
                $l416:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$17410));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp431.value) {
        {
            panda$core$String** $tmp433 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            label432 = *$tmp433;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp434.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp436 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$233_9373->$data + 24));
            m435 = *$tmp436;
            panda$collections$ImmutableArray** $tmp438 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 32));
            args437 = *$tmp438;
            panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m435->value->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp439.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp441 = ((panda$collections$Iterable*) args437)->$class->itable;
                while ($tmp441->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp441 = $tmp441->next;
                }
                $fn443 $tmp442 = $tmp441->methods[0];
                panda$collections$Iterator* $tmp444 = $tmp442(((panda$collections$Iterable*) args437));
                Iter$253$17440 = $tmp444;
                $l445:;
                ITable* $tmp447 = Iter$253$17440->$class->itable;
                while ($tmp447->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp447 = $tmp447->next;
                }
                $fn449 $tmp448 = $tmp447->methods[0];
                panda$core$Bit $tmp450 = $tmp448(Iter$253$17440);
                panda$core$Bit $tmp451 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp450);
                if (!$tmp451.value) goto $l446;
                {
                    ITable* $tmp453 = Iter$253$17440->$class->itable;
                    while ($tmp453->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp453 = $tmp453->next;
                    }
                    $fn455 $tmp454 = $tmp453->methods[1];
                    panda$core$Object* $tmp456 = $tmp454(Iter$253$17440);
                    arg452 = ((org$pandalanguage$pandac$IRNode*) $tmp456);
                    panda$core$Bit $tmp458 = (($fn457) arg452->$class->vtable[4])(arg452);
                    if ($tmp458.value) {
                    {
                        {
                            tmp3459 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg452));
                            {
                                tmp4460 = tmp3459;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$253$17440));
                                return tmp4460;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg452));
                }
                goto $l445;
                $l446:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$253$17440));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp461.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp463 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            value462 = *$tmp463;
            org$pandalanguage$pandac$Type** $tmp465 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9373->$data + 24));
            type464 = *$tmp465;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp466.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp468 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$233_9373->$data + 16));
            ce467 = *$tmp468;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp469.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp471 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            base470 = *$tmp471;
            org$pandalanguage$pandac$ChoiceEntry** $tmp473 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$233_9373->$data + 24));
            ce472 = *$tmp473;
            panda$core$Int64* $tmp475 = ((panda$core$Int64*) ((char*) $match$233_9373->$data + 32));
            field474 = *$tmp475;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp476.value) {
        {
            org$pandalanguage$pandac$Type** $tmp478 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9373->$data + 16));
            type477 = *$tmp478;
            org$pandalanguage$pandac$IRNode** $tmp480 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            call479 = *$tmp480;
            panda$core$Bit $tmp482 = (($fn481) call479->$class->vtable[4])(call479);
            return $tmp482;
        }
        }
        else {
        panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp483.value) {
        {
            org$pandalanguage$pandac$Type** $tmp485 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9373->$data + 16));
            Type484 = *$tmp485;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp486.value) {
        {
            panda$core$String** $tmp488 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            label487 = *$tmp488;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp489.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp491 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 0));
            target490 = *$tmp491;
            org$pandalanguage$pandac$IRNode** $tmp493 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 8));
            value492 = *$tmp493;
            bool $tmp494 = ((panda$core$Bit) { value492 != NULL }).value;
            if (!$tmp494) goto $l495;
            panda$core$Bit $tmp497 = (($fn496) value492->$class->vtable[4])(value492);
            $tmp494 = $tmp497.value;
            $l495:;
            panda$core$Bit $tmp498 = { $tmp494 };
            return $tmp498;
        }
        }
        else {
        panda$core$Bit $tmp499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp499.value) {
        {
            panda$core$String** $tmp501 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            label500 = *$tmp501;
            panda$collections$ImmutableArray** $tmp503 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 24));
            statements502 = *$tmp503;
            org$pandalanguage$pandac$IRNode** $tmp505 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 32));
            test504 = *$tmp505;
            panda$core$Bit $tmp507 = (($fn506) test504->$class->vtable[4])(test504);
            if ($tmp507.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp509 = ((panda$collections$Iterable*) statements502)->$class->itable;
                while ($tmp509->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp509 = $tmp509->next;
                }
                $fn511 $tmp510 = $tmp509->methods[0];
                panda$collections$Iterator* $tmp512 = $tmp510(((panda$collections$Iterable*) statements502));
                Iter$277$17508 = $tmp512;
                $l513:;
                ITable* $tmp515 = Iter$277$17508->$class->itable;
                while ($tmp515->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp515 = $tmp515->next;
                }
                $fn517 $tmp516 = $tmp515->methods[0];
                panda$core$Bit $tmp518 = $tmp516(Iter$277$17508);
                panda$core$Bit $tmp519 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp518);
                if (!$tmp519.value) goto $l514;
                {
                    ITable* $tmp521 = Iter$277$17508->$class->itable;
                    while ($tmp521->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp521 = $tmp521->next;
                    }
                    $fn523 $tmp522 = $tmp521->methods[1];
                    panda$core$Object* $tmp524 = $tmp522(Iter$277$17508);
                    s520 = ((org$pandalanguage$pandac$IRNode*) $tmp524);
                    panda$core$Bit $tmp526 = (($fn525) s520->$class->vtable[4])(s520);
                    if ($tmp526.value) {
                    {
                        {
                            tmp5527 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s520));
                            {
                                tmp6528 = tmp5527;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$277$17508));
                                return tmp6528;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s520));
                }
                goto $l513;
                $l514:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$277$17508));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp529.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp530.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp532 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            base531 = *$tmp532;
            org$pandalanguage$pandac$FieldDecl** $tmp534 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$233_9373->$data + 32));
            field533 = *$tmp534;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp535.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp537 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            test536 = *$tmp537;
            panda$collections$ImmutableArray** $tmp539 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 24));
            ifTrue538 = *$tmp539;
            org$pandalanguage$pandac$IRNode** $tmp541 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 32));
            ifFalse540 = *$tmp541;
            panda$core$Bit $tmp543 = (($fn542) test536->$class->vtable[4])(test536);
            if ($tmp543.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp545 = ((panda$collections$Iterable*) ifTrue538)->$class->itable;
                while ($tmp545->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp545 = $tmp545->next;
                }
                $fn547 $tmp546 = $tmp545->methods[0];
                panda$collections$Iterator* $tmp548 = $tmp546(((panda$collections$Iterable*) ifTrue538));
                Iter$291$17544 = $tmp548;
                $l549:;
                ITable* $tmp551 = Iter$291$17544->$class->itable;
                while ($tmp551->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp551 = $tmp551->next;
                }
                $fn553 $tmp552 = $tmp551->methods[0];
                panda$core$Bit $tmp554 = $tmp552(Iter$291$17544);
                panda$core$Bit $tmp555 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp554);
                if (!$tmp555.value) goto $l550;
                {
                    ITable* $tmp557 = Iter$291$17544->$class->itable;
                    while ($tmp557->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp557 = $tmp557->next;
                    }
                    $fn559 $tmp558 = $tmp557->methods[1];
                    panda$core$Object* $tmp560 = $tmp558(Iter$291$17544);
                    s556 = ((org$pandalanguage$pandac$IRNode*) $tmp560);
                    panda$core$Bit $tmp562 = (($fn561) s556->$class->vtable[4])(s556);
                    if ($tmp562.value) {
                    {
                        {
                            tmp7563 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s556));
                            {
                                tmp8564 = tmp7563;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$291$17544));
                                return tmp8564;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s556));
                }
                goto $l549;
                $l550:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$291$17544));
            }
            panda$core$Bit $tmp566 = (($fn565) ifFalse540->$class->vtable[4])(ifFalse540);
            return $tmp566;
        }
        }
        else {
        panda$core$Bit $tmp567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp567.value) {
        {
            panda$core$UInt64* $tmp569 = ((panda$core$UInt64*) ((char*) $match$233_9373->$data + 24));
            value568 = *$tmp569;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp570.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp572 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            value571 = *$tmp572;
            panda$core$Bit $tmp574 = (($fn573) value571->$class->vtable[4])(value571);
            return $tmp574;
        }
        }
        else {
        panda$core$Bit $tmp575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp575.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp577 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            value576 = *$tmp577;
            panda$core$Bit $tmp579 = (($fn578) value576->$class->vtable[4])(value576);
            return $tmp579;
        }
        }
        else {
        panda$core$Bit $tmp580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp580.value) {
        {
            panda$core$String** $tmp582 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            label581 = *$tmp582;
            panda$collections$ImmutableArray** $tmp584 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 24));
            statements583 = *$tmp584;
            {
                ITable* $tmp586 = ((panda$collections$Iterable*) statements583)->$class->itable;
                while ($tmp586->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp586 = $tmp586->next;
                }
                $fn588 $tmp587 = $tmp586->methods[0];
                panda$collections$Iterator* $tmp589 = $tmp587(((panda$collections$Iterable*) statements583));
                Iter$304$17585 = $tmp589;
                $l590:;
                ITable* $tmp592 = Iter$304$17585->$class->itable;
                while ($tmp592->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp592 = $tmp592->next;
                }
                $fn594 $tmp593 = $tmp592->methods[0];
                panda$core$Bit $tmp595 = $tmp593(Iter$304$17585);
                panda$core$Bit $tmp596 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp595);
                if (!$tmp596.value) goto $l591;
                {
                    ITable* $tmp598 = Iter$304$17585->$class->itable;
                    while ($tmp598->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp598 = $tmp598->next;
                    }
                    $fn600 $tmp599 = $tmp598->methods[1];
                    panda$core$Object* $tmp601 = $tmp599(Iter$304$17585);
                    s597 = ((org$pandalanguage$pandac$IRNode*) $tmp601);
                    panda$core$Bit $tmp603 = (($fn602) s597->$class->vtable[4])(s597);
                    if ($tmp603.value) {
                    {
                        {
                            tmp9604 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s597));
                            {
                                tmp10605 = tmp9604;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$304$17585));
                                return tmp10605;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s597));
                }
                goto $l590;
                $l591:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$304$17585));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp606.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp608 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            value607 = *$tmp608;
            panda$collections$ImmutableArray** $tmp610 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 24));
            whens609 = *$tmp610;
            panda$collections$ImmutableArray** $tmp612 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 32));
            other611 = *$tmp612;
            panda$core$Bit $tmp614 = (($fn613) value607->$class->vtable[4])(value607);
            if ($tmp614.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp616 = ((panda$collections$Iterable*) whens609)->$class->itable;
                while ($tmp616->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp616 = $tmp616->next;
                }
                $fn618 $tmp617 = $tmp616->methods[0];
                panda$collections$Iterator* $tmp619 = $tmp617(((panda$collections$Iterable*) whens609));
                Iter$314$17615 = $tmp619;
                $l620:;
                ITable* $tmp622 = Iter$314$17615->$class->itable;
                while ($tmp622->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp622 = $tmp622->next;
                }
                $fn624 $tmp623 = $tmp622->methods[0];
                panda$core$Bit $tmp625 = $tmp623(Iter$314$17615);
                panda$core$Bit $tmp626 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp625);
                if (!$tmp626.value) goto $l621;
                {
                    ITable* $tmp628 = Iter$314$17615->$class->itable;
                    while ($tmp628->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp628 = $tmp628->next;
                    }
                    $fn630 $tmp629 = $tmp628->methods[1];
                    panda$core$Object* $tmp631 = $tmp629(Iter$314$17615);
                    w627 = ((org$pandalanguage$pandac$IRNode*) $tmp631);
                    panda$core$Bit $tmp633 = (($fn632) w627->$class->vtable[4])(w627);
                    if ($tmp633.value) {
                    {
                        {
                            tmp11634 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w627));
                            {
                                tmp12635 = tmp11634;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$314$17615));
                                return tmp12635;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w627));
                }
                goto $l620;
                $l621:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$314$17615));
            }
            {
                ITable* $tmp637 = ((panda$collections$Iterable*) other611)->$class->itable;
                while ($tmp637->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp637 = $tmp637->next;
                }
                $fn639 $tmp638 = $tmp637->methods[0];
                panda$collections$Iterator* $tmp640 = $tmp638(((panda$collections$Iterable*) other611));
                Iter$319$17636 = $tmp640;
                $l641:;
                ITable* $tmp643 = Iter$319$17636->$class->itable;
                while ($tmp643->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp643 = $tmp643->next;
                }
                $fn645 $tmp644 = $tmp643->methods[0];
                panda$core$Bit $tmp646 = $tmp644(Iter$319$17636);
                panda$core$Bit $tmp647 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp646);
                if (!$tmp647.value) goto $l642;
                {
                    ITable* $tmp649 = Iter$319$17636->$class->itable;
                    while ($tmp649->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp649 = $tmp649->next;
                    }
                    $fn651 $tmp650 = $tmp649->methods[1];
                    panda$core$Object* $tmp652 = $tmp650(Iter$319$17636);
                    s648 = ((org$pandalanguage$pandac$IRNode*) $tmp652);
                    panda$core$Bit $tmp654 = (($fn653) s648->$class->vtable[4])(s648);
                    if ($tmp654.value) {
                    {
                        {
                            tmp13655 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s648));
                            {
                                tmp14656 = tmp13655;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$319$17636));
                                return tmp14656;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s648));
                }
                goto $l641;
                $l642:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$319$17636));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp657.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp659 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            target658 = *$tmp659;
            org$pandalanguage$pandac$MethodRef** $tmp661 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$233_9373->$data + 24));
            m660 = *$tmp661;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp662.value) {
        {
            panda$core$UInt64* $tmp664 = ((panda$core$UInt64*) ((char*) $match$233_9373->$data + 24));
            value663 = *$tmp664;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp665.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp666.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp668 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$233_9373->$data + 16));
            op667 = *$tmp668;
            org$pandalanguage$pandac$IRNode** $tmp670 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            base669 = *$tmp670;
            panda$core$Bit $tmp672 = (($fn671) base669->$class->vtable[4])(base669);
            return $tmp672;
        }
        }
        else {
        panda$core$Bit $tmp673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp673.value) {
        {
            panda$core$String** $tmp675 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            label674 = *$tmp675;
            org$pandalanguage$pandac$IRNode** $tmp677 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            target676 = *$tmp677;
            org$pandalanguage$pandac$IRNode** $tmp679 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 32));
            list678 = *$tmp679;
            panda$collections$ImmutableArray** $tmp681 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 40));
            statements680 = *$tmp681;
            panda$core$Bit $tmp683 = (($fn682) list678->$class->vtable[4])(list678);
            if ($tmp683.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp685 = ((panda$collections$Iterable*) statements680)->$class->itable;
                while ($tmp685->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp685 = $tmp685->next;
                }
                $fn687 $tmp686 = $tmp685->methods[0];
                panda$collections$Iterator* $tmp688 = $tmp686(((panda$collections$Iterable*) statements680));
                Iter$338$17684 = $tmp688;
                $l689:;
                ITable* $tmp691 = Iter$338$17684->$class->itable;
                while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp691 = $tmp691->next;
                }
                $fn693 $tmp692 = $tmp691->methods[0];
                panda$core$Bit $tmp694 = $tmp692(Iter$338$17684);
                panda$core$Bit $tmp695 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp694);
                if (!$tmp695.value) goto $l690;
                {
                    ITable* $tmp697 = Iter$338$17684->$class->itable;
                    while ($tmp697->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp697 = $tmp697->next;
                    }
                    $fn699 $tmp698 = $tmp697->methods[1];
                    panda$core$Object* $tmp700 = $tmp698(Iter$338$17684);
                    s696 = ((org$pandalanguage$pandac$IRNode*) $tmp700);
                    panda$core$Bit $tmp702 = (($fn701) s696->$class->vtable[4])(s696);
                    if ($tmp702.value) {
                    {
                        {
                            tmp15703 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s696));
                            {
                                tmp16704 = tmp15703;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$338$17684));
                                return tmp16704;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s696));
                }
                goto $l689;
                $l690:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$338$17684));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp705.value) {
        {
            panda$core$Real64* $tmp707 = ((panda$core$Real64*) ((char*) $match$233_9373->$data + 24));
            value706 = *$tmp707;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp708.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp710 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            value709 = *$tmp710;
            panda$core$Bit $tmp712 = (($fn711) value709->$class->vtable[4])(value709);
            return $tmp712;
        }
        }
        else {
        panda$core$Bit $tmp713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp713.value) {
        {
            panda$core$Int64* $tmp715 = ((panda$core$Int64*) ((char*) $match$233_9373->$data + 24));
            id714 = *$tmp715;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp716.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp718 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 0));
            base717 = *$tmp718;
            panda$core$Int64* $tmp720 = ((panda$core$Int64*) ((char*) $match$233_9373->$data + 8));
            id719 = *$tmp720;
            panda$core$Bit $tmp722 = (($fn721) base717->$class->vtable[4])(base717);
            return $tmp722;
        }
        }
        else {
        panda$core$Bit $tmp723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp723.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp724.value) {
        {
            panda$core$String** $tmp726 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            str725 = *$tmp726;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp727.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp728.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp730 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            test729 = *$tmp730;
            org$pandalanguage$pandac$IRNode** $tmp732 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            ifTrue731 = *$tmp732;
            org$pandalanguage$pandac$IRNode** $tmp734 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 32));
            ifFalse733 = *$tmp734;
            panda$core$Bit $tmp738 = (($fn737) test729->$class->vtable[4])(test729);
            bool $tmp736 = $tmp738.value;
            if ($tmp736) goto $l739;
            panda$core$Bit $tmp741 = (($fn740) ifTrue731->$class->vtable[4])(ifTrue731);
            $tmp736 = $tmp741.value;
            $l739:;
            panda$core$Bit $tmp742 = { $tmp736 };
            bool $tmp735 = $tmp742.value;
            if ($tmp735) goto $l743;
            panda$core$Bit $tmp745 = (($fn744) ifFalse733->$class->vtable[4])(ifFalse733);
            $tmp735 = $tmp745.value;
            $l743:;
            panda$core$Bit $tmp746 = { $tmp735 };
            return $tmp746;
        }
        }
        else {
        panda$core$Bit $tmp747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp747.value) {
        {
            org$pandalanguage$pandac$Type** $tmp749 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9373->$data + 16));
            type748 = *$tmp749;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp750.value) {
        {
            panda$core$String** $tmp752 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            name751 = *$tmp752;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp753.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp755 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            base754 = *$tmp755;
            panda$collections$ImmutableArray** $tmp757 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 32));
            args756 = *$tmp757;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp758.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp760 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            target759 = *$tmp760;
            panda$collections$ImmutableArray** $tmp762 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 32));
            methods761 = *$tmp762;
            panda$collections$ImmutableArray** $tmp764 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 40));
            args763 = *$tmp764;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp765.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp767 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            target766 = *$tmp767;
            panda$collections$ImmutableArray** $tmp769 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 24));
            methods768 = *$tmp769;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp770.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp772 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            start771 = *$tmp772;
            org$pandalanguage$pandac$IRNode** $tmp774 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            end773 = *$tmp774;
            panda$core$Bit* $tmp776 = ((panda$core$Bit*) ((char*) $match$233_9373->$data + 32));
            inclusive775 = *$tmp776;
            org$pandalanguage$pandac$IRNode** $tmp778 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 33));
            step777 = *$tmp778;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp779.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp781 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$233_9373->$data + 16));
            kind780 = *$tmp781;
            panda$collections$ImmutableArray** $tmp783 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 24));
            decls782 = *$tmp783;
            {
                ITable* $tmp785 = ((panda$collections$Iterable*) decls782)->$class->itable;
                while ($tmp785->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp785 = $tmp785->next;
                }
                $fn787 $tmp786 = $tmp785->methods[0];
                panda$collections$Iterator* $tmp788 = $tmp786(((panda$collections$Iterable*) decls782));
                Iter$373$17784 = $tmp788;
                $l789:;
                ITable* $tmp791 = Iter$373$17784->$class->itable;
                while ($tmp791->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp791 = $tmp791->next;
                }
                $fn793 $tmp792 = $tmp791->methods[0];
                panda$core$Bit $tmp794 = $tmp792(Iter$373$17784);
                panda$core$Bit $tmp795 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp794);
                if (!$tmp795.value) goto $l790;
                {
                    ITable* $tmp797 = Iter$373$17784->$class->itable;
                    while ($tmp797->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp797 = $tmp797->next;
                    }
                    $fn799 $tmp798 = $tmp797->methods[1];
                    panda$core$Object* $tmp800 = $tmp798(Iter$373$17784);
                    d796 = ((org$pandalanguage$pandac$IRNode*) $tmp800);
                    panda$core$Bit $tmp802 = (($fn801) d796->$class->vtable[4])(d796);
                    if ($tmp802.value) {
                    {
                        {
                            tmp17803 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d796));
                            {
                                tmp18804 = tmp17803;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$373$17784));
                                return tmp18804;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d796));
                }
                goto $l789;
                $l790:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$373$17784));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp805.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp807 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$233_9373->$data + 16));
            variable806 = *$tmp807;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp808.value) {
        {
            panda$collections$ImmutableArray** $tmp810 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 16));
            tests809 = *$tmp810;
            panda$collections$ImmutableArray** $tmp812 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 24));
            statements811 = *$tmp812;
            {
                ITable* $tmp814 = ((panda$collections$Iterable*) tests809)->$class->itable;
                while ($tmp814->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp814 = $tmp814->next;
                }
                $fn816 $tmp815 = $tmp814->methods[0];
                panda$collections$Iterator* $tmp817 = $tmp815(((panda$collections$Iterable*) tests809));
                Iter$382$17813 = $tmp817;
                $l818:;
                ITable* $tmp820 = Iter$382$17813->$class->itable;
                while ($tmp820->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp820 = $tmp820->next;
                }
                $fn822 $tmp821 = $tmp820->methods[0];
                panda$core$Bit $tmp823 = $tmp821(Iter$382$17813);
                panda$core$Bit $tmp824 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp823);
                if (!$tmp824.value) goto $l819;
                {
                    ITable* $tmp826 = Iter$382$17813->$class->itable;
                    while ($tmp826->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp826 = $tmp826->next;
                    }
                    $fn828 $tmp827 = $tmp826->methods[1];
                    panda$core$Object* $tmp829 = $tmp827(Iter$382$17813);
                    t825 = ((org$pandalanguage$pandac$IRNode*) $tmp829);
                    panda$core$Bit $tmp831 = (($fn830) t825->$class->vtable[4])(t825);
                    if ($tmp831.value) {
                    {
                        {
                            tmp19832 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t825));
                            {
                                tmp20833 = tmp19832;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$382$17813));
                                return tmp20833;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t825));
                }
                goto $l818;
                $l819:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$382$17813));
            }
            {
                ITable* $tmp835 = ((panda$collections$Iterable*) statements811)->$class->itable;
                while ($tmp835->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp835 = $tmp835->next;
                }
                $fn837 $tmp836 = $tmp835->methods[0];
                panda$collections$Iterator* $tmp838 = $tmp836(((panda$collections$Iterable*) statements811));
                Iter$387$17834 = $tmp838;
                $l839:;
                ITable* $tmp841 = Iter$387$17834->$class->itable;
                while ($tmp841->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp841 = $tmp841->next;
                }
                $fn843 $tmp842 = $tmp841->methods[0];
                panda$core$Bit $tmp844 = $tmp842(Iter$387$17834);
                panda$core$Bit $tmp845 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp844);
                if (!$tmp845.value) goto $l840;
                {
                    ITable* $tmp847 = Iter$387$17834->$class->itable;
                    while ($tmp847->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp847 = $tmp847->next;
                    }
                    $fn849 $tmp848 = $tmp847->methods[1];
                    panda$core$Object* $tmp850 = $tmp848(Iter$387$17834);
                    s846 = ((org$pandalanguage$pandac$IRNode*) $tmp850);
                    panda$core$Bit $tmp852 = (($fn851) s846->$class->vtable[4])(s846);
                    if ($tmp852.value) {
                    {
                        {
                            tmp21853 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s846));
                            {
                                tmp22854 = tmp21853;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$387$17834));
                                return tmp22854;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s846));
                }
                goto $l839;
                $l840:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$387$17834));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp855.value) {
        {
            panda$core$String** $tmp857 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            label856 = *$tmp857;
            org$pandalanguage$pandac$IRNode** $tmp859 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            test858 = *$tmp859;
            panda$collections$ImmutableArray** $tmp861 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 32));
            statements860 = *$tmp861;
            panda$core$Bit $tmp863 = (($fn862) test858->$class->vtable[4])(test858);
            if ($tmp863.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp865 = ((panda$collections$Iterable*) statements860)->$class->itable;
                while ($tmp865->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp865 = $tmp865->next;
                }
                $fn867 $tmp866 = $tmp865->methods[0];
                panda$collections$Iterator* $tmp868 = $tmp866(((panda$collections$Iterable*) statements860));
                Iter$397$17864 = $tmp868;
                $l869:;
                ITable* $tmp871 = Iter$397$17864->$class->itable;
                while ($tmp871->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp871 = $tmp871->next;
                }
                $fn873 $tmp872 = $tmp871->methods[0];
                panda$core$Bit $tmp874 = $tmp872(Iter$397$17864);
                panda$core$Bit $tmp875 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp874);
                if (!$tmp875.value) goto $l870;
                {
                    ITable* $tmp877 = Iter$397$17864->$class->itable;
                    while ($tmp877->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp877 = $tmp877->next;
                    }
                    $fn879 $tmp878 = $tmp877->methods[1];
                    panda$core$Object* $tmp880 = $tmp878(Iter$397$17864);
                    s876 = ((org$pandalanguage$pandac$IRNode*) $tmp880);
                    panda$core$Bit $tmp882 = (($fn881) s876->$class->vtable[4])(s876);
                    if ($tmp882.value) {
                    {
                        {
                            tmp23883 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s876));
                            {
                                tmp24884 = tmp23883;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$397$17864));
                                return tmp24884;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s876));
                }
                goto $l869;
                $l870:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$397$17864));
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
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$410_9885;
    org$pandalanguage$pandac$IRNode* test887;
    org$pandalanguage$pandac$IRNode* msg889;
    org$pandalanguage$pandac$IRNode* left903;
    org$pandalanguage$pandac$parser$Token$Kind op905;
    org$pandalanguage$pandac$IRNode* right907;
    panda$core$Bit bit921;
    panda$collections$ImmutableArray* statements925;
    panda$core$MutableString* result927;
    panda$collections$Iterator* Iter$422$17930;
    org$pandalanguage$pandac$IRNode* s942;
    panda$core$Char8 $tmp949;
    panda$core$String* tmp25950;
    panda$core$String* label953;
    org$pandalanguage$pandac$MethodRef* m961;
    panda$collections$ImmutableArray* args963;
    org$pandalanguage$pandac$IRNode* value973;
    org$pandalanguage$pandac$Type* type975;
    org$pandalanguage$pandac$ChoiceEntry* ce996;
    org$pandalanguage$pandac$IRNode* base1000;
    org$pandalanguage$pandac$ChoiceEntry* ce1002;
    panda$core$Int64 field1004;
    org$pandalanguage$pandac$Type* type1018;
    org$pandalanguage$pandac$IRNode* call1020;
    org$pandalanguage$pandac$IRNode* $match$444_171022;
    panda$collections$ImmutableArray* args1024;
    org$pandalanguage$pandac$Type* Type1034;
    panda$core$String* label1038;
    org$pandalanguage$pandac$IRNode* target1046;
    org$pandalanguage$pandac$IRNode* value1048;
    panda$core$String* label1060;
    panda$collections$ImmutableArray* statements1062;
    org$pandalanguage$pandac$IRNode* test1064;
    panda$core$MutableString* result1066;
    panda$collections$Iterator* Iter$468$171072;
    org$pandalanguage$pandac$IRNode* s1084;
    panda$core$String* tmp261095;
    org$pandalanguage$pandac$IRNode* expr1098;
    org$pandalanguage$pandac$IRNode* stmt1100;
    org$pandalanguage$pandac$IRNode* base1110;
    org$pandalanguage$pandac$FieldDecl* field1112;
    org$pandalanguage$pandac$IRNode* test1122;
    panda$collections$ImmutableArray* ifTrue1124;
    org$pandalanguage$pandac$IRNode* ifFalse1126;
    panda$core$MutableString* result1128;
    panda$collections$Iterator* Iter$479$171134;
    org$pandalanguage$pandac$IRNode* s1146;
    panda$core$Char8 $tmp1153;
    panda$core$String* tmp271158;
    panda$core$UInt64 value1161;
    org$pandalanguage$pandac$IRNode* value1165;
    org$pandalanguage$pandac$IRNode* value1172;
    panda$core$String* label1179;
    panda$collections$ImmutableArray* statements1181;
    panda$core$MutableString* result1183;
    panda$collections$Iterator* Iter$499$171189;
    org$pandalanguage$pandac$IRNode* s1201;
    panda$core$Char8 $tmp1208;
    panda$core$String* tmp281209;
    org$pandalanguage$pandac$IRNode* value1212;
    panda$collections$ImmutableArray* whens1214;
    panda$collections$ImmutableArray* other1216;
    panda$core$MutableString* result1218;
    panda$collections$Iterator* Iter$506$171224;
    org$pandalanguage$pandac$IRNode* w1236;
    panda$collections$Iterator* Iter$511$211244;
    org$pandalanguage$pandac$IRNode* s1256;
    panda$core$Char8 $tmp1263;
    panda$core$String* tmp291264;
    org$pandalanguage$pandac$IRNode* target1267;
    org$pandalanguage$pandac$MethodRef* m1269;
    panda$core$UInt64 value1279;
    org$pandalanguage$pandac$parser$Token$Kind op1287;
    org$pandalanguage$pandac$IRNode* base1289;
    panda$core$String* label1300;
    org$pandalanguage$pandac$IRNode* target1302;
    org$pandalanguage$pandac$IRNode* list1304;
    panda$collections$ImmutableArray* statements1306;
    panda$core$MutableString* result1308;
    panda$collections$Iterator* Iter$534$171320;
    org$pandalanguage$pandac$IRNode* s1332;
    panda$core$Char8 $tmp1339;
    panda$core$String* tmp301340;
    panda$core$Real64 value1343;
    org$pandalanguage$pandac$IRNode* value1347;
    org$pandalanguage$pandac$Type* type1355;
    panda$core$Int64 id1357;
    org$pandalanguage$pandac$IRNode* base1368;
    panda$core$Int64 id1370;
    panda$core$String* str1383;
    org$pandalanguage$pandac$IRNode* test1388;
    org$pandalanguage$pandac$IRNode* ifTrue1390;
    org$pandalanguage$pandac$IRNode* ifFalse1392;
    org$pandalanguage$pandac$Type* type1405;
    panda$core$String* name1409;
    org$pandalanguage$pandac$IRNode* base1412;
    panda$collections$ImmutableArray* args1414;
    org$pandalanguage$pandac$IRNode* target1425;
    panda$collections$ImmutableArray* methods1427;
    panda$collections$ImmutableArray* args1429;
    org$pandalanguage$pandac$IRNode* target1444;
    panda$collections$ImmutableArray* methods1446;
    org$pandalanguage$pandac$IRNode* start1457;
    org$pandalanguage$pandac$IRNode* end1459;
    panda$core$Bit inclusive1461;
    org$pandalanguage$pandac$IRNode* step1463;
    panda$core$MutableString* result1465;
    panda$core$String* tmp311473;
    org$pandalanguage$pandac$Variable$Kind kind1476;
    panda$collections$ImmutableArray* decls1478;
    panda$core$MutableString* result1480;
    org$pandalanguage$pandac$Variable$Kind $match$588_171482;
    panda$core$String* tmp321492;
    org$pandalanguage$pandac$Variable* variable1495;
    panda$collections$ImmutableArray* tests1498;
    panda$collections$ImmutableArray* statements1500;
    panda$core$String* label1513;
    org$pandalanguage$pandac$IRNode* test1515;
    panda$collections$ImmutableArray* statements1517;
    panda$core$MutableString* result1519;
    panda$collections$Iterator* Iter$606$171528;
    org$pandalanguage$pandac$IRNode* s1540;
    panda$core$Char8 $tmp1547;
    panda$core$String* tmp331548;
    {
        $match$410_9885 = self;
        panda$core$Bit $tmp886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp886.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp888 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 16));
            test887 = *$tmp888;
            org$pandalanguage$pandac$IRNode** $tmp890 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 24));
            msg889 = *$tmp890;
            if (((panda$core$Bit) { msg889 != NULL }).value) {
            {
                panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s891, ((panda$core$Object*) test887));
                panda$core$String* $tmp894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp892, &$s893);
                panda$core$String* $tmp895 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp894, ((panda$core$Object*) msg889));
                panda$core$String* $tmp897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp895, &$s896);
                return $tmp897;
            }
            }
            panda$core$String* $tmp899 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s898, ((panda$core$Object*) test887));
            panda$core$String* $tmp901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp899, &$s900);
            return $tmp901;
        }
        }
        else {
        panda$core$Bit $tmp902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp902.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp904 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 24));
            left903 = *$tmp904;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp906 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$410_9885->$data + 32));
            op905 = *$tmp906;
            org$pandalanguage$pandac$IRNode** $tmp908 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 40));
            right907 = *$tmp908;
            panda$core$String* $tmp910 = (($fn909) left903->$class->vtable[0])(left903);
            panda$core$String* $tmp912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp910, &$s911);
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp913;
            $tmp913 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp913->value = op905;
            panda$core$String* $tmp914 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp912, ((panda$core$Object*) $tmp913));
            panda$core$String* $tmp916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp914, &$s915);
            panda$core$String* $tmp917 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp916, ((panda$core$Object*) right907));
            panda$core$String* $tmp919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp917, &$s918);
            return $tmp919;
        }
        }
        else {
        panda$core$Bit $tmp920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp920.value) {
        {
            panda$core$Bit* $tmp922 = ((panda$core$Bit*) ((char*) $match$410_9885->$data + 24));
            bit921 = *$tmp922;
            panda$core$String* $tmp923 = panda$core$Bit$convert$R$panda$core$String(bit921);
            return $tmp923;
        }
        }
        else {
        panda$core$Bit $tmp924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp924.value) {
        {
            panda$collections$ImmutableArray** $tmp926 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 16));
            statements925 = *$tmp926;
            panda$core$MutableString* $tmp928 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp928, &$s929);
            result927 = $tmp928;
            {
                ITable* $tmp931 = ((panda$collections$Iterable*) statements925)->$class->itable;
                while ($tmp931->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp931 = $tmp931->next;
                }
                $fn933 $tmp932 = $tmp931->methods[0];
                panda$collections$Iterator* $tmp934 = $tmp932(((panda$collections$Iterable*) statements925));
                Iter$422$17930 = $tmp934;
                $l935:;
                ITable* $tmp937 = Iter$422$17930->$class->itable;
                while ($tmp937->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp937 = $tmp937->next;
                }
                $fn939 $tmp938 = $tmp937->methods[0];
                panda$core$Bit $tmp940 = $tmp938(Iter$422$17930);
                panda$core$Bit $tmp941 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp940);
                if (!$tmp941.value) goto $l936;
                {
                    ITable* $tmp943 = Iter$422$17930->$class->itable;
                    while ($tmp943->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp943 = $tmp943->next;
                    }
                    $fn945 $tmp944 = $tmp943->methods[1];
                    panda$core$Object* $tmp946 = $tmp944(Iter$422$17930);
                    s942 = ((org$pandalanguage$pandac$IRNode*) $tmp946);
                    panda$core$String* $tmp948 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s942), &$s947);
                    panda$core$MutableString$append$panda$core$String(result927, $tmp948);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s942));
                }
                goto $l935;
                $l936:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$422$17930));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp949, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result927, $tmp949);
            {
                panda$core$String* $tmp951 = panda$core$MutableString$finish$R$panda$core$String(result927);
                tmp25950 = $tmp951;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result927));
                return tmp25950;
            }
        }
        }
        else {
        panda$core$Bit $tmp952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp952.value) {
        {
            panda$core$String** $tmp954 = ((panda$core$String**) ((char*) $match$410_9885->$data + 16));
            label953 = *$tmp954;
            if (((panda$core$Bit) { label953 != NULL }).value) {
            {
                panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s955, label953);
                panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp956, &$s957);
                return $tmp958;
            }
            }
            return &$s959;
        }
        }
        else {
        panda$core$Bit $tmp960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp960.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp962 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$410_9885->$data + 24));
            m961 = *$tmp962;
            panda$collections$ImmutableArray** $tmp964 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 32));
            args963 = *$tmp964;
            panda$core$String* $tmp965 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m961->value)->name);
            panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp965, &$s966);
            panda$core$String* $tmp968 = panda$collections$ImmutableArray$join$R$panda$core$String(args963);
            panda$core$String* $tmp969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp967, $tmp968);
            panda$core$String* $tmp971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp969, &$s970);
            return $tmp971;
        }
        }
        else {
        panda$core$Bit $tmp972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp972.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp974 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 16));
            value973 = *$tmp974;
            org$pandalanguage$pandac$Type** $tmp976 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9885->$data + 24));
            type975 = *$tmp976;
            org$pandalanguage$pandac$Type* $tmp978 = (($fn977) value973->$class->vtable[2])(value973);
            org$pandalanguage$pandac$Type* $tmp979 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp980 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp978, $tmp979);
            if ($tmp980.value) {
            {
                panda$core$String* $tmp982 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s981, ((panda$core$Object*) value973));
                panda$core$String* $tmp984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp982, &$s983);
                panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp984, ((panda$core$Object*) type975));
                panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp985, &$s986);
                return $tmp987;
            }
            }
            panda$core$String* $tmp989 = (($fn988) value973->$class->vtable[0])(value973);
            panda$core$String* $tmp991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp989, &$s990);
            panda$core$String* $tmp992 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp991, ((panda$core$Object*) type975));
            panda$core$String* $tmp994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp992, &$s993);
            return $tmp994;
        }
        }
        else {
        panda$core$Bit $tmp995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp995.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp997 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$410_9885->$data + 16));
            ce996 = *$tmp997;
            panda$core$String* $tmp998 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce996);
            return $tmp998;
        }
        }
        else {
        panda$core$Bit $tmp999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp999.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1001 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 16));
            base1000 = *$tmp1001;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1003 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$410_9885->$data + 24));
            ce1002 = *$tmp1003;
            panda$core$Int64* $tmp1005 = ((panda$core$Int64*) ((char*) $match$410_9885->$data + 32));
            field1004 = *$tmp1005;
            panda$core$String* $tmp1007 = (($fn1006) base1000->$class->vtable[0])(base1000);
            panda$core$String* $tmp1009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1007, &$s1008);
            panda$core$String* $tmp1010 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1009, ((panda$core$Object*) ce1002));
            panda$core$String* $tmp1012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1010, &$s1011);
            panda$core$Int64$wrapper* $tmp1013;
            $tmp1013 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1013->value = field1004;
            panda$core$String* $tmp1014 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1012, ((panda$core$Object*) $tmp1013));
            panda$core$String* $tmp1016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1014, &$s1015);
            return $tmp1016;
        }
        }
        else {
        panda$core$Bit $tmp1017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1017.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1019 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9885->$data + 16));
            type1018 = *$tmp1019;
            org$pandalanguage$pandac$IRNode** $tmp1021 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 24));
            call1020 = *$tmp1021;
            {
                $match$444_171022 = call1020;
                panda$core$Bit $tmp1023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_171022->$rawValue, ((panda$core$Int64) { 5 }));
                if ($tmp1023.value) {
                {
                    panda$collections$ImmutableArray** $tmp1025 = ((panda$collections$ImmutableArray**) ((char*) $match$444_171022->$data + 32));
                    args1024 = *$tmp1025;
                    panda$core$String* $tmp1026 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1018);
                    panda$core$String* $tmp1028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1026, &$s1027);
                    panda$core$String* $tmp1029 = panda$collections$ImmutableArray$join$R$panda$core$String(args1024);
                    panda$core$String* $tmp1030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1028, $tmp1029);
                    panda$core$String* $tmp1032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1030, &$s1031);
                    return $tmp1032;
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
        panda$core$Bit $tmp1033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1033.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1035 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9885->$data + 16));
            Type1034 = *$tmp1035;
            return &$s1036;
        }
        }
        else {
        panda$core$Bit $tmp1037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1037.value) {
        {
            panda$core$String** $tmp1039 = ((panda$core$String**) ((char*) $match$410_9885->$data + 16));
            label1038 = *$tmp1039;
            if (((panda$core$Bit) { label1038 != NULL }).value) {
            {
                panda$core$String* $tmp1041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1040, label1038);
                panda$core$String* $tmp1043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1041, &$s1042);
                return $tmp1043;
            }
            }
            return &$s1044;
        }
        }
        else {
        panda$core$Bit $tmp1045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1045.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1047 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 0));
            target1046 = *$tmp1047;
            org$pandalanguage$pandac$IRNode** $tmp1049 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 8));
            value1048 = *$tmp1049;
            if (((panda$core$Bit) { value1048 != NULL }).value) {
            {
                panda$core$String* $tmp1051 = (($fn1050) target1046->$class->vtable[0])(target1046);
                panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1051, &$s1052);
                panda$core$String* $tmp1054 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1053, ((panda$core$Object*) value1048));
                panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1054, &$s1055);
                return $tmp1056;
            }
            }
            panda$core$String* $tmp1058 = (($fn1057) target1046->$class->vtable[0])(target1046);
            return $tmp1058;
        }
        }
        else {
        panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1059.value) {
        {
            panda$core$String** $tmp1061 = ((panda$core$String**) ((char*) $match$410_9885->$data + 16));
            label1060 = *$tmp1061;
            panda$collections$ImmutableArray** $tmp1063 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 24));
            statements1062 = *$tmp1063;
            org$pandalanguage$pandac$IRNode** $tmp1065 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 32));
            test1064 = *$tmp1065;
            panda$core$MutableString* $tmp1067 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1067);
            result1066 = $tmp1067;
            if (((panda$core$Bit) { label1060 != NULL }).value) {
            {
                panda$core$String* $tmp1068 = panda$core$String$convert$R$panda$core$String(label1060);
                panda$core$String* $tmp1070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1068, &$s1069);
                panda$core$MutableString$append$panda$core$String(result1066, $tmp1070);
            }
            }
            panda$core$MutableString$append$panda$core$String(result1066, &$s1071);
            {
                ITable* $tmp1073 = ((panda$collections$Iterable*) statements1062)->$class->itable;
                while ($tmp1073->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1073 = $tmp1073->next;
                }
                $fn1075 $tmp1074 = $tmp1073->methods[0];
                panda$collections$Iterator* $tmp1076 = $tmp1074(((panda$collections$Iterable*) statements1062));
                Iter$468$171072 = $tmp1076;
                $l1077:;
                ITable* $tmp1079 = Iter$468$171072->$class->itable;
                while ($tmp1079->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1079 = $tmp1079->next;
                }
                $fn1081 $tmp1080 = $tmp1079->methods[0];
                panda$core$Bit $tmp1082 = $tmp1080(Iter$468$171072);
                panda$core$Bit $tmp1083 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1082);
                if (!$tmp1083.value) goto $l1078;
                {
                    ITable* $tmp1085 = Iter$468$171072->$class->itable;
                    while ($tmp1085->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1085 = $tmp1085->next;
                    }
                    $fn1087 $tmp1086 = $tmp1085->methods[1];
                    panda$core$Object* $tmp1088 = $tmp1086(Iter$468$171072);
                    s1084 = ((org$pandalanguage$pandac$IRNode*) $tmp1088);
                    panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1084), &$s1089);
                    panda$core$MutableString$append$panda$core$String(result1066, $tmp1090);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1084));
                }
                goto $l1077;
                $l1078:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$468$171072));
            }
            panda$core$String* $tmp1092 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1091, ((panda$core$Object*) test1064));
            panda$core$String* $tmp1094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1092, &$s1093);
            panda$core$MutableString$append$panda$core$String(result1066, $tmp1094);
            {
                panda$core$String* $tmp1096 = panda$core$MutableString$finish$R$panda$core$String(result1066);
                tmp261095 = $tmp1096;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1066));
                return tmp261095;
            }
        }
        }
        else {
        panda$core$Bit $tmp1097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1097.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1099 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 0));
            expr1098 = *$tmp1099;
            org$pandalanguage$pandac$IRNode** $tmp1101 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 8));
            stmt1100 = *$tmp1101;
            panda$core$String* $tmp1103 = (($fn1102) expr1098->$class->vtable[0])(expr1098);
            panda$core$String* $tmp1105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1103, &$s1104);
            panda$core$String* $tmp1106 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1105, ((panda$core$Object*) stmt1100));
            panda$core$String* $tmp1108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1106, &$s1107);
            return $tmp1108;
        }
        }
        else {
        panda$core$Bit $tmp1109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1109.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1111 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 24));
            base1110 = *$tmp1111;
            org$pandalanguage$pandac$FieldDecl** $tmp1113 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$410_9885->$data + 32));
            field1112 = *$tmp1113;
            panda$core$String* $tmp1115 = (($fn1114) base1110->$class->vtable[0])(base1110);
            panda$core$String* $tmp1117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1115, &$s1116);
            panda$core$String* $tmp1118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1117, ((org$pandalanguage$pandac$Symbol*) field1112)->name);
            panda$core$String* $tmp1120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1118, &$s1119);
            return $tmp1120;
        }
        }
        else {
        panda$core$Bit $tmp1121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1121.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1123 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 16));
            test1122 = *$tmp1123;
            panda$collections$ImmutableArray** $tmp1125 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 24));
            ifTrue1124 = *$tmp1125;
            org$pandalanguage$pandac$IRNode** $tmp1127 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 32));
            ifFalse1126 = *$tmp1127;
            panda$core$MutableString* $tmp1129 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp1131 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1130, ((panda$core$Object*) test1122));
            panda$core$String* $tmp1133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1131, &$s1132);
            panda$core$MutableString$init$panda$core$String($tmp1129, $tmp1133);
            result1128 = $tmp1129;
            {
                ITable* $tmp1135 = ((panda$collections$Iterable*) ifTrue1124)->$class->itable;
                while ($tmp1135->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1135 = $tmp1135->next;
                }
                $fn1137 $tmp1136 = $tmp1135->methods[0];
                panda$collections$Iterator* $tmp1138 = $tmp1136(((panda$collections$Iterable*) ifTrue1124));
                Iter$479$171134 = $tmp1138;
                $l1139:;
                ITable* $tmp1141 = Iter$479$171134->$class->itable;
                while ($tmp1141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1141 = $tmp1141->next;
                }
                $fn1143 $tmp1142 = $tmp1141->methods[0];
                panda$core$Bit $tmp1144 = $tmp1142(Iter$479$171134);
                panda$core$Bit $tmp1145 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1144);
                if (!$tmp1145.value) goto $l1140;
                {
                    ITable* $tmp1147 = Iter$479$171134->$class->itable;
                    while ($tmp1147->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1147 = $tmp1147->next;
                    }
                    $fn1149 $tmp1148 = $tmp1147->methods[1];
                    panda$core$Object* $tmp1150 = $tmp1148(Iter$479$171134);
                    s1146 = ((org$pandalanguage$pandac$IRNode*) $tmp1150);
                    panda$core$String* $tmp1152 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1146), &$s1151);
                    panda$core$MutableString$append$panda$core$String(result1128, $tmp1152);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1146));
                }
                goto $l1139;
                $l1140:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$479$171134));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1153, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1128, $tmp1153);
            if (((panda$core$Bit) { ifFalse1126 != NULL }).value) {
            {
                panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1154, ((panda$core$Object*) ifFalse1126));
                panda$core$String* $tmp1157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1155, &$s1156);
                panda$core$MutableString$append$panda$core$String(result1128, $tmp1157);
            }
            }
            {
                panda$core$String* $tmp1159 = panda$core$MutableString$finish$R$panda$core$String(result1128);
                tmp271158 = $tmp1159;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1128));
                return tmp271158;
            }
        }
        }
        else {
        panda$core$Bit $tmp1160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1160.value) {
        {
            panda$core$UInt64* $tmp1162 = ((panda$core$UInt64*) ((char*) $match$410_9885->$data + 24));
            value1161 = *$tmp1162;
            panda$core$String* $tmp1163 = panda$core$UInt64$convert$R$panda$core$String(value1161);
            return $tmp1163;
        }
        }
        else {
        panda$core$Bit $tmp1164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1164.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1166 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 16));
            value1165 = *$tmp1166;
            panda$core$String* $tmp1168 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1167, ((panda$core$Object*) value1165));
            panda$core$String* $tmp1170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1168, &$s1169);
            return $tmp1170;
        }
        }
        else {
        panda$core$Bit $tmp1171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1171.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1173 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 16));
            value1172 = *$tmp1173;
            panda$core$String* $tmp1175 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1174, ((panda$core$Object*) value1172));
            panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1175, &$s1176);
            return $tmp1177;
        }
        }
        else {
        panda$core$Bit $tmp1178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1178.value) {
        {
            panda$core$String** $tmp1180 = ((panda$core$String**) ((char*) $match$410_9885->$data + 16));
            label1179 = *$tmp1180;
            panda$collections$ImmutableArray** $tmp1182 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 24));
            statements1181 = *$tmp1182;
            panda$core$MutableString* $tmp1184 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1184);
            result1183 = $tmp1184;
            if (((panda$core$Bit) { label1179 != NULL }).value) {
            {
                panda$core$String* $tmp1185 = panda$core$String$convert$R$panda$core$String(label1179);
                panda$core$String* $tmp1187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1185, &$s1186);
                panda$core$MutableString$append$panda$core$String(result1183, $tmp1187);
            }
            }
            panda$core$MutableString$append$panda$core$String(result1183, &$s1188);
            {
                ITable* $tmp1190 = ((panda$collections$Iterable*) statements1181)->$class->itable;
                while ($tmp1190->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1190 = $tmp1190->next;
                }
                $fn1192 $tmp1191 = $tmp1190->methods[0];
                panda$collections$Iterator* $tmp1193 = $tmp1191(((panda$collections$Iterable*) statements1181));
                Iter$499$171189 = $tmp1193;
                $l1194:;
                ITable* $tmp1196 = Iter$499$171189->$class->itable;
                while ($tmp1196->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1196 = $tmp1196->next;
                }
                $fn1198 $tmp1197 = $tmp1196->methods[0];
                panda$core$Bit $tmp1199 = $tmp1197(Iter$499$171189);
                panda$core$Bit $tmp1200 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1199);
                if (!$tmp1200.value) goto $l1195;
                {
                    ITable* $tmp1202 = Iter$499$171189->$class->itable;
                    while ($tmp1202->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1202 = $tmp1202->next;
                    }
                    $fn1204 $tmp1203 = $tmp1202->methods[1];
                    panda$core$Object* $tmp1205 = $tmp1203(Iter$499$171189);
                    s1201 = ((org$pandalanguage$pandac$IRNode*) $tmp1205);
                    panda$core$String* $tmp1207 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1201), &$s1206);
                    panda$core$MutableString$append$panda$core$String(result1183, $tmp1207);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1201));
                }
                goto $l1194;
                $l1195:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$499$171189));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1208, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1183, $tmp1208);
            {
                panda$core$String* $tmp1210 = panda$core$MutableString$finish$R$panda$core$String(result1183);
                tmp281209 = $tmp1210;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1183));
                return tmp281209;
            }
        }
        }
        else {
        panda$core$Bit $tmp1211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1211.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1213 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 16));
            value1212 = *$tmp1213;
            panda$collections$ImmutableArray** $tmp1215 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 24));
            whens1214 = *$tmp1215;
            panda$collections$ImmutableArray** $tmp1217 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 32));
            other1216 = *$tmp1217;
            panda$core$MutableString* $tmp1219 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp1221 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1220, ((panda$core$Object*) value1212));
            panda$core$String* $tmp1223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1221, &$s1222);
            panda$core$MutableString$init$panda$core$String($tmp1219, $tmp1223);
            result1218 = $tmp1219;
            {
                ITable* $tmp1225 = ((panda$collections$Iterable*) whens1214)->$class->itable;
                while ($tmp1225->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1225 = $tmp1225->next;
                }
                $fn1227 $tmp1226 = $tmp1225->methods[0];
                panda$collections$Iterator* $tmp1228 = $tmp1226(((panda$collections$Iterable*) whens1214));
                Iter$506$171224 = $tmp1228;
                $l1229:;
                ITable* $tmp1231 = Iter$506$171224->$class->itable;
                while ($tmp1231->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1231 = $tmp1231->next;
                }
                $fn1233 $tmp1232 = $tmp1231->methods[0];
                panda$core$Bit $tmp1234 = $tmp1232(Iter$506$171224);
                panda$core$Bit $tmp1235 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1234);
                if (!$tmp1235.value) goto $l1230;
                {
                    ITable* $tmp1237 = Iter$506$171224->$class->itable;
                    while ($tmp1237->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1237 = $tmp1237->next;
                    }
                    $fn1239 $tmp1238 = $tmp1237->methods[1];
                    panda$core$Object* $tmp1240 = $tmp1238(Iter$506$171224);
                    w1236 = ((org$pandalanguage$pandac$IRNode*) $tmp1240);
                    panda$core$String* $tmp1242 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1236), &$s1241);
                    panda$core$MutableString$append$panda$core$String(result1218, $tmp1242);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1236));
                }
                goto $l1229;
                $l1230:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$506$171224));
            }
            if (((panda$core$Bit) { other1216 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result1218, &$s1243);
                {
                    ITable* $tmp1245 = ((panda$collections$Iterable*) other1216)->$class->itable;
                    while ($tmp1245->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1245 = $tmp1245->next;
                    }
                    $fn1247 $tmp1246 = $tmp1245->methods[0];
                    panda$collections$Iterator* $tmp1248 = $tmp1246(((panda$collections$Iterable*) other1216));
                    Iter$511$211244 = $tmp1248;
                    $l1249:;
                    ITable* $tmp1251 = Iter$511$211244->$class->itable;
                    while ($tmp1251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1251 = $tmp1251->next;
                    }
                    $fn1253 $tmp1252 = $tmp1251->methods[0];
                    panda$core$Bit $tmp1254 = $tmp1252(Iter$511$211244);
                    panda$core$Bit $tmp1255 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1254);
                    if (!$tmp1255.value) goto $l1250;
                    {
                        ITable* $tmp1257 = Iter$511$211244->$class->itable;
                        while ($tmp1257->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1257 = $tmp1257->next;
                        }
                        $fn1259 $tmp1258 = $tmp1257->methods[1];
                        panda$core$Object* $tmp1260 = $tmp1258(Iter$511$211244);
                        s1256 = ((org$pandalanguage$pandac$IRNode*) $tmp1260);
                        panda$core$String* $tmp1262 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1256), &$s1261);
                        panda$core$MutableString$append$panda$core$String(result1218, $tmp1262);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1256));
                    }
                    goto $l1249;
                    $l1250:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$511$211244));
                }
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1263, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1218, $tmp1263);
            {
                panda$core$String* $tmp1265 = panda$core$MutableString$finish$R$panda$core$String(result1218);
                tmp291264 = $tmp1265;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1218));
                return tmp291264;
            }
        }
        }
        else {
        panda$core$Bit $tmp1266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1266.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1268 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 16));
            target1267 = *$tmp1268;
            org$pandalanguage$pandac$MethodRef** $tmp1270 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$410_9885->$data + 24));
            m1269 = *$tmp1270;
            if (((panda$core$Bit) { target1267 != NULL }).value) {
            {
                panda$core$String* $tmp1272 = (($fn1271) target1267->$class->vtable[0])(target1267);
                panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1272, &$s1273);
                panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1274, ((org$pandalanguage$pandac$Symbol*) m1269->value)->name);
                panda$core$String* $tmp1277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1275, &$s1276);
                return $tmp1277;
            }
            }
            return ((org$pandalanguage$pandac$Symbol*) m1269->value)->name;
        }
        }
        else {
        panda$core$Bit $tmp1278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1278.value) {
        {
            panda$core$UInt64* $tmp1280 = ((panda$core$UInt64*) ((char*) $match$410_9885->$data + 24));
            value1279 = *$tmp1280;
            panda$core$UInt64$wrapper* $tmp1282;
            $tmp1282 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp1282->value = value1279;
            panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1281, ((panda$core$Object*) $tmp1282));
            return $tmp1283;
        }
        }
        else {
        panda$core$Bit $tmp1284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1284.value) {
        {
            return &$s1285;
        }
        }
        else {
        panda$core$Bit $tmp1286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1286.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1288 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$410_9885->$data + 16));
            op1287 = *$tmp1288;
            org$pandalanguage$pandac$IRNode** $tmp1290 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 24));
            base1289 = *$tmp1290;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1291;
            $tmp1291 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1291->value = op1287;
            panda$core$String* $tmp1293 = (($fn1292) ((panda$core$Object*) $tmp1291)->$class->vtable[0])(((panda$core$Object*) $tmp1291));
            panda$core$String* $tmp1295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1293, &$s1294);
            panda$core$String* $tmp1296 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1295, ((panda$core$Object*) base1289));
            panda$core$String* $tmp1298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1296, &$s1297);
            return $tmp1298;
        }
        }
        else {
        panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1299.value) {
        {
            panda$core$String** $tmp1301 = ((panda$core$String**) ((char*) $match$410_9885->$data + 16));
            label1300 = *$tmp1301;
            org$pandalanguage$pandac$IRNode** $tmp1303 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 24));
            target1302 = *$tmp1303;
            org$pandalanguage$pandac$IRNode** $tmp1305 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 32));
            list1304 = *$tmp1305;
            panda$collections$ImmutableArray** $tmp1307 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 40));
            statements1306 = *$tmp1307;
            panda$core$MutableString* $tmp1309 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1309);
            result1308 = $tmp1309;
            if (((panda$core$Bit) { label1300 != NULL }).value) {
            {
                panda$core$String* $tmp1310 = panda$core$String$convert$R$panda$core$String(label1300);
                panda$core$String* $tmp1312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1310, &$s1311);
                panda$core$MutableString$append$panda$core$String(result1308, $tmp1312);
            }
            }
            panda$core$String* $tmp1314 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1313, ((panda$core$Object*) target1302));
            panda$core$String* $tmp1316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1314, &$s1315);
            panda$core$String* $tmp1317 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1316, ((panda$core$Object*) list1304));
            panda$core$String* $tmp1319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1317, &$s1318);
            panda$core$MutableString$append$panda$core$String(result1308, $tmp1319);
            {
                ITable* $tmp1321 = ((panda$collections$Iterable*) statements1306)->$class->itable;
                while ($tmp1321->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1321 = $tmp1321->next;
                }
                $fn1323 $tmp1322 = $tmp1321->methods[0];
                panda$collections$Iterator* $tmp1324 = $tmp1322(((panda$collections$Iterable*) statements1306));
                Iter$534$171320 = $tmp1324;
                $l1325:;
                ITable* $tmp1327 = Iter$534$171320->$class->itable;
                while ($tmp1327->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1327 = $tmp1327->next;
                }
                $fn1329 $tmp1328 = $tmp1327->methods[0];
                panda$core$Bit $tmp1330 = $tmp1328(Iter$534$171320);
                panda$core$Bit $tmp1331 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1330);
                if (!$tmp1331.value) goto $l1326;
                {
                    ITable* $tmp1333 = Iter$534$171320->$class->itable;
                    while ($tmp1333->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1333 = $tmp1333->next;
                    }
                    $fn1335 $tmp1334 = $tmp1333->methods[1];
                    panda$core$Object* $tmp1336 = $tmp1334(Iter$534$171320);
                    s1332 = ((org$pandalanguage$pandac$IRNode*) $tmp1336);
                    panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1332), &$s1337);
                    panda$core$MutableString$append$panda$core$String(result1308, $tmp1338);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1332));
                }
                goto $l1325;
                $l1326:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$534$171320));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1339, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1308, $tmp1339);
            {
                panda$core$String* $tmp1341 = panda$core$MutableString$finish$R$panda$core$String(result1308);
                tmp301340 = $tmp1341;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1308));
                return tmp301340;
            }
        }
        }
        else {
        panda$core$Bit $tmp1342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1342.value) {
        {
            panda$core$Real64* $tmp1344 = ((panda$core$Real64*) ((char*) $match$410_9885->$data + 24));
            value1343 = *$tmp1344;
            panda$core$String* $tmp1345 = panda$core$Real64$convert$R$panda$core$String(value1343);
            return $tmp1345;
        }
        }
        else {
        panda$core$Bit $tmp1346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1346.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1348 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 16));
            value1347 = *$tmp1348;
            if (((panda$core$Bit) { value1347 != NULL }).value) {
            {
                panda$core$String* $tmp1350 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1349, ((panda$core$Object*) value1347));
                panda$core$String* $tmp1352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1350, &$s1351);
                return $tmp1352;
            }
            }
            return &$s1353;
        }
        }
        else {
        panda$core$Bit $tmp1354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1354.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1356 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9885->$data + 16));
            type1355 = *$tmp1356;
            panda$core$Int64* $tmp1358 = ((panda$core$Int64*) ((char*) $match$410_9885->$data + 24));
            id1357 = *$tmp1358;
            panda$core$Int64$wrapper* $tmp1360;
            $tmp1360 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1360->value = id1357;
            panda$core$String* $tmp1361 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1359, ((panda$core$Object*) $tmp1360));
            panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1361, &$s1362);
            panda$core$String* $tmp1364 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1363, ((panda$core$Object*) type1355));
            panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1364, &$s1365);
            return $tmp1366;
        }
        }
        else {
        panda$core$Bit $tmp1367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1367.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1369 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 0));
            base1368 = *$tmp1369;
            panda$core$Int64* $tmp1371 = ((panda$core$Int64*) ((char*) $match$410_9885->$data + 8));
            id1370 = *$tmp1371;
            panda$core$Int64$wrapper* $tmp1373;
            $tmp1373 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1373->value = id1370;
            panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1372, ((panda$core$Object*) $tmp1373));
            panda$core$String* $tmp1376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1374, &$s1375);
            panda$core$String* $tmp1377 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1376, ((panda$core$Object*) base1368));
            panda$core$String* $tmp1379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1377, &$s1378);
            return $tmp1379;
        }
        }
        else {
        panda$core$Bit $tmp1380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1380.value) {
        {
            return &$s1381;
        }
        }
        else {
        panda$core$Bit $tmp1382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1382.value) {
        {
            panda$core$String** $tmp1384 = ((panda$core$String**) ((char*) $match$410_9885->$data + 16));
            str1383 = *$tmp1384;
            return str1383;
        }
        }
        else {
        panda$core$Bit $tmp1385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1385.value) {
        {
            return &$s1386;
        }
        }
        else {
        panda$core$Bit $tmp1387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1387.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1389 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 16));
            test1388 = *$tmp1389;
            org$pandalanguage$pandac$IRNode** $tmp1391 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 24));
            ifTrue1390 = *$tmp1391;
            org$pandalanguage$pandac$IRNode** $tmp1393 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 32));
            ifFalse1392 = *$tmp1393;
            panda$core$String* $tmp1395 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1394, ((panda$core$Object*) test1388));
            panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1395, &$s1396);
            panda$core$String* $tmp1398 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1397, ((panda$core$Object*) ifTrue1390));
            panda$core$String* $tmp1400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1398, &$s1399);
            panda$core$String* $tmp1401 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1400, ((panda$core$Object*) ifFalse1392));
            panda$core$String* $tmp1403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1401, &$s1402);
            return $tmp1403;
        }
        }
        else {
        panda$core$Bit $tmp1404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1404.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1406 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9885->$data + 16));
            type1405 = *$tmp1406;
            panda$core$String* $tmp1407 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1405);
            return $tmp1407;
        }
        }
        else {
        panda$core$Bit $tmp1408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1408.value) {
        {
            panda$core$String** $tmp1410 = ((panda$core$String**) ((char*) $match$410_9885->$data + 16));
            name1409 = *$tmp1410;
            return name1409;
        }
        }
        else {
        panda$core$Bit $tmp1411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1411.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1413 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 24));
            base1412 = *$tmp1413;
            panda$collections$ImmutableArray** $tmp1415 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 32));
            args1414 = *$tmp1415;
            panda$core$String* $tmp1417 = (($fn1416) base1412->$class->vtable[0])(base1412);
            panda$core$String* $tmp1419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1417, &$s1418);
            panda$core$String* $tmp1420 = panda$collections$ImmutableArray$join$R$panda$core$String(args1414);
            panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, $tmp1420);
            panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, &$s1422);
            return $tmp1423;
        }
        }
        else {
        panda$core$Bit $tmp1424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1424.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1426 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 24));
            target1425 = *$tmp1426;
            panda$collections$ImmutableArray** $tmp1428 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 32));
            methods1427 = *$tmp1428;
            panda$collections$ImmutableArray** $tmp1430 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 40));
            args1429 = *$tmp1430;
            panda$core$String* $tmp1432 = (($fn1431) target1425->$class->vtable[0])(target1425);
            panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1432, &$s1433);
            panda$core$Object* $tmp1435 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods1427, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp1435)->value)->name);
            panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1436, &$s1437);
            panda$core$String* $tmp1439 = panda$collections$ImmutableArray$join$R$panda$core$String(args1429);
            panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1438, $tmp1439);
            panda$core$String* $tmp1442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1440, &$s1441);
            return $tmp1442;
        }
        }
        else {
        panda$core$Bit $tmp1443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1443.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1445 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 16));
            target1444 = *$tmp1445;
            panda$collections$ImmutableArray** $tmp1447 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 24));
            methods1446 = *$tmp1447;
            panda$core$String* $tmp1449 = (($fn1448) target1444->$class->vtable[0])(target1444);
            panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1449, &$s1450);
            panda$core$Object* $tmp1452 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods1446, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1451, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp1452)->value)->name);
            panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1453, &$s1454);
            return $tmp1455;
        }
        }
        else {
        panda$core$Bit $tmp1456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1456.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1458 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 16));
            start1457 = *$tmp1458;
            org$pandalanguage$pandac$IRNode** $tmp1460 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 24));
            end1459 = *$tmp1460;
            panda$core$Bit* $tmp1462 = ((panda$core$Bit*) ((char*) $match$410_9885->$data + 32));
            inclusive1461 = *$tmp1462;
            org$pandalanguage$pandac$IRNode** $tmp1464 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 33));
            step1463 = *$tmp1464;
            panda$core$MutableString* $tmp1466 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1466);
            result1465 = $tmp1466;
            if (((panda$core$Bit) { start1457 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1465, ((panda$core$Object*) start1457));
            }
            }
            if (inclusive1461.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1465, &$s1467);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result1465, &$s1468);
            }
            }
            if (((panda$core$Bit) { end1459 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1465, ((panda$core$Object*) end1459));
            }
            }
            if (((panda$core$Bit) { step1463 != NULL }).value) {
            {
                panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1469, ((panda$core$Object*) step1463));
                panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1470, &$s1471);
                panda$core$MutableString$append$panda$core$String(result1465, $tmp1472);
            }
            }
            {
                panda$core$String* $tmp1474 = panda$core$MutableString$finish$R$panda$core$String(result1465);
                tmp311473 = $tmp1474;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1465));
                return tmp311473;
            }
        }
        }
        else {
        panda$core$Bit $tmp1475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1475.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1477 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$410_9885->$data + 16));
            kind1476 = *$tmp1477;
            panda$collections$ImmutableArray** $tmp1479 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 24));
            decls1478 = *$tmp1479;
            panda$core$MutableString* $tmp1481 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1481);
            result1480 = $tmp1481;
            {
                $match$588_171482 = kind1476;
                panda$core$Bit $tmp1483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171482.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp1483.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1480, &$s1484);
                }
                }
                else {
                panda$core$Bit $tmp1485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171482.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp1485.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1480, &$s1486);
                }
                }
                else {
                panda$core$Bit $tmp1487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171482.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp1487.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1480, &$s1488);
                }
                }
                else {
                panda$core$Bit $tmp1489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171482.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp1489.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1480, &$s1490);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp1491 = panda$collections$ImmutableArray$join$R$panda$core$String(decls1478);
            panda$core$MutableString$append$panda$core$String(result1480, $tmp1491);
            {
                panda$core$String* $tmp1493 = panda$core$MutableString$finish$R$panda$core$String(result1480);
                tmp321492 = $tmp1493;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1480));
                return tmp321492;
            }
        }
        }
        else {
        panda$core$Bit $tmp1494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1494.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1496 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$410_9885->$data + 16));
            variable1495 = *$tmp1496;
            return ((org$pandalanguage$pandac$Symbol*) variable1495)->name;
        }
        }
        else {
        panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1497.value) {
        {
            panda$collections$ImmutableArray** $tmp1499 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 16));
            tests1498 = *$tmp1499;
            panda$collections$ImmutableArray** $tmp1501 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 24));
            statements1500 = *$tmp1501;
            panda$core$String* $tmp1503 = panda$collections$ImmutableArray$join$R$panda$core$String(tests1498);
            panda$core$String* $tmp1504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1502, $tmp1503);
            panda$core$String* $tmp1506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1504, &$s1505);
            panda$core$String* $tmp1508 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(statements1500, &$s1507);
            panda$core$String* $tmp1509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1506, $tmp1508);
            panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1509, &$s1510);
            return $tmp1511;
        }
        }
        else {
        panda$core$Bit $tmp1512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9885->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1512.value) {
        {
            panda$core$String** $tmp1514 = ((panda$core$String**) ((char*) $match$410_9885->$data + 16));
            label1513 = *$tmp1514;
            org$pandalanguage$pandac$IRNode** $tmp1516 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9885->$data + 24));
            test1515 = *$tmp1516;
            panda$collections$ImmutableArray** $tmp1518 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9885->$data + 32));
            statements1517 = *$tmp1518;
            panda$core$MutableString* $tmp1520 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1520);
            result1519 = $tmp1520;
            if (((panda$core$Bit) { label1513 != NULL }).value) {
            {
                panda$core$String* $tmp1521 = panda$core$String$convert$R$panda$core$String(label1513);
                panda$core$String* $tmp1523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1521, &$s1522);
                panda$core$MutableString$append$panda$core$String(result1519, $tmp1523);
            }
            }
            panda$core$String* $tmp1525 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1524, ((panda$core$Object*) test1515));
            panda$core$String* $tmp1527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1525, &$s1526);
            panda$core$MutableString$append$panda$core$String(result1519, $tmp1527);
            {
                ITable* $tmp1529 = ((panda$collections$Iterable*) statements1517)->$class->itable;
                while ($tmp1529->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1529 = $tmp1529->next;
                }
                $fn1531 $tmp1530 = $tmp1529->methods[0];
                panda$collections$Iterator* $tmp1532 = $tmp1530(((panda$collections$Iterable*) statements1517));
                Iter$606$171528 = $tmp1532;
                $l1533:;
                ITable* $tmp1535 = Iter$606$171528->$class->itable;
                while ($tmp1535->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1535 = $tmp1535->next;
                }
                $fn1537 $tmp1536 = $tmp1535->methods[0];
                panda$core$Bit $tmp1538 = $tmp1536(Iter$606$171528);
                panda$core$Bit $tmp1539 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1538);
                if (!$tmp1539.value) goto $l1534;
                {
                    ITable* $tmp1541 = Iter$606$171528->$class->itable;
                    while ($tmp1541->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1541 = $tmp1541->next;
                    }
                    $fn1543 $tmp1542 = $tmp1541->methods[1];
                    panda$core$Object* $tmp1544 = $tmp1542(Iter$606$171528);
                    s1540 = ((org$pandalanguage$pandac$IRNode*) $tmp1544);
                    panda$core$String* $tmp1546 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1540), &$s1545);
                    panda$core$MutableString$append$panda$core$String(result1519, $tmp1546);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1540));
                }
                goto $l1533;
                $l1534:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$606$171528));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1547, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1519, $tmp1547);
            {
                panda$core$String* $tmp1549 = panda$core$MutableString$finish$R$panda$core$String(result1519);
                tmp331548 = $tmp1549;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1519));
                return tmp331548;
            }
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
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_11550;
    org$pandalanguage$pandac$Position _f01552;
    org$pandalanguage$pandac$IRNode* _f11554;
    org$pandalanguage$pandac$IRNode* _f21556;
    org$pandalanguage$pandac$Position _f01559;
    org$pandalanguage$pandac$Type* _f11561;
    org$pandalanguage$pandac$IRNode* _f21563;
    org$pandalanguage$pandac$parser$Token$Kind _f31565;
    org$pandalanguage$pandac$IRNode* _f41567;
    org$pandalanguage$pandac$Position _f01570;
    org$pandalanguage$pandac$Type* _f11572;
    panda$core$Bit _f21574;
    org$pandalanguage$pandac$Position _f01577;
    panda$collections$ImmutableArray* _f11579;
    org$pandalanguage$pandac$Position _f01582;
    panda$core$String* _f11584;
    org$pandalanguage$pandac$Position _f01587;
    org$pandalanguage$pandac$Type* _f11589;
    org$pandalanguage$pandac$MethodRef* _f21591;
    panda$collections$ImmutableArray* _f31593;
    org$pandalanguage$pandac$Position _f01596;
    org$pandalanguage$pandac$IRNode* _f11598;
    org$pandalanguage$pandac$Type* _f21600;
    panda$core$Bit _f31602;
    org$pandalanguage$pandac$Position _f01605;
    org$pandalanguage$pandac$ChoiceEntry* _f11607;
    org$pandalanguage$pandac$Position _f01610;
    org$pandalanguage$pandac$IRNode* _f11612;
    org$pandalanguage$pandac$ChoiceEntry* _f21614;
    panda$core$Int64 _f31616;
    org$pandalanguage$pandac$Position _f01619;
    org$pandalanguage$pandac$Type* _f11621;
    org$pandalanguage$pandac$IRNode* _f21623;
    org$pandalanguage$pandac$Position _f01626;
    org$pandalanguage$pandac$Type* _f11628;
    org$pandalanguage$pandac$Position _f01631;
    panda$core$String* _f11633;
    org$pandalanguage$pandac$IRNode* _f01636;
    org$pandalanguage$pandac$IRNode* _f11638;
    org$pandalanguage$pandac$Position _f01641;
    panda$core$String* _f11643;
    panda$collections$ImmutableArray* _f21645;
    org$pandalanguage$pandac$IRNode* _f31647;
    org$pandalanguage$pandac$IRNode* _f01650;
    org$pandalanguage$pandac$IRNode* _f11652;
    org$pandalanguage$pandac$Position _f01655;
    org$pandalanguage$pandac$Type* _f11657;
    org$pandalanguage$pandac$IRNode* _f21659;
    org$pandalanguage$pandac$FieldDecl* _f31661;
    org$pandalanguage$pandac$Position _f01664;
    org$pandalanguage$pandac$IRNode* _f11666;
    panda$collections$ImmutableArray* _f21668;
    org$pandalanguage$pandac$IRNode* _f31670;
    org$pandalanguage$pandac$Position _f01673;
    org$pandalanguage$pandac$Type* _f11675;
    panda$core$UInt64 _f21677;
    org$pandalanguage$pandac$Position _f01680;
    org$pandalanguage$pandac$IRNode* _f11682;
    org$pandalanguage$pandac$Position _f01685;
    org$pandalanguage$pandac$IRNode* _f11687;
    org$pandalanguage$pandac$Position _f01690;
    panda$core$String* _f11692;
    panda$collections$ImmutableArray* _f21694;
    org$pandalanguage$pandac$Position _f01697;
    org$pandalanguage$pandac$IRNode* _f11699;
    panda$collections$ImmutableArray* _f21701;
    panda$collections$ImmutableArray* _f31703;
    org$pandalanguage$pandac$Position _f01706;
    org$pandalanguage$pandac$IRNode* _f11708;
    org$pandalanguage$pandac$MethodRef* _f21710;
    org$pandalanguage$pandac$Position _f01713;
    org$pandalanguage$pandac$Type* _f11715;
    panda$core$UInt64 _f21717;
    org$pandalanguage$pandac$Position _f01720;
    org$pandalanguage$pandac$Type* _f11722;
    org$pandalanguage$pandac$Position _f01725;
    org$pandalanguage$pandac$parser$Token$Kind _f11727;
    org$pandalanguage$pandac$IRNode* _f21729;
    org$pandalanguage$pandac$Position _f01732;
    panda$core$String* _f11734;
    org$pandalanguage$pandac$IRNode* _f21736;
    org$pandalanguage$pandac$IRNode* _f31738;
    panda$collections$ImmutableArray* _f41740;
    org$pandalanguage$pandac$Position _f01743;
    org$pandalanguage$pandac$Type* _f11745;
    panda$core$Real64 _f21747;
    org$pandalanguage$pandac$Position _f01750;
    org$pandalanguage$pandac$IRNode* _f11752;
    org$pandalanguage$pandac$Position _f01755;
    org$pandalanguage$pandac$Type* _f11757;
    panda$core$Int64 _f21759;
    org$pandalanguage$pandac$IRNode* _f01762;
    panda$core$Int64 _f11764;
    org$pandalanguage$pandac$Position _f01767;
    org$pandalanguage$pandac$Type* _f11769;
    org$pandalanguage$pandac$Position _f01772;
    panda$core$String* _f11774;
    org$pandalanguage$pandac$Position _f01777;
    org$pandalanguage$pandac$Type* _f11779;
    org$pandalanguage$pandac$Position _f01782;
    org$pandalanguage$pandac$IRNode* _f11784;
    org$pandalanguage$pandac$IRNode* _f21786;
    org$pandalanguage$pandac$IRNode* _f31788;
    org$pandalanguage$pandac$Position _f01791;
    org$pandalanguage$pandac$Type* _f11793;
    org$pandalanguage$pandac$Position _f01796;
    panda$core$String* _f11798;
    org$pandalanguage$pandac$Position _f01801;
    org$pandalanguage$pandac$Type* _f11803;
    org$pandalanguage$pandac$IRNode* _f21805;
    panda$collections$ImmutableArray* _f31807;
    org$pandalanguage$pandac$Position _f01810;
    org$pandalanguage$pandac$Type* _f11812;
    org$pandalanguage$pandac$IRNode* _f21814;
    panda$collections$ImmutableArray* _f31816;
    panda$collections$ImmutableArray* _f41818;
    org$pandalanguage$pandac$Position _f01821;
    org$pandalanguage$pandac$IRNode* _f11823;
    panda$collections$ImmutableArray* _f21825;
    org$pandalanguage$pandac$Position _f01828;
    org$pandalanguage$pandac$IRNode* _f11830;
    org$pandalanguage$pandac$IRNode* _f21832;
    panda$core$Bit _f31834;
    org$pandalanguage$pandac$IRNode* _f41836;
    org$pandalanguage$pandac$Position _f01839;
    org$pandalanguage$pandac$Variable$Kind _f11841;
    panda$collections$ImmutableArray* _f21843;
    org$pandalanguage$pandac$Position _f01846;
    org$pandalanguage$pandac$Variable* _f11848;
    org$pandalanguage$pandac$Position _f01851;
    panda$collections$ImmutableArray* _f11853;
    panda$collections$ImmutableArray* _f21855;
    org$pandalanguage$pandac$Position _f01858;
    panda$core$String* _f11860;
    org$pandalanguage$pandac$IRNode* _f21862;
    panda$collections$ImmutableArray* _f31864;
    {
        $match$5_11550 = self;
        panda$core$Bit $tmp1551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1551.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1553 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01552 = *$tmp1553;
            org$pandalanguage$pandac$IRNode** $tmp1555 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 16));
            _f11554 = *$tmp1555;
            org$pandalanguage$pandac$IRNode** $tmp1557 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 24));
            _f21556 = *$tmp1557;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11554));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21556));
        }
        }
        else {
        panda$core$Bit $tmp1558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1558.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1560 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01559 = *$tmp1560;
            org$pandalanguage$pandac$Type** $tmp1562 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11561 = *$tmp1562;
            org$pandalanguage$pandac$IRNode** $tmp1564 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 24));
            _f21563 = *$tmp1564;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1566 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11550->$data + 32));
            _f31565 = *$tmp1566;
            org$pandalanguage$pandac$IRNode** $tmp1568 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 40));
            _f41567 = *$tmp1568;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11561));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21563));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41567));
        }
        }
        else {
        panda$core$Bit $tmp1569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1569.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1571 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01570 = *$tmp1571;
            org$pandalanguage$pandac$Type** $tmp1573 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11572 = *$tmp1573;
            panda$core$Bit* $tmp1575 = ((panda$core$Bit*) ((char*) $match$5_11550->$data + 24));
            _f21574 = *$tmp1575;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11572));
        }
        }
        else {
        panda$core$Bit $tmp1576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1576.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1578 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01577 = *$tmp1578;
            panda$collections$ImmutableArray** $tmp1580 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 16));
            _f11579 = *$tmp1580;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11579));
        }
        }
        else {
        panda$core$Bit $tmp1581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1581.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1583 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01582 = *$tmp1583;
            panda$core$String** $tmp1585 = ((panda$core$String**) ((char*) $match$5_11550->$data + 16));
            _f11584 = *$tmp1585;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11584));
        }
        }
        else {
        panda$core$Bit $tmp1586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1586.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1588 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01587 = *$tmp1588;
            org$pandalanguage$pandac$Type** $tmp1590 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11589 = *$tmp1590;
            org$pandalanguage$pandac$MethodRef** $tmp1592 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_11550->$data + 24));
            _f21591 = *$tmp1592;
            panda$collections$ImmutableArray** $tmp1594 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 32));
            _f31593 = *$tmp1594;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11589));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21591));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31593));
        }
        }
        else {
        panda$core$Bit $tmp1595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1595.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1597 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01596 = *$tmp1597;
            org$pandalanguage$pandac$IRNode** $tmp1599 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 16));
            _f11598 = *$tmp1599;
            org$pandalanguage$pandac$Type** $tmp1601 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 24));
            _f21600 = *$tmp1601;
            panda$core$Bit* $tmp1603 = ((panda$core$Bit*) ((char*) $match$5_11550->$data + 32));
            _f31602 = *$tmp1603;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11598));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21600));
        }
        }
        else {
        panda$core$Bit $tmp1604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1604.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1606 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01605 = *$tmp1606;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1608 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11550->$data + 16));
            _f11607 = *$tmp1608;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11607));
        }
        }
        else {
        panda$core$Bit $tmp1609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1609.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1611 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01610 = *$tmp1611;
            org$pandalanguage$pandac$IRNode** $tmp1613 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 16));
            _f11612 = *$tmp1613;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1615 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11550->$data + 24));
            _f21614 = *$tmp1615;
            panda$core$Int64* $tmp1617 = ((panda$core$Int64*) ((char*) $match$5_11550->$data + 32));
            _f31616 = *$tmp1617;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11612));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21614));
        }
        }
        else {
        panda$core$Bit $tmp1618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1618.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1620 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01619 = *$tmp1620;
            org$pandalanguage$pandac$Type** $tmp1622 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11621 = *$tmp1622;
            org$pandalanguage$pandac$IRNode** $tmp1624 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 24));
            _f21623 = *$tmp1624;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11621));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21623));
        }
        }
        else {
        panda$core$Bit $tmp1625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1625.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1627 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01626 = *$tmp1627;
            org$pandalanguage$pandac$Type** $tmp1629 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11628 = *$tmp1629;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11628));
        }
        }
        else {
        panda$core$Bit $tmp1630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1630.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1632 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01631 = *$tmp1632;
            panda$core$String** $tmp1634 = ((panda$core$String**) ((char*) $match$5_11550->$data + 16));
            _f11633 = *$tmp1634;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11633));
        }
        }
        else {
        panda$core$Bit $tmp1635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1635.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1637 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 0));
            _f01636 = *$tmp1637;
            org$pandalanguage$pandac$IRNode** $tmp1639 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 8));
            _f11638 = *$tmp1639;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01636));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11638));
        }
        }
        else {
        panda$core$Bit $tmp1640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1640.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1642 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01641 = *$tmp1642;
            panda$core$String** $tmp1644 = ((panda$core$String**) ((char*) $match$5_11550->$data + 16));
            _f11643 = *$tmp1644;
            panda$collections$ImmutableArray** $tmp1646 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 24));
            _f21645 = *$tmp1646;
            org$pandalanguage$pandac$IRNode** $tmp1648 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 32));
            _f31647 = *$tmp1648;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11643));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21645));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31647));
        }
        }
        else {
        panda$core$Bit $tmp1649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1649.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1651 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 0));
            _f01650 = *$tmp1651;
            org$pandalanguage$pandac$IRNode** $tmp1653 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 8));
            _f11652 = *$tmp1653;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01650));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11652));
        }
        }
        else {
        panda$core$Bit $tmp1654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1654.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1656 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01655 = *$tmp1656;
            org$pandalanguage$pandac$Type** $tmp1658 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11657 = *$tmp1658;
            org$pandalanguage$pandac$IRNode** $tmp1660 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 24));
            _f21659 = *$tmp1660;
            org$pandalanguage$pandac$FieldDecl** $tmp1662 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_11550->$data + 32));
            _f31661 = *$tmp1662;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11657));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21659));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31661));
        }
        }
        else {
        panda$core$Bit $tmp1663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1663.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1665 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01664 = *$tmp1665;
            org$pandalanguage$pandac$IRNode** $tmp1667 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 16));
            _f11666 = *$tmp1667;
            panda$collections$ImmutableArray** $tmp1669 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 24));
            _f21668 = *$tmp1669;
            org$pandalanguage$pandac$IRNode** $tmp1671 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 32));
            _f31670 = *$tmp1671;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11666));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21668));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31670));
        }
        }
        else {
        panda$core$Bit $tmp1672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1672.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1674 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01673 = *$tmp1674;
            org$pandalanguage$pandac$Type** $tmp1676 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11675 = *$tmp1676;
            panda$core$UInt64* $tmp1678 = ((panda$core$UInt64*) ((char*) $match$5_11550->$data + 24));
            _f21677 = *$tmp1678;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11675));
        }
        }
        else {
        panda$core$Bit $tmp1679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1679.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1681 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01680 = *$tmp1681;
            org$pandalanguage$pandac$IRNode** $tmp1683 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 16));
            _f11682 = *$tmp1683;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11682));
        }
        }
        else {
        panda$core$Bit $tmp1684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1684.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1686 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01685 = *$tmp1686;
            org$pandalanguage$pandac$IRNode** $tmp1688 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 16));
            _f11687 = *$tmp1688;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11687));
        }
        }
        else {
        panda$core$Bit $tmp1689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1689.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1691 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01690 = *$tmp1691;
            panda$core$String** $tmp1693 = ((panda$core$String**) ((char*) $match$5_11550->$data + 16));
            _f11692 = *$tmp1693;
            panda$collections$ImmutableArray** $tmp1695 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 24));
            _f21694 = *$tmp1695;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11692));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21694));
        }
        }
        else {
        panda$core$Bit $tmp1696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1696.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1698 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01697 = *$tmp1698;
            org$pandalanguage$pandac$IRNode** $tmp1700 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 16));
            _f11699 = *$tmp1700;
            panda$collections$ImmutableArray** $tmp1702 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 24));
            _f21701 = *$tmp1702;
            panda$collections$ImmutableArray** $tmp1704 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 32));
            _f31703 = *$tmp1704;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11699));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21701));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31703));
        }
        }
        else {
        panda$core$Bit $tmp1705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1705.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1707 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01706 = *$tmp1707;
            org$pandalanguage$pandac$IRNode** $tmp1709 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 16));
            _f11708 = *$tmp1709;
            org$pandalanguage$pandac$MethodRef** $tmp1711 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_11550->$data + 24));
            _f21710 = *$tmp1711;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11708));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21710));
        }
        }
        else {
        panda$core$Bit $tmp1712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1712.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1714 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01713 = *$tmp1714;
            org$pandalanguage$pandac$Type** $tmp1716 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11715 = *$tmp1716;
            panda$core$UInt64* $tmp1718 = ((panda$core$UInt64*) ((char*) $match$5_11550->$data + 24));
            _f21717 = *$tmp1718;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11715));
        }
        }
        else {
        panda$core$Bit $tmp1719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1719.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1721 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01720 = *$tmp1721;
            org$pandalanguage$pandac$Type** $tmp1723 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11722 = *$tmp1723;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11722));
        }
        }
        else {
        panda$core$Bit $tmp1724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1724.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1726 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01725 = *$tmp1726;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1728 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11550->$data + 16));
            _f11727 = *$tmp1728;
            org$pandalanguage$pandac$IRNode** $tmp1730 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 24));
            _f21729 = *$tmp1730;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21729));
        }
        }
        else {
        panda$core$Bit $tmp1731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1731.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1733 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01732 = *$tmp1733;
            panda$core$String** $tmp1735 = ((panda$core$String**) ((char*) $match$5_11550->$data + 16));
            _f11734 = *$tmp1735;
            org$pandalanguage$pandac$IRNode** $tmp1737 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 24));
            _f21736 = *$tmp1737;
            org$pandalanguage$pandac$IRNode** $tmp1739 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 32));
            _f31738 = *$tmp1739;
            panda$collections$ImmutableArray** $tmp1741 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 40));
            _f41740 = *$tmp1741;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11734));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21736));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31738));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41740));
        }
        }
        else {
        panda$core$Bit $tmp1742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1742.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1744 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01743 = *$tmp1744;
            org$pandalanguage$pandac$Type** $tmp1746 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11745 = *$tmp1746;
            panda$core$Real64* $tmp1748 = ((panda$core$Real64*) ((char*) $match$5_11550->$data + 24));
            _f21747 = *$tmp1748;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11745));
        }
        }
        else {
        panda$core$Bit $tmp1749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1749.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1751 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01750 = *$tmp1751;
            org$pandalanguage$pandac$IRNode** $tmp1753 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 16));
            _f11752 = *$tmp1753;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11752));
        }
        }
        else {
        panda$core$Bit $tmp1754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1754.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1756 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01755 = *$tmp1756;
            org$pandalanguage$pandac$Type** $tmp1758 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11757 = *$tmp1758;
            panda$core$Int64* $tmp1760 = ((panda$core$Int64*) ((char*) $match$5_11550->$data + 24));
            _f21759 = *$tmp1760;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11757));
        }
        }
        else {
        panda$core$Bit $tmp1761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1761.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1763 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 0));
            _f01762 = *$tmp1763;
            panda$core$Int64* $tmp1765 = ((panda$core$Int64*) ((char*) $match$5_11550->$data + 8));
            _f11764 = *$tmp1765;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01762));
        }
        }
        else {
        panda$core$Bit $tmp1766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1766.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1768 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01767 = *$tmp1768;
            org$pandalanguage$pandac$Type** $tmp1770 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11769 = *$tmp1770;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11769));
        }
        }
        else {
        panda$core$Bit $tmp1771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1771.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1773 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01772 = *$tmp1773;
            panda$core$String** $tmp1775 = ((panda$core$String**) ((char*) $match$5_11550->$data + 16));
            _f11774 = *$tmp1775;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11774));
        }
        }
        else {
        panda$core$Bit $tmp1776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1776.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1778 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01777 = *$tmp1778;
            org$pandalanguage$pandac$Type** $tmp1780 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11779 = *$tmp1780;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11779));
        }
        }
        else {
        panda$core$Bit $tmp1781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1781.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1783 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01782 = *$tmp1783;
            org$pandalanguage$pandac$IRNode** $tmp1785 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 16));
            _f11784 = *$tmp1785;
            org$pandalanguage$pandac$IRNode** $tmp1787 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 24));
            _f21786 = *$tmp1787;
            org$pandalanguage$pandac$IRNode** $tmp1789 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 32));
            _f31788 = *$tmp1789;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11784));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21786));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31788));
        }
        }
        else {
        panda$core$Bit $tmp1790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1790.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1792 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01791 = *$tmp1792;
            org$pandalanguage$pandac$Type** $tmp1794 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11793 = *$tmp1794;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11793));
        }
        }
        else {
        panda$core$Bit $tmp1795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1795.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1797 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01796 = *$tmp1797;
            panda$core$String** $tmp1799 = ((panda$core$String**) ((char*) $match$5_11550->$data + 16));
            _f11798 = *$tmp1799;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11798));
        }
        }
        else {
        panda$core$Bit $tmp1800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1800.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1802 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01801 = *$tmp1802;
            org$pandalanguage$pandac$Type** $tmp1804 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11803 = *$tmp1804;
            org$pandalanguage$pandac$IRNode** $tmp1806 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 24));
            _f21805 = *$tmp1806;
            panda$collections$ImmutableArray** $tmp1808 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 32));
            _f31807 = *$tmp1808;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11803));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21805));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31807));
        }
        }
        else {
        panda$core$Bit $tmp1809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1809.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1811 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01810 = *$tmp1811;
            org$pandalanguage$pandac$Type** $tmp1813 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11550->$data + 16));
            _f11812 = *$tmp1813;
            org$pandalanguage$pandac$IRNode** $tmp1815 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 24));
            _f21814 = *$tmp1815;
            panda$collections$ImmutableArray** $tmp1817 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 32));
            _f31816 = *$tmp1817;
            panda$collections$ImmutableArray** $tmp1819 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 40));
            _f41818 = *$tmp1819;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11812));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21814));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31816));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41818));
        }
        }
        else {
        panda$core$Bit $tmp1820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1820.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1822 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01821 = *$tmp1822;
            org$pandalanguage$pandac$IRNode** $tmp1824 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 16));
            _f11823 = *$tmp1824;
            panda$collections$ImmutableArray** $tmp1826 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 24));
            _f21825 = *$tmp1826;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11823));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21825));
        }
        }
        else {
        panda$core$Bit $tmp1827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1827.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1829 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01828 = *$tmp1829;
            org$pandalanguage$pandac$IRNode** $tmp1831 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 16));
            _f11830 = *$tmp1831;
            org$pandalanguage$pandac$IRNode** $tmp1833 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 24));
            _f21832 = *$tmp1833;
            panda$core$Bit* $tmp1835 = ((panda$core$Bit*) ((char*) $match$5_11550->$data + 32));
            _f31834 = *$tmp1835;
            org$pandalanguage$pandac$IRNode** $tmp1837 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 33));
            _f41836 = *$tmp1837;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11830));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21832));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41836));
        }
        }
        else {
        panda$core$Bit $tmp1838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1838.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1840 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01839 = *$tmp1840;
            org$pandalanguage$pandac$Variable$Kind* $tmp1842 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11550->$data + 16));
            _f11841 = *$tmp1842;
            panda$collections$ImmutableArray** $tmp1844 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 24));
            _f21843 = *$tmp1844;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21843));
        }
        }
        else {
        panda$core$Bit $tmp1845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1845.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1847 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01846 = *$tmp1847;
            org$pandalanguage$pandac$Variable** $tmp1849 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_11550->$data + 16));
            _f11848 = *$tmp1849;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11848));
        }
        }
        else {
        panda$core$Bit $tmp1850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1850.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1852 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01851 = *$tmp1852;
            panda$collections$ImmutableArray** $tmp1854 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 16));
            _f11853 = *$tmp1854;
            panda$collections$ImmutableArray** $tmp1856 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 24));
            _f21855 = *$tmp1856;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11853));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21855));
        }
        }
        else {
        panda$core$Bit $tmp1857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11550->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1857.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1859 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11550->$data + 0));
            _f01858 = *$tmp1859;
            panda$core$String** $tmp1861 = ((panda$core$String**) ((char*) $match$5_11550->$data + 16));
            _f11860 = *$tmp1861;
            org$pandalanguage$pandac$IRNode** $tmp1863 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11550->$data + 24));
            _f21862 = *$tmp1863;
            panda$collections$ImmutableArray** $tmp1865 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11550->$data + 32));
            _f31864 = *$tmp1865;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11860));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21862));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31864));
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
    panda$core$Object$cleanup(((panda$core$Object*) self));
}

