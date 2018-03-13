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
org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position, org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit} };

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
typedef panda$collections$Iterator* (*$fn909)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn915)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn921)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn953)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn964)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn982)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1026)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1033)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1051)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1057)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1063)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1078)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1090)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1113)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1119)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1125)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1168)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1174)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1180)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1203)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1209)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1215)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1223)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1229)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1235)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1247)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1268)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1299)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1305)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1311)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1392)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1407)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1424)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1507)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1513)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1519)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54\x36\x34\x5f\x57\x52\x41\x50\x28", 11, -7093166379287162761, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1069 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s1237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x3a\x20", 17, -7730994269199854653, NULL };
static panda$core$String $s1338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3a\x20", 28, 2945252663019609900, NULL };
static panda$core$String $s1351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s1483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp442));
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp508));
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp581));
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp674));
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp772));
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp818));
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp846));
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
    panda$collections$Iterator* s$Iter906;
    org$pandalanguage$pandac$IRNode* s918;
    panda$core$Char8 $tmp925;
    panda$core$String* tmp1926;
    panda$core$String* label929;
    org$pandalanguage$pandac$MethodRef* m937;
    panda$collections$ImmutableArray* args939;
    org$pandalanguage$pandac$IRNode* value949;
    org$pandalanguage$pandac$Type* type951;
    org$pandalanguage$pandac$ChoiceEntry* ce972;
    org$pandalanguage$pandac$IRNode* base976;
    org$pandalanguage$pandac$ChoiceEntry* ce978;
    panda$core$Int64 field980;
    org$pandalanguage$pandac$Type* type994;
    org$pandalanguage$pandac$IRNode* call996;
    org$pandalanguage$pandac$IRNode* $match$444_17998;
    panda$collections$ImmutableArray* args1000;
    org$pandalanguage$pandac$Type* Type1010;
    panda$core$String* label1014;
    org$pandalanguage$pandac$IRNode* target1022;
    org$pandalanguage$pandac$IRNode* value1024;
    panda$core$String* label1036;
    panda$collections$ImmutableArray* statements1038;
    org$pandalanguage$pandac$IRNode* test1040;
    panda$core$MutableString* result1042;
    panda$collections$Iterator* s$Iter1048;
    org$pandalanguage$pandac$IRNode* s1060;
    panda$core$String* tmp21071;
    org$pandalanguage$pandac$IRNode* expr1074;
    org$pandalanguage$pandac$IRNode* stmt1076;
    org$pandalanguage$pandac$IRNode* base1086;
    org$pandalanguage$pandac$FieldDecl* field1088;
    org$pandalanguage$pandac$IRNode* test1098;
    panda$collections$ImmutableArray* ifTrue1100;
    org$pandalanguage$pandac$IRNode* ifFalse1102;
    panda$core$MutableString* result1104;
    panda$collections$Iterator* s$Iter1110;
    org$pandalanguage$pandac$IRNode* s1122;
    panda$core$Char8 $tmp1129;
    panda$core$String* tmp31134;
    panda$core$UInt64 value1137;
    org$pandalanguage$pandac$IRNode* value1141;
    org$pandalanguage$pandac$IRNode* value1148;
    panda$core$String* label1155;
    panda$collections$ImmutableArray* statements1157;
    panda$core$MutableString* result1159;
    panda$collections$Iterator* s$Iter1165;
    org$pandalanguage$pandac$IRNode* s1177;
    panda$core$Char8 $tmp1184;
    panda$core$String* tmp41185;
    org$pandalanguage$pandac$IRNode* value1188;
    panda$collections$ImmutableArray* whens1190;
    panda$collections$ImmutableArray* other1192;
    panda$core$MutableString* result1194;
    panda$collections$Iterator* w$Iter1200;
    org$pandalanguage$pandac$IRNode* w1212;
    panda$collections$Iterator* s$Iter1220;
    org$pandalanguage$pandac$IRNode* s1232;
    panda$core$Char8 $tmp1239;
    panda$core$String* tmp51240;
    org$pandalanguage$pandac$IRNode* target1243;
    org$pandalanguage$pandac$MethodRef* m1245;
    panda$core$UInt64 value1255;
    org$pandalanguage$pandac$parser$Token$Kind op1263;
    org$pandalanguage$pandac$IRNode* base1265;
    panda$core$String* label1276;
    org$pandalanguage$pandac$IRNode* target1278;
    org$pandalanguage$pandac$IRNode* list1280;
    panda$collections$ImmutableArray* statements1282;
    panda$core$MutableString* result1284;
    panda$collections$Iterator* s$Iter1296;
    org$pandalanguage$pandac$IRNode* s1308;
    panda$core$Char8 $tmp1315;
    panda$core$String* tmp61316;
    panda$core$Real64 value1319;
    org$pandalanguage$pandac$IRNode* value1323;
    org$pandalanguage$pandac$Type* type1331;
    panda$core$Int64 id1333;
    org$pandalanguage$pandac$IRNode* base1344;
    panda$core$Int64 id1346;
    panda$core$String* str1359;
    org$pandalanguage$pandac$IRNode* test1364;
    org$pandalanguage$pandac$IRNode* ifTrue1366;
    org$pandalanguage$pandac$IRNode* ifFalse1368;
    org$pandalanguage$pandac$Type* type1381;
    panda$core$String* name1385;
    org$pandalanguage$pandac$IRNode* base1388;
    panda$collections$ImmutableArray* args1390;
    org$pandalanguage$pandac$IRNode* target1401;
    panda$collections$ImmutableArray* methods1403;
    panda$collections$ImmutableArray* args1405;
    org$pandalanguage$pandac$IRNode* target1420;
    panda$collections$ImmutableArray* methods1422;
    org$pandalanguage$pandac$IRNode* start1433;
    org$pandalanguage$pandac$IRNode* end1435;
    panda$core$Bit inclusive1437;
    org$pandalanguage$pandac$IRNode* step1439;
    panda$core$MutableString* result1441;
    panda$core$String* tmp71449;
    org$pandalanguage$pandac$Variable$Kind kind1452;
    panda$collections$ImmutableArray* decls1454;
    panda$core$MutableString* result1456;
    org$pandalanguage$pandac$Variable$Kind $match$588_171458;
    panda$core$String* tmp81468;
    org$pandalanguage$pandac$Variable* variable1471;
    panda$collections$ImmutableArray* tests1474;
    panda$collections$ImmutableArray* statements1476;
    panda$core$String* label1489;
    org$pandalanguage$pandac$IRNode* test1491;
    panda$collections$ImmutableArray* statements1493;
    panda$core$MutableString* result1495;
    panda$collections$Iterator* s$Iter1504;
    org$pandalanguage$pandac$IRNode* s1516;
    panda$core$Char8 $tmp1523;
    panda$core$String* tmp91524;
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
            $tmp889 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
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
            panda$core$MutableString* $tmp904 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp904, &$s905);
            result903 = $tmp904;
            {
                ITable* $tmp907 = ((panda$collections$Iterable*) statements901)->$class->itable;
                while ($tmp907->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp907 = $tmp907->next;
                }
                $fn909 $tmp908 = $tmp907->methods[0];
                panda$collections$Iterator* $tmp910 = $tmp908(((panda$collections$Iterable*) statements901));
                s$Iter906 = $tmp910;
                $l911:;
                ITable* $tmp913 = s$Iter906->$class->itable;
                while ($tmp913->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp913 = $tmp913->next;
                }
                $fn915 $tmp914 = $tmp913->methods[0];
                panda$core$Bit $tmp916 = $tmp914(s$Iter906);
                panda$core$Bit $tmp917 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp916);
                if (!$tmp917.value) goto $l912;
                {
                    ITable* $tmp919 = s$Iter906->$class->itable;
                    while ($tmp919->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp919 = $tmp919->next;
                    }
                    $fn921 $tmp920 = $tmp919->methods[1];
                    panda$core$Object* $tmp922 = $tmp920(s$Iter906);
                    s918 = ((org$pandalanguage$pandac$IRNode*) $tmp922);
                    panda$core$String* $tmp924 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s918), &$s923);
                    panda$core$MutableString$append$panda$core$String(result903, $tmp924);
                }
                goto $l911;
                $l912:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp910));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp925, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result903, $tmp925);
            {
                panda$core$String* $tmp927 = panda$core$MutableString$finish$R$panda$core$String(result903);
                tmp1926 = $tmp927;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result903));
                return tmp1926;
            }
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
            org$pandalanguage$pandac$Type* $tmp954 = (($fn953) value949->$class->vtable[2])(value949);
            org$pandalanguage$pandac$Type* $tmp955 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp956 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp954, $tmp955);
            if ($tmp956.value) {
            {
                panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s957, ((panda$core$Object*) value949));
                panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp958, &$s959);
                panda$core$String* $tmp961 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp960, ((panda$core$Object*) type951));
                panda$core$String* $tmp963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp961, &$s962);
                return $tmp963;
            }
            }
            panda$core$String* $tmp965 = (($fn964) value949->$class->vtable[0])(value949);
            panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp965, &$s966);
            panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp967, ((panda$core$Object*) type951));
            panda$core$String* $tmp970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp968, &$s969);
            return $tmp970;
        }
        }
        else {
        panda$core$Bit $tmp971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp971.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp973 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$410_9861->$data + 16));
            ce972 = *$tmp973;
            panda$core$String* $tmp974 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce972);
            return $tmp974;
        }
        }
        else {
        panda$core$Bit $tmp975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp975.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp977 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            base976 = *$tmp977;
            org$pandalanguage$pandac$ChoiceEntry** $tmp979 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$410_9861->$data + 24));
            ce978 = *$tmp979;
            panda$core$Int64* $tmp981 = ((panda$core$Int64*) ((char*) $match$410_9861->$data + 32));
            field980 = *$tmp981;
            panda$core$String* $tmp983 = (($fn982) base976->$class->vtable[0])(base976);
            panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp983, &$s984);
            panda$core$String* $tmp986 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp985, ((panda$core$Object*) ce978));
            panda$core$String* $tmp988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp986, &$s987);
            panda$core$Int64$wrapper* $tmp989;
            $tmp989 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp989->value = field980;
            panda$core$String* $tmp990 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp988, ((panda$core$Object*) $tmp989));
            panda$core$String* $tmp992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp990, &$s991);
            return $tmp992;
        }
        }
        else {
        panda$core$Bit $tmp993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp993.value) {
        {
            org$pandalanguage$pandac$Type** $tmp995 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9861->$data + 16));
            type994 = *$tmp995;
            org$pandalanguage$pandac$IRNode** $tmp997 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            call996 = *$tmp997;
            {
                $match$444_17998 = call996;
                panda$core$Bit $tmp999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_17998->$rawValue, ((panda$core$Int64) { 5 }));
                if ($tmp999.value) {
                {
                    panda$collections$ImmutableArray** $tmp1001 = ((panda$collections$ImmutableArray**) ((char*) $match$444_17998->$data + 32));
                    args1000 = *$tmp1001;
                    panda$core$String* $tmp1002 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type994);
                    panda$core$String* $tmp1004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1002, &$s1003);
                    panda$core$String* $tmp1005 = panda$collections$ImmutableArray$join$R$panda$core$String(args1000);
                    panda$core$String* $tmp1006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1004, $tmp1005);
                    panda$core$String* $tmp1008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1006, &$s1007);
                    return $tmp1008;
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
        panda$core$Bit $tmp1009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1009.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1011 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9861->$data + 16));
            Type1010 = *$tmp1011;
            return &$s1012;
        }
        }
        else {
        panda$core$Bit $tmp1013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1013.value) {
        {
            panda$core$String** $tmp1015 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label1014 = *$tmp1015;
            if (((panda$core$Bit) { label1014 != NULL }).value) {
            {
                panda$core$String* $tmp1017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1016, label1014);
                panda$core$String* $tmp1019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1017, &$s1018);
                return $tmp1019;
            }
            }
            return &$s1020;
        }
        }
        else {
        panda$core$Bit $tmp1021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1021.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1023 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 0));
            target1022 = *$tmp1023;
            org$pandalanguage$pandac$IRNode** $tmp1025 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 8));
            value1024 = *$tmp1025;
            if (((panda$core$Bit) { value1024 != NULL }).value) {
            {
                panda$core$String* $tmp1027 = (($fn1026) target1022->$class->vtable[0])(target1022);
                panda$core$String* $tmp1029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1027, &$s1028);
                panda$core$String* $tmp1030 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1029, ((panda$core$Object*) value1024));
                panda$core$String* $tmp1032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1030, &$s1031);
                return $tmp1032;
            }
            }
            panda$core$String* $tmp1034 = (($fn1033) target1022->$class->vtable[0])(target1022);
            return $tmp1034;
        }
        }
        else {
        panda$core$Bit $tmp1035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1035.value) {
        {
            panda$core$String** $tmp1037 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label1036 = *$tmp1037;
            panda$collections$ImmutableArray** $tmp1039 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            statements1038 = *$tmp1039;
            org$pandalanguage$pandac$IRNode** $tmp1041 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 32));
            test1040 = *$tmp1041;
            panda$core$MutableString* $tmp1043 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1043);
            result1042 = $tmp1043;
            if (((panda$core$Bit) { label1036 != NULL }).value) {
            {
                panda$core$String* $tmp1044 = panda$core$String$convert$R$panda$core$String(label1036);
                panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1044, &$s1045);
                panda$core$MutableString$append$panda$core$String(result1042, $tmp1046);
            }
            }
            panda$core$MutableString$append$panda$core$String(result1042, &$s1047);
            {
                ITable* $tmp1049 = ((panda$collections$Iterable*) statements1038)->$class->itable;
                while ($tmp1049->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1049 = $tmp1049->next;
                }
                $fn1051 $tmp1050 = $tmp1049->methods[0];
                panda$collections$Iterator* $tmp1052 = $tmp1050(((panda$collections$Iterable*) statements1038));
                s$Iter1048 = $tmp1052;
                $l1053:;
                ITable* $tmp1055 = s$Iter1048->$class->itable;
                while ($tmp1055->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1055 = $tmp1055->next;
                }
                $fn1057 $tmp1056 = $tmp1055->methods[0];
                panda$core$Bit $tmp1058 = $tmp1056(s$Iter1048);
                panda$core$Bit $tmp1059 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1058);
                if (!$tmp1059.value) goto $l1054;
                {
                    ITable* $tmp1061 = s$Iter1048->$class->itable;
                    while ($tmp1061->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1061 = $tmp1061->next;
                    }
                    $fn1063 $tmp1062 = $tmp1061->methods[1];
                    panda$core$Object* $tmp1064 = $tmp1062(s$Iter1048);
                    s1060 = ((org$pandalanguage$pandac$IRNode*) $tmp1064);
                    panda$core$String* $tmp1066 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1060), &$s1065);
                    panda$core$MutableString$append$panda$core$String(result1042, $tmp1066);
                }
                goto $l1053;
                $l1054:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1052));
            }
            panda$core$String* $tmp1068 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1067, ((panda$core$Object*) test1040));
            panda$core$String* $tmp1070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1068, &$s1069);
            panda$core$MutableString$append$panda$core$String(result1042, $tmp1070);
            {
                panda$core$String* $tmp1072 = panda$core$MutableString$finish$R$panda$core$String(result1042);
                tmp21071 = $tmp1072;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1042));
                return tmp21071;
            }
        }
        }
        else {
        panda$core$Bit $tmp1073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1073.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1075 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 0));
            expr1074 = *$tmp1075;
            org$pandalanguage$pandac$IRNode** $tmp1077 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 8));
            stmt1076 = *$tmp1077;
            panda$core$String* $tmp1079 = (($fn1078) expr1074->$class->vtable[0])(expr1074);
            panda$core$String* $tmp1081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1079, &$s1080);
            panda$core$String* $tmp1082 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1081, ((panda$core$Object*) stmt1076));
            panda$core$String* $tmp1084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1082, &$s1083);
            return $tmp1084;
        }
        }
        else {
        panda$core$Bit $tmp1085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1085.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1087 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            base1086 = *$tmp1087;
            org$pandalanguage$pandac$FieldDecl** $tmp1089 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$410_9861->$data + 32));
            field1088 = *$tmp1089;
            panda$core$String* $tmp1091 = (($fn1090) base1086->$class->vtable[0])(base1086);
            panda$core$String* $tmp1093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1091, &$s1092);
            panda$core$String* $tmp1094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1093, ((org$pandalanguage$pandac$Symbol*) field1088)->name);
            panda$core$String* $tmp1096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1094, &$s1095);
            return $tmp1096;
        }
        }
        else {
        panda$core$Bit $tmp1097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1097.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1099 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            test1098 = *$tmp1099;
            panda$collections$ImmutableArray** $tmp1101 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            ifTrue1100 = *$tmp1101;
            org$pandalanguage$pandac$IRNode** $tmp1103 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 32));
            ifFalse1102 = *$tmp1103;
            panda$core$MutableString* $tmp1105 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp1107 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1106, ((panda$core$Object*) test1098));
            panda$core$String* $tmp1109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1107, &$s1108);
            panda$core$MutableString$init$panda$core$String($tmp1105, $tmp1109);
            result1104 = $tmp1105;
            {
                ITable* $tmp1111 = ((panda$collections$Iterable*) ifTrue1100)->$class->itable;
                while ($tmp1111->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1111 = $tmp1111->next;
                }
                $fn1113 $tmp1112 = $tmp1111->methods[0];
                panda$collections$Iterator* $tmp1114 = $tmp1112(((panda$collections$Iterable*) ifTrue1100));
                s$Iter1110 = $tmp1114;
                $l1115:;
                ITable* $tmp1117 = s$Iter1110->$class->itable;
                while ($tmp1117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1117 = $tmp1117->next;
                }
                $fn1119 $tmp1118 = $tmp1117->methods[0];
                panda$core$Bit $tmp1120 = $tmp1118(s$Iter1110);
                panda$core$Bit $tmp1121 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1120);
                if (!$tmp1121.value) goto $l1116;
                {
                    ITable* $tmp1123 = s$Iter1110->$class->itable;
                    while ($tmp1123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1123 = $tmp1123->next;
                    }
                    $fn1125 $tmp1124 = $tmp1123->methods[1];
                    panda$core$Object* $tmp1126 = $tmp1124(s$Iter1110);
                    s1122 = ((org$pandalanguage$pandac$IRNode*) $tmp1126);
                    panda$core$String* $tmp1128 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1122), &$s1127);
                    panda$core$MutableString$append$panda$core$String(result1104, $tmp1128);
                }
                goto $l1115;
                $l1116:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1114));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1129, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1104, $tmp1129);
            if (((panda$core$Bit) { ifFalse1102 != NULL }).value) {
            {
                panda$core$String* $tmp1131 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1130, ((panda$core$Object*) ifFalse1102));
                panda$core$String* $tmp1133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1131, &$s1132);
                panda$core$MutableString$append$panda$core$String(result1104, $tmp1133);
            }
            }
            {
                panda$core$String* $tmp1135 = panda$core$MutableString$finish$R$panda$core$String(result1104);
                tmp31134 = $tmp1135;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1104));
                return tmp31134;
            }
        }
        }
        else {
        panda$core$Bit $tmp1136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1136.value) {
        {
            panda$core$UInt64* $tmp1138 = ((panda$core$UInt64*) ((char*) $match$410_9861->$data + 24));
            value1137 = *$tmp1138;
            panda$core$String* $tmp1139 = panda$core$UInt64$convert$R$panda$core$String(value1137);
            return $tmp1139;
        }
        }
        else {
        panda$core$Bit $tmp1140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1140.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1142 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            value1141 = *$tmp1142;
            panda$core$String* $tmp1144 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1143, ((panda$core$Object*) value1141));
            panda$core$String* $tmp1146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1144, &$s1145);
            return $tmp1146;
        }
        }
        else {
        panda$core$Bit $tmp1147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1147.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1149 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            value1148 = *$tmp1149;
            panda$core$String* $tmp1151 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1150, ((panda$core$Object*) value1148));
            panda$core$String* $tmp1153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1151, &$s1152);
            return $tmp1153;
        }
        }
        else {
        panda$core$Bit $tmp1154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1154.value) {
        {
            panda$core$String** $tmp1156 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label1155 = *$tmp1156;
            panda$collections$ImmutableArray** $tmp1158 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            statements1157 = *$tmp1158;
            panda$core$MutableString* $tmp1160 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1160);
            result1159 = $tmp1160;
            if (((panda$core$Bit) { label1155 != NULL }).value) {
            {
                panda$core$String* $tmp1161 = panda$core$String$convert$R$panda$core$String(label1155);
                panda$core$String* $tmp1163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1161, &$s1162);
                panda$core$MutableString$append$panda$core$String(result1159, $tmp1163);
            }
            }
            panda$core$MutableString$append$panda$core$String(result1159, &$s1164);
            {
                ITable* $tmp1166 = ((panda$collections$Iterable*) statements1157)->$class->itable;
                while ($tmp1166->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1166 = $tmp1166->next;
                }
                $fn1168 $tmp1167 = $tmp1166->methods[0];
                panda$collections$Iterator* $tmp1169 = $tmp1167(((panda$collections$Iterable*) statements1157));
                s$Iter1165 = $tmp1169;
                $l1170:;
                ITable* $tmp1172 = s$Iter1165->$class->itable;
                while ($tmp1172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1172 = $tmp1172->next;
                }
                $fn1174 $tmp1173 = $tmp1172->methods[0];
                panda$core$Bit $tmp1175 = $tmp1173(s$Iter1165);
                panda$core$Bit $tmp1176 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1175);
                if (!$tmp1176.value) goto $l1171;
                {
                    ITable* $tmp1178 = s$Iter1165->$class->itable;
                    while ($tmp1178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1178 = $tmp1178->next;
                    }
                    $fn1180 $tmp1179 = $tmp1178->methods[1];
                    panda$core$Object* $tmp1181 = $tmp1179(s$Iter1165);
                    s1177 = ((org$pandalanguage$pandac$IRNode*) $tmp1181);
                    panda$core$String* $tmp1183 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1177), &$s1182);
                    panda$core$MutableString$append$panda$core$String(result1159, $tmp1183);
                }
                goto $l1170;
                $l1171:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1169));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1184, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1159, $tmp1184);
            {
                panda$core$String* $tmp1186 = panda$core$MutableString$finish$R$panda$core$String(result1159);
                tmp41185 = $tmp1186;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1159));
                return tmp41185;
            }
        }
        }
        else {
        panda$core$Bit $tmp1187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1187.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1189 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            value1188 = *$tmp1189;
            panda$collections$ImmutableArray** $tmp1191 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            whens1190 = *$tmp1191;
            panda$collections$ImmutableArray** $tmp1193 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 32));
            other1192 = *$tmp1193;
            panda$core$MutableString* $tmp1195 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp1197 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1196, ((panda$core$Object*) value1188));
            panda$core$String* $tmp1199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1197, &$s1198);
            panda$core$MutableString$init$panda$core$String($tmp1195, $tmp1199);
            result1194 = $tmp1195;
            {
                ITable* $tmp1201 = ((panda$collections$Iterable*) whens1190)->$class->itable;
                while ($tmp1201->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1201 = $tmp1201->next;
                }
                $fn1203 $tmp1202 = $tmp1201->methods[0];
                panda$collections$Iterator* $tmp1204 = $tmp1202(((panda$collections$Iterable*) whens1190));
                w$Iter1200 = $tmp1204;
                $l1205:;
                ITable* $tmp1207 = w$Iter1200->$class->itable;
                while ($tmp1207->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1207 = $tmp1207->next;
                }
                $fn1209 $tmp1208 = $tmp1207->methods[0];
                panda$core$Bit $tmp1210 = $tmp1208(w$Iter1200);
                panda$core$Bit $tmp1211 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1210);
                if (!$tmp1211.value) goto $l1206;
                {
                    ITable* $tmp1213 = w$Iter1200->$class->itable;
                    while ($tmp1213->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1213 = $tmp1213->next;
                    }
                    $fn1215 $tmp1214 = $tmp1213->methods[1];
                    panda$core$Object* $tmp1216 = $tmp1214(w$Iter1200);
                    w1212 = ((org$pandalanguage$pandac$IRNode*) $tmp1216);
                    panda$core$String* $tmp1218 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1212), &$s1217);
                    panda$core$MutableString$append$panda$core$String(result1194, $tmp1218);
                }
                goto $l1205;
                $l1206:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1204));
            }
            if (((panda$core$Bit) { other1192 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result1194, &$s1219);
                {
                    ITable* $tmp1221 = ((panda$collections$Iterable*) other1192)->$class->itable;
                    while ($tmp1221->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1221 = $tmp1221->next;
                    }
                    $fn1223 $tmp1222 = $tmp1221->methods[0];
                    panda$collections$Iterator* $tmp1224 = $tmp1222(((panda$collections$Iterable*) other1192));
                    s$Iter1220 = $tmp1224;
                    $l1225:;
                    ITable* $tmp1227 = s$Iter1220->$class->itable;
                    while ($tmp1227->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1227 = $tmp1227->next;
                    }
                    $fn1229 $tmp1228 = $tmp1227->methods[0];
                    panda$core$Bit $tmp1230 = $tmp1228(s$Iter1220);
                    panda$core$Bit $tmp1231 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1230);
                    if (!$tmp1231.value) goto $l1226;
                    {
                        ITable* $tmp1233 = s$Iter1220->$class->itable;
                        while ($tmp1233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1233 = $tmp1233->next;
                        }
                        $fn1235 $tmp1234 = $tmp1233->methods[1];
                        panda$core$Object* $tmp1236 = $tmp1234(s$Iter1220);
                        s1232 = ((org$pandalanguage$pandac$IRNode*) $tmp1236);
                        panda$core$String* $tmp1238 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1232), &$s1237);
                        panda$core$MutableString$append$panda$core$String(result1194, $tmp1238);
                    }
                    goto $l1225;
                    $l1226:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1224));
                }
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1239, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1194, $tmp1239);
            {
                panda$core$String* $tmp1241 = panda$core$MutableString$finish$R$panda$core$String(result1194);
                tmp51240 = $tmp1241;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1194));
                return tmp51240;
            }
        }
        }
        else {
        panda$core$Bit $tmp1242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1242.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1244 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            target1243 = *$tmp1244;
            org$pandalanguage$pandac$MethodRef** $tmp1246 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$410_9861->$data + 24));
            m1245 = *$tmp1246;
            if (((panda$core$Bit) { target1243 != NULL }).value) {
            {
                panda$core$String* $tmp1248 = (($fn1247) target1243->$class->vtable[0])(target1243);
                panda$core$String* $tmp1250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1248, &$s1249);
                panda$core$String* $tmp1251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1250, ((org$pandalanguage$pandac$Symbol*) m1245->value)->name);
                panda$core$String* $tmp1253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1251, &$s1252);
                return $tmp1253;
            }
            }
            return ((org$pandalanguage$pandac$Symbol*) m1245->value)->name;
        }
        }
        else {
        panda$core$Bit $tmp1254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1254.value) {
        {
            panda$core$UInt64* $tmp1256 = ((panda$core$UInt64*) ((char*) $match$410_9861->$data + 24));
            value1255 = *$tmp1256;
            panda$core$UInt64$wrapper* $tmp1258;
            $tmp1258 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp1258->value = value1255;
            panda$core$String* $tmp1259 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1257, ((panda$core$Object*) $tmp1258));
            return $tmp1259;
        }
        }
        else {
        panda$core$Bit $tmp1260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1260.value) {
        {
            return &$s1261;
        }
        }
        else {
        panda$core$Bit $tmp1262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1262.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1264 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$410_9861->$data + 16));
            op1263 = *$tmp1264;
            org$pandalanguage$pandac$IRNode** $tmp1266 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            base1265 = *$tmp1266;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1267;
            $tmp1267 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1267->value = op1263;
            panda$core$String* $tmp1269 = (($fn1268) ((panda$core$Object*) $tmp1267)->$class->vtable[0])(((panda$core$Object*) $tmp1267));
            panda$core$String* $tmp1271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1269, &$s1270);
            panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1271, ((panda$core$Object*) base1265));
            panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1272, &$s1273);
            return $tmp1274;
        }
        }
        else {
        panda$core$Bit $tmp1275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1275.value) {
        {
            panda$core$String** $tmp1277 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label1276 = *$tmp1277;
            org$pandalanguage$pandac$IRNode** $tmp1279 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            target1278 = *$tmp1279;
            org$pandalanguage$pandac$IRNode** $tmp1281 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 32));
            list1280 = *$tmp1281;
            panda$collections$ImmutableArray** $tmp1283 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 40));
            statements1282 = *$tmp1283;
            panda$core$MutableString* $tmp1285 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1285);
            result1284 = $tmp1285;
            if (((panda$core$Bit) { label1276 != NULL }).value) {
            {
                panda$core$String* $tmp1286 = panda$core$String$convert$R$panda$core$String(label1276);
                panda$core$String* $tmp1288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1286, &$s1287);
                panda$core$MutableString$append$panda$core$String(result1284, $tmp1288);
            }
            }
            panda$core$String* $tmp1290 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1289, ((panda$core$Object*) target1278));
            panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1290, &$s1291);
            panda$core$String* $tmp1293 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1292, ((panda$core$Object*) list1280));
            panda$core$String* $tmp1295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1293, &$s1294);
            panda$core$MutableString$append$panda$core$String(result1284, $tmp1295);
            {
                ITable* $tmp1297 = ((panda$collections$Iterable*) statements1282)->$class->itable;
                while ($tmp1297->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1297 = $tmp1297->next;
                }
                $fn1299 $tmp1298 = $tmp1297->methods[0];
                panda$collections$Iterator* $tmp1300 = $tmp1298(((panda$collections$Iterable*) statements1282));
                s$Iter1296 = $tmp1300;
                $l1301:;
                ITable* $tmp1303 = s$Iter1296->$class->itable;
                while ($tmp1303->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1303 = $tmp1303->next;
                }
                $fn1305 $tmp1304 = $tmp1303->methods[0];
                panda$core$Bit $tmp1306 = $tmp1304(s$Iter1296);
                panda$core$Bit $tmp1307 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1306);
                if (!$tmp1307.value) goto $l1302;
                {
                    ITable* $tmp1309 = s$Iter1296->$class->itable;
                    while ($tmp1309->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1309 = $tmp1309->next;
                    }
                    $fn1311 $tmp1310 = $tmp1309->methods[1];
                    panda$core$Object* $tmp1312 = $tmp1310(s$Iter1296);
                    s1308 = ((org$pandalanguage$pandac$IRNode*) $tmp1312);
                    panda$core$String* $tmp1314 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1308), &$s1313);
                    panda$core$MutableString$append$panda$core$String(result1284, $tmp1314);
                }
                goto $l1301;
                $l1302:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1300));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1315, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1284, $tmp1315);
            {
                panda$core$String* $tmp1317 = panda$core$MutableString$finish$R$panda$core$String(result1284);
                tmp61316 = $tmp1317;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1284));
                return tmp61316;
            }
        }
        }
        else {
        panda$core$Bit $tmp1318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1318.value) {
        {
            panda$core$Real64* $tmp1320 = ((panda$core$Real64*) ((char*) $match$410_9861->$data + 24));
            value1319 = *$tmp1320;
            panda$core$String* $tmp1321 = panda$core$Real64$convert$R$panda$core$String(value1319);
            return $tmp1321;
        }
        }
        else {
        panda$core$Bit $tmp1322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1322.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1324 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            value1323 = *$tmp1324;
            if (((panda$core$Bit) { value1323 != NULL }).value) {
            {
                panda$core$String* $tmp1326 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1325, ((panda$core$Object*) value1323));
                panda$core$String* $tmp1328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1326, &$s1327);
                return $tmp1328;
            }
            }
            return &$s1329;
        }
        }
        else {
        panda$core$Bit $tmp1330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1330.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1332 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9861->$data + 16));
            type1331 = *$tmp1332;
            panda$core$Int64* $tmp1334 = ((panda$core$Int64*) ((char*) $match$410_9861->$data + 24));
            id1333 = *$tmp1334;
            panda$core$Int64$wrapper* $tmp1336;
            $tmp1336 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1336->value = id1333;
            panda$core$String* $tmp1337 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1335, ((panda$core$Object*) $tmp1336));
            panda$core$String* $tmp1339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1337, &$s1338);
            panda$core$String* $tmp1340 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1339, ((panda$core$Object*) type1331));
            panda$core$String* $tmp1342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1340, &$s1341);
            return $tmp1342;
        }
        }
        else {
        panda$core$Bit $tmp1343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1343.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1345 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 0));
            base1344 = *$tmp1345;
            panda$core$Int64* $tmp1347 = ((panda$core$Int64*) ((char*) $match$410_9861->$data + 8));
            id1346 = *$tmp1347;
            panda$core$Int64$wrapper* $tmp1349;
            $tmp1349 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1349->value = id1346;
            panda$core$String* $tmp1350 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1348, ((panda$core$Object*) $tmp1349));
            panda$core$String* $tmp1352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1350, &$s1351);
            panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1352, ((panda$core$Object*) base1344));
            panda$core$String* $tmp1355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1353, &$s1354);
            return $tmp1355;
        }
        }
        else {
        panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1356.value) {
        {
            return &$s1357;
        }
        }
        else {
        panda$core$Bit $tmp1358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1358.value) {
        {
            panda$core$String** $tmp1360 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            str1359 = *$tmp1360;
            return str1359;
        }
        }
        else {
        panda$core$Bit $tmp1361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1361.value) {
        {
            return &$s1362;
        }
        }
        else {
        panda$core$Bit $tmp1363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1363.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1365 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            test1364 = *$tmp1365;
            org$pandalanguage$pandac$IRNode** $tmp1367 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            ifTrue1366 = *$tmp1367;
            org$pandalanguage$pandac$IRNode** $tmp1369 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 32));
            ifFalse1368 = *$tmp1369;
            panda$core$String* $tmp1371 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1370, ((panda$core$Object*) test1364));
            panda$core$String* $tmp1373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1371, &$s1372);
            panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1373, ((panda$core$Object*) ifTrue1366));
            panda$core$String* $tmp1376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1374, &$s1375);
            panda$core$String* $tmp1377 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1376, ((panda$core$Object*) ifFalse1368));
            panda$core$String* $tmp1379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1377, &$s1378);
            return $tmp1379;
        }
        }
        else {
        panda$core$Bit $tmp1380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1380.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1382 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9861->$data + 16));
            type1381 = *$tmp1382;
            panda$core$String* $tmp1383 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1381);
            return $tmp1383;
        }
        }
        else {
        panda$core$Bit $tmp1384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1384.value) {
        {
            panda$core$String** $tmp1386 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            name1385 = *$tmp1386;
            return name1385;
        }
        }
        else {
        panda$core$Bit $tmp1387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1387.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1389 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            base1388 = *$tmp1389;
            panda$collections$ImmutableArray** $tmp1391 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 32));
            args1390 = *$tmp1391;
            panda$core$String* $tmp1393 = (($fn1392) base1388->$class->vtable[0])(base1388);
            panda$core$String* $tmp1395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1393, &$s1394);
            panda$core$String* $tmp1396 = panda$collections$ImmutableArray$join$R$panda$core$String(args1390);
            panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1395, $tmp1396);
            panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1397, &$s1398);
            return $tmp1399;
        }
        }
        else {
        panda$core$Bit $tmp1400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1400.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1402 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            target1401 = *$tmp1402;
            panda$collections$ImmutableArray** $tmp1404 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 32));
            methods1403 = *$tmp1404;
            panda$collections$ImmutableArray** $tmp1406 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 40));
            args1405 = *$tmp1406;
            panda$core$String* $tmp1408 = (($fn1407) target1401->$class->vtable[0])(target1401);
            panda$core$String* $tmp1410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1408, &$s1409);
            panda$core$Object* $tmp1411 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods1403, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1410, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp1411)->value)->name);
            panda$core$String* $tmp1414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1412, &$s1413);
            panda$core$String* $tmp1415 = panda$collections$ImmutableArray$join$R$panda$core$String(args1405);
            panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1414, $tmp1415);
            panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1416, &$s1417);
            return $tmp1418;
        }
        }
        else {
        panda$core$Bit $tmp1419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1419.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1421 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            target1420 = *$tmp1421;
            panda$collections$ImmutableArray** $tmp1423 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            methods1422 = *$tmp1423;
            panda$core$String* $tmp1425 = (($fn1424) target1420->$class->vtable[0])(target1420);
            panda$core$String* $tmp1427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1425, &$s1426);
            panda$core$Object* $tmp1428 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods1422, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1427, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp1428)->value)->name);
            panda$core$String* $tmp1431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1429, &$s1430);
            return $tmp1431;
        }
        }
        else {
        panda$core$Bit $tmp1432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1432.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1434 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            start1433 = *$tmp1434;
            org$pandalanguage$pandac$IRNode** $tmp1436 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            end1435 = *$tmp1436;
            panda$core$Bit* $tmp1438 = ((panda$core$Bit*) ((char*) $match$410_9861->$data + 32));
            inclusive1437 = *$tmp1438;
            org$pandalanguage$pandac$IRNode** $tmp1440 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 33));
            step1439 = *$tmp1440;
            panda$core$MutableString* $tmp1442 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1442);
            result1441 = $tmp1442;
            if (((panda$core$Bit) { start1433 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1441, ((panda$core$Object*) start1433));
            }
            }
            if (inclusive1437.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1441, &$s1443);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result1441, &$s1444);
            }
            }
            if (((panda$core$Bit) { end1435 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1441, ((panda$core$Object*) end1435));
            }
            }
            if (((panda$core$Bit) { step1439 != NULL }).value) {
            {
                panda$core$String* $tmp1446 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1445, ((panda$core$Object*) step1439));
                panda$core$String* $tmp1448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1446, &$s1447);
                panda$core$MutableString$append$panda$core$String(result1441, $tmp1448);
            }
            }
            {
                panda$core$String* $tmp1450 = panda$core$MutableString$finish$R$panda$core$String(result1441);
                tmp71449 = $tmp1450;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1441));
                return tmp71449;
            }
        }
        }
        else {
        panda$core$Bit $tmp1451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1451.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1453 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$410_9861->$data + 16));
            kind1452 = *$tmp1453;
            panda$collections$ImmutableArray** $tmp1455 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            decls1454 = *$tmp1455;
            panda$core$MutableString* $tmp1457 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1457);
            result1456 = $tmp1457;
            {
                $match$588_171458 = kind1452;
                panda$core$Bit $tmp1459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171458.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp1459.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1456, &$s1460);
                }
                }
                else {
                panda$core$Bit $tmp1461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171458.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp1461.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1456, &$s1462);
                }
                }
                else {
                panda$core$Bit $tmp1463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171458.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp1463.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1456, &$s1464);
                }
                }
                else {
                panda$core$Bit $tmp1465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171458.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp1465.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1456, &$s1466);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp1467 = panda$collections$ImmutableArray$join$R$panda$core$String(decls1454);
            panda$core$MutableString$append$panda$core$String(result1456, $tmp1467);
            {
                panda$core$String* $tmp1469 = panda$core$MutableString$finish$R$panda$core$String(result1456);
                tmp81468 = $tmp1469;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1456));
                return tmp81468;
            }
        }
        }
        else {
        panda$core$Bit $tmp1470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1470.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1472 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$410_9861->$data + 16));
            variable1471 = *$tmp1472;
            return ((org$pandalanguage$pandac$Symbol*) variable1471)->name;
        }
        }
        else {
        panda$core$Bit $tmp1473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1473.value) {
        {
            panda$collections$ImmutableArray** $tmp1475 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 16));
            tests1474 = *$tmp1475;
            panda$collections$ImmutableArray** $tmp1477 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            statements1476 = *$tmp1477;
            panda$core$String* $tmp1479 = panda$collections$ImmutableArray$join$R$panda$core$String(tests1474);
            panda$core$String* $tmp1480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1478, $tmp1479);
            panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1480, &$s1481);
            panda$core$String* $tmp1484 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(statements1476, &$s1483);
            panda$core$String* $tmp1485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1482, $tmp1484);
            panda$core$String* $tmp1487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1485, &$s1486);
            return $tmp1487;
        }
        }
        else {
        panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1488.value) {
        {
            panda$core$String** $tmp1490 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label1489 = *$tmp1490;
            org$pandalanguage$pandac$IRNode** $tmp1492 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            test1491 = *$tmp1492;
            panda$collections$ImmutableArray** $tmp1494 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 32));
            statements1493 = *$tmp1494;
            panda$core$MutableString* $tmp1496 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1496);
            result1495 = $tmp1496;
            if (((panda$core$Bit) { label1489 != NULL }).value) {
            {
                panda$core$String* $tmp1497 = panda$core$String$convert$R$panda$core$String(label1489);
                panda$core$String* $tmp1499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1497, &$s1498);
                panda$core$MutableString$append$panda$core$String(result1495, $tmp1499);
            }
            }
            panda$core$String* $tmp1501 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1500, ((panda$core$Object*) test1491));
            panda$core$String* $tmp1503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1501, &$s1502);
            panda$core$MutableString$append$panda$core$String(result1495, $tmp1503);
            {
                ITable* $tmp1505 = ((panda$collections$Iterable*) statements1493)->$class->itable;
                while ($tmp1505->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1505 = $tmp1505->next;
                }
                $fn1507 $tmp1506 = $tmp1505->methods[0];
                panda$collections$Iterator* $tmp1508 = $tmp1506(((panda$collections$Iterable*) statements1493));
                s$Iter1504 = $tmp1508;
                $l1509:;
                ITable* $tmp1511 = s$Iter1504->$class->itable;
                while ($tmp1511->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1511 = $tmp1511->next;
                }
                $fn1513 $tmp1512 = $tmp1511->methods[0];
                panda$core$Bit $tmp1514 = $tmp1512(s$Iter1504);
                panda$core$Bit $tmp1515 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1514);
                if (!$tmp1515.value) goto $l1510;
                {
                    ITable* $tmp1517 = s$Iter1504->$class->itable;
                    while ($tmp1517->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1517 = $tmp1517->next;
                    }
                    $fn1519 $tmp1518 = $tmp1517->methods[1];
                    panda$core$Object* $tmp1520 = $tmp1518(s$Iter1504);
                    s1516 = ((org$pandalanguage$pandac$IRNode*) $tmp1520);
                    panda$core$String* $tmp1522 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1516), &$s1521);
                    panda$core$MutableString$append$panda$core$String(result1495, $tmp1522);
                }
                goto $l1509;
                $l1510:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1508));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1523, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1495, $tmp1523);
            {
                panda$core$String* $tmp1525 = panda$core$MutableString$finish$R$panda$core$String(result1495);
                tmp91524 = $tmp1525;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1495));
                return tmp91524;
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

