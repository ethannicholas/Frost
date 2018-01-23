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
typedef org$pandalanguage$pandac$Type* (*$fn952)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn963)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn981)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1025)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1032)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1050)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1056)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1062)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1076)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1088)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1111)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1117)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1123)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1165)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1171)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1177)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1199)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1205)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1211)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1219)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1225)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1231)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1242)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1263)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1294)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1300)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1306)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1386)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1401)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1418)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1499)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1505)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1511)(panda$collections$Iterator*);

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
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54\x36\x34\x5f\x57\x52\x41\x50\x28", 11, -7093166379287162761, NULL };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1046 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s1147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s1289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x3a\x20", 17, -7730994269199854653, NULL };
static panda$core$String $s1332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3a\x20", 28, 2945252663019609900, NULL };
static panda$core$String $s1345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s1369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    panda$core$String* label928;
    org$pandalanguage$pandac$MethodRef* m936;
    panda$collections$ImmutableArray* args938;
    org$pandalanguage$pandac$IRNode* value948;
    org$pandalanguage$pandac$Type* type950;
    org$pandalanguage$pandac$ChoiceEntry* ce971;
    org$pandalanguage$pandac$IRNode* base975;
    org$pandalanguage$pandac$ChoiceEntry* ce977;
    panda$core$Int64 field979;
    org$pandalanguage$pandac$Type* type993;
    org$pandalanguage$pandac$IRNode* call995;
    org$pandalanguage$pandac$IRNode* $match$444_17997;
    panda$collections$ImmutableArray* args999;
    org$pandalanguage$pandac$Type* Type1009;
    panda$core$String* label1013;
    org$pandalanguage$pandac$IRNode* target1021;
    org$pandalanguage$pandac$IRNode* value1023;
    panda$core$String* label1035;
    panda$collections$ImmutableArray* statements1037;
    org$pandalanguage$pandac$IRNode* test1039;
    panda$core$MutableString* result1041;
    panda$collections$Iterator* s$Iter1047;
    org$pandalanguage$pandac$IRNode* s1059;
    org$pandalanguage$pandac$IRNode* expr1072;
    org$pandalanguage$pandac$IRNode* stmt1074;
    org$pandalanguage$pandac$IRNode* base1084;
    org$pandalanguage$pandac$FieldDecl* field1086;
    org$pandalanguage$pandac$IRNode* test1096;
    panda$collections$ImmutableArray* ifTrue1098;
    org$pandalanguage$pandac$IRNode* ifFalse1100;
    panda$core$MutableString* result1102;
    panda$collections$Iterator* s$Iter1108;
    org$pandalanguage$pandac$IRNode* s1120;
    panda$core$Char8 $tmp1127;
    panda$core$UInt64 value1134;
    org$pandalanguage$pandac$IRNode* value1138;
    org$pandalanguage$pandac$IRNode* value1145;
    panda$core$String* label1152;
    panda$collections$ImmutableArray* statements1154;
    panda$core$MutableString* result1156;
    panda$collections$Iterator* s$Iter1162;
    org$pandalanguage$pandac$IRNode* s1174;
    panda$core$Char8 $tmp1181;
    org$pandalanguage$pandac$IRNode* value1184;
    panda$collections$ImmutableArray* whens1186;
    panda$collections$ImmutableArray* other1188;
    panda$core$MutableString* result1190;
    panda$collections$Iterator* w$Iter1196;
    org$pandalanguage$pandac$IRNode* w1208;
    panda$collections$Iterator* s$Iter1216;
    org$pandalanguage$pandac$IRNode* s1228;
    panda$core$Char8 $tmp1235;
    org$pandalanguage$pandac$IRNode* target1238;
    org$pandalanguage$pandac$MethodRef* m1240;
    panda$core$UInt64 value1250;
    org$pandalanguage$pandac$parser$Token$Kind op1258;
    org$pandalanguage$pandac$IRNode* base1260;
    panda$core$String* label1271;
    org$pandalanguage$pandac$IRNode* target1273;
    org$pandalanguage$pandac$IRNode* list1275;
    panda$collections$ImmutableArray* statements1277;
    panda$core$MutableString* result1279;
    panda$collections$Iterator* s$Iter1291;
    org$pandalanguage$pandac$IRNode* s1303;
    panda$core$Char8 $tmp1310;
    panda$core$Real64 value1313;
    org$pandalanguage$pandac$IRNode* value1317;
    org$pandalanguage$pandac$Type* type1325;
    panda$core$Int64 id1327;
    org$pandalanguage$pandac$IRNode* base1338;
    panda$core$Int64 id1340;
    panda$core$String* str1353;
    org$pandalanguage$pandac$IRNode* test1358;
    org$pandalanguage$pandac$IRNode* ifTrue1360;
    org$pandalanguage$pandac$IRNode* ifFalse1362;
    org$pandalanguage$pandac$Type* type1375;
    panda$core$String* name1379;
    org$pandalanguage$pandac$IRNode* base1382;
    panda$collections$ImmutableArray* args1384;
    org$pandalanguage$pandac$IRNode* target1395;
    panda$collections$ImmutableArray* methods1397;
    panda$collections$ImmutableArray* args1399;
    org$pandalanguage$pandac$IRNode* target1414;
    panda$collections$ImmutableArray* methods1416;
    org$pandalanguage$pandac$IRNode* start1427;
    org$pandalanguage$pandac$IRNode* end1429;
    panda$core$Bit inclusive1431;
    org$pandalanguage$pandac$IRNode* step1433;
    panda$core$MutableString* result1435;
    org$pandalanguage$pandac$Variable$Kind kind1445;
    panda$collections$ImmutableArray* decls1447;
    panda$core$MutableString* result1449;
    org$pandalanguage$pandac$Variable$Kind $match$588_171451;
    org$pandalanguage$pandac$Variable* variable1463;
    panda$collections$ImmutableArray* tests1466;
    panda$collections$ImmutableArray* statements1468;
    panda$core$String* label1481;
    org$pandalanguage$pandac$IRNode* test1483;
    panda$collections$ImmutableArray* statements1485;
    panda$core$MutableString* result1487;
    panda$collections$Iterator* s$Iter1496;
    org$pandalanguage$pandac$IRNode* s1508;
    panda$core$Char8 $tmp1515;
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
            panda$core$String* $tmp926 = panda$core$MutableString$finish$R$panda$core$String(result903);
            return $tmp926;
        }
        }
        else {
        panda$core$Bit $tmp927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp927.value) {
        {
            panda$core$String** $tmp929 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label928 = *$tmp929;
            if (((panda$core$Bit) { label928 != NULL }).value) {
            {
                panda$core$String* $tmp931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s930, label928);
                panda$core$String* $tmp933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp931, &$s932);
                return $tmp933;
            }
            }
            return &$s934;
        }
        }
        else {
        panda$core$Bit $tmp935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp935.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp937 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$410_9861->$data + 24));
            m936 = *$tmp937;
            panda$collections$ImmutableArray** $tmp939 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 32));
            args938 = *$tmp939;
            panda$core$String* $tmp940 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m936->value)->name);
            panda$core$String* $tmp942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp940, &$s941);
            panda$core$String* $tmp943 = panda$collections$ImmutableArray$join$R$panda$core$String(args938);
            panda$core$String* $tmp944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp942, $tmp943);
            panda$core$String* $tmp946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp944, &$s945);
            return $tmp946;
        }
        }
        else {
        panda$core$Bit $tmp947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp947.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp949 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            value948 = *$tmp949;
            org$pandalanguage$pandac$Type** $tmp951 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9861->$data + 24));
            type950 = *$tmp951;
            org$pandalanguage$pandac$Type* $tmp953 = (($fn952) value948->$class->vtable[2])(value948);
            org$pandalanguage$pandac$Type* $tmp954 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            panda$core$Bit $tmp955 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp953, $tmp954);
            if ($tmp955.value) {
            {
                panda$core$String* $tmp957 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s956, ((panda$core$Object*) value948));
                panda$core$String* $tmp959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp957, &$s958);
                panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp959, ((panda$core$Object*) type950));
                panda$core$String* $tmp962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp960, &$s961);
                return $tmp962;
            }
            }
            panda$core$String* $tmp964 = (($fn963) value948->$class->vtable[0])(value948);
            panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp964, &$s965);
            panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp966, ((panda$core$Object*) type950));
            panda$core$String* $tmp969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp967, &$s968);
            return $tmp969;
        }
        }
        else {
        panda$core$Bit $tmp970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp970.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp972 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$410_9861->$data + 16));
            ce971 = *$tmp972;
            panda$core$String* $tmp973 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce971);
            return $tmp973;
        }
        }
        else {
        panda$core$Bit $tmp974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp974.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp976 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            base975 = *$tmp976;
            org$pandalanguage$pandac$ChoiceEntry** $tmp978 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$410_9861->$data + 24));
            ce977 = *$tmp978;
            panda$core$Int64* $tmp980 = ((panda$core$Int64*) ((char*) $match$410_9861->$data + 32));
            field979 = *$tmp980;
            panda$core$String* $tmp982 = (($fn981) base975->$class->vtable[0])(base975);
            panda$core$String* $tmp984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp982, &$s983);
            panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp984, ((panda$core$Object*) ce977));
            panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp985, &$s986);
            panda$core$Int64$wrapper* $tmp988;
            $tmp988 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp988->value = field979;
            panda$core$String* $tmp989 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp987, ((panda$core$Object*) $tmp988));
            panda$core$String* $tmp991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp989, &$s990);
            return $tmp991;
        }
        }
        else {
        panda$core$Bit $tmp992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp992.value) {
        {
            org$pandalanguage$pandac$Type** $tmp994 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9861->$data + 16));
            type993 = *$tmp994;
            org$pandalanguage$pandac$IRNode** $tmp996 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            call995 = *$tmp996;
            {
                $match$444_17997 = call995;
                panda$core$Bit $tmp998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$444_17997->$rawValue, ((panda$core$Int64) { 5 }));
                if ($tmp998.value) {
                {
                    panda$collections$ImmutableArray** $tmp1000 = ((panda$collections$ImmutableArray**) ((char*) $match$444_17997->$data + 32));
                    args999 = *$tmp1000;
                    panda$core$String* $tmp1001 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type993);
                    panda$core$String* $tmp1003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1001, &$s1002);
                    panda$core$String* $tmp1004 = panda$collections$ImmutableArray$join$R$panda$core$String(args999);
                    panda$core$String* $tmp1005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1003, $tmp1004);
                    panda$core$String* $tmp1007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1005, &$s1006);
                    return $tmp1007;
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
        panda$core$Bit $tmp1008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1008.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1010 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9861->$data + 16));
            Type1009 = *$tmp1010;
            return &$s1011;
        }
        }
        else {
        panda$core$Bit $tmp1012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1012.value) {
        {
            panda$core$String** $tmp1014 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label1013 = *$tmp1014;
            if (((panda$core$Bit) { label1013 != NULL }).value) {
            {
                panda$core$String* $tmp1016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1015, label1013);
                panda$core$String* $tmp1018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1016, &$s1017);
                return $tmp1018;
            }
            }
            return &$s1019;
        }
        }
        else {
        panda$core$Bit $tmp1020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1020.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1022 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 0));
            target1021 = *$tmp1022;
            org$pandalanguage$pandac$IRNode** $tmp1024 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 8));
            value1023 = *$tmp1024;
            if (((panda$core$Bit) { value1023 != NULL }).value) {
            {
                panda$core$String* $tmp1026 = (($fn1025) target1021->$class->vtable[0])(target1021);
                panda$core$String* $tmp1028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1026, &$s1027);
                panda$core$String* $tmp1029 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1028, ((panda$core$Object*) value1023));
                panda$core$String* $tmp1031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1029, &$s1030);
                return $tmp1031;
            }
            }
            panda$core$String* $tmp1033 = (($fn1032) target1021->$class->vtable[0])(target1021);
            return $tmp1033;
        }
        }
        else {
        panda$core$Bit $tmp1034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1034.value) {
        {
            panda$core$String** $tmp1036 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label1035 = *$tmp1036;
            panda$collections$ImmutableArray** $tmp1038 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            statements1037 = *$tmp1038;
            org$pandalanguage$pandac$IRNode** $tmp1040 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 32));
            test1039 = *$tmp1040;
            panda$core$MutableString* $tmp1042 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1042);
            result1041 = $tmp1042;
            if (((panda$core$Bit) { label1035 != NULL }).value) {
            {
                panda$core$String* $tmp1043 = panda$core$String$convert$R$panda$core$String(label1035);
                panda$core$String* $tmp1045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1043, &$s1044);
                panda$core$MutableString$append$panda$core$String(result1041, $tmp1045);
            }
            }
            panda$core$MutableString$append$panda$core$String(result1041, &$s1046);
            {
                ITable* $tmp1048 = ((panda$collections$Iterable*) statements1037)->$class->itable;
                while ($tmp1048->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1048 = $tmp1048->next;
                }
                $fn1050 $tmp1049 = $tmp1048->methods[0];
                panda$collections$Iterator* $tmp1051 = $tmp1049(((panda$collections$Iterable*) statements1037));
                s$Iter1047 = $tmp1051;
                $l1052:;
                ITable* $tmp1054 = s$Iter1047->$class->itable;
                while ($tmp1054->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1054 = $tmp1054->next;
                }
                $fn1056 $tmp1055 = $tmp1054->methods[0];
                panda$core$Bit $tmp1057 = $tmp1055(s$Iter1047);
                panda$core$Bit $tmp1058 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1057);
                if (!$tmp1058.value) goto $l1053;
                {
                    ITable* $tmp1060 = s$Iter1047->$class->itable;
                    while ($tmp1060->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1060 = $tmp1060->next;
                    }
                    $fn1062 $tmp1061 = $tmp1060->methods[1];
                    panda$core$Object* $tmp1063 = $tmp1061(s$Iter1047);
                    s1059 = ((org$pandalanguage$pandac$IRNode*) $tmp1063);
                    panda$core$String* $tmp1065 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1059), &$s1064);
                    panda$core$MutableString$append$panda$core$String(result1041, $tmp1065);
                }
                goto $l1052;
                $l1053:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1051));
            }
            panda$core$String* $tmp1067 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1066, ((panda$core$Object*) test1039));
            panda$core$String* $tmp1069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1067, &$s1068);
            panda$core$MutableString$append$panda$core$String(result1041, $tmp1069);
            panda$core$String* $tmp1070 = panda$core$MutableString$finish$R$panda$core$String(result1041);
            return $tmp1070;
        }
        }
        else {
        panda$core$Bit $tmp1071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1071.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1073 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 0));
            expr1072 = *$tmp1073;
            org$pandalanguage$pandac$IRNode** $tmp1075 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 8));
            stmt1074 = *$tmp1075;
            panda$core$String* $tmp1077 = (($fn1076) expr1072->$class->vtable[0])(expr1072);
            panda$core$String* $tmp1079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1077, &$s1078);
            panda$core$String* $tmp1080 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1079, ((panda$core$Object*) stmt1074));
            panda$core$String* $tmp1082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1080, &$s1081);
            return $tmp1082;
        }
        }
        else {
        panda$core$Bit $tmp1083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1083.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1085 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            base1084 = *$tmp1085;
            org$pandalanguage$pandac$FieldDecl** $tmp1087 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$410_9861->$data + 32));
            field1086 = *$tmp1087;
            panda$core$String* $tmp1089 = (($fn1088) base1084->$class->vtable[0])(base1084);
            panda$core$String* $tmp1091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1089, &$s1090);
            panda$core$String* $tmp1092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1091, ((org$pandalanguage$pandac$Symbol*) field1086)->name);
            panda$core$String* $tmp1094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1092, &$s1093);
            return $tmp1094;
        }
        }
        else {
        panda$core$Bit $tmp1095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1095.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1097 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            test1096 = *$tmp1097;
            panda$collections$ImmutableArray** $tmp1099 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            ifTrue1098 = *$tmp1099;
            org$pandalanguage$pandac$IRNode** $tmp1101 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 32));
            ifFalse1100 = *$tmp1101;
            panda$core$MutableString* $tmp1103 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp1105 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1104, ((panda$core$Object*) test1096));
            panda$core$String* $tmp1107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1105, &$s1106);
            panda$core$MutableString$init$panda$core$String($tmp1103, $tmp1107);
            result1102 = $tmp1103;
            {
                ITable* $tmp1109 = ((panda$collections$Iterable*) ifTrue1098)->$class->itable;
                while ($tmp1109->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1109 = $tmp1109->next;
                }
                $fn1111 $tmp1110 = $tmp1109->methods[0];
                panda$collections$Iterator* $tmp1112 = $tmp1110(((panda$collections$Iterable*) ifTrue1098));
                s$Iter1108 = $tmp1112;
                $l1113:;
                ITable* $tmp1115 = s$Iter1108->$class->itable;
                while ($tmp1115->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1115 = $tmp1115->next;
                }
                $fn1117 $tmp1116 = $tmp1115->methods[0];
                panda$core$Bit $tmp1118 = $tmp1116(s$Iter1108);
                panda$core$Bit $tmp1119 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1118);
                if (!$tmp1119.value) goto $l1114;
                {
                    ITable* $tmp1121 = s$Iter1108->$class->itable;
                    while ($tmp1121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1121 = $tmp1121->next;
                    }
                    $fn1123 $tmp1122 = $tmp1121->methods[1];
                    panda$core$Object* $tmp1124 = $tmp1122(s$Iter1108);
                    s1120 = ((org$pandalanguage$pandac$IRNode*) $tmp1124);
                    panda$core$String* $tmp1126 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1120), &$s1125);
                    panda$core$MutableString$append$panda$core$String(result1102, $tmp1126);
                }
                goto $l1113;
                $l1114:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1112));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1127, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1102, $tmp1127);
            if (((panda$core$Bit) { ifFalse1100 != NULL }).value) {
            {
                panda$core$String* $tmp1129 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1128, ((panda$core$Object*) ifFalse1100));
                panda$core$String* $tmp1131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1129, &$s1130);
                panda$core$MutableString$append$panda$core$String(result1102, $tmp1131);
            }
            }
            panda$core$String* $tmp1132 = panda$core$MutableString$finish$R$panda$core$String(result1102);
            return $tmp1132;
        }
        }
        else {
        panda$core$Bit $tmp1133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1133.value) {
        {
            panda$core$UInt64* $tmp1135 = ((panda$core$UInt64*) ((char*) $match$410_9861->$data + 24));
            value1134 = *$tmp1135;
            panda$core$String* $tmp1136 = panda$core$UInt64$convert$R$panda$core$String(value1134);
            return $tmp1136;
        }
        }
        else {
        panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1137.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1139 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            value1138 = *$tmp1139;
            panda$core$String* $tmp1141 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1140, ((panda$core$Object*) value1138));
            panda$core$String* $tmp1143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1141, &$s1142);
            return $tmp1143;
        }
        }
        else {
        panda$core$Bit $tmp1144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1144.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1146 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            value1145 = *$tmp1146;
            panda$core$String* $tmp1148 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1147, ((panda$core$Object*) value1145));
            panda$core$String* $tmp1150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1148, &$s1149);
            return $tmp1150;
        }
        }
        else {
        panda$core$Bit $tmp1151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1151.value) {
        {
            panda$core$String** $tmp1153 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label1152 = *$tmp1153;
            panda$collections$ImmutableArray** $tmp1155 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            statements1154 = *$tmp1155;
            panda$core$MutableString* $tmp1157 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1157);
            result1156 = $tmp1157;
            if (((panda$core$Bit) { label1152 != NULL }).value) {
            {
                panda$core$String* $tmp1158 = panda$core$String$convert$R$panda$core$String(label1152);
                panda$core$String* $tmp1160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1158, &$s1159);
                panda$core$MutableString$append$panda$core$String(result1156, $tmp1160);
            }
            }
            panda$core$MutableString$append$panda$core$String(result1156, &$s1161);
            {
                ITable* $tmp1163 = ((panda$collections$Iterable*) statements1154)->$class->itable;
                while ($tmp1163->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1163 = $tmp1163->next;
                }
                $fn1165 $tmp1164 = $tmp1163->methods[0];
                panda$collections$Iterator* $tmp1166 = $tmp1164(((panda$collections$Iterable*) statements1154));
                s$Iter1162 = $tmp1166;
                $l1167:;
                ITable* $tmp1169 = s$Iter1162->$class->itable;
                while ($tmp1169->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1169 = $tmp1169->next;
                }
                $fn1171 $tmp1170 = $tmp1169->methods[0];
                panda$core$Bit $tmp1172 = $tmp1170(s$Iter1162);
                panda$core$Bit $tmp1173 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1172);
                if (!$tmp1173.value) goto $l1168;
                {
                    ITable* $tmp1175 = s$Iter1162->$class->itable;
                    while ($tmp1175->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1175 = $tmp1175->next;
                    }
                    $fn1177 $tmp1176 = $tmp1175->methods[1];
                    panda$core$Object* $tmp1178 = $tmp1176(s$Iter1162);
                    s1174 = ((org$pandalanguage$pandac$IRNode*) $tmp1178);
                    panda$core$String* $tmp1180 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1174), &$s1179);
                    panda$core$MutableString$append$panda$core$String(result1156, $tmp1180);
                }
                goto $l1167;
                $l1168:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1166));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1181, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1156, $tmp1181);
            panda$core$String* $tmp1182 = panda$core$MutableString$finish$R$panda$core$String(result1156);
            return $tmp1182;
        }
        }
        else {
        panda$core$Bit $tmp1183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1183.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1185 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            value1184 = *$tmp1185;
            panda$collections$ImmutableArray** $tmp1187 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            whens1186 = *$tmp1187;
            panda$collections$ImmutableArray** $tmp1189 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 32));
            other1188 = *$tmp1189;
            panda$core$MutableString* $tmp1191 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp1193 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1192, ((panda$core$Object*) value1184));
            panda$core$String* $tmp1195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1193, &$s1194);
            panda$core$MutableString$init$panda$core$String($tmp1191, $tmp1195);
            result1190 = $tmp1191;
            {
                ITable* $tmp1197 = ((panda$collections$Iterable*) whens1186)->$class->itable;
                while ($tmp1197->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1197 = $tmp1197->next;
                }
                $fn1199 $tmp1198 = $tmp1197->methods[0];
                panda$collections$Iterator* $tmp1200 = $tmp1198(((panda$collections$Iterable*) whens1186));
                w$Iter1196 = $tmp1200;
                $l1201:;
                ITable* $tmp1203 = w$Iter1196->$class->itable;
                while ($tmp1203->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1203 = $tmp1203->next;
                }
                $fn1205 $tmp1204 = $tmp1203->methods[0];
                panda$core$Bit $tmp1206 = $tmp1204(w$Iter1196);
                panda$core$Bit $tmp1207 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1206);
                if (!$tmp1207.value) goto $l1202;
                {
                    ITable* $tmp1209 = w$Iter1196->$class->itable;
                    while ($tmp1209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1209 = $tmp1209->next;
                    }
                    $fn1211 $tmp1210 = $tmp1209->methods[1];
                    panda$core$Object* $tmp1212 = $tmp1210(w$Iter1196);
                    w1208 = ((org$pandalanguage$pandac$IRNode*) $tmp1212);
                    panda$core$String* $tmp1214 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1208), &$s1213);
                    panda$core$MutableString$append$panda$core$String(result1190, $tmp1214);
                }
                goto $l1201;
                $l1202:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1200));
            }
            if (((panda$core$Bit) { other1188 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result1190, &$s1215);
                {
                    ITable* $tmp1217 = ((panda$collections$Iterable*) other1188)->$class->itable;
                    while ($tmp1217->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1217 = $tmp1217->next;
                    }
                    $fn1219 $tmp1218 = $tmp1217->methods[0];
                    panda$collections$Iterator* $tmp1220 = $tmp1218(((panda$collections$Iterable*) other1188));
                    s$Iter1216 = $tmp1220;
                    $l1221:;
                    ITable* $tmp1223 = s$Iter1216->$class->itable;
                    while ($tmp1223->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1223 = $tmp1223->next;
                    }
                    $fn1225 $tmp1224 = $tmp1223->methods[0];
                    panda$core$Bit $tmp1226 = $tmp1224(s$Iter1216);
                    panda$core$Bit $tmp1227 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1226);
                    if (!$tmp1227.value) goto $l1222;
                    {
                        ITable* $tmp1229 = s$Iter1216->$class->itable;
                        while ($tmp1229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1229 = $tmp1229->next;
                        }
                        $fn1231 $tmp1230 = $tmp1229->methods[1];
                        panda$core$Object* $tmp1232 = $tmp1230(s$Iter1216);
                        s1228 = ((org$pandalanguage$pandac$IRNode*) $tmp1232);
                        panda$core$String* $tmp1234 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1228), &$s1233);
                        panda$core$MutableString$append$panda$core$String(result1190, $tmp1234);
                    }
                    goto $l1221;
                    $l1222:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1220));
                }
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1235, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1190, $tmp1235);
            panda$core$String* $tmp1236 = panda$core$MutableString$finish$R$panda$core$String(result1190);
            return $tmp1236;
        }
        }
        else {
        panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1237.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1239 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            target1238 = *$tmp1239;
            org$pandalanguage$pandac$MethodRef** $tmp1241 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$410_9861->$data + 24));
            m1240 = *$tmp1241;
            if (((panda$core$Bit) { target1238 != NULL }).value) {
            {
                panda$core$String* $tmp1243 = (($fn1242) target1238->$class->vtable[0])(target1238);
                panda$core$String* $tmp1245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1243, &$s1244);
                panda$core$String* $tmp1246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1245, ((org$pandalanguage$pandac$Symbol*) m1240->value)->name);
                panda$core$String* $tmp1248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1246, &$s1247);
                return $tmp1248;
            }
            }
            return ((org$pandalanguage$pandac$Symbol*) m1240->value)->name;
        }
        }
        else {
        panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1249.value) {
        {
            panda$core$UInt64* $tmp1251 = ((panda$core$UInt64*) ((char*) $match$410_9861->$data + 24));
            value1250 = *$tmp1251;
            panda$core$UInt64$wrapper* $tmp1253;
            $tmp1253 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp1253->value = value1250;
            panda$core$String* $tmp1254 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1252, ((panda$core$Object*) $tmp1253));
            return $tmp1254;
        }
        }
        else {
        panda$core$Bit $tmp1255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1255.value) {
        {
            return &$s1256;
        }
        }
        else {
        panda$core$Bit $tmp1257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1257.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1259 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$410_9861->$data + 16));
            op1258 = *$tmp1259;
            org$pandalanguage$pandac$IRNode** $tmp1261 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            base1260 = *$tmp1261;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1262;
            $tmp1262 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1262->value = op1258;
            panda$core$String* $tmp1264 = (($fn1263) ((panda$core$Object*) $tmp1262)->$class->vtable[0])(((panda$core$Object*) $tmp1262));
            panda$core$String* $tmp1266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1264, &$s1265);
            panda$core$String* $tmp1267 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1266, ((panda$core$Object*) base1260));
            panda$core$String* $tmp1269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1267, &$s1268);
            return $tmp1269;
        }
        }
        else {
        panda$core$Bit $tmp1270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1270.value) {
        {
            panda$core$String** $tmp1272 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label1271 = *$tmp1272;
            org$pandalanguage$pandac$IRNode** $tmp1274 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            target1273 = *$tmp1274;
            org$pandalanguage$pandac$IRNode** $tmp1276 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 32));
            list1275 = *$tmp1276;
            panda$collections$ImmutableArray** $tmp1278 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 40));
            statements1277 = *$tmp1278;
            panda$core$MutableString* $tmp1280 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1280);
            result1279 = $tmp1280;
            if (((panda$core$Bit) { label1271 != NULL }).value) {
            {
                panda$core$String* $tmp1281 = panda$core$String$convert$R$panda$core$String(label1271);
                panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1281, &$s1282);
                panda$core$MutableString$append$panda$core$String(result1279, $tmp1283);
            }
            }
            panda$core$String* $tmp1285 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1284, ((panda$core$Object*) target1273));
            panda$core$String* $tmp1287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1285, &$s1286);
            panda$core$String* $tmp1288 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1287, ((panda$core$Object*) list1275));
            panda$core$String* $tmp1290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1288, &$s1289);
            panda$core$MutableString$append$panda$core$String(result1279, $tmp1290);
            {
                ITable* $tmp1292 = ((panda$collections$Iterable*) statements1277)->$class->itable;
                while ($tmp1292->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1292 = $tmp1292->next;
                }
                $fn1294 $tmp1293 = $tmp1292->methods[0];
                panda$collections$Iterator* $tmp1295 = $tmp1293(((panda$collections$Iterable*) statements1277));
                s$Iter1291 = $tmp1295;
                $l1296:;
                ITable* $tmp1298 = s$Iter1291->$class->itable;
                while ($tmp1298->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1298 = $tmp1298->next;
                }
                $fn1300 $tmp1299 = $tmp1298->methods[0];
                panda$core$Bit $tmp1301 = $tmp1299(s$Iter1291);
                panda$core$Bit $tmp1302 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1301);
                if (!$tmp1302.value) goto $l1297;
                {
                    ITable* $tmp1304 = s$Iter1291->$class->itable;
                    while ($tmp1304->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1304 = $tmp1304->next;
                    }
                    $fn1306 $tmp1305 = $tmp1304->methods[1];
                    panda$core$Object* $tmp1307 = $tmp1305(s$Iter1291);
                    s1303 = ((org$pandalanguage$pandac$IRNode*) $tmp1307);
                    panda$core$String* $tmp1309 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1303), &$s1308);
                    panda$core$MutableString$append$panda$core$String(result1279, $tmp1309);
                }
                goto $l1296;
                $l1297:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1295));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1310, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1279, $tmp1310);
            panda$core$String* $tmp1311 = panda$core$MutableString$finish$R$panda$core$String(result1279);
            return $tmp1311;
        }
        }
        else {
        panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1312.value) {
        {
            panda$core$Real64* $tmp1314 = ((panda$core$Real64*) ((char*) $match$410_9861->$data + 24));
            value1313 = *$tmp1314;
            panda$core$String* $tmp1315 = panda$core$Real64$convert$R$panda$core$String(value1313);
            return $tmp1315;
        }
        }
        else {
        panda$core$Bit $tmp1316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1316.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1318 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            value1317 = *$tmp1318;
            if (((panda$core$Bit) { value1317 != NULL }).value) {
            {
                panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1319, ((panda$core$Object*) value1317));
                panda$core$String* $tmp1322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1320, &$s1321);
                return $tmp1322;
            }
            }
            return &$s1323;
        }
        }
        else {
        panda$core$Bit $tmp1324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1324.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1326 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9861->$data + 16));
            type1325 = *$tmp1326;
            panda$core$Int64* $tmp1328 = ((panda$core$Int64*) ((char*) $match$410_9861->$data + 24));
            id1327 = *$tmp1328;
            panda$core$Int64$wrapper* $tmp1330;
            $tmp1330 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1330->value = id1327;
            panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1329, ((panda$core$Object*) $tmp1330));
            panda$core$String* $tmp1333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, &$s1332);
            panda$core$String* $tmp1334 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1333, ((panda$core$Object*) type1325));
            panda$core$String* $tmp1336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1334, &$s1335);
            return $tmp1336;
        }
        }
        else {
        panda$core$Bit $tmp1337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1337.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1339 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 0));
            base1338 = *$tmp1339;
            panda$core$Int64* $tmp1341 = ((panda$core$Int64*) ((char*) $match$410_9861->$data + 8));
            id1340 = *$tmp1341;
            panda$core$Int64$wrapper* $tmp1343;
            $tmp1343 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1343->value = id1340;
            panda$core$String* $tmp1344 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1342, ((panda$core$Object*) $tmp1343));
            panda$core$String* $tmp1346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1344, &$s1345);
            panda$core$String* $tmp1347 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1346, ((panda$core$Object*) base1338));
            panda$core$String* $tmp1349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1347, &$s1348);
            return $tmp1349;
        }
        }
        else {
        panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1350.value) {
        {
            return &$s1351;
        }
        }
        else {
        panda$core$Bit $tmp1352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1352.value) {
        {
            panda$core$String** $tmp1354 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            str1353 = *$tmp1354;
            return str1353;
        }
        }
        else {
        panda$core$Bit $tmp1355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1355.value) {
        {
            return &$s1356;
        }
        }
        else {
        panda$core$Bit $tmp1357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1357.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1359 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            test1358 = *$tmp1359;
            org$pandalanguage$pandac$IRNode** $tmp1361 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            ifTrue1360 = *$tmp1361;
            org$pandalanguage$pandac$IRNode** $tmp1363 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 32));
            ifFalse1362 = *$tmp1363;
            panda$core$String* $tmp1365 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1364, ((panda$core$Object*) test1358));
            panda$core$String* $tmp1367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1365, &$s1366);
            panda$core$String* $tmp1368 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1367, ((panda$core$Object*) ifTrue1360));
            panda$core$String* $tmp1370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1368, &$s1369);
            panda$core$String* $tmp1371 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1370, ((panda$core$Object*) ifFalse1362));
            panda$core$String* $tmp1373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1371, &$s1372);
            return $tmp1373;
        }
        }
        else {
        panda$core$Bit $tmp1374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1374.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1376 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9861->$data + 16));
            type1375 = *$tmp1376;
            panda$core$String* $tmp1377 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1375);
            return $tmp1377;
        }
        }
        else {
        panda$core$Bit $tmp1378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1378.value) {
        {
            panda$core$String** $tmp1380 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            name1379 = *$tmp1380;
            return name1379;
        }
        }
        else {
        panda$core$Bit $tmp1381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1381.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1383 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            base1382 = *$tmp1383;
            panda$collections$ImmutableArray** $tmp1385 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 32));
            args1384 = *$tmp1385;
            panda$core$String* $tmp1387 = (($fn1386) base1382->$class->vtable[0])(base1382);
            panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1387, &$s1388);
            panda$core$String* $tmp1390 = panda$collections$ImmutableArray$join$R$panda$core$String(args1384);
            panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, $tmp1390);
            panda$core$String* $tmp1393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1391, &$s1392);
            return $tmp1393;
        }
        }
        else {
        panda$core$Bit $tmp1394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1394.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1396 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            target1395 = *$tmp1396;
            panda$collections$ImmutableArray** $tmp1398 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 32));
            methods1397 = *$tmp1398;
            panda$collections$ImmutableArray** $tmp1400 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 40));
            args1399 = *$tmp1400;
            panda$core$String* $tmp1402 = (($fn1401) target1395->$class->vtable[0])(target1395);
            panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1402, &$s1403);
            panda$core$Object* $tmp1405 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods1397, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1404, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp1405)->value)->name);
            panda$core$String* $tmp1408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1406, &$s1407);
            panda$core$String* $tmp1409 = panda$collections$ImmutableArray$join$R$panda$core$String(args1399);
            panda$core$String* $tmp1410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1408, $tmp1409);
            panda$core$String* $tmp1412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1410, &$s1411);
            return $tmp1412;
        }
        }
        else {
        panda$core$Bit $tmp1413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1413.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1415 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            target1414 = *$tmp1415;
            panda$collections$ImmutableArray** $tmp1417 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            methods1416 = *$tmp1417;
            panda$core$String* $tmp1419 = (($fn1418) target1414->$class->vtable[0])(target1414);
            panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, &$s1420);
            panda$core$Object* $tmp1422 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods1416, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp1422)->value)->name);
            panda$core$String* $tmp1425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1423, &$s1424);
            return $tmp1425;
        }
        }
        else {
        panda$core$Bit $tmp1426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1426.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1428 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 16));
            start1427 = *$tmp1428;
            org$pandalanguage$pandac$IRNode** $tmp1430 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            end1429 = *$tmp1430;
            panda$core$Bit* $tmp1432 = ((panda$core$Bit*) ((char*) $match$410_9861->$data + 32));
            inclusive1431 = *$tmp1432;
            org$pandalanguage$pandac$IRNode** $tmp1434 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 33));
            step1433 = *$tmp1434;
            panda$core$MutableString* $tmp1436 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1436);
            result1435 = $tmp1436;
            if (((panda$core$Bit) { start1427 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1435, ((panda$core$Object*) start1427));
            }
            }
            if (inclusive1431.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1435, &$s1437);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result1435, &$s1438);
            }
            }
            if (((panda$core$Bit) { end1429 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1435, ((panda$core$Object*) end1429));
            }
            }
            if (((panda$core$Bit) { step1433 != NULL }).value) {
            {
                panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1439, ((panda$core$Object*) step1433));
                panda$core$String* $tmp1442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1440, &$s1441);
                panda$core$MutableString$append$panda$core$String(result1435, $tmp1442);
            }
            }
            panda$core$String* $tmp1443 = panda$core$MutableString$finish$R$panda$core$String(result1435);
            return $tmp1443;
        }
        }
        else {
        panda$core$Bit $tmp1444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1444.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1446 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$410_9861->$data + 16));
            kind1445 = *$tmp1446;
            panda$collections$ImmutableArray** $tmp1448 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            decls1447 = *$tmp1448;
            panda$core$MutableString* $tmp1450 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1450);
            result1449 = $tmp1450;
            {
                $match$588_171451 = kind1445;
                panda$core$Bit $tmp1452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171451.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp1452.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1449, &$s1453);
                }
                }
                else {
                panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171451.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp1454.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1449, &$s1455);
                }
                }
                else {
                panda$core$Bit $tmp1456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171451.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp1456.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1449, &$s1457);
                }
                }
                else {
                panda$core$Bit $tmp1458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$588_171451.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp1458.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1449, &$s1459);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp1460 = panda$collections$ImmutableArray$join$R$panda$core$String(decls1447);
            panda$core$MutableString$append$panda$core$String(result1449, $tmp1460);
            panda$core$String* $tmp1461 = panda$core$MutableString$finish$R$panda$core$String(result1449);
            return $tmp1461;
        }
        }
        else {
        panda$core$Bit $tmp1462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1462.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1464 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$410_9861->$data + 16));
            variable1463 = *$tmp1464;
            return ((org$pandalanguage$pandac$Symbol*) variable1463)->name;
        }
        }
        else {
        panda$core$Bit $tmp1465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1465.value) {
        {
            panda$collections$ImmutableArray** $tmp1467 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 16));
            tests1466 = *$tmp1467;
            panda$collections$ImmutableArray** $tmp1469 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 24));
            statements1468 = *$tmp1469;
            panda$core$String* $tmp1471 = panda$collections$ImmutableArray$join$R$panda$core$String(tests1466);
            panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1470, $tmp1471);
            panda$core$String* $tmp1474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1472, &$s1473);
            panda$core$String* $tmp1476 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(statements1468, &$s1475);
            panda$core$String* $tmp1477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1474, $tmp1476);
            panda$core$String* $tmp1479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1477, &$s1478);
            return $tmp1479;
        }
        }
        else {
        panda$core$Bit $tmp1480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9861->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1480.value) {
        {
            panda$core$String** $tmp1482 = ((panda$core$String**) ((char*) $match$410_9861->$data + 16));
            label1481 = *$tmp1482;
            org$pandalanguage$pandac$IRNode** $tmp1484 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9861->$data + 24));
            test1483 = *$tmp1484;
            panda$collections$ImmutableArray** $tmp1486 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9861->$data + 32));
            statements1485 = *$tmp1486;
            panda$core$MutableString* $tmp1488 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1488);
            result1487 = $tmp1488;
            if (((panda$core$Bit) { label1481 != NULL }).value) {
            {
                panda$core$String* $tmp1489 = panda$core$String$convert$R$panda$core$String(label1481);
                panda$core$String* $tmp1491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1489, &$s1490);
                panda$core$MutableString$append$panda$core$String(result1487, $tmp1491);
            }
            }
            panda$core$String* $tmp1493 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1492, ((panda$core$Object*) test1483));
            panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1493, &$s1494);
            panda$core$MutableString$append$panda$core$String(result1487, $tmp1495);
            {
                ITable* $tmp1497 = ((panda$collections$Iterable*) statements1485)->$class->itable;
                while ($tmp1497->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1497 = $tmp1497->next;
                }
                $fn1499 $tmp1498 = $tmp1497->methods[0];
                panda$collections$Iterator* $tmp1500 = $tmp1498(((panda$collections$Iterable*) statements1485));
                s$Iter1496 = $tmp1500;
                $l1501:;
                ITable* $tmp1503 = s$Iter1496->$class->itable;
                while ($tmp1503->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1503 = $tmp1503->next;
                }
                $fn1505 $tmp1504 = $tmp1503->methods[0];
                panda$core$Bit $tmp1506 = $tmp1504(s$Iter1496);
                panda$core$Bit $tmp1507 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1506);
                if (!$tmp1507.value) goto $l1502;
                {
                    ITable* $tmp1509 = s$Iter1496->$class->itable;
                    while ($tmp1509->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1509 = $tmp1509->next;
                    }
                    $fn1511 $tmp1510 = $tmp1509->methods[1];
                    panda$core$Object* $tmp1512 = $tmp1510(s$Iter1496);
                    s1508 = ((org$pandalanguage$pandac$IRNode*) $tmp1512);
                    panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1508), &$s1513);
                    panda$core$MutableString$append$panda$core$String(result1487, $tmp1514);
                }
                goto $l1501;
                $l1502:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1500));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1515, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1487, $tmp1515);
            panda$core$String* $tmp1516 = panda$core$MutableString$finish$R$panda$core$String(result1487);
            return $tmp1516;
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

