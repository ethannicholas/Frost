#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Panda.h"
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
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/Symbol.h"


static panda$core$String $s1;
org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, org$pandalanguage$pandac$IRNode$cleanup, org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit} };

typedef org$pandalanguage$pandac$Type* (*$fn225)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn252)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn265)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn280)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn282)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn285)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn344)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn352)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn402)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn453)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn456)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn470)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn474)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn486)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn492)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn498)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn500)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn516)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn522)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn528)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn530)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn554)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn569)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn579)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn584)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn590)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn596)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn598)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn615)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn620)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn626)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn632)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn634)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn638)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn646)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn651)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn661)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn667)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn673)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn675)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn686)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn691)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn697)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn703)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn705)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn712)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn718)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn724)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn726)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn744)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn755)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn760)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn766)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn772)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn774)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn784)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn794)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn810)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn813)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn817)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn860)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn866)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn872)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn874)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn889)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn895)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn901)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn903)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn910)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn916)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn922)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn924)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn935)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn940)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn946)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn952)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn954)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn982)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1006)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1012)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1018)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn1050)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1061)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1079)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1123)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1130)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1148)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1154)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1160)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1175)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1187)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1210)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1216)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1222)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1265)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1271)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1277)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1300)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1306)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1312)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1320)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1326)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1332)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1344)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1365)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1396)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1402)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1408)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1489)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1504)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1521)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1604)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1610)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1616)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s1039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54\x36\x34\x5f\x57\x52\x41\x50\x28", 11, -7093166379287162761, NULL };
static panda$core$String $s1056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s1334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x3a\x20", 17, -7730994269199854653, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3a\x20", 28, 2945252663019609900, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s1580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode** $tmp4 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp4 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp3));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp5 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode** $tmp6 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp6 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp5));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp7 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp7 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp8 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type** $tmp9 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp9 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp8));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp10 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode** $tmp11 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp11 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp10));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp12 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp12 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp13 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        org$pandalanguage$pandac$IRNode** $tmp14 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        *$tmp14 = p_f4;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp13));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp15 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp15 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp16 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type** $tmp17 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp17 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp16));
    }
    panda$core$Bit* $tmp18 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp18 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp19 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp19 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp20 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$collections$ImmutableArray** $tmp21 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        *$tmp21 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp20));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp22 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp22 = p_f0;
    {
        panda$core$String** $tmp23 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String** $tmp24 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp24 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp23));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp25 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp25 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp26 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type** $tmp27 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp27 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp26));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp28 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$MethodRef** $tmp29 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        *$tmp29 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp28));
    }
    {
        panda$collections$ImmutableArray** $tmp30 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray** $tmp31 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp31 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp30));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp32 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp32 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp33 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode** $tmp34 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp34 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp33));
    }
    {
        org$pandalanguage$pandac$Type** $tmp35 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$Type** $tmp36 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        *$tmp36 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp35));
    }
    panda$core$Bit* $tmp37 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp37 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp38 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp38 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp39 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ChoiceEntry** $tmp40 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        *$tmp40 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp39));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp41 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp41 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp42 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode** $tmp43 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp43 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp42));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp44 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ChoiceEntry** $tmp45 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        *$tmp45 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp44));
    }
    panda$core$Int64* $tmp46 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp46 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp47 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp47 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp48 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type** $tmp49 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp49 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp48));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp50 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode** $tmp51 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp51 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp50));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp52 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp52 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp53 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type** $tmp54 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp54 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp53));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp55 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        org$pandalanguage$pandac$IRNode** $tmp56 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        *$tmp56 = p_f0;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp55));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp57 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        org$pandalanguage$pandac$IRNode** $tmp58 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        *$tmp58 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp57));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp59 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp59 = p_f0;
    {
        panda$core$String** $tmp60 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String** $tmp61 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp61 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp60));
    }
    {
        panda$collections$ImmutableArray** $tmp62 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp63 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp63 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp62));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp64 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$IRNode** $tmp65 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        *$tmp65 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp64));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp66 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        org$pandalanguage$pandac$IRNode** $tmp67 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        *$tmp67 = p_f0;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp66));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp68 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        org$pandalanguage$pandac$IRNode** $tmp69 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        *$tmp69 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp68));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp70 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp70 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp71 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type** $tmp72 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp72 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp71));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp73 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode** $tmp74 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp74 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp73));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp75 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$FieldDecl** $tmp76 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        *$tmp76 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp75));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp77 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp77 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp78 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode** $tmp79 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp79 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp78));
    }
    {
        panda$collections$ImmutableArray** $tmp80 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp81 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp81 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp80));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp82 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$IRNode** $tmp83 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        *$tmp83 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp82));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp84 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp84 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp85 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type** $tmp86 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp86 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp85));
    }
    panda$core$UInt64* $tmp87 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp87 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp88 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp88 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp89 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode** $tmp90 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp90 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp89));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp91 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp91 = p_f0;
    {
        panda$core$String** $tmp92 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String** $tmp93 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp93 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp92));
    }
    {
        panda$collections$ImmutableArray** $tmp94 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp95 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp95 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp94));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp96 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp96 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp97 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode** $tmp98 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp98 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp97));
    }
    {
        panda$collections$ImmutableArray** $tmp99 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp100 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp100 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp99));
    }
    {
        panda$collections$ImmutableArray** $tmp101 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray** $tmp102 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp102 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp101));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$MethodRef* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp103 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp103 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp104 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode** $tmp105 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp105 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp104));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp106 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$MethodRef** $tmp107 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        *$tmp107 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp106));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp108 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp108 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp109 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp109 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp110 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode** $tmp111 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp111 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp110));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp112 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp112 = p_f0;
    {
        panda$core$String** $tmp113 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String** $tmp114 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp114 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp113));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp115 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode** $tmp116 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp116 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp115));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp117 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$IRNode** $tmp118 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        *$tmp118 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp117));
    }
    {
        panda$collections$ImmutableArray** $tmp119 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        panda$collections$ImmutableArray** $tmp120 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        *$tmp120 = p_f4;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp119));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp121 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp121 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp122 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type** $tmp123 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp123 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp122));
    }
    panda$core$Real64* $tmp124 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp124 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp125 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp125 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp126 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode** $tmp127 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp127 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp126));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp128 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp128 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp129 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type** $tmp130 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp130 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp129));
    }
    panda$core$Int64* $tmp131 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp131 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp132 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        org$pandalanguage$pandac$IRNode** $tmp133 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        *$tmp133 = p_f0;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp132));
    }
    panda$core$Int64* $tmp134 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp134 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp135 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp135 = p_f0;
    {
        panda$core$String** $tmp136 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String** $tmp137 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp137 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp136));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp138 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp138 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp139 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode** $tmp140 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp140 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp139));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp141 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode** $tmp142 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp142 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp141));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp143 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$IRNode** $tmp144 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        *$tmp144 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp143));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp145 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp145 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp146 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type** $tmp147 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp147 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp146));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp148 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode** $tmp149 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp149 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp148));
    }
    {
        panda$collections$ImmutableArray** $tmp150 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray** $tmp151 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp151 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp150));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp152 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp152 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp153 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Type** $tmp154 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp154 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp153));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp155 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode** $tmp156 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp156 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp155));
    }
    {
        panda$collections$ImmutableArray** $tmp157 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray** $tmp158 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp158 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp157));
    }
    {
        panda$collections$ImmutableArray** $tmp159 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        panda$collections$ImmutableArray** $tmp160 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        *$tmp160 = p_f4;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp159));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp161 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp161 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp162 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode** $tmp163 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp163 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp162));
    }
    {
        panda$collections$ImmutableArray** $tmp164 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp165 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp165 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp164));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp166 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp166 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp167 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$IRNode** $tmp168 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp168 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp167));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp169 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode** $tmp170 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp170 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp169));
    }
    panda$core$Bit* $tmp171 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp171 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp172 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        org$pandalanguage$pandac$IRNode** $tmp173 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        *$tmp173 = p_f4;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp172));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp174 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp174 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp175 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp175 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp176 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp177 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp177 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp176));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp178 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp178 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp179 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$Variable** $tmp180 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        *$tmp180 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp179));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp181 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp181 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp182 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$collections$ImmutableArray** $tmp183 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        *$tmp183 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp182));
    }
    {
        panda$collections$ImmutableArray** $tmp184 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp185 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp185 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp184));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp186 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp186 = p_f0;
    {
        panda$core$String** $tmp187 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String** $tmp188 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp188 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp187));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp189 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$IRNode** $tmp190 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp190 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp189));
    }
    {
        panda$collections$ImmutableArray** $tmp191 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray** $tmp192 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp192 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp191));
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$66_9193;
    org$pandalanguage$pandac$Type* type195;
    org$pandalanguage$pandac$Type* type198;
    org$pandalanguage$pandac$Type* type201;
    org$pandalanguage$pandac$Type* type204;
    org$pandalanguage$pandac$ChoiceEntry* ce207;
    org$pandalanguage$pandac$ChoiceEntry* ce211;
    panda$core$Int64 field213;
    org$pandalanguage$pandac$Type* type217;
    org$pandalanguage$pandac$Type* type220;
    org$pandalanguage$pandac$IRNode* expr223;
    org$pandalanguage$pandac$Type* type228;
    org$pandalanguage$pandac$Type* type231;
    org$pandalanguage$pandac$IRNode* ref238;
    org$pandalanguage$pandac$Position $tmp242;
    org$pandalanguage$pandac$Type* type244;
    org$pandalanguage$pandac$Type* type247;
    org$pandalanguage$pandac$IRNode* base250;
    org$pandalanguage$pandac$Type* type255;
    org$pandalanguage$pandac$Type* type258;
    panda$core$Int64 id260;
    org$pandalanguage$pandac$IRNode* base263;
    org$pandalanguage$pandac$Type* type268;
    org$pandalanguage$pandac$Type* type273;
    org$pandalanguage$pandac$IRNode* ifTrue276;
    org$pandalanguage$pandac$IRNode* ifFalse278;
    org$pandalanguage$pandac$Type* type292;
    org$pandalanguage$pandac$Type* type295;
    org$pandalanguage$pandac$Variable* variable302;
    {
        $match$66_9193 = self;
        panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp194.value) {
        {
            org$pandalanguage$pandac$Type** $tmp196 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 16));
            type195 = *$tmp196;
            return type195;
        }
        }
        else {
        panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp197.value) {
        {
            org$pandalanguage$pandac$Type** $tmp199 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 16));
            type198 = *$tmp199;
            return type198;
        }
        }
        else {
        panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp200.value) {
        {
            org$pandalanguage$pandac$Type** $tmp202 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 16));
            type201 = *$tmp202;
            return type201;
        }
        }
        else {
        panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp203.value) {
        {
            org$pandalanguage$pandac$Type** $tmp205 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 24));
            type204 = *$tmp205;
            return type204;
        }
        }
        else {
        panda$core$Bit $tmp206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp206.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp208 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$66_9193->$data + 16));
            ce207 = *$tmp208;
            org$pandalanguage$pandac$Type* $tmp209 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp209;
        }
        }
        else {
        panda$core$Bit $tmp210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp210.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp212 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$66_9193->$data + 24));
            ce211 = *$tmp212;
            panda$core$Int64* $tmp214 = ((panda$core$Int64*) ((char*) $match$66_9193->$data + 32));
            field213 = *$tmp214;
            panda$core$Object* $tmp215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce211->fields, field213);
            return ((org$pandalanguage$pandac$Type*) $tmp215);
        }
        }
        else {
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp216.value) {
        {
            org$pandalanguage$pandac$Type** $tmp218 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 16));
            type217 = *$tmp218;
            return type217;
        }
        }
        else {
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp219.value) {
        {
            org$pandalanguage$pandac$Type** $tmp221 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 16));
            type220 = *$tmp221;
            return type220;
        }
        }
        else {
        panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp222.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp224 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9193->$data + 0));
            expr223 = *$tmp224;
            org$pandalanguage$pandac$Type* $tmp226 = (($fn225) expr223->$class->vtable[2])(expr223);
            return $tmp226;
        }
        }
        else {
        panda$core$Bit $tmp227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp227.value) {
        {
            org$pandalanguage$pandac$Type** $tmp229 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 16));
            type228 = *$tmp229;
            return type228;
        }
        }
        else {
        panda$core$Bit $tmp230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp230.value) {
        {
            org$pandalanguage$pandac$Type** $tmp232 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 16));
            type231 = *$tmp232;
            return type231;
        }
        }
        else {
        panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp233.value) {
        {
            org$pandalanguage$pandac$Type* $tmp234 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            return $tmp234;
        }
        }
        else {
        panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp235.value) {
        {
            org$pandalanguage$pandac$Type* $tmp236 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            return $tmp236;
        }
        }
        else {
        panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp237.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp239 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9193->$data + 16));
            ref238 = *$tmp239;
            org$pandalanguage$pandac$Type* $tmp240 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            org$pandalanguage$pandac$Position$init(&$tmp242);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp240, &$s241, ((panda$core$Int64) { 16 }), $tmp242, ((panda$core$Bit) { true }));
            return $tmp240;
        }
        }
        else {
        panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp243.value) {
        {
            org$pandalanguage$pandac$Type** $tmp245 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 16));
            type244 = *$tmp245;
            return type244;
        }
        }
        else {
        panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp246.value) {
        {
            org$pandalanguage$pandac$Type** $tmp248 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 16));
            type247 = *$tmp248;
            return type247;
        }
        }
        else {
        panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp249.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp251 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9193->$data + 24));
            base250 = *$tmp251;
            org$pandalanguage$pandac$Type* $tmp253 = (($fn252) base250->$class->vtable[2])(base250);
            return $tmp253;
        }
        }
        else {
        panda$core$Bit $tmp254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp254.value) {
        {
            org$pandalanguage$pandac$Type** $tmp256 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 16));
            type255 = *$tmp256;
            return type255;
        }
        }
        else {
        panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp257.value) {
        {
            org$pandalanguage$pandac$Type** $tmp259 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 16));
            type258 = *$tmp259;
            panda$core$Int64* $tmp261 = ((panda$core$Int64*) ((char*) $match$66_9193->$data + 24));
            id260 = *$tmp261;
            return type258;
        }
        }
        else {
        panda$core$Bit $tmp262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp262.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp264 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9193->$data + 0));
            base263 = *$tmp264;
            org$pandalanguage$pandac$Type* $tmp266 = (($fn265) base263->$class->vtable[2])(base263);
            return $tmp266;
        }
        }
        else {
        panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp267.value) {
        {
            org$pandalanguage$pandac$Type** $tmp269 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 16));
            type268 = *$tmp269;
            return type268;
        }
        }
        else {
        panda$core$Bit $tmp270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp270.value) {
        {
            org$pandalanguage$pandac$Type* $tmp271 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            return $tmp271;
        }
        }
        else {
        panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp272.value) {
        {
            org$pandalanguage$pandac$Type** $tmp274 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 16));
            type273 = *$tmp274;
            return type273;
        }
        }
        else {
        panda$core$Bit $tmp275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp275.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp277 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9193->$data + 24));
            ifTrue276 = *$tmp277;
            org$pandalanguage$pandac$IRNode** $tmp279 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9193->$data + 32));
            ifFalse278 = *$tmp279;
            org$pandalanguage$pandac$Type* $tmp281 = (($fn280) ifTrue276->$class->vtable[2])(ifTrue276);
            org$pandalanguage$pandac$Type* $tmp283 = (($fn282) ifFalse278->$class->vtable[2])(ifFalse278);
            panda$core$Bit $tmp284 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp281, $tmp283);
            PANDA_ASSERT($tmp284.value);
            org$pandalanguage$pandac$Type* $tmp286 = (($fn285) ifTrue276->$class->vtable[2])(ifTrue276);
            return $tmp286;
        }
        }
        else {
        panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp287.value) {
        {
            org$pandalanguage$pandac$Type* $tmp288 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            return $tmp288;
        }
        }
        else {
        panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp289.value) {
        {
            org$pandalanguage$pandac$Type* $tmp290 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp290;
        }
        }
        else {
        panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp291.value) {
        {
            org$pandalanguage$pandac$Type** $tmp293 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 16));
            type292 = *$tmp293;
            return type292;
        }
        }
        else {
        panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp294.value) {
        {
            org$pandalanguage$pandac$Type** $tmp296 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9193->$data + 16));
            type295 = *$tmp296;
            return type295;
        }
        }
        else {
        panda$core$Bit $tmp297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp297.value) {
        {
            org$pandalanguage$pandac$Type* $tmp298 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp298;
        }
        }
        else {
        panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp299.value) {
        {
            org$pandalanguage$pandac$Type* $tmp300 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp300;
        }
        }
        else {
        panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9193->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp301.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp303 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$66_9193->$data + 16));
            variable302 = *$tmp303;
            return variable302->type;
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
    org$pandalanguage$pandac$IRNode* $match$136_9304;
    org$pandalanguage$pandac$Position position306;
    org$pandalanguage$pandac$Position position309;
    org$pandalanguage$pandac$Position position312;
    org$pandalanguage$pandac$Position position315;
    org$pandalanguage$pandac$Position position318;
    org$pandalanguage$pandac$Position position321;
    org$pandalanguage$pandac$Position position324;
    org$pandalanguage$pandac$Position position327;
    org$pandalanguage$pandac$Position position330;
    org$pandalanguage$pandac$Position position333;
    org$pandalanguage$pandac$Position position336;
    org$pandalanguage$pandac$Position position339;
    org$pandalanguage$pandac$IRNode* target342;
    org$pandalanguage$pandac$Position position347;
    org$pandalanguage$pandac$IRNode* expr350;
    org$pandalanguage$pandac$Position position355;
    org$pandalanguage$pandac$Position position358;
    org$pandalanguage$pandac$Position position361;
    org$pandalanguage$pandac$Position position364;
    org$pandalanguage$pandac$Position position367;
    org$pandalanguage$pandac$Position position370;
    org$pandalanguage$pandac$Position position373;
    org$pandalanguage$pandac$Position position376;
    org$pandalanguage$pandac$Position position379;
    org$pandalanguage$pandac$Position position382;
    org$pandalanguage$pandac$Position position385;
    org$pandalanguage$pandac$Position position388;
    org$pandalanguage$pandac$Position position391;
    org$pandalanguage$pandac$Position position394;
    org$pandalanguage$pandac$Position position397;
    org$pandalanguage$pandac$IRNode* base400;
    org$pandalanguage$pandac$Position position405;
    org$pandalanguage$pandac$Position position408;
    org$pandalanguage$pandac$Position position411;
    org$pandalanguage$pandac$Position position414;
    org$pandalanguage$pandac$Position position417;
    org$pandalanguage$pandac$Position position420;
    org$pandalanguage$pandac$Position position423;
    org$pandalanguage$pandac$Position position426;
    org$pandalanguage$pandac$Position position429;
    org$pandalanguage$pandac$Position position432;
    org$pandalanguage$pandac$Position position435;
    org$pandalanguage$pandac$Position position438;
    org$pandalanguage$pandac$Position position441;
    org$pandalanguage$pandac$Position position444;
    {
        $match$136_9304 = self;
        panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp305.value) {
        {
            org$pandalanguage$pandac$Position* $tmp307 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position306 = *$tmp307;
            return position306;
        }
        }
        else {
        panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp308.value) {
        {
            org$pandalanguage$pandac$Position* $tmp310 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position309 = *$tmp310;
            return position309;
        }
        }
        else {
        panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp311.value) {
        {
            org$pandalanguage$pandac$Position* $tmp313 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position312 = *$tmp313;
            return position312;
        }
        }
        else {
        panda$core$Bit $tmp314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp314.value) {
        {
            org$pandalanguage$pandac$Position* $tmp316 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position315 = *$tmp316;
            return position315;
        }
        }
        else {
        panda$core$Bit $tmp317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp317.value) {
        {
            org$pandalanguage$pandac$Position* $tmp319 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position318 = *$tmp319;
            return position318;
        }
        }
        else {
        panda$core$Bit $tmp320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp320.value) {
        {
            org$pandalanguage$pandac$Position* $tmp322 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position321 = *$tmp322;
            return position321;
        }
        }
        else {
        panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp323.value) {
        {
            org$pandalanguage$pandac$Position* $tmp325 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position324 = *$tmp325;
            return position324;
        }
        }
        else {
        panda$core$Bit $tmp326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp326.value) {
        {
            org$pandalanguage$pandac$Position* $tmp328 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position327 = *$tmp328;
            return position327;
        }
        }
        else {
        panda$core$Bit $tmp329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp329.value) {
        {
            org$pandalanguage$pandac$Position* $tmp331 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position330 = *$tmp331;
            return position330;
        }
        }
        else {
        panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp332.value) {
        {
            org$pandalanguage$pandac$Position* $tmp334 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position333 = *$tmp334;
            return position333;
        }
        }
        else {
        panda$core$Bit $tmp335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp335.value) {
        {
            org$pandalanguage$pandac$Position* $tmp337 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position336 = *$tmp337;
            return position336;
        }
        }
        else {
        panda$core$Bit $tmp338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp338.value) {
        {
            org$pandalanguage$pandac$Position* $tmp340 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position339 = *$tmp340;
            return position339;
        }
        }
        else {
        panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp341.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp343 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$136_9304->$data + 0));
            target342 = *$tmp343;
            org$pandalanguage$pandac$Position $tmp345 = (($fn344) target342->$class->vtable[3])(target342);
            return $tmp345;
        }
        }
        else {
        panda$core$Bit $tmp346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp346.value) {
        {
            org$pandalanguage$pandac$Position* $tmp348 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position347 = *$tmp348;
            return position347;
        }
        }
        else {
        panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp349.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp351 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$136_9304->$data + 0));
            expr350 = *$tmp351;
            org$pandalanguage$pandac$Position $tmp353 = (($fn352) expr350->$class->vtable[3])(expr350);
            return $tmp353;
        }
        }
        else {
        panda$core$Bit $tmp354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp354.value) {
        {
            org$pandalanguage$pandac$Position* $tmp356 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position355 = *$tmp356;
            return position355;
        }
        }
        else {
        panda$core$Bit $tmp357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp357.value) {
        {
            org$pandalanguage$pandac$Position* $tmp359 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position358 = *$tmp359;
            return position358;
        }
        }
        else {
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp360.value) {
        {
            org$pandalanguage$pandac$Position* $tmp362 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position361 = *$tmp362;
            return position361;
        }
        }
        else {
        panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp363.value) {
        {
            org$pandalanguage$pandac$Position* $tmp365 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position364 = *$tmp365;
            return position364;
        }
        }
        else {
        panda$core$Bit $tmp366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp366.value) {
        {
            org$pandalanguage$pandac$Position* $tmp368 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position367 = *$tmp368;
            return position367;
        }
        }
        else {
        panda$core$Bit $tmp369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp369.value) {
        {
            org$pandalanguage$pandac$Position* $tmp371 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position370 = *$tmp371;
            return position370;
        }
        }
        else {
        panda$core$Bit $tmp372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp372.value) {
        {
            org$pandalanguage$pandac$Position* $tmp374 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position373 = *$tmp374;
            return position373;
        }
        }
        else {
        panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp375.value) {
        {
            org$pandalanguage$pandac$Position* $tmp377 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position376 = *$tmp377;
            return position376;
        }
        }
        else {
        panda$core$Bit $tmp378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp378.value) {
        {
            org$pandalanguage$pandac$Position* $tmp380 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position379 = *$tmp380;
            return position379;
        }
        }
        else {
        panda$core$Bit $tmp381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp381.value) {
        {
            org$pandalanguage$pandac$Position* $tmp383 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position382 = *$tmp383;
            return position382;
        }
        }
        else {
        panda$core$Bit $tmp384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp384.value) {
        {
            org$pandalanguage$pandac$Position* $tmp386 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position385 = *$tmp386;
            return position385;
        }
        }
        else {
        panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp387.value) {
        {
            org$pandalanguage$pandac$Position* $tmp389 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position388 = *$tmp389;
            return position388;
        }
        }
        else {
        panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp390.value) {
        {
            org$pandalanguage$pandac$Position* $tmp392 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position391 = *$tmp392;
            return position391;
        }
        }
        else {
        panda$core$Bit $tmp393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp393.value) {
        {
            org$pandalanguage$pandac$Position* $tmp395 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position394 = *$tmp395;
            return position394;
        }
        }
        else {
        panda$core$Bit $tmp396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp396.value) {
        {
            org$pandalanguage$pandac$Position* $tmp398 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position397 = *$tmp398;
            return position397;
        }
        }
        else {
        panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp399.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp401 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$136_9304->$data + 0));
            base400 = *$tmp401;
            org$pandalanguage$pandac$Position $tmp403 = (($fn402) base400->$class->vtable[3])(base400);
            return $tmp403;
        }
        }
        else {
        panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp404.value) {
        {
            org$pandalanguage$pandac$Position* $tmp406 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position405 = *$tmp406;
            return position405;
        }
        }
        else {
        panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp407.value) {
        {
            org$pandalanguage$pandac$Position* $tmp409 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position408 = *$tmp409;
            return position408;
        }
        }
        else {
        panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp410.value) {
        {
            org$pandalanguage$pandac$Position* $tmp412 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position411 = *$tmp412;
            return position411;
        }
        }
        else {
        panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp413.value) {
        {
            org$pandalanguage$pandac$Position* $tmp415 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position414 = *$tmp415;
            return position414;
        }
        }
        else {
        panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp416.value) {
        {
            org$pandalanguage$pandac$Position* $tmp418 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position417 = *$tmp418;
            return position417;
        }
        }
        else {
        panda$core$Bit $tmp419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp419.value) {
        {
            org$pandalanguage$pandac$Position* $tmp421 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position420 = *$tmp421;
            return position420;
        }
        }
        else {
        panda$core$Bit $tmp422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp422.value) {
        {
            org$pandalanguage$pandac$Position* $tmp424 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position423 = *$tmp424;
            return position423;
        }
        }
        else {
        panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp425.value) {
        {
            org$pandalanguage$pandac$Position* $tmp427 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position426 = *$tmp427;
            return position426;
        }
        }
        else {
        panda$core$Bit $tmp428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp428.value) {
        {
            org$pandalanguage$pandac$Position* $tmp430 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position429 = *$tmp430;
            return position429;
        }
        }
        else {
        panda$core$Bit $tmp431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp431.value) {
        {
            org$pandalanguage$pandac$Position* $tmp433 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position432 = *$tmp433;
            return position432;
        }
        }
        else {
        panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp434.value) {
        {
            org$pandalanguage$pandac$Position* $tmp436 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position435 = *$tmp436;
            return position435;
        }
        }
        else {
        panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp437.value) {
        {
            org$pandalanguage$pandac$Position* $tmp439 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position438 = *$tmp439;
            return position438;
        }
        }
        else {
        panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp440.value) {
        {
            org$pandalanguage$pandac$Position* $tmp442 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position441 = *$tmp442;
            return position441;
        }
        }
        else {
        panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9304->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp443.value) {
        {
            org$pandalanguage$pandac$Position* $tmp445 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9304->$data + 0));
            position444 = *$tmp445;
            return position444;
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
    org$pandalanguage$pandac$IRNode* $match$233_9446;
    org$pandalanguage$pandac$IRNode* test448;
    org$pandalanguage$pandac$IRNode* msg450;
    org$pandalanguage$pandac$IRNode* left460;
    org$pandalanguage$pandac$parser$Token$Kind op462;
    org$pandalanguage$pandac$IRNode* right464;
    panda$core$Bit bit478;
    panda$collections$ImmutableArray* statements481;
    panda$collections$Iterator* Iter$241$17483;
    org$pandalanguage$pandac$IRNode* s495;
    panda$core$Bit tmp1502;
    panda$core$Bit tmp2503;
    panda$core$String* label505;
    org$pandalanguage$pandac$MethodRef* m508;
    panda$collections$ImmutableArray* args510;
    panda$collections$Iterator* Iter$253$17513;
    org$pandalanguage$pandac$IRNode* arg525;
    panda$core$Bit tmp3532;
    panda$core$Bit tmp4533;
    org$pandalanguage$pandac$IRNode* value535;
    org$pandalanguage$pandac$Type* type537;
    org$pandalanguage$pandac$ChoiceEntry* ce540;
    org$pandalanguage$pandac$IRNode* base543;
    org$pandalanguage$pandac$ChoiceEntry* ce545;
    panda$core$Int64 field547;
    org$pandalanguage$pandac$Type* type550;
    org$pandalanguage$pandac$IRNode* call552;
    org$pandalanguage$pandac$Type* Type557;
    panda$core$String* label560;
    org$pandalanguage$pandac$IRNode* target563;
    org$pandalanguage$pandac$IRNode* value565;
    panda$core$String* label573;
    panda$collections$ImmutableArray* statements575;
    org$pandalanguage$pandac$IRNode* test577;
    panda$collections$Iterator* Iter$277$17581;
    org$pandalanguage$pandac$IRNode* s593;
    panda$core$Bit tmp5600;
    panda$core$Bit tmp6601;
    org$pandalanguage$pandac$IRNode* base604;
    org$pandalanguage$pandac$FieldDecl* field606;
    org$pandalanguage$pandac$IRNode* test609;
    panda$collections$ImmutableArray* ifTrue611;
    org$pandalanguage$pandac$IRNode* ifFalse613;
    panda$collections$Iterator* Iter$291$17617;
    org$pandalanguage$pandac$IRNode* s629;
    panda$core$Bit tmp7636;
    panda$core$Bit tmp8637;
    panda$core$UInt64 value641;
    org$pandalanguage$pandac$IRNode* value644;
    org$pandalanguage$pandac$IRNode* value649;
    panda$core$String* label654;
    panda$collections$ImmutableArray* statements656;
    panda$collections$Iterator* Iter$304$17658;
    org$pandalanguage$pandac$IRNode* s670;
    panda$core$Bit tmp9677;
    panda$core$Bit tmp10678;
    org$pandalanguage$pandac$IRNode* value680;
    panda$collections$ImmutableArray* whens682;
    panda$collections$ImmutableArray* other684;
    panda$collections$Iterator* Iter$314$17688;
    org$pandalanguage$pandac$IRNode* w700;
    panda$core$Bit tmp11707;
    panda$core$Bit tmp12708;
    panda$collections$Iterator* Iter$319$17709;
    org$pandalanguage$pandac$IRNode* s721;
    panda$core$Bit tmp13728;
    panda$core$Bit tmp14729;
    org$pandalanguage$pandac$IRNode* target731;
    org$pandalanguage$pandac$MethodRef* m733;
    panda$core$UInt64 value736;
    org$pandalanguage$pandac$parser$Token$Kind op740;
    org$pandalanguage$pandac$IRNode* base742;
    panda$core$String* label747;
    org$pandalanguage$pandac$IRNode* target749;
    org$pandalanguage$pandac$IRNode* list751;
    panda$collections$ImmutableArray* statements753;
    panda$collections$Iterator* Iter$338$17757;
    org$pandalanguage$pandac$IRNode* s769;
    panda$core$Bit tmp15776;
    panda$core$Bit tmp16777;
    panda$core$Real64 value779;
    org$pandalanguage$pandac$IRNode* value782;
    panda$core$Int64 id787;
    org$pandalanguage$pandac$IRNode* base790;
    panda$core$Int64 id792;
    panda$core$String* str798;
    org$pandalanguage$pandac$IRNode* test802;
    org$pandalanguage$pandac$IRNode* ifTrue804;
    org$pandalanguage$pandac$IRNode* ifFalse806;
    org$pandalanguage$pandac$Type* type821;
    panda$core$String* name824;
    org$pandalanguage$pandac$IRNode* base827;
    panda$collections$ImmutableArray* args829;
    org$pandalanguage$pandac$IRNode* target832;
    panda$collections$ImmutableArray* methods834;
    panda$collections$ImmutableArray* args836;
    org$pandalanguage$pandac$IRNode* target839;
    panda$collections$ImmutableArray* methods841;
    org$pandalanguage$pandac$IRNode* start844;
    org$pandalanguage$pandac$IRNode* end846;
    panda$core$Bit inclusive848;
    org$pandalanguage$pandac$IRNode* step850;
    org$pandalanguage$pandac$Variable$Kind kind853;
    panda$collections$ImmutableArray* decls855;
    panda$collections$Iterator* Iter$373$17857;
    org$pandalanguage$pandac$IRNode* d869;
    panda$core$Bit tmp17876;
    panda$core$Bit tmp18877;
    org$pandalanguage$pandac$Variable* variable879;
    panda$collections$ImmutableArray* tests882;
    panda$collections$ImmutableArray* statements884;
    panda$collections$Iterator* Iter$382$17886;
    org$pandalanguage$pandac$IRNode* t898;
    panda$core$Bit tmp19905;
    panda$core$Bit tmp20906;
    panda$collections$Iterator* Iter$387$17907;
    org$pandalanguage$pandac$IRNode* s919;
    panda$core$Bit tmp21926;
    panda$core$Bit tmp22927;
    panda$core$String* label929;
    org$pandalanguage$pandac$IRNode* test931;
    panda$collections$ImmutableArray* statements933;
    panda$collections$Iterator* Iter$397$17937;
    org$pandalanguage$pandac$IRNode* s949;
    panda$core$Bit tmp23956;
    panda$core$Bit tmp24957;
    {
        $match$233_9446 = self;
        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp447.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp449 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 16));
            test448 = *$tmp449;
            org$pandalanguage$pandac$IRNode** $tmp451 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 24));
            msg450 = *$tmp451;
            panda$core$Bit $tmp454 = (($fn453) test448->$class->vtable[4])(test448);
            bool $tmp452 = $tmp454.value;
            if ($tmp452) goto $l455;
            panda$core$Bit $tmp457 = (($fn456) msg450->$class->vtable[4])(msg450);
            $tmp452 = $tmp457.value;
            $l455:;
            panda$core$Bit $tmp458 = { $tmp452 };
            return $tmp458;
        }
        }
        else {
        panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp459.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp461 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 24));
            left460 = *$tmp461;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp463 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$233_9446->$data + 32));
            op462 = *$tmp463;
            org$pandalanguage$pandac$IRNode** $tmp465 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 40));
            right464 = *$tmp465;
            panda$core$Bit $tmp468 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op462);
            bool $tmp467 = $tmp468.value;
            if ($tmp467) goto $l469;
            panda$core$Bit $tmp471 = (($fn470) left460->$class->vtable[4])(left460);
            $tmp467 = $tmp471.value;
            $l469:;
            panda$core$Bit $tmp472 = { $tmp467 };
            bool $tmp466 = $tmp472.value;
            if ($tmp466) goto $l473;
            panda$core$Bit $tmp475 = (($fn474) right464->$class->vtable[4])(right464);
            $tmp466 = $tmp475.value;
            $l473:;
            panda$core$Bit $tmp476 = { $tmp466 };
            return $tmp476;
        }
        }
        else {
        panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp477.value) {
        {
            panda$core$Bit* $tmp479 = ((panda$core$Bit*) ((char*) $match$233_9446->$data + 24));
            bit478 = *$tmp479;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp480.value) {
        {
            panda$collections$ImmutableArray** $tmp482 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 16));
            statements481 = *$tmp482;
            {
                ITable* $tmp484 = ((panda$collections$Iterable*) statements481)->$class->itable;
                while ($tmp484->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp484 = $tmp484->next;
                }
                $fn486 $tmp485 = $tmp484->methods[0];
                panda$collections$Iterator* $tmp487 = $tmp485(((panda$collections$Iterable*) statements481));
                Iter$241$17483 = $tmp487;
                $l488:;
                ITable* $tmp490 = Iter$241$17483->$class->itable;
                while ($tmp490->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp490 = $tmp490->next;
                }
                $fn492 $tmp491 = $tmp490->methods[0];
                panda$core$Bit $tmp493 = $tmp491(Iter$241$17483);
                panda$core$Bit $tmp494 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp493);
                if (!$tmp494.value) goto $l489;
                {
                    ITable* $tmp496 = Iter$241$17483->$class->itable;
                    while ($tmp496->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp496 = $tmp496->next;
                    }
                    $fn498 $tmp497 = $tmp496->methods[1];
                    panda$core$Object* $tmp499 = $tmp497(Iter$241$17483);
                    s495 = ((org$pandalanguage$pandac$IRNode*) $tmp499);
                    panda$core$Bit $tmp501 = (($fn500) s495->$class->vtable[4])(s495);
                    if ($tmp501.value) {
                    {
                        {
                            tmp1502 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s495));
                            {
                                tmp2503 = tmp1502;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$17483));
                                return tmp2503;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s495));
                }
                goto $l488;
                $l489:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$241$17483));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp504.value) {
        {
            panda$core$String** $tmp506 = ((panda$core$String**) ((char*) $match$233_9446->$data + 16));
            label505 = *$tmp506;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp507.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp509 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$233_9446->$data + 24));
            m508 = *$tmp509;
            panda$collections$ImmutableArray** $tmp511 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 32));
            args510 = *$tmp511;
            panda$core$Bit $tmp512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m508->value->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp512.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp514 = ((panda$collections$Iterable*) args510)->$class->itable;
                while ($tmp514->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp514 = $tmp514->next;
                }
                $fn516 $tmp515 = $tmp514->methods[0];
                panda$collections$Iterator* $tmp517 = $tmp515(((panda$collections$Iterable*) args510));
                Iter$253$17513 = $tmp517;
                $l518:;
                ITable* $tmp520 = Iter$253$17513->$class->itable;
                while ($tmp520->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp520 = $tmp520->next;
                }
                $fn522 $tmp521 = $tmp520->methods[0];
                panda$core$Bit $tmp523 = $tmp521(Iter$253$17513);
                panda$core$Bit $tmp524 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp523);
                if (!$tmp524.value) goto $l519;
                {
                    ITable* $tmp526 = Iter$253$17513->$class->itable;
                    while ($tmp526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp526 = $tmp526->next;
                    }
                    $fn528 $tmp527 = $tmp526->methods[1];
                    panda$core$Object* $tmp529 = $tmp527(Iter$253$17513);
                    arg525 = ((org$pandalanguage$pandac$IRNode*) $tmp529);
                    panda$core$Bit $tmp531 = (($fn530) arg525->$class->vtable[4])(arg525);
                    if ($tmp531.value) {
                    {
                        {
                            tmp3532 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg525));
                            {
                                tmp4533 = tmp3532;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$253$17513));
                                return tmp4533;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg525));
                }
                goto $l518;
                $l519:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$253$17513));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp534.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp536 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 16));
            value535 = *$tmp536;
            org$pandalanguage$pandac$Type** $tmp538 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9446->$data + 24));
            type537 = *$tmp538;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp539.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp541 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$233_9446->$data + 16));
            ce540 = *$tmp541;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp542.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp544 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 16));
            base543 = *$tmp544;
            org$pandalanguage$pandac$ChoiceEntry** $tmp546 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$233_9446->$data + 24));
            ce545 = *$tmp546;
            panda$core$Int64* $tmp548 = ((panda$core$Int64*) ((char*) $match$233_9446->$data + 32));
            field547 = *$tmp548;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp549.value) {
        {
            org$pandalanguage$pandac$Type** $tmp551 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9446->$data + 16));
            type550 = *$tmp551;
            org$pandalanguage$pandac$IRNode** $tmp553 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 24));
            call552 = *$tmp553;
            panda$core$Bit $tmp555 = (($fn554) call552->$class->vtable[4])(call552);
            return $tmp555;
        }
        }
        else {
        panda$core$Bit $tmp556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp556.value) {
        {
            org$pandalanguage$pandac$Type** $tmp558 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9446->$data + 16));
            Type557 = *$tmp558;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp559.value) {
        {
            panda$core$String** $tmp561 = ((panda$core$String**) ((char*) $match$233_9446->$data + 16));
            label560 = *$tmp561;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp562.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp564 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 0));
            target563 = *$tmp564;
            org$pandalanguage$pandac$IRNode** $tmp566 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 8));
            value565 = *$tmp566;
            bool $tmp567 = ((panda$core$Bit) { value565 != NULL }).value;
            if (!$tmp567) goto $l568;
            panda$core$Bit $tmp570 = (($fn569) value565->$class->vtable[4])(value565);
            $tmp567 = $tmp570.value;
            $l568:;
            panda$core$Bit $tmp571 = { $tmp567 };
            return $tmp571;
        }
        }
        else {
        panda$core$Bit $tmp572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp572.value) {
        {
            panda$core$String** $tmp574 = ((panda$core$String**) ((char*) $match$233_9446->$data + 16));
            label573 = *$tmp574;
            panda$collections$ImmutableArray** $tmp576 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 24));
            statements575 = *$tmp576;
            org$pandalanguage$pandac$IRNode** $tmp578 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 32));
            test577 = *$tmp578;
            panda$core$Bit $tmp580 = (($fn579) test577->$class->vtable[4])(test577);
            if ($tmp580.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp582 = ((panda$collections$Iterable*) statements575)->$class->itable;
                while ($tmp582->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp582 = $tmp582->next;
                }
                $fn584 $tmp583 = $tmp582->methods[0];
                panda$collections$Iterator* $tmp585 = $tmp583(((panda$collections$Iterable*) statements575));
                Iter$277$17581 = $tmp585;
                $l586:;
                ITable* $tmp588 = Iter$277$17581->$class->itable;
                while ($tmp588->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp588 = $tmp588->next;
                }
                $fn590 $tmp589 = $tmp588->methods[0];
                panda$core$Bit $tmp591 = $tmp589(Iter$277$17581);
                panda$core$Bit $tmp592 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp591);
                if (!$tmp592.value) goto $l587;
                {
                    ITable* $tmp594 = Iter$277$17581->$class->itable;
                    while ($tmp594->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp594 = $tmp594->next;
                    }
                    $fn596 $tmp595 = $tmp594->methods[1];
                    panda$core$Object* $tmp597 = $tmp595(Iter$277$17581);
                    s593 = ((org$pandalanguage$pandac$IRNode*) $tmp597);
                    panda$core$Bit $tmp599 = (($fn598) s593->$class->vtable[4])(s593);
                    if ($tmp599.value) {
                    {
                        {
                            tmp5600 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s593));
                            {
                                tmp6601 = tmp5600;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$277$17581));
                                return tmp6601;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s593));
                }
                goto $l586;
                $l587:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$277$17581));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp602.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp603.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp605 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 24));
            base604 = *$tmp605;
            org$pandalanguage$pandac$FieldDecl** $tmp607 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$233_9446->$data + 32));
            field606 = *$tmp607;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp608.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp610 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 16));
            test609 = *$tmp610;
            panda$collections$ImmutableArray** $tmp612 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 24));
            ifTrue611 = *$tmp612;
            org$pandalanguage$pandac$IRNode** $tmp614 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 32));
            ifFalse613 = *$tmp614;
            panda$core$Bit $tmp616 = (($fn615) test609->$class->vtable[4])(test609);
            if ($tmp616.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp618 = ((panda$collections$Iterable*) ifTrue611)->$class->itable;
                while ($tmp618->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp618 = $tmp618->next;
                }
                $fn620 $tmp619 = $tmp618->methods[0];
                panda$collections$Iterator* $tmp621 = $tmp619(((panda$collections$Iterable*) ifTrue611));
                Iter$291$17617 = $tmp621;
                $l622:;
                ITable* $tmp624 = Iter$291$17617->$class->itable;
                while ($tmp624->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp624 = $tmp624->next;
                }
                $fn626 $tmp625 = $tmp624->methods[0];
                panda$core$Bit $tmp627 = $tmp625(Iter$291$17617);
                panda$core$Bit $tmp628 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp627);
                if (!$tmp628.value) goto $l623;
                {
                    ITable* $tmp630 = Iter$291$17617->$class->itable;
                    while ($tmp630->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp630 = $tmp630->next;
                    }
                    $fn632 $tmp631 = $tmp630->methods[1];
                    panda$core$Object* $tmp633 = $tmp631(Iter$291$17617);
                    s629 = ((org$pandalanguage$pandac$IRNode*) $tmp633);
                    panda$core$Bit $tmp635 = (($fn634) s629->$class->vtable[4])(s629);
                    if ($tmp635.value) {
                    {
                        {
                            tmp7636 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s629));
                            {
                                tmp8637 = tmp7636;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$291$17617));
                                return tmp8637;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s629));
                }
                goto $l622;
                $l623:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$291$17617));
            }
            panda$core$Bit $tmp639 = (($fn638) ifFalse613->$class->vtable[4])(ifFalse613);
            return $tmp639;
        }
        }
        else {
        panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp640.value) {
        {
            panda$core$UInt64* $tmp642 = ((panda$core$UInt64*) ((char*) $match$233_9446->$data + 24));
            value641 = *$tmp642;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp643.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp645 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 16));
            value644 = *$tmp645;
            panda$core$Bit $tmp647 = (($fn646) value644->$class->vtable[4])(value644);
            return $tmp647;
        }
        }
        else {
        panda$core$Bit $tmp648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp648.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp650 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 16));
            value649 = *$tmp650;
            panda$core$Bit $tmp652 = (($fn651) value649->$class->vtable[4])(value649);
            return $tmp652;
        }
        }
        else {
        panda$core$Bit $tmp653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp653.value) {
        {
            panda$core$String** $tmp655 = ((panda$core$String**) ((char*) $match$233_9446->$data + 16));
            label654 = *$tmp655;
            panda$collections$ImmutableArray** $tmp657 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 24));
            statements656 = *$tmp657;
            {
                ITable* $tmp659 = ((panda$collections$Iterable*) statements656)->$class->itable;
                while ($tmp659->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp659 = $tmp659->next;
                }
                $fn661 $tmp660 = $tmp659->methods[0];
                panda$collections$Iterator* $tmp662 = $tmp660(((panda$collections$Iterable*) statements656));
                Iter$304$17658 = $tmp662;
                $l663:;
                ITable* $tmp665 = Iter$304$17658->$class->itable;
                while ($tmp665->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp665 = $tmp665->next;
                }
                $fn667 $tmp666 = $tmp665->methods[0];
                panda$core$Bit $tmp668 = $tmp666(Iter$304$17658);
                panda$core$Bit $tmp669 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp668);
                if (!$tmp669.value) goto $l664;
                {
                    ITable* $tmp671 = Iter$304$17658->$class->itable;
                    while ($tmp671->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp671 = $tmp671->next;
                    }
                    $fn673 $tmp672 = $tmp671->methods[1];
                    panda$core$Object* $tmp674 = $tmp672(Iter$304$17658);
                    s670 = ((org$pandalanguage$pandac$IRNode*) $tmp674);
                    panda$core$Bit $tmp676 = (($fn675) s670->$class->vtable[4])(s670);
                    if ($tmp676.value) {
                    {
                        {
                            tmp9677 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s670));
                            {
                                tmp10678 = tmp9677;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$304$17658));
                                return tmp10678;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s670));
                }
                goto $l663;
                $l664:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$304$17658));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp679.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp681 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 16));
            value680 = *$tmp681;
            panda$collections$ImmutableArray** $tmp683 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 24));
            whens682 = *$tmp683;
            panda$collections$ImmutableArray** $tmp685 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 32));
            other684 = *$tmp685;
            panda$core$Bit $tmp687 = (($fn686) value680->$class->vtable[4])(value680);
            if ($tmp687.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp689 = ((panda$collections$Iterable*) whens682)->$class->itable;
                while ($tmp689->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp689 = $tmp689->next;
                }
                $fn691 $tmp690 = $tmp689->methods[0];
                panda$collections$Iterator* $tmp692 = $tmp690(((panda$collections$Iterable*) whens682));
                Iter$314$17688 = $tmp692;
                $l693:;
                ITable* $tmp695 = Iter$314$17688->$class->itable;
                while ($tmp695->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp695 = $tmp695->next;
                }
                $fn697 $tmp696 = $tmp695->methods[0];
                panda$core$Bit $tmp698 = $tmp696(Iter$314$17688);
                panda$core$Bit $tmp699 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp698);
                if (!$tmp699.value) goto $l694;
                {
                    ITable* $tmp701 = Iter$314$17688->$class->itable;
                    while ($tmp701->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp701 = $tmp701->next;
                    }
                    $fn703 $tmp702 = $tmp701->methods[1];
                    panda$core$Object* $tmp704 = $tmp702(Iter$314$17688);
                    w700 = ((org$pandalanguage$pandac$IRNode*) $tmp704);
                    panda$core$Bit $tmp706 = (($fn705) w700->$class->vtable[4])(w700);
                    if ($tmp706.value) {
                    {
                        {
                            tmp11707 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w700));
                            {
                                tmp12708 = tmp11707;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$314$17688));
                                return tmp12708;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w700));
                }
                goto $l693;
                $l694:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$314$17688));
            }
            {
                ITable* $tmp710 = ((panda$collections$Iterable*) other684)->$class->itable;
                while ($tmp710->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp710 = $tmp710->next;
                }
                $fn712 $tmp711 = $tmp710->methods[0];
                panda$collections$Iterator* $tmp713 = $tmp711(((panda$collections$Iterable*) other684));
                Iter$319$17709 = $tmp713;
                $l714:;
                ITable* $tmp716 = Iter$319$17709->$class->itable;
                while ($tmp716->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp716 = $tmp716->next;
                }
                $fn718 $tmp717 = $tmp716->methods[0];
                panda$core$Bit $tmp719 = $tmp717(Iter$319$17709);
                panda$core$Bit $tmp720 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp719);
                if (!$tmp720.value) goto $l715;
                {
                    ITable* $tmp722 = Iter$319$17709->$class->itable;
                    while ($tmp722->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp722 = $tmp722->next;
                    }
                    $fn724 $tmp723 = $tmp722->methods[1];
                    panda$core$Object* $tmp725 = $tmp723(Iter$319$17709);
                    s721 = ((org$pandalanguage$pandac$IRNode*) $tmp725);
                    panda$core$Bit $tmp727 = (($fn726) s721->$class->vtable[4])(s721);
                    if ($tmp727.value) {
                    {
                        {
                            tmp13728 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s721));
                            {
                                tmp14729 = tmp13728;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$319$17709));
                                return tmp14729;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s721));
                }
                goto $l714;
                $l715:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$319$17709));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp730.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp732 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 16));
            target731 = *$tmp732;
            org$pandalanguage$pandac$MethodRef** $tmp734 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$233_9446->$data + 24));
            m733 = *$tmp734;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp735.value) {
        {
            panda$core$UInt64* $tmp737 = ((panda$core$UInt64*) ((char*) $match$233_9446->$data + 24));
            value736 = *$tmp737;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp738.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp739.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp741 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$233_9446->$data + 16));
            op740 = *$tmp741;
            org$pandalanguage$pandac$IRNode** $tmp743 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 24));
            base742 = *$tmp743;
            panda$core$Bit $tmp745 = (($fn744) base742->$class->vtable[4])(base742);
            return $tmp745;
        }
        }
        else {
        panda$core$Bit $tmp746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp746.value) {
        {
            panda$core$String** $tmp748 = ((panda$core$String**) ((char*) $match$233_9446->$data + 16));
            label747 = *$tmp748;
            org$pandalanguage$pandac$IRNode** $tmp750 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 24));
            target749 = *$tmp750;
            org$pandalanguage$pandac$IRNode** $tmp752 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 32));
            list751 = *$tmp752;
            panda$collections$ImmutableArray** $tmp754 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 40));
            statements753 = *$tmp754;
            panda$core$Bit $tmp756 = (($fn755) list751->$class->vtable[4])(list751);
            if ($tmp756.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp758 = ((panda$collections$Iterable*) statements753)->$class->itable;
                while ($tmp758->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp758 = $tmp758->next;
                }
                $fn760 $tmp759 = $tmp758->methods[0];
                panda$collections$Iterator* $tmp761 = $tmp759(((panda$collections$Iterable*) statements753));
                Iter$338$17757 = $tmp761;
                $l762:;
                ITable* $tmp764 = Iter$338$17757->$class->itable;
                while ($tmp764->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp764 = $tmp764->next;
                }
                $fn766 $tmp765 = $tmp764->methods[0];
                panda$core$Bit $tmp767 = $tmp765(Iter$338$17757);
                panda$core$Bit $tmp768 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp767);
                if (!$tmp768.value) goto $l763;
                {
                    ITable* $tmp770 = Iter$338$17757->$class->itable;
                    while ($tmp770->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp770 = $tmp770->next;
                    }
                    $fn772 $tmp771 = $tmp770->methods[1];
                    panda$core$Object* $tmp773 = $tmp771(Iter$338$17757);
                    s769 = ((org$pandalanguage$pandac$IRNode*) $tmp773);
                    panda$core$Bit $tmp775 = (($fn774) s769->$class->vtable[4])(s769);
                    if ($tmp775.value) {
                    {
                        {
                            tmp15776 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s769));
                            {
                                tmp16777 = tmp15776;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$338$17757));
                                return tmp16777;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s769));
                }
                goto $l762;
                $l763:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$338$17757));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp778.value) {
        {
            panda$core$Real64* $tmp780 = ((panda$core$Real64*) ((char*) $match$233_9446->$data + 24));
            value779 = *$tmp780;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp781.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp783 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 16));
            value782 = *$tmp783;
            panda$core$Bit $tmp785 = (($fn784) value782->$class->vtable[4])(value782);
            return $tmp785;
        }
        }
        else {
        panda$core$Bit $tmp786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp786.value) {
        {
            panda$core$Int64* $tmp788 = ((panda$core$Int64*) ((char*) $match$233_9446->$data + 24));
            id787 = *$tmp788;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp789.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp791 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 0));
            base790 = *$tmp791;
            panda$core$Int64* $tmp793 = ((panda$core$Int64*) ((char*) $match$233_9446->$data + 8));
            id792 = *$tmp793;
            panda$core$Bit $tmp795 = (($fn794) base790->$class->vtable[4])(base790);
            return $tmp795;
        }
        }
        else {
        panda$core$Bit $tmp796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp796.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp797.value) {
        {
            panda$core$String** $tmp799 = ((panda$core$String**) ((char*) $match$233_9446->$data + 16));
            str798 = *$tmp799;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp800.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp801.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp803 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 16));
            test802 = *$tmp803;
            org$pandalanguage$pandac$IRNode** $tmp805 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 24));
            ifTrue804 = *$tmp805;
            org$pandalanguage$pandac$IRNode** $tmp807 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 32));
            ifFalse806 = *$tmp807;
            panda$core$Bit $tmp811 = (($fn810) test802->$class->vtable[4])(test802);
            bool $tmp809 = $tmp811.value;
            if ($tmp809) goto $l812;
            panda$core$Bit $tmp814 = (($fn813) ifTrue804->$class->vtable[4])(ifTrue804);
            $tmp809 = $tmp814.value;
            $l812:;
            panda$core$Bit $tmp815 = { $tmp809 };
            bool $tmp808 = $tmp815.value;
            if ($tmp808) goto $l816;
            panda$core$Bit $tmp818 = (($fn817) ifFalse806->$class->vtable[4])(ifFalse806);
            $tmp808 = $tmp818.value;
            $l816:;
            panda$core$Bit $tmp819 = { $tmp808 };
            return $tmp819;
        }
        }
        else {
        panda$core$Bit $tmp820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp820.value) {
        {
            org$pandalanguage$pandac$Type** $tmp822 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9446->$data + 16));
            type821 = *$tmp822;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp823.value) {
        {
            panda$core$String** $tmp825 = ((panda$core$String**) ((char*) $match$233_9446->$data + 16));
            name824 = *$tmp825;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp826.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp828 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 24));
            base827 = *$tmp828;
            panda$collections$ImmutableArray** $tmp830 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 32));
            args829 = *$tmp830;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp831.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp833 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 24));
            target832 = *$tmp833;
            panda$collections$ImmutableArray** $tmp835 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 32));
            methods834 = *$tmp835;
            panda$collections$ImmutableArray** $tmp837 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 40));
            args836 = *$tmp837;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp838.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp840 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 16));
            target839 = *$tmp840;
            panda$collections$ImmutableArray** $tmp842 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 24));
            methods841 = *$tmp842;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp843.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp845 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 16));
            start844 = *$tmp845;
            org$pandalanguage$pandac$IRNode** $tmp847 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 24));
            end846 = *$tmp847;
            panda$core$Bit* $tmp849 = ((panda$core$Bit*) ((char*) $match$233_9446->$data + 32));
            inclusive848 = *$tmp849;
            org$pandalanguage$pandac$IRNode** $tmp851 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 33));
            step850 = *$tmp851;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp852.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp854 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$233_9446->$data + 16));
            kind853 = *$tmp854;
            panda$collections$ImmutableArray** $tmp856 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 24));
            decls855 = *$tmp856;
            {
                ITable* $tmp858 = ((panda$collections$Iterable*) decls855)->$class->itable;
                while ($tmp858->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp858 = $tmp858->next;
                }
                $fn860 $tmp859 = $tmp858->methods[0];
                panda$collections$Iterator* $tmp861 = $tmp859(((panda$collections$Iterable*) decls855));
                Iter$373$17857 = $tmp861;
                $l862:;
                ITable* $tmp864 = Iter$373$17857->$class->itable;
                while ($tmp864->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp864 = $tmp864->next;
                }
                $fn866 $tmp865 = $tmp864->methods[0];
                panda$core$Bit $tmp867 = $tmp865(Iter$373$17857);
                panda$core$Bit $tmp868 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp867);
                if (!$tmp868.value) goto $l863;
                {
                    ITable* $tmp870 = Iter$373$17857->$class->itable;
                    while ($tmp870->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp870 = $tmp870->next;
                    }
                    $fn872 $tmp871 = $tmp870->methods[1];
                    panda$core$Object* $tmp873 = $tmp871(Iter$373$17857);
                    d869 = ((org$pandalanguage$pandac$IRNode*) $tmp873);
                    panda$core$Bit $tmp875 = (($fn874) d869->$class->vtable[4])(d869);
                    if ($tmp875.value) {
                    {
                        {
                            tmp17876 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d869));
                            {
                                tmp18877 = tmp17876;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$373$17857));
                                return tmp18877;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d869));
                }
                goto $l862;
                $l863:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$373$17857));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp878.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp880 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$233_9446->$data + 16));
            variable879 = *$tmp880;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp881.value) {
        {
            panda$collections$ImmutableArray** $tmp883 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 16));
            tests882 = *$tmp883;
            panda$collections$ImmutableArray** $tmp885 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 24));
            statements884 = *$tmp885;
            {
                ITable* $tmp887 = ((panda$collections$Iterable*) tests882)->$class->itable;
                while ($tmp887->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp887 = $tmp887->next;
                }
                $fn889 $tmp888 = $tmp887->methods[0];
                panda$collections$Iterator* $tmp890 = $tmp888(((panda$collections$Iterable*) tests882));
                Iter$382$17886 = $tmp890;
                $l891:;
                ITable* $tmp893 = Iter$382$17886->$class->itable;
                while ($tmp893->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp893 = $tmp893->next;
                }
                $fn895 $tmp894 = $tmp893->methods[0];
                panda$core$Bit $tmp896 = $tmp894(Iter$382$17886);
                panda$core$Bit $tmp897 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp896);
                if (!$tmp897.value) goto $l892;
                {
                    ITable* $tmp899 = Iter$382$17886->$class->itable;
                    while ($tmp899->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp899 = $tmp899->next;
                    }
                    $fn901 $tmp900 = $tmp899->methods[1];
                    panda$core$Object* $tmp902 = $tmp900(Iter$382$17886);
                    t898 = ((org$pandalanguage$pandac$IRNode*) $tmp902);
                    panda$core$Bit $tmp904 = (($fn903) t898->$class->vtable[4])(t898);
                    if ($tmp904.value) {
                    {
                        {
                            tmp19905 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t898));
                            {
                                tmp20906 = tmp19905;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$382$17886));
                                return tmp20906;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t898));
                }
                goto $l891;
                $l892:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$382$17886));
            }
            {
                ITable* $tmp908 = ((panda$collections$Iterable*) statements884)->$class->itable;
                while ($tmp908->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp908 = $tmp908->next;
                }
                $fn910 $tmp909 = $tmp908->methods[0];
                panda$collections$Iterator* $tmp911 = $tmp909(((panda$collections$Iterable*) statements884));
                Iter$387$17907 = $tmp911;
                $l912:;
                ITable* $tmp914 = Iter$387$17907->$class->itable;
                while ($tmp914->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp914 = $tmp914->next;
                }
                $fn916 $tmp915 = $tmp914->methods[0];
                panda$core$Bit $tmp917 = $tmp915(Iter$387$17907);
                panda$core$Bit $tmp918 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp917);
                if (!$tmp918.value) goto $l913;
                {
                    ITable* $tmp920 = Iter$387$17907->$class->itable;
                    while ($tmp920->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp920 = $tmp920->next;
                    }
                    $fn922 $tmp921 = $tmp920->methods[1];
                    panda$core$Object* $tmp923 = $tmp921(Iter$387$17907);
                    s919 = ((org$pandalanguage$pandac$IRNode*) $tmp923);
                    panda$core$Bit $tmp925 = (($fn924) s919->$class->vtable[4])(s919);
                    if ($tmp925.value) {
                    {
                        {
                            tmp21926 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s919));
                            {
                                tmp22927 = tmp21926;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$387$17907));
                                return tmp22927;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s919));
                }
                goto $l912;
                $l913:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$387$17907));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9446->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp928.value) {
        {
            panda$core$String** $tmp930 = ((panda$core$String**) ((char*) $match$233_9446->$data + 16));
            label929 = *$tmp930;
            org$pandalanguage$pandac$IRNode** $tmp932 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9446->$data + 24));
            test931 = *$tmp932;
            panda$collections$ImmutableArray** $tmp934 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9446->$data + 32));
            statements933 = *$tmp934;
            panda$core$Bit $tmp936 = (($fn935) test931->$class->vtable[4])(test931);
            if ($tmp936.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp938 = ((panda$collections$Iterable*) statements933)->$class->itable;
                while ($tmp938->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp938 = $tmp938->next;
                }
                $fn940 $tmp939 = $tmp938->methods[0];
                panda$collections$Iterator* $tmp941 = $tmp939(((panda$collections$Iterable*) statements933));
                Iter$397$17937 = $tmp941;
                $l942:;
                ITable* $tmp944 = Iter$397$17937->$class->itable;
                while ($tmp944->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp944 = $tmp944->next;
                }
                $fn946 $tmp945 = $tmp944->methods[0];
                panda$core$Bit $tmp947 = $tmp945(Iter$397$17937);
                panda$core$Bit $tmp948 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp947);
                if (!$tmp948.value) goto $l943;
                {
                    ITable* $tmp950 = Iter$397$17937->$class->itable;
                    while ($tmp950->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp950 = $tmp950->next;
                    }
                    $fn952 $tmp951 = $tmp950->methods[1];
                    panda$core$Object* $tmp953 = $tmp951(Iter$397$17937);
                    s949 = ((org$pandalanguage$pandac$IRNode*) $tmp953);
                    panda$core$Bit $tmp955 = (($fn954) s949->$class->vtable[4])(s949);
                    if ($tmp955.value) {
                    {
                        {
                            tmp23956 = ((panda$core$Bit) { true });
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s949));
                            {
                                tmp24957 = tmp23956;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$397$17937));
                                return tmp24957;
                            }
                        }
                    }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s949));
                }
                goto $l942;
                $l943:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$397$17937));
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
    org$pandalanguage$pandac$IRNode* $match$410_9958;
    org$pandalanguage$pandac$IRNode* test960;
    org$pandalanguage$pandac$IRNode* msg962;
    org$pandalanguage$pandac$IRNode* left976;
    org$pandalanguage$pandac$parser$Token$Kind op978;
    org$pandalanguage$pandac$IRNode* right980;
    panda$core$Bit bit994;
    panda$collections$ImmutableArray* statements998;
    panda$core$MutableString* result1000;
    panda$collections$Iterator* Iter$422$171003;
    org$pandalanguage$pandac$IRNode* s1015;
    panda$core$Char8 $tmp1022;
    panda$core$String* tmp251023;
    panda$core$String* label1026;
    org$pandalanguage$pandac$MethodRef* m1034;
    panda$collections$ImmutableArray* args1036;
    org$pandalanguage$pandac$IRNode* value1046;
    org$pandalanguage$pandac$Type* type1048;
    org$pandalanguage$pandac$ChoiceEntry* ce1069;
    org$pandalanguage$pandac$IRNode* base1073;
    org$pandalanguage$pandac$ChoiceEntry* ce1075;
    panda$core$Int64 field1077;
    org$pandalanguage$pandac$Type* type1091;
    org$pandalanguage$pandac$IRNode* call1093;
    org$pandalanguage$pandac$IRNode* $match$444_171095;
    panda$collections$ImmutableArray* args1097;
    org$pandalanguage$pandac$Type* Type1107;
    panda$core$String* label1111;
    org$pandalanguage$pandac$IRNode* target1119;
    org$pandalanguage$pandac$IRNode* value1121;
    panda$core$String* label1133;
    panda$collections$ImmutableArray* statements1135;
    org$pandalanguage$pandac$IRNode* test1137;
    panda$core$MutableString* result1139;
    panda$collections$Iterator* Iter$468$171145;
    org$pandalanguage$pandac$IRNode* s1157;
    panda$core$String* tmp261168;
    org$pandalanguage$pandac$IRNode* expr1171;
    org$pandalanguage$pandac$IRNode* stmt1173;
    org$pandalanguage$pandac$IRNode* base1183;
    org$pandalanguage$pandac$FieldDecl* field1185;
    org$pandalanguage$pandac$IRNode* test1195;
    panda$collections$ImmutableArray* ifTrue1197;
    org$pandalanguage$pandac$IRNode* ifFalse1199;
    panda$core$MutableString* result1201;
    panda$collections$Iterator* Iter$479$171207;
    org$pandalanguage$pandac$IRNode* s1219;
    panda$core$Char8 $tmp1226;
    panda$core$String* tmp271231;
    panda$core$UInt64 value1234;
    org$pandalanguage$pandac$IRNode* value1238;
    org$pandalanguage$pandac$IRNode* value1245;
    panda$core$String* label1252;
    panda$collections$ImmutableArray* statements1254;
    panda$core$MutableString* result1256;
    panda$collections$Iterator* Iter$499$171262;
    org$pandalanguage$pandac$IRNode* s1274;
    panda$core$Char8 $tmp1281;
    panda$core$String* tmp281282;
    org$pandalanguage$pandac$IRNode* value1285;
    panda$collections$ImmutableArray* whens1287;
    panda$collections$ImmutableArray* other1289;
    panda$core$MutableString* result1291;
    panda$collections$Iterator* Iter$506$171297;
    org$pandalanguage$pandac$IRNode* w1309;
    panda$collections$Iterator* Iter$511$211317;
    org$pandalanguage$pandac$IRNode* s1329;
    panda$core$Char8 $tmp1336;
    panda$core$String* tmp291337;
    org$pandalanguage$pandac$IRNode* target1340;
    org$pandalanguage$pandac$MethodRef* m1342;
    panda$core$UInt64 value1352;
    org$pandalanguage$pandac$parser$Token$Kind op1360;
    org$pandalanguage$pandac$IRNode* base1362;
    panda$core$String* label1373;
    org$pandalanguage$pandac$IRNode* target1375;
    org$pandalanguage$pandac$IRNode* list1377;
    panda$collections$ImmutableArray* statements1379;
    panda$core$MutableString* result1381;
    panda$collections$Iterator* Iter$534$171393;
    org$pandalanguage$pandac$IRNode* s1405;
    panda$core$Char8 $tmp1412;
    panda$core$String* tmp301413;
    panda$core$Real64 value1416;
    org$pandalanguage$pandac$IRNode* value1420;
    org$pandalanguage$pandac$Type* type1428;
    panda$core$Int64 id1430;
    org$pandalanguage$pandac$IRNode* base1441;
    panda$core$Int64 id1443;
    panda$core$String* str1456;
    org$pandalanguage$pandac$IRNode* test1461;
    org$pandalanguage$pandac$IRNode* ifTrue1463;
    org$pandalanguage$pandac$IRNode* ifFalse1465;
    org$pandalanguage$pandac$Type* type1478;
    panda$core$String* name1482;
    org$pandalanguage$pandac$IRNode* base1485;
    panda$collections$ImmutableArray* args1487;
    org$pandalanguage$pandac$IRNode* target1498;
    panda$collections$ImmutableArray* methods1500;
    panda$collections$ImmutableArray* args1502;
    org$pandalanguage$pandac$IRNode* target1517;
    panda$collections$ImmutableArray* methods1519;
    org$pandalanguage$pandac$IRNode* start1530;
    org$pandalanguage$pandac$IRNode* end1532;
    panda$core$Bit inclusive1534;
    org$pandalanguage$pandac$IRNode* step1536;
    panda$core$MutableString* result1538;
    panda$core$String* tmp311546;
    org$pandalanguage$pandac$Variable$Kind kind1549;
    panda$collections$ImmutableArray* decls1551;
    panda$core$MutableString* result1553;
    org$pandalanguage$pandac$Variable$Kind $match$588_171555;
    panda$core$String* tmp321565;
    org$pandalanguage$pandac$Variable* variable1568;
    panda$collections$ImmutableArray* tests1571;
    panda$collections$ImmutableArray* statements1573;
    panda$core$String* label1586;
    org$pandalanguage$pandac$IRNode* test1588;
    panda$collections$ImmutableArray* statements1590;
    panda$core$MutableString* result1592;
    panda$collections$Iterator* Iter$606$171601;
    org$pandalanguage$pandac$IRNode* s1613;
    panda$core$Char8 $tmp1620;
    panda$core$String* tmp331621;
    {
        $match$410_9958 = self;
        panda$core$Bit $tmp959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp959.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp961 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 16));
            test960 = *$tmp961;
            org$pandalanguage$pandac$IRNode** $tmp963 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 24));
            msg962 = *$tmp963;
            if (((panda$core$Bit) { msg962 != NULL }).value) {
            {
                panda$core$String* $tmp965 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s964, ((panda$core$Object*) test960));
                panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp965, &$s966);
                panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp967, ((panda$core$Object*) msg962));
                panda$core$String* $tmp970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp968, &$s969);
                return $tmp970;
            }
            }
            panda$core$String* $tmp972 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s971, ((panda$core$Object*) test960));
            panda$core$String* $tmp974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp972, &$s973);
            return $tmp974;
        }
        }
        else {
        panda$core$Bit $tmp975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp975.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp977 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 24));
            left976 = *$tmp977;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp979 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$410_9958->$data + 32));
            op978 = *$tmp979;
            org$pandalanguage$pandac$IRNode** $tmp981 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 40));
            right980 = *$tmp981;
            panda$core$String* $tmp983 = (($fn982) left976->$class->vtable[0])(left976);
            panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp983, &$s984);
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp986;
            $tmp986 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp986->value = op978;
            panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp985, ((panda$core$Object*) $tmp986));
            panda$core$String* $tmp989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp987, &$s988);
            panda$core$String* $tmp990 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp989, ((panda$core$Object*) right980));
            panda$core$String* $tmp992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp990, &$s991);
            return $tmp992;
        }
        }
        else {
        panda$core$Bit $tmp993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp993.value) {
        {
            panda$core$Bit* $tmp995 = ((panda$core$Bit*) ((char*) $match$410_9958->$data + 24));
            bit994 = *$tmp995;
            panda$core$String* $tmp996 = panda$core$Bit$convert$R$panda$core$String(bit994);
            return $tmp996;
        }
        }
        else {
        panda$core$Bit $tmp997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp997.value) {
        {
            panda$collections$ImmutableArray** $tmp999 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 16));
            statements998 = *$tmp999;
            panda$core$MutableString* $tmp1001 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp1001, &$s1002);
            result1000 = $tmp1001;
            {
                ITable* $tmp1004 = ((panda$collections$Iterable*) statements998)->$class->itable;
                while ($tmp1004->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1004 = $tmp1004->next;
                }
                $fn1006 $tmp1005 = $tmp1004->methods[0];
                panda$collections$Iterator* $tmp1007 = $tmp1005(((panda$collections$Iterable*) statements998));
                Iter$422$171003 = $tmp1007;
                $l1008:;
                ITable* $tmp1010 = Iter$422$171003->$class->itable;
                while ($tmp1010->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1010 = $tmp1010->next;
                }
                $fn1012 $tmp1011 = $tmp1010->methods[0];
                panda$core$Bit $tmp1013 = $tmp1011(Iter$422$171003);
                panda$core$Bit $tmp1014 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1013);
                if (!$tmp1014.value) goto $l1009;
                {
                    ITable* $tmp1016 = Iter$422$171003->$class->itable;
                    while ($tmp1016->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1016 = $tmp1016->next;
                    }
                    $fn1018 $tmp1017 = $tmp1016->methods[1];
                    panda$core$Object* $tmp1019 = $tmp1017(Iter$422$171003);
                    s1015 = ((org$pandalanguage$pandac$IRNode*) $tmp1019);
                    panda$core$String* $tmp1021 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1015), &$s1020);
                    panda$core$MutableString$append$panda$core$String(result1000, $tmp1021);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1015));
                }
                goto $l1008;
                $l1009:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$422$171003));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1022, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1000, $tmp1022);
            {
                panda$core$String* $tmp1024 = panda$core$MutableString$finish$R$panda$core$String(result1000);
                tmp251023 = $tmp1024;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1000));
                return tmp251023;
            }
        }
        }
        else {
        panda$core$Bit $tmp1025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1025.value) {
        {
            panda$core$String** $tmp1027 = ((panda$core$String**) ((char*) $match$410_9958->$data + 16));
            label1026 = *$tmp1027;
            if (((panda$core$Bit) { label1026 != NULL }).value) {
            {
                panda$core$String* $tmp1029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1028, label1026);
                panda$core$String* $tmp1031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1029, &$s1030);
                return $tmp1031;
            }
            }
            return &$s1032;
        }
        }
        else {
        panda$core$Bit $tmp1033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1033.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp1035 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$410_9958->$data + 24));
            m1034 = *$tmp1035;
            panda$collections$ImmutableArray** $tmp1037 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 32));
            args1036 = *$tmp1037;
            panda$core$String* $tmp1038 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m1034->value)->name);
            panda$core$String* $tmp1040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1038, &$s1039);
            panda$core$String* $tmp1041 = panda$collections$ImmutableArray$join$R$panda$core$String(args1036);
            panda$core$String* $tmp1042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1040, $tmp1041);
            panda$core$String* $tmp1044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1042, &$s1043);
            return $tmp1044;
        }
        }
        else {
        panda$core$Bit $tmp1045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1045.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1047 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 16));
            value1046 = *$tmp1047;
            org$pandalanguage$pandac$Type** $tmp1049 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9958->$data + 24));
            type1048 = *$tmp1049;
            org$pandalanguage$pandac$Type* $tmp1051 = (($fn1050) value1046->$class->vtable[2])(value1046);
            org$pandalanguage$pandac$Type* $tmp1052 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp1053 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1051, $tmp1052);
            if ($tmp1053.value) {
            {
                panda$core$String* $tmp1055 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1054, ((panda$core$Object*) value1046));
                panda$core$String* $tmp1057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1055, &$s1056);
                panda$core$String* $tmp1058 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1057, ((panda$core$Object*) type1048));
                panda$core$String* $tmp1060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1058, &$s1059);
                return $tmp1060;
            }
            }
            panda$core$String* $tmp1062 = (($fn1061) value1046->$class->vtable[0])(value1046);
            panda$core$String* $tmp1064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1062, &$s1063);
            panda$core$String* $tmp1065 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1064, ((panda$core$Object*) type1048));
            panda$core$String* $tmp1067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1065, &$s1066);
            return $tmp1067;
        }
        }
        else {
        panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1068.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1070 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$410_9958->$data + 16));
            ce1069 = *$tmp1070;
            panda$core$String* $tmp1071 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce1069);
            return $tmp1071;
        }
        }
        else {
        panda$core$Bit $tmp1072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1072.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1074 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 16));
            base1073 = *$tmp1074;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1076 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$410_9958->$data + 24));
            ce1075 = *$tmp1076;
            panda$core$Int64* $tmp1078 = ((panda$core$Int64*) ((char*) $match$410_9958->$data + 32));
            field1077 = *$tmp1078;
            panda$core$String* $tmp1080 = (($fn1079) base1073->$class->vtable[0])(base1073);
            panda$core$String* $tmp1082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1080, &$s1081);
            panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1082, ((panda$core$Object*) ce1075));
            panda$core$String* $tmp1085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1083, &$s1084);
            panda$core$Int64$wrapper* $tmp1086;
            $tmp1086 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1086->value = field1077;
            panda$core$String* $tmp1087 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1085, ((panda$core$Object*) $tmp1086));
            panda$core$String* $tmp1089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1087, &$s1088);
            return $tmp1089;
        }
        }
        else {
        panda$core$Bit $tmp1090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1090.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1092 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9958->$data + 16));
            type1091 = *$tmp1092;
            org$pandalanguage$pandac$IRNode** $tmp1094 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 24));
            call1093 = *$tmp1094;
            {
                $match$444_171095 = call1093;
                panda$core$Bit $tmp1096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_171095->$rawValue, ((panda$core$Int64) { 5 }));
                if ($tmp1096.value) {
                {
                    panda$collections$ImmutableArray** $tmp1098 = ((panda$collections$ImmutableArray**) ((char*) $match$444_171095->$data + 32));
                    args1097 = *$tmp1098;
                    panda$core$String* $tmp1099 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1091);
                    panda$core$String* $tmp1101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1099, &$s1100);
                    panda$core$String* $tmp1102 = panda$collections$ImmutableArray$join$R$panda$core$String(args1097);
                    panda$core$String* $tmp1103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1101, $tmp1102);
                    panda$core$String* $tmp1105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1103, &$s1104);
                    return $tmp1105;
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
        panda$core$Bit $tmp1106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1106.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1108 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9958->$data + 16));
            Type1107 = *$tmp1108;
            return &$s1109;
        }
        }
        else {
        panda$core$Bit $tmp1110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1110.value) {
        {
            panda$core$String** $tmp1112 = ((panda$core$String**) ((char*) $match$410_9958->$data + 16));
            label1111 = *$tmp1112;
            if (((panda$core$Bit) { label1111 != NULL }).value) {
            {
                panda$core$String* $tmp1114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1113, label1111);
                panda$core$String* $tmp1116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1114, &$s1115);
                return $tmp1116;
            }
            }
            return &$s1117;
        }
        }
        else {
        panda$core$Bit $tmp1118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1118.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1120 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 0));
            target1119 = *$tmp1120;
            org$pandalanguage$pandac$IRNode** $tmp1122 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 8));
            value1121 = *$tmp1122;
            if (((panda$core$Bit) { value1121 != NULL }).value) {
            {
                panda$core$String* $tmp1124 = (($fn1123) target1119->$class->vtable[0])(target1119);
                panda$core$String* $tmp1126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1124, &$s1125);
                panda$core$String* $tmp1127 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1126, ((panda$core$Object*) value1121));
                panda$core$String* $tmp1129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1127, &$s1128);
                return $tmp1129;
            }
            }
            panda$core$String* $tmp1131 = (($fn1130) target1119->$class->vtable[0])(target1119);
            return $tmp1131;
        }
        }
        else {
        panda$core$Bit $tmp1132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1132.value) {
        {
            panda$core$String** $tmp1134 = ((panda$core$String**) ((char*) $match$410_9958->$data + 16));
            label1133 = *$tmp1134;
            panda$collections$ImmutableArray** $tmp1136 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 24));
            statements1135 = *$tmp1136;
            org$pandalanguage$pandac$IRNode** $tmp1138 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 32));
            test1137 = *$tmp1138;
            panda$core$MutableString* $tmp1140 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1140);
            result1139 = $tmp1140;
            if (((panda$core$Bit) { label1133 != NULL }).value) {
            {
                panda$core$String* $tmp1141 = panda$core$String$convert$R$panda$core$String(label1133);
                panda$core$String* $tmp1143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1141, &$s1142);
                panda$core$MutableString$append$panda$core$String(result1139, $tmp1143);
            }
            }
            panda$core$MutableString$append$panda$core$String(result1139, &$s1144);
            {
                ITable* $tmp1146 = ((panda$collections$Iterable*) statements1135)->$class->itable;
                while ($tmp1146->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1146 = $tmp1146->next;
                }
                $fn1148 $tmp1147 = $tmp1146->methods[0];
                panda$collections$Iterator* $tmp1149 = $tmp1147(((panda$collections$Iterable*) statements1135));
                Iter$468$171145 = $tmp1149;
                $l1150:;
                ITable* $tmp1152 = Iter$468$171145->$class->itable;
                while ($tmp1152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1152 = $tmp1152->next;
                }
                $fn1154 $tmp1153 = $tmp1152->methods[0];
                panda$core$Bit $tmp1155 = $tmp1153(Iter$468$171145);
                panda$core$Bit $tmp1156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1155);
                if (!$tmp1156.value) goto $l1151;
                {
                    ITable* $tmp1158 = Iter$468$171145->$class->itable;
                    while ($tmp1158->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1158 = $tmp1158->next;
                    }
                    $fn1160 $tmp1159 = $tmp1158->methods[1];
                    panda$core$Object* $tmp1161 = $tmp1159(Iter$468$171145);
                    s1157 = ((org$pandalanguage$pandac$IRNode*) $tmp1161);
                    panda$core$String* $tmp1163 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1157), &$s1162);
                    panda$core$MutableString$append$panda$core$String(result1139, $tmp1163);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1157));
                }
                goto $l1150;
                $l1151:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$468$171145));
            }
            panda$core$String* $tmp1165 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1164, ((panda$core$Object*) test1137));
            panda$core$String* $tmp1167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1165, &$s1166);
            panda$core$MutableString$append$panda$core$String(result1139, $tmp1167);
            {
                panda$core$String* $tmp1169 = panda$core$MutableString$finish$R$panda$core$String(result1139);
                tmp261168 = $tmp1169;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1139));
                return tmp261168;
            }
        }
        }
        else {
        panda$core$Bit $tmp1170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1170.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1172 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 0));
            expr1171 = *$tmp1172;
            org$pandalanguage$pandac$IRNode** $tmp1174 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 8));
            stmt1173 = *$tmp1174;
            panda$core$String* $tmp1176 = (($fn1175) expr1171->$class->vtable[0])(expr1171);
            panda$core$String* $tmp1178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1176, &$s1177);
            panda$core$String* $tmp1179 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1178, ((panda$core$Object*) stmt1173));
            panda$core$String* $tmp1181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1179, &$s1180);
            return $tmp1181;
        }
        }
        else {
        panda$core$Bit $tmp1182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1182.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1184 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 24));
            base1183 = *$tmp1184;
            org$pandalanguage$pandac$FieldDecl** $tmp1186 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$410_9958->$data + 32));
            field1185 = *$tmp1186;
            panda$core$String* $tmp1188 = (($fn1187) base1183->$class->vtable[0])(base1183);
            panda$core$String* $tmp1190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1188, &$s1189);
            panda$core$String* $tmp1191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1190, ((org$pandalanguage$pandac$Symbol*) field1185)->name);
            panda$core$String* $tmp1193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1191, &$s1192);
            return $tmp1193;
        }
        }
        else {
        panda$core$Bit $tmp1194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1194.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1196 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 16));
            test1195 = *$tmp1196;
            panda$collections$ImmutableArray** $tmp1198 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 24));
            ifTrue1197 = *$tmp1198;
            org$pandalanguage$pandac$IRNode** $tmp1200 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 32));
            ifFalse1199 = *$tmp1200;
            panda$core$MutableString* $tmp1202 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp1204 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1203, ((panda$core$Object*) test1195));
            panda$core$String* $tmp1206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1204, &$s1205);
            panda$core$MutableString$init$panda$core$String($tmp1202, $tmp1206);
            result1201 = $tmp1202;
            {
                ITable* $tmp1208 = ((panda$collections$Iterable*) ifTrue1197)->$class->itable;
                while ($tmp1208->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1208 = $tmp1208->next;
                }
                $fn1210 $tmp1209 = $tmp1208->methods[0];
                panda$collections$Iterator* $tmp1211 = $tmp1209(((panda$collections$Iterable*) ifTrue1197));
                Iter$479$171207 = $tmp1211;
                $l1212:;
                ITable* $tmp1214 = Iter$479$171207->$class->itable;
                while ($tmp1214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1214 = $tmp1214->next;
                }
                $fn1216 $tmp1215 = $tmp1214->methods[0];
                panda$core$Bit $tmp1217 = $tmp1215(Iter$479$171207);
                panda$core$Bit $tmp1218 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1217);
                if (!$tmp1218.value) goto $l1213;
                {
                    ITable* $tmp1220 = Iter$479$171207->$class->itable;
                    while ($tmp1220->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1220 = $tmp1220->next;
                    }
                    $fn1222 $tmp1221 = $tmp1220->methods[1];
                    panda$core$Object* $tmp1223 = $tmp1221(Iter$479$171207);
                    s1219 = ((org$pandalanguage$pandac$IRNode*) $tmp1223);
                    panda$core$String* $tmp1225 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1219), &$s1224);
                    panda$core$MutableString$append$panda$core$String(result1201, $tmp1225);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1219));
                }
                goto $l1212;
                $l1213:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$479$171207));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1226, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1201, $tmp1226);
            if (((panda$core$Bit) { ifFalse1199 != NULL }).value) {
            {
                panda$core$String* $tmp1228 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1227, ((panda$core$Object*) ifFalse1199));
                panda$core$String* $tmp1230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1228, &$s1229);
                panda$core$MutableString$append$panda$core$String(result1201, $tmp1230);
            }
            }
            {
                panda$core$String* $tmp1232 = panda$core$MutableString$finish$R$panda$core$String(result1201);
                tmp271231 = $tmp1232;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1201));
                return tmp271231;
            }
        }
        }
        else {
        panda$core$Bit $tmp1233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1233.value) {
        {
            panda$core$UInt64* $tmp1235 = ((panda$core$UInt64*) ((char*) $match$410_9958->$data + 24));
            value1234 = *$tmp1235;
            panda$core$String* $tmp1236 = panda$core$UInt64$convert$R$panda$core$String(value1234);
            return $tmp1236;
        }
        }
        else {
        panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1237.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1239 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 16));
            value1238 = *$tmp1239;
            panda$core$String* $tmp1241 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1240, ((panda$core$Object*) value1238));
            panda$core$String* $tmp1243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1241, &$s1242);
            return $tmp1243;
        }
        }
        else {
        panda$core$Bit $tmp1244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1244.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1246 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 16));
            value1245 = *$tmp1246;
            panda$core$String* $tmp1248 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1247, ((panda$core$Object*) value1245));
            panda$core$String* $tmp1250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1248, &$s1249);
            return $tmp1250;
        }
        }
        else {
        panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1251.value) {
        {
            panda$core$String** $tmp1253 = ((panda$core$String**) ((char*) $match$410_9958->$data + 16));
            label1252 = *$tmp1253;
            panda$collections$ImmutableArray** $tmp1255 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 24));
            statements1254 = *$tmp1255;
            panda$core$MutableString* $tmp1257 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1257);
            result1256 = $tmp1257;
            if (((panda$core$Bit) { label1252 != NULL }).value) {
            {
                panda$core$String* $tmp1258 = panda$core$String$convert$R$panda$core$String(label1252);
                panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1258, &$s1259);
                panda$core$MutableString$append$panda$core$String(result1256, $tmp1260);
            }
            }
            panda$core$MutableString$append$panda$core$String(result1256, &$s1261);
            {
                ITable* $tmp1263 = ((panda$collections$Iterable*) statements1254)->$class->itable;
                while ($tmp1263->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1263 = $tmp1263->next;
                }
                $fn1265 $tmp1264 = $tmp1263->methods[0];
                panda$collections$Iterator* $tmp1266 = $tmp1264(((panda$collections$Iterable*) statements1254));
                Iter$499$171262 = $tmp1266;
                $l1267:;
                ITable* $tmp1269 = Iter$499$171262->$class->itable;
                while ($tmp1269->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1269 = $tmp1269->next;
                }
                $fn1271 $tmp1270 = $tmp1269->methods[0];
                panda$core$Bit $tmp1272 = $tmp1270(Iter$499$171262);
                panda$core$Bit $tmp1273 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1272);
                if (!$tmp1273.value) goto $l1268;
                {
                    ITable* $tmp1275 = Iter$499$171262->$class->itable;
                    while ($tmp1275->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1275 = $tmp1275->next;
                    }
                    $fn1277 $tmp1276 = $tmp1275->methods[1];
                    panda$core$Object* $tmp1278 = $tmp1276(Iter$499$171262);
                    s1274 = ((org$pandalanguage$pandac$IRNode*) $tmp1278);
                    panda$core$String* $tmp1280 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1274), &$s1279);
                    panda$core$MutableString$append$panda$core$String(result1256, $tmp1280);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1274));
                }
                goto $l1267;
                $l1268:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$499$171262));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1281, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1256, $tmp1281);
            {
                panda$core$String* $tmp1283 = panda$core$MutableString$finish$R$panda$core$String(result1256);
                tmp281282 = $tmp1283;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1256));
                return tmp281282;
            }
        }
        }
        else {
        panda$core$Bit $tmp1284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1284.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1286 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 16));
            value1285 = *$tmp1286;
            panda$collections$ImmutableArray** $tmp1288 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 24));
            whens1287 = *$tmp1288;
            panda$collections$ImmutableArray** $tmp1290 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 32));
            other1289 = *$tmp1290;
            panda$core$MutableString* $tmp1292 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp1294 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1293, ((panda$core$Object*) value1285));
            panda$core$String* $tmp1296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1294, &$s1295);
            panda$core$MutableString$init$panda$core$String($tmp1292, $tmp1296);
            result1291 = $tmp1292;
            {
                ITable* $tmp1298 = ((panda$collections$Iterable*) whens1287)->$class->itable;
                while ($tmp1298->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1298 = $tmp1298->next;
                }
                $fn1300 $tmp1299 = $tmp1298->methods[0];
                panda$collections$Iterator* $tmp1301 = $tmp1299(((panda$collections$Iterable*) whens1287));
                Iter$506$171297 = $tmp1301;
                $l1302:;
                ITable* $tmp1304 = Iter$506$171297->$class->itable;
                while ($tmp1304->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1304 = $tmp1304->next;
                }
                $fn1306 $tmp1305 = $tmp1304->methods[0];
                panda$core$Bit $tmp1307 = $tmp1305(Iter$506$171297);
                panda$core$Bit $tmp1308 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1307);
                if (!$tmp1308.value) goto $l1303;
                {
                    ITable* $tmp1310 = Iter$506$171297->$class->itable;
                    while ($tmp1310->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1310 = $tmp1310->next;
                    }
                    $fn1312 $tmp1311 = $tmp1310->methods[1];
                    panda$core$Object* $tmp1313 = $tmp1311(Iter$506$171297);
                    w1309 = ((org$pandalanguage$pandac$IRNode*) $tmp1313);
                    panda$core$String* $tmp1315 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1309), &$s1314);
                    panda$core$MutableString$append$panda$core$String(result1291, $tmp1315);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1309));
                }
                goto $l1302;
                $l1303:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$506$171297));
            }
            if (((panda$core$Bit) { other1289 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result1291, &$s1316);
                {
                    ITable* $tmp1318 = ((panda$collections$Iterable*) other1289)->$class->itable;
                    while ($tmp1318->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1318 = $tmp1318->next;
                    }
                    $fn1320 $tmp1319 = $tmp1318->methods[0];
                    panda$collections$Iterator* $tmp1321 = $tmp1319(((panda$collections$Iterable*) other1289));
                    Iter$511$211317 = $tmp1321;
                    $l1322:;
                    ITable* $tmp1324 = Iter$511$211317->$class->itable;
                    while ($tmp1324->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1324 = $tmp1324->next;
                    }
                    $fn1326 $tmp1325 = $tmp1324->methods[0];
                    panda$core$Bit $tmp1327 = $tmp1325(Iter$511$211317);
                    panda$core$Bit $tmp1328 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1327);
                    if (!$tmp1328.value) goto $l1323;
                    {
                        ITable* $tmp1330 = Iter$511$211317->$class->itable;
                        while ($tmp1330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1330 = $tmp1330->next;
                        }
                        $fn1332 $tmp1331 = $tmp1330->methods[1];
                        panda$core$Object* $tmp1333 = $tmp1331(Iter$511$211317);
                        s1329 = ((org$pandalanguage$pandac$IRNode*) $tmp1333);
                        panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1329), &$s1334);
                        panda$core$MutableString$append$panda$core$String(result1291, $tmp1335);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1329));
                    }
                    goto $l1322;
                    $l1323:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$511$211317));
                }
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1336, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1291, $tmp1336);
            {
                panda$core$String* $tmp1338 = panda$core$MutableString$finish$R$panda$core$String(result1291);
                tmp291337 = $tmp1338;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1291));
                return tmp291337;
            }
        }
        }
        else {
        panda$core$Bit $tmp1339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1339.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1341 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 16));
            target1340 = *$tmp1341;
            org$pandalanguage$pandac$MethodRef** $tmp1343 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$410_9958->$data + 24));
            m1342 = *$tmp1343;
            if (((panda$core$Bit) { target1340 != NULL }).value) {
            {
                panda$core$String* $tmp1345 = (($fn1344) target1340->$class->vtable[0])(target1340);
                panda$core$String* $tmp1347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1345, &$s1346);
                panda$core$String* $tmp1348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1347, ((org$pandalanguage$pandac$Symbol*) m1342->value)->name);
                panda$core$String* $tmp1350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1348, &$s1349);
                return $tmp1350;
            }
            }
            return ((org$pandalanguage$pandac$Symbol*) m1342->value)->name;
        }
        }
        else {
        panda$core$Bit $tmp1351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1351.value) {
        {
            panda$core$UInt64* $tmp1353 = ((panda$core$UInt64*) ((char*) $match$410_9958->$data + 24));
            value1352 = *$tmp1353;
            panda$core$UInt64$wrapper* $tmp1355;
            $tmp1355 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp1355->value = value1352;
            panda$core$String* $tmp1356 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1354, ((panda$core$Object*) $tmp1355));
            return $tmp1356;
        }
        }
        else {
        panda$core$Bit $tmp1357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1357.value) {
        {
            return &$s1358;
        }
        }
        else {
        panda$core$Bit $tmp1359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1359.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1361 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$410_9958->$data + 16));
            op1360 = *$tmp1361;
            org$pandalanguage$pandac$IRNode** $tmp1363 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 24));
            base1362 = *$tmp1363;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1364;
            $tmp1364 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1364->value = op1360;
            panda$core$String* $tmp1366 = (($fn1365) ((panda$core$Object*) $tmp1364)->$class->vtable[0])(((panda$core$Object*) $tmp1364));
            panda$core$String* $tmp1368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1366, &$s1367);
            panda$core$String* $tmp1369 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1368, ((panda$core$Object*) base1362));
            panda$core$String* $tmp1371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1369, &$s1370);
            return $tmp1371;
        }
        }
        else {
        panda$core$Bit $tmp1372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1372.value) {
        {
            panda$core$String** $tmp1374 = ((panda$core$String**) ((char*) $match$410_9958->$data + 16));
            label1373 = *$tmp1374;
            org$pandalanguage$pandac$IRNode** $tmp1376 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 24));
            target1375 = *$tmp1376;
            org$pandalanguage$pandac$IRNode** $tmp1378 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 32));
            list1377 = *$tmp1378;
            panda$collections$ImmutableArray** $tmp1380 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 40));
            statements1379 = *$tmp1380;
            panda$core$MutableString* $tmp1382 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1382);
            result1381 = $tmp1382;
            if (((panda$core$Bit) { label1373 != NULL }).value) {
            {
                panda$core$String* $tmp1383 = panda$core$String$convert$R$panda$core$String(label1373);
                panda$core$String* $tmp1385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1383, &$s1384);
                panda$core$MutableString$append$panda$core$String(result1381, $tmp1385);
            }
            }
            panda$core$String* $tmp1387 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1386, ((panda$core$Object*) target1375));
            panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1387, &$s1388);
            panda$core$String* $tmp1390 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1389, ((panda$core$Object*) list1377));
            panda$core$String* $tmp1392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1390, &$s1391);
            panda$core$MutableString$append$panda$core$String(result1381, $tmp1392);
            {
                ITable* $tmp1394 = ((panda$collections$Iterable*) statements1379)->$class->itable;
                while ($tmp1394->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1394 = $tmp1394->next;
                }
                $fn1396 $tmp1395 = $tmp1394->methods[0];
                panda$collections$Iterator* $tmp1397 = $tmp1395(((panda$collections$Iterable*) statements1379));
                Iter$534$171393 = $tmp1397;
                $l1398:;
                ITable* $tmp1400 = Iter$534$171393->$class->itable;
                while ($tmp1400->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1400 = $tmp1400->next;
                }
                $fn1402 $tmp1401 = $tmp1400->methods[0];
                panda$core$Bit $tmp1403 = $tmp1401(Iter$534$171393);
                panda$core$Bit $tmp1404 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1403);
                if (!$tmp1404.value) goto $l1399;
                {
                    ITable* $tmp1406 = Iter$534$171393->$class->itable;
                    while ($tmp1406->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1406 = $tmp1406->next;
                    }
                    $fn1408 $tmp1407 = $tmp1406->methods[1];
                    panda$core$Object* $tmp1409 = $tmp1407(Iter$534$171393);
                    s1405 = ((org$pandalanguage$pandac$IRNode*) $tmp1409);
                    panda$core$String* $tmp1411 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1405), &$s1410);
                    panda$core$MutableString$append$panda$core$String(result1381, $tmp1411);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1405));
                }
                goto $l1398;
                $l1399:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$534$171393));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1412, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1381, $tmp1412);
            {
                panda$core$String* $tmp1414 = panda$core$MutableString$finish$R$panda$core$String(result1381);
                tmp301413 = $tmp1414;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1381));
                return tmp301413;
            }
        }
        }
        else {
        panda$core$Bit $tmp1415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1415.value) {
        {
            panda$core$Real64* $tmp1417 = ((panda$core$Real64*) ((char*) $match$410_9958->$data + 24));
            value1416 = *$tmp1417;
            panda$core$String* $tmp1418 = panda$core$Real64$convert$R$panda$core$String(value1416);
            return $tmp1418;
        }
        }
        else {
        panda$core$Bit $tmp1419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1419.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1421 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 16));
            value1420 = *$tmp1421;
            if (((panda$core$Bit) { value1420 != NULL }).value) {
            {
                panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1422, ((panda$core$Object*) value1420));
                panda$core$String* $tmp1425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1423, &$s1424);
                return $tmp1425;
            }
            }
            return &$s1426;
        }
        }
        else {
        panda$core$Bit $tmp1427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1427.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1429 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9958->$data + 16));
            type1428 = *$tmp1429;
            panda$core$Int64* $tmp1431 = ((panda$core$Int64*) ((char*) $match$410_9958->$data + 24));
            id1430 = *$tmp1431;
            panda$core$Int64$wrapper* $tmp1433;
            $tmp1433 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1433->value = id1430;
            panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1432, ((panda$core$Object*) $tmp1433));
            panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, &$s1435);
            panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1436, ((panda$core$Object*) type1428));
            panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1437, &$s1438);
            return $tmp1439;
        }
        }
        else {
        panda$core$Bit $tmp1440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1440.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1442 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 0));
            base1441 = *$tmp1442;
            panda$core$Int64* $tmp1444 = ((panda$core$Int64*) ((char*) $match$410_9958->$data + 8));
            id1443 = *$tmp1444;
            panda$core$Int64$wrapper* $tmp1446;
            $tmp1446 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1446->value = id1443;
            panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1445, ((panda$core$Object*) $tmp1446));
            panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1447, &$s1448);
            panda$core$String* $tmp1450 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1449, ((panda$core$Object*) base1441));
            panda$core$String* $tmp1452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1450, &$s1451);
            return $tmp1452;
        }
        }
        else {
        panda$core$Bit $tmp1453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1453.value) {
        {
            return &$s1454;
        }
        }
        else {
        panda$core$Bit $tmp1455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1455.value) {
        {
            panda$core$String** $tmp1457 = ((panda$core$String**) ((char*) $match$410_9958->$data + 16));
            str1456 = *$tmp1457;
            return str1456;
        }
        }
        else {
        panda$core$Bit $tmp1458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1458.value) {
        {
            return &$s1459;
        }
        }
        else {
        panda$core$Bit $tmp1460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1460.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1462 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 16));
            test1461 = *$tmp1462;
            org$pandalanguage$pandac$IRNode** $tmp1464 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 24));
            ifTrue1463 = *$tmp1464;
            org$pandalanguage$pandac$IRNode** $tmp1466 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 32));
            ifFalse1465 = *$tmp1466;
            panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1467, ((panda$core$Object*) test1461));
            panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1468, &$s1469);
            panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1470, ((panda$core$Object*) ifTrue1463));
            panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1471, &$s1472);
            panda$core$String* $tmp1474 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1473, ((panda$core$Object*) ifFalse1465));
            panda$core$String* $tmp1476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1474, &$s1475);
            return $tmp1476;
        }
        }
        else {
        panda$core$Bit $tmp1477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1477.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1479 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9958->$data + 16));
            type1478 = *$tmp1479;
            panda$core$String* $tmp1480 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1478);
            return $tmp1480;
        }
        }
        else {
        panda$core$Bit $tmp1481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1481.value) {
        {
            panda$core$String** $tmp1483 = ((panda$core$String**) ((char*) $match$410_9958->$data + 16));
            name1482 = *$tmp1483;
            return name1482;
        }
        }
        else {
        panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1484.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1486 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 24));
            base1485 = *$tmp1486;
            panda$collections$ImmutableArray** $tmp1488 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 32));
            args1487 = *$tmp1488;
            panda$core$String* $tmp1490 = (($fn1489) base1485->$class->vtable[0])(base1485);
            panda$core$String* $tmp1492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1490, &$s1491);
            panda$core$String* $tmp1493 = panda$collections$ImmutableArray$join$R$panda$core$String(args1487);
            panda$core$String* $tmp1494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1492, $tmp1493);
            panda$core$String* $tmp1496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1494, &$s1495);
            return $tmp1496;
        }
        }
        else {
        panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1497.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1499 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 24));
            target1498 = *$tmp1499;
            panda$collections$ImmutableArray** $tmp1501 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 32));
            methods1500 = *$tmp1501;
            panda$collections$ImmutableArray** $tmp1503 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 40));
            args1502 = *$tmp1503;
            panda$core$String* $tmp1505 = (($fn1504) target1498->$class->vtable[0])(target1498);
            panda$core$String* $tmp1507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1505, &$s1506);
            panda$core$Object* $tmp1508 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods1500, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1507, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp1508)->value)->name);
            panda$core$String* $tmp1511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1509, &$s1510);
            panda$core$String* $tmp1512 = panda$collections$ImmutableArray$join$R$panda$core$String(args1502);
            panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1511, $tmp1512);
            panda$core$String* $tmp1515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1513, &$s1514);
            return $tmp1515;
        }
        }
        else {
        panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1516.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1518 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 16));
            target1517 = *$tmp1518;
            panda$collections$ImmutableArray** $tmp1520 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 24));
            methods1519 = *$tmp1520;
            panda$core$String* $tmp1522 = (($fn1521) target1517->$class->vtable[0])(target1517);
            panda$core$String* $tmp1524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1522, &$s1523);
            panda$core$Object* $tmp1525 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods1519, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1524, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp1525)->value)->name);
            panda$core$String* $tmp1528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1526, &$s1527);
            return $tmp1528;
        }
        }
        else {
        panda$core$Bit $tmp1529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1529.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1531 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 16));
            start1530 = *$tmp1531;
            org$pandalanguage$pandac$IRNode** $tmp1533 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 24));
            end1532 = *$tmp1533;
            panda$core$Bit* $tmp1535 = ((panda$core$Bit*) ((char*) $match$410_9958->$data + 32));
            inclusive1534 = *$tmp1535;
            org$pandalanguage$pandac$IRNode** $tmp1537 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 33));
            step1536 = *$tmp1537;
            panda$core$MutableString* $tmp1539 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1539);
            result1538 = $tmp1539;
            if (((panda$core$Bit) { start1530 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1538, ((panda$core$Object*) start1530));
            }
            }
            if (inclusive1534.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1538, &$s1540);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result1538, &$s1541);
            }
            }
            if (((panda$core$Bit) { end1532 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1538, ((panda$core$Object*) end1532));
            }
            }
            if (((panda$core$Bit) { step1536 != NULL }).value) {
            {
                panda$core$String* $tmp1543 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1542, ((panda$core$Object*) step1536));
                panda$core$String* $tmp1545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1543, &$s1544);
                panda$core$MutableString$append$panda$core$String(result1538, $tmp1545);
            }
            }
            {
                panda$core$String* $tmp1547 = panda$core$MutableString$finish$R$panda$core$String(result1538);
                tmp311546 = $tmp1547;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1538));
                return tmp311546;
            }
        }
        }
        else {
        panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1548.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1550 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$410_9958->$data + 16));
            kind1549 = *$tmp1550;
            panda$collections$ImmutableArray** $tmp1552 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 24));
            decls1551 = *$tmp1552;
            panda$core$MutableString* $tmp1554 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1554);
            result1553 = $tmp1554;
            {
                $match$588_171555 = kind1549;
                panda$core$Bit $tmp1556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171555.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp1556.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1553, &$s1557);
                }
                }
                else {
                panda$core$Bit $tmp1558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171555.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp1558.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1553, &$s1559);
                }
                }
                else {
                panda$core$Bit $tmp1560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171555.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp1560.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1553, &$s1561);
                }
                }
                else {
                panda$core$Bit $tmp1562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171555.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp1562.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1553, &$s1563);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp1564 = panda$collections$ImmutableArray$join$R$panda$core$String(decls1551);
            panda$core$MutableString$append$panda$core$String(result1553, $tmp1564);
            {
                panda$core$String* $tmp1566 = panda$core$MutableString$finish$R$panda$core$String(result1553);
                tmp321565 = $tmp1566;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1553));
                return tmp321565;
            }
        }
        }
        else {
        panda$core$Bit $tmp1567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1567.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1569 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$410_9958->$data + 16));
            variable1568 = *$tmp1569;
            return ((org$pandalanguage$pandac$Symbol*) variable1568)->name;
        }
        }
        else {
        panda$core$Bit $tmp1570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1570.value) {
        {
            panda$collections$ImmutableArray** $tmp1572 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 16));
            tests1571 = *$tmp1572;
            panda$collections$ImmutableArray** $tmp1574 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 24));
            statements1573 = *$tmp1574;
            panda$core$String* $tmp1576 = panda$collections$ImmutableArray$join$R$panda$core$String(tests1571);
            panda$core$String* $tmp1577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1575, $tmp1576);
            panda$core$String* $tmp1579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1577, &$s1578);
            panda$core$String* $tmp1581 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(statements1573, &$s1580);
            panda$core$String* $tmp1582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1579, $tmp1581);
            panda$core$String* $tmp1584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1582, &$s1583);
            return $tmp1584;
        }
        }
        else {
        panda$core$Bit $tmp1585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9958->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1585.value) {
        {
            panda$core$String** $tmp1587 = ((panda$core$String**) ((char*) $match$410_9958->$data + 16));
            label1586 = *$tmp1587;
            org$pandalanguage$pandac$IRNode** $tmp1589 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9958->$data + 24));
            test1588 = *$tmp1589;
            panda$collections$ImmutableArray** $tmp1591 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9958->$data + 32));
            statements1590 = *$tmp1591;
            panda$core$MutableString* $tmp1593 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1593);
            result1592 = $tmp1593;
            if (((panda$core$Bit) { label1586 != NULL }).value) {
            {
                panda$core$String* $tmp1594 = panda$core$String$convert$R$panda$core$String(label1586);
                panda$core$String* $tmp1596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1594, &$s1595);
                panda$core$MutableString$append$panda$core$String(result1592, $tmp1596);
            }
            }
            panda$core$String* $tmp1598 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1597, ((panda$core$Object*) test1588));
            panda$core$String* $tmp1600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1598, &$s1599);
            panda$core$MutableString$append$panda$core$String(result1592, $tmp1600);
            {
                ITable* $tmp1602 = ((panda$collections$Iterable*) statements1590)->$class->itable;
                while ($tmp1602->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1602 = $tmp1602->next;
                }
                $fn1604 $tmp1603 = $tmp1602->methods[0];
                panda$collections$Iterator* $tmp1605 = $tmp1603(((panda$collections$Iterable*) statements1590));
                Iter$606$171601 = $tmp1605;
                $l1606:;
                ITable* $tmp1608 = Iter$606$171601->$class->itable;
                while ($tmp1608->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1608 = $tmp1608->next;
                }
                $fn1610 $tmp1609 = $tmp1608->methods[0];
                panda$core$Bit $tmp1611 = $tmp1609(Iter$606$171601);
                panda$core$Bit $tmp1612 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1611);
                if (!$tmp1612.value) goto $l1607;
                {
                    ITable* $tmp1614 = Iter$606$171601->$class->itable;
                    while ($tmp1614->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1614 = $tmp1614->next;
                    }
                    $fn1616 $tmp1615 = $tmp1614->methods[1];
                    panda$core$Object* $tmp1617 = $tmp1615(Iter$606$171601);
                    s1613 = ((org$pandalanguage$pandac$IRNode*) $tmp1617);
                    panda$core$String* $tmp1619 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1613), &$s1618);
                    panda$core$MutableString$append$panda$core$String(result1592, $tmp1619);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1613));
                }
                goto $l1606;
                $l1607:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$606$171601));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1620, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1592, $tmp1620);
            {
                panda$core$String* $tmp1622 = panda$core$MutableString$finish$R$panda$core$String(result1592);
                tmp331621 = $tmp1622;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1592));
                return tmp331621;
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
    org$pandalanguage$pandac$IRNode* $match$5_11623;
    org$pandalanguage$pandac$Position _f01625;
    org$pandalanguage$pandac$IRNode* _f11627;
    org$pandalanguage$pandac$IRNode* _f21629;
    org$pandalanguage$pandac$Position _f01632;
    org$pandalanguage$pandac$Type* _f11634;
    org$pandalanguage$pandac$IRNode* _f21636;
    org$pandalanguage$pandac$parser$Token$Kind _f31638;
    org$pandalanguage$pandac$IRNode* _f41640;
    org$pandalanguage$pandac$Position _f01643;
    org$pandalanguage$pandac$Type* _f11645;
    panda$core$Bit _f21647;
    org$pandalanguage$pandac$Position _f01650;
    panda$collections$ImmutableArray* _f11652;
    org$pandalanguage$pandac$Position _f01655;
    panda$core$String* _f11657;
    org$pandalanguage$pandac$Position _f01660;
    org$pandalanguage$pandac$Type* _f11662;
    org$pandalanguage$pandac$MethodRef* _f21664;
    panda$collections$ImmutableArray* _f31666;
    org$pandalanguage$pandac$Position _f01669;
    org$pandalanguage$pandac$IRNode* _f11671;
    org$pandalanguage$pandac$Type* _f21673;
    panda$core$Bit _f31675;
    org$pandalanguage$pandac$Position _f01678;
    org$pandalanguage$pandac$ChoiceEntry* _f11680;
    org$pandalanguage$pandac$Position _f01683;
    org$pandalanguage$pandac$IRNode* _f11685;
    org$pandalanguage$pandac$ChoiceEntry* _f21687;
    panda$core$Int64 _f31689;
    org$pandalanguage$pandac$Position _f01692;
    org$pandalanguage$pandac$Type* _f11694;
    org$pandalanguage$pandac$IRNode* _f21696;
    org$pandalanguage$pandac$Position _f01699;
    org$pandalanguage$pandac$Type* _f11701;
    org$pandalanguage$pandac$Position _f01704;
    panda$core$String* _f11706;
    org$pandalanguage$pandac$IRNode* _f01709;
    org$pandalanguage$pandac$IRNode* _f11711;
    org$pandalanguage$pandac$Position _f01714;
    panda$core$String* _f11716;
    panda$collections$ImmutableArray* _f21718;
    org$pandalanguage$pandac$IRNode* _f31720;
    org$pandalanguage$pandac$IRNode* _f01723;
    org$pandalanguage$pandac$IRNode* _f11725;
    org$pandalanguage$pandac$Position _f01728;
    org$pandalanguage$pandac$Type* _f11730;
    org$pandalanguage$pandac$IRNode* _f21732;
    org$pandalanguage$pandac$FieldDecl* _f31734;
    org$pandalanguage$pandac$Position _f01737;
    org$pandalanguage$pandac$IRNode* _f11739;
    panda$collections$ImmutableArray* _f21741;
    org$pandalanguage$pandac$IRNode* _f31743;
    org$pandalanguage$pandac$Position _f01746;
    org$pandalanguage$pandac$Type* _f11748;
    panda$core$UInt64 _f21750;
    org$pandalanguage$pandac$Position _f01753;
    org$pandalanguage$pandac$IRNode* _f11755;
    org$pandalanguage$pandac$Position _f01758;
    org$pandalanguage$pandac$IRNode* _f11760;
    org$pandalanguage$pandac$Position _f01763;
    panda$core$String* _f11765;
    panda$collections$ImmutableArray* _f21767;
    org$pandalanguage$pandac$Position _f01770;
    org$pandalanguage$pandac$IRNode* _f11772;
    panda$collections$ImmutableArray* _f21774;
    panda$collections$ImmutableArray* _f31776;
    org$pandalanguage$pandac$Position _f01779;
    org$pandalanguage$pandac$IRNode* _f11781;
    org$pandalanguage$pandac$MethodRef* _f21783;
    org$pandalanguage$pandac$Position _f01786;
    org$pandalanguage$pandac$Type* _f11788;
    panda$core$UInt64 _f21790;
    org$pandalanguage$pandac$Position _f01793;
    org$pandalanguage$pandac$Type* _f11795;
    org$pandalanguage$pandac$Position _f01798;
    org$pandalanguage$pandac$parser$Token$Kind _f11800;
    org$pandalanguage$pandac$IRNode* _f21802;
    org$pandalanguage$pandac$Position _f01805;
    panda$core$String* _f11807;
    org$pandalanguage$pandac$IRNode* _f21809;
    org$pandalanguage$pandac$IRNode* _f31811;
    panda$collections$ImmutableArray* _f41813;
    org$pandalanguage$pandac$Position _f01816;
    org$pandalanguage$pandac$Type* _f11818;
    panda$core$Real64 _f21820;
    org$pandalanguage$pandac$Position _f01823;
    org$pandalanguage$pandac$IRNode* _f11825;
    org$pandalanguage$pandac$Position _f01828;
    org$pandalanguage$pandac$Type* _f11830;
    panda$core$Int64 _f21832;
    org$pandalanguage$pandac$IRNode* _f01835;
    panda$core$Int64 _f11837;
    org$pandalanguage$pandac$Position _f01840;
    org$pandalanguage$pandac$Type* _f11842;
    org$pandalanguage$pandac$Position _f01845;
    panda$core$String* _f11847;
    org$pandalanguage$pandac$Position _f01850;
    org$pandalanguage$pandac$Type* _f11852;
    org$pandalanguage$pandac$Position _f01855;
    org$pandalanguage$pandac$IRNode* _f11857;
    org$pandalanguage$pandac$IRNode* _f21859;
    org$pandalanguage$pandac$IRNode* _f31861;
    org$pandalanguage$pandac$Position _f01864;
    org$pandalanguage$pandac$Type* _f11866;
    org$pandalanguage$pandac$Position _f01869;
    panda$core$String* _f11871;
    org$pandalanguage$pandac$Position _f01874;
    org$pandalanguage$pandac$Type* _f11876;
    org$pandalanguage$pandac$IRNode* _f21878;
    panda$collections$ImmutableArray* _f31880;
    org$pandalanguage$pandac$Position _f01883;
    org$pandalanguage$pandac$Type* _f11885;
    org$pandalanguage$pandac$IRNode* _f21887;
    panda$collections$ImmutableArray* _f31889;
    panda$collections$ImmutableArray* _f41891;
    org$pandalanguage$pandac$Position _f01894;
    org$pandalanguage$pandac$IRNode* _f11896;
    panda$collections$ImmutableArray* _f21898;
    org$pandalanguage$pandac$Position _f01901;
    org$pandalanguage$pandac$IRNode* _f11903;
    org$pandalanguage$pandac$IRNode* _f21905;
    panda$core$Bit _f31907;
    org$pandalanguage$pandac$IRNode* _f41909;
    org$pandalanguage$pandac$Position _f01912;
    org$pandalanguage$pandac$Variable$Kind _f11914;
    panda$collections$ImmutableArray* _f21916;
    org$pandalanguage$pandac$Position _f01919;
    org$pandalanguage$pandac$Variable* _f11921;
    org$pandalanguage$pandac$Position _f01924;
    panda$collections$ImmutableArray* _f11926;
    panda$collections$ImmutableArray* _f21928;
    org$pandalanguage$pandac$Position _f01931;
    panda$core$String* _f11933;
    org$pandalanguage$pandac$IRNode* _f21935;
    panda$collections$ImmutableArray* _f31937;
    {
        $match$5_11623 = self;
        panda$core$Bit $tmp1624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1624.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1626 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01625 = *$tmp1626;
            org$pandalanguage$pandac$IRNode** $tmp1628 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 16));
            _f11627 = *$tmp1628;
            org$pandalanguage$pandac$IRNode** $tmp1630 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 24));
            _f21629 = *$tmp1630;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11627));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21629));
        }
        }
        else {
        panda$core$Bit $tmp1631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1631.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1633 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01632 = *$tmp1633;
            org$pandalanguage$pandac$Type** $tmp1635 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11634 = *$tmp1635;
            org$pandalanguage$pandac$IRNode** $tmp1637 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 24));
            _f21636 = *$tmp1637;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1639 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11623->$data + 32));
            _f31638 = *$tmp1639;
            org$pandalanguage$pandac$IRNode** $tmp1641 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 40));
            _f41640 = *$tmp1641;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11634));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21636));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41640));
        }
        }
        else {
        panda$core$Bit $tmp1642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1642.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1644 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01643 = *$tmp1644;
            org$pandalanguage$pandac$Type** $tmp1646 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11645 = *$tmp1646;
            panda$core$Bit* $tmp1648 = ((panda$core$Bit*) ((char*) $match$5_11623->$data + 24));
            _f21647 = *$tmp1648;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11645));
        }
        }
        else {
        panda$core$Bit $tmp1649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1649.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1651 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01650 = *$tmp1651;
            panda$collections$ImmutableArray** $tmp1653 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 16));
            _f11652 = *$tmp1653;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11652));
        }
        }
        else {
        panda$core$Bit $tmp1654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1654.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1656 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01655 = *$tmp1656;
            panda$core$String** $tmp1658 = ((panda$core$String**) ((char*) $match$5_11623->$data + 16));
            _f11657 = *$tmp1658;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11657));
        }
        }
        else {
        panda$core$Bit $tmp1659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1659.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1661 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01660 = *$tmp1661;
            org$pandalanguage$pandac$Type** $tmp1663 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11662 = *$tmp1663;
            org$pandalanguage$pandac$MethodRef** $tmp1665 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_11623->$data + 24));
            _f21664 = *$tmp1665;
            panda$collections$ImmutableArray** $tmp1667 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 32));
            _f31666 = *$tmp1667;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11662));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21664));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31666));
        }
        }
        else {
        panda$core$Bit $tmp1668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1668.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1670 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01669 = *$tmp1670;
            org$pandalanguage$pandac$IRNode** $tmp1672 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 16));
            _f11671 = *$tmp1672;
            org$pandalanguage$pandac$Type** $tmp1674 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 24));
            _f21673 = *$tmp1674;
            panda$core$Bit* $tmp1676 = ((panda$core$Bit*) ((char*) $match$5_11623->$data + 32));
            _f31675 = *$tmp1676;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11671));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21673));
        }
        }
        else {
        panda$core$Bit $tmp1677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1677.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1679 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01678 = *$tmp1679;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1681 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11623->$data + 16));
            _f11680 = *$tmp1681;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11680));
        }
        }
        else {
        panda$core$Bit $tmp1682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1682.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1684 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01683 = *$tmp1684;
            org$pandalanguage$pandac$IRNode** $tmp1686 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 16));
            _f11685 = *$tmp1686;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1688 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11623->$data + 24));
            _f21687 = *$tmp1688;
            panda$core$Int64* $tmp1690 = ((panda$core$Int64*) ((char*) $match$5_11623->$data + 32));
            _f31689 = *$tmp1690;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11685));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21687));
        }
        }
        else {
        panda$core$Bit $tmp1691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1691.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1693 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01692 = *$tmp1693;
            org$pandalanguage$pandac$Type** $tmp1695 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11694 = *$tmp1695;
            org$pandalanguage$pandac$IRNode** $tmp1697 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 24));
            _f21696 = *$tmp1697;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11694));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21696));
        }
        }
        else {
        panda$core$Bit $tmp1698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1698.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1700 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01699 = *$tmp1700;
            org$pandalanguage$pandac$Type** $tmp1702 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11701 = *$tmp1702;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11701));
        }
        }
        else {
        panda$core$Bit $tmp1703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1703.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1705 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01704 = *$tmp1705;
            panda$core$String** $tmp1707 = ((panda$core$String**) ((char*) $match$5_11623->$data + 16));
            _f11706 = *$tmp1707;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11706));
        }
        }
        else {
        panda$core$Bit $tmp1708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1708.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1710 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 0));
            _f01709 = *$tmp1710;
            org$pandalanguage$pandac$IRNode** $tmp1712 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 8));
            _f11711 = *$tmp1712;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01709));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11711));
        }
        }
        else {
        panda$core$Bit $tmp1713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1713.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1715 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01714 = *$tmp1715;
            panda$core$String** $tmp1717 = ((panda$core$String**) ((char*) $match$5_11623->$data + 16));
            _f11716 = *$tmp1717;
            panda$collections$ImmutableArray** $tmp1719 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 24));
            _f21718 = *$tmp1719;
            org$pandalanguage$pandac$IRNode** $tmp1721 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 32));
            _f31720 = *$tmp1721;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11716));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21718));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31720));
        }
        }
        else {
        panda$core$Bit $tmp1722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1722.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1724 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 0));
            _f01723 = *$tmp1724;
            org$pandalanguage$pandac$IRNode** $tmp1726 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 8));
            _f11725 = *$tmp1726;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01723));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11725));
        }
        }
        else {
        panda$core$Bit $tmp1727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1727.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1729 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01728 = *$tmp1729;
            org$pandalanguage$pandac$Type** $tmp1731 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11730 = *$tmp1731;
            org$pandalanguage$pandac$IRNode** $tmp1733 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 24));
            _f21732 = *$tmp1733;
            org$pandalanguage$pandac$FieldDecl** $tmp1735 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_11623->$data + 32));
            _f31734 = *$tmp1735;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11730));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21732));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31734));
        }
        }
        else {
        panda$core$Bit $tmp1736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1736.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1738 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01737 = *$tmp1738;
            org$pandalanguage$pandac$IRNode** $tmp1740 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 16));
            _f11739 = *$tmp1740;
            panda$collections$ImmutableArray** $tmp1742 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 24));
            _f21741 = *$tmp1742;
            org$pandalanguage$pandac$IRNode** $tmp1744 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 32));
            _f31743 = *$tmp1744;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11739));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21741));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31743));
        }
        }
        else {
        panda$core$Bit $tmp1745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1745.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1747 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01746 = *$tmp1747;
            org$pandalanguage$pandac$Type** $tmp1749 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11748 = *$tmp1749;
            panda$core$UInt64* $tmp1751 = ((panda$core$UInt64*) ((char*) $match$5_11623->$data + 24));
            _f21750 = *$tmp1751;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11748));
        }
        }
        else {
        panda$core$Bit $tmp1752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1752.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1754 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01753 = *$tmp1754;
            org$pandalanguage$pandac$IRNode** $tmp1756 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 16));
            _f11755 = *$tmp1756;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11755));
        }
        }
        else {
        panda$core$Bit $tmp1757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1757.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1759 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01758 = *$tmp1759;
            org$pandalanguage$pandac$IRNode** $tmp1761 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 16));
            _f11760 = *$tmp1761;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11760));
        }
        }
        else {
        panda$core$Bit $tmp1762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1762.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1764 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01763 = *$tmp1764;
            panda$core$String** $tmp1766 = ((panda$core$String**) ((char*) $match$5_11623->$data + 16));
            _f11765 = *$tmp1766;
            panda$collections$ImmutableArray** $tmp1768 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 24));
            _f21767 = *$tmp1768;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11765));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21767));
        }
        }
        else {
        panda$core$Bit $tmp1769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1769.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1771 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01770 = *$tmp1771;
            org$pandalanguage$pandac$IRNode** $tmp1773 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 16));
            _f11772 = *$tmp1773;
            panda$collections$ImmutableArray** $tmp1775 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 24));
            _f21774 = *$tmp1775;
            panda$collections$ImmutableArray** $tmp1777 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 32));
            _f31776 = *$tmp1777;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11772));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21774));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31776));
        }
        }
        else {
        panda$core$Bit $tmp1778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1778.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1780 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01779 = *$tmp1780;
            org$pandalanguage$pandac$IRNode** $tmp1782 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 16));
            _f11781 = *$tmp1782;
            org$pandalanguage$pandac$MethodRef** $tmp1784 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_11623->$data + 24));
            _f21783 = *$tmp1784;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11781));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21783));
        }
        }
        else {
        panda$core$Bit $tmp1785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1785.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1787 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01786 = *$tmp1787;
            org$pandalanguage$pandac$Type** $tmp1789 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11788 = *$tmp1789;
            panda$core$UInt64* $tmp1791 = ((panda$core$UInt64*) ((char*) $match$5_11623->$data + 24));
            _f21790 = *$tmp1791;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11788));
        }
        }
        else {
        panda$core$Bit $tmp1792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1792.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1794 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01793 = *$tmp1794;
            org$pandalanguage$pandac$Type** $tmp1796 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11795 = *$tmp1796;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11795));
        }
        }
        else {
        panda$core$Bit $tmp1797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1797.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1799 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01798 = *$tmp1799;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1801 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11623->$data + 16));
            _f11800 = *$tmp1801;
            org$pandalanguage$pandac$IRNode** $tmp1803 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 24));
            _f21802 = *$tmp1803;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21802));
        }
        }
        else {
        panda$core$Bit $tmp1804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1804.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1806 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01805 = *$tmp1806;
            panda$core$String** $tmp1808 = ((panda$core$String**) ((char*) $match$5_11623->$data + 16));
            _f11807 = *$tmp1808;
            org$pandalanguage$pandac$IRNode** $tmp1810 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 24));
            _f21809 = *$tmp1810;
            org$pandalanguage$pandac$IRNode** $tmp1812 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 32));
            _f31811 = *$tmp1812;
            panda$collections$ImmutableArray** $tmp1814 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 40));
            _f41813 = *$tmp1814;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11807));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21809));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31811));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41813));
        }
        }
        else {
        panda$core$Bit $tmp1815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1815.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1817 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01816 = *$tmp1817;
            org$pandalanguage$pandac$Type** $tmp1819 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11818 = *$tmp1819;
            panda$core$Real64* $tmp1821 = ((panda$core$Real64*) ((char*) $match$5_11623->$data + 24));
            _f21820 = *$tmp1821;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11818));
        }
        }
        else {
        panda$core$Bit $tmp1822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1822.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1824 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01823 = *$tmp1824;
            org$pandalanguage$pandac$IRNode** $tmp1826 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 16));
            _f11825 = *$tmp1826;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11825));
        }
        }
        else {
        panda$core$Bit $tmp1827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1827.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1829 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01828 = *$tmp1829;
            org$pandalanguage$pandac$Type** $tmp1831 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11830 = *$tmp1831;
            panda$core$Int64* $tmp1833 = ((panda$core$Int64*) ((char*) $match$5_11623->$data + 24));
            _f21832 = *$tmp1833;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11830));
        }
        }
        else {
        panda$core$Bit $tmp1834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1834.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1836 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 0));
            _f01835 = *$tmp1836;
            panda$core$Int64* $tmp1838 = ((panda$core$Int64*) ((char*) $match$5_11623->$data + 8));
            _f11837 = *$tmp1838;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01835));
        }
        }
        else {
        panda$core$Bit $tmp1839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1839.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1841 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01840 = *$tmp1841;
            org$pandalanguage$pandac$Type** $tmp1843 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11842 = *$tmp1843;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11842));
        }
        }
        else {
        panda$core$Bit $tmp1844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1844.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1846 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01845 = *$tmp1846;
            panda$core$String** $tmp1848 = ((panda$core$String**) ((char*) $match$5_11623->$data + 16));
            _f11847 = *$tmp1848;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11847));
        }
        }
        else {
        panda$core$Bit $tmp1849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1849.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1851 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01850 = *$tmp1851;
            org$pandalanguage$pandac$Type** $tmp1853 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11852 = *$tmp1853;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11852));
        }
        }
        else {
        panda$core$Bit $tmp1854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1854.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1856 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01855 = *$tmp1856;
            org$pandalanguage$pandac$IRNode** $tmp1858 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 16));
            _f11857 = *$tmp1858;
            org$pandalanguage$pandac$IRNode** $tmp1860 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 24));
            _f21859 = *$tmp1860;
            org$pandalanguage$pandac$IRNode** $tmp1862 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 32));
            _f31861 = *$tmp1862;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11857));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21859));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31861));
        }
        }
        else {
        panda$core$Bit $tmp1863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1863.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1865 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01864 = *$tmp1865;
            org$pandalanguage$pandac$Type** $tmp1867 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11866 = *$tmp1867;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11866));
        }
        }
        else {
        panda$core$Bit $tmp1868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1868.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1870 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01869 = *$tmp1870;
            panda$core$String** $tmp1872 = ((panda$core$String**) ((char*) $match$5_11623->$data + 16));
            _f11871 = *$tmp1872;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11871));
        }
        }
        else {
        panda$core$Bit $tmp1873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1873.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1875 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01874 = *$tmp1875;
            org$pandalanguage$pandac$Type** $tmp1877 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11876 = *$tmp1877;
            org$pandalanguage$pandac$IRNode** $tmp1879 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 24));
            _f21878 = *$tmp1879;
            panda$collections$ImmutableArray** $tmp1881 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 32));
            _f31880 = *$tmp1881;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11876));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21878));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31880));
        }
        }
        else {
        panda$core$Bit $tmp1882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1882.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1884 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01883 = *$tmp1884;
            org$pandalanguage$pandac$Type** $tmp1886 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_11623->$data + 16));
            _f11885 = *$tmp1886;
            org$pandalanguage$pandac$IRNode** $tmp1888 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 24));
            _f21887 = *$tmp1888;
            panda$collections$ImmutableArray** $tmp1890 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 32));
            _f31889 = *$tmp1890;
            panda$collections$ImmutableArray** $tmp1892 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 40));
            _f41891 = *$tmp1892;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11885));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21887));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31889));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41891));
        }
        }
        else {
        panda$core$Bit $tmp1893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1893.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1895 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01894 = *$tmp1895;
            org$pandalanguage$pandac$IRNode** $tmp1897 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 16));
            _f11896 = *$tmp1897;
            panda$collections$ImmutableArray** $tmp1899 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 24));
            _f21898 = *$tmp1899;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11896));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21898));
        }
        }
        else {
        panda$core$Bit $tmp1900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1900.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1902 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01901 = *$tmp1902;
            org$pandalanguage$pandac$IRNode** $tmp1904 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 16));
            _f11903 = *$tmp1904;
            org$pandalanguage$pandac$IRNode** $tmp1906 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 24));
            _f21905 = *$tmp1906;
            panda$core$Bit* $tmp1908 = ((panda$core$Bit*) ((char*) $match$5_11623->$data + 32));
            _f31907 = *$tmp1908;
            org$pandalanguage$pandac$IRNode** $tmp1910 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 33));
            _f41909 = *$tmp1910;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11903));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21905));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41909));
        }
        }
        else {
        panda$core$Bit $tmp1911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1911.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1913 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01912 = *$tmp1913;
            org$pandalanguage$pandac$Variable$Kind* $tmp1915 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11623->$data + 16));
            _f11914 = *$tmp1915;
            panda$collections$ImmutableArray** $tmp1917 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 24));
            _f21916 = *$tmp1917;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21916));
        }
        }
        else {
        panda$core$Bit $tmp1918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1918.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1920 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01919 = *$tmp1920;
            org$pandalanguage$pandac$Variable** $tmp1922 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_11623->$data + 16));
            _f11921 = *$tmp1922;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11921));
        }
        }
        else {
        panda$core$Bit $tmp1923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1923.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1925 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01924 = *$tmp1925;
            panda$collections$ImmutableArray** $tmp1927 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 16));
            _f11926 = *$tmp1927;
            panda$collections$ImmutableArray** $tmp1929 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 24));
            _f21928 = *$tmp1929;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11926));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21928));
        }
        }
        else {
        panda$core$Bit $tmp1930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11623->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1930.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1932 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11623->$data + 0));
            _f01931 = *$tmp1932;
            panda$core$String** $tmp1934 = ((panda$core$String**) ((char*) $match$5_11623->$data + 16));
            _f11933 = *$tmp1934;
            org$pandalanguage$pandac$IRNode** $tmp1936 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11623->$data + 24));
            _f21935 = *$tmp1936;
            panda$collections$ImmutableArray** $tmp1938 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11623->$data + 32));
            _f31937 = *$tmp1938;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11933));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21935));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31937));
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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

