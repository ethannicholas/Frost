#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
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

typedef org$pandalanguage$pandac$Type* (*$fn151)(org$pandalanguage$pandac$IRNode*);
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
typedef panda$collections$Iterator* (*$fn441)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn447)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn453)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn455)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn477)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn492)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn502)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn507)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn513)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn519)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn521)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn536)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn541)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn547)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn553)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn555)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn557)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn565)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn570)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn580)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn586)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn592)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn594)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn603)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn608)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn614)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn620)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn622)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn627)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn633)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn639)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn641)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn657)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn668)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn673)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn679)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn685)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn687)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn695)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn705)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn721)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn724)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn728)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn771)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn777)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn783)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn785)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn798)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn804)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn810)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn812)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn817)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn823)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn829)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn831)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn840)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn845)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn851)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn857)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn859)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn885)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn910)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn916)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn922)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn953)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn971)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1015)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1022)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1041)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1047)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1053)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1067)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1079)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1103)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1109)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1115)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1158)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1164)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1170)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1193)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1199)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1205)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1213)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1219)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1225)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1236)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1257)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1289)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1295)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1301)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1381)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1396)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1413)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1497)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1503)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1509)(panda$collections$Iterator*);

static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s1152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x3a\x20", 17, -7730994269199854653, NULL };
static panda$core$String $s1327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3a\x20", 28, 2945252663019609900, NULL };
static panda$core$String $s1340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp2 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp2 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp3 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp5 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp5 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp6 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp6 = p_f2;
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp7 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp7 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp8 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        *$tmp8 = p_f4;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp9 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp9 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp10 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp10 = p_f1;
    }
    panda$core$Bit* $tmp11 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp11 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp12 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp12 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp13 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        *$tmp13 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp14 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp14 = p_f0;
    {
        panda$core$String** $tmp15 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp15 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp16 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp16 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp17 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp17 = p_f1;
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp18 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        *$tmp18 = p_f2;
    }
    {
        panda$collections$ImmutableArray** $tmp19 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp19 = p_f3;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp20 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp20 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp21 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp21 = p_f1;
    }
    {
        org$pandalanguage$pandac$Type** $tmp22 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        *$tmp22 = p_f2;
    }
    panda$core$Bit* $tmp23 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp23 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp24 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp24 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp25 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        *$tmp25 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp26 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp26 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp27 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp27 = p_f1;
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp28 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        *$tmp28 = p_f2;
    }
    panda$core$Int64* $tmp29 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp29 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp30 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp30 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp31 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp31 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp32 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp32 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp33 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp33 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp34 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp34 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp35 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        *$tmp35 = p_f0;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp36 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        *$tmp36 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp37 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp37 = p_f0;
    {
        panda$core$String** $tmp38 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp38 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp39 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp39 = p_f2;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp40 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        *$tmp40 = p_f3;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp41 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        *$tmp41 = p_f0;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp42 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        *$tmp42 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp43 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp43 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp44 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp44 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp45 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp45 = p_f2;
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp46 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        *$tmp46 = p_f3;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp47 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp47 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp48 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp48 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp49 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp49 = p_f2;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp50 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        *$tmp50 = p_f3;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp51 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp51 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp52 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp52 = p_f1;
    }
    panda$core$UInt64* $tmp53 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp53 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp54 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp54 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp55 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp55 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp56 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp56 = p_f0;
    {
        panda$core$String** $tmp57 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp57 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp58 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp58 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp59 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp59 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp60 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp60 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp61 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp61 = p_f2;
    }
    {
        panda$collections$ImmutableArray** $tmp62 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp62 = p_f3;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$MethodRef* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp63 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp63 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp64 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp64 = p_f1;
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp65 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        *$tmp65 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp66 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp66 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp67 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp67 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp68 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp68 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp69 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp69 = p_f0;
    {
        panda$core$String** $tmp70 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp70 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp71 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp71 = p_f2;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp72 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        *$tmp72 = p_f3;
    }
    {
        panda$collections$ImmutableArray** $tmp73 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        *$tmp73 = p_f4;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp74 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp74 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp75 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp75 = p_f1;
    }
    panda$core$Real64* $tmp76 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp76 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp77 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp77 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp78 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp78 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp79 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp79 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp80 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp80 = p_f1;
    }
    panda$core$Int64* $tmp81 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp81 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp82 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        *$tmp82 = p_f0;
    }
    panda$core$Int64* $tmp83 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp83 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp84 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp84 = p_f0;
    {
        panda$core$String** $tmp85 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp85 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp86 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp86 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp87 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp87 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp88 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp88 = p_f2;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp89 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        *$tmp89 = p_f3;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp90 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp90 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp91 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp91 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp92 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp92 = p_f2;
    }
    {
        panda$collections$ImmutableArray** $tmp93 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp93 = p_f3;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp94 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp94 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp95 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        *$tmp95 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp96 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp96 = p_f2;
    }
    {
        panda$collections$ImmutableArray** $tmp97 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp97 = p_f3;
    }
    {
        panda$collections$ImmutableArray** $tmp98 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        *$tmp98 = p_f4;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp99 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp99 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp100 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp100 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp101 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp101 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp102 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp102 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp103 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        *$tmp103 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp104 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp104 = p_f2;
    }
    panda$core$Bit* $tmp105 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp105 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp106 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        *$tmp106 = p_f4;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp107 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp107 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp108 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp108 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp109 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp109 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp110 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp110 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp111 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        *$tmp111 = p_f1;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp112 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp112 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp113 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        *$tmp113 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp114 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp114 = p_f2;
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp115 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp115 = p_f0;
    {
        panda$core$String** $tmp116 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp116 = p_f1;
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp117 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        *$tmp117 = p_f2;
    }
    {
        panda$collections$ImmutableArray** $tmp118 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp118 = p_f3;
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$66_9119;
    org$pandalanguage$pandac$Type* type121;
    org$pandalanguage$pandac$Type* type124;
    org$pandalanguage$pandac$Type* type127;
    org$pandalanguage$pandac$Type* type130;
    org$pandalanguage$pandac$ChoiceEntry* ce133;
    org$pandalanguage$pandac$ChoiceEntry* ce137;
    panda$core$Int64 field139;
    org$pandalanguage$pandac$Type* type143;
    org$pandalanguage$pandac$Type* type146;
    org$pandalanguage$pandac$IRNode* expr149;
    org$pandalanguage$pandac$Type* type154;
    org$pandalanguage$pandac$Type* type157;
    org$pandalanguage$pandac$IRNode* ref164;
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
        $match$66_9119 = self;
        panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp120.value) {
        {
            org$pandalanguage$pandac$Type** $tmp122 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 16));
            type121 = *$tmp122;
            return type121;
        }
        }
        else {
        panda$core$Bit $tmp123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp123.value) {
        {
            org$pandalanguage$pandac$Type** $tmp125 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 16));
            type124 = *$tmp125;
            return type124;
        }
        }
        else {
        panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp126.value) {
        {
            org$pandalanguage$pandac$Type** $tmp128 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 16));
            type127 = *$tmp128;
            return type127;
        }
        }
        else {
        panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp129.value) {
        {
            org$pandalanguage$pandac$Type** $tmp131 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 24));
            type130 = *$tmp131;
            return type130;
        }
        }
        else {
        panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp132.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp134 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$66_9119->$data + 16));
            ce133 = *$tmp134;
            org$pandalanguage$pandac$Type* $tmp135 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp135;
        }
        }
        else {
        panda$core$Bit $tmp136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp136.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp138 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$66_9119->$data + 24));
            ce137 = *$tmp138;
            panda$core$Int64* $tmp140 = ((panda$core$Int64*) ((char*) $match$66_9119->$data + 32));
            field139 = *$tmp140;
            panda$core$Object* $tmp141 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce137->fields, field139);
            return ((org$pandalanguage$pandac$Type*) $tmp141);
        }
        }
        else {
        panda$core$Bit $tmp142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp142.value) {
        {
            org$pandalanguage$pandac$Type** $tmp144 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 16));
            type143 = *$tmp144;
            return type143;
        }
        }
        else {
        panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp145.value) {
        {
            org$pandalanguage$pandac$Type** $tmp147 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 16));
            type146 = *$tmp147;
            return type146;
        }
        }
        else {
        panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp148.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp150 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9119->$data + 0));
            expr149 = *$tmp150;
            org$pandalanguage$pandac$Type* $tmp152 = (($fn151) expr149->$class->vtable[2])(expr149);
            return $tmp152;
        }
        }
        else {
        panda$core$Bit $tmp153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp153.value) {
        {
            org$pandalanguage$pandac$Type** $tmp155 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 16));
            type154 = *$tmp155;
            return type154;
        }
        }
        else {
        panda$core$Bit $tmp156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp156.value) {
        {
            org$pandalanguage$pandac$Type** $tmp158 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 16));
            type157 = *$tmp158;
            return type157;
        }
        }
        else {
        panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp159.value) {
        {
            org$pandalanguage$pandac$Type* $tmp160 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            return $tmp160;
        }
        }
        else {
        panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp161.value) {
        {
            org$pandalanguage$pandac$Type* $tmp162 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            return $tmp162;
        }
        }
        else {
        panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp163.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp165 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9119->$data + 16));
            ref164 = *$tmp165;
            org$pandalanguage$pandac$Type* $tmp166 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
            $tmp166->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp166->refCount.value = 1;
            org$pandalanguage$pandac$Position$init(&$tmp169);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp166, &$s168, ((panda$core$Int64) { 16 }), $tmp169, ((panda$core$Bit) { true }));
            return $tmp166;
        }
        }
        else {
        panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp170.value) {
        {
            org$pandalanguage$pandac$Type** $tmp172 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 16));
            type171 = *$tmp172;
            return type171;
        }
        }
        else {
        panda$core$Bit $tmp173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp173.value) {
        {
            org$pandalanguage$pandac$Type** $tmp175 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 16));
            type174 = *$tmp175;
            return type174;
        }
        }
        else {
        panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp176.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp178 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9119->$data + 24));
            base177 = *$tmp178;
            org$pandalanguage$pandac$Type* $tmp180 = (($fn179) base177->$class->vtable[2])(base177);
            return $tmp180;
        }
        }
        else {
        panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp181.value) {
        {
            org$pandalanguage$pandac$Type** $tmp183 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 16));
            type182 = *$tmp183;
            return type182;
        }
        }
        else {
        panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp184.value) {
        {
            org$pandalanguage$pandac$Type** $tmp186 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 16));
            type185 = *$tmp186;
            panda$core$Int64* $tmp188 = ((panda$core$Int64*) ((char*) $match$66_9119->$data + 24));
            id187 = *$tmp188;
            return type185;
        }
        }
        else {
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp189.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp191 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9119->$data + 0));
            base190 = *$tmp191;
            org$pandalanguage$pandac$Type* $tmp193 = (($fn192) base190->$class->vtable[2])(base190);
            return $tmp193;
        }
        }
        else {
        panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp194.value) {
        {
            org$pandalanguage$pandac$Type** $tmp196 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 16));
            type195 = *$tmp196;
            return type195;
        }
        }
        else {
        panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp197.value) {
        {
            org$pandalanguage$pandac$Type* $tmp198 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            return $tmp198;
        }
        }
        else {
        panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp199.value) {
        {
            org$pandalanguage$pandac$Type** $tmp201 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 16));
            type200 = *$tmp201;
            return type200;
        }
        }
        else {
        panda$core$Bit $tmp202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp202.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp204 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9119->$data + 24));
            ifTrue203 = *$tmp204;
            org$pandalanguage$pandac$IRNode** $tmp206 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9119->$data + 32));
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
        panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp214.value) {
        {
            org$pandalanguage$pandac$Type* $tmp215 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            return $tmp215;
        }
        }
        else {
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp216.value) {
        {
            org$pandalanguage$pandac$Type* $tmp217 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp217;
        }
        }
        else {
        panda$core$Bit $tmp218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp218.value) {
        {
            org$pandalanguage$pandac$Type** $tmp220 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 16));
            type219 = *$tmp220;
            return type219;
        }
        }
        else {
        panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp221.value) {
        {
            org$pandalanguage$pandac$Type** $tmp223 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9119->$data + 16));
            type222 = *$tmp223;
            return type222;
        }
        }
        else {
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp224.value) {
        {
            org$pandalanguage$pandac$Type* $tmp225 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp225;
        }
        }
        else {
        panda$core$Bit $tmp226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp226.value) {
        {
            org$pandalanguage$pandac$Type* $tmp227 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp227;
        }
        }
        else {
        panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9119->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp228.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp230 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$66_9119->$data + 16));
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
    panda$collections$Iterator* s$Iter410;
    org$pandalanguage$pandac$IRNode* s422;
    panda$core$String* label430;
    org$pandalanguage$pandac$MethodRef* m433;
    panda$collections$ImmutableArray* args435;
    panda$collections$Iterator* arg$Iter438;
    org$pandalanguage$pandac$IRNode* arg450;
    org$pandalanguage$pandac$IRNode* value458;
    org$pandalanguage$pandac$Type* type460;
    org$pandalanguage$pandac$ChoiceEntry* ce463;
    org$pandalanguage$pandac$IRNode* base466;
    org$pandalanguage$pandac$ChoiceEntry* ce468;
    panda$core$Int64 field470;
    org$pandalanguage$pandac$Type* type473;
    org$pandalanguage$pandac$IRNode* call475;
    org$pandalanguage$pandac$Type* Type480;
    panda$core$String* label483;
    org$pandalanguage$pandac$IRNode* target486;
    org$pandalanguage$pandac$IRNode* value488;
    panda$core$String* label496;
    panda$collections$ImmutableArray* statements498;
    org$pandalanguage$pandac$IRNode* test500;
    panda$collections$Iterator* s$Iter504;
    org$pandalanguage$pandac$IRNode* s516;
    org$pandalanguage$pandac$IRNode* base525;
    org$pandalanguage$pandac$FieldDecl* field527;
    org$pandalanguage$pandac$IRNode* test530;
    panda$collections$ImmutableArray* ifTrue532;
    org$pandalanguage$pandac$IRNode* ifFalse534;
    panda$collections$Iterator* s$Iter538;
    org$pandalanguage$pandac$IRNode* s550;
    panda$core$UInt64 value560;
    org$pandalanguage$pandac$IRNode* value563;
    org$pandalanguage$pandac$IRNode* value568;
    panda$core$String* label573;
    panda$collections$ImmutableArray* statements575;
    panda$collections$Iterator* s$Iter577;
    org$pandalanguage$pandac$IRNode* s589;
    org$pandalanguage$pandac$IRNode* value597;
    panda$collections$ImmutableArray* whens599;
    panda$collections$ImmutableArray* other601;
    panda$collections$Iterator* w$Iter605;
    org$pandalanguage$pandac$IRNode* w617;
    panda$collections$Iterator* s$Iter624;
    org$pandalanguage$pandac$IRNode* s636;
    org$pandalanguage$pandac$IRNode* target644;
    org$pandalanguage$pandac$MethodRef* m646;
    panda$core$UInt64 value649;
    org$pandalanguage$pandac$parser$Token$Kind op653;
    org$pandalanguage$pandac$IRNode* base655;
    panda$core$String* label660;
    org$pandalanguage$pandac$IRNode* target662;
    org$pandalanguage$pandac$IRNode* list664;
    panda$collections$ImmutableArray* statements666;
    panda$collections$Iterator* s$Iter670;
    org$pandalanguage$pandac$IRNode* s682;
    panda$core$Real64 value690;
    org$pandalanguage$pandac$IRNode* value693;
    panda$core$Int64 id698;
    org$pandalanguage$pandac$IRNode* base701;
    panda$core$Int64 id703;
    panda$core$String* str709;
    org$pandalanguage$pandac$IRNode* test713;
    org$pandalanguage$pandac$IRNode* ifTrue715;
    org$pandalanguage$pandac$IRNode* ifFalse717;
    org$pandalanguage$pandac$Type* type732;
    panda$core$String* name735;
    org$pandalanguage$pandac$IRNode* base738;
    panda$collections$ImmutableArray* args740;
    org$pandalanguage$pandac$IRNode* target743;
    panda$collections$ImmutableArray* methods745;
    panda$collections$ImmutableArray* args747;
    org$pandalanguage$pandac$IRNode* target750;
    panda$collections$ImmutableArray* methods752;
    org$pandalanguage$pandac$IRNode* start755;
    org$pandalanguage$pandac$IRNode* end757;
    panda$core$Bit inclusive759;
    org$pandalanguage$pandac$IRNode* step761;
    org$pandalanguage$pandac$Variable$Kind kind764;
    panda$collections$ImmutableArray* decls766;
    panda$collections$Iterator* d$Iter768;
    org$pandalanguage$pandac$IRNode* d780;
    org$pandalanguage$pandac$Variable* variable788;
    panda$collections$ImmutableArray* tests791;
    panda$collections$ImmutableArray* statements793;
    panda$collections$Iterator* t$Iter795;
    org$pandalanguage$pandac$IRNode* t807;
    panda$collections$Iterator* s$Iter814;
    org$pandalanguage$pandac$IRNode* s826;
    panda$core$String* label834;
    org$pandalanguage$pandac$IRNode* test836;
    panda$collections$ImmutableArray* statements838;
    panda$collections$Iterator* s$Iter842;
    org$pandalanguage$pandac$IRNode* s854;
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
                s$Iter410 = $tmp414;
                $l415:;
                ITable* $tmp417 = s$Iter410->$class->itable;
                while ($tmp417->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp417 = $tmp417->next;
                }
                $fn419 $tmp418 = $tmp417->methods[0];
                panda$core$Bit $tmp420 = $tmp418(s$Iter410);
                panda$core$Bit $tmp421 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp420);
                if (!$tmp421.value) goto $l416;
                {
                    ITable* $tmp423 = s$Iter410->$class->itable;
                    while ($tmp423->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp423 = $tmp423->next;
                    }
                    $fn425 $tmp424 = $tmp423->methods[1];
                    panda$core$Object* $tmp426 = $tmp424(s$Iter410);
                    s422 = ((org$pandalanguage$pandac$IRNode*) $tmp426);
                    panda$core$Bit $tmp428 = (($fn427) s422->$class->vtable[4])(s422);
                    if ($tmp428.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l415;
                $l416:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp429.value) {
        {
            panda$core$String** $tmp431 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            label430 = *$tmp431;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp432.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp434 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$233_9373->$data + 24));
            m433 = *$tmp434;
            panda$collections$ImmutableArray** $tmp436 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 32));
            args435 = *$tmp436;
            panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m433->value->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp437.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp439 = ((panda$collections$Iterable*) args435)->$class->itable;
                while ($tmp439->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp439 = $tmp439->next;
                }
                $fn441 $tmp440 = $tmp439->methods[0];
                panda$collections$Iterator* $tmp442 = $tmp440(((panda$collections$Iterable*) args435));
                arg$Iter438 = $tmp442;
                $l443:;
                ITable* $tmp445 = arg$Iter438->$class->itable;
                while ($tmp445->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp445 = $tmp445->next;
                }
                $fn447 $tmp446 = $tmp445->methods[0];
                panda$core$Bit $tmp448 = $tmp446(arg$Iter438);
                panda$core$Bit $tmp449 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp448);
                if (!$tmp449.value) goto $l444;
                {
                    ITable* $tmp451 = arg$Iter438->$class->itable;
                    while ($tmp451->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp451 = $tmp451->next;
                    }
                    $fn453 $tmp452 = $tmp451->methods[1];
                    panda$core$Object* $tmp454 = $tmp452(arg$Iter438);
                    arg450 = ((org$pandalanguage$pandac$IRNode*) $tmp454);
                    panda$core$Bit $tmp456 = (($fn455) arg450->$class->vtable[4])(arg450);
                    if ($tmp456.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l443;
                $l444:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp457.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp459 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            value458 = *$tmp459;
            org$pandalanguage$pandac$Type** $tmp461 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9373->$data + 24));
            type460 = *$tmp461;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp462.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp464 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$233_9373->$data + 16));
            ce463 = *$tmp464;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp465.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp467 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            base466 = *$tmp467;
            org$pandalanguage$pandac$ChoiceEntry** $tmp469 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$233_9373->$data + 24));
            ce468 = *$tmp469;
            panda$core$Int64* $tmp471 = ((panda$core$Int64*) ((char*) $match$233_9373->$data + 32));
            field470 = *$tmp471;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp472.value) {
        {
            org$pandalanguage$pandac$Type** $tmp474 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9373->$data + 16));
            type473 = *$tmp474;
            org$pandalanguage$pandac$IRNode** $tmp476 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            call475 = *$tmp476;
            panda$core$Bit $tmp478 = (($fn477) call475->$class->vtable[4])(call475);
            return $tmp478;
        }
        }
        else {
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp479.value) {
        {
            org$pandalanguage$pandac$Type** $tmp481 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9373->$data + 16));
            Type480 = *$tmp481;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp482.value) {
        {
            panda$core$String** $tmp484 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            label483 = *$tmp484;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp485.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp487 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 0));
            target486 = *$tmp487;
            org$pandalanguage$pandac$IRNode** $tmp489 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 8));
            value488 = *$tmp489;
            bool $tmp490 = ((panda$core$Bit) { value488 != NULL }).value;
            if (!$tmp490) goto $l491;
            panda$core$Bit $tmp493 = (($fn492) value488->$class->vtable[4])(value488);
            $tmp490 = $tmp493.value;
            $l491:;
            panda$core$Bit $tmp494 = { $tmp490 };
            return $tmp494;
        }
        }
        else {
        panda$core$Bit $tmp495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp495.value) {
        {
            panda$core$String** $tmp497 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            label496 = *$tmp497;
            panda$collections$ImmutableArray** $tmp499 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 24));
            statements498 = *$tmp499;
            org$pandalanguage$pandac$IRNode** $tmp501 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 32));
            test500 = *$tmp501;
            panda$core$Bit $tmp503 = (($fn502) test500->$class->vtable[4])(test500);
            if ($tmp503.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp505 = ((panda$collections$Iterable*) statements498)->$class->itable;
                while ($tmp505->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp505 = $tmp505->next;
                }
                $fn507 $tmp506 = $tmp505->methods[0];
                panda$collections$Iterator* $tmp508 = $tmp506(((panda$collections$Iterable*) statements498));
                s$Iter504 = $tmp508;
                $l509:;
                ITable* $tmp511 = s$Iter504->$class->itable;
                while ($tmp511->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp511 = $tmp511->next;
                }
                $fn513 $tmp512 = $tmp511->methods[0];
                panda$core$Bit $tmp514 = $tmp512(s$Iter504);
                panda$core$Bit $tmp515 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp514);
                if (!$tmp515.value) goto $l510;
                {
                    ITable* $tmp517 = s$Iter504->$class->itable;
                    while ($tmp517->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp517 = $tmp517->next;
                    }
                    $fn519 $tmp518 = $tmp517->methods[1];
                    panda$core$Object* $tmp520 = $tmp518(s$Iter504);
                    s516 = ((org$pandalanguage$pandac$IRNode*) $tmp520);
                    panda$core$Bit $tmp522 = (($fn521) s516->$class->vtable[4])(s516);
                    if ($tmp522.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l509;
                $l510:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp523.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp524.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp526 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            base525 = *$tmp526;
            org$pandalanguage$pandac$FieldDecl** $tmp528 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$233_9373->$data + 32));
            field527 = *$tmp528;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp529.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp531 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            test530 = *$tmp531;
            panda$collections$ImmutableArray** $tmp533 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 24));
            ifTrue532 = *$tmp533;
            org$pandalanguage$pandac$IRNode** $tmp535 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 32));
            ifFalse534 = *$tmp535;
            panda$core$Bit $tmp537 = (($fn536) test530->$class->vtable[4])(test530);
            if ($tmp537.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp539 = ((panda$collections$Iterable*) ifTrue532)->$class->itable;
                while ($tmp539->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp539 = $tmp539->next;
                }
                $fn541 $tmp540 = $tmp539->methods[0];
                panda$collections$Iterator* $tmp542 = $tmp540(((panda$collections$Iterable*) ifTrue532));
                s$Iter538 = $tmp542;
                $l543:;
                ITable* $tmp545 = s$Iter538->$class->itable;
                while ($tmp545->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp545 = $tmp545->next;
                }
                $fn547 $tmp546 = $tmp545->methods[0];
                panda$core$Bit $tmp548 = $tmp546(s$Iter538);
                panda$core$Bit $tmp549 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp548);
                if (!$tmp549.value) goto $l544;
                {
                    ITable* $tmp551 = s$Iter538->$class->itable;
                    while ($tmp551->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp551 = $tmp551->next;
                    }
                    $fn553 $tmp552 = $tmp551->methods[1];
                    panda$core$Object* $tmp554 = $tmp552(s$Iter538);
                    s550 = ((org$pandalanguage$pandac$IRNode*) $tmp554);
                    panda$core$Bit $tmp556 = (($fn555) s550->$class->vtable[4])(s550);
                    if ($tmp556.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l543;
                $l544:;
            }
            panda$core$Bit $tmp558 = (($fn557) ifFalse534->$class->vtable[4])(ifFalse534);
            return $tmp558;
        }
        }
        else {
        panda$core$Bit $tmp559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp559.value) {
        {
            panda$core$UInt64* $tmp561 = ((panda$core$UInt64*) ((char*) $match$233_9373->$data + 24));
            value560 = *$tmp561;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp562.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp564 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            value563 = *$tmp564;
            panda$core$Bit $tmp566 = (($fn565) value563->$class->vtable[4])(value563);
            return $tmp566;
        }
        }
        else {
        panda$core$Bit $tmp567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp567.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp569 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            value568 = *$tmp569;
            panda$core$Bit $tmp571 = (($fn570) value568->$class->vtable[4])(value568);
            return $tmp571;
        }
        }
        else {
        panda$core$Bit $tmp572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp572.value) {
        {
            panda$core$String** $tmp574 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            label573 = *$tmp574;
            panda$collections$ImmutableArray** $tmp576 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 24));
            statements575 = *$tmp576;
            {
                ITable* $tmp578 = ((panda$collections$Iterable*) statements575)->$class->itable;
                while ($tmp578->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp578 = $tmp578->next;
                }
                $fn580 $tmp579 = $tmp578->methods[0];
                panda$collections$Iterator* $tmp581 = $tmp579(((panda$collections$Iterable*) statements575));
                s$Iter577 = $tmp581;
                $l582:;
                ITable* $tmp584 = s$Iter577->$class->itable;
                while ($tmp584->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp584 = $tmp584->next;
                }
                $fn586 $tmp585 = $tmp584->methods[0];
                panda$core$Bit $tmp587 = $tmp585(s$Iter577);
                panda$core$Bit $tmp588 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp587);
                if (!$tmp588.value) goto $l583;
                {
                    ITable* $tmp590 = s$Iter577->$class->itable;
                    while ($tmp590->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp590 = $tmp590->next;
                    }
                    $fn592 $tmp591 = $tmp590->methods[1];
                    panda$core$Object* $tmp593 = $tmp591(s$Iter577);
                    s589 = ((org$pandalanguage$pandac$IRNode*) $tmp593);
                    panda$core$Bit $tmp595 = (($fn594) s589->$class->vtable[4])(s589);
                    if ($tmp595.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l582;
                $l583:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp596.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp598 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            value597 = *$tmp598;
            panda$collections$ImmutableArray** $tmp600 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 24));
            whens599 = *$tmp600;
            panda$collections$ImmutableArray** $tmp602 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 32));
            other601 = *$tmp602;
            panda$core$Bit $tmp604 = (($fn603) value597->$class->vtable[4])(value597);
            if ($tmp604.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp606 = ((panda$collections$Iterable*) whens599)->$class->itable;
                while ($tmp606->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp606 = $tmp606->next;
                }
                $fn608 $tmp607 = $tmp606->methods[0];
                panda$collections$Iterator* $tmp609 = $tmp607(((panda$collections$Iterable*) whens599));
                w$Iter605 = $tmp609;
                $l610:;
                ITable* $tmp612 = w$Iter605->$class->itable;
                while ($tmp612->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp612 = $tmp612->next;
                }
                $fn614 $tmp613 = $tmp612->methods[0];
                panda$core$Bit $tmp615 = $tmp613(w$Iter605);
                panda$core$Bit $tmp616 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp615);
                if (!$tmp616.value) goto $l611;
                {
                    ITable* $tmp618 = w$Iter605->$class->itable;
                    while ($tmp618->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp618 = $tmp618->next;
                    }
                    $fn620 $tmp619 = $tmp618->methods[1];
                    panda$core$Object* $tmp621 = $tmp619(w$Iter605);
                    w617 = ((org$pandalanguage$pandac$IRNode*) $tmp621);
                    panda$core$Bit $tmp623 = (($fn622) w617->$class->vtable[4])(w617);
                    if ($tmp623.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l610;
                $l611:;
            }
            {
                ITable* $tmp625 = ((panda$collections$Iterable*) other601)->$class->itable;
                while ($tmp625->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp625 = $tmp625->next;
                }
                $fn627 $tmp626 = $tmp625->methods[0];
                panda$collections$Iterator* $tmp628 = $tmp626(((panda$collections$Iterable*) other601));
                s$Iter624 = $tmp628;
                $l629:;
                ITable* $tmp631 = s$Iter624->$class->itable;
                while ($tmp631->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp631 = $tmp631->next;
                }
                $fn633 $tmp632 = $tmp631->methods[0];
                panda$core$Bit $tmp634 = $tmp632(s$Iter624);
                panda$core$Bit $tmp635 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp634);
                if (!$tmp635.value) goto $l630;
                {
                    ITable* $tmp637 = s$Iter624->$class->itable;
                    while ($tmp637->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp637 = $tmp637->next;
                    }
                    $fn639 $tmp638 = $tmp637->methods[1];
                    panda$core$Object* $tmp640 = $tmp638(s$Iter624);
                    s636 = ((org$pandalanguage$pandac$IRNode*) $tmp640);
                    panda$core$Bit $tmp642 = (($fn641) s636->$class->vtable[4])(s636);
                    if ($tmp642.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l629;
                $l630:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp643.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp645 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            target644 = *$tmp645;
            org$pandalanguage$pandac$MethodRef** $tmp647 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$233_9373->$data + 24));
            m646 = *$tmp647;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp648.value) {
        {
            panda$core$UInt64* $tmp650 = ((panda$core$UInt64*) ((char*) $match$233_9373->$data + 24));
            value649 = *$tmp650;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp651.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp652.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp654 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$233_9373->$data + 16));
            op653 = *$tmp654;
            org$pandalanguage$pandac$IRNode** $tmp656 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            base655 = *$tmp656;
            panda$core$Bit $tmp658 = (($fn657) base655->$class->vtable[4])(base655);
            return $tmp658;
        }
        }
        else {
        panda$core$Bit $tmp659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp659.value) {
        {
            panda$core$String** $tmp661 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            label660 = *$tmp661;
            org$pandalanguage$pandac$IRNode** $tmp663 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            target662 = *$tmp663;
            org$pandalanguage$pandac$IRNode** $tmp665 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 32));
            list664 = *$tmp665;
            panda$collections$ImmutableArray** $tmp667 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 40));
            statements666 = *$tmp667;
            panda$core$Bit $tmp669 = (($fn668) list664->$class->vtable[4])(list664);
            if ($tmp669.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp671 = ((panda$collections$Iterable*) statements666)->$class->itable;
                while ($tmp671->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp671 = $tmp671->next;
                }
                $fn673 $tmp672 = $tmp671->methods[0];
                panda$collections$Iterator* $tmp674 = $tmp672(((panda$collections$Iterable*) statements666));
                s$Iter670 = $tmp674;
                $l675:;
                ITable* $tmp677 = s$Iter670->$class->itable;
                while ($tmp677->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp677 = $tmp677->next;
                }
                $fn679 $tmp678 = $tmp677->methods[0];
                panda$core$Bit $tmp680 = $tmp678(s$Iter670);
                panda$core$Bit $tmp681 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp680);
                if (!$tmp681.value) goto $l676;
                {
                    ITable* $tmp683 = s$Iter670->$class->itable;
                    while ($tmp683->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp683 = $tmp683->next;
                    }
                    $fn685 $tmp684 = $tmp683->methods[1];
                    panda$core$Object* $tmp686 = $tmp684(s$Iter670);
                    s682 = ((org$pandalanguage$pandac$IRNode*) $tmp686);
                    panda$core$Bit $tmp688 = (($fn687) s682->$class->vtable[4])(s682);
                    if ($tmp688.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l675;
                $l676:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp689.value) {
        {
            panda$core$Real64* $tmp691 = ((panda$core$Real64*) ((char*) $match$233_9373->$data + 24));
            value690 = *$tmp691;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp692.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp694 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            value693 = *$tmp694;
            panda$core$Bit $tmp696 = (($fn695) value693->$class->vtable[4])(value693);
            return $tmp696;
        }
        }
        else {
        panda$core$Bit $tmp697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp697.value) {
        {
            panda$core$Int64* $tmp699 = ((panda$core$Int64*) ((char*) $match$233_9373->$data + 24));
            id698 = *$tmp699;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp700.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp702 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 0));
            base701 = *$tmp702;
            panda$core$Int64* $tmp704 = ((panda$core$Int64*) ((char*) $match$233_9373->$data + 8));
            id703 = *$tmp704;
            panda$core$Bit $tmp706 = (($fn705) base701->$class->vtable[4])(base701);
            return $tmp706;
        }
        }
        else {
        panda$core$Bit $tmp707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp707.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp708.value) {
        {
            panda$core$String** $tmp710 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            str709 = *$tmp710;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp711.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp712.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp714 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            test713 = *$tmp714;
            org$pandalanguage$pandac$IRNode** $tmp716 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            ifTrue715 = *$tmp716;
            org$pandalanguage$pandac$IRNode** $tmp718 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 32));
            ifFalse717 = *$tmp718;
            panda$core$Bit $tmp722 = (($fn721) test713->$class->vtable[4])(test713);
            bool $tmp720 = $tmp722.value;
            if ($tmp720) goto $l723;
            panda$core$Bit $tmp725 = (($fn724) ifTrue715->$class->vtable[4])(ifTrue715);
            $tmp720 = $tmp725.value;
            $l723:;
            panda$core$Bit $tmp726 = { $tmp720 };
            bool $tmp719 = $tmp726.value;
            if ($tmp719) goto $l727;
            panda$core$Bit $tmp729 = (($fn728) ifFalse717->$class->vtable[4])(ifFalse717);
            $tmp719 = $tmp729.value;
            $l727:;
            panda$core$Bit $tmp730 = { $tmp719 };
            return $tmp730;
        }
        }
        else {
        panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp731.value) {
        {
            org$pandalanguage$pandac$Type** $tmp733 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9373->$data + 16));
            type732 = *$tmp733;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp734.value) {
        {
            panda$core$String** $tmp736 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            name735 = *$tmp736;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp737.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp739 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            base738 = *$tmp739;
            panda$collections$ImmutableArray** $tmp741 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 32));
            args740 = *$tmp741;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp742.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp744 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            target743 = *$tmp744;
            panda$collections$ImmutableArray** $tmp746 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 32));
            methods745 = *$tmp746;
            panda$collections$ImmutableArray** $tmp748 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 40));
            args747 = *$tmp748;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp749.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp751 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            target750 = *$tmp751;
            panda$collections$ImmutableArray** $tmp753 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 24));
            methods752 = *$tmp753;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp754.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp756 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 16));
            start755 = *$tmp756;
            org$pandalanguage$pandac$IRNode** $tmp758 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            end757 = *$tmp758;
            panda$core$Bit* $tmp760 = ((panda$core$Bit*) ((char*) $match$233_9373->$data + 32));
            inclusive759 = *$tmp760;
            org$pandalanguage$pandac$IRNode** $tmp762 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 33));
            step761 = *$tmp762;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp763.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp765 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$233_9373->$data + 16));
            kind764 = *$tmp765;
            panda$collections$ImmutableArray** $tmp767 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 24));
            decls766 = *$tmp767;
            {
                ITable* $tmp769 = ((panda$collections$Iterable*) decls766)->$class->itable;
                while ($tmp769->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp769 = $tmp769->next;
                }
                $fn771 $tmp770 = $tmp769->methods[0];
                panda$collections$Iterator* $tmp772 = $tmp770(((panda$collections$Iterable*) decls766));
                d$Iter768 = $tmp772;
                $l773:;
                ITable* $tmp775 = d$Iter768->$class->itable;
                while ($tmp775->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp775 = $tmp775->next;
                }
                $fn777 $tmp776 = $tmp775->methods[0];
                panda$core$Bit $tmp778 = $tmp776(d$Iter768);
                panda$core$Bit $tmp779 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp778);
                if (!$tmp779.value) goto $l774;
                {
                    ITable* $tmp781 = d$Iter768->$class->itable;
                    while ($tmp781->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp781 = $tmp781->next;
                    }
                    $fn783 $tmp782 = $tmp781->methods[1];
                    panda$core$Object* $tmp784 = $tmp782(d$Iter768);
                    d780 = ((org$pandalanguage$pandac$IRNode*) $tmp784);
                    panda$core$Bit $tmp786 = (($fn785) d780->$class->vtable[4])(d780);
                    if ($tmp786.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l773;
                $l774:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp787.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp789 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$233_9373->$data + 16));
            variable788 = *$tmp789;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp790.value) {
        {
            panda$collections$ImmutableArray** $tmp792 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 16));
            tests791 = *$tmp792;
            panda$collections$ImmutableArray** $tmp794 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 24));
            statements793 = *$tmp794;
            {
                ITable* $tmp796 = ((panda$collections$Iterable*) tests791)->$class->itable;
                while ($tmp796->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp796 = $tmp796->next;
                }
                $fn798 $tmp797 = $tmp796->methods[0];
                panda$collections$Iterator* $tmp799 = $tmp797(((panda$collections$Iterable*) tests791));
                t$Iter795 = $tmp799;
                $l800:;
                ITable* $tmp802 = t$Iter795->$class->itable;
                while ($tmp802->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp802 = $tmp802->next;
                }
                $fn804 $tmp803 = $tmp802->methods[0];
                panda$core$Bit $tmp805 = $tmp803(t$Iter795);
                panda$core$Bit $tmp806 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp805);
                if (!$tmp806.value) goto $l801;
                {
                    ITable* $tmp808 = t$Iter795->$class->itable;
                    while ($tmp808->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp808 = $tmp808->next;
                    }
                    $fn810 $tmp809 = $tmp808->methods[1];
                    panda$core$Object* $tmp811 = $tmp809(t$Iter795);
                    t807 = ((org$pandalanguage$pandac$IRNode*) $tmp811);
                    panda$core$Bit $tmp813 = (($fn812) t807->$class->vtable[4])(t807);
                    if ($tmp813.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l800;
                $l801:;
            }
            {
                ITable* $tmp815 = ((panda$collections$Iterable*) statements793)->$class->itable;
                while ($tmp815->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp815 = $tmp815->next;
                }
                $fn817 $tmp816 = $tmp815->methods[0];
                panda$collections$Iterator* $tmp818 = $tmp816(((panda$collections$Iterable*) statements793));
                s$Iter814 = $tmp818;
                $l819:;
                ITable* $tmp821 = s$Iter814->$class->itable;
                while ($tmp821->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp821 = $tmp821->next;
                }
                $fn823 $tmp822 = $tmp821->methods[0];
                panda$core$Bit $tmp824 = $tmp822(s$Iter814);
                panda$core$Bit $tmp825 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp824);
                if (!$tmp825.value) goto $l820;
                {
                    ITable* $tmp827 = s$Iter814->$class->itable;
                    while ($tmp827->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp827 = $tmp827->next;
                    }
                    $fn829 $tmp828 = $tmp827->methods[1];
                    panda$core$Object* $tmp830 = $tmp828(s$Iter814);
                    s826 = ((org$pandalanguage$pandac$IRNode*) $tmp830);
                    panda$core$Bit $tmp832 = (($fn831) s826->$class->vtable[4])(s826);
                    if ($tmp832.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l819;
                $l820:;
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9373->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp833.value) {
        {
            panda$core$String** $tmp835 = ((panda$core$String**) ((char*) $match$233_9373->$data + 16));
            label834 = *$tmp835;
            org$pandalanguage$pandac$IRNode** $tmp837 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9373->$data + 24));
            test836 = *$tmp837;
            panda$collections$ImmutableArray** $tmp839 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9373->$data + 32));
            statements838 = *$tmp839;
            panda$core$Bit $tmp841 = (($fn840) test836->$class->vtable[4])(test836);
            if ($tmp841.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp843 = ((panda$collections$Iterable*) statements838)->$class->itable;
                while ($tmp843->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp843 = $tmp843->next;
                }
                $fn845 $tmp844 = $tmp843->methods[0];
                panda$collections$Iterator* $tmp846 = $tmp844(((panda$collections$Iterable*) statements838));
                s$Iter842 = $tmp846;
                $l847:;
                ITable* $tmp849 = s$Iter842->$class->itable;
                while ($tmp849->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp849 = $tmp849->next;
                }
                $fn851 $tmp850 = $tmp849->methods[0];
                panda$core$Bit $tmp852 = $tmp850(s$Iter842);
                panda$core$Bit $tmp853 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp852);
                if (!$tmp853.value) goto $l848;
                {
                    ITable* $tmp855 = s$Iter842->$class->itable;
                    while ($tmp855->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp855 = $tmp855->next;
                    }
                    $fn857 $tmp856 = $tmp855->methods[1];
                    panda$core$Object* $tmp858 = $tmp856(s$Iter842);
                    s854 = ((org$pandalanguage$pandac$IRNode*) $tmp858);
                    panda$core$Bit $tmp860 = (($fn859) s854->$class->vtable[4])(s854);
                    if ($tmp860.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l847;
                $l848:;
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
    org$pandalanguage$pandac$IRNode* $match$410_9861;
    org$pandalanguage$pandac$IRNode* test863;
    org$pandalanguage$pandac$IRNode* msg865;
    org$pandalanguage$pandac$IRNode* left879;
    org$pandalanguage$pandac$parser$Token$Kind op881;
    org$pandalanguage$pandac$IRNode* right883;
    panda$core$Bit bit897;
    panda$collections$ImmutableArray* statements901;
    panda$core$MutableString* result903;
    panda$collections$Iterator* s$Iter907;
    org$pandalanguage$pandac$IRNode* s919;
    panda$core$Char8 $tmp926;
    panda$core$String* label929;
    org$pandalanguage$pandac$MethodRef* m937;
    panda$collections$ImmutableArray* args939;
    org$pandalanguage$pandac$IRNode* value949;
    org$pandalanguage$pandac$Type* type951;
    org$pandalanguage$pandac$ChoiceEntry* ce961;
    org$pandalanguage$pandac$IRNode* base965;
    org$pandalanguage$pandac$ChoiceEntry* ce967;
    panda$core$Int64 field969;
    org$pandalanguage$pandac$Type* type983;
    org$pandalanguage$pandac$IRNode* call985;
    org$pandalanguage$pandac$IRNode* $match$441_17987;
    panda$collections$ImmutableArray* args989;
    org$pandalanguage$pandac$Type* Type999;
    panda$core$String* label1003;
    org$pandalanguage$pandac$IRNode* target1011;
    org$pandalanguage$pandac$IRNode* value1013;
    panda$core$String* label1025;
    panda$collections$ImmutableArray* statements1027;
    org$pandalanguage$pandac$IRNode* test1029;
    panda$core$MutableString* result1031;
    panda$collections$Iterator* s$Iter1038;
    org$pandalanguage$pandac$IRNode* s1050;
    org$pandalanguage$pandac$IRNode* expr1063;
    org$pandalanguage$pandac$IRNode* stmt1065;
    org$pandalanguage$pandac$IRNode* base1075;
    org$pandalanguage$pandac$FieldDecl* field1077;
    org$pandalanguage$pandac$IRNode* test1087;
    panda$collections$ImmutableArray* ifTrue1089;
    org$pandalanguage$pandac$IRNode* ifFalse1091;
    panda$core$MutableString* result1093;
    panda$collections$Iterator* s$Iter1100;
    org$pandalanguage$pandac$IRNode* s1112;
    panda$core$Char8 $tmp1119;
    panda$core$UInt64 value1126;
    org$pandalanguage$pandac$IRNode* value1130;
    org$pandalanguage$pandac$IRNode* value1137;
    panda$core$String* label1144;
    panda$collections$ImmutableArray* statements1146;
    panda$core$MutableString* result1148;
    panda$collections$Iterator* s$Iter1155;
    org$pandalanguage$pandac$IRNode* s1167;
    panda$core$Char8 $tmp1174;
    org$pandalanguage$pandac$IRNode* value1177;
    panda$collections$ImmutableArray* whens1179;
    panda$collections$ImmutableArray* other1181;
    panda$core$MutableString* result1183;
    panda$collections$Iterator* w$Iter1190;
    org$pandalanguage$pandac$IRNode* w1202;
    panda$collections$Iterator* s$Iter1210;
    org$pandalanguage$pandac$IRNode* s1222;
    panda$core$Char8 $tmp1229;
    org$pandalanguage$pandac$IRNode* target1232;
    org$pandalanguage$pandac$MethodRef* m1234;
    panda$core$UInt64 value1244;
    org$pandalanguage$pandac$parser$Token$Kind op1252;
    org$pandalanguage$pandac$IRNode* base1254;
    panda$core$String* label1265;
    org$pandalanguage$pandac$IRNode* target1267;
    org$pandalanguage$pandac$IRNode* list1269;
    panda$collections$ImmutableArray* statements1271;
    panda$core$MutableString* result1273;
    panda$collections$Iterator* s$Iter1286;
    org$pandalanguage$pandac$IRNode* s1298;
    panda$core$Char8 $tmp1305;
    panda$core$Real64 value1308;
    org$pandalanguage$pandac$IRNode* value1312;
    org$pandalanguage$pandac$Type* type1320;
    panda$core$Int64 id1322;
    org$pandalanguage$pandac$IRNode* base1333;
    panda$core$Int64 id1335;
    panda$core$String* str1348;
    org$pandalanguage$pandac$IRNode* test1353;
    org$pandalanguage$pandac$IRNode* ifTrue1355;
    org$pandalanguage$pandac$IRNode* ifFalse1357;
    org$pandalanguage$pandac$Type* type1370;
    panda$core$String* name1374;
    org$pandalanguage$pandac$IRNode* base1377;
    panda$collections$ImmutableArray* args1379;
    org$pandalanguage$pandac$IRNode* target1390;
    panda$collections$ImmutableArray* methods1392;
    panda$collections$ImmutableArray* args1394;
    org$pandalanguage$pandac$IRNode* target1409;
    panda$collections$ImmutableArray* methods1411;
    org$pandalanguage$pandac$IRNode* start1422;
    org$pandalanguage$pandac$IRNode* end1424;
    panda$core$Bit inclusive1426;
    org$pandalanguage$pandac$IRNode* step1428;
    panda$core$MutableString* result1430;
    org$pandalanguage$pandac$Variable$Kind kind1441;
    panda$collections$ImmutableArray* decls1443;
    panda$core$MutableString* result1445;
    org$pandalanguage$pandac$Variable$Kind $match$585_171448;
    org$pandalanguage$pandac$Variable* variable1460;
    panda$collections$ImmutableArray* tests1463;
    panda$collections$ImmutableArray* statements1465;
    panda$core$String* label1478;
    org$pandalanguage$pandac$IRNode* test1480;
    panda$collections$ImmutableArray* statements1482;
    panda$core$MutableString* result1484;
    panda$collections$Iterator* s$Iter1494;
    org$pandalanguage$pandac$IRNode* s1506;
    panda$core$Char8 $tmp1513;
    {
        $match$410_9861 = self;
        panda$core$Bit $tmp862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp862.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp864 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            test863 = *$tmp864;
            org$pandalanguage$pandac$IRNode** $tmp866 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            msg865 = *$tmp866;
            if (((panda$core$Bit) { msg865 != NULL }).value) {
            {
                panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s867, ((panda$core$Object*) test863));
                panda$core$String* $tmp870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp868, &$s869);
                panda$core$String* $tmp871 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp870, ((panda$core$Object*) msg865));
                panda$core$String* $tmp873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp871, &$s872);
                return $tmp873;
            }
            }
            panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s874, ((panda$core$Object*) test863));
            panda$core$String* $tmp877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp875, &$s876);
            return $tmp877;
        }
        }
        else {
        panda$core$Bit $tmp878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp878.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp880 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            left879 = *$tmp880;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp882 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$410_9861->$data + 32));
            op881 = *$tmp882;
            org$pandalanguage$pandac$IRNode** $tmp884 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 40));
            right883 = *$tmp884;
            panda$core$String* $tmp886 = (($fn885) left879->$class->vtable[0])(left879);
            panda$core$String* $tmp888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp886, &$s887);
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp889;
            $tmp889 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaZAlloc(24);
            $tmp889->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp889->refCount = 1;
            $tmp889->value = op881;
            panda$core$String* $tmp890 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp888, ((panda$core$Object*) $tmp889));
            panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp890, &$s891);
            panda$core$String* $tmp893 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp892, ((panda$core$Object*) right883));
            panda$core$String* $tmp895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp893, &$s894);
            return $tmp895;
        }
        }
        else {
        panda$core$Bit $tmp896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp896.value) {
        {
            panda$core$Bit* $tmp898 = ((panda$core$Bit*) ((char*) $match$410_9861->$data + 24));
            bit897 = *$tmp898;
            panda$core$String* $tmp899 = panda$core$Bit$convert$R$panda$core$String(bit897);
            return $tmp899;
        }
        }
        else {
        panda$core$Bit $tmp900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp900.value) {
        {
            panda$collections$ImmutableArray** $tmp902 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 16));
            statements901 = *$tmp902;
            panda$core$MutableString* $tmp904 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp904->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp904->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp904, &$s906);
            result903 = $tmp904;
            {
                ITable* $tmp908 = ((panda$collections$Iterable*) statements901)->$class->itable;
                while ($tmp908->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp908 = $tmp908->next;
                }
                $fn910 $tmp909 = $tmp908->methods[0];
                panda$collections$Iterator* $tmp911 = $tmp909(((panda$collections$Iterable*) statements901));
                s$Iter907 = $tmp911;
                $l912:;
                ITable* $tmp914 = s$Iter907->$class->itable;
                while ($tmp914->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp914 = $tmp914->next;
                }
                $fn916 $tmp915 = $tmp914->methods[0];
                panda$core$Bit $tmp917 = $tmp915(s$Iter907);
                panda$core$Bit $tmp918 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp917);
                if (!$tmp918.value) goto $l913;
                {
                    ITable* $tmp920 = s$Iter907->$class->itable;
                    while ($tmp920->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp920 = $tmp920->next;
                    }
                    $fn922 $tmp921 = $tmp920->methods[1];
                    panda$core$Object* $tmp923 = $tmp921(s$Iter907);
                    s919 = ((org$pandalanguage$pandac$IRNode*) $tmp923);
                    panda$core$String* $tmp925 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s919), &$s924);
                    panda$core$MutableString$append$panda$core$String(result903, $tmp925);
                }
                goto $l912;
                $l913:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp926, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result903, $tmp926);
            panda$core$String* $tmp927 = panda$core$MutableString$finish$R$panda$core$String(result903);
            return $tmp927;
        }
        }
        else {
        panda$core$Bit $tmp928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp928.value) {
        {
            panda$core$String** $tmp930 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label929 = *$tmp930;
            if (((panda$core$Bit) { label929 != NULL }).value) {
            {
                panda$core$String* $tmp932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s931, label929);
                panda$core$String* $tmp934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp932, &$s933);
                return $tmp934;
            }
            }
            return &$s935;
        }
        }
        else {
        panda$core$Bit $tmp936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp936.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp938 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$410_9861->$data + 24));
            m937 = *$tmp938;
            panda$collections$ImmutableArray** $tmp940 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 32));
            args939 = *$tmp940;
            panda$core$String* $tmp941 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m937->value)->name);
            panda$core$String* $tmp943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp941, &$s942);
            panda$core$String* $tmp944 = panda$collections$ImmutableArray$join$R$panda$core$String(args939);
            panda$core$String* $tmp945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp943, $tmp944);
            panda$core$String* $tmp947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp945, &$s946);
            return $tmp947;
        }
        }
        else {
        panda$core$Bit $tmp948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp948.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp950 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            value949 = *$tmp950;
            org$pandalanguage$pandac$Type** $tmp952 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9861->$data + 24));
            type951 = *$tmp952;
            panda$core$String* $tmp954 = (($fn953) value949->$class->vtable[0])(value949);
            panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp954, &$s955);
            panda$core$String* $tmp957 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp956, ((panda$core$Object*) type951));
            panda$core$String* $tmp959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp957, &$s958);
            return $tmp959;
        }
        }
        else {
        panda$core$Bit $tmp960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp960.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp962 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$410_9861->$data + 16));
            ce961 = *$tmp962;
            panda$core$String* $tmp963 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce961);
            return $tmp963;
        }
        }
        else {
        panda$core$Bit $tmp964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp964.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp966 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            base965 = *$tmp966;
            org$pandalanguage$pandac$ChoiceEntry** $tmp968 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$410_9861->$data + 24));
            ce967 = *$tmp968;
            panda$core$Int64* $tmp970 = ((panda$core$Int64*) ((char*) $match$410_9861->$data + 32));
            field969 = *$tmp970;
            panda$core$String* $tmp972 = (($fn971) base965->$class->vtable[0])(base965);
            panda$core$String* $tmp974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp972, &$s973);
            panda$core$String* $tmp975 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp974, ((panda$core$Object*) ce967));
            panda$core$String* $tmp977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp975, &$s976);
            panda$core$Int64$wrapper* $tmp978;
            $tmp978 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp978->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp978->refCount = 1;
            $tmp978->value = field969;
            panda$core$String* $tmp979 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp977, ((panda$core$Object*) $tmp978));
            panda$core$String* $tmp981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp979, &$s980);
            return $tmp981;
        }
        }
        else {
        panda$core$Bit $tmp982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp982.value) {
        {
            org$pandalanguage$pandac$Type** $tmp984 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9861->$data + 16));
            type983 = *$tmp984;
            org$pandalanguage$pandac$IRNode** $tmp986 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            call985 = *$tmp986;
            {
                $match$441_17987 = call985;
                panda$core$Bit $tmp988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_17987->$rawValue, ((panda$core$Int64) { 5 }));
                if ($tmp988.value) {
                {
                    panda$collections$ImmutableArray** $tmp990 = ((panda$collections$ImmutableArray**) ((char*) $match$441_17987->$data + 32));
                    args989 = *$tmp990;
                    panda$core$String* $tmp991 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type983);
                    panda$core$String* $tmp993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp991, &$s992);
                    panda$core$String* $tmp994 = panda$collections$ImmutableArray$join$R$panda$core$String(args989);
                    panda$core$String* $tmp995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp993, $tmp994);
                    panda$core$String* $tmp997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp995, &$s996);
                    return $tmp997;
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
        panda$core$Bit $tmp998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp998.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1000 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9861->$data + 16));
            Type999 = *$tmp1000;
            return &$s1001;
        }
        }
        else {
        panda$core$Bit $tmp1002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1002.value) {
        {
            panda$core$String** $tmp1004 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label1003 = *$tmp1004;
            if (((panda$core$Bit) { label1003 != NULL }).value) {
            {
                panda$core$String* $tmp1006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1005, label1003);
                panda$core$String* $tmp1008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1006, &$s1007);
                return $tmp1008;
            }
            }
            return &$s1009;
        }
        }
        else {
        panda$core$Bit $tmp1010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1010.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1012 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 0));
            target1011 = *$tmp1012;
            org$pandalanguage$pandac$IRNode** $tmp1014 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 8));
            value1013 = *$tmp1014;
            if (((panda$core$Bit) { value1013 != NULL }).value) {
            {
                panda$core$String* $tmp1016 = (($fn1015) target1011->$class->vtable[0])(target1011);
                panda$core$String* $tmp1018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1016, &$s1017);
                panda$core$String* $tmp1019 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1018, ((panda$core$Object*) value1013));
                panda$core$String* $tmp1021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1019, &$s1020);
                return $tmp1021;
            }
            }
            panda$core$String* $tmp1023 = (($fn1022) target1011->$class->vtable[0])(target1011);
            return $tmp1023;
        }
        }
        else {
        panda$core$Bit $tmp1024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1024.value) {
        {
            panda$core$String** $tmp1026 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label1025 = *$tmp1026;
            panda$collections$ImmutableArray** $tmp1028 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            statements1027 = *$tmp1028;
            org$pandalanguage$pandac$IRNode** $tmp1030 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 32));
            test1029 = *$tmp1030;
            panda$core$MutableString* $tmp1032 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1032->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1032->refCount.value = 1;
            panda$core$MutableString$init($tmp1032);
            result1031 = $tmp1032;
            if (((panda$core$Bit) { label1025 != NULL }).value) {
            {
                panda$core$String* $tmp1034 = panda$core$String$convert$R$panda$core$String(label1025);
                panda$core$String* $tmp1036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1034, &$s1035);
                panda$core$MutableString$append$panda$core$String(result1031, $tmp1036);
            }
            }
            panda$core$MutableString$append$panda$core$String(result1031, &$s1037);
            {
                ITable* $tmp1039 = ((panda$collections$Iterable*) statements1027)->$class->itable;
                while ($tmp1039->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1039 = $tmp1039->next;
                }
                $fn1041 $tmp1040 = $tmp1039->methods[0];
                panda$collections$Iterator* $tmp1042 = $tmp1040(((panda$collections$Iterable*) statements1027));
                s$Iter1038 = $tmp1042;
                $l1043:;
                ITable* $tmp1045 = s$Iter1038->$class->itable;
                while ($tmp1045->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1045 = $tmp1045->next;
                }
                $fn1047 $tmp1046 = $tmp1045->methods[0];
                panda$core$Bit $tmp1048 = $tmp1046(s$Iter1038);
                panda$core$Bit $tmp1049 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1048);
                if (!$tmp1049.value) goto $l1044;
                {
                    ITable* $tmp1051 = s$Iter1038->$class->itable;
                    while ($tmp1051->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1051 = $tmp1051->next;
                    }
                    $fn1053 $tmp1052 = $tmp1051->methods[1];
                    panda$core$Object* $tmp1054 = $tmp1052(s$Iter1038);
                    s1050 = ((org$pandalanguage$pandac$IRNode*) $tmp1054);
                    panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1050), &$s1055);
                    panda$core$MutableString$append$panda$core$String(result1031, $tmp1056);
                }
                goto $l1043;
                $l1044:;
            }
            panda$core$String* $tmp1058 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1057, ((panda$core$Object*) test1029));
            panda$core$String* $tmp1060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1058, &$s1059);
            panda$core$MutableString$append$panda$core$String(result1031, $tmp1060);
            panda$core$String* $tmp1061 = panda$core$MutableString$finish$R$panda$core$String(result1031);
            return $tmp1061;
        }
        }
        else {
        panda$core$Bit $tmp1062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1062.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1064 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 0));
            expr1063 = *$tmp1064;
            org$pandalanguage$pandac$IRNode** $tmp1066 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 8));
            stmt1065 = *$tmp1066;
            panda$core$String* $tmp1068 = (($fn1067) expr1063->$class->vtable[0])(expr1063);
            panda$core$String* $tmp1070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1068, &$s1069);
            panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1070, ((panda$core$Object*) stmt1065));
            panda$core$String* $tmp1073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1071, &$s1072);
            return $tmp1073;
        }
        }
        else {
        panda$core$Bit $tmp1074 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1074.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1076 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            base1075 = *$tmp1076;
            org$pandalanguage$pandac$FieldDecl** $tmp1078 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$410_9861->$data + 32));
            field1077 = *$tmp1078;
            panda$core$String* $tmp1080 = (($fn1079) base1075->$class->vtable[0])(base1075);
            panda$core$String* $tmp1082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1080, &$s1081);
            panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1082, ((org$pandalanguage$pandac$Symbol*) field1077)->name);
            panda$core$String* $tmp1085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1083, &$s1084);
            return $tmp1085;
        }
        }
        else {
        panda$core$Bit $tmp1086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1086.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1088 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            test1087 = *$tmp1088;
            panda$collections$ImmutableArray** $tmp1090 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            ifTrue1089 = *$tmp1090;
            org$pandalanguage$pandac$IRNode** $tmp1092 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 32));
            ifFalse1091 = *$tmp1092;
            panda$core$MutableString* $tmp1094 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1094->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1094->refCount.value = 1;
            panda$core$String* $tmp1097 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1096, ((panda$core$Object*) test1087));
            panda$core$String* $tmp1099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1097, &$s1098);
            panda$core$MutableString$init$panda$core$String($tmp1094, $tmp1099);
            result1093 = $tmp1094;
            {
                ITable* $tmp1101 = ((panda$collections$Iterable*) ifTrue1089)->$class->itable;
                while ($tmp1101->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1101 = $tmp1101->next;
                }
                $fn1103 $tmp1102 = $tmp1101->methods[0];
                panda$collections$Iterator* $tmp1104 = $tmp1102(((panda$collections$Iterable*) ifTrue1089));
                s$Iter1100 = $tmp1104;
                $l1105:;
                ITable* $tmp1107 = s$Iter1100->$class->itable;
                while ($tmp1107->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1107 = $tmp1107->next;
                }
                $fn1109 $tmp1108 = $tmp1107->methods[0];
                panda$core$Bit $tmp1110 = $tmp1108(s$Iter1100);
                panda$core$Bit $tmp1111 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1110);
                if (!$tmp1111.value) goto $l1106;
                {
                    ITable* $tmp1113 = s$Iter1100->$class->itable;
                    while ($tmp1113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1113 = $tmp1113->next;
                    }
                    $fn1115 $tmp1114 = $tmp1113->methods[1];
                    panda$core$Object* $tmp1116 = $tmp1114(s$Iter1100);
                    s1112 = ((org$pandalanguage$pandac$IRNode*) $tmp1116);
                    panda$core$String* $tmp1118 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1112), &$s1117);
                    panda$core$MutableString$append$panda$core$String(result1093, $tmp1118);
                }
                goto $l1105;
                $l1106:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1119, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1093, $tmp1119);
            if (((panda$core$Bit) { ifFalse1091 != NULL }).value) {
            {
                panda$core$String* $tmp1121 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1120, ((panda$core$Object*) ifFalse1091));
                panda$core$String* $tmp1123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1121, &$s1122);
                panda$core$MutableString$append$panda$core$String(result1093, $tmp1123);
            }
            }
            panda$core$String* $tmp1124 = panda$core$MutableString$finish$R$panda$core$String(result1093);
            return $tmp1124;
        }
        }
        else {
        panda$core$Bit $tmp1125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1125.value) {
        {
            panda$core$UInt64* $tmp1127 = ((panda$core$UInt64*) ((char*) $match$410_9861->$data + 24));
            value1126 = *$tmp1127;
            panda$core$String* $tmp1128 = panda$core$UInt64$convert$R$panda$core$String(value1126);
            return $tmp1128;
        }
        }
        else {
        panda$core$Bit $tmp1129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1129.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1131 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            value1130 = *$tmp1131;
            panda$core$String* $tmp1133 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1132, ((panda$core$Object*) value1130));
            panda$core$String* $tmp1135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1133, &$s1134);
            return $tmp1135;
        }
        }
        else {
        panda$core$Bit $tmp1136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1136.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1138 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            value1137 = *$tmp1138;
            panda$core$String* $tmp1140 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1139, ((panda$core$Object*) value1137));
            panda$core$String* $tmp1142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1140, &$s1141);
            return $tmp1142;
        }
        }
        else {
        panda$core$Bit $tmp1143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1143.value) {
        {
            panda$core$String** $tmp1145 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label1144 = *$tmp1145;
            panda$collections$ImmutableArray** $tmp1147 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            statements1146 = *$tmp1147;
            panda$core$MutableString* $tmp1149 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1149->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1149->refCount.value = 1;
            panda$core$MutableString$init($tmp1149);
            result1148 = $tmp1149;
            if (((panda$core$Bit) { label1144 != NULL }).value) {
            {
                panda$core$String* $tmp1151 = panda$core$String$convert$R$panda$core$String(label1144);
                panda$core$String* $tmp1153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1151, &$s1152);
                panda$core$MutableString$append$panda$core$String(result1148, $tmp1153);
            }
            }
            panda$core$MutableString$append$panda$core$String(result1148, &$s1154);
            {
                ITable* $tmp1156 = ((panda$collections$Iterable*) statements1146)->$class->itable;
                while ($tmp1156->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1156 = $tmp1156->next;
                }
                $fn1158 $tmp1157 = $tmp1156->methods[0];
                panda$collections$Iterator* $tmp1159 = $tmp1157(((panda$collections$Iterable*) statements1146));
                s$Iter1155 = $tmp1159;
                $l1160:;
                ITable* $tmp1162 = s$Iter1155->$class->itable;
                while ($tmp1162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1162 = $tmp1162->next;
                }
                $fn1164 $tmp1163 = $tmp1162->methods[0];
                panda$core$Bit $tmp1165 = $tmp1163(s$Iter1155);
                panda$core$Bit $tmp1166 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1165);
                if (!$tmp1166.value) goto $l1161;
                {
                    ITable* $tmp1168 = s$Iter1155->$class->itable;
                    while ($tmp1168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1168 = $tmp1168->next;
                    }
                    $fn1170 $tmp1169 = $tmp1168->methods[1];
                    panda$core$Object* $tmp1171 = $tmp1169(s$Iter1155);
                    s1167 = ((org$pandalanguage$pandac$IRNode*) $tmp1171);
                    panda$core$String* $tmp1173 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1167), &$s1172);
                    panda$core$MutableString$append$panda$core$String(result1148, $tmp1173);
                }
                goto $l1160;
                $l1161:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1174, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1148, $tmp1174);
            panda$core$String* $tmp1175 = panda$core$MutableString$finish$R$panda$core$String(result1148);
            return $tmp1175;
        }
        }
        else {
        panda$core$Bit $tmp1176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1176.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1178 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            value1177 = *$tmp1178;
            panda$collections$ImmutableArray** $tmp1180 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            whens1179 = *$tmp1180;
            panda$collections$ImmutableArray** $tmp1182 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 32));
            other1181 = *$tmp1182;
            panda$core$MutableString* $tmp1184 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1184->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1184->refCount.value = 1;
            panda$core$String* $tmp1187 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1186, ((panda$core$Object*) value1177));
            panda$core$String* $tmp1189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1187, &$s1188);
            panda$core$MutableString$init$panda$core$String($tmp1184, $tmp1189);
            result1183 = $tmp1184;
            {
                ITable* $tmp1191 = ((panda$collections$Iterable*) whens1179)->$class->itable;
                while ($tmp1191->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1191 = $tmp1191->next;
                }
                $fn1193 $tmp1192 = $tmp1191->methods[0];
                panda$collections$Iterator* $tmp1194 = $tmp1192(((panda$collections$Iterable*) whens1179));
                w$Iter1190 = $tmp1194;
                $l1195:;
                ITable* $tmp1197 = w$Iter1190->$class->itable;
                while ($tmp1197->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1197 = $tmp1197->next;
                }
                $fn1199 $tmp1198 = $tmp1197->methods[0];
                panda$core$Bit $tmp1200 = $tmp1198(w$Iter1190);
                panda$core$Bit $tmp1201 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1200);
                if (!$tmp1201.value) goto $l1196;
                {
                    ITable* $tmp1203 = w$Iter1190->$class->itable;
                    while ($tmp1203->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1203 = $tmp1203->next;
                    }
                    $fn1205 $tmp1204 = $tmp1203->methods[1];
                    panda$core$Object* $tmp1206 = $tmp1204(w$Iter1190);
                    w1202 = ((org$pandalanguage$pandac$IRNode*) $tmp1206);
                    panda$core$String* $tmp1208 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1202), &$s1207);
                    panda$core$MutableString$append$panda$core$String(result1183, $tmp1208);
                }
                goto $l1195;
                $l1196:;
            }
            if (((panda$core$Bit) { other1181 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result1183, &$s1209);
                {
                    ITable* $tmp1211 = ((panda$collections$Iterable*) other1181)->$class->itable;
                    while ($tmp1211->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1211 = $tmp1211->next;
                    }
                    $fn1213 $tmp1212 = $tmp1211->methods[0];
                    panda$collections$Iterator* $tmp1214 = $tmp1212(((panda$collections$Iterable*) other1181));
                    s$Iter1210 = $tmp1214;
                    $l1215:;
                    ITable* $tmp1217 = s$Iter1210->$class->itable;
                    while ($tmp1217->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1217 = $tmp1217->next;
                    }
                    $fn1219 $tmp1218 = $tmp1217->methods[0];
                    panda$core$Bit $tmp1220 = $tmp1218(s$Iter1210);
                    panda$core$Bit $tmp1221 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1220);
                    if (!$tmp1221.value) goto $l1216;
                    {
                        ITable* $tmp1223 = s$Iter1210->$class->itable;
                        while ($tmp1223->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1223 = $tmp1223->next;
                        }
                        $fn1225 $tmp1224 = $tmp1223->methods[1];
                        panda$core$Object* $tmp1226 = $tmp1224(s$Iter1210);
                        s1222 = ((org$pandalanguage$pandac$IRNode*) $tmp1226);
                        panda$core$String* $tmp1228 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1222), &$s1227);
                        panda$core$MutableString$append$panda$core$String(result1183, $tmp1228);
                    }
                    goto $l1215;
                    $l1216:;
                }
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1229, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1183, $tmp1229);
            panda$core$String* $tmp1230 = panda$core$MutableString$finish$R$panda$core$String(result1183);
            return $tmp1230;
        }
        }
        else {
        panda$core$Bit $tmp1231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1231.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1233 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            target1232 = *$tmp1233;
            org$pandalanguage$pandac$MethodRef** $tmp1235 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$410_9861->$data + 24));
            m1234 = *$tmp1235;
            if (((panda$core$Bit) { target1232 != NULL }).value) {
            {
                panda$core$String* $tmp1237 = (($fn1236) target1232->$class->vtable[0])(target1232);
                panda$core$String* $tmp1239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1237, &$s1238);
                panda$core$String* $tmp1240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1239, ((org$pandalanguage$pandac$Symbol*) m1234->value)->name);
                panda$core$String* $tmp1242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1240, &$s1241);
                return $tmp1242;
            }
            }
            return ((org$pandalanguage$pandac$Symbol*) m1234->value)->name;
        }
        }
        else {
        panda$core$Bit $tmp1243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1243.value) {
        {
            panda$core$UInt64* $tmp1245 = ((panda$core$UInt64*) ((char*) $match$410_9861->$data + 24));
            value1244 = *$tmp1245;
            panda$core$UInt64$wrapper* $tmp1247;
            $tmp1247 = (panda$core$UInt64$wrapper*) pandaZAlloc(24);
            $tmp1247->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
            $tmp1247->refCount = 1;
            $tmp1247->value = value1244;
            panda$core$String* $tmp1248 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1246, ((panda$core$Object*) $tmp1247));
            return $tmp1248;
        }
        }
        else {
        panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1249.value) {
        {
            return &$s1250;
        }
        }
        else {
        panda$core$Bit $tmp1251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1251.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1253 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$410_9861->$data + 16));
            op1252 = *$tmp1253;
            org$pandalanguage$pandac$IRNode** $tmp1255 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            base1254 = *$tmp1255;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1256;
            $tmp1256 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaZAlloc(24);
            $tmp1256->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp1256->refCount = 1;
            $tmp1256->value = op1252;
            panda$core$String* $tmp1258 = (($fn1257) ((panda$core$Object*) $tmp1256)->$class->vtable[0])(((panda$core$Object*) $tmp1256));
            panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1258, &$s1259);
            panda$core$String* $tmp1261 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1260, ((panda$core$Object*) base1254));
            panda$core$String* $tmp1263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1261, &$s1262);
            return $tmp1263;
        }
        }
        else {
        panda$core$Bit $tmp1264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1264.value) {
        {
            panda$core$String** $tmp1266 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label1265 = *$tmp1266;
            org$pandalanguage$pandac$IRNode** $tmp1268 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            target1267 = *$tmp1268;
            org$pandalanguage$pandac$IRNode** $tmp1270 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 32));
            list1269 = *$tmp1270;
            panda$collections$ImmutableArray** $tmp1272 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 40));
            statements1271 = *$tmp1272;
            panda$core$MutableString* $tmp1274 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1274->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1274->refCount.value = 1;
            panda$core$MutableString$init($tmp1274);
            result1273 = $tmp1274;
            if (((panda$core$Bit) { label1265 != NULL }).value) {
            {
                panda$core$String* $tmp1276 = panda$core$String$convert$R$panda$core$String(label1265);
                panda$core$String* $tmp1278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1276, &$s1277);
                panda$core$MutableString$append$panda$core$String(result1273, $tmp1278);
            }
            }
            panda$core$String* $tmp1280 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1279, ((panda$core$Object*) target1267));
            panda$core$String* $tmp1282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1280, &$s1281);
            panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1282, ((panda$core$Object*) list1269));
            panda$core$String* $tmp1285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1283, &$s1284);
            panda$core$MutableString$append$panda$core$String(result1273, $tmp1285);
            {
                ITable* $tmp1287 = ((panda$collections$Iterable*) statements1271)->$class->itable;
                while ($tmp1287->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1287 = $tmp1287->next;
                }
                $fn1289 $tmp1288 = $tmp1287->methods[0];
                panda$collections$Iterator* $tmp1290 = $tmp1288(((panda$collections$Iterable*) statements1271));
                s$Iter1286 = $tmp1290;
                $l1291:;
                ITable* $tmp1293 = s$Iter1286->$class->itable;
                while ($tmp1293->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1293 = $tmp1293->next;
                }
                $fn1295 $tmp1294 = $tmp1293->methods[0];
                panda$core$Bit $tmp1296 = $tmp1294(s$Iter1286);
                panda$core$Bit $tmp1297 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1296);
                if (!$tmp1297.value) goto $l1292;
                {
                    ITable* $tmp1299 = s$Iter1286->$class->itable;
                    while ($tmp1299->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1299 = $tmp1299->next;
                    }
                    $fn1301 $tmp1300 = $tmp1299->methods[1];
                    panda$core$Object* $tmp1302 = $tmp1300(s$Iter1286);
                    s1298 = ((org$pandalanguage$pandac$IRNode*) $tmp1302);
                    panda$core$String* $tmp1304 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1298), &$s1303);
                    panda$core$MutableString$append$panda$core$String(result1273, $tmp1304);
                }
                goto $l1291;
                $l1292:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1305, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1273, $tmp1305);
            panda$core$String* $tmp1306 = panda$core$MutableString$finish$R$panda$core$String(result1273);
            return $tmp1306;
        }
        }
        else {
        panda$core$Bit $tmp1307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1307.value) {
        {
            panda$core$Real64* $tmp1309 = ((panda$core$Real64*) ((char*) $match$410_9861->$data + 24));
            value1308 = *$tmp1309;
            panda$core$String* $tmp1310 = panda$core$Real64$convert$R$panda$core$String(value1308);
            return $tmp1310;
        }
        }
        else {
        panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1311.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1313 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            value1312 = *$tmp1313;
            if (((panda$core$Bit) { value1312 != NULL }).value) {
            {
                panda$core$String* $tmp1315 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1314, ((panda$core$Object*) value1312));
                panda$core$String* $tmp1317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1315, &$s1316);
                return $tmp1317;
            }
            }
            return &$s1318;
        }
        }
        else {
        panda$core$Bit $tmp1319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1319.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1321 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9861->$data + 16));
            type1320 = *$tmp1321;
            panda$core$Int64* $tmp1323 = ((panda$core$Int64*) ((char*) $match$410_9861->$data + 24));
            id1322 = *$tmp1323;
            panda$core$Int64$wrapper* $tmp1325;
            $tmp1325 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1325->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1325->refCount = 1;
            $tmp1325->value = id1322;
            panda$core$String* $tmp1326 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1324, ((panda$core$Object*) $tmp1325));
            panda$core$String* $tmp1328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1326, &$s1327);
            panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1328, ((panda$core$Object*) type1320));
            panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1329, &$s1330);
            return $tmp1331;
        }
        }
        else {
        panda$core$Bit $tmp1332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1332.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1334 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 0));
            base1333 = *$tmp1334;
            panda$core$Int64* $tmp1336 = ((panda$core$Int64*) ((char*) $match$410_9861->$data + 8));
            id1335 = *$tmp1336;
            panda$core$Int64$wrapper* $tmp1338;
            $tmp1338 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1338->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1338->refCount = 1;
            $tmp1338->value = id1335;
            panda$core$String* $tmp1339 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1337, ((panda$core$Object*) $tmp1338));
            panda$core$String* $tmp1341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1339, &$s1340);
            panda$core$String* $tmp1342 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1341, ((panda$core$Object*) base1333));
            panda$core$String* $tmp1344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1342, &$s1343);
            return $tmp1344;
        }
        }
        else {
        panda$core$Bit $tmp1345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1345.value) {
        {
            return &$s1346;
        }
        }
        else {
        panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1347.value) {
        {
            panda$core$String** $tmp1349 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            str1348 = *$tmp1349;
            return str1348;
        }
        }
        else {
        panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1350.value) {
        {
            return &$s1351;
        }
        }
        else {
        panda$core$Bit $tmp1352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1352.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1354 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            test1353 = *$tmp1354;
            org$pandalanguage$pandac$IRNode** $tmp1356 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            ifTrue1355 = *$tmp1356;
            org$pandalanguage$pandac$IRNode** $tmp1358 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 32));
            ifFalse1357 = *$tmp1358;
            panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1359, ((panda$core$Object*) test1353));
            panda$core$String* $tmp1362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1360, &$s1361);
            panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1362, ((panda$core$Object*) ifTrue1355));
            panda$core$String* $tmp1365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1363, &$s1364);
            panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1365, ((panda$core$Object*) ifFalse1357));
            panda$core$String* $tmp1368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1366, &$s1367);
            return $tmp1368;
        }
        }
        else {
        panda$core$Bit $tmp1369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1369.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1371 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9861->$data + 16));
            type1370 = *$tmp1371;
            panda$core$String* $tmp1372 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1370);
            return $tmp1372;
        }
        }
        else {
        panda$core$Bit $tmp1373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1373.value) {
        {
            panda$core$String** $tmp1375 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            name1374 = *$tmp1375;
            return name1374;
        }
        }
        else {
        panda$core$Bit $tmp1376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1376.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1378 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            base1377 = *$tmp1378;
            panda$collections$ImmutableArray** $tmp1380 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 32));
            args1379 = *$tmp1380;
            panda$core$String* $tmp1382 = (($fn1381) base1377->$class->vtable[0])(base1377);
            panda$core$String* $tmp1384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1382, &$s1383);
            panda$core$String* $tmp1385 = panda$collections$ImmutableArray$join$R$panda$core$String(args1379);
            panda$core$String* $tmp1386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1384, $tmp1385);
            panda$core$String* $tmp1388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1386, &$s1387);
            return $tmp1388;
        }
        }
        else {
        panda$core$Bit $tmp1389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1389.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1391 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            target1390 = *$tmp1391;
            panda$collections$ImmutableArray** $tmp1393 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 32));
            methods1392 = *$tmp1393;
            panda$collections$ImmutableArray** $tmp1395 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 40));
            args1394 = *$tmp1395;
            panda$core$String* $tmp1397 = (($fn1396) target1390->$class->vtable[0])(target1390);
            panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1397, &$s1398);
            panda$core$Object* $tmp1400 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods1392, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1399, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp1400)->value)->name);
            panda$core$String* $tmp1403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1401, &$s1402);
            panda$core$String* $tmp1404 = panda$collections$ImmutableArray$join$R$panda$core$String(args1394);
            panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1403, $tmp1404);
            panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1405, &$s1406);
            return $tmp1407;
        }
        }
        else {
        panda$core$Bit $tmp1408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1408.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1410 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            target1409 = *$tmp1410;
            panda$collections$ImmutableArray** $tmp1412 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            methods1411 = *$tmp1412;
            panda$core$String* $tmp1414 = (($fn1413) target1409->$class->vtable[0])(target1409);
            panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1414, &$s1415);
            panda$core$Object* $tmp1417 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods1411, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1416, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp1417)->value)->name);
            panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1418, &$s1419);
            return $tmp1420;
        }
        }
        else {
        panda$core$Bit $tmp1421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1421.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1423 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            start1422 = *$tmp1423;
            org$pandalanguage$pandac$IRNode** $tmp1425 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            end1424 = *$tmp1425;
            panda$core$Bit* $tmp1427 = ((panda$core$Bit*) ((char*) $match$410_9861->$data + 32));
            inclusive1426 = *$tmp1427;
            org$pandalanguage$pandac$IRNode** $tmp1429 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 33));
            step1428 = *$tmp1429;
            panda$core$MutableString* $tmp1431 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1431->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1431->refCount.value = 1;
            panda$core$MutableString$init($tmp1431);
            result1430 = $tmp1431;
            if (((panda$core$Bit) { start1422 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1430, ((panda$core$Object*) start1422));
            }
            }
            if (inclusive1426.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1430, &$s1433);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result1430, &$s1434);
            }
            }
            if (((panda$core$Bit) { end1424 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1430, ((panda$core$Object*) end1424));
            }
            }
            if (((panda$core$Bit) { step1428 != NULL }).value) {
            {
                panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1435, ((panda$core$Object*) step1428));
                panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1436, &$s1437);
                panda$core$MutableString$append$panda$core$String(result1430, $tmp1438);
            }
            }
            panda$core$String* $tmp1439 = panda$core$MutableString$finish$R$panda$core$String(result1430);
            return $tmp1439;
        }
        }
        else {
        panda$core$Bit $tmp1440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1440.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1442 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$410_9861->$data + 16));
            kind1441 = *$tmp1442;
            panda$collections$ImmutableArray** $tmp1444 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            decls1443 = *$tmp1444;
            panda$core$MutableString* $tmp1446 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1446->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1446->refCount.value = 1;
            panda$core$MutableString$init($tmp1446);
            result1445 = $tmp1446;
            {
                $match$585_171448 = kind1441;
                panda$core$Bit $tmp1449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$585_171448.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp1449.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1445, &$s1450);
                }
                }
                else {
                panda$core$Bit $tmp1451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$585_171448.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp1451.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1445, &$s1452);
                }
                }
                else {
                panda$core$Bit $tmp1453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$585_171448.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp1453.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1445, &$s1454);
                }
                }
                else {
                panda$core$Bit $tmp1455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$585_171448.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp1455.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1445, &$s1456);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp1457 = panda$collections$ImmutableArray$join$R$panda$core$String(decls1443);
            panda$core$MutableString$append$panda$core$String(result1445, $tmp1457);
            panda$core$String* $tmp1458 = panda$core$MutableString$finish$R$panda$core$String(result1445);
            return $tmp1458;
        }
        }
        else {
        panda$core$Bit $tmp1459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1459.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1461 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$410_9861->$data + 16));
            variable1460 = *$tmp1461;
            return ((org$pandalanguage$pandac$Symbol*) variable1460)->name;
        }
        }
        else {
        panda$core$Bit $tmp1462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1462.value) {
        {
            panda$collections$ImmutableArray** $tmp1464 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 16));
            tests1463 = *$tmp1464;
            panda$collections$ImmutableArray** $tmp1466 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            statements1465 = *$tmp1466;
            panda$core$String* $tmp1468 = panda$collections$ImmutableArray$join$R$panda$core$String(tests1463);
            panda$core$String* $tmp1469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1467, $tmp1468);
            panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1469, &$s1470);
            panda$core$String* $tmp1473 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(statements1465, &$s1472);
            panda$core$String* $tmp1474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1471, $tmp1473);
            panda$core$String* $tmp1476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1474, &$s1475);
            return $tmp1476;
        }
        }
        else {
        panda$core$Bit $tmp1477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1477.value) {
        {
            panda$core$String** $tmp1479 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label1478 = *$tmp1479;
            org$pandalanguage$pandac$IRNode** $tmp1481 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            test1480 = *$tmp1481;
            panda$collections$ImmutableArray** $tmp1483 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 32));
            statements1482 = *$tmp1483;
            panda$core$MutableString* $tmp1485 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1485->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1485->refCount.value = 1;
            panda$core$MutableString$init($tmp1485);
            result1484 = $tmp1485;
            if (((panda$core$Bit) { label1478 != NULL }).value) {
            {
                panda$core$String* $tmp1487 = panda$core$String$convert$R$panda$core$String(label1478);
                panda$core$String* $tmp1489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1487, &$s1488);
                panda$core$MutableString$append$panda$core$String(result1484, $tmp1489);
            }
            }
            panda$core$String* $tmp1491 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1490, ((panda$core$Object*) test1480));
            panda$core$String* $tmp1493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1491, &$s1492);
            panda$core$MutableString$append$panda$core$String(result1484, $tmp1493);
            {
                ITable* $tmp1495 = ((panda$collections$Iterable*) statements1482)->$class->itable;
                while ($tmp1495->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1495 = $tmp1495->next;
                }
                $fn1497 $tmp1496 = $tmp1495->methods[0];
                panda$collections$Iterator* $tmp1498 = $tmp1496(((panda$collections$Iterable*) statements1482));
                s$Iter1494 = $tmp1498;
                $l1499:;
                ITable* $tmp1501 = s$Iter1494->$class->itable;
                while ($tmp1501->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1501 = $tmp1501->next;
                }
                $fn1503 $tmp1502 = $tmp1501->methods[0];
                panda$core$Bit $tmp1504 = $tmp1502(s$Iter1494);
                panda$core$Bit $tmp1505 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1504);
                if (!$tmp1505.value) goto $l1500;
                {
                    ITable* $tmp1507 = s$Iter1494->$class->itable;
                    while ($tmp1507->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1507 = $tmp1507->next;
                    }
                    $fn1509 $tmp1508 = $tmp1507->methods[1];
                    panda$core$Object* $tmp1510 = $tmp1508(s$Iter1494);
                    s1506 = ((org$pandalanguage$pandac$IRNode*) $tmp1510);
                    panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1506), &$s1511);
                    panda$core$MutableString$append$panda$core$String(result1484, $tmp1512);
                }
                goto $l1499;
                $l1500:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1513, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1484, $tmp1513);
            panda$core$String* $tmp1514 = panda$core$MutableString$finish$R$panda$core$String(result1484);
            return $tmp1514;
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

