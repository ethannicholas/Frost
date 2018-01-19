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
typedef org$pandalanguage$pandac$Type* (*$fn180)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn193)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn208)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn210)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn213)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn272)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn280)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn330)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn381)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn384)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn398)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn402)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn414)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn420)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn426)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn428)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn442)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn448)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn454)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn456)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn478)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn493)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn503)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn508)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn514)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn520)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn522)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn537)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn542)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn548)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn554)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn556)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn558)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn566)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn571)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn581)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn587)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn593)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn595)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn604)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn609)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn615)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn621)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn623)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn628)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn634)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn640)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn642)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn658)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn669)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn674)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn680)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn686)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn688)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn696)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn706)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn722)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn725)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn729)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn772)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn778)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn784)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn786)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn799)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn805)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn811)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn813)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn818)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn824)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn830)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn832)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn841)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn846)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn852)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn858)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn860)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn886)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn911)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn917)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn923)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn954)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn972)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1016)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1023)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1042)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1048)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1054)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1068)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1080)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1104)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1110)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1116)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1159)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1165)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1171)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1194)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1200)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1206)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1214)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1220)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1226)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1237)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1258)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1290)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1296)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1302)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1382)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1397)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1414)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1498)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1504)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1510)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s1140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s1285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x3a\x20", 17, -7730994269199854653, NULL };
static panda$core$String $s1328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3a\x20", 28, 2945252663019609900, NULL };
static panda$core$String $s1341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    org$pandalanguage$pandac$Position $tmp170;
    org$pandalanguage$pandac$Type* type172;
    org$pandalanguage$pandac$Type* type175;
    org$pandalanguage$pandac$IRNode* base178;
    org$pandalanguage$pandac$Type* type183;
    org$pandalanguage$pandac$Type* type186;
    panda$core$Int64 id188;
    org$pandalanguage$pandac$IRNode* base191;
    org$pandalanguage$pandac$Type* type196;
    org$pandalanguage$pandac$Type* type201;
    org$pandalanguage$pandac$IRNode* ifTrue204;
    org$pandalanguage$pandac$IRNode* ifFalse206;
    org$pandalanguage$pandac$Type* type220;
    org$pandalanguage$pandac$Type* type223;
    org$pandalanguage$pandac$Variable* variable230;
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
            org$pandalanguage$pandac$Type* $tmp167 = (org$pandalanguage$pandac$Type*) pandaZAlloc(96);
            $tmp167->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp167->refCount.value = 1;
            org$pandalanguage$pandac$Position$init(&$tmp170);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp167, &$s169, ((panda$core$Int64) { 16 }), $tmp170, ((panda$core$Bit) { true }));
            return $tmp167;
        }
        }
        else {
        panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp171.value) {
        {
            org$pandalanguage$pandac$Type** $tmp173 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type172 = *$tmp173;
            return type172;
        }
        }
        else {
        panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp174.value) {
        {
            org$pandalanguage$pandac$Type** $tmp176 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type175 = *$tmp176;
            return type175;
        }
        }
        else {
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp177.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp179 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9120->$data + 24));
            base178 = *$tmp179;
            org$pandalanguage$pandac$Type* $tmp181 = (($fn180) base178->$class->vtable[2])(base178);
            return $tmp181;
        }
        }
        else {
        panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp182.value) {
        {
            org$pandalanguage$pandac$Type** $tmp184 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type183 = *$tmp184;
            return type183;
        }
        }
        else {
        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp185.value) {
        {
            org$pandalanguage$pandac$Type** $tmp187 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type186 = *$tmp187;
            panda$core$Int64* $tmp189 = ((panda$core$Int64*) ((char*) $match$66_9120->$data + 24));
            id188 = *$tmp189;
            return type186;
        }
        }
        else {
        panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp190.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp192 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9120->$data + 0));
            base191 = *$tmp192;
            org$pandalanguage$pandac$Type* $tmp194 = (($fn193) base191->$class->vtable[2])(base191);
            return $tmp194;
        }
        }
        else {
        panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp195.value) {
        {
            org$pandalanguage$pandac$Type** $tmp197 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type196 = *$tmp197;
            return type196;
        }
        }
        else {
        panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp198.value) {
        {
            org$pandalanguage$pandac$Type* $tmp199 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            return $tmp199;
        }
        }
        else {
        panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp200.value) {
        {
            org$pandalanguage$pandac$Type** $tmp202 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type201 = *$tmp202;
            return type201;
        }
        }
        else {
        panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp203.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp205 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9120->$data + 24));
            ifTrue204 = *$tmp205;
            org$pandalanguage$pandac$IRNode** $tmp207 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$66_9120->$data + 32));
            ifFalse206 = *$tmp207;
            org$pandalanguage$pandac$Type* $tmp209 = (($fn208) ifTrue204->$class->vtable[2])(ifTrue204);
            org$pandalanguage$pandac$Type* $tmp211 = (($fn210) ifFalse206->$class->vtable[2])(ifFalse206);
            panda$core$Bit $tmp212 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp209, $tmp211);
            PANDA_ASSERT($tmp212.value);
            org$pandalanguage$pandac$Type* $tmp214 = (($fn213) ifTrue204->$class->vtable[2])(ifTrue204);
            return $tmp214;
        }
        }
        else {
        panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp215.value) {
        {
            org$pandalanguage$pandac$Type* $tmp216 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            return $tmp216;
        }
        }
        else {
        panda$core$Bit $tmp217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp217.value) {
        {
            org$pandalanguage$pandac$Type* $tmp218 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp218;
        }
        }
        else {
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp219.value) {
        {
            org$pandalanguage$pandac$Type** $tmp221 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type220 = *$tmp221;
            return type220;
        }
        }
        else {
        panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp222.value) {
        {
            org$pandalanguage$pandac$Type** $tmp224 = ((org$pandalanguage$pandac$Type**) ((char*) $match$66_9120->$data + 16));
            type223 = *$tmp224;
            return type223;
        }
        }
        else {
        panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp225.value) {
        {
            org$pandalanguage$pandac$Type* $tmp226 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp226;
        }
        }
        else {
        panda$core$Bit $tmp227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp227.value) {
        {
            org$pandalanguage$pandac$Type* $tmp228 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp228;
        }
        }
        else {
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_9120->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp229.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp231 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$66_9120->$data + 16));
            variable230 = *$tmp231;
            return variable230->type;
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
    org$pandalanguage$pandac$IRNode* $match$136_9232;
    org$pandalanguage$pandac$Position position234;
    org$pandalanguage$pandac$Position position237;
    org$pandalanguage$pandac$Position position240;
    org$pandalanguage$pandac$Position position243;
    org$pandalanguage$pandac$Position position246;
    org$pandalanguage$pandac$Position position249;
    org$pandalanguage$pandac$Position position252;
    org$pandalanguage$pandac$Position position255;
    org$pandalanguage$pandac$Position position258;
    org$pandalanguage$pandac$Position position261;
    org$pandalanguage$pandac$Position position264;
    org$pandalanguage$pandac$Position position267;
    org$pandalanguage$pandac$IRNode* target270;
    org$pandalanguage$pandac$Position position275;
    org$pandalanguage$pandac$IRNode* expr278;
    org$pandalanguage$pandac$Position position283;
    org$pandalanguage$pandac$Position position286;
    org$pandalanguage$pandac$Position position289;
    org$pandalanguage$pandac$Position position292;
    org$pandalanguage$pandac$Position position295;
    org$pandalanguage$pandac$Position position298;
    org$pandalanguage$pandac$Position position301;
    org$pandalanguage$pandac$Position position304;
    org$pandalanguage$pandac$Position position307;
    org$pandalanguage$pandac$Position position310;
    org$pandalanguage$pandac$Position position313;
    org$pandalanguage$pandac$Position position316;
    org$pandalanguage$pandac$Position position319;
    org$pandalanguage$pandac$Position position322;
    org$pandalanguage$pandac$Position position325;
    org$pandalanguage$pandac$IRNode* base328;
    org$pandalanguage$pandac$Position position333;
    org$pandalanguage$pandac$Position position336;
    org$pandalanguage$pandac$Position position339;
    org$pandalanguage$pandac$Position position342;
    org$pandalanguage$pandac$Position position345;
    org$pandalanguage$pandac$Position position348;
    org$pandalanguage$pandac$Position position351;
    org$pandalanguage$pandac$Position position354;
    org$pandalanguage$pandac$Position position357;
    org$pandalanguage$pandac$Position position360;
    org$pandalanguage$pandac$Position position363;
    org$pandalanguage$pandac$Position position366;
    org$pandalanguage$pandac$Position position369;
    org$pandalanguage$pandac$Position position372;
    {
        $match$136_9232 = self;
        panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp233.value) {
        {
            org$pandalanguage$pandac$Position* $tmp235 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position234 = *$tmp235;
            return position234;
        }
        }
        else {
        panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp236.value) {
        {
            org$pandalanguage$pandac$Position* $tmp238 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position237 = *$tmp238;
            return position237;
        }
        }
        else {
        panda$core$Bit $tmp239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp239.value) {
        {
            org$pandalanguage$pandac$Position* $tmp241 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position240 = *$tmp241;
            return position240;
        }
        }
        else {
        panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp242.value) {
        {
            org$pandalanguage$pandac$Position* $tmp244 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position243 = *$tmp244;
            return position243;
        }
        }
        else {
        panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp245.value) {
        {
            org$pandalanguage$pandac$Position* $tmp247 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position246 = *$tmp247;
            return position246;
        }
        }
        else {
        panda$core$Bit $tmp248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp248.value) {
        {
            org$pandalanguage$pandac$Position* $tmp250 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position249 = *$tmp250;
            return position249;
        }
        }
        else {
        panda$core$Bit $tmp251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp251.value) {
        {
            org$pandalanguage$pandac$Position* $tmp253 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position252 = *$tmp253;
            return position252;
        }
        }
        else {
        panda$core$Bit $tmp254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp254.value) {
        {
            org$pandalanguage$pandac$Position* $tmp256 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position255 = *$tmp256;
            return position255;
        }
        }
        else {
        panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp257.value) {
        {
            org$pandalanguage$pandac$Position* $tmp259 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position258 = *$tmp259;
            return position258;
        }
        }
        else {
        panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp260.value) {
        {
            org$pandalanguage$pandac$Position* $tmp262 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position261 = *$tmp262;
            return position261;
        }
        }
        else {
        panda$core$Bit $tmp263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp263.value) {
        {
            org$pandalanguage$pandac$Position* $tmp265 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position264 = *$tmp265;
            return position264;
        }
        }
        else {
        panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp266.value) {
        {
            org$pandalanguage$pandac$Position* $tmp268 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position267 = *$tmp268;
            return position267;
        }
        }
        else {
        panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp269.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp271 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$136_9232->$data + 0));
            target270 = *$tmp271;
            org$pandalanguage$pandac$Position $tmp273 = (($fn272) target270->$class->vtable[3])(target270);
            return $tmp273;
        }
        }
        else {
        panda$core$Bit $tmp274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp274.value) {
        {
            org$pandalanguage$pandac$Position* $tmp276 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position275 = *$tmp276;
            return position275;
        }
        }
        else {
        panda$core$Bit $tmp277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp277.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp279 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$136_9232->$data + 0));
            expr278 = *$tmp279;
            org$pandalanguage$pandac$Position $tmp281 = (($fn280) expr278->$class->vtable[3])(expr278);
            return $tmp281;
        }
        }
        else {
        panda$core$Bit $tmp282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp282.value) {
        {
            org$pandalanguage$pandac$Position* $tmp284 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position283 = *$tmp284;
            return position283;
        }
        }
        else {
        panda$core$Bit $tmp285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp285.value) {
        {
            org$pandalanguage$pandac$Position* $tmp287 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position286 = *$tmp287;
            return position286;
        }
        }
        else {
        panda$core$Bit $tmp288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp288.value) {
        {
            org$pandalanguage$pandac$Position* $tmp290 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position289 = *$tmp290;
            return position289;
        }
        }
        else {
        panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp291.value) {
        {
            org$pandalanguage$pandac$Position* $tmp293 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position292 = *$tmp293;
            return position292;
        }
        }
        else {
        panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp294.value) {
        {
            org$pandalanguage$pandac$Position* $tmp296 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position295 = *$tmp296;
            return position295;
        }
        }
        else {
        panda$core$Bit $tmp297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp297.value) {
        {
            org$pandalanguage$pandac$Position* $tmp299 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position298 = *$tmp299;
            return position298;
        }
        }
        else {
        panda$core$Bit $tmp300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp300.value) {
        {
            org$pandalanguage$pandac$Position* $tmp302 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position301 = *$tmp302;
            return position301;
        }
        }
        else {
        panda$core$Bit $tmp303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp303.value) {
        {
            org$pandalanguage$pandac$Position* $tmp305 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position304 = *$tmp305;
            return position304;
        }
        }
        else {
        panda$core$Bit $tmp306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp306.value) {
        {
            org$pandalanguage$pandac$Position* $tmp308 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position307 = *$tmp308;
            return position307;
        }
        }
        else {
        panda$core$Bit $tmp309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp309.value) {
        {
            org$pandalanguage$pandac$Position* $tmp311 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position310 = *$tmp311;
            return position310;
        }
        }
        else {
        panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp312.value) {
        {
            org$pandalanguage$pandac$Position* $tmp314 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position313 = *$tmp314;
            return position313;
        }
        }
        else {
        panda$core$Bit $tmp315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp315.value) {
        {
            org$pandalanguage$pandac$Position* $tmp317 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position316 = *$tmp317;
            return position316;
        }
        }
        else {
        panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp318.value) {
        {
            org$pandalanguage$pandac$Position* $tmp320 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position319 = *$tmp320;
            return position319;
        }
        }
        else {
        panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp321.value) {
        {
            org$pandalanguage$pandac$Position* $tmp323 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position322 = *$tmp323;
            return position322;
        }
        }
        else {
        panda$core$Bit $tmp324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp324.value) {
        {
            org$pandalanguage$pandac$Position* $tmp326 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position325 = *$tmp326;
            return position325;
        }
        }
        else {
        panda$core$Bit $tmp327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp327.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp329 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$136_9232->$data + 0));
            base328 = *$tmp329;
            org$pandalanguage$pandac$Position $tmp331 = (($fn330) base328->$class->vtable[3])(base328);
            return $tmp331;
        }
        }
        else {
        panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp332.value) {
        {
            org$pandalanguage$pandac$Position* $tmp334 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position333 = *$tmp334;
            return position333;
        }
        }
        else {
        panda$core$Bit $tmp335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp335.value) {
        {
            org$pandalanguage$pandac$Position* $tmp337 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position336 = *$tmp337;
            return position336;
        }
        }
        else {
        panda$core$Bit $tmp338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp338.value) {
        {
            org$pandalanguage$pandac$Position* $tmp340 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position339 = *$tmp340;
            return position339;
        }
        }
        else {
        panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp341.value) {
        {
            org$pandalanguage$pandac$Position* $tmp343 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position342 = *$tmp343;
            return position342;
        }
        }
        else {
        panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp344.value) {
        {
            org$pandalanguage$pandac$Position* $tmp346 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position345 = *$tmp346;
            return position345;
        }
        }
        else {
        panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp347.value) {
        {
            org$pandalanguage$pandac$Position* $tmp349 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position348 = *$tmp349;
            return position348;
        }
        }
        else {
        panda$core$Bit $tmp350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp350.value) {
        {
            org$pandalanguage$pandac$Position* $tmp352 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position351 = *$tmp352;
            return position351;
        }
        }
        else {
        panda$core$Bit $tmp353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp353.value) {
        {
            org$pandalanguage$pandac$Position* $tmp355 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position354 = *$tmp355;
            return position354;
        }
        }
        else {
        panda$core$Bit $tmp356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp356.value) {
        {
            org$pandalanguage$pandac$Position* $tmp358 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position357 = *$tmp358;
            return position357;
        }
        }
        else {
        panda$core$Bit $tmp359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp359.value) {
        {
            org$pandalanguage$pandac$Position* $tmp361 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position360 = *$tmp361;
            return position360;
        }
        }
        else {
        panda$core$Bit $tmp362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp362.value) {
        {
            org$pandalanguage$pandac$Position* $tmp364 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position363 = *$tmp364;
            return position363;
        }
        }
        else {
        panda$core$Bit $tmp365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp365.value) {
        {
            org$pandalanguage$pandac$Position* $tmp367 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position366 = *$tmp367;
            return position366;
        }
        }
        else {
        panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp368.value) {
        {
            org$pandalanguage$pandac$Position* $tmp370 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position369 = *$tmp370;
            return position369;
        }
        }
        else {
        panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9232->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp371.value) {
        {
            org$pandalanguage$pandac$Position* $tmp373 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_9232->$data + 0));
            position372 = *$tmp373;
            return position372;
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
    org$pandalanguage$pandac$IRNode* $match$233_9374;
    org$pandalanguage$pandac$IRNode* test376;
    org$pandalanguage$pandac$IRNode* msg378;
    org$pandalanguage$pandac$IRNode* left388;
    org$pandalanguage$pandac$parser$Token$Kind op390;
    org$pandalanguage$pandac$IRNode* right392;
    panda$core$Bit bit406;
    panda$collections$ImmutableArray* statements409;
    panda$collections$Iterator* s$Iter411;
    org$pandalanguage$pandac$IRNode* s423;
    panda$core$String* label431;
    org$pandalanguage$pandac$MethodRef* m434;
    panda$collections$ImmutableArray* args436;
    panda$collections$Iterator* arg$Iter439;
    org$pandalanguage$pandac$IRNode* arg451;
    org$pandalanguage$pandac$IRNode* value459;
    org$pandalanguage$pandac$Type* type461;
    org$pandalanguage$pandac$ChoiceEntry* ce464;
    org$pandalanguage$pandac$IRNode* base467;
    org$pandalanguage$pandac$ChoiceEntry* ce469;
    panda$core$Int64 field471;
    org$pandalanguage$pandac$Type* type474;
    org$pandalanguage$pandac$IRNode* call476;
    org$pandalanguage$pandac$Type* Type481;
    panda$core$String* label484;
    org$pandalanguage$pandac$IRNode* target487;
    org$pandalanguage$pandac$IRNode* value489;
    panda$core$String* label497;
    panda$collections$ImmutableArray* statements499;
    org$pandalanguage$pandac$IRNode* test501;
    panda$collections$Iterator* s$Iter505;
    org$pandalanguage$pandac$IRNode* s517;
    org$pandalanguage$pandac$IRNode* base526;
    org$pandalanguage$pandac$FieldDecl* field528;
    org$pandalanguage$pandac$IRNode* test531;
    panda$collections$ImmutableArray* ifTrue533;
    org$pandalanguage$pandac$IRNode* ifFalse535;
    panda$collections$Iterator* s$Iter539;
    org$pandalanguage$pandac$IRNode* s551;
    panda$core$UInt64 value561;
    org$pandalanguage$pandac$IRNode* value564;
    org$pandalanguage$pandac$IRNode* value569;
    panda$core$String* label574;
    panda$collections$ImmutableArray* statements576;
    panda$collections$Iterator* s$Iter578;
    org$pandalanguage$pandac$IRNode* s590;
    org$pandalanguage$pandac$IRNode* value598;
    panda$collections$ImmutableArray* whens600;
    panda$collections$ImmutableArray* other602;
    panda$collections$Iterator* w$Iter606;
    org$pandalanguage$pandac$IRNode* w618;
    panda$collections$Iterator* s$Iter625;
    org$pandalanguage$pandac$IRNode* s637;
    org$pandalanguage$pandac$IRNode* target645;
    org$pandalanguage$pandac$MethodRef* m647;
    panda$core$UInt64 value650;
    org$pandalanguage$pandac$parser$Token$Kind op654;
    org$pandalanguage$pandac$IRNode* base656;
    panda$core$String* label661;
    org$pandalanguage$pandac$IRNode* target663;
    org$pandalanguage$pandac$IRNode* list665;
    panda$collections$ImmutableArray* statements667;
    panda$collections$Iterator* s$Iter671;
    org$pandalanguage$pandac$IRNode* s683;
    panda$core$Real64 value691;
    org$pandalanguage$pandac$IRNode* value694;
    panda$core$Int64 id699;
    org$pandalanguage$pandac$IRNode* base702;
    panda$core$Int64 id704;
    panda$core$String* str710;
    org$pandalanguage$pandac$IRNode* test714;
    org$pandalanguage$pandac$IRNode* ifTrue716;
    org$pandalanguage$pandac$IRNode* ifFalse718;
    org$pandalanguage$pandac$Type* type733;
    panda$core$String* name736;
    org$pandalanguage$pandac$IRNode* base739;
    panda$collections$ImmutableArray* args741;
    org$pandalanguage$pandac$IRNode* target744;
    panda$collections$ImmutableArray* methods746;
    panda$collections$ImmutableArray* args748;
    org$pandalanguage$pandac$IRNode* target751;
    panda$collections$ImmutableArray* methods753;
    org$pandalanguage$pandac$IRNode* start756;
    org$pandalanguage$pandac$IRNode* end758;
    panda$core$Bit inclusive760;
    org$pandalanguage$pandac$IRNode* step762;
    org$pandalanguage$pandac$Variable$Kind kind765;
    panda$collections$ImmutableArray* decls767;
    panda$collections$Iterator* d$Iter769;
    org$pandalanguage$pandac$IRNode* d781;
    org$pandalanguage$pandac$Variable* variable789;
    panda$collections$ImmutableArray* tests792;
    panda$collections$ImmutableArray* statements794;
    panda$collections$Iterator* t$Iter796;
    org$pandalanguage$pandac$IRNode* t808;
    panda$collections$Iterator* s$Iter815;
    org$pandalanguage$pandac$IRNode* s827;
    panda$core$String* label835;
    org$pandalanguage$pandac$IRNode* test837;
    panda$collections$ImmutableArray* statements839;
    panda$collections$Iterator* s$Iter843;
    org$pandalanguage$pandac$IRNode* s855;
    {
        $match$233_9374 = self;
        panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp375.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp377 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 16));
            test376 = *$tmp377;
            org$pandalanguage$pandac$IRNode** $tmp379 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 24));
            msg378 = *$tmp379;
            panda$core$Bit $tmp382 = (($fn381) test376->$class->vtable[4])(test376);
            bool $tmp380 = $tmp382.value;
            if ($tmp380) goto $l383;
            panda$core$Bit $tmp385 = (($fn384) msg378->$class->vtable[4])(msg378);
            $tmp380 = $tmp385.value;
            $l383:;
            panda$core$Bit $tmp386 = { $tmp380 };
            return $tmp386;
        }
        }
        else {
        panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp387.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp389 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 24));
            left388 = *$tmp389;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp391 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$233_9374->$data + 32));
            op390 = *$tmp391;
            org$pandalanguage$pandac$IRNode** $tmp393 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 40));
            right392 = *$tmp393;
            panda$core$Bit $tmp396 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op390);
            bool $tmp395 = $tmp396.value;
            if ($tmp395) goto $l397;
            panda$core$Bit $tmp399 = (($fn398) left388->$class->vtable[4])(left388);
            $tmp395 = $tmp399.value;
            $l397:;
            panda$core$Bit $tmp400 = { $tmp395 };
            bool $tmp394 = $tmp400.value;
            if ($tmp394) goto $l401;
            panda$core$Bit $tmp403 = (($fn402) right392->$class->vtable[4])(right392);
            $tmp394 = $tmp403.value;
            $l401:;
            panda$core$Bit $tmp404 = { $tmp394 };
            return $tmp404;
        }
        }
        else {
        panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp405.value) {
        {
            panda$core$Bit* $tmp407 = ((panda$core$Bit*) ((char*) $match$233_9374->$data + 24));
            bit406 = *$tmp407;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp408.value) {
        {
            panda$collections$ImmutableArray** $tmp410 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 16));
            statements409 = *$tmp410;
            {
                ITable* $tmp412 = ((panda$collections$Iterable*) statements409)->$class->itable;
                while ($tmp412->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp412 = $tmp412->next;
                }
                $fn414 $tmp413 = $tmp412->methods[0];
                panda$collections$Iterator* $tmp415 = $tmp413(((panda$collections$Iterable*) statements409));
                s$Iter411 = $tmp415;
                $l416:;
                ITable* $tmp418 = s$Iter411->$class->itable;
                while ($tmp418->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp418 = $tmp418->next;
                }
                $fn420 $tmp419 = $tmp418->methods[0];
                panda$core$Bit $tmp421 = $tmp419(s$Iter411);
                panda$core$Bit $tmp422 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp421);
                if (!$tmp422.value) goto $l417;
                {
                    ITable* $tmp424 = s$Iter411->$class->itable;
                    while ($tmp424->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp424 = $tmp424->next;
                    }
                    $fn426 $tmp425 = $tmp424->methods[1];
                    panda$core$Object* $tmp427 = $tmp425(s$Iter411);
                    s423 = ((org$pandalanguage$pandac$IRNode*) $tmp427);
                    panda$core$Bit $tmp429 = (($fn428) s423->$class->vtable[4])(s423);
                    if ($tmp429.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l416;
                $l417:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp430.value) {
        {
            panda$core$String** $tmp432 = ((panda$core$String**) ((char*) $match$233_9374->$data + 16));
            label431 = *$tmp432;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp433.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp435 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$233_9374->$data + 24));
            m434 = *$tmp435;
            panda$collections$ImmutableArray** $tmp437 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 32));
            args436 = *$tmp437;
            panda$core$Bit $tmp438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m434->value->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp438.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp440 = ((panda$collections$Iterable*) args436)->$class->itable;
                while ($tmp440->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp440 = $tmp440->next;
                }
                $fn442 $tmp441 = $tmp440->methods[0];
                panda$collections$Iterator* $tmp443 = $tmp441(((panda$collections$Iterable*) args436));
                arg$Iter439 = $tmp443;
                $l444:;
                ITable* $tmp446 = arg$Iter439->$class->itable;
                while ($tmp446->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp446 = $tmp446->next;
                }
                $fn448 $tmp447 = $tmp446->methods[0];
                panda$core$Bit $tmp449 = $tmp447(arg$Iter439);
                panda$core$Bit $tmp450 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp449);
                if (!$tmp450.value) goto $l445;
                {
                    ITable* $tmp452 = arg$Iter439->$class->itable;
                    while ($tmp452->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp452 = $tmp452->next;
                    }
                    $fn454 $tmp453 = $tmp452->methods[1];
                    panda$core$Object* $tmp455 = $tmp453(arg$Iter439);
                    arg451 = ((org$pandalanguage$pandac$IRNode*) $tmp455);
                    panda$core$Bit $tmp457 = (($fn456) arg451->$class->vtable[4])(arg451);
                    if ($tmp457.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l444;
                $l445:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp458.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp460 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 16));
            value459 = *$tmp460;
            org$pandalanguage$pandac$Type** $tmp462 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9374->$data + 24));
            type461 = *$tmp462;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp463.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp465 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$233_9374->$data + 16));
            ce464 = *$tmp465;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp466.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp468 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 16));
            base467 = *$tmp468;
            org$pandalanguage$pandac$ChoiceEntry** $tmp470 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$233_9374->$data + 24));
            ce469 = *$tmp470;
            panda$core$Int64* $tmp472 = ((panda$core$Int64*) ((char*) $match$233_9374->$data + 32));
            field471 = *$tmp472;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp473.value) {
        {
            org$pandalanguage$pandac$Type** $tmp475 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9374->$data + 16));
            type474 = *$tmp475;
            org$pandalanguage$pandac$IRNode** $tmp477 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 24));
            call476 = *$tmp477;
            panda$core$Bit $tmp479 = (($fn478) call476->$class->vtable[4])(call476);
            return $tmp479;
        }
        }
        else {
        panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp480.value) {
        {
            org$pandalanguage$pandac$Type** $tmp482 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9374->$data + 16));
            Type481 = *$tmp482;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp483.value) {
        {
            panda$core$String** $tmp485 = ((panda$core$String**) ((char*) $match$233_9374->$data + 16));
            label484 = *$tmp485;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp486.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp488 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 0));
            target487 = *$tmp488;
            org$pandalanguage$pandac$IRNode** $tmp490 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 8));
            value489 = *$tmp490;
            bool $tmp491 = ((panda$core$Bit) { value489 != NULL }).value;
            if (!$tmp491) goto $l492;
            panda$core$Bit $tmp494 = (($fn493) value489->$class->vtable[4])(value489);
            $tmp491 = $tmp494.value;
            $l492:;
            panda$core$Bit $tmp495 = { $tmp491 };
            return $tmp495;
        }
        }
        else {
        panda$core$Bit $tmp496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp496.value) {
        {
            panda$core$String** $tmp498 = ((panda$core$String**) ((char*) $match$233_9374->$data + 16));
            label497 = *$tmp498;
            panda$collections$ImmutableArray** $tmp500 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 24));
            statements499 = *$tmp500;
            org$pandalanguage$pandac$IRNode** $tmp502 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 32));
            test501 = *$tmp502;
            panda$core$Bit $tmp504 = (($fn503) test501->$class->vtable[4])(test501);
            if ($tmp504.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp506 = ((panda$collections$Iterable*) statements499)->$class->itable;
                while ($tmp506->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp506 = $tmp506->next;
                }
                $fn508 $tmp507 = $tmp506->methods[0];
                panda$collections$Iterator* $tmp509 = $tmp507(((panda$collections$Iterable*) statements499));
                s$Iter505 = $tmp509;
                $l510:;
                ITable* $tmp512 = s$Iter505->$class->itable;
                while ($tmp512->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp512 = $tmp512->next;
                }
                $fn514 $tmp513 = $tmp512->methods[0];
                panda$core$Bit $tmp515 = $tmp513(s$Iter505);
                panda$core$Bit $tmp516 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp515);
                if (!$tmp516.value) goto $l511;
                {
                    ITable* $tmp518 = s$Iter505->$class->itable;
                    while ($tmp518->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp518 = $tmp518->next;
                    }
                    $fn520 $tmp519 = $tmp518->methods[1];
                    panda$core$Object* $tmp521 = $tmp519(s$Iter505);
                    s517 = ((org$pandalanguage$pandac$IRNode*) $tmp521);
                    panda$core$Bit $tmp523 = (($fn522) s517->$class->vtable[4])(s517);
                    if ($tmp523.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l510;
                $l511:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp524.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        panda$core$Bit $tmp525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp525.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp527 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 24));
            base526 = *$tmp527;
            org$pandalanguage$pandac$FieldDecl** $tmp529 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$233_9374->$data + 32));
            field528 = *$tmp529;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp530.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp532 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 16));
            test531 = *$tmp532;
            panda$collections$ImmutableArray** $tmp534 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 24));
            ifTrue533 = *$tmp534;
            org$pandalanguage$pandac$IRNode** $tmp536 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 32));
            ifFalse535 = *$tmp536;
            panda$core$Bit $tmp538 = (($fn537) test531->$class->vtable[4])(test531);
            if ($tmp538.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp540 = ((panda$collections$Iterable*) ifTrue533)->$class->itable;
                while ($tmp540->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp540 = $tmp540->next;
                }
                $fn542 $tmp541 = $tmp540->methods[0];
                panda$collections$Iterator* $tmp543 = $tmp541(((panda$collections$Iterable*) ifTrue533));
                s$Iter539 = $tmp543;
                $l544:;
                ITable* $tmp546 = s$Iter539->$class->itable;
                while ($tmp546->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp546 = $tmp546->next;
                }
                $fn548 $tmp547 = $tmp546->methods[0];
                panda$core$Bit $tmp549 = $tmp547(s$Iter539);
                panda$core$Bit $tmp550 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp549);
                if (!$tmp550.value) goto $l545;
                {
                    ITable* $tmp552 = s$Iter539->$class->itable;
                    while ($tmp552->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp552 = $tmp552->next;
                    }
                    $fn554 $tmp553 = $tmp552->methods[1];
                    panda$core$Object* $tmp555 = $tmp553(s$Iter539);
                    s551 = ((org$pandalanguage$pandac$IRNode*) $tmp555);
                    panda$core$Bit $tmp557 = (($fn556) s551->$class->vtable[4])(s551);
                    if ($tmp557.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l544;
                $l545:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
            }
            panda$core$Bit $tmp559 = (($fn558) ifFalse535->$class->vtable[4])(ifFalse535);
            return $tmp559;
        }
        }
        else {
        panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp560.value) {
        {
            panda$core$UInt64* $tmp562 = ((panda$core$UInt64*) ((char*) $match$233_9374->$data + 24));
            value561 = *$tmp562;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp563.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp565 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 16));
            value564 = *$tmp565;
            panda$core$Bit $tmp567 = (($fn566) value564->$class->vtable[4])(value564);
            return $tmp567;
        }
        }
        else {
        panda$core$Bit $tmp568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp568.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp570 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 16));
            value569 = *$tmp570;
            panda$core$Bit $tmp572 = (($fn571) value569->$class->vtable[4])(value569);
            return $tmp572;
        }
        }
        else {
        panda$core$Bit $tmp573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp573.value) {
        {
            panda$core$String** $tmp575 = ((panda$core$String**) ((char*) $match$233_9374->$data + 16));
            label574 = *$tmp575;
            panda$collections$ImmutableArray** $tmp577 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 24));
            statements576 = *$tmp577;
            {
                ITable* $tmp579 = ((panda$collections$Iterable*) statements576)->$class->itable;
                while ($tmp579->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp579 = $tmp579->next;
                }
                $fn581 $tmp580 = $tmp579->methods[0];
                panda$collections$Iterator* $tmp582 = $tmp580(((panda$collections$Iterable*) statements576));
                s$Iter578 = $tmp582;
                $l583:;
                ITable* $tmp585 = s$Iter578->$class->itable;
                while ($tmp585->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp585 = $tmp585->next;
                }
                $fn587 $tmp586 = $tmp585->methods[0];
                panda$core$Bit $tmp588 = $tmp586(s$Iter578);
                panda$core$Bit $tmp589 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp588);
                if (!$tmp589.value) goto $l584;
                {
                    ITable* $tmp591 = s$Iter578->$class->itable;
                    while ($tmp591->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp591 = $tmp591->next;
                    }
                    $fn593 $tmp592 = $tmp591->methods[1];
                    panda$core$Object* $tmp594 = $tmp592(s$Iter578);
                    s590 = ((org$pandalanguage$pandac$IRNode*) $tmp594);
                    panda$core$Bit $tmp596 = (($fn595) s590->$class->vtable[4])(s590);
                    if ($tmp596.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l583;
                $l584:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp597.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp599 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 16));
            value598 = *$tmp599;
            panda$collections$ImmutableArray** $tmp601 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 24));
            whens600 = *$tmp601;
            panda$collections$ImmutableArray** $tmp603 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 32));
            other602 = *$tmp603;
            panda$core$Bit $tmp605 = (($fn604) value598->$class->vtable[4])(value598);
            if ($tmp605.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp607 = ((panda$collections$Iterable*) whens600)->$class->itable;
                while ($tmp607->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp607 = $tmp607->next;
                }
                $fn609 $tmp608 = $tmp607->methods[0];
                panda$collections$Iterator* $tmp610 = $tmp608(((panda$collections$Iterable*) whens600));
                w$Iter606 = $tmp610;
                $l611:;
                ITable* $tmp613 = w$Iter606->$class->itable;
                while ($tmp613->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp613 = $tmp613->next;
                }
                $fn615 $tmp614 = $tmp613->methods[0];
                panda$core$Bit $tmp616 = $tmp614(w$Iter606);
                panda$core$Bit $tmp617 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp616);
                if (!$tmp617.value) goto $l612;
                {
                    ITable* $tmp619 = w$Iter606->$class->itable;
                    while ($tmp619->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp619 = $tmp619->next;
                    }
                    $fn621 $tmp620 = $tmp619->methods[1];
                    panda$core$Object* $tmp622 = $tmp620(w$Iter606);
                    w618 = ((org$pandalanguage$pandac$IRNode*) $tmp622);
                    panda$core$Bit $tmp624 = (($fn623) w618->$class->vtable[4])(w618);
                    if ($tmp624.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l611;
                $l612:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp610));
            }
            {
                ITable* $tmp626 = ((panda$collections$Iterable*) other602)->$class->itable;
                while ($tmp626->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp626 = $tmp626->next;
                }
                $fn628 $tmp627 = $tmp626->methods[0];
                panda$collections$Iterator* $tmp629 = $tmp627(((panda$collections$Iterable*) other602));
                s$Iter625 = $tmp629;
                $l630:;
                ITable* $tmp632 = s$Iter625->$class->itable;
                while ($tmp632->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp632 = $tmp632->next;
                }
                $fn634 $tmp633 = $tmp632->methods[0];
                panda$core$Bit $tmp635 = $tmp633(s$Iter625);
                panda$core$Bit $tmp636 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp635);
                if (!$tmp636.value) goto $l631;
                {
                    ITable* $tmp638 = s$Iter625->$class->itable;
                    while ($tmp638->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp638 = $tmp638->next;
                    }
                    $fn640 $tmp639 = $tmp638->methods[1];
                    panda$core$Object* $tmp641 = $tmp639(s$Iter625);
                    s637 = ((org$pandalanguage$pandac$IRNode*) $tmp641);
                    panda$core$Bit $tmp643 = (($fn642) s637->$class->vtable[4])(s637);
                    if ($tmp643.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l630;
                $l631:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp629));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp644.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp646 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 16));
            target645 = *$tmp646;
            org$pandalanguage$pandac$MethodRef** $tmp648 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$233_9374->$data + 24));
            m647 = *$tmp648;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp649.value) {
        {
            panda$core$UInt64* $tmp651 = ((panda$core$UInt64*) ((char*) $match$233_9374->$data + 24));
            value650 = *$tmp651;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp652.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp653.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp655 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$233_9374->$data + 16));
            op654 = *$tmp655;
            org$pandalanguage$pandac$IRNode** $tmp657 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 24));
            base656 = *$tmp657;
            panda$core$Bit $tmp659 = (($fn658) base656->$class->vtable[4])(base656);
            return $tmp659;
        }
        }
        else {
        panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp660.value) {
        {
            panda$core$String** $tmp662 = ((panda$core$String**) ((char*) $match$233_9374->$data + 16));
            label661 = *$tmp662;
            org$pandalanguage$pandac$IRNode** $tmp664 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 24));
            target663 = *$tmp664;
            org$pandalanguage$pandac$IRNode** $tmp666 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 32));
            list665 = *$tmp666;
            panda$collections$ImmutableArray** $tmp668 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 40));
            statements667 = *$tmp668;
            panda$core$Bit $tmp670 = (($fn669) list665->$class->vtable[4])(list665);
            if ($tmp670.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp672 = ((panda$collections$Iterable*) statements667)->$class->itable;
                while ($tmp672->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp672 = $tmp672->next;
                }
                $fn674 $tmp673 = $tmp672->methods[0];
                panda$collections$Iterator* $tmp675 = $tmp673(((panda$collections$Iterable*) statements667));
                s$Iter671 = $tmp675;
                $l676:;
                ITable* $tmp678 = s$Iter671->$class->itable;
                while ($tmp678->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp678 = $tmp678->next;
                }
                $fn680 $tmp679 = $tmp678->methods[0];
                panda$core$Bit $tmp681 = $tmp679(s$Iter671);
                panda$core$Bit $tmp682 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp681);
                if (!$tmp682.value) goto $l677;
                {
                    ITable* $tmp684 = s$Iter671->$class->itable;
                    while ($tmp684->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp684 = $tmp684->next;
                    }
                    $fn686 $tmp685 = $tmp684->methods[1];
                    panda$core$Object* $tmp687 = $tmp685(s$Iter671);
                    s683 = ((org$pandalanguage$pandac$IRNode*) $tmp687);
                    panda$core$Bit $tmp689 = (($fn688) s683->$class->vtable[4])(s683);
                    if ($tmp689.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l676;
                $l677:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp675));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp690.value) {
        {
            panda$core$Real64* $tmp692 = ((panda$core$Real64*) ((char*) $match$233_9374->$data + 24));
            value691 = *$tmp692;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp693.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp695 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 16));
            value694 = *$tmp695;
            panda$core$Bit $tmp697 = (($fn696) value694->$class->vtable[4])(value694);
            return $tmp697;
        }
        }
        else {
        panda$core$Bit $tmp698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp698.value) {
        {
            panda$core$Int64* $tmp700 = ((panda$core$Int64*) ((char*) $match$233_9374->$data + 24));
            id699 = *$tmp700;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp701.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp703 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 0));
            base702 = *$tmp703;
            panda$core$Int64* $tmp705 = ((panda$core$Int64*) ((char*) $match$233_9374->$data + 8));
            id704 = *$tmp705;
            panda$core$Bit $tmp707 = (($fn706) base702->$class->vtable[4])(base702);
            return $tmp707;
        }
        }
        else {
        panda$core$Bit $tmp708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp708.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp709.value) {
        {
            panda$core$String** $tmp711 = ((panda$core$String**) ((char*) $match$233_9374->$data + 16));
            str710 = *$tmp711;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp712.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp713.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp715 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 16));
            test714 = *$tmp715;
            org$pandalanguage$pandac$IRNode** $tmp717 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 24));
            ifTrue716 = *$tmp717;
            org$pandalanguage$pandac$IRNode** $tmp719 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 32));
            ifFalse718 = *$tmp719;
            panda$core$Bit $tmp723 = (($fn722) test714->$class->vtable[4])(test714);
            bool $tmp721 = $tmp723.value;
            if ($tmp721) goto $l724;
            panda$core$Bit $tmp726 = (($fn725) ifTrue716->$class->vtable[4])(ifTrue716);
            $tmp721 = $tmp726.value;
            $l724:;
            panda$core$Bit $tmp727 = { $tmp721 };
            bool $tmp720 = $tmp727.value;
            if ($tmp720) goto $l728;
            panda$core$Bit $tmp730 = (($fn729) ifFalse718->$class->vtable[4])(ifFalse718);
            $tmp720 = $tmp730.value;
            $l728:;
            panda$core$Bit $tmp731 = { $tmp720 };
            return $tmp731;
        }
        }
        else {
        panda$core$Bit $tmp732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp732.value) {
        {
            org$pandalanguage$pandac$Type** $tmp734 = ((org$pandalanguage$pandac$Type**) ((char*) $match$233_9374->$data + 16));
            type733 = *$tmp734;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp735.value) {
        {
            panda$core$String** $tmp737 = ((panda$core$String**) ((char*) $match$233_9374->$data + 16));
            name736 = *$tmp737;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp738.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp740 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 24));
            base739 = *$tmp740;
            panda$collections$ImmutableArray** $tmp742 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 32));
            args741 = *$tmp742;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp743.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp745 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 24));
            target744 = *$tmp745;
            panda$collections$ImmutableArray** $tmp747 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 32));
            methods746 = *$tmp747;
            panda$collections$ImmutableArray** $tmp749 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 40));
            args748 = *$tmp749;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp750.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp752 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 16));
            target751 = *$tmp752;
            panda$collections$ImmutableArray** $tmp754 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 24));
            methods753 = *$tmp754;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp755.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp757 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 16));
            start756 = *$tmp757;
            org$pandalanguage$pandac$IRNode** $tmp759 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 24));
            end758 = *$tmp759;
            panda$core$Bit* $tmp761 = ((panda$core$Bit*) ((char*) $match$233_9374->$data + 32));
            inclusive760 = *$tmp761;
            org$pandalanguage$pandac$IRNode** $tmp763 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 33));
            step762 = *$tmp763;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp764.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp766 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$233_9374->$data + 16));
            kind765 = *$tmp766;
            panda$collections$ImmutableArray** $tmp768 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 24));
            decls767 = *$tmp768;
            {
                ITable* $tmp770 = ((panda$collections$Iterable*) decls767)->$class->itable;
                while ($tmp770->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp770 = $tmp770->next;
                }
                $fn772 $tmp771 = $tmp770->methods[0];
                panda$collections$Iterator* $tmp773 = $tmp771(((panda$collections$Iterable*) decls767));
                d$Iter769 = $tmp773;
                $l774:;
                ITable* $tmp776 = d$Iter769->$class->itable;
                while ($tmp776->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp776 = $tmp776->next;
                }
                $fn778 $tmp777 = $tmp776->methods[0];
                panda$core$Bit $tmp779 = $tmp777(d$Iter769);
                panda$core$Bit $tmp780 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp779);
                if (!$tmp780.value) goto $l775;
                {
                    ITable* $tmp782 = d$Iter769->$class->itable;
                    while ($tmp782->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp782 = $tmp782->next;
                    }
                    $fn784 $tmp783 = $tmp782->methods[1];
                    panda$core$Object* $tmp785 = $tmp783(d$Iter769);
                    d781 = ((org$pandalanguage$pandac$IRNode*) $tmp785);
                    panda$core$Bit $tmp787 = (($fn786) d781->$class->vtable[4])(d781);
                    if ($tmp787.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l774;
                $l775:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp788.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp790 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$233_9374->$data + 16));
            variable789 = *$tmp790;
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp791.value) {
        {
            panda$collections$ImmutableArray** $tmp793 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 16));
            tests792 = *$tmp793;
            panda$collections$ImmutableArray** $tmp795 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 24));
            statements794 = *$tmp795;
            {
                ITable* $tmp797 = ((panda$collections$Iterable*) tests792)->$class->itable;
                while ($tmp797->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp797 = $tmp797->next;
                }
                $fn799 $tmp798 = $tmp797->methods[0];
                panda$collections$Iterator* $tmp800 = $tmp798(((panda$collections$Iterable*) tests792));
                t$Iter796 = $tmp800;
                $l801:;
                ITable* $tmp803 = t$Iter796->$class->itable;
                while ($tmp803->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp803 = $tmp803->next;
                }
                $fn805 $tmp804 = $tmp803->methods[0];
                panda$core$Bit $tmp806 = $tmp804(t$Iter796);
                panda$core$Bit $tmp807 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp806);
                if (!$tmp807.value) goto $l802;
                {
                    ITable* $tmp809 = t$Iter796->$class->itable;
                    while ($tmp809->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp809 = $tmp809->next;
                    }
                    $fn811 $tmp810 = $tmp809->methods[1];
                    panda$core$Object* $tmp812 = $tmp810(t$Iter796);
                    t808 = ((org$pandalanguage$pandac$IRNode*) $tmp812);
                    panda$core$Bit $tmp814 = (($fn813) t808->$class->vtable[4])(t808);
                    if ($tmp814.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l801;
                $l802:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp800));
            }
            {
                ITable* $tmp816 = ((panda$collections$Iterable*) statements794)->$class->itable;
                while ($tmp816->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp816 = $tmp816->next;
                }
                $fn818 $tmp817 = $tmp816->methods[0];
                panda$collections$Iterator* $tmp819 = $tmp817(((panda$collections$Iterable*) statements794));
                s$Iter815 = $tmp819;
                $l820:;
                ITable* $tmp822 = s$Iter815->$class->itable;
                while ($tmp822->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp822 = $tmp822->next;
                }
                $fn824 $tmp823 = $tmp822->methods[0];
                panda$core$Bit $tmp825 = $tmp823(s$Iter815);
                panda$core$Bit $tmp826 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp825);
                if (!$tmp826.value) goto $l821;
                {
                    ITable* $tmp828 = s$Iter815->$class->itable;
                    while ($tmp828->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp828 = $tmp828->next;
                    }
                    $fn830 $tmp829 = $tmp828->methods[1];
                    panda$core$Object* $tmp831 = $tmp829(s$Iter815);
                    s827 = ((org$pandalanguage$pandac$IRNode*) $tmp831);
                    panda$core$Bit $tmp833 = (($fn832) s827->$class->vtable[4])(s827);
                    if ($tmp833.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l820;
                $l821:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp819));
            }
            return ((panda$core$Bit) { false });
        }
        }
        else {
        panda$core$Bit $tmp834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$233_9374->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp834.value) {
        {
            panda$core$String** $tmp836 = ((panda$core$String**) ((char*) $match$233_9374->$data + 16));
            label835 = *$tmp836;
            org$pandalanguage$pandac$IRNode** $tmp838 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$233_9374->$data + 24));
            test837 = *$tmp838;
            panda$collections$ImmutableArray** $tmp840 = ((panda$collections$ImmutableArray**) ((char*) $match$233_9374->$data + 32));
            statements839 = *$tmp840;
            panda$core$Bit $tmp842 = (($fn841) test837->$class->vtable[4])(test837);
            if ($tmp842.value) {
            {
                return ((panda$core$Bit) { true });
            }
            }
            {
                ITable* $tmp844 = ((panda$collections$Iterable*) statements839)->$class->itable;
                while ($tmp844->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp844 = $tmp844->next;
                }
                $fn846 $tmp845 = $tmp844->methods[0];
                panda$collections$Iterator* $tmp847 = $tmp845(((panda$collections$Iterable*) statements839));
                s$Iter843 = $tmp847;
                $l848:;
                ITable* $tmp850 = s$Iter843->$class->itable;
                while ($tmp850->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp850 = $tmp850->next;
                }
                $fn852 $tmp851 = $tmp850->methods[0];
                panda$core$Bit $tmp853 = $tmp851(s$Iter843);
                panda$core$Bit $tmp854 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp853);
                if (!$tmp854.value) goto $l849;
                {
                    ITable* $tmp856 = s$Iter843->$class->itable;
                    while ($tmp856->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp856 = $tmp856->next;
                    }
                    $fn858 $tmp857 = $tmp856->methods[1];
                    panda$core$Object* $tmp859 = $tmp857(s$Iter843);
                    s855 = ((org$pandalanguage$pandac$IRNode*) $tmp859);
                    panda$core$Bit $tmp861 = (($fn860) s855->$class->vtable[4])(s855);
                    if ($tmp861.value) {
                    {
                        return ((panda$core$Bit) { true });
                    }
                    }
                }
                goto $l848;
                $l849:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp847));
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
    org$pandalanguage$pandac$IRNode* $match$410_9862;
    org$pandalanguage$pandac$IRNode* test864;
    org$pandalanguage$pandac$IRNode* msg866;
    org$pandalanguage$pandac$IRNode* left880;
    org$pandalanguage$pandac$parser$Token$Kind op882;
    org$pandalanguage$pandac$IRNode* right884;
    panda$core$Bit bit898;
    panda$collections$ImmutableArray* statements902;
    panda$core$MutableString* result904;
    panda$collections$Iterator* s$Iter908;
    org$pandalanguage$pandac$IRNode* s920;
    panda$core$Char8 $tmp927;
    panda$core$String* label930;
    org$pandalanguage$pandac$MethodRef* m938;
    panda$collections$ImmutableArray* args940;
    org$pandalanguage$pandac$IRNode* value950;
    org$pandalanguage$pandac$Type* type952;
    org$pandalanguage$pandac$ChoiceEntry* ce962;
    org$pandalanguage$pandac$IRNode* base966;
    org$pandalanguage$pandac$ChoiceEntry* ce968;
    panda$core$Int64 field970;
    org$pandalanguage$pandac$Type* type984;
    org$pandalanguage$pandac$IRNode* call986;
    org$pandalanguage$pandac$IRNode* $match$441_17988;
    panda$collections$ImmutableArray* args990;
    org$pandalanguage$pandac$Type* Type1000;
    panda$core$String* label1004;
    org$pandalanguage$pandac$IRNode* target1012;
    org$pandalanguage$pandac$IRNode* value1014;
    panda$core$String* label1026;
    panda$collections$ImmutableArray* statements1028;
    org$pandalanguage$pandac$IRNode* test1030;
    panda$core$MutableString* result1032;
    panda$collections$Iterator* s$Iter1039;
    org$pandalanguage$pandac$IRNode* s1051;
    org$pandalanguage$pandac$IRNode* expr1064;
    org$pandalanguage$pandac$IRNode* stmt1066;
    org$pandalanguage$pandac$IRNode* base1076;
    org$pandalanguage$pandac$FieldDecl* field1078;
    org$pandalanguage$pandac$IRNode* test1088;
    panda$collections$ImmutableArray* ifTrue1090;
    org$pandalanguage$pandac$IRNode* ifFalse1092;
    panda$core$MutableString* result1094;
    panda$collections$Iterator* s$Iter1101;
    org$pandalanguage$pandac$IRNode* s1113;
    panda$core$Char8 $tmp1120;
    panda$core$UInt64 value1127;
    org$pandalanguage$pandac$IRNode* value1131;
    org$pandalanguage$pandac$IRNode* value1138;
    panda$core$String* label1145;
    panda$collections$ImmutableArray* statements1147;
    panda$core$MutableString* result1149;
    panda$collections$Iterator* s$Iter1156;
    org$pandalanguage$pandac$IRNode* s1168;
    panda$core$Char8 $tmp1175;
    org$pandalanguage$pandac$IRNode* value1178;
    panda$collections$ImmutableArray* whens1180;
    panda$collections$ImmutableArray* other1182;
    panda$core$MutableString* result1184;
    panda$collections$Iterator* w$Iter1191;
    org$pandalanguage$pandac$IRNode* w1203;
    panda$collections$Iterator* s$Iter1211;
    org$pandalanguage$pandac$IRNode* s1223;
    panda$core$Char8 $tmp1230;
    org$pandalanguage$pandac$IRNode* target1233;
    org$pandalanguage$pandac$MethodRef* m1235;
    panda$core$UInt64 value1245;
    org$pandalanguage$pandac$parser$Token$Kind op1253;
    org$pandalanguage$pandac$IRNode* base1255;
    panda$core$String* label1266;
    org$pandalanguage$pandac$IRNode* target1268;
    org$pandalanguage$pandac$IRNode* list1270;
    panda$collections$ImmutableArray* statements1272;
    panda$core$MutableString* result1274;
    panda$collections$Iterator* s$Iter1287;
    org$pandalanguage$pandac$IRNode* s1299;
    panda$core$Char8 $tmp1306;
    panda$core$Real64 value1309;
    org$pandalanguage$pandac$IRNode* value1313;
    org$pandalanguage$pandac$Type* type1321;
    panda$core$Int64 id1323;
    org$pandalanguage$pandac$IRNode* base1334;
    panda$core$Int64 id1336;
    panda$core$String* str1349;
    org$pandalanguage$pandac$IRNode* test1354;
    org$pandalanguage$pandac$IRNode* ifTrue1356;
    org$pandalanguage$pandac$IRNode* ifFalse1358;
    org$pandalanguage$pandac$Type* type1371;
    panda$core$String* name1375;
    org$pandalanguage$pandac$IRNode* base1378;
    panda$collections$ImmutableArray* args1380;
    org$pandalanguage$pandac$IRNode* target1391;
    panda$collections$ImmutableArray* methods1393;
    panda$collections$ImmutableArray* args1395;
    org$pandalanguage$pandac$IRNode* target1410;
    panda$collections$ImmutableArray* methods1412;
    org$pandalanguage$pandac$IRNode* start1423;
    org$pandalanguage$pandac$IRNode* end1425;
    panda$core$Bit inclusive1427;
    org$pandalanguage$pandac$IRNode* step1429;
    panda$core$MutableString* result1431;
    org$pandalanguage$pandac$Variable$Kind kind1442;
    panda$collections$ImmutableArray* decls1444;
    panda$core$MutableString* result1446;
    org$pandalanguage$pandac$Variable$Kind $match$585_171449;
    org$pandalanguage$pandac$Variable* variable1461;
    panda$collections$ImmutableArray* tests1464;
    panda$collections$ImmutableArray* statements1466;
    panda$core$String* label1479;
    org$pandalanguage$pandac$IRNode* test1481;
    panda$collections$ImmutableArray* statements1483;
    panda$core$MutableString* result1485;
    panda$collections$Iterator* s$Iter1495;
    org$pandalanguage$pandac$IRNode* s1507;
    panda$core$Char8 $tmp1514;
    {
        $match$410_9862 = self;
        panda$core$Bit $tmp863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp863.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp865 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 16));
            test864 = *$tmp865;
            org$pandalanguage$pandac$IRNode** $tmp867 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 24));
            msg866 = *$tmp867;
            if (((panda$core$Bit) { msg866 != NULL }).value) {
            {
                panda$core$String* $tmp869 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s868, ((panda$core$Object*) test864));
                panda$core$String* $tmp871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp869, &$s870);
                panda$core$String* $tmp872 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp871, ((panda$core$Object*) msg866));
                panda$core$String* $tmp874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp872, &$s873);
                return $tmp874;
            }
            }
            panda$core$String* $tmp876 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s875, ((panda$core$Object*) test864));
            panda$core$String* $tmp878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp876, &$s877);
            return $tmp878;
        }
        }
        else {
        panda$core$Bit $tmp879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp879.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp881 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 24));
            left880 = *$tmp881;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp883 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$410_9862->$data + 32));
            op882 = *$tmp883;
            org$pandalanguage$pandac$IRNode** $tmp885 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 40));
            right884 = *$tmp885;
            panda$core$String* $tmp887 = (($fn886) left880->$class->vtable[0])(left880);
            panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp887, &$s888);
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp890;
            $tmp890 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaZAlloc(24);
            $tmp890->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp890->refCount = 1;
            $tmp890->value = op882;
            panda$core$String* $tmp891 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp889, ((panda$core$Object*) $tmp890));
            panda$core$String* $tmp893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp891, &$s892);
            panda$core$String* $tmp894 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp893, ((panda$core$Object*) right884));
            panda$core$String* $tmp896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp894, &$s895);
            return $tmp896;
        }
        }
        else {
        panda$core$Bit $tmp897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp897.value) {
        {
            panda$core$Bit* $tmp899 = ((panda$core$Bit*) ((char*) $match$410_9862->$data + 24));
            bit898 = *$tmp899;
            panda$core$String* $tmp900 = panda$core$Bit$convert$R$panda$core$String(bit898);
            return $tmp900;
        }
        }
        else {
        panda$core$Bit $tmp901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp901.value) {
        {
            panda$collections$ImmutableArray** $tmp903 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 16));
            statements902 = *$tmp903;
            panda$core$MutableString* $tmp905 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp905->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp905->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp905, &$s907);
            result904 = $tmp905;
            {
                ITable* $tmp909 = ((panda$collections$Iterable*) statements902)->$class->itable;
                while ($tmp909->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp909 = $tmp909->next;
                }
                $fn911 $tmp910 = $tmp909->methods[0];
                panda$collections$Iterator* $tmp912 = $tmp910(((panda$collections$Iterable*) statements902));
                s$Iter908 = $tmp912;
                $l913:;
                ITable* $tmp915 = s$Iter908->$class->itable;
                while ($tmp915->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp915 = $tmp915->next;
                }
                $fn917 $tmp916 = $tmp915->methods[0];
                panda$core$Bit $tmp918 = $tmp916(s$Iter908);
                panda$core$Bit $tmp919 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp918);
                if (!$tmp919.value) goto $l914;
                {
                    ITable* $tmp921 = s$Iter908->$class->itable;
                    while ($tmp921->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp921 = $tmp921->next;
                    }
                    $fn923 $tmp922 = $tmp921->methods[1];
                    panda$core$Object* $tmp924 = $tmp922(s$Iter908);
                    s920 = ((org$pandalanguage$pandac$IRNode*) $tmp924);
                    panda$core$String* $tmp926 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s920), &$s925);
                    panda$core$MutableString$append$panda$core$String(result904, $tmp926);
                }
                goto $l913;
                $l914:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp927, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result904, $tmp927);
            panda$core$String* $tmp928 = panda$core$MutableString$finish$R$panda$core$String(result904);
            return $tmp928;
        }
        }
        else {
        panda$core$Bit $tmp929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp929.value) {
        {
            panda$core$String** $tmp931 = ((panda$core$String**) ((char*) $match$410_9862->$data + 16));
            label930 = *$tmp931;
            if (((panda$core$Bit) { label930 != NULL }).value) {
            {
                panda$core$String* $tmp933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s932, label930);
                panda$core$String* $tmp935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp933, &$s934);
                return $tmp935;
            }
            }
            return &$s936;
        }
        }
        else {
        panda$core$Bit $tmp937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp937.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp939 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$410_9862->$data + 24));
            m938 = *$tmp939;
            panda$collections$ImmutableArray** $tmp941 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 32));
            args940 = *$tmp941;
            panda$core$String* $tmp942 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m938->value)->name);
            panda$core$String* $tmp944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp942, &$s943);
            panda$core$String* $tmp945 = panda$collections$ImmutableArray$join$R$panda$core$String(args940);
            panda$core$String* $tmp946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp944, $tmp945);
            panda$core$String* $tmp948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp946, &$s947);
            return $tmp948;
        }
        }
        else {
        panda$core$Bit $tmp949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp949.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp951 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 16));
            value950 = *$tmp951;
            org$pandalanguage$pandac$Type** $tmp953 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9862->$data + 24));
            type952 = *$tmp953;
            panda$core$String* $tmp955 = (($fn954) value950->$class->vtable[0])(value950);
            panda$core$String* $tmp957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp955, &$s956);
            panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp957, ((panda$core$Object*) type952));
            panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp958, &$s959);
            return $tmp960;
        }
        }
        else {
        panda$core$Bit $tmp961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp961.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp963 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$410_9862->$data + 16));
            ce962 = *$tmp963;
            panda$core$String* $tmp964 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce962);
            return $tmp964;
        }
        }
        else {
        panda$core$Bit $tmp965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp965.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp967 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 16));
            base966 = *$tmp967;
            org$pandalanguage$pandac$ChoiceEntry** $tmp969 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$410_9862->$data + 24));
            ce968 = *$tmp969;
            panda$core$Int64* $tmp971 = ((panda$core$Int64*) ((char*) $match$410_9862->$data + 32));
            field970 = *$tmp971;
            panda$core$String* $tmp973 = (($fn972) base966->$class->vtable[0])(base966);
            panda$core$String* $tmp975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp973, &$s974);
            panda$core$String* $tmp976 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp975, ((panda$core$Object*) ce968));
            panda$core$String* $tmp978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp976, &$s977);
            panda$core$Int64$wrapper* $tmp979;
            $tmp979 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp979->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp979->refCount = 1;
            $tmp979->value = field970;
            panda$core$String* $tmp980 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp978, ((panda$core$Object*) $tmp979));
            panda$core$String* $tmp982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp980, &$s981);
            return $tmp982;
        }
        }
        else {
        panda$core$Bit $tmp983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp983.value) {
        {
            org$pandalanguage$pandac$Type** $tmp985 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9862->$data + 16));
            type984 = *$tmp985;
            org$pandalanguage$pandac$IRNode** $tmp987 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 24));
            call986 = *$tmp987;
            {
                $match$441_17988 = call986;
                panda$core$Bit $tmp989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$441_17988->$rawValue, ((panda$core$Int64) { 5 }));
                if ($tmp989.value) {
                {
                    panda$collections$ImmutableArray** $tmp991 = ((panda$collections$ImmutableArray**) ((char*) $match$441_17988->$data + 32));
                    args990 = *$tmp991;
                    panda$core$String* $tmp992 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type984);
                    panda$core$String* $tmp994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp992, &$s993);
                    panda$core$String* $tmp995 = panda$collections$ImmutableArray$join$R$panda$core$String(args990);
                    panda$core$String* $tmp996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp994, $tmp995);
                    panda$core$String* $tmp998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp996, &$s997);
                    return $tmp998;
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
        panda$core$Bit $tmp999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp999.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1001 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9862->$data + 16));
            Type1000 = *$tmp1001;
            return &$s1002;
        }
        }
        else {
        panda$core$Bit $tmp1003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1003.value) {
        {
            panda$core$String** $tmp1005 = ((panda$core$String**) ((char*) $match$410_9862->$data + 16));
            label1004 = *$tmp1005;
            if (((panda$core$Bit) { label1004 != NULL }).value) {
            {
                panda$core$String* $tmp1007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1006, label1004);
                panda$core$String* $tmp1009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1007, &$s1008);
                return $tmp1009;
            }
            }
            return &$s1010;
        }
        }
        else {
        panda$core$Bit $tmp1011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1011.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1013 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 0));
            target1012 = *$tmp1013;
            org$pandalanguage$pandac$IRNode** $tmp1015 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 8));
            value1014 = *$tmp1015;
            if (((panda$core$Bit) { value1014 != NULL }).value) {
            {
                panda$core$String* $tmp1017 = (($fn1016) target1012->$class->vtable[0])(target1012);
                panda$core$String* $tmp1019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1017, &$s1018);
                panda$core$String* $tmp1020 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1019, ((panda$core$Object*) value1014));
                panda$core$String* $tmp1022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1020, &$s1021);
                return $tmp1022;
            }
            }
            panda$core$String* $tmp1024 = (($fn1023) target1012->$class->vtable[0])(target1012);
            return $tmp1024;
        }
        }
        else {
        panda$core$Bit $tmp1025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1025.value) {
        {
            panda$core$String** $tmp1027 = ((panda$core$String**) ((char*) $match$410_9862->$data + 16));
            label1026 = *$tmp1027;
            panda$collections$ImmutableArray** $tmp1029 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 24));
            statements1028 = *$tmp1029;
            org$pandalanguage$pandac$IRNode** $tmp1031 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 32));
            test1030 = *$tmp1031;
            panda$core$MutableString* $tmp1033 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1033->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1033->refCount.value = 1;
            panda$core$MutableString$init($tmp1033);
            result1032 = $tmp1033;
            if (((panda$core$Bit) { label1026 != NULL }).value) {
            {
                panda$core$String* $tmp1035 = panda$core$String$convert$R$panda$core$String(label1026);
                panda$core$String* $tmp1037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1035, &$s1036);
                panda$core$MutableString$append$panda$core$String(result1032, $tmp1037);
            }
            }
            panda$core$MutableString$append$panda$core$String(result1032, &$s1038);
            {
                ITable* $tmp1040 = ((panda$collections$Iterable*) statements1028)->$class->itable;
                while ($tmp1040->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1040 = $tmp1040->next;
                }
                $fn1042 $tmp1041 = $tmp1040->methods[0];
                panda$collections$Iterator* $tmp1043 = $tmp1041(((panda$collections$Iterable*) statements1028));
                s$Iter1039 = $tmp1043;
                $l1044:;
                ITable* $tmp1046 = s$Iter1039->$class->itable;
                while ($tmp1046->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1046 = $tmp1046->next;
                }
                $fn1048 $tmp1047 = $tmp1046->methods[0];
                panda$core$Bit $tmp1049 = $tmp1047(s$Iter1039);
                panda$core$Bit $tmp1050 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1049);
                if (!$tmp1050.value) goto $l1045;
                {
                    ITable* $tmp1052 = s$Iter1039->$class->itable;
                    while ($tmp1052->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1052 = $tmp1052->next;
                    }
                    $fn1054 $tmp1053 = $tmp1052->methods[1];
                    panda$core$Object* $tmp1055 = $tmp1053(s$Iter1039);
                    s1051 = ((org$pandalanguage$pandac$IRNode*) $tmp1055);
                    panda$core$String* $tmp1057 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1051), &$s1056);
                    panda$core$MutableString$append$panda$core$String(result1032, $tmp1057);
                }
                goto $l1044;
                $l1045:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1043));
            }
            panda$core$String* $tmp1059 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1058, ((panda$core$Object*) test1030));
            panda$core$String* $tmp1061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1059, &$s1060);
            panda$core$MutableString$append$panda$core$String(result1032, $tmp1061);
            panda$core$String* $tmp1062 = panda$core$MutableString$finish$R$panda$core$String(result1032);
            return $tmp1062;
        }
        }
        else {
        panda$core$Bit $tmp1063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1063.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1065 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 0));
            expr1064 = *$tmp1065;
            org$pandalanguage$pandac$IRNode** $tmp1067 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 8));
            stmt1066 = *$tmp1067;
            panda$core$String* $tmp1069 = (($fn1068) expr1064->$class->vtable[0])(expr1064);
            panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1069, &$s1070);
            panda$core$String* $tmp1072 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1071, ((panda$core$Object*) stmt1066));
            panda$core$String* $tmp1074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1072, &$s1073);
            return $tmp1074;
        }
        }
        else {
        panda$core$Bit $tmp1075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1075.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1077 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 24));
            base1076 = *$tmp1077;
            org$pandalanguage$pandac$FieldDecl** $tmp1079 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$410_9862->$data + 32));
            field1078 = *$tmp1079;
            panda$core$String* $tmp1081 = (($fn1080) base1076->$class->vtable[0])(base1076);
            panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1081, &$s1082);
            panda$core$String* $tmp1084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1083, ((org$pandalanguage$pandac$Symbol*) field1078)->name);
            panda$core$String* $tmp1086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1084, &$s1085);
            return $tmp1086;
        }
        }
        else {
        panda$core$Bit $tmp1087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1087.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1089 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 16));
            test1088 = *$tmp1089;
            panda$collections$ImmutableArray** $tmp1091 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 24));
            ifTrue1090 = *$tmp1091;
            org$pandalanguage$pandac$IRNode** $tmp1093 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 32));
            ifFalse1092 = *$tmp1093;
            panda$core$MutableString* $tmp1095 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1095->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1095->refCount.value = 1;
            panda$core$String* $tmp1098 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1097, ((panda$core$Object*) test1088));
            panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1098, &$s1099);
            panda$core$MutableString$init$panda$core$String($tmp1095, $tmp1100);
            result1094 = $tmp1095;
            {
                ITable* $tmp1102 = ((panda$collections$Iterable*) ifTrue1090)->$class->itable;
                while ($tmp1102->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1102 = $tmp1102->next;
                }
                $fn1104 $tmp1103 = $tmp1102->methods[0];
                panda$collections$Iterator* $tmp1105 = $tmp1103(((panda$collections$Iterable*) ifTrue1090));
                s$Iter1101 = $tmp1105;
                $l1106:;
                ITable* $tmp1108 = s$Iter1101->$class->itable;
                while ($tmp1108->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1108 = $tmp1108->next;
                }
                $fn1110 $tmp1109 = $tmp1108->methods[0];
                panda$core$Bit $tmp1111 = $tmp1109(s$Iter1101);
                panda$core$Bit $tmp1112 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1111);
                if (!$tmp1112.value) goto $l1107;
                {
                    ITable* $tmp1114 = s$Iter1101->$class->itable;
                    while ($tmp1114->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1114 = $tmp1114->next;
                    }
                    $fn1116 $tmp1115 = $tmp1114->methods[1];
                    panda$core$Object* $tmp1117 = $tmp1115(s$Iter1101);
                    s1113 = ((org$pandalanguage$pandac$IRNode*) $tmp1117);
                    panda$core$String* $tmp1119 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1113), &$s1118);
                    panda$core$MutableString$append$panda$core$String(result1094, $tmp1119);
                }
                goto $l1106;
                $l1107:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1105));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1120, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1094, $tmp1120);
            if (((panda$core$Bit) { ifFalse1092 != NULL }).value) {
            {
                panda$core$String* $tmp1122 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1121, ((panda$core$Object*) ifFalse1092));
                panda$core$String* $tmp1124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1122, &$s1123);
                panda$core$MutableString$append$panda$core$String(result1094, $tmp1124);
            }
            }
            panda$core$String* $tmp1125 = panda$core$MutableString$finish$R$panda$core$String(result1094);
            return $tmp1125;
        }
        }
        else {
        panda$core$Bit $tmp1126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1126.value) {
        {
            panda$core$UInt64* $tmp1128 = ((panda$core$UInt64*) ((char*) $match$410_9862->$data + 24));
            value1127 = *$tmp1128;
            panda$core$String* $tmp1129 = panda$core$UInt64$convert$R$panda$core$String(value1127);
            return $tmp1129;
        }
        }
        else {
        panda$core$Bit $tmp1130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1130.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1132 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 16));
            value1131 = *$tmp1132;
            panda$core$String* $tmp1134 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1133, ((panda$core$Object*) value1131));
            panda$core$String* $tmp1136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1134, &$s1135);
            return $tmp1136;
        }
        }
        else {
        panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1137.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1139 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 16));
            value1138 = *$tmp1139;
            panda$core$String* $tmp1141 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1140, ((panda$core$Object*) value1138));
            panda$core$String* $tmp1143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1141, &$s1142);
            return $tmp1143;
        }
        }
        else {
        panda$core$Bit $tmp1144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1144.value) {
        {
            panda$core$String** $tmp1146 = ((panda$core$String**) ((char*) $match$410_9862->$data + 16));
            label1145 = *$tmp1146;
            panda$collections$ImmutableArray** $tmp1148 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 24));
            statements1147 = *$tmp1148;
            panda$core$MutableString* $tmp1150 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1150->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1150->refCount.value = 1;
            panda$core$MutableString$init($tmp1150);
            result1149 = $tmp1150;
            if (((panda$core$Bit) { label1145 != NULL }).value) {
            {
                panda$core$String* $tmp1152 = panda$core$String$convert$R$panda$core$String(label1145);
                panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1152, &$s1153);
                panda$core$MutableString$append$panda$core$String(result1149, $tmp1154);
            }
            }
            panda$core$MutableString$append$panda$core$String(result1149, &$s1155);
            {
                ITable* $tmp1157 = ((panda$collections$Iterable*) statements1147)->$class->itable;
                while ($tmp1157->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1157 = $tmp1157->next;
                }
                $fn1159 $tmp1158 = $tmp1157->methods[0];
                panda$collections$Iterator* $tmp1160 = $tmp1158(((panda$collections$Iterable*) statements1147));
                s$Iter1156 = $tmp1160;
                $l1161:;
                ITable* $tmp1163 = s$Iter1156->$class->itable;
                while ($tmp1163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1163 = $tmp1163->next;
                }
                $fn1165 $tmp1164 = $tmp1163->methods[0];
                panda$core$Bit $tmp1166 = $tmp1164(s$Iter1156);
                panda$core$Bit $tmp1167 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1166);
                if (!$tmp1167.value) goto $l1162;
                {
                    ITable* $tmp1169 = s$Iter1156->$class->itable;
                    while ($tmp1169->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1169 = $tmp1169->next;
                    }
                    $fn1171 $tmp1170 = $tmp1169->methods[1];
                    panda$core$Object* $tmp1172 = $tmp1170(s$Iter1156);
                    s1168 = ((org$pandalanguage$pandac$IRNode*) $tmp1172);
                    panda$core$String* $tmp1174 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1168), &$s1173);
                    panda$core$MutableString$append$panda$core$String(result1149, $tmp1174);
                }
                goto $l1161;
                $l1162:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1160));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1175, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1149, $tmp1175);
            panda$core$String* $tmp1176 = panda$core$MutableString$finish$R$panda$core$String(result1149);
            return $tmp1176;
        }
        }
        else {
        panda$core$Bit $tmp1177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1177.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1179 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 16));
            value1178 = *$tmp1179;
            panda$collections$ImmutableArray** $tmp1181 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 24));
            whens1180 = *$tmp1181;
            panda$collections$ImmutableArray** $tmp1183 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 32));
            other1182 = *$tmp1183;
            panda$core$MutableString* $tmp1185 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1185->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1185->refCount.value = 1;
            panda$core$String* $tmp1188 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1187, ((panda$core$Object*) value1178));
            panda$core$String* $tmp1190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1188, &$s1189);
            panda$core$MutableString$init$panda$core$String($tmp1185, $tmp1190);
            result1184 = $tmp1185;
            {
                ITable* $tmp1192 = ((panda$collections$Iterable*) whens1180)->$class->itable;
                while ($tmp1192->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1192 = $tmp1192->next;
                }
                $fn1194 $tmp1193 = $tmp1192->methods[0];
                panda$collections$Iterator* $tmp1195 = $tmp1193(((panda$collections$Iterable*) whens1180));
                w$Iter1191 = $tmp1195;
                $l1196:;
                ITable* $tmp1198 = w$Iter1191->$class->itable;
                while ($tmp1198->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1198 = $tmp1198->next;
                }
                $fn1200 $tmp1199 = $tmp1198->methods[0];
                panda$core$Bit $tmp1201 = $tmp1199(w$Iter1191);
                panda$core$Bit $tmp1202 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1201);
                if (!$tmp1202.value) goto $l1197;
                {
                    ITable* $tmp1204 = w$Iter1191->$class->itable;
                    while ($tmp1204->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1204 = $tmp1204->next;
                    }
                    $fn1206 $tmp1205 = $tmp1204->methods[1];
                    panda$core$Object* $tmp1207 = $tmp1205(w$Iter1191);
                    w1203 = ((org$pandalanguage$pandac$IRNode*) $tmp1207);
                    panda$core$String* $tmp1209 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1203), &$s1208);
                    panda$core$MutableString$append$panda$core$String(result1184, $tmp1209);
                }
                goto $l1196;
                $l1197:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1195));
            }
            if (((panda$core$Bit) { other1182 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result1184, &$s1210);
                {
                    ITable* $tmp1212 = ((panda$collections$Iterable*) other1182)->$class->itable;
                    while ($tmp1212->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1212 = $tmp1212->next;
                    }
                    $fn1214 $tmp1213 = $tmp1212->methods[0];
                    panda$collections$Iterator* $tmp1215 = $tmp1213(((panda$collections$Iterable*) other1182));
                    s$Iter1211 = $tmp1215;
                    $l1216:;
                    ITable* $tmp1218 = s$Iter1211->$class->itable;
                    while ($tmp1218->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1218 = $tmp1218->next;
                    }
                    $fn1220 $tmp1219 = $tmp1218->methods[0];
                    panda$core$Bit $tmp1221 = $tmp1219(s$Iter1211);
                    panda$core$Bit $tmp1222 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1221);
                    if (!$tmp1222.value) goto $l1217;
                    {
                        ITable* $tmp1224 = s$Iter1211->$class->itable;
                        while ($tmp1224->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1224 = $tmp1224->next;
                        }
                        $fn1226 $tmp1225 = $tmp1224->methods[1];
                        panda$core$Object* $tmp1227 = $tmp1225(s$Iter1211);
                        s1223 = ((org$pandalanguage$pandac$IRNode*) $tmp1227);
                        panda$core$String* $tmp1229 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1223), &$s1228);
                        panda$core$MutableString$append$panda$core$String(result1184, $tmp1229);
                    }
                    goto $l1216;
                    $l1217:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1215));
                }
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1230, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1184, $tmp1230);
            panda$core$String* $tmp1231 = panda$core$MutableString$finish$R$panda$core$String(result1184);
            return $tmp1231;
        }
        }
        else {
        panda$core$Bit $tmp1232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1232.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1234 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 16));
            target1233 = *$tmp1234;
            org$pandalanguage$pandac$MethodRef** $tmp1236 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$410_9862->$data + 24));
            m1235 = *$tmp1236;
            if (((panda$core$Bit) { target1233 != NULL }).value) {
            {
                panda$core$String* $tmp1238 = (($fn1237) target1233->$class->vtable[0])(target1233);
                panda$core$String* $tmp1240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1238, &$s1239);
                panda$core$String* $tmp1241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1240, ((org$pandalanguage$pandac$Symbol*) m1235->value)->name);
                panda$core$String* $tmp1243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1241, &$s1242);
                return $tmp1243;
            }
            }
            return ((org$pandalanguage$pandac$Symbol*) m1235->value)->name;
        }
        }
        else {
        panda$core$Bit $tmp1244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1244.value) {
        {
            panda$core$UInt64* $tmp1246 = ((panda$core$UInt64*) ((char*) $match$410_9862->$data + 24));
            value1245 = *$tmp1246;
            panda$core$UInt64$wrapper* $tmp1248;
            $tmp1248 = (panda$core$UInt64$wrapper*) pandaZAlloc(24);
            $tmp1248->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
            $tmp1248->refCount = 1;
            $tmp1248->value = value1245;
            panda$core$String* $tmp1249 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1247, ((panda$core$Object*) $tmp1248));
            return $tmp1249;
        }
        }
        else {
        panda$core$Bit $tmp1250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1250.value) {
        {
            return &$s1251;
        }
        }
        else {
        panda$core$Bit $tmp1252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1252.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1254 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$410_9862->$data + 16));
            op1253 = *$tmp1254;
            org$pandalanguage$pandac$IRNode** $tmp1256 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 24));
            base1255 = *$tmp1256;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1257;
            $tmp1257 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaZAlloc(24);
            $tmp1257->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp1257->refCount = 1;
            $tmp1257->value = op1253;
            panda$core$String* $tmp1259 = (($fn1258) ((panda$core$Object*) $tmp1257)->$class->vtable[0])(((panda$core$Object*) $tmp1257));
            panda$core$String* $tmp1261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1259, &$s1260);
            panda$core$String* $tmp1262 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1261, ((panda$core$Object*) base1255));
            panda$core$String* $tmp1264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1262, &$s1263);
            return $tmp1264;
        }
        }
        else {
        panda$core$Bit $tmp1265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1265.value) {
        {
            panda$core$String** $tmp1267 = ((panda$core$String**) ((char*) $match$410_9862->$data + 16));
            label1266 = *$tmp1267;
            org$pandalanguage$pandac$IRNode** $tmp1269 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 24));
            target1268 = *$tmp1269;
            org$pandalanguage$pandac$IRNode** $tmp1271 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 32));
            list1270 = *$tmp1271;
            panda$collections$ImmutableArray** $tmp1273 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 40));
            statements1272 = *$tmp1273;
            panda$core$MutableString* $tmp1275 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1275->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1275->refCount.value = 1;
            panda$core$MutableString$init($tmp1275);
            result1274 = $tmp1275;
            if (((panda$core$Bit) { label1266 != NULL }).value) {
            {
                panda$core$String* $tmp1277 = panda$core$String$convert$R$panda$core$String(label1266);
                panda$core$String* $tmp1279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1277, &$s1278);
                panda$core$MutableString$append$panda$core$String(result1274, $tmp1279);
            }
            }
            panda$core$String* $tmp1281 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1280, ((panda$core$Object*) target1268));
            panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1281, &$s1282);
            panda$core$String* $tmp1284 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1283, ((panda$core$Object*) list1270));
            panda$core$String* $tmp1286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1284, &$s1285);
            panda$core$MutableString$append$panda$core$String(result1274, $tmp1286);
            {
                ITable* $tmp1288 = ((panda$collections$Iterable*) statements1272)->$class->itable;
                while ($tmp1288->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1288 = $tmp1288->next;
                }
                $fn1290 $tmp1289 = $tmp1288->methods[0];
                panda$collections$Iterator* $tmp1291 = $tmp1289(((panda$collections$Iterable*) statements1272));
                s$Iter1287 = $tmp1291;
                $l1292:;
                ITable* $tmp1294 = s$Iter1287->$class->itable;
                while ($tmp1294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1294 = $tmp1294->next;
                }
                $fn1296 $tmp1295 = $tmp1294->methods[0];
                panda$core$Bit $tmp1297 = $tmp1295(s$Iter1287);
                panda$core$Bit $tmp1298 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1297);
                if (!$tmp1298.value) goto $l1293;
                {
                    ITable* $tmp1300 = s$Iter1287->$class->itable;
                    while ($tmp1300->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1300 = $tmp1300->next;
                    }
                    $fn1302 $tmp1301 = $tmp1300->methods[1];
                    panda$core$Object* $tmp1303 = $tmp1301(s$Iter1287);
                    s1299 = ((org$pandalanguage$pandac$IRNode*) $tmp1303);
                    panda$core$String* $tmp1305 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1299), &$s1304);
                    panda$core$MutableString$append$panda$core$String(result1274, $tmp1305);
                }
                goto $l1292;
                $l1293:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1291));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1306, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1274, $tmp1306);
            panda$core$String* $tmp1307 = panda$core$MutableString$finish$R$panda$core$String(result1274);
            return $tmp1307;
        }
        }
        else {
        panda$core$Bit $tmp1308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1308.value) {
        {
            panda$core$Real64* $tmp1310 = ((panda$core$Real64*) ((char*) $match$410_9862->$data + 24));
            value1309 = *$tmp1310;
            panda$core$String* $tmp1311 = panda$core$Real64$convert$R$panda$core$String(value1309);
            return $tmp1311;
        }
        }
        else {
        panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1312.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1314 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 16));
            value1313 = *$tmp1314;
            if (((panda$core$Bit) { value1313 != NULL }).value) {
            {
                panda$core$String* $tmp1316 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1315, ((panda$core$Object*) value1313));
                panda$core$String* $tmp1318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1316, &$s1317);
                return $tmp1318;
            }
            }
            return &$s1319;
        }
        }
        else {
        panda$core$Bit $tmp1320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1320.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1322 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9862->$data + 16));
            type1321 = *$tmp1322;
            panda$core$Int64* $tmp1324 = ((panda$core$Int64*) ((char*) $match$410_9862->$data + 24));
            id1323 = *$tmp1324;
            panda$core$Int64$wrapper* $tmp1326;
            $tmp1326 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1326->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1326->refCount = 1;
            $tmp1326->value = id1323;
            panda$core$String* $tmp1327 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1325, ((panda$core$Object*) $tmp1326));
            panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1327, &$s1328);
            panda$core$String* $tmp1330 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1329, ((panda$core$Object*) type1321));
            panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1330, &$s1331);
            return $tmp1332;
        }
        }
        else {
        panda$core$Bit $tmp1333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1333.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1335 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 0));
            base1334 = *$tmp1335;
            panda$core$Int64* $tmp1337 = ((panda$core$Int64*) ((char*) $match$410_9862->$data + 8));
            id1336 = *$tmp1337;
            panda$core$Int64$wrapper* $tmp1339;
            $tmp1339 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp1339->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1339->refCount = 1;
            $tmp1339->value = id1336;
            panda$core$String* $tmp1340 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1338, ((panda$core$Object*) $tmp1339));
            panda$core$String* $tmp1342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1340, &$s1341);
            panda$core$String* $tmp1343 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1342, ((panda$core$Object*) base1334));
            panda$core$String* $tmp1345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1343, &$s1344);
            return $tmp1345;
        }
        }
        else {
        panda$core$Bit $tmp1346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1346.value) {
        {
            return &$s1347;
        }
        }
        else {
        panda$core$Bit $tmp1348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1348.value) {
        {
            panda$core$String** $tmp1350 = ((panda$core$String**) ((char*) $match$410_9862->$data + 16));
            str1349 = *$tmp1350;
            return str1349;
        }
        }
        else {
        panda$core$Bit $tmp1351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1351.value) {
        {
            return &$s1352;
        }
        }
        else {
        panda$core$Bit $tmp1353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1353.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1355 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 16));
            test1354 = *$tmp1355;
            org$pandalanguage$pandac$IRNode** $tmp1357 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 24));
            ifTrue1356 = *$tmp1357;
            org$pandalanguage$pandac$IRNode** $tmp1359 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 32));
            ifFalse1358 = *$tmp1359;
            panda$core$String* $tmp1361 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1360, ((panda$core$Object*) test1354));
            panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1361, &$s1362);
            panda$core$String* $tmp1364 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1363, ((panda$core$Object*) ifTrue1356));
            panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1364, &$s1365);
            panda$core$String* $tmp1367 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1366, ((panda$core$Object*) ifFalse1358));
            panda$core$String* $tmp1369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1367, &$s1368);
            return $tmp1369;
        }
        }
        else {
        panda$core$Bit $tmp1370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1370.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1372 = ((org$pandalanguage$pandac$Type**) ((char*) $match$410_9862->$data + 16));
            type1371 = *$tmp1372;
            panda$core$String* $tmp1373 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1371);
            return $tmp1373;
        }
        }
        else {
        panda$core$Bit $tmp1374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1374.value) {
        {
            panda$core$String** $tmp1376 = ((panda$core$String**) ((char*) $match$410_9862->$data + 16));
            name1375 = *$tmp1376;
            return name1375;
        }
        }
        else {
        panda$core$Bit $tmp1377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1377.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1379 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 24));
            base1378 = *$tmp1379;
            panda$collections$ImmutableArray** $tmp1381 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 32));
            args1380 = *$tmp1381;
            panda$core$String* $tmp1383 = (($fn1382) base1378->$class->vtable[0])(base1378);
            panda$core$String* $tmp1385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1383, &$s1384);
            panda$core$String* $tmp1386 = panda$collections$ImmutableArray$join$R$panda$core$String(args1380);
            panda$core$String* $tmp1387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1385, $tmp1386);
            panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1387, &$s1388);
            return $tmp1389;
        }
        }
        else {
        panda$core$Bit $tmp1390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1390.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1392 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 24));
            target1391 = *$tmp1392;
            panda$collections$ImmutableArray** $tmp1394 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 32));
            methods1393 = *$tmp1394;
            panda$collections$ImmutableArray** $tmp1396 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 40));
            args1395 = *$tmp1396;
            panda$core$String* $tmp1398 = (($fn1397) target1391->$class->vtable[0])(target1391);
            panda$core$String* $tmp1400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1398, &$s1399);
            panda$core$Object* $tmp1401 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods1393, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1400, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp1401)->value)->name);
            panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1402, &$s1403);
            panda$core$String* $tmp1405 = panda$collections$ImmutableArray$join$R$panda$core$String(args1395);
            panda$core$String* $tmp1406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1404, $tmp1405);
            panda$core$String* $tmp1408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1406, &$s1407);
            return $tmp1408;
        }
        }
        else {
        panda$core$Bit $tmp1409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1409.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1411 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 16));
            target1410 = *$tmp1411;
            panda$collections$ImmutableArray** $tmp1413 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 24));
            methods1412 = *$tmp1413;
            panda$core$String* $tmp1415 = (($fn1414) target1410->$class->vtable[0])(target1410);
            panda$core$String* $tmp1417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1415, &$s1416);
            panda$core$Object* $tmp1418 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods1412, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1417, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp1418)->value)->name);
            panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, &$s1420);
            return $tmp1421;
        }
        }
        else {
        panda$core$Bit $tmp1422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1422.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1424 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 16));
            start1423 = *$tmp1424;
            org$pandalanguage$pandac$IRNode** $tmp1426 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 24));
            end1425 = *$tmp1426;
            panda$core$Bit* $tmp1428 = ((panda$core$Bit*) ((char*) $match$410_9862->$data + 32));
            inclusive1427 = *$tmp1428;
            org$pandalanguage$pandac$IRNode** $tmp1430 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 33));
            step1429 = *$tmp1430;
            panda$core$MutableString* $tmp1432 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1432->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1432->refCount.value = 1;
            panda$core$MutableString$init($tmp1432);
            result1431 = $tmp1432;
            if (((panda$core$Bit) { start1423 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1431, ((panda$core$Object*) start1423));
            }
            }
            if (inclusive1427.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1431, &$s1434);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result1431, &$s1435);
            }
            }
            if (((panda$core$Bit) { end1425 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1431, ((panda$core$Object*) end1425));
            }
            }
            if (((panda$core$Bit) { step1429 != NULL }).value) {
            {
                panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1436, ((panda$core$Object*) step1429));
                panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1437, &$s1438);
                panda$core$MutableString$append$panda$core$String(result1431, $tmp1439);
            }
            }
            panda$core$String* $tmp1440 = panda$core$MutableString$finish$R$panda$core$String(result1431);
            return $tmp1440;
        }
        }
        else {
        panda$core$Bit $tmp1441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1441.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1443 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$410_9862->$data + 16));
            kind1442 = *$tmp1443;
            panda$collections$ImmutableArray** $tmp1445 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 24));
            decls1444 = *$tmp1445;
            panda$core$MutableString* $tmp1447 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1447->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1447->refCount.value = 1;
            panda$core$MutableString$init($tmp1447);
            result1446 = $tmp1447;
            {
                $match$585_171449 = kind1442;
                panda$core$Bit $tmp1450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$585_171449.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp1450.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1446, &$s1451);
                }
                }
                else {
                panda$core$Bit $tmp1452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$585_171449.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp1452.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1446, &$s1453);
                }
                }
                else {
                panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$585_171449.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp1454.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1446, &$s1455);
                }
                }
                else {
                panda$core$Bit $tmp1456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$585_171449.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp1456.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1446, &$s1457);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp1458 = panda$collections$ImmutableArray$join$R$panda$core$String(decls1444);
            panda$core$MutableString$append$panda$core$String(result1446, $tmp1458);
            panda$core$String* $tmp1459 = panda$core$MutableString$finish$R$panda$core$String(result1446);
            return $tmp1459;
        }
        }
        else {
        panda$core$Bit $tmp1460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1460.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1462 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$410_9862->$data + 16));
            variable1461 = *$tmp1462;
            return ((org$pandalanguage$pandac$Symbol*) variable1461)->name;
        }
        }
        else {
        panda$core$Bit $tmp1463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1463.value) {
        {
            panda$collections$ImmutableArray** $tmp1465 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 16));
            tests1464 = *$tmp1465;
            panda$collections$ImmutableArray** $tmp1467 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 24));
            statements1466 = *$tmp1467;
            panda$core$String* $tmp1469 = panda$collections$ImmutableArray$join$R$panda$core$String(tests1464);
            panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1468, $tmp1469);
            panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1470, &$s1471);
            panda$core$String* $tmp1474 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(statements1466, &$s1473);
            panda$core$String* $tmp1475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1472, $tmp1474);
            panda$core$String* $tmp1477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1475, &$s1476);
            return $tmp1477;
        }
        }
        else {
        panda$core$Bit $tmp1478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$410_9862->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1478.value) {
        {
            panda$core$String** $tmp1480 = ((panda$core$String**) ((char*) $match$410_9862->$data + 16));
            label1479 = *$tmp1480;
            org$pandalanguage$pandac$IRNode** $tmp1482 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$410_9862->$data + 24));
            test1481 = *$tmp1482;
            panda$collections$ImmutableArray** $tmp1484 = ((panda$collections$ImmutableArray**) ((char*) $match$410_9862->$data + 32));
            statements1483 = *$tmp1484;
            panda$core$MutableString* $tmp1486 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1486->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1486->refCount.value = 1;
            panda$core$MutableString$init($tmp1486);
            result1485 = $tmp1486;
            if (((panda$core$Bit) { label1479 != NULL }).value) {
            {
                panda$core$String* $tmp1488 = panda$core$String$convert$R$panda$core$String(label1479);
                panda$core$String* $tmp1490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1488, &$s1489);
                panda$core$MutableString$append$panda$core$String(result1485, $tmp1490);
            }
            }
            panda$core$String* $tmp1492 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1491, ((panda$core$Object*) test1481));
            panda$core$String* $tmp1494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1492, &$s1493);
            panda$core$MutableString$append$panda$core$String(result1485, $tmp1494);
            {
                ITable* $tmp1496 = ((panda$collections$Iterable*) statements1483)->$class->itable;
                while ($tmp1496->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1496 = $tmp1496->next;
                }
                $fn1498 $tmp1497 = $tmp1496->methods[0];
                panda$collections$Iterator* $tmp1499 = $tmp1497(((panda$collections$Iterable*) statements1483));
                s$Iter1495 = $tmp1499;
                $l1500:;
                ITable* $tmp1502 = s$Iter1495->$class->itable;
                while ($tmp1502->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1502 = $tmp1502->next;
                }
                $fn1504 $tmp1503 = $tmp1502->methods[0];
                panda$core$Bit $tmp1505 = $tmp1503(s$Iter1495);
                panda$core$Bit $tmp1506 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1505);
                if (!$tmp1506.value) goto $l1501;
                {
                    ITable* $tmp1508 = s$Iter1495->$class->itable;
                    while ($tmp1508->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1508 = $tmp1508->next;
                    }
                    $fn1510 $tmp1509 = $tmp1508->methods[1];
                    panda$core$Object* $tmp1511 = $tmp1509(s$Iter1495);
                    s1507 = ((org$pandalanguage$pandac$IRNode*) $tmp1511);
                    panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1507), &$s1512);
                    panda$core$MutableString$append$panda$core$String(result1485, $tmp1513);
                }
                goto $l1500;
                $l1501:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1499));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1514, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1485, $tmp1514);
            panda$core$String* $tmp1515 = panda$core$MutableString$finish$R$panda$core$String(result1485);
            return $tmp1515;
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

