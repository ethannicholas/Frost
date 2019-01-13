#include "org/pandalanguage/pandac/statement/For.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/IR.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "org/pandalanguage/pandac/Compiler/AutoContext.h"
#include "org/pandalanguage/pandac/Compiler/AutoScope.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "org/pandalanguage/pandac/IR/Statement.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/IR/Statement/ID.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/Compiler/TypeContext.h"
#include "org/pandalanguage/pandac/Compiler/EnclosingContext.h"
#include "org/pandalanguage/pandac/expression/Call.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/collections/Stack.h"
#include "org/pandalanguage/pandac/Scanner.h"
#include "org/pandalanguage/pandac/Compiler/AutoUnrefs.h"
#include "org/pandalanguage/pandac/lvalue/VariableLValue.h"
#include "panda/collections/HashSet.h"


static panda$core$String $s1;
org$pandalanguage$pandac$statement$For$class_type org$pandalanguage$pandac$statement$For$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$statement$For$cleanup} };

typedef panda$core$Bit (*$fn10)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn128)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn138)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn144)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn150)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn158)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn186)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn195)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Object* (*$fn217)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn220)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn223)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn241)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Object* (*$fn252)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn255)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn258)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Object* (*$fn276)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn279)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn294)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn307)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn312)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn317)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn322)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn327)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn345)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn350)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn368)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn373)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn391)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn396)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$collections$Iterator* (*$fn399)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn403)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn408)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn418)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn427)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn432)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn435)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn448)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn475)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn480)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn490)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn495)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn513)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn518)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn536)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn541)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn561)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn568)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn573)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$Type* (*$fn593)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn603)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn609)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Int64 (*$fn615)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn623)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn651)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn667)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn673)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn681)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Object* (*$fn704)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn707)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn720)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Object* (*$fn731)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn734)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef panda$core$Object* (*$fn747)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn750)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$Type* (*$fn756)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn770)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn785)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Object* (*$fn805)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn808)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn815)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn820)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn825)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn830)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn835)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn892)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn897)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn900)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn905)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn915)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn920)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn938)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn943)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn961)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn966)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn969)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn974)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn984)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn989)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1007)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1012)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1030)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1035)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef panda$collections$Iterator* (*$fn1038)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1042)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1047)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1059)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1068)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1073)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1076)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1089)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1095)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1100)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1110)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1115)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1129)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1134)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1144)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1149)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1167)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1172)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1190)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1195)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1209)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1214)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1224)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1229)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1247)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1252)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1270)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1275)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1295)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1302)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1307)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$Type* (*$fn1334)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1339)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1347)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1354)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn1364)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn1368)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn1382)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn1388)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1400)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn1410)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn1416)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1428)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1475)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn1519)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1648)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1653)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$IR$Block$ID (*$fn1658)(org$pandalanguage$pandac$IR*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1668)(org$pandalanguage$pandac$IR$Value*);
typedef panda$core$Bit (*$fn1678)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Type* (*$fn1682)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1699)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1704)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1726)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1731)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$Type* (*$fn1739)(org$pandalanguage$pandac$IR$Value*);
typedef void (*$fn1796)(org$pandalanguage$pandac$lvalue$VariableLValue*, org$pandalanguage$pandac$IR$Value*);
typedef panda$collections$Iterator* (*$fn1799)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1803)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1808)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1819)(org$pandalanguage$pandac$IR*);
typedef org$pandalanguage$pandac$IR$Statement$ID (*$fn1828)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Statement*);
typedef void (*$fn1833)(org$pandalanguage$pandac$IR*, org$pandalanguage$pandac$IR$Block$ID);
typedef org$pandalanguage$pandac$Type* (*$fn1850)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1856)(org$pandalanguage$pandac$IR$Value*);
typedef org$pandalanguage$pandac$Type* (*$fn1864)(org$pandalanguage$pandac$IR$Value*);
typedef panda$collections$Iterator* (*$fn1869)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1873)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1878)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1890)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn1903)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn1922)(panda$core$Equatable*, panda$core$Equatable*);
typedef org$pandalanguage$pandac$Position (*$fn1935)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Position (*$fn1966)(org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1970)(org$pandalanguage$pandac$IR$Value*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72", 38, 405696763803624132, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x63\x61\x6e\x6e\x6f\x74\x20\x69\x74\x65\x72\x61\x74\x65\x20\x6f\x76\x65\x72\x20\x27", 30, 8038560140840973662, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x3b\x20\x65\x6e\x64\x70\x6f\x69\x6e\x74\x20\x61\x6e\x64\x20\x73\x74\x65\x70\x20", 21, -6141706979506087981, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65\x73\x20\x61\x72\x65\x20\x6e\x6f\x74\x20\x63\x6f\x6d\x70\x61\x74\x69\x62\x6c\x65", 24, 887845124229666251, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72\x2e\x73\x69\x67\x6e\x65\x64\x28\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 145, -6373339689117336932, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x46\x6f\x72\x2e\x75\x6e\x73\x69\x67\x6e\x65\x64\x28\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 147, 2298592722432976367, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 14, 4811197024876024889, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 14, 4768954892003008695, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x61\x6e\x27\x74\x20\x6e\x65\x67\x61\x74\x65\x20", 13, -6952876218311826270, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, 2844931745703816479, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 13, -455373131340085827, NULL };
static panda$core$String $s503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x53\x74\x61\x72\x74", 9, 2275190231796577369, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x45\x6e\x64", 7, 223035999444522, NULL };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x54\x65\x73\x74", 8, 22526635959261059, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 12, -1187102215809495364, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79", 13, 8849330406844689506, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 21, 7122045963489035426, NULL };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 21, 7079803830616019232, NULL };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x49\x6e\x63\x6c\x75\x73\x69\x76\x65", 22, 6333775125262994784, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x6e\x74\x72\x79\x45\x78\x63\x6c\x75\x73\x69\x76\x65", 22, 6291532992389978590, NULL };
static panda$core$String $s997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x49\x6e\x63", 7, 223035999485325, NULL };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x54\x65\x73\x74", 11, 4554272273549316022, NULL };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x54\x65\x73\x74", 12, -277664928109136540, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -3159342566116007212, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 20, -6459647443159909518, NULL };
static panda$core$String $s1157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x49\x6e\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -2984506197447853638, NULL };
static panda$core$String $s1216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x61\x63\x6b\x77\x61\x72\x64\x45\x78\x63\x6c\x75\x73\x69\x76\x65\x54\x65\x73\x74", 21, -6284811074491755944, NULL };
static panda$core$String $s1237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s1345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x65\x72\x69\x63\x20\x72\x61\x6e\x67\x65\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20", 45, 3720736478287834632, NULL };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s1525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x61\x62\x6c\x65\x20\x74\x79\x70\x65\x20\x27", 45, 3211461562751374179, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20\x6c\x6f\x6f\x70\x20\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x63\x61\x6e\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x6e\x6f\x6e\x2d\x6e\x75\x6d\x65\x72\x69\x63\x20\x74\x79\x70\x65\x20", 47, 1889696216129743228, NULL };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x65\x73\x74\x42\x6c\x6f\x63\x6b", 9, 2360750919238593240, NULL };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6f\x64\x79\x42\x6c\x6f\x63\x6b", 9, 2166892977325889322, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x6e\x64\x42\x6c\x6f\x63\x6b", 8, 21774959319579203, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x64\x6f\x6e\x65", 8, 21980003879763538, NULL };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x65\x78\x74", 4, 218436048, NULL };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x67\x65\x74\x5f\x69\x74\x65\x72\x61\x74\x6f\x72", 12, -672936363034691282, NULL };
static panda$core$String $s1958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x6f\x72\x2e\x70\x61\x6e\x64\x61", 9, 1863707177550032758, NULL };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x75\x6e\x64\x20\x27", 7, 216667501151012, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x72\x61\x6e\x67\x65\x2c\x20\x49\x74\x65\x72\x61\x62\x6c\x65\x2c\x20\x6f\x72\x20\x49\x74\x65\x72\x61\x74\x6f\x72\x2c\x20\x62\x75\x74\x20", 45, -3631308317942430713, NULL };

panda$core$Bit org$pandalanguage$pandac$statement$For$checkSteppedRangeTypes$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, org$pandalanguage$pandac$Type* param2) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
panda$core$Bit local2;
panda$core$Bit local3;
// line 24
org$pandalanguage$pandac$Type$Kind* $tmp2 = &param2->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp3 = *$tmp2;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp4;
$tmp4 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp4->value = $tmp3;
panda$core$Int64 $tmp5 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp6 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp5);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp7;
$tmp7 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp7->value = $tmp6;
ITable* $tmp8 = ((panda$core$Equatable*) $tmp4)->$class->itable;
while ($tmp8->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
panda$core$Bit $tmp11 = $tmp9(((panda$core$Equatable*) $tmp4), ((panda$core$Equatable*) $tmp7));
bool $tmp12 = $tmp11.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp7)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp12) goto block1; else goto block2;
block1:;
// line 25
org$pandalanguage$pandac$FixedArray** $tmp13 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp14 = *$tmp13;
panda$core$Int64 $tmp15 = (panda$core$Int64) {0};
panda$core$Object* $tmp16 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp14, $tmp15);
panda$core$Bit $tmp17 = org$pandalanguage$pandac$statement$For$checkSteppedRangeTypes$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, param1, ((org$pandalanguage$pandac$Type*) $tmp16));
panda$core$Panda$unref$panda$core$Object$Q($tmp16);
// unreffing REF($24:org.pandalanguage.pandac.FixedArray.T)
return $tmp17;
block2:;
// line 27
panda$core$Bit $tmp18 = org$pandalanguage$pandac$Type$get_isSteppedRange$R$panda$core$Bit(param2);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block3; else goto block4;
block3:;
// line 28
org$pandalanguage$pandac$FixedArray** $tmp20 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp21 = *$tmp20;
panda$core$Int64 $tmp22 = (panda$core$Int64) {1};
panda$core$Object* $tmp23 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp21, $tmp22);
org$pandalanguage$pandac$Type* $tmp24 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp23));
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
org$pandalanguage$pandac$Type* $tmp25 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
*(&local0) = $tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// unreffing REF($43:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp23);
// unreffing REF($41:org.pandalanguage.pandac.FixedArray.T)
// line 29
org$pandalanguage$pandac$FixedArray** $tmp26 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp27 = *$tmp26;
panda$core$Int64 $tmp28 = (panda$core$Int64) {2};
panda$core$Object* $tmp29 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp27, $tmp28);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp29)));
org$pandalanguage$pandac$Type* $tmp30 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
*(&local1) = ((org$pandalanguage$pandac$Type*) $tmp29);
panda$core$Panda$unref$panda$core$Object$Q($tmp29);
// unreffing REF($63:org.pandalanguage.pandac.FixedArray.T)
// line 30
org$pandalanguage$pandac$Type* $tmp31 = *(&local0);
org$pandalanguage$pandac$Type* $tmp32 = *(&local1);
panda$core$Bit $tmp33 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp31, $tmp32);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block5; else goto block6;
block5:;
// line 31
panda$core$Bit $tmp35 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type* $tmp36 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// unreffing type2
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp37 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing type1
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp35;
block6:;
// line 33
org$pandalanguage$pandac$Type* $tmp38 = *(&local0);
panda$core$Bit $tmp39 = org$pandalanguage$pandac$Type$get_isChar$R$panda$core$Bit($tmp38);
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block9; else goto block10;
block9:;
org$pandalanguage$pandac$Type* $tmp41 = *(&local1);
panda$core$String** $tmp42 = &((org$pandalanguage$pandac$Symbol*) $tmp41)->name;
panda$core$String* $tmp43 = *$tmp42;
panda$core$Bit $tmp44 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp43, &$s45);
*(&local3) = $tmp44;
goto block11;
block10:;
*(&local3) = $tmp39;
goto block11;
block11:;
panda$core$Bit $tmp46 = *(&local3);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Type* $tmp48 = *(&local0);
panda$core$String** $tmp49 = &((org$pandalanguage$pandac$Symbol*) $tmp48)->name;
panda$core$String* $tmp50 = *$tmp49;
org$pandalanguage$pandac$Type* $tmp51 = *(&local1);
panda$core$String** $tmp52 = &((org$pandalanguage$pandac$Symbol*) $tmp51)->name;
panda$core$String* $tmp53 = *$tmp52;
panda$core$Int64 $tmp54 = panda$core$String$get_length$R$panda$core$Int64(&$s55);
panda$core$Bit $tmp56 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp57 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp54, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp56);
panda$core$String* $tmp58 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp53, $tmp57);
panda$core$Bit $tmp59 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp50, $tmp58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
// unreffing REF($123:panda.core.String)
*(&local2) = $tmp59;
goto block14;
block13:;
*(&local2) = $tmp46;
goto block14;
block14:;
panda$core$Bit $tmp60 = *(&local2);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block7; else goto block8;
block7:;
// line 35
panda$core$Bit $tmp62 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$Type* $tmp63 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
// unreffing type2
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp64 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing type1
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp62;
block8:;
// line 37
panda$core$String* $tmp65 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s66, ((panda$core$Object*) param2));
panda$core$String* $tmp67 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp65, &$s68);
panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp67, &$s70);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing REF($152:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($151:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing REF($150:panda.core.String)
// line 39
panda$core$Bit $tmp71 = panda$core$Bit$init$builtin_bit(false);
org$pandalanguage$pandac$Type* $tmp72 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing type2
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp73 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing type1
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return $tmp71;
block4:;
// line 41
panda$core$Bit $tmp74 = panda$core$Bit$init$builtin_bit(true);
return $tmp74;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$statement$For$signed$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

// line 47
org$pandalanguage$pandac$Type* $tmp75 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp76 = org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp77 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp75, $tmp76);
bool $tmp78 = $tmp77.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// unreffing REF($2:org.pandalanguage.pandac.Type)
if ($tmp78) goto block2; else goto block3;
block2:;
// line 48
org$pandalanguage$pandac$Type* $tmp79 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
// unreffing REF($10:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp79;
block3:;
org$pandalanguage$pandac$Type* $tmp80 = org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp81 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp75, $tmp80);
bool $tmp82 = $tmp81.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
// unreffing REF($20:org.pandalanguage.pandac.Type)
if ($tmp82) goto block4; else goto block5;
block4:;
// line 49
org$pandalanguage$pandac$Type* $tmp83 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp83;
block5:;
org$pandalanguage$pandac$Type* $tmp84 = org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp85 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp75, $tmp84);
bool $tmp86 = $tmp85.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing REF($38:org.pandalanguage.pandac.Type)
if ($tmp86) goto block6; else goto block7;
block6:;
// line 50
org$pandalanguage$pandac$Type* $tmp87 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
// unreffing REF($46:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp87;
block7:;
org$pandalanguage$pandac$Type* $tmp88 = org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp89 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp75, $tmp88);
bool $tmp90 = $tmp89.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
// unreffing REF($56:org.pandalanguage.pandac.Type)
if ($tmp90) goto block8; else goto block9;
block8:;
// line 51
org$pandalanguage$pandac$Type* $tmp91 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
// unreffing REF($64:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp91;
block9:;
// line 52
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return param0;
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($1:org.pandalanguage.pandac.Type)
panda$core$Bit $tmp92 = panda$core$Bit$init$builtin_bit(false);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp94 = (panda$core$Int64) {46};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s95, $tmp94, &$s96);
abort(); // unreachable
block10:;
abort(); // unreachable

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$statement$For$unsigned$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Type* param0) {

// line 59
org$pandalanguage$pandac$Type* $tmp97 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(param0);
org$pandalanguage$pandac$Type* $tmp98 = org$pandalanguage$pandac$Type$Int8$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp99 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp97, $tmp98);
bool $tmp100 = $tmp99.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
// unreffing REF($2:org.pandalanguage.pandac.Type)
if ($tmp100) goto block2; else goto block3;
block2:;
// line 60
org$pandalanguage$pandac$Type* $tmp101 = org$pandalanguage$pandac$Type$UInt8$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp101));
// unreffing REF($10:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp101;
block3:;
org$pandalanguage$pandac$Type* $tmp102 = org$pandalanguage$pandac$Type$Int16$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp103 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp97, $tmp102);
bool $tmp104 = $tmp103.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
// unreffing REF($20:org.pandalanguage.pandac.Type)
if ($tmp104) goto block4; else goto block5;
block4:;
// line 61
org$pandalanguage$pandac$Type* $tmp105 = org$pandalanguage$pandac$Type$UInt16$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
// unreffing REF($28:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp105;
block5:;
org$pandalanguage$pandac$Type* $tmp106 = org$pandalanguage$pandac$Type$Int32$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp107 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp97, $tmp106);
bool $tmp108 = $tmp107.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// unreffing REF($38:org.pandalanguage.pandac.Type)
if ($tmp108) goto block6; else goto block7;
block6:;
// line 62
org$pandalanguage$pandac$Type* $tmp109 = org$pandalanguage$pandac$Type$UInt32$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// unreffing REF($46:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp109;
block7:;
org$pandalanguage$pandac$Type* $tmp110 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp111 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp97, $tmp110);
bool $tmp112 = $tmp111.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
// unreffing REF($56:org.pandalanguage.pandac.Type)
if ($tmp112) goto block8; else goto block9;
block8:;
// line 63
org$pandalanguage$pandac$Type* $tmp113 = org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type();
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
// unreffing REF($64:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return $tmp113;
block9:;
// line 64
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param0));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing REF($1:org.pandalanguage.pandac.Type)
return param0;
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
// unreffing REF($1:org.pandalanguage.pandac.Type)
panda$core$Bit $tmp114 = panda$core$Bit$init$builtin_bit(false);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp116 = (panda$core$Int64) {58};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s117, $tmp116, &$s118);
abort(); // unreachable
block10:;
abort(); // unreachable

}
panda$collections$ListView* org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$IR$Value* param0) {

// line 71
panda$collections$Array* $tmp119 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp120 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp119, $tmp120);
org$pandalanguage$pandac$ASTNode* $tmp121 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp122 = (panda$core$Int64) {26};
org$pandalanguage$pandac$Position $tmp123 = org$pandalanguage$pandac$Position$init();
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp121, $tmp122, $tmp123, param0);
panda$collections$Array$add$panda$collections$Array$T($tmp119, ((panda$core$Object*) $tmp121));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp119)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// unreffing REF($6:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
return ((panda$collections$ListView*) $tmp119);

}
void org$pandalanguage$pandac$statement$For$compileSimpleRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$Variable* param3, org$pandalanguage$pandac$IR$Value* param4, panda$collections$ListView* param5) {

org$pandalanguage$pandac$IR* local0 = NULL;
panda$core$Int64 local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$Type* local3 = NULL;
org$pandalanguage$pandac$ClassDecl* local4 = NULL;
panda$collections$ListView* local5 = NULL;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
org$pandalanguage$pandac$IR$Value* local7 = NULL;
org$pandalanguage$pandac$IR$Value* local8 = NULL;
org$pandalanguage$pandac$IR$Value* local9 = NULL;
org$pandalanguage$pandac$IR$Value* local10 = NULL;
org$pandalanguage$pandac$IR$Block$ID local11;
org$pandalanguage$pandac$IR$Block$ID local12;
org$pandalanguage$pandac$IR$Block$ID local13;
org$pandalanguage$pandac$IR$Block$ID local14;
org$pandalanguage$pandac$IR$Block$ID local15;
org$pandalanguage$pandac$Compiler$AutoContext* local16 = NULL;
org$pandalanguage$pandac$Compiler$AutoScope* local17 = NULL;
org$pandalanguage$pandac$IR$Value* local18 = NULL;
org$pandalanguage$pandac$IR$Value* local19 = NULL;
org$pandalanguage$pandac$ASTNode* local20 = NULL;
org$pandalanguage$pandac$IR$Block$ID local21;
org$pandalanguage$pandac$IR$Value* local22 = NULL;
org$pandalanguage$pandac$IR$Value* local23 = NULL;
org$pandalanguage$pandac$IR$Block$ID local24;
org$pandalanguage$pandac$IR$Block$ID local25;
org$pandalanguage$pandac$IR$Value* local26 = NULL;
org$pandalanguage$pandac$IR$Value* local27 = NULL;
org$pandalanguage$pandac$IR$Value* local28 = NULL;
// line 78
org$pandalanguage$pandac$IR** $tmp124 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp125 = *$tmp124;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
org$pandalanguage$pandac$IR* $tmp126 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
*(&local0) = $tmp125;
// line 79
$fn128 $tmp127 = ($fn128) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp129 = $tmp127(param4);
org$pandalanguage$pandac$Type$Kind* $tmp130 = &$tmp129->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp131 = *$tmp130;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp132;
$tmp132 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp132->value = $tmp131;
panda$core$Int64 $tmp133 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp134 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp133);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp135;
$tmp135 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp135->value = $tmp134;
ITable* $tmp136 = ((panda$core$Equatable*) $tmp132)->$class->itable;
while ($tmp136->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp136 = $tmp136->next;
}
$fn138 $tmp137 = $tmp136->methods[0];
panda$core$Bit $tmp139 = $tmp137(((panda$core$Equatable*) $tmp132), ((panda$core$Equatable*) $tmp135));
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp141 = (panda$core$Int64) {79};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s142, $tmp141);
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp135)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp132)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
// unreffing REF($12:org.pandalanguage.pandac.Type)
// line 80
$fn144 $tmp143 = ($fn144) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp145 = $tmp143(param4);
org$pandalanguage$pandac$FixedArray** $tmp146 = &$tmp145->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp147 = *$tmp146;
ITable* $tmp148 = ((panda$collections$CollectionView*) $tmp147)->$class->itable;
while ($tmp148->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp148 = $tmp148->next;
}
$fn150 $tmp149 = $tmp148->methods[0];
panda$core$Int64 $tmp151 = $tmp149(((panda$collections$CollectionView*) $tmp147));
panda$core$Int64 $tmp152 = (panda$core$Int64) {2};
panda$core$Bit $tmp153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp151, $tmp152);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp155 = (panda$core$Int64) {80};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s156, $tmp155);
abort(); // unreachable
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
// unreffing REF($38:org.pandalanguage.pandac.Type)
// line 81
$fn158 $tmp157 = ($fn158) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp159 = $tmp157(param4);
org$pandalanguage$pandac$FixedArray** $tmp160 = &$tmp159->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp161 = *$tmp160;
panda$core$Int64 $tmp162 = (panda$core$Int64) {0};
panda$core$Object* $tmp163 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp161, $tmp162);
panda$core$String** $tmp164 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp163))->name;
panda$core$String* $tmp165 = *$tmp164;
panda$core$Bit $tmp166 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp165, &$s167);
bool $tmp168 = $tmp166.value;
if ($tmp168) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp169 = (panda$core$Int64) {81};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s170, $tmp169);
abort(); // unreachable
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp163);
// unreffing REF($62:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp159));
// unreffing REF($56:org.pandalanguage.pandac.Type)
// line 82
// line 83
org$pandalanguage$pandac$Variable$Storage** $tmp171 = &param3->storage;
org$pandalanguage$pandac$Variable$Storage* $tmp172 = *$tmp171;
panda$core$Int64* $tmp173 = &$tmp172->$rawValue;
panda$core$Int64 $tmp174 = *$tmp173;
panda$core$Int64 $tmp175 = (panda$core$Int64) {0};
panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp174, $tmp175);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block8; else goto block9;
block8:;
panda$core$Int64* $tmp178 = (panda$core$Int64*) ($tmp172->$data + 0);
panda$core$Int64 $tmp179 = *$tmp178;
*(&local2) = $tmp179;
// line 85
panda$core$Int64 $tmp180 = *(&local2);
*(&local1) = $tmp180;
goto block7;
block9:;
// line 88
panda$core$Bit $tmp181 = panda$core$Bit$init$builtin_bit(false);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp183 = (panda$core$Int64) {88};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s184, $tmp183);
abort(); // unreachable
block10:;
goto block7;
block7:;
// line 91
$fn186 $tmp185 = ($fn186) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp187 = $tmp185(param4);
org$pandalanguage$pandac$FixedArray** $tmp188 = &$tmp187->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp189 = *$tmp188;
panda$core$Int64 $tmp190 = (panda$core$Int64) {1};
panda$core$Object* $tmp191 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp189, $tmp190);
org$pandalanguage$pandac$Type* $tmp192 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp191));
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
org$pandalanguage$pandac$Type* $tmp193 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp193));
*(&local3) = $tmp192;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
// unreffing REF($114:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp191);
// unreffing REF($112:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
// unreffing REF($106:org.pandalanguage.pandac.Type)
// line 92
$fn195 $tmp194 = ($fn195) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp196 = $tmp194(param4);
org$pandalanguage$pandac$ClassDecl* $tmp197 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp196);
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
org$pandalanguage$pandac$ClassDecl* $tmp198 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
*(&local4) = $tmp197;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
// unreffing REF($134:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing REF($133:org.pandalanguage.pandac.Type)
// line 93
org$pandalanguage$pandac$ClassDecl* $tmp199 = *(&local4);
panda$core$Bit $tmp200 = panda$core$Bit$init$builtin_bit($tmp199 == NULL);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block12; else goto block13;
block12:;
// line 94
org$pandalanguage$pandac$ClassDecl* $tmp202 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
// unreffing rangeClass
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp203 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// unreffing indexType
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp204 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block13:;
// line 96
org$pandalanguage$pandac$ClassDecl* $tmp205 = *(&local4);
panda$collections$ListView* $tmp206 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(param0, $tmp205);
*(&local5) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
panda$collections$ListView* $tmp207 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
*(&local5) = $tmp206;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
// unreffing REF($174:panda.collections.ListView<org.pandalanguage.pandac.FieldDecl>)
// line 99
org$pandalanguage$pandac$IR$Value* $tmp208 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp209 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp210 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp211 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp212 = (panda$core$Int64) {9};
panda$collections$ListView* $tmp213 = *(&local5);
panda$core$Int64 $tmp214 = (panda$core$Int64) {0};
ITable* $tmp215 = $tmp213->$class->itable;
while ($tmp215->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp215 = $tmp215->next;
}
$fn217 $tmp216 = $tmp215->methods[0];
panda$core$Object* $tmp218 = $tmp216($tmp213, $tmp214);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp211, $tmp212, param1, param4, ((org$pandalanguage$pandac$FieldDecl*) $tmp218));
$fn220 $tmp219 = ($fn220) $tmp210->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp221 = $tmp219($tmp210, $tmp211);
$fn223 $tmp222 = ($fn223) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp224 = $tmp222(param4);
org$pandalanguage$pandac$FixedArray** $tmp225 = &$tmp224->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp226 = *$tmp225;
panda$core$Int64 $tmp227 = (panda$core$Int64) {1};
panda$core$Object* $tmp228 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp226, $tmp227);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp208, $tmp209, $tmp221, ((org$pandalanguage$pandac$Type*) $tmp228));
org$pandalanguage$pandac$Type* $tmp229 = *(&local3);
org$pandalanguage$pandac$IR$Value* $tmp230 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp208, $tmp229);
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
org$pandalanguage$pandac$IR$Value* $tmp231 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
*(&local6) = $tmp230;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
// unreffing REF($212:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp228);
// unreffing REF($207:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
// unreffing REF($201:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp218);
// unreffing REF($195:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
// unreffing REF($189:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
// unreffing REF($186:org.pandalanguage.pandac.IR.Value)
// line 103
org$pandalanguage$pandac$IR* $tmp232 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp233 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp234 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp235 = *(&local6);
org$pandalanguage$pandac$IR$Value* $tmp236 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp237 = (panda$core$Int64) {2};
panda$core$Int64 $tmp238 = *(&local1);
org$pandalanguage$pandac$Type* $tmp239 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp236, $tmp237, $tmp238, $tmp239);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp233, $tmp234, param1, $tmp235, $tmp236);
$fn241 $tmp240 = ($fn241) $tmp232->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp242 = $tmp240($tmp232, $tmp233);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
// unreffing REF($244:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp233));
// unreffing REF($240:org.pandalanguage.pandac.IR.Statement)
// line 106
org$pandalanguage$pandac$IR$Value* $tmp243 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp244 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp245 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp246 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp247 = (panda$core$Int64) {9};
panda$collections$ListView* $tmp248 = *(&local5);
panda$core$Int64 $tmp249 = (panda$core$Int64) {1};
ITable* $tmp250 = $tmp248->$class->itable;
while ($tmp250->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[0];
panda$core$Object* $tmp253 = $tmp251($tmp248, $tmp249);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp246, $tmp247, param1, param4, ((org$pandalanguage$pandac$FieldDecl*) $tmp253));
$fn255 $tmp254 = ($fn255) $tmp245->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp256 = $tmp254($tmp245, $tmp246);
$fn258 $tmp257 = ($fn258) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp259 = $tmp257(param4);
org$pandalanguage$pandac$FixedArray** $tmp260 = &$tmp259->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp261 = *$tmp260;
panda$core$Int64 $tmp262 = (panda$core$Int64) {1};
panda$core$Object* $tmp263 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp261, $tmp262);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp243, $tmp244, $tmp256, ((org$pandalanguage$pandac$Type*) $tmp263));
org$pandalanguage$pandac$Type* $tmp264 = *(&local3);
org$pandalanguage$pandac$IR$Value* $tmp265 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp243, $tmp264);
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
org$pandalanguage$pandac$IR$Value* $tmp266 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
*(&local7) = $tmp265;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
// unreffing REF($285:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q($tmp263);
// unreffing REF($280:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
// unreffing REF($274:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp253);
// unreffing REF($268:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
// unreffing REF($262:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing REF($259:org.pandalanguage.pandac.IR.Value)
// line 110
org$pandalanguage$pandac$IR$Value* $tmp267 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp268 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp269 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp270 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp271 = (panda$core$Int64) {9};
panda$collections$ListView* $tmp272 = *(&local5);
panda$core$Int64 $tmp273 = (panda$core$Int64) {2};
ITable* $tmp274 = $tmp272->$class->itable;
while ($tmp274->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp274 = $tmp274->next;
}
$fn276 $tmp275 = $tmp274->methods[0];
panda$core$Object* $tmp277 = $tmp275($tmp272, $tmp273);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp270, $tmp271, param1, param4, ((org$pandalanguage$pandac$FieldDecl*) $tmp277));
$fn279 $tmp278 = ($fn279) $tmp269->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp280 = $tmp278($tmp269, $tmp270);
org$pandalanguage$pandac$Type* $tmp281 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp267, $tmp268, $tmp280, $tmp281);
org$pandalanguage$pandac$IR$Value* $tmp282 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp267);
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
org$pandalanguage$pandac$IR$Value* $tmp283 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
*(&local8) = $tmp282;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
// unreffing REF($328:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
// unreffing REF($326:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp277);
// unreffing REF($321:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing REF($315:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
// unreffing REF($312:org.pandalanguage.pandac.IR.Value)
// line 113
org$pandalanguage$pandac$ASTNode* $tmp284 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp285 = (panda$core$Int64) {25};
panda$core$UInt64 $tmp286 = (panda$core$UInt64) {1};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp284, $tmp285, param1, $tmp286);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp287 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp288 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp289 = *(&local3);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp287, $tmp288, $tmp289);
org$pandalanguage$pandac$IR$Value* $tmp290 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp284, $tmp287);
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
org$pandalanguage$pandac$IR$Value* $tmp291 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
*(&local9) = $tmp290;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
// unreffing REF($360:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// unreffing REF($356:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
// unreffing REF($352:org.pandalanguage.pandac.ASTNode)
// line 115
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 116
org$pandalanguage$pandac$IR$Value* $tmp292 = *(&local9);
$fn294 $tmp293 = ($fn294) $tmp292->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp295 = $tmp293($tmp292);
org$pandalanguage$pandac$Type* $tmp296 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp297 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp295, $tmp296);
bool $tmp298 = $tmp297.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
// unreffing REF($384:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing REF($383:org.pandalanguage.pandac.Type)
if ($tmp298) goto block14; else goto block16;
block14:;
// line 117
org$pandalanguage$pandac$IR$Value* $tmp299 = *(&local9);
org$pandalanguage$pandac$Type* $tmp300 = org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value* $tmp301 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp299, $tmp300);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
org$pandalanguage$pandac$IR$Value* $tmp302 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
*(&local10) = $tmp301;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
// unreffing REF($397:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
// unreffing REF($396:org.pandalanguage.pandac.Type)
goto block15;
block16:;
// line 1
// line 120
org$pandalanguage$pandac$IR$Value* $tmp303 = *(&local9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
org$pandalanguage$pandac$IR$Value* $tmp304 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
*(&local10) = $tmp303;
goto block15;
block15:;
// line 124
org$pandalanguage$pandac$IR* $tmp305 = *(&local0);
$fn307 $tmp306 = ($fn307) $tmp305->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp308 = $tmp306($tmp305, &$s309);
*(&local11) = $tmp308;
// line 125
org$pandalanguage$pandac$IR* $tmp310 = *(&local0);
$fn312 $tmp311 = ($fn312) $tmp310->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp313 = $tmp311($tmp310, &$s314);
*(&local12) = $tmp313;
// line 126
org$pandalanguage$pandac$IR* $tmp315 = *(&local0);
$fn317 $tmp316 = ($fn317) $tmp315->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp318 = $tmp316($tmp315, &$s319);
*(&local13) = $tmp318;
// line 127
org$pandalanguage$pandac$IR* $tmp320 = *(&local0);
$fn322 $tmp321 = ($fn322) $tmp320->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp323 = $tmp321($tmp320, &$s324);
*(&local14) = $tmp323;
// line 128
org$pandalanguage$pandac$IR* $tmp325 = *(&local0);
$fn327 $tmp326 = ($fn327) $tmp325->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp328 = $tmp326($tmp325, &$s329);
*(&local15) = $tmp328;
// line 129
org$pandalanguage$pandac$Compiler$AutoContext* $tmp330 = (org$pandalanguage$pandac$Compiler$AutoContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoContext$class);
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp331 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp332 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Block$ID $tmp333 = *(&local12);
org$pandalanguage$pandac$IR$Block$ID $tmp334 = *(&local13);
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp331, $tmp332, param2, $tmp333, $tmp334);
org$pandalanguage$pandac$Compiler$AutoContext$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Compiler$EnclosingContext($tmp330, param0, $tmp331);
*(&local16) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
org$pandalanguage$pandac$Compiler$AutoContext* $tmp335 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp335));
*(&local16) = $tmp330;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
// unreffing REF($450:org.pandalanguage.pandac.Compiler.EnclosingContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
// unreffing REF($449:org.pandalanguage.pandac.Compiler.AutoContext)
// line 1
// line 131
org$pandalanguage$pandac$Compiler$AutoScope* $tmp336 = (org$pandalanguage$pandac$Compiler$AutoScope*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp336, param0);
*(&local17) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp337 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
*(&local17) = $tmp336;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
// unreffing REF($471:org.pandalanguage.pandac.Compiler.AutoScope)
// line 132
org$pandalanguage$pandac$IR* $tmp338 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp339 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp340 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp341 = *(&local8);
org$pandalanguage$pandac$IR$Block$ID $tmp342 = *(&local14);
org$pandalanguage$pandac$IR$Block$ID $tmp343 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp339, $tmp340, param1, $tmp341, $tmp342, $tmp343);
$fn345 $tmp344 = ($fn345) $tmp338->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp346 = $tmp344($tmp338, $tmp339);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing REF($485:org.pandalanguage.pandac.IR.Statement)
// line 134
org$pandalanguage$pandac$IR* $tmp347 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp348 = *(&local14);
$fn350 $tmp349 = ($fn350) $tmp347->$class->vtable[4];
$tmp349($tmp347, $tmp348);
// line 135
org$pandalanguage$pandac$IR$Value* $tmp351 = *(&local6);
org$pandalanguage$pandac$IR$Value* $tmp352 = *(&local7);
panda$collections$ListView* $tmp353 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp352);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp354 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp355 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp356 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp354, $tmp355, $tmp356);
org$pandalanguage$pandac$IR$Value* $tmp357 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp351, &$s358, $tmp353, $tmp354);
org$pandalanguage$pandac$IR$Value* $tmp359 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp357);
*(&local18) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
org$pandalanguage$pandac$IR$Value* $tmp360 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
*(&local18) = $tmp359;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
// unreffing REF($513:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp357));
// unreffing REF($511:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
// unreffing REF($509:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
// unreffing REF($507:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
// unreffing REF($506:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 137
org$pandalanguage$pandac$IR* $tmp361 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp362 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp363 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp364 = *(&local18);
org$pandalanguage$pandac$IR$Block$ID $tmp365 = *(&local11);
org$pandalanguage$pandac$IR$Block$ID $tmp366 = *(&local12);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp362, $tmp363, param1, $tmp364, $tmp365, $tmp366);
$fn368 $tmp367 = ($fn368) $tmp361->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp369 = $tmp367($tmp361, $tmp362);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
// unreffing REF($538:org.pandalanguage.pandac.IR.Statement)
// line 139
org$pandalanguage$pandac$IR* $tmp370 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp371 = *(&local15);
$fn373 $tmp372 = ($fn373) $tmp370->$class->vtable[4];
$tmp372($tmp370, $tmp371);
// line 140
org$pandalanguage$pandac$IR$Value* $tmp374 = *(&local6);
org$pandalanguage$pandac$IR$Value* $tmp375 = *(&local7);
panda$collections$ListView* $tmp376 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp375);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp377 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp378 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp379 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp377, $tmp378, $tmp379);
org$pandalanguage$pandac$IR$Value* $tmp380 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp374, &$s381, $tmp376, $tmp377);
org$pandalanguage$pandac$IR$Value* $tmp382 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp380);
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
org$pandalanguage$pandac$IR$Value* $tmp383 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
*(&local19) = $tmp382;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
// unreffing REF($566:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
// unreffing REF($564:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
// unreffing REF($562:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
// unreffing REF($560:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
// unreffing REF($559:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 142
org$pandalanguage$pandac$IR* $tmp384 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp385 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp386 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp387 = *(&local19);
org$pandalanguage$pandac$IR$Block$ID $tmp388 = *(&local11);
org$pandalanguage$pandac$IR$Block$ID $tmp389 = *(&local12);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp385, $tmp386, param1, $tmp387, $tmp388, $tmp389);
$fn391 $tmp390 = ($fn391) $tmp384->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp392 = $tmp390($tmp384, $tmp385);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
// unreffing REF($591:org.pandalanguage.pandac.IR.Statement)
// line 144
org$pandalanguage$pandac$IR* $tmp393 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp394 = *(&local11);
$fn396 $tmp395 = ($fn396) $tmp393->$class->vtable[4];
$tmp395($tmp393, $tmp394);
// line 145
ITable* $tmp397 = ((panda$collections$Iterable*) param5)->$class->itable;
while ($tmp397->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp397 = $tmp397->next;
}
$fn399 $tmp398 = $tmp397->methods[0];
panda$collections$Iterator* $tmp400 = $tmp398(((panda$collections$Iterable*) param5));
goto block17;
block17:;
ITable* $tmp401 = $tmp400->$class->itable;
while ($tmp401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp401 = $tmp401->next;
}
$fn403 $tmp402 = $tmp401->methods[0];
panda$core$Bit $tmp404 = $tmp402($tmp400);
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block19; else goto block18;
block18:;
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp406 = $tmp400->$class->itable;
while ($tmp406->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp406 = $tmp406->next;
}
$fn408 $tmp407 = $tmp406->methods[1];
panda$core$Object* $tmp409 = $tmp407($tmp400);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp409)));
org$pandalanguage$pandac$ASTNode* $tmp410 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) $tmp409);
// line 146
org$pandalanguage$pandac$ASTNode* $tmp411 = *(&local20);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp411);
panda$core$Panda$unref$panda$core$Object$Q($tmp409);
// unreffing REF($622:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp412 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp412));
// unreffing s
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block17;
block19:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp400));
// unreffing REF($611:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$IR$Value* $tmp413 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
// unreffing entryExclusiveTest
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp414 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp414));
// unreffing entryInclusiveTest
*(&local18) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp415 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
// unreffing scope
*(&local17) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
// line 149
org$pandalanguage$pandac$IR* $tmp416 = *(&local0);
$fn418 $tmp417 = ($fn418) $tmp416->$class->vtable[5];
panda$core$Bit $tmp419 = $tmp417($tmp416);
panda$core$Bit $tmp420 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp419);
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block20; else goto block21;
block20:;
// line 150
org$pandalanguage$pandac$IR* $tmp422 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp423 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp424 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp425 = *(&local13);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp423, $tmp424, param1, $tmp425);
$fn427 $tmp426 = ($fn427) $tmp422->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp428 = $tmp426($tmp422, $tmp423);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
// unreffing REF($669:org.pandalanguage.pandac.IR.Statement)
goto block21;
block21:;
// line 152
org$pandalanguage$pandac$IR* $tmp429 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp430 = *(&local13);
$fn432 $tmp431 = ($fn432) $tmp429->$class->vtable[4];
$tmp431($tmp429, $tmp430);
// line 153
org$pandalanguage$pandac$IR* $tmp433 = *(&local0);
$fn435 $tmp434 = ($fn435) $tmp433->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp436 = $tmp434($tmp433, &$s437);
*(&local21) = $tmp436;
// line 156
org$pandalanguage$pandac$IR$Value* $tmp438 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp439 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp440 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp441 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp442 = (panda$core$Int64) {13};
org$pandalanguage$pandac$IR$Value* $tmp443 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp444 = (panda$core$Int64) {2};
panda$core$Int64 $tmp445 = *(&local1);
org$pandalanguage$pandac$Type* $tmp446 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp443, $tmp444, $tmp445, $tmp446);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp441, $tmp442, param1, $tmp443);
$fn448 $tmp447 = ($fn448) $tmp440->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp449 = $tmp447($tmp440, $tmp441);
org$pandalanguage$pandac$Type* $tmp450 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp438, $tmp439, $tmp449, $tmp450);
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
org$pandalanguage$pandac$IR$Value* $tmp451 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
*(&local22) = $tmp438;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
// unreffing REF($695:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
// unreffing REF($693:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
// unreffing REF($690:org.pandalanguage.pandac.IR.Value)
// line 160
org$pandalanguage$pandac$IR$Value* $tmp452 = *(&local7);
org$pandalanguage$pandac$IR$Value* $tmp453 = *(&local22);
panda$collections$ListView* $tmp454 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp453);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp455 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp456 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp455, $tmp456);
org$pandalanguage$pandac$IR$Value* $tmp457 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp452, &$s458, $tmp454, $tmp455);
org$pandalanguage$pandac$Type* $tmp459 = *(&local3);
org$pandalanguage$pandac$Type* $tmp460 = org$pandalanguage$pandac$statement$For$unsigned$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp459);
org$pandalanguage$pandac$IR$Value* $tmp461 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp457, $tmp460);
*(&local23) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
org$pandalanguage$pandac$IR$Value* $tmp462 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
*(&local23) = $tmp461;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
// unreffing REF($732:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
// unreffing REF($731:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
// unreffing REF($729:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp455));
// unreffing REF($726:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
// unreffing REF($725:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 162
org$pandalanguage$pandac$IR$Value* $tmp463 = *(&local23);
panda$core$Bit $tmp464 = panda$core$Bit$init$builtin_bit($tmp463 != NULL);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block22; else goto block23;
block23:;
panda$core$Int64 $tmp466 = (panda$core$Int64) {162};
org$pandalanguage$pandac$IR$Value* $tmp467 = *(&local22);
panda$core$String* $tmp468 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s469, ((panda$core$Object*) $tmp467));
panda$core$String* $tmp470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp468, &$s471);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s472, $tmp466, $tmp470);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp470));
// unreffing REF($765:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
// unreffing REF($764:panda.core.String)
abort(); // unreachable
block22:;
// line 164
org$pandalanguage$pandac$IR* $tmp473 = *(&local0);
$fn475 $tmp474 = ($fn475) $tmp473->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp476 = $tmp474($tmp473, &$s477);
*(&local24) = $tmp476;
// line 165
org$pandalanguage$pandac$IR* $tmp478 = *(&local0);
$fn480 $tmp479 = ($fn480) $tmp478->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp481 = $tmp479($tmp478, &$s482);
*(&local25) = $tmp481;
// line 166
org$pandalanguage$pandac$IR* $tmp483 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp484 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp485 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp486 = *(&local8);
org$pandalanguage$pandac$IR$Block$ID $tmp487 = *(&local24);
org$pandalanguage$pandac$IR$Block$ID $tmp488 = *(&local25);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp484, $tmp485, param1, $tmp486, $tmp487, $tmp488);
$fn490 $tmp489 = ($fn490) $tmp483->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp491 = $tmp489($tmp483, $tmp484);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
// unreffing REF($786:org.pandalanguage.pandac.IR.Statement)
// line 169
org$pandalanguage$pandac$IR* $tmp492 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp493 = *(&local24);
$fn495 $tmp494 = ($fn495) $tmp492->$class->vtable[4];
$tmp494($tmp492, $tmp493);
// line 170
org$pandalanguage$pandac$IR$Value* $tmp496 = *(&local23);
org$pandalanguage$pandac$IR$Value* $tmp497 = *(&local10);
panda$collections$ListView* $tmp498 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp497);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp499 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp500 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp501 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp499, $tmp500, $tmp501);
org$pandalanguage$pandac$IR$Value* $tmp502 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp496, &$s503, $tmp498, $tmp499);
org$pandalanguage$pandac$IR$Value* $tmp504 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp502);
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
org$pandalanguage$pandac$IR$Value* $tmp505 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp505));
*(&local26) = $tmp504;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
// unreffing REF($813:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
// unreffing REF($811:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
// unreffing REF($809:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
// unreffing REF($807:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
// unreffing REF($806:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 172
org$pandalanguage$pandac$IR* $tmp506 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp507 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp508 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp509 = *(&local26);
org$pandalanguage$pandac$IR$Block$ID $tmp510 = *(&local21);
org$pandalanguage$pandac$IR$Block$ID $tmp511 = *(&local12);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp507, $tmp508, param1, $tmp509, $tmp510, $tmp511);
$fn513 $tmp512 = ($fn513) $tmp506->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp514 = $tmp512($tmp506, $tmp507);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
// unreffing REF($838:org.pandalanguage.pandac.IR.Statement)
// line 175
org$pandalanguage$pandac$IR* $tmp515 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp516 = *(&local25);
$fn518 $tmp517 = ($fn518) $tmp515->$class->vtable[4];
$tmp517($tmp515, $tmp516);
// line 176
org$pandalanguage$pandac$IR$Value* $tmp519 = *(&local23);
org$pandalanguage$pandac$IR$Value* $tmp520 = *(&local10);
panda$collections$ListView* $tmp521 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp520);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp522 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp523 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp524 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp522, $tmp523, $tmp524);
org$pandalanguage$pandac$IR$Value* $tmp525 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp519, &$s526, $tmp521, $tmp522);
org$pandalanguage$pandac$IR$Value* $tmp527 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp525);
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp527));
org$pandalanguage$pandac$IR$Value* $tmp528 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
*(&local27) = $tmp527;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp527));
// unreffing REF($865:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp525));
// unreffing REF($863:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
// unreffing REF($861:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp522));
// unreffing REF($859:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
// unreffing REF($858:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 178
org$pandalanguage$pandac$IR* $tmp529 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp530 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp531 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp532 = *(&local27);
org$pandalanguage$pandac$IR$Block$ID $tmp533 = *(&local21);
org$pandalanguage$pandac$IR$Block$ID $tmp534 = *(&local12);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp530, $tmp531, param1, $tmp532, $tmp533, $tmp534);
$fn536 $tmp535 = ($fn536) $tmp529->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp537 = $tmp535($tmp529, $tmp530);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
// unreffing REF($890:org.pandalanguage.pandac.IR.Statement)
// line 180
org$pandalanguage$pandac$IR* $tmp538 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp539 = *(&local21);
$fn541 $tmp540 = ($fn541) $tmp538->$class->vtable[4];
$tmp540($tmp538, $tmp539);
// line 181
org$pandalanguage$pandac$IR$Value* $tmp542 = *(&local22);
org$pandalanguage$pandac$IR$Value* $tmp543 = *(&local9);
panda$collections$ListView* $tmp544 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp543);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp545 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp546 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp545, $tmp546);
org$pandalanguage$pandac$IR$Value* $tmp547 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp542, &$s548, $tmp544, $tmp545);
org$pandalanguage$pandac$Type* $tmp549 = *(&local3);
org$pandalanguage$pandac$IR$Value* $tmp550 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp547, $tmp549);
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
org$pandalanguage$pandac$IR$Value* $tmp551 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
*(&local28) = $tmp550;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
// unreffing REF($916:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
// unreffing REF($914:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
// unreffing REF($911:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
// unreffing REF($910:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 183
org$pandalanguage$pandac$IR* $tmp552 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp553 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp554 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp555 = *(&local28);
org$pandalanguage$pandac$IR$Value* $tmp556 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp557 = (panda$core$Int64) {2};
panda$core$Int64 $tmp558 = *(&local1);
org$pandalanguage$pandac$Type* $tmp559 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp556, $tmp557, $tmp558, $tmp559);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp553, $tmp554, param1, $tmp555, $tmp556);
$fn561 $tmp560 = ($fn561) $tmp552->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp562 = $tmp560($tmp552, $tmp553);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
// unreffing REF($942:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp553));
// unreffing REF($938:org.pandalanguage.pandac.IR.Statement)
// line 184
org$pandalanguage$pandac$IR* $tmp563 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp564 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp565 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp566 = *(&local11);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp564, $tmp565, param1, $tmp566);
$fn568 $tmp567 = ($fn568) $tmp563->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp569 = $tmp567($tmp563, $tmp564);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
// unreffing REF($958:org.pandalanguage.pandac.IR.Statement)
// line 186
org$pandalanguage$pandac$IR* $tmp570 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp571 = *(&local12);
$fn573 $tmp572 = ($fn573) $tmp570->$class->vtable[4];
$tmp572($tmp570, $tmp571);
org$pandalanguage$pandac$IR$Value* $tmp574 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
// unreffing inc
*(&local28) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp575 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp575));
// unreffing exclusiveTestBit
*(&local27) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp576 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
// unreffing inclusiveTestBit
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp577 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
// unreffing delta
*(&local23) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp578 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
// unreffing indexLoad
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp579 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
// unreffing context
*(&local16) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp580 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
// unreffing stepComparison
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp581 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
// unreffing step
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp582 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp582));
// unreffing inclusive
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp583 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
// unreffing end
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp584 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
// unreffing start
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$ListView* $tmp585 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
// unreffing rangeFields
*(&local5) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp586 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
// unreffing rangeClass
*(&local4) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp587 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp587));
// unreffing indexType
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp588 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp588));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$For$compileSteppedRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$Variable* param3, org$pandalanguage$pandac$IR$Value* param4, panda$collections$ListView* param5) {

org$pandalanguage$pandac$IR* local0 = NULL;
panda$core$Int64 local1;
panda$core$Int64 local2;
org$pandalanguage$pandac$Type* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
org$pandalanguage$pandac$ClassDecl* local5 = NULL;
panda$collections$ListView* local6 = NULL;
org$pandalanguage$pandac$IR$Value* local7 = NULL;
org$pandalanguage$pandac$IR$Value* local8 = NULL;
org$pandalanguage$pandac$IR$Value* local9 = NULL;
org$pandalanguage$pandac$IR$Value* local10 = NULL;
org$pandalanguage$pandac$IR$Value* local11 = NULL;
org$pandalanguage$pandac$IR$Value* local12 = NULL;
org$pandalanguage$pandac$IR$Value* local13 = NULL;
org$pandalanguage$pandac$IR$Block$ID local14;
org$pandalanguage$pandac$IR$Block$ID local15;
org$pandalanguage$pandac$IR$Block$ID local16;
org$pandalanguage$pandac$IR$Block$ID local17;
org$pandalanguage$pandac$IR$Block$ID local18;
org$pandalanguage$pandac$IR$Value* local19 = NULL;
org$pandalanguage$pandac$Compiler$AutoContext* local20 = NULL;
org$pandalanguage$pandac$Compiler$AutoScope* local21 = NULL;
org$pandalanguage$pandac$IR$Value* local22 = NULL;
org$pandalanguage$pandac$IR$Block$ID local23;
org$pandalanguage$pandac$IR$Block$ID local24;
org$pandalanguage$pandac$IR$Value* local25 = NULL;
org$pandalanguage$pandac$IR$Value* local26 = NULL;
org$pandalanguage$pandac$IR$Block$ID local27;
org$pandalanguage$pandac$IR$Block$ID local28;
org$pandalanguage$pandac$IR$Value* local29 = NULL;
org$pandalanguage$pandac$IR$Value* local30 = NULL;
org$pandalanguage$pandac$ASTNode* local31 = NULL;
org$pandalanguage$pandac$IR$Block$ID local32;
org$pandalanguage$pandac$IR$Value* local33 = NULL;
org$pandalanguage$pandac$IR$Block$ID local34;
org$pandalanguage$pandac$IR$Block$ID local35;
org$pandalanguage$pandac$IR$Value* local36 = NULL;
org$pandalanguage$pandac$IR$Block$ID local37;
org$pandalanguage$pandac$IR$Block$ID local38;
org$pandalanguage$pandac$IR$Value* local39 = NULL;
org$pandalanguage$pandac$IR$Value* local40 = NULL;
org$pandalanguage$pandac$IR$Value* local41 = NULL;
org$pandalanguage$pandac$IR$Block$ID local42;
org$pandalanguage$pandac$IR$Block$ID local43;
org$pandalanguage$pandac$IR$Value* local44 = NULL;
org$pandalanguage$pandac$IR$Value* local45 = NULL;
org$pandalanguage$pandac$IR$Value* local46 = NULL;
// line 210
org$pandalanguage$pandac$IR** $tmp589 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp590 = *$tmp589;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp590));
org$pandalanguage$pandac$IR* $tmp591 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
*(&local0) = $tmp590;
// line 211
$fn593 $tmp592 = ($fn593) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp594 = $tmp592(param4);
org$pandalanguage$pandac$Type$Kind* $tmp595 = &$tmp594->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp596 = *$tmp595;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp597;
$tmp597 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp597->value = $tmp596;
panda$core$Int64 $tmp598 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp599 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp598);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp600;
$tmp600 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp600->value = $tmp599;
ITable* $tmp601 = ((panda$core$Equatable*) $tmp597)->$class->itable;
while ($tmp601->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp601 = $tmp601->next;
}
$fn603 $tmp602 = $tmp601->methods[0];
panda$core$Bit $tmp604 = $tmp602(((panda$core$Equatable*) $tmp597), ((panda$core$Equatable*) $tmp600));
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp606 = (panda$core$Int64) {211};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s607, $tmp606);
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp600)));
// unreffing REF($19:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp597)));
// unreffing REF($15:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp594));
// unreffing REF($12:org.pandalanguage.pandac.Type)
// line 212
$fn609 $tmp608 = ($fn609) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp610 = $tmp608(param4);
org$pandalanguage$pandac$FixedArray** $tmp611 = &$tmp610->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp612 = *$tmp611;
ITable* $tmp613 = ((panda$collections$CollectionView*) $tmp612)->$class->itable;
while ($tmp613->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp613 = $tmp613->next;
}
$fn615 $tmp614 = $tmp613->methods[0];
panda$core$Int64 $tmp616 = $tmp614(((panda$collections$CollectionView*) $tmp612));
panda$core$Int64 $tmp617 = (panda$core$Int64) {3};
panda$core$Bit $tmp618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp616, $tmp617);
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp620 = (panda$core$Int64) {212};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s621, $tmp620);
abort(); // unreachable
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
// unreffing REF($38:org.pandalanguage.pandac.Type)
// line 213
$fn623 $tmp622 = ($fn623) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp624 = $tmp622(param4);
org$pandalanguage$pandac$FixedArray** $tmp625 = &$tmp624->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp626 = *$tmp625;
panda$core$Int64 $tmp627 = (panda$core$Int64) {0};
panda$core$Object* $tmp628 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp626, $tmp627);
panda$core$String** $tmp629 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp628))->name;
panda$core$String* $tmp630 = *$tmp629;
panda$core$Bit $tmp631 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp630, &$s632);
bool $tmp633 = $tmp631.value;
if ($tmp633) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp634 = (panda$core$Int64) {213};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s635, $tmp634);
abort(); // unreachable
block5:;
panda$core$Panda$unref$panda$core$Object$Q($tmp628);
// unreffing REF($62:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
// unreffing REF($56:org.pandalanguage.pandac.Type)
// line 214
// line 215
org$pandalanguage$pandac$Variable$Storage** $tmp636 = &param3->storage;
org$pandalanguage$pandac$Variable$Storage* $tmp637 = *$tmp636;
panda$core$Int64* $tmp638 = &$tmp637->$rawValue;
panda$core$Int64 $tmp639 = *$tmp638;
panda$core$Int64 $tmp640 = (panda$core$Int64) {0};
panda$core$Bit $tmp641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp639, $tmp640);
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block8; else goto block9;
block8:;
panda$core$Int64* $tmp643 = (panda$core$Int64*) ($tmp637->$data + 0);
panda$core$Int64 $tmp644 = *$tmp643;
*(&local2) = $tmp644;
// line 217
panda$core$Int64 $tmp645 = *(&local2);
*(&local1) = $tmp645;
goto block7;
block9:;
// line 220
panda$core$Bit $tmp646 = panda$core$Bit$init$builtin_bit(false);
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp648 = (panda$core$Int64) {220};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s649, $tmp648);
abort(); // unreachable
block10:;
goto block7;
block7:;
// line 223
$fn651 $tmp650 = ($fn651) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp652 = $tmp650(param4);
org$pandalanguage$pandac$FixedArray** $tmp653 = &$tmp652->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp654 = *$tmp653;
panda$core$Int64 $tmp655 = (panda$core$Int64) {1};
panda$core$Object* $tmp656 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp654, $tmp655);
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp656)));
org$pandalanguage$pandac$Type* $tmp657 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
*(&local3) = ((org$pandalanguage$pandac$Type*) $tmp656);
panda$core$Panda$unref$panda$core$Object$Q($tmp656);
// unreffing REF($112:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
// unreffing REF($106:org.pandalanguage.pandac.Type)
// line 224
org$pandalanguage$pandac$Type* $tmp658 = *(&local3);
org$pandalanguage$pandac$Type$Kind* $tmp659 = &$tmp658->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp660 = *$tmp659;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp661;
$tmp661 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp661->value = $tmp660;
panda$core$Int64 $tmp662 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp663 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp662);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp664;
$tmp664 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp664->value = $tmp663;
ITable* $tmp665 = ((panda$core$Equatable*) $tmp661)->$class->itable;
while ($tmp665->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp665 = $tmp665->next;
}
$fn667 $tmp666 = $tmp665->methods[1];
panda$core$Bit $tmp668 = $tmp666(((panda$core$Equatable*) $tmp661), ((panda$core$Equatable*) $tmp664));
bool $tmp669 = $tmp668.value;
if ($tmp669) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp670 = (panda$core$Int64) {224};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s671, $tmp670);
abort(); // unreachable
block12:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp664)));
// unreffing REF($135:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp661)));
// unreffing REF($131:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
// line 225
$fn673 $tmp672 = ($fn673) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp674 = $tmp672(param4);
org$pandalanguage$pandac$FixedArray** $tmp675 = &$tmp674->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp676 = *$tmp675;
panda$core$Int64 $tmp677 = (panda$core$Int64) {2};
panda$core$Object* $tmp678 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp676, $tmp677);
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp678)));
org$pandalanguage$pandac$Type* $tmp679 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp679));
*(&local4) = ((org$pandalanguage$pandac$Type*) $tmp678);
panda$core$Panda$unref$panda$core$Object$Q($tmp678);
// unreffing REF($157:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp674));
// unreffing REF($151:org.pandalanguage.pandac.Type)
// line 226
$fn681 $tmp680 = ($fn681) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp682 = $tmp680(param4);
org$pandalanguage$pandac$ClassDecl* $tmp683 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(param0, $tmp682);
*(&local5) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp683));
org$pandalanguage$pandac$ClassDecl* $tmp684 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
*(&local5) = $tmp683;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp683));
// unreffing REF($175:org.pandalanguage.pandac.ClassDecl?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp682));
// unreffing REF($174:org.pandalanguage.pandac.Type)
// line 227
org$pandalanguage$pandac$ClassDecl* $tmp685 = *(&local5);
panda$core$Bit $tmp686 = panda$core$Bit$init$builtin_bit($tmp685 == NULL);
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block14; else goto block15;
block14:;
// line 228
org$pandalanguage$pandac$ClassDecl* $tmp688 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp688));
// unreffing rangeClass
*(&local5) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp689 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp689));
// unreffing stepType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp690 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp690));
// unreffing indexType
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp691 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp691));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block15:;
// line 230
org$pandalanguage$pandac$ClassDecl* $tmp692 = *(&local5);
panda$collections$ListView* $tmp693 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(param0, $tmp692);
*(&local6) = ((panda$collections$ListView*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
panda$collections$ListView* $tmp694 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
*(&local6) = $tmp693;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
// unreffing REF($220:panda.collections.ListView<org.pandalanguage.pandac.FieldDecl>)
// line 233
org$pandalanguage$pandac$IR$Value* $tmp695 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp696 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp697 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp698 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp699 = (panda$core$Int64) {9};
panda$collections$ListView* $tmp700 = *(&local6);
panda$core$Int64 $tmp701 = (panda$core$Int64) {0};
ITable* $tmp702 = $tmp700->$class->itable;
while ($tmp702->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp702 = $tmp702->next;
}
$fn704 $tmp703 = $tmp702->methods[0];
panda$core$Object* $tmp705 = $tmp703($tmp700, $tmp701);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp698, $tmp699, param1, param4, ((org$pandalanguage$pandac$FieldDecl*) $tmp705));
$fn707 $tmp706 = ($fn707) $tmp697->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp708 = $tmp706($tmp697, $tmp698);
org$pandalanguage$pandac$Type* $tmp709 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp695, $tmp696, $tmp708, $tmp709);
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
org$pandalanguage$pandac$IR$Value* $tmp710 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp710));
*(&local7) = $tmp695;
panda$core$Panda$unref$panda$core$Object$Q($tmp705);
// unreffing REF($241:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
// unreffing REF($235:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
// unreffing REF($232:org.pandalanguage.pandac.IR.Value)
// line 237
org$pandalanguage$pandac$IR* $tmp711 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp712 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp713 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp714 = *(&local7);
org$pandalanguage$pandac$IR$Value* $tmp715 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp716 = (panda$core$Int64) {2};
panda$core$Int64 $tmp717 = *(&local1);
org$pandalanguage$pandac$Type* $tmp718 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp715, $tmp716, $tmp717, $tmp718);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp712, $tmp713, param1, $tmp714, $tmp715);
$fn720 $tmp719 = ($fn720) $tmp711->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp721 = $tmp719($tmp711, $tmp712);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
// unreffing REF($269:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
// unreffing REF($266:org.pandalanguage.pandac.IR.Statement)
// line 240
org$pandalanguage$pandac$IR$Value* $tmp722 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp723 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp724 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp725 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp726 = (panda$core$Int64) {9};
panda$collections$ListView* $tmp727 = *(&local6);
panda$core$Int64 $tmp728 = (panda$core$Int64) {1};
ITable* $tmp729 = $tmp727->$class->itable;
while ($tmp729->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp729 = $tmp729->next;
}
$fn731 $tmp730 = $tmp729->methods[0];
panda$core$Object* $tmp732 = $tmp730($tmp727, $tmp728);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp725, $tmp726, param1, param4, ((org$pandalanguage$pandac$FieldDecl*) $tmp732));
$fn734 $tmp733 = ($fn734) $tmp724->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp735 = $tmp733($tmp724, $tmp725);
org$pandalanguage$pandac$Type* $tmp736 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp722, $tmp723, $tmp735, $tmp736);
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp722));
org$pandalanguage$pandac$IR$Value* $tmp737 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp737));
*(&local8) = $tmp722;
panda$core$Panda$unref$panda$core$Object$Q($tmp732);
// unreffing REF($293:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
// unreffing REF($287:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp722));
// unreffing REF($284:org.pandalanguage.pandac.IR.Value)
// line 244
org$pandalanguage$pandac$IR$Value* $tmp738 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp739 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp740 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp741 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp742 = (panda$core$Int64) {9};
panda$collections$ListView* $tmp743 = *(&local6);
panda$core$Int64 $tmp744 = (panda$core$Int64) {2};
ITable* $tmp745 = $tmp743->$class->itable;
while ($tmp745->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp745 = $tmp745->next;
}
$fn747 $tmp746 = $tmp745->methods[0];
panda$core$Object* $tmp748 = $tmp746($tmp743, $tmp744);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp741, $tmp742, param1, param4, ((org$pandalanguage$pandac$FieldDecl*) $tmp748));
$fn750 $tmp749 = ($fn750) $tmp740->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp751 = $tmp749($tmp740, $tmp741);
org$pandalanguage$pandac$Type* $tmp752 = *(&local4);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp738, $tmp739, $tmp751, $tmp752);
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp738));
org$pandalanguage$pandac$IR$Value* $tmp753 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
*(&local9) = $tmp738;
panda$core$Panda$unref$panda$core$Object$Q($tmp748);
// unreffing REF($326:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp741));
// unreffing REF($320:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp738));
// unreffing REF($317:org.pandalanguage.pandac.IR.Value)
// line 246
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 247
org$pandalanguage$pandac$IR$Value* $tmp754 = *(&local9);
$fn756 $tmp755 = ($fn756) $tmp754->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp757 = $tmp755($tmp754);
org$pandalanguage$pandac$Type* $tmp758 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp759 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp757, $tmp758);
bool $tmp760 = $tmp759.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp758));
// unreffing REF($355:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp757));
// unreffing REF($354:org.pandalanguage.pandac.Type)
if ($tmp760) goto block16; else goto block18;
block16:;
// line 248
org$pandalanguage$pandac$IR$Value* $tmp761 = *(&local9);
org$pandalanguage$pandac$Type* $tmp762 = org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value* $tmp763 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp761, $tmp762);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp763));
org$pandalanguage$pandac$IR$Value* $tmp764 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
*(&local10) = $tmp763;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp763));
// unreffing REF($369:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp762));
// unreffing REF($368:org.pandalanguage.pandac.Type)
goto block17;
block18:;
// line 1
// line 251
org$pandalanguage$pandac$IR$Value* $tmp765 = *(&local9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
org$pandalanguage$pandac$IR$Value* $tmp766 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
*(&local10) = $tmp765;
goto block17;
block17:;
// line 253
org$pandalanguage$pandac$IR$Value* $tmp767 = *(&local9);
org$pandalanguage$pandac$IR$Value* $tmp768 = *(&local9);
$fn770 $tmp769 = ($fn770) $tmp768->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp771 = $tmp769($tmp768);
org$pandalanguage$pandac$Type* $tmp772 = org$pandalanguage$pandac$statement$For$signed$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp771);
org$pandalanguage$pandac$IR$Value* $tmp773 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp767, $tmp772);
panda$collections$Array* $tmp774 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp775 = (panda$core$Int64) {0};
panda$collections$Array$init$panda$core$Int64($tmp774, $tmp775);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp776 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp777 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp776, $tmp777);
org$pandalanguage$pandac$IR$Value* $tmp778 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp773, &$s779, ((panda$collections$ListView*) $tmp774), $tmp776);
org$pandalanguage$pandac$Type* $tmp780 = *(&local4);
org$pandalanguage$pandac$IR$Value* $tmp781 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp778, $tmp780);
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp781));
org$pandalanguage$pandac$IR$Value* $tmp782 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp782));
*(&local11) = $tmp781;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp781));
// unreffing REF($413:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp778));
// unreffing REF($411:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp776));
// unreffing REF($408:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp774));
// unreffing REF($403:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp773));
// unreffing REF($401:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp772));
// unreffing REF($400:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp771));
// unreffing REF($399:org.pandalanguage.pandac.Type)
// line 255
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 256
org$pandalanguage$pandac$IR$Value* $tmp783 = *(&local9);
$fn785 $tmp784 = ($fn785) $tmp783->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp786 = $tmp784($tmp783);
org$pandalanguage$pandac$Type* $tmp787 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp788 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp786, $tmp787);
bool $tmp789 = $tmp788.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp787));
// unreffing REF($448:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
// unreffing REF($447:org.pandalanguage.pandac.Type)
if ($tmp789) goto block19; else goto block21;
block19:;
// line 257
org$pandalanguage$pandac$IR$Value* $tmp790 = *(&local11);
org$pandalanguage$pandac$Type* $tmp791 = org$pandalanguage$pandac$Type$UInt64$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value* $tmp792 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp790, $tmp791);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp792));
org$pandalanguage$pandac$IR$Value* $tmp793 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp793));
*(&local12) = $tmp792;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp792));
// unreffing REF($461:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp791));
// unreffing REF($460:org.pandalanguage.pandac.Type)
goto block20;
block21:;
// line 1
// line 260
org$pandalanguage$pandac$IR$Value* $tmp794 = *(&local11);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
org$pandalanguage$pandac$IR$Value* $tmp795 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp795));
*(&local12) = $tmp794;
goto block20;
block20:;
// line 264
org$pandalanguage$pandac$IR$Value* $tmp796 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp797 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp798 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp799 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp800 = (panda$core$Int64) {9};
panda$collections$ListView* $tmp801 = *(&local6);
panda$core$Int64 $tmp802 = (panda$core$Int64) {3};
ITable* $tmp803 = $tmp801->$class->itable;
while ($tmp803->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp803 = $tmp803->next;
}
$fn805 $tmp804 = $tmp803->methods[0];
panda$core$Object* $tmp806 = $tmp804($tmp801, $tmp802);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$FieldDecl($tmp799, $tmp800, param1, param4, ((org$pandalanguage$pandac$FieldDecl*) $tmp806));
$fn808 $tmp807 = ($fn808) $tmp798->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp809 = $tmp807($tmp798, $tmp799);
org$pandalanguage$pandac$Type* $tmp810 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp796, $tmp797, $tmp809, $tmp810);
org$pandalanguage$pandac$IR$Value* $tmp811 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp796);
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
org$pandalanguage$pandac$IR$Value* $tmp812 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
*(&local13) = $tmp811;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
// unreffing REF($504:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
// unreffing REF($502:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp806);
// unreffing REF($497:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp799));
// unreffing REF($491:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp796));
// unreffing REF($488:org.pandalanguage.pandac.IR.Value)
// line 268
org$pandalanguage$pandac$IR* $tmp813 = *(&local0);
$fn815 $tmp814 = ($fn815) $tmp813->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp816 = $tmp814($tmp813, &$s817);
*(&local14) = $tmp816;
// line 269
org$pandalanguage$pandac$IR* $tmp818 = *(&local0);
$fn820 $tmp819 = ($fn820) $tmp818->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp821 = $tmp819($tmp818, &$s822);
*(&local15) = $tmp821;
// line 270
org$pandalanguage$pandac$IR* $tmp823 = *(&local0);
$fn825 $tmp824 = ($fn825) $tmp823->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp826 = $tmp824($tmp823, &$s827);
*(&local16) = $tmp826;
// line 271
org$pandalanguage$pandac$IR* $tmp828 = *(&local0);
$fn830 $tmp829 = ($fn830) $tmp828->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp831 = $tmp829($tmp828, &$s832);
*(&local17) = $tmp831;
// line 272
org$pandalanguage$pandac$IR* $tmp833 = *(&local0);
$fn835 $tmp834 = ($fn835) $tmp833->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp836 = $tmp834($tmp833, &$s837);
*(&local18) = $tmp836;
// line 273
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 274
org$pandalanguage$pandac$Compiler$AutoContext* $tmp838 = (org$pandalanguage$pandac$Compiler$AutoContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoContext$class);
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp839 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp840 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Block$ID $tmp841 = *(&local15);
org$pandalanguage$pandac$IR$Block$ID $tmp842 = *(&local16);
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp839, $tmp840, param2, $tmp841, $tmp842);
org$pandalanguage$pandac$Compiler$AutoContext$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Compiler$EnclosingContext($tmp838, param0, $tmp839);
*(&local20) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
org$pandalanguage$pandac$Compiler$AutoContext* $tmp843 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp843));
*(&local20) = $tmp838;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp839));
// unreffing REF($556:org.pandalanguage.pandac.Compiler.EnclosingContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
// unreffing REF($555:org.pandalanguage.pandac.Compiler.AutoContext)
// line 1
// line 276
org$pandalanguage$pandac$Compiler$AutoScope* $tmp844 = (org$pandalanguage$pandac$Compiler$AutoScope*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp844, param0);
*(&local21) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp844));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp845 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp845));
*(&local21) = $tmp844;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp844));
// unreffing REF($577:org.pandalanguage.pandac.Compiler.AutoScope)
// line 277
org$pandalanguage$pandac$Type* $tmp846 = *(&local4);
panda$core$String** $tmp847 = &((org$pandalanguage$pandac$Symbol*) $tmp846)->name;
panda$core$String* $tmp848 = *$tmp847;
panda$core$Bit $tmp849 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp848, &$s850);
bool $tmp851 = $tmp849.value;
if ($tmp851) goto block22; else goto block24;
block22:;
// line 278
org$pandalanguage$pandac$IR$Value* $tmp852 = *(&local9);
panda$collections$Array* $tmp853 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp854 = (panda$core$Int64) {1};
panda$collections$Array$init$panda$core$Int64($tmp853, $tmp854);
org$pandalanguage$pandac$ASTNode* $tmp855 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp856 = (panda$core$Int64) {25};
panda$core$UInt64 $tmp857 = (panda$core$UInt64) {0};
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64($tmp855, $tmp856, param1, $tmp857);
panda$collections$Array$add$panda$collections$Array$T($tmp853, ((panda$core$Object*) $tmp855));
org$pandalanguage$pandac$Compiler$TypeContext* $tmp858 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp859 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp860 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp858, $tmp859, $tmp860);
org$pandalanguage$pandac$IR$Value* $tmp861 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp852, &$s862, ((panda$collections$ListView*) $tmp853), $tmp858);
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
org$pandalanguage$pandac$IR$Value* $tmp863 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp863));
*(&local22) = $tmp861;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp861));
// unreffing REF($615:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
// unreffing REF($613:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
// unreffing REF($611:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
// unreffing REF($604:org.pandalanguage.pandac.ASTNode)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp853));
// unreffing REF($599:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 280
org$pandalanguage$pandac$IR$Value* $tmp864 = *(&local22);
panda$core$Bit $tmp865 = panda$core$Bit$init$builtin_bit($tmp864 != NULL);
bool $tmp866 = $tmp865.value;
if ($tmp866) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp867 = (panda$core$Int64) {280};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s868, $tmp867);
abort(); // unreachable
block25:;
// line 281
org$pandalanguage$pandac$IR$Value* $tmp869 = *(&local22);
org$pandalanguage$pandac$IR$Value* $tmp870 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp869);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
org$pandalanguage$pandac$IR$Value* $tmp871 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp871));
*(&local19) = $tmp870;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp870));
// unreffing REF($650:org.pandalanguage.pandac.IR.Value)
org$pandalanguage$pandac$IR$Value* $tmp872 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp872));
// unreffing comparison
*(&local22) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block23;
block24:;
// line 1
// line 284
org$pandalanguage$pandac$Type* $tmp873 = *(&local4);
panda$core$String** $tmp874 = &((org$pandalanguage$pandac$Symbol*) $tmp873)->name;
panda$core$String* $tmp875 = *$tmp874;
panda$core$Bit $tmp876 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp875, &$s877);
bool $tmp878 = $tmp876.value;
if ($tmp878) goto block27; else goto block28;
block28:;
panda$core$Int64 $tmp879 = (panda$core$Int64) {284};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s880, $tmp879);
abort(); // unreachable
block27:;
// line 285
org$pandalanguage$pandac$IR$Value* $tmp881 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp882 = (panda$core$Int64) {0};
panda$core$Bit $tmp883 = panda$core$Bit$init$builtin_bit(true);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Bit($tmp881, $tmp882, $tmp883);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp881));
org$pandalanguage$pandac$IR$Value* $tmp884 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp884));
*(&local19) = $tmp881;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp881));
// unreffing REF($679:org.pandalanguage.pandac.IR.Value)
goto block23;
block23:;
// line 287
org$pandalanguage$pandac$IR* $tmp885 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp886 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp887 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp888 = *(&local19);
org$pandalanguage$pandac$IR$Block$ID $tmp889 = *(&local17);
org$pandalanguage$pandac$IR$Block$ID $tmp890 = *(&local18);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp886, $tmp887, param1, $tmp888, $tmp889, $tmp890);
$fn892 $tmp891 = ($fn892) $tmp885->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp893 = $tmp891($tmp885, $tmp886);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp886));
// unreffing REF($695:org.pandalanguage.pandac.IR.Statement)
// line 288
org$pandalanguage$pandac$IR* $tmp894 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp895 = *(&local17);
$fn897 $tmp896 = ($fn897) $tmp894->$class->vtable[4];
$tmp896($tmp894, $tmp895);
// line 289
org$pandalanguage$pandac$IR* $tmp898 = *(&local0);
$fn900 $tmp899 = ($fn900) $tmp898->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp901 = $tmp899($tmp898, &$s902);
*(&local23) = $tmp901;
// line 290
org$pandalanguage$pandac$IR* $tmp903 = *(&local0);
$fn905 $tmp904 = ($fn905) $tmp903->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp906 = $tmp904($tmp903, &$s907);
*(&local24) = $tmp906;
// line 291
org$pandalanguage$pandac$IR* $tmp908 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp909 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp910 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp911 = *(&local13);
org$pandalanguage$pandac$IR$Block$ID $tmp912 = *(&local23);
org$pandalanguage$pandac$IR$Block$ID $tmp913 = *(&local24);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp909, $tmp910, param1, $tmp911, $tmp912, $tmp913);
$fn915 $tmp914 = ($fn915) $tmp908->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp916 = $tmp914($tmp908, $tmp909);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp909));
// unreffing REF($723:org.pandalanguage.pandac.IR.Statement)
// line 293
org$pandalanguage$pandac$IR* $tmp917 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp918 = *(&local23);
$fn920 $tmp919 = ($fn920) $tmp917->$class->vtable[4];
$tmp919($tmp917, $tmp918);
// line 294
org$pandalanguage$pandac$IR$Value* $tmp921 = *(&local7);
org$pandalanguage$pandac$IR$Value* $tmp922 = *(&local8);
panda$collections$ListView* $tmp923 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp922);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp924 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp925 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp926 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp924, $tmp925, $tmp926);
org$pandalanguage$pandac$IR$Value* $tmp927 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp921, &$s928, $tmp923, $tmp924);
org$pandalanguage$pandac$IR$Value* $tmp929 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp927);
*(&local25) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
org$pandalanguage$pandac$IR$Value* $tmp930 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp930));
*(&local25) = $tmp929;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
// unreffing REF($749:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp927));
// unreffing REF($747:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
// unreffing REF($745:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp924));
// unreffing REF($743:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp923));
// unreffing REF($742:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 297
org$pandalanguage$pandac$IR* $tmp931 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp932 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp933 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp934 = *(&local25);
org$pandalanguage$pandac$IR$Block$ID $tmp935 = *(&local14);
org$pandalanguage$pandac$IR$Block$ID $tmp936 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp932, $tmp933, param1, $tmp934, $tmp935, $tmp936);
$fn938 $tmp937 = ($fn938) $tmp931->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp939 = $tmp937($tmp931, $tmp932);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp932));
// unreffing REF($774:org.pandalanguage.pandac.IR.Statement)
// line 299
org$pandalanguage$pandac$IR* $tmp940 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp941 = *(&local24);
$fn943 $tmp942 = ($fn943) $tmp940->$class->vtable[4];
$tmp942($tmp940, $tmp941);
// line 300
org$pandalanguage$pandac$IR$Value* $tmp944 = *(&local7);
org$pandalanguage$pandac$IR$Value* $tmp945 = *(&local8);
panda$collections$ListView* $tmp946 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp945);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp947 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp948 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp949 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp947, $tmp948, $tmp949);
org$pandalanguage$pandac$IR$Value* $tmp950 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp944, &$s951, $tmp946, $tmp947);
org$pandalanguage$pandac$IR$Value* $tmp952 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp950);
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp952));
org$pandalanguage$pandac$IR$Value* $tmp953 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp953));
*(&local26) = $tmp952;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp952));
// unreffing REF($800:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
// unreffing REF($798:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp949));
// unreffing REF($796:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
// unreffing REF($794:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp946));
// unreffing REF($793:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 303
org$pandalanguage$pandac$IR* $tmp954 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp955 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp956 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp957 = *(&local26);
org$pandalanguage$pandac$IR$Block$ID $tmp958 = *(&local14);
org$pandalanguage$pandac$IR$Block$ID $tmp959 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp955, $tmp956, param1, $tmp957, $tmp958, $tmp959);
$fn961 $tmp960 = ($fn961) $tmp954->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp962 = $tmp960($tmp954, $tmp955);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp955));
// unreffing REF($825:org.pandalanguage.pandac.IR.Statement)
// line 305
org$pandalanguage$pandac$IR* $tmp963 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp964 = *(&local18);
$fn966 $tmp965 = ($fn966) $tmp963->$class->vtable[4];
$tmp965($tmp963, $tmp964);
// line 306
org$pandalanguage$pandac$IR* $tmp967 = *(&local0);
$fn969 $tmp968 = ($fn969) $tmp967->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp970 = $tmp968($tmp967, &$s971);
*(&local27) = $tmp970;
// line 307
org$pandalanguage$pandac$IR* $tmp972 = *(&local0);
$fn974 $tmp973 = ($fn974) $tmp972->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp975 = $tmp973($tmp972, &$s976);
*(&local28) = $tmp975;
// line 308
org$pandalanguage$pandac$IR* $tmp977 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp978 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp979 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp980 = *(&local13);
org$pandalanguage$pandac$IR$Block$ID $tmp981 = *(&local27);
org$pandalanguage$pandac$IR$Block$ID $tmp982 = *(&local28);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp978, $tmp979, param1, $tmp980, $tmp981, $tmp982);
$fn984 $tmp983 = ($fn984) $tmp977->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp985 = $tmp983($tmp977, $tmp978);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp978));
// unreffing REF($853:org.pandalanguage.pandac.IR.Statement)
// line 310
org$pandalanguage$pandac$IR* $tmp986 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp987 = *(&local27);
$fn989 $tmp988 = ($fn989) $tmp986->$class->vtable[4];
$tmp988($tmp986, $tmp987);
// line 311
org$pandalanguage$pandac$IR$Value* $tmp990 = *(&local7);
org$pandalanguage$pandac$IR$Value* $tmp991 = *(&local8);
panda$collections$ListView* $tmp992 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp991);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp993 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp994 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp995 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp993, $tmp994, $tmp995);
org$pandalanguage$pandac$IR$Value* $tmp996 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp990, &$s997, $tmp992, $tmp993);
org$pandalanguage$pandac$IR$Value* $tmp998 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp996);
*(&local29) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp998));
org$pandalanguage$pandac$IR$Value* $tmp999 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp999));
*(&local29) = $tmp998;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp998));
// unreffing REF($879:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp996));
// unreffing REF($877:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
// unreffing REF($875:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
// unreffing REF($873:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
// unreffing REF($872:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 314
org$pandalanguage$pandac$IR* $tmp1000 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1001 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1002 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1003 = *(&local29);
org$pandalanguage$pandac$IR$Block$ID $tmp1004 = *(&local14);
org$pandalanguage$pandac$IR$Block$ID $tmp1005 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1001, $tmp1002, param1, $tmp1003, $tmp1004, $tmp1005);
$fn1007 $tmp1006 = ($fn1007) $tmp1000->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1008 = $tmp1006($tmp1000, $tmp1001);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
// unreffing REF($904:org.pandalanguage.pandac.IR.Statement)
// line 316
org$pandalanguage$pandac$IR* $tmp1009 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1010 = *(&local28);
$fn1012 $tmp1011 = ($fn1012) $tmp1009->$class->vtable[4];
$tmp1011($tmp1009, $tmp1010);
// line 317
org$pandalanguage$pandac$IR$Value* $tmp1013 = *(&local7);
org$pandalanguage$pandac$IR$Value* $tmp1014 = *(&local8);
panda$collections$ListView* $tmp1015 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1014);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1016 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1017 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1018 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1016, $tmp1017, $tmp1018);
org$pandalanguage$pandac$IR$Value* $tmp1019 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1013, &$s1020, $tmp1015, $tmp1016);
org$pandalanguage$pandac$IR$Value* $tmp1021 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp1019);
*(&local30) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1021));
org$pandalanguage$pandac$IR$Value* $tmp1022 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
*(&local30) = $tmp1021;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1021));
// unreffing REF($930:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
// unreffing REF($928:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
// unreffing REF($926:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1016));
// unreffing REF($924:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1015));
// unreffing REF($923:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 320
org$pandalanguage$pandac$IR* $tmp1023 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1024 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1025 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1026 = *(&local30);
org$pandalanguage$pandac$IR$Block$ID $tmp1027 = *(&local14);
org$pandalanguage$pandac$IR$Block$ID $tmp1028 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1024, $tmp1025, param1, $tmp1026, $tmp1027, $tmp1028);
$fn1030 $tmp1029 = ($fn1030) $tmp1023->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1031 = $tmp1029($tmp1023, $tmp1024);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1024));
// unreffing REF($955:org.pandalanguage.pandac.IR.Statement)
// line 322
org$pandalanguage$pandac$IR* $tmp1032 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1033 = *(&local14);
$fn1035 $tmp1034 = ($fn1035) $tmp1032->$class->vtable[4];
$tmp1034($tmp1032, $tmp1033);
// line 323
ITable* $tmp1036 = ((panda$collections$Iterable*) param5)->$class->itable;
while ($tmp1036->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1036 = $tmp1036->next;
}
$fn1038 $tmp1037 = $tmp1036->methods[0];
panda$collections$Iterator* $tmp1039 = $tmp1037(((panda$collections$Iterable*) param5));
goto block29;
block29:;
ITable* $tmp1040 = $tmp1039->$class->itable;
while ($tmp1040->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1040 = $tmp1040->next;
}
$fn1042 $tmp1041 = $tmp1040->methods[0];
panda$core$Bit $tmp1043 = $tmp1041($tmp1039);
bool $tmp1044 = $tmp1043.value;
if ($tmp1044) goto block31; else goto block30;
block30:;
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1045 = $tmp1039->$class->itable;
while ($tmp1045->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1045 = $tmp1045->next;
}
$fn1047 $tmp1046 = $tmp1045->methods[1];
panda$core$Object* $tmp1048 = $tmp1046($tmp1039);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1048)));
org$pandalanguage$pandac$ASTNode* $tmp1049 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1049));
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) $tmp1048);
// line 324
org$pandalanguage$pandac$ASTNode* $tmp1050 = *(&local31);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp1050);
panda$core$Panda$unref$panda$core$Object$Q($tmp1048);
// unreffing REF($986:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1051 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
// unreffing s
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block29;
block31:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1039));
// unreffing REF($975:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$IR$Value* $tmp1052 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
// unreffing backwardEntryExclusiveTest
*(&local30) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1053 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
// unreffing backwardEntryInclusiveTest
*(&local29) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1054 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1054));
// unreffing forwardEntryExclusiveTest
*(&local26) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1055 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1055));
// unreffing forwardEntryInclusiveTest
*(&local25) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1056 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1056));
// unreffing scope
*(&local21) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
// line 327
org$pandalanguage$pandac$IR* $tmp1057 = *(&local0);
$fn1059 $tmp1058 = ($fn1059) $tmp1057->$class->vtable[5];
panda$core$Bit $tmp1060 = $tmp1058($tmp1057);
panda$core$Bit $tmp1061 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1060);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block32; else goto block33;
block32:;
// line 328
org$pandalanguage$pandac$IR* $tmp1063 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1064 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1065 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp1066 = *(&local16);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp1064, $tmp1065, param1, $tmp1066);
$fn1068 $tmp1067 = ($fn1068) $tmp1063->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1069 = $tmp1067($tmp1063, $tmp1064);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1064));
// unreffing REF($1043:org.pandalanguage.pandac.IR.Statement)
goto block33;
block33:;
// line 330
org$pandalanguage$pandac$IR* $tmp1070 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1071 = *(&local16);
$fn1073 $tmp1072 = ($fn1073) $tmp1070->$class->vtable[4];
$tmp1072($tmp1070, $tmp1071);
// line 331
org$pandalanguage$pandac$IR* $tmp1074 = *(&local0);
$fn1076 $tmp1075 = ($fn1076) $tmp1074->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1077 = $tmp1075($tmp1074, &$s1078);
*(&local32) = $tmp1077;
// line 333
org$pandalanguage$pandac$IR$Value* $tmp1079 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1080 = (panda$core$Int64) {7};
org$pandalanguage$pandac$IR* $tmp1081 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1082 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1083 = (panda$core$Int64) {13};
org$pandalanguage$pandac$IR$Value* $tmp1084 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1085 = (panda$core$Int64) {2};
panda$core$Int64 $tmp1086 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1087 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1084, $tmp1085, $tmp1086, $tmp1087);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value($tmp1082, $tmp1083, param1, $tmp1084);
$fn1089 $tmp1088 = ($fn1089) $tmp1081->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1090 = $tmp1088($tmp1081, $tmp1082);
org$pandalanguage$pandac$Type* $tmp1091 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$org$pandalanguage$pandac$IR$Statement$ID$org$pandalanguage$pandac$Type($tmp1079, $tmp1080, $tmp1090, $tmp1091);
*(&local33) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1079));
org$pandalanguage$pandac$IR$Value* $tmp1092 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1092));
*(&local33) = $tmp1079;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1084));
// unreffing REF($1069:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
// unreffing REF($1067:org.pandalanguage.pandac.IR.Statement)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1079));
// unreffing REF($1064:org.pandalanguage.pandac.IR.Value)
// line 335
org$pandalanguage$pandac$IR* $tmp1093 = *(&local0);
$fn1095 $tmp1094 = ($fn1095) $tmp1093->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1096 = $tmp1094($tmp1093, &$s1097);
*(&local34) = $tmp1096;
// line 336
org$pandalanguage$pandac$IR* $tmp1098 = *(&local0);
$fn1100 $tmp1099 = ($fn1100) $tmp1098->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1101 = $tmp1099($tmp1098, &$s1102);
*(&local35) = $tmp1101;
// line 337
org$pandalanguage$pandac$IR* $tmp1103 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1104 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1105 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1106 = *(&local19);
org$pandalanguage$pandac$IR$Block$ID $tmp1107 = *(&local34);
org$pandalanguage$pandac$IR$Block$ID $tmp1108 = *(&local35);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1104, $tmp1105, param1, $tmp1106, $tmp1107, $tmp1108);
$fn1110 $tmp1109 = ($fn1110) $tmp1103->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1111 = $tmp1109($tmp1103, $tmp1104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1104));
// unreffing REF($1107:org.pandalanguage.pandac.IR.Statement)
// line 341
org$pandalanguage$pandac$IR* $tmp1112 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1113 = *(&local34);
$fn1115 $tmp1114 = ($fn1115) $tmp1112->$class->vtable[4];
$tmp1114($tmp1112, $tmp1113);
// line 344
org$pandalanguage$pandac$IR$Value* $tmp1116 = *(&local8);
org$pandalanguage$pandac$IR$Value* $tmp1117 = *(&local33);
panda$collections$ListView* $tmp1118 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1117);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1119 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1120 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp1119, $tmp1120);
org$pandalanguage$pandac$IR$Value* $tmp1121 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1116, &$s1122, $tmp1118, $tmp1119);
org$pandalanguage$pandac$Type* $tmp1123 = *(&local3);
org$pandalanguage$pandac$Type* $tmp1124 = org$pandalanguage$pandac$statement$For$unsigned$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1123);
org$pandalanguage$pandac$IR$Value* $tmp1125 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp1121, $tmp1124);
*(&local36) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1125));
org$pandalanguage$pandac$IR$Value* $tmp1126 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1126));
*(&local36) = $tmp1125;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1125));
// unreffing REF($1133:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1124));
// unreffing REF($1132:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1121));
// unreffing REF($1130:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
// unreffing REF($1127:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1118));
// unreffing REF($1126:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 348
org$pandalanguage$pandac$IR* $tmp1127 = *(&local0);
$fn1129 $tmp1128 = ($fn1129) $tmp1127->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1130 = $tmp1128($tmp1127, &$s1131);
*(&local37) = $tmp1130;
// line 349
org$pandalanguage$pandac$IR* $tmp1132 = *(&local0);
$fn1134 $tmp1133 = ($fn1134) $tmp1132->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1135 = $tmp1133($tmp1132, &$s1136);
*(&local38) = $tmp1135;
// line 350
org$pandalanguage$pandac$IR* $tmp1137 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1138 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1139 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1140 = *(&local13);
org$pandalanguage$pandac$IR$Block$ID $tmp1141 = *(&local37);
org$pandalanguage$pandac$IR$Block$ID $tmp1142 = *(&local38);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1138, $tmp1139, param1, $tmp1140, $tmp1141, $tmp1142);
$fn1144 $tmp1143 = ($fn1144) $tmp1137->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1145 = $tmp1143($tmp1137, $tmp1138);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1138));
// unreffing REF($1168:org.pandalanguage.pandac.IR.Statement)
// line 354
org$pandalanguage$pandac$IR* $tmp1146 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1147 = *(&local37);
$fn1149 $tmp1148 = ($fn1149) $tmp1146->$class->vtable[4];
$tmp1148($tmp1146, $tmp1147);
// line 355
org$pandalanguage$pandac$IR$Value* $tmp1150 = *(&local36);
org$pandalanguage$pandac$IR$Value* $tmp1151 = *(&local10);
panda$collections$ListView* $tmp1152 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1151);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1153 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1154 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1155 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1153, $tmp1154, $tmp1155);
org$pandalanguage$pandac$IR$Value* $tmp1156 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1150, &$s1157, $tmp1152, $tmp1153);
org$pandalanguage$pandac$IR$Value* $tmp1158 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp1156);
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1158));
org$pandalanguage$pandac$IR$Value* $tmp1159 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1159));
*(&local39) = $tmp1158;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1158));
// unreffing REF($1195:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1156));
// unreffing REF($1193:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1155));
// unreffing REF($1191:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1153));
// unreffing REF($1189:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1152));
// unreffing REF($1188:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 357
org$pandalanguage$pandac$IR* $tmp1160 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1161 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1162 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1163 = *(&local39);
org$pandalanguage$pandac$IR$Block$ID $tmp1164 = *(&local32);
org$pandalanguage$pandac$IR$Block$ID $tmp1165 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1161, $tmp1162, param1, $tmp1163, $tmp1164, $tmp1165);
$fn1167 $tmp1166 = ($fn1167) $tmp1160->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1168 = $tmp1166($tmp1160, $tmp1161);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1161));
// unreffing REF($1220:org.pandalanguage.pandac.IR.Statement)
// line 360
org$pandalanguage$pandac$IR* $tmp1169 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1170 = *(&local38);
$fn1172 $tmp1171 = ($fn1172) $tmp1169->$class->vtable[4];
$tmp1171($tmp1169, $tmp1170);
// line 361
org$pandalanguage$pandac$IR$Value* $tmp1173 = *(&local36);
org$pandalanguage$pandac$IR$Value* $tmp1174 = *(&local10);
panda$collections$ListView* $tmp1175 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1174);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1176 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1177 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1178 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1176, $tmp1177, $tmp1178);
org$pandalanguage$pandac$IR$Value* $tmp1179 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1173, &$s1180, $tmp1175, $tmp1176);
org$pandalanguage$pandac$IR$Value* $tmp1181 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp1179);
*(&local40) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1181));
org$pandalanguage$pandac$IR$Value* $tmp1182 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1182));
*(&local40) = $tmp1181;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1181));
// unreffing REF($1247:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1179));
// unreffing REF($1245:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1178));
// unreffing REF($1243:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1176));
// unreffing REF($1241:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1175));
// unreffing REF($1240:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 363
org$pandalanguage$pandac$IR* $tmp1183 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1184 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1185 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1186 = *(&local40);
org$pandalanguage$pandac$IR$Block$ID $tmp1187 = *(&local32);
org$pandalanguage$pandac$IR$Block$ID $tmp1188 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1184, $tmp1185, param1, $tmp1186, $tmp1187, $tmp1188);
$fn1190 $tmp1189 = ($fn1190) $tmp1183->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1191 = $tmp1189($tmp1183, $tmp1184);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1184));
// unreffing REF($1272:org.pandalanguage.pandac.IR.Statement)
// line 367
org$pandalanguage$pandac$IR* $tmp1192 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1193 = *(&local35);
$fn1195 $tmp1194 = ($fn1195) $tmp1192->$class->vtable[4];
$tmp1194($tmp1192, $tmp1193);
// line 368
org$pandalanguage$pandac$IR$Value* $tmp1196 = *(&local33);
org$pandalanguage$pandac$IR$Value* $tmp1197 = *(&local8);
panda$collections$ListView* $tmp1198 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1197);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1199 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1200 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp1199, $tmp1200);
org$pandalanguage$pandac$IR$Value* $tmp1201 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1196, &$s1202, $tmp1198, $tmp1199);
org$pandalanguage$pandac$Type* $tmp1203 = *(&local3);
org$pandalanguage$pandac$Type* $tmp1204 = org$pandalanguage$pandac$statement$For$unsigned$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1203);
org$pandalanguage$pandac$IR$Value* $tmp1205 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp1201, $tmp1204);
*(&local41) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1205));
org$pandalanguage$pandac$IR$Value* $tmp1206 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1206));
*(&local41) = $tmp1205;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1205));
// unreffing REF($1298:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1204));
// unreffing REF($1297:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1201));
// unreffing REF($1295:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1199));
// unreffing REF($1292:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1198));
// unreffing REF($1291:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 372
org$pandalanguage$pandac$IR* $tmp1207 = *(&local0);
$fn1209 $tmp1208 = ($fn1209) $tmp1207->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1210 = $tmp1208($tmp1207, &$s1211);
*(&local42) = $tmp1210;
// line 373
org$pandalanguage$pandac$IR* $tmp1212 = *(&local0);
$fn1214 $tmp1213 = ($fn1214) $tmp1212->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1215 = $tmp1213($tmp1212, &$s1216);
*(&local43) = $tmp1215;
// line 374
org$pandalanguage$pandac$IR* $tmp1217 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1218 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1219 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1220 = *(&local13);
org$pandalanguage$pandac$IR$Block$ID $tmp1221 = *(&local42);
org$pandalanguage$pandac$IR$Block$ID $tmp1222 = *(&local43);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1218, $tmp1219, param1, $tmp1220, $tmp1221, $tmp1222);
$fn1224 $tmp1223 = ($fn1224) $tmp1217->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1225 = $tmp1223($tmp1217, $tmp1218);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1218));
// unreffing REF($1333:org.pandalanguage.pandac.IR.Statement)
// line 378
org$pandalanguage$pandac$IR* $tmp1226 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1227 = *(&local42);
$fn1229 $tmp1228 = ($fn1229) $tmp1226->$class->vtable[4];
$tmp1228($tmp1226, $tmp1227);
// line 379
org$pandalanguage$pandac$IR$Value* $tmp1230 = *(&local41);
org$pandalanguage$pandac$IR$Value* $tmp1231 = *(&local12);
panda$collections$ListView* $tmp1232 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1231);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1233 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1234 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1235 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1233, $tmp1234, $tmp1235);
org$pandalanguage$pandac$IR$Value* $tmp1236 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1230, &$s1237, $tmp1232, $tmp1233);
org$pandalanguage$pandac$IR$Value* $tmp1238 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp1236);
*(&local44) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1238));
org$pandalanguage$pandac$IR$Value* $tmp1239 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1239));
*(&local44) = $tmp1238;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1238));
// unreffing REF($1360:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1236));
// unreffing REF($1358:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1235));
// unreffing REF($1356:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1233));
// unreffing REF($1354:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
// unreffing REF($1353:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 382
org$pandalanguage$pandac$IR* $tmp1240 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1241 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1242 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1243 = *(&local44);
org$pandalanguage$pandac$IR$Block$ID $tmp1244 = *(&local32);
org$pandalanguage$pandac$IR$Block$ID $tmp1245 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1241, $tmp1242, param1, $tmp1243, $tmp1244, $tmp1245);
$fn1247 $tmp1246 = ($fn1247) $tmp1240->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1248 = $tmp1246($tmp1240, $tmp1241);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1241));
// unreffing REF($1385:org.pandalanguage.pandac.IR.Statement)
// line 386
org$pandalanguage$pandac$IR* $tmp1249 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1250 = *(&local43);
$fn1252 $tmp1251 = ($fn1252) $tmp1249->$class->vtable[4];
$tmp1251($tmp1249, $tmp1250);
// line 387
org$pandalanguage$pandac$IR$Value* $tmp1253 = *(&local41);
org$pandalanguage$pandac$IR$Value* $tmp1254 = *(&local12);
panda$collections$ListView* $tmp1255 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1254);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1256 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1257 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1258 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1256, $tmp1257, $tmp1258);
org$pandalanguage$pandac$IR$Value* $tmp1259 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1253, &$s1260, $tmp1255, $tmp1256);
org$pandalanguage$pandac$IR$Value* $tmp1261 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp1259);
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1261));
org$pandalanguage$pandac$IR$Value* $tmp1262 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
*(&local45) = $tmp1261;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1261));
// unreffing REF($1412:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1259));
// unreffing REF($1410:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1258));
// unreffing REF($1408:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1256));
// unreffing REF($1406:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1255));
// unreffing REF($1405:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 389
org$pandalanguage$pandac$IR* $tmp1263 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1264 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1265 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1266 = *(&local45);
org$pandalanguage$pandac$IR$Block$ID $tmp1267 = *(&local32);
org$pandalanguage$pandac$IR$Block$ID $tmp1268 = *(&local15);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1264, $tmp1265, param1, $tmp1266, $tmp1267, $tmp1268);
$fn1270 $tmp1269 = ($fn1270) $tmp1263->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1271 = $tmp1269($tmp1263, $tmp1264);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1264));
// unreffing REF($1437:org.pandalanguage.pandac.IR.Statement)
// line 392
org$pandalanguage$pandac$IR* $tmp1272 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1273 = *(&local32);
$fn1275 $tmp1274 = ($fn1275) $tmp1272->$class->vtable[4];
$tmp1274($tmp1272, $tmp1273);
// line 393
org$pandalanguage$pandac$IR$Value* $tmp1276 = *(&local33);
org$pandalanguage$pandac$IR$Value* $tmp1277 = *(&local9);
panda$collections$ListView* $tmp1278 = org$pandalanguage$pandac$statement$For$arg$org$pandalanguage$pandac$IR$Value$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT($tmp1277);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1279 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1280 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp1279, $tmp1280);
org$pandalanguage$pandac$IR$Value* $tmp1281 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1276, &$s1282, $tmp1278, $tmp1279);
org$pandalanguage$pandac$Type* $tmp1283 = *(&local3);
org$pandalanguage$pandac$IR$Value* $tmp1284 = org$pandalanguage$pandac$Compiler$convert$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp1281, $tmp1283);
*(&local46) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1284));
org$pandalanguage$pandac$IR$Value* $tmp1285 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1285));
*(&local46) = $tmp1284;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1284));
// unreffing REF($1462:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1281));
// unreffing REF($1460:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1279));
// unreffing REF($1457:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1278));
// unreffing REF($1456:panda.collections.ListView<org.pandalanguage.pandac.ASTNode>)
// line 395
org$pandalanguage$pandac$IR* $tmp1286 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1287 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1288 = (panda$core$Int64) {26};
org$pandalanguage$pandac$IR$Value* $tmp1289 = *(&local46);
org$pandalanguage$pandac$IR$Value* $tmp1290 = (org$pandalanguage$pandac$IR$Value*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$IR$Value$class);
panda$core$Int64 $tmp1291 = (panda$core$Int64) {2};
panda$core$Int64 $tmp1292 = *(&local1);
org$pandalanguage$pandac$Type* $tmp1293 = *(&local3);
org$pandalanguage$pandac$IR$Value$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1290, $tmp1291, $tmp1292, $tmp1293);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Value($tmp1287, $tmp1288, param1, $tmp1289, $tmp1290);
$fn1295 $tmp1294 = ($fn1295) $tmp1286->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1296 = $tmp1294($tmp1286, $tmp1287);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1290));
// unreffing REF($1488:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1287));
// unreffing REF($1484:org.pandalanguage.pandac.IR.Statement)
// line 396
org$pandalanguage$pandac$IR* $tmp1297 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1298 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1299 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp1300 = *(&local14);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp1298, $tmp1299, param1, $tmp1300);
$fn1302 $tmp1301 = ($fn1302) $tmp1297->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1303 = $tmp1301($tmp1297, $tmp1298);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1298));
// unreffing REF($1504:org.pandalanguage.pandac.IR.Statement)
// line 398
org$pandalanguage$pandac$IR* $tmp1304 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1305 = *(&local15);
$fn1307 $tmp1306 = ($fn1307) $tmp1304->$class->vtable[4];
$tmp1306($tmp1304, $tmp1305);
org$pandalanguage$pandac$IR$Value* $tmp1308 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1308));
// unreffing inc
*(&local46) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1309 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1309));
// unreffing backwardExclusiveTestBit
*(&local45) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1310 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1310));
// unreffing backwardInclusiveTestBit
*(&local44) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1311 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
// unreffing backwardDelta
*(&local41) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1312 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1312));
// unreffing forwardExclusiveTestBit
*(&local40) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1313 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1313));
// unreffing forwardInclusiveTestBit
*(&local39) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1314 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1314));
// unreffing forwardDelta
*(&local36) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1315 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1315));
// unreffing indexLoad
*(&local33) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp1316 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1316));
// unreffing context
*(&local20) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1317 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1317));
// unreffing direction
*(&local19) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1318 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1318));
// unreffing inclusive
*(&local13) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1319 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
// unreffing negStepComparison
*(&local12) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1320 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1320));
// unreffing negStep
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1321 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1321));
// unreffing stepComparison
*(&local10) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1322 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1322));
// unreffing step
*(&local9) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1323 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1323));
// unreffing end
*(&local8) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1324 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1324));
// unreffing start
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$collections$ListView* $tmp1325 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1325));
// unreffing rangeFields
*(&local6) = ((panda$collections$ListView*) NULL);
org$pandalanguage$pandac$ClassDecl* $tmp1326 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1326));
// unreffing rangeClass
*(&local5) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
org$pandalanguage$pandac$Type* $tmp1327 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1327));
// unreffing stepType
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp1328 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1328));
// unreffing indexType
*(&local3) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1329 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1329));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$For$compileRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$IR$Value* param4, panda$collections$ListView* param5) {

org$pandalanguage$pandac$IR* local0 = NULL;
panda$core$Bit local1;
org$pandalanguage$pandac$Type* local2 = NULL;
org$pandalanguage$pandac$Compiler$AutoScope* local3 = NULL;
org$pandalanguage$pandac$Pair* local4 = NULL;
// line 405
org$pandalanguage$pandac$IR** $tmp1330 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp1331 = *$tmp1330;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1331));
org$pandalanguage$pandac$IR* $tmp1332 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1332));
*(&local0) = $tmp1331;
// line 406
$fn1334 $tmp1333 = ($fn1334) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1335 = $tmp1333(param4);
panda$core$Bit $tmp1336 = org$pandalanguage$pandac$Type$get_isRange$R$panda$core$Bit($tmp1335);
bool $tmp1337 = $tmp1336.value;
if ($tmp1337) goto block1; else goto block2;
block1:;
*(&local1) = $tmp1336;
goto block3;
block2:;
$fn1339 $tmp1338 = ($fn1339) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1340 = $tmp1338(param4);
panda$core$Bit $tmp1341 = org$pandalanguage$pandac$Type$get_isSteppedRange$R$panda$core$Bit($tmp1340);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1340));
// unreffing REF($19:org.pandalanguage.pandac.Type)
*(&local1) = $tmp1341;
goto block3;
block3:;
panda$core$Bit $tmp1342 = *(&local1);
bool $tmp1343 = $tmp1342.value;
if ($tmp1343) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1344 = (panda$core$Int64) {406};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1345, $tmp1344);
abort(); // unreachable
block4:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1335));
// unreffing REF($12:org.pandalanguage.pandac.Type)
// line 407
$fn1347 $tmp1346 = ($fn1347) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1348 = $tmp1346(param4);
panda$core$Bit $tmp1349 = org$pandalanguage$pandac$statement$For$checkSteppedRangeTypes$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, param1, $tmp1348);
panda$core$Bit $tmp1350 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1349);
bool $tmp1351 = $tmp1350.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1348));
// unreffing REF($37:org.pandalanguage.pandac.Type)
if ($tmp1351) goto block6; else goto block7;
block6:;
// line 408
org$pandalanguage$pandac$IR* $tmp1352 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1352));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block7:;
// line 410
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
// line 411
$fn1354 $tmp1353 = ($fn1354) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1355 = $tmp1353(param4);
org$pandalanguage$pandac$Type$Kind* $tmp1356 = &$tmp1355->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1357 = *$tmp1356;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1358;
$tmp1358 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1358->value = $tmp1357;
panda$core$Int64 $tmp1359 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1360 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1359);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1361;
$tmp1361 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1361->value = $tmp1360;
ITable* $tmp1362 = ((panda$core$Equatable*) $tmp1358)->$class->itable;
while ($tmp1362->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1362 = $tmp1362->next;
}
$fn1364 $tmp1363 = $tmp1362->methods[0];
panda$core$Bit $tmp1365 = $tmp1363(((panda$core$Equatable*) $tmp1358), ((panda$core$Equatable*) $tmp1361));
bool $tmp1366 = $tmp1365.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1361)));
// unreffing REF($63:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1358)));
// unreffing REF($59:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1355));
// unreffing REF($56:org.pandalanguage.pandac.Type)
if ($tmp1366) goto block8; else goto block10;
block8:;
// line 412
$fn1368 $tmp1367 = ($fn1368) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1369 = $tmp1367(param4);
org$pandalanguage$pandac$FixedArray** $tmp1370 = &$tmp1369->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1371 = *$tmp1370;
panda$core$Int64 $tmp1372 = (panda$core$Int64) {0};
panda$core$Object* $tmp1373 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1371, $tmp1372);
org$pandalanguage$pandac$Type$Kind* $tmp1374 = &((org$pandalanguage$pandac$Type*) $tmp1373)->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1375 = *$tmp1374;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1376;
$tmp1376 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1376->value = $tmp1375;
panda$core$Int64 $tmp1377 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp1378 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1377);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1379;
$tmp1379 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1379->value = $tmp1378;
ITable* $tmp1380 = ((panda$core$Equatable*) $tmp1376)->$class->itable;
while ($tmp1380->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1380 = $tmp1380->next;
}
$fn1382 $tmp1381 = $tmp1380->methods[0];
panda$core$Bit $tmp1383 = $tmp1381(((panda$core$Equatable*) $tmp1376), ((panda$core$Equatable*) $tmp1379));
bool $tmp1384 = $tmp1383.value;
if ($tmp1384) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp1385 = (panda$core$Int64) {412};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1386, $tmp1385);
abort(); // unreachable
block11:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1379)));
// unreffing REF($93:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1376)));
// unreffing REF($89:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q($tmp1373);
// unreffing REF($85:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1369));
// unreffing REF($79:org.pandalanguage.pandac.Type)
// line 413
$fn1388 $tmp1387 = ($fn1388) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1389 = $tmp1387(param4);
org$pandalanguage$pandac$FixedArray** $tmp1390 = &$tmp1389->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1391 = *$tmp1390;
panda$core$Int64 $tmp1392 = (panda$core$Int64) {0};
panda$core$Object* $tmp1393 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1391, $tmp1392);
org$pandalanguage$pandac$FixedArray** $tmp1394 = &((org$pandalanguage$pandac$Type*) $tmp1393)->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1395 = *$tmp1394;
panda$core$Int64 $tmp1396 = (panda$core$Int64) {1};
panda$core$Object* $tmp1397 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1395, $tmp1396);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1397)));
org$pandalanguage$pandac$Type* $tmp1398 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1398));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp1397);
panda$core$Panda$unref$panda$core$Object$Q($tmp1397);
// unreffing REF($128:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp1393);
// unreffing REF($121:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1389));
// unreffing REF($115:org.pandalanguage.pandac.Type)
goto block9;
block10:;
// line 1
// line 416
$fn1400 $tmp1399 = ($fn1400) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1401 = $tmp1399(param4);
org$pandalanguage$pandac$Type$Kind* $tmp1402 = &$tmp1401->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1403 = *$tmp1402;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1404;
$tmp1404 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1404->value = $tmp1403;
panda$core$Int64 $tmp1405 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp1406 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1405);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1407;
$tmp1407 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1407->value = $tmp1406;
ITable* $tmp1408 = ((panda$core$Equatable*) $tmp1404)->$class->itable;
while ($tmp1408->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1408 = $tmp1408->next;
}
$fn1410 $tmp1409 = $tmp1408->methods[0];
panda$core$Bit $tmp1411 = $tmp1409(((panda$core$Equatable*) $tmp1404), ((panda$core$Equatable*) $tmp1407));
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp1413 = (panda$core$Int64) {416};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1414, $tmp1413);
abort(); // unreachable
block13:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1407)));
// unreffing REF($156:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1404)));
// unreffing REF($152:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1401));
// unreffing REF($149:org.pandalanguage.pandac.Type)
// line 417
$fn1416 $tmp1415 = ($fn1416) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1417 = $tmp1415(param4);
org$pandalanguage$pandac$FixedArray** $tmp1418 = &$tmp1417->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1419 = *$tmp1418;
panda$core$Int64 $tmp1420 = (panda$core$Int64) {1};
panda$core$Object* $tmp1421 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1419, $tmp1420);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1421)));
org$pandalanguage$pandac$Type* $tmp1422 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1422));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp1421);
panda$core$Panda$unref$panda$core$Object$Q($tmp1421);
// unreffing REF($181:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
// unreffing REF($175:org.pandalanguage.pandac.Type)
goto block9;
block9:;
// line 419
org$pandalanguage$pandac$Type* $tmp1423 = *(&local2);
panda$core$Bit $tmp1424 = org$pandalanguage$pandac$Type$get_isNumeric$R$panda$core$Bit($tmp1423);
panda$core$Bit $tmp1425 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1424);
bool $tmp1426 = $tmp1425.value;
if ($tmp1426) goto block15; else goto block16;
block15:;
// line 420
$fn1428 $tmp1427 = ($fn1428) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1429 = $tmp1427(param4);
panda$core$String* $tmp1430 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1431, ((panda$core$Object*) $tmp1429));
panda$core$String* $tmp1432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1430, &$s1433);
panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1435, $tmp1432);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, param1, $tmp1434);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1434));
// unreffing REF($208:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1432));
// unreffing REF($207:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1430));
// unreffing REF($206:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1429));
// unreffing REF($204:org.pandalanguage.pandac.Type)
// line 422
org$pandalanguage$pandac$Type* $tmp1436 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1436));
// unreffing elementType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1437 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1437));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block16:;
// line 424
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1438 = (org$pandalanguage$pandac$Compiler$AutoScope*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp1438, param0);
*(&local3) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1438));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1439 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1439));
*(&local3) = $tmp1438;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1438));
// unreffing REF($235:org.pandalanguage.pandac.Compiler.AutoScope)
// line 425
panda$core$Int64 $tmp1440 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Variable$Kind $tmp1441 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp1440);
org$pandalanguage$pandac$Type* $tmp1442 = *(&local2);
org$pandalanguage$pandac$Type* $tmp1443 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type($tmp1442);
org$pandalanguage$pandac$Pair* $tmp1444 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Variable$Corg$pandalanguage$pandac$IR$Value$Q$GT$Q(param0, param3, $tmp1441, ((org$pandalanguage$pandac$ASTNode*) NULL), $tmp1443);
*(&local4) = ((org$pandalanguage$pandac$Pair*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1444));
org$pandalanguage$pandac$Pair* $tmp1445 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1445));
*(&local4) = $tmp1444;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1444));
// unreffing REF($253:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Variable, org.pandalanguage.pandac.IR.Value?>?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1443));
// unreffing REF($251:org.pandalanguage.pandac.Type)
// line 427
org$pandalanguage$pandac$Pair* $tmp1446 = *(&local4);
panda$core$Bit $tmp1447 = panda$core$Bit$init$builtin_bit($tmp1446 == NULL);
bool $tmp1448 = $tmp1447.value;
if ($tmp1448) goto block17; else goto block18;
block17:;
// line 428
org$pandalanguage$pandac$Pair* $tmp1449 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1449));
// unreffing target
*(&local4) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1450 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
// unreffing scope
*(&local3) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$Type* $tmp1451 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1451));
// unreffing elementType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1452 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1452));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block18:;
// line 430
org$pandalanguage$pandac$Pair* $tmp1453 = *(&local4);
panda$core$Object** $tmp1454 = &$tmp1453->second;
panda$core$Object* $tmp1455 = *$tmp1454;
panda$core$Bit $tmp1456 = panda$core$Bit$init$builtin_bit(((org$pandalanguage$pandac$IR$Value*) $tmp1455) == NULL);
bool $tmp1457 = $tmp1456.value;
if ($tmp1457) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp1458 = (panda$core$Int64) {430};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1459, $tmp1458);
abort(); // unreachable
block19:;
// line 431
org$pandalanguage$pandac$Pair* $tmp1460 = *(&local4);
panda$core$Object** $tmp1461 = &$tmp1460->first;
panda$core$Object* $tmp1462 = *$tmp1461;
org$pandalanguage$pandac$Type** $tmp1463 = &((org$pandalanguage$pandac$Variable*) $tmp1462)->type;
org$pandalanguage$pandac$Type* $tmp1464 = *$tmp1463;
panda$core$Bit $tmp1465 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp1464);
bool $tmp1466 = $tmp1465.value;
if ($tmp1466) goto block21; else goto block22;
block21:;
// line 432
panda$collections$Stack** $tmp1467 = &param0->enclosingContexts;
panda$collections$Stack* $tmp1468 = *$tmp1467;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp1469 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp1470 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Pair* $tmp1471 = *(&local4);
panda$core$Object** $tmp1472 = &$tmp1471->first;
panda$core$Object* $tmp1473 = *$tmp1472;
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$Variable($tmp1469, $tmp1470, ((org$pandalanguage$pandac$Variable*) $tmp1473));
panda$collections$Stack$push$panda$collections$Stack$T($tmp1468, ((panda$core$Object*) $tmp1469));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1469));
// unreffing REF($323:org.pandalanguage.pandac.Compiler.EnclosingContext)
goto block22;
block22:;
// line 434
$fn1475 $tmp1474 = ($fn1475) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1476 = $tmp1474(param4);
panda$core$Bit $tmp1477 = org$pandalanguage$pandac$Type$get_isRange$R$panda$core$Bit($tmp1476);
bool $tmp1478 = $tmp1477.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1476));
// unreffing REF($339:org.pandalanguage.pandac.Type)
if ($tmp1478) goto block23; else goto block25;
block23:;
// line 435
org$pandalanguage$pandac$Pair* $tmp1479 = *(&local4);
panda$core$Object** $tmp1480 = &$tmp1479->first;
panda$core$Object* $tmp1481 = *$tmp1480;
org$pandalanguage$pandac$statement$For$compileSimpleRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(param0, param1, param2, ((org$pandalanguage$pandac$Variable*) $tmp1481), param4, param5);
goto block24;
block25:;
// line 1
// line 438
org$pandalanguage$pandac$Pair* $tmp1482 = *(&local4);
panda$core$Object** $tmp1483 = &$tmp1482->first;
panda$core$Object* $tmp1484 = *$tmp1483;
org$pandalanguage$pandac$statement$For$compileSteppedRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Variable$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(param0, param1, param2, ((org$pandalanguage$pandac$Variable*) $tmp1484), param4, param5);
goto block24;
block24:;
org$pandalanguage$pandac$Pair* $tmp1485 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1485));
// unreffing target
*(&local4) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1486 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1486));
// unreffing scope
*(&local3) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$Type* $tmp1487 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1487));
// unreffing elementType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$IR* $tmp1488 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1488));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$For$compileRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$ASTNode* param4, panda$collections$ListView* param5) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$IR$Value* local1 = NULL;
org$pandalanguage$pandac$Position local2;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$Type* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$Type* local6 = NULL;
org$pandalanguage$pandac$Type* local7 = NULL;
org$pandalanguage$pandac$Compiler$TypeContext* local8 = NULL;
panda$core$Bit local9;
panda$core$Bit local10;
// line 446
org$pandalanguage$pandac$IR** $tmp1489 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp1490 = *$tmp1489;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1490));
org$pandalanguage$pandac$IR* $tmp1491 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1491));
*(&local0) = $tmp1490;
// line 447
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 448
panda$core$Int64* $tmp1492 = &param3->$rawValue;
panda$core$Int64 $tmp1493 = *$tmp1492;
panda$core$Int64 $tmp1494 = (panda$core$Int64) {47};
panda$core$Bit $tmp1495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1493, $tmp1494);
bool $tmp1496 = $tmp1495.value;
if ($tmp1496) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp1497 = (org$pandalanguage$pandac$Position*) (param3->$data + 0);
org$pandalanguage$pandac$Position $tmp1498 = *$tmp1497;
*(&local2) = $tmp1498;
panda$core$String** $tmp1499 = (panda$core$String**) (param3->$data + 16);
panda$core$String* $tmp1500 = *$tmp1499;
org$pandalanguage$pandac$ASTNode** $tmp1501 = (org$pandalanguage$pandac$ASTNode**) (param3->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1502 = *$tmp1501;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1502));
org$pandalanguage$pandac$ASTNode* $tmp1503 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1503));
*(&local3) = $tmp1502;
// line 450
org$pandalanguage$pandac$Scanner** $tmp1504 = &param0->scanner;
org$pandalanguage$pandac$Scanner* $tmp1505 = *$tmp1504;
org$pandalanguage$pandac$ASTNode* $tmp1506 = *(&local3);
org$pandalanguage$pandac$Type* $tmp1507 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type($tmp1505, $tmp1506);
org$pandalanguage$pandac$Type* $tmp1508 = org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type$Q(param0, $tmp1507);
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1508));
org$pandalanguage$pandac$Type* $tmp1509 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1509));
*(&local4) = $tmp1508;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1508));
// unreffing REF($39:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1507));
// unreffing REF($38:org.pandalanguage.pandac.Type)
// line 451
org$pandalanguage$pandac$Type* $tmp1510 = *(&local4);
org$pandalanguage$pandac$Type$Kind* $tmp1511 = &$tmp1510->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1512 = *$tmp1511;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1513;
$tmp1513 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1513->value = $tmp1512;
panda$core$Int64 $tmp1514 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Type$Kind $tmp1515 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1514);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1516;
$tmp1516 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1516->value = $tmp1515;
ITable* $tmp1517 = ((panda$core$Equatable*) $tmp1513)->$class->itable;
while ($tmp1517->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1517 = $tmp1517->next;
}
$fn1519 $tmp1518 = $tmp1517->methods[0];
panda$core$Bit $tmp1520 = $tmp1518(((panda$core$Equatable*) $tmp1513), ((panda$core$Equatable*) $tmp1516));
bool $tmp1521 = $tmp1520.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1516)));
// unreffing REF($62:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1513)));
// unreffing REF($58:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1521) goto block4; else goto block5;
block4:;
// line 452
org$pandalanguage$pandac$Position $tmp1522 = *(&local2);
org$pandalanguage$pandac$Type* $tmp1523 = *(&local4);
panda$core$String* $tmp1524 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1525, ((panda$core$Object*) $tmp1523));
panda$core$String* $tmp1526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1524, &$s1527);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp1522, $tmp1526);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1526));
// unreffing REF($78:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1524));
// unreffing REF($77:panda.core.String)
// line 453
org$pandalanguage$pandac$Type* $tmp1528 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1528));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1529 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1529));
// unreffing type
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1530 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1530));
// unreffing list
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp1531 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1531));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block5:;
// line 455
org$pandalanguage$pandac$Type* $tmp1532 = *(&local4);
panda$core$Bit $tmp1533 = org$pandalanguage$pandac$Type$get_isNumeric$R$panda$core$Bit($tmp1532);
panda$core$Bit $tmp1534 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1533);
bool $tmp1535 = $tmp1534.value;
if ($tmp1535) goto block6; else goto block7;
block6:;
// line 456
org$pandalanguage$pandac$Position $tmp1536 = *(&local2);
org$pandalanguage$pandac$Type* $tmp1537 = *(&local4);
panda$core$String* $tmp1538 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1539, ((panda$core$Object*) $tmp1537));
panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1538, &$s1541);
panda$core$String* $tmp1542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1543, $tmp1540);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp1536, $tmp1542);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1542));
// unreffing REF($121:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1540));
// unreffing REF($120:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1538));
// unreffing REF($119:panda.core.String)
// line 458
org$pandalanguage$pandac$Type* $tmp1544 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1544));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1545 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1545));
// unreffing type
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1546 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1546));
// unreffing list
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp1547 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1547));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block7:;
// line 460
panda$core$Int64* $tmp1548 = &param4->$rawValue;
panda$core$Int64 $tmp1549 = *$tmp1548;
panda$core$Int64 $tmp1550 = (panda$core$Int64) {36};
panda$core$Bit $tmp1551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1549, $tmp1550);
bool $tmp1552 = $tmp1551.value;
if ($tmp1552) goto block9; else goto block10;
block9:;
org$pandalanguage$pandac$Position* $tmp1553 = (org$pandalanguage$pandac$Position*) (param4->$data + 0);
org$pandalanguage$pandac$Position $tmp1554 = *$tmp1553;
org$pandalanguage$pandac$ASTNode** $tmp1555 = (org$pandalanguage$pandac$ASTNode**) (param4->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1556 = *$tmp1555;
panda$core$Bit* $tmp1557 = (panda$core$Bit*) (param4->$data + 24);
panda$core$Bit $tmp1558 = *$tmp1557;
org$pandalanguage$pandac$ASTNode** $tmp1559 = (org$pandalanguage$pandac$ASTNode**) (param4->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp1560 = *$tmp1559;
org$pandalanguage$pandac$ASTNode** $tmp1561 = (org$pandalanguage$pandac$ASTNode**) (param4->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp1562 = *$tmp1561;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1562));
org$pandalanguage$pandac$ASTNode* $tmp1563 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1563));
*(&local5) = $tmp1562;
// line 462
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
// line 463
org$pandalanguage$pandac$ASTNode* $tmp1564 = *(&local5);
panda$core$Bit $tmp1565 = panda$core$Bit$init$builtin_bit($tmp1564 != NULL);
bool $tmp1566 = $tmp1565.value;
if ($tmp1566) goto block11; else goto block13;
block11:;
// line 464
org$pandalanguage$pandac$Type* $tmp1567 = *(&local4);
org$pandalanguage$pandac$Type* $tmp1568 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1567);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1568));
org$pandalanguage$pandac$Type* $tmp1569 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1569));
*(&local6) = $tmp1568;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1568));
// unreffing REF($189:org.pandalanguage.pandac.Type)
goto block12;
block13:;
// line 1
// line 467
org$pandalanguage$pandac$Type* $tmp1570 = *(&local4);
org$pandalanguage$pandac$Type* $tmp1571 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1570);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
org$pandalanguage$pandac$Type* $tmp1572 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1572));
*(&local6) = $tmp1571;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
// unreffing REF($204:org.pandalanguage.pandac.Type)
goto block12;
block12:;
// line 469
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1573 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1574 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1575 = *(&local6);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1573, $tmp1574, $tmp1575);
org$pandalanguage$pandac$IR$Value* $tmp1576 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param4, $tmp1573);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1576));
org$pandalanguage$pandac$IR$Value* $tmp1577 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1577));
*(&local1) = $tmp1576;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1576));
// unreffing REF($220:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1573));
// unreffing REF($216:org.pandalanguage.pandac.Compiler.TypeContext)
org$pandalanguage$pandac$Type* $tmp1578 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1578));
// unreffing type
*(&local6) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1579 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1579));
// unreffing step
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block10:;
// line 472
panda$core$Bit $tmp1580 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1581 = $tmp1580.value;
if ($tmp1581) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp1582 = (panda$core$Int64) {472};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1583, $tmp1582);
abort(); // unreachable
block14:;
goto block8;
block8:;
org$pandalanguage$pandac$Type* $tmp1584 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1584));
// unreffing t
*(&local4) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1585 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1585));
// unreffing type
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block3:;
// line 477
org$pandalanguage$pandac$Type* $tmp1586 = org$pandalanguage$pandac$Compiler$preferredType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type$Q(param0, param4);
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1586));
org$pandalanguage$pandac$Type* $tmp1587 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1587));
*(&local7) = $tmp1586;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1586));
// unreffing REF($264:org.pandalanguage.pandac.Type?)
// line 478
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1588 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1589 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp1588, $tmp1589);
*(&local8) = ((org$pandalanguage$pandac$Compiler$TypeContext*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1588));
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1590 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1590));
*(&local8) = $tmp1588;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1588));
// unreffing REF($276:org.pandalanguage.pandac.Compiler.TypeContext)
// line 479
org$pandalanguage$pandac$Type* $tmp1591 = *(&local7);
panda$core$Bit $tmp1592 = panda$core$Bit$init$builtin_bit($tmp1591 != NULL);
bool $tmp1593 = $tmp1592.value;
if ($tmp1593) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Type* $tmp1594 = *(&local7);
panda$core$Bit $tmp1595 = org$pandalanguage$pandac$Type$get_isRange$R$panda$core$Bit($tmp1594);
*(&local9) = $tmp1595;
goto block20;
block19:;
*(&local9) = $tmp1592;
goto block20;
block20:;
panda$core$Bit $tmp1596 = *(&local9);
bool $tmp1597 = $tmp1596.value;
if ($tmp1597) goto block16; else goto block21;
block16:;
// line 480
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1598 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1599 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1600 = *(&local7);
org$pandalanguage$pandac$FixedArray** $tmp1601 = &$tmp1600->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1602 = *$tmp1601;
panda$core$Int64 $tmp1603 = (panda$core$Int64) {1};
panda$core$Object* $tmp1604 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1602, $tmp1603);
org$pandalanguage$pandac$Type* $tmp1605 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1604));
org$pandalanguage$pandac$Type* $tmp1606 = org$pandalanguage$pandac$Type$RangeOf$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1605);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1598, $tmp1599, $tmp1606);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1598));
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1607 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1607));
*(&local8) = $tmp1598;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1606));
// unreffing REF($318:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1605));
// unreffing REF($317:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1604);
// unreffing REF($315:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1598));
// unreffing REF($306:org.pandalanguage.pandac.Compiler.TypeContext)
goto block17;
block21:;
// line 482
org$pandalanguage$pandac$Type* $tmp1608 = *(&local7);
panda$core$Bit $tmp1609 = panda$core$Bit$init$builtin_bit($tmp1608 != NULL);
bool $tmp1610 = $tmp1609.value;
if ($tmp1610) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Type* $tmp1611 = *(&local7);
panda$core$Bit $tmp1612 = org$pandalanguage$pandac$Type$get_isSteppedRange$R$panda$core$Bit($tmp1611);
*(&local10) = $tmp1612;
goto block26;
block25:;
*(&local10) = $tmp1609;
goto block26;
block26:;
panda$core$Bit $tmp1613 = *(&local10);
bool $tmp1614 = $tmp1613.value;
if ($tmp1614) goto block22; else goto block23;
block22:;
// line 483
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1615 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1616 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1617 = *(&local7);
org$pandalanguage$pandac$FixedArray** $tmp1618 = &$tmp1617->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1619 = *$tmp1618;
panda$core$Int64 $tmp1620 = (panda$core$Int64) {1};
panda$core$Object* $tmp1621 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1619, $tmp1620);
org$pandalanguage$pandac$Type* $tmp1622 = org$pandalanguage$pandac$Type$nonnullable$R$org$pandalanguage$pandac$Type(((org$pandalanguage$pandac$Type*) $tmp1621));
org$pandalanguage$pandac$Type* $tmp1623 = *(&local7);
org$pandalanguage$pandac$FixedArray** $tmp1624 = &$tmp1623->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1625 = *$tmp1624;
panda$core$Int64 $tmp1626 = (panda$core$Int64) {2};
panda$core$Object* $tmp1627 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1625, $tmp1626);
org$pandalanguage$pandac$Type* $tmp1628 = org$pandalanguage$pandac$Type$SteppedRangeOf$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp1622, ((org$pandalanguage$pandac$Type*) $tmp1627));
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1615, $tmp1616, $tmp1628);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1615));
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1629 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1629));
*(&local8) = $tmp1615;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
// unreffing REF($377:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1627);
// unreffing REF($375:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1622));
// unreffing REF($367:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1621);
// unreffing REF($365:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1615));
// unreffing REF($356:org.pandalanguage.pandac.Compiler.TypeContext)
goto block23;
block23:;
goto block17;
block17:;
// line 486
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1630 = *(&local8);
org$pandalanguage$pandac$IR$Value* $tmp1631 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param4, $tmp1630);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1631));
org$pandalanguage$pandac$IR$Value* $tmp1632 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1632));
*(&local1) = $tmp1631;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1631));
// unreffing REF($404:org.pandalanguage.pandac.IR.Value?)
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1633 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1633));
// unreffing type
*(&local8) = ((org$pandalanguage$pandac$Compiler$TypeContext*) NULL);
org$pandalanguage$pandac$Type* $tmp1634 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1634));
// unreffing preferred
*(&local7) = ((org$pandalanguage$pandac$Type*) NULL);
goto block1;
block1:;
// line 489
org$pandalanguage$pandac$IR$Value* $tmp1635 = *(&local1);
panda$core$Bit $tmp1636 = panda$core$Bit$init$builtin_bit($tmp1635 == NULL);
bool $tmp1637 = $tmp1636.value;
if ($tmp1637) goto block27; else goto block28;
block27:;
// line 490
org$pandalanguage$pandac$IR$Value* $tmp1638 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1638));
// unreffing list
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp1639 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1639));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block28:;
// line 492
org$pandalanguage$pandac$IR$Value* $tmp1640 = *(&local1);
org$pandalanguage$pandac$statement$For$compileRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(param0, param1, param2, param3, $tmp1640, param5);
org$pandalanguage$pandac$IR$Value* $tmp1641 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1641));
// unreffing list
*(&local1) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR* $tmp1642 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1642));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$For$compileIteratorFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$IR$Value* param4, panda$collections$ListView* param5) {

org$pandalanguage$pandac$IR* local0 = NULL;
org$pandalanguage$pandac$IR$Block$ID local1;
org$pandalanguage$pandac$IR$Block$ID local2;
org$pandalanguage$pandac$IR$Block$ID local3;
org$pandalanguage$pandac$Compiler$AutoContext* local4 = NULL;
panda$core$Bit local5;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
org$pandalanguage$pandac$Compiler$AutoScope* local7 = NULL;
org$pandalanguage$pandac$Pair* local8 = NULL;
org$pandalanguage$pandac$Compiler$AutoUnrefs* local9 = NULL;
org$pandalanguage$pandac$Type* local10 = NULL;
org$pandalanguage$pandac$IR$Value* local11 = NULL;
org$pandalanguage$pandac$ASTNode* local12 = NULL;
// line 499
org$pandalanguage$pandac$IR** $tmp1643 = &param0->ir;
org$pandalanguage$pandac$IR* $tmp1644 = *$tmp1643;
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1644));
org$pandalanguage$pandac$IR* $tmp1645 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1645));
*(&local0) = $tmp1644;
// line 500
org$pandalanguage$pandac$IR* $tmp1646 = *(&local0);
$fn1648 $tmp1647 = ($fn1648) $tmp1646->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1649 = $tmp1647($tmp1646, &$s1650);
*(&local1) = $tmp1649;
// line 501
org$pandalanguage$pandac$IR* $tmp1651 = *(&local0);
$fn1653 $tmp1652 = ($fn1653) $tmp1651->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1654 = $tmp1652($tmp1651, &$s1655);
*(&local2) = $tmp1654;
// line 502
org$pandalanguage$pandac$IR* $tmp1656 = *(&local0);
$fn1658 $tmp1657 = ($fn1658) $tmp1656->$class->vtable[3];
org$pandalanguage$pandac$IR$Block$ID $tmp1659 = $tmp1657($tmp1656, &$s1660);
*(&local3) = $tmp1659;
// line 503
org$pandalanguage$pandac$Compiler$AutoContext* $tmp1661 = (org$pandalanguage$pandac$Compiler$AutoContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoContext$class);
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp1662 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp1663 = (panda$core$Int64) {0};
org$pandalanguage$pandac$IR$Block$ID $tmp1664 = *(&local3);
org$pandalanguage$pandac$IR$Block$ID $tmp1665 = *(&local1);
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1662, $tmp1663, param2, $tmp1664, $tmp1665);
org$pandalanguage$pandac$Compiler$AutoContext$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Compiler$EnclosingContext($tmp1661, param0, $tmp1662);
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
org$pandalanguage$pandac$Compiler$AutoContext* $tmp1666 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1666));
*(&local4) = $tmp1661;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1662));
// unreffing REF($27:org.pandalanguage.pandac.Compiler.EnclosingContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
// unreffing REF($26:org.pandalanguage.pandac.Compiler.AutoContext)
// line 504
$fn1668 $tmp1667 = ($fn1668) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1669 = $tmp1667(param4);
org$pandalanguage$pandac$Type$Kind* $tmp1670 = &$tmp1669->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1671 = *$tmp1670;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1672;
$tmp1672 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1672->value = $tmp1671;
panda$core$Int64 $tmp1673 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp1674 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1673);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1675;
$tmp1675 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1675->value = $tmp1674;
ITable* $tmp1676 = ((panda$core$Equatable*) $tmp1672)->$class->itable;
while ($tmp1676->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1676 = $tmp1676->next;
}
$fn1678 $tmp1677 = $tmp1676->methods[0];
panda$core$Bit $tmp1679 = $tmp1677(((panda$core$Equatable*) $tmp1672), ((panda$core$Equatable*) $tmp1675));
bool $tmp1680 = $tmp1679.value;
if ($tmp1680) goto block1; else goto block2;
block1:;
$fn1682 $tmp1681 = ($fn1682) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1683 = $tmp1681(param4);
org$pandalanguage$pandac$FixedArray** $tmp1684 = &$tmp1683->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1685 = *$tmp1684;
panda$core$Int64 $tmp1686 = (panda$core$Int64) {0};
panda$core$Object* $tmp1687 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1685, $tmp1686);
org$pandalanguage$pandac$Type* $tmp1688 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1689 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1687), $tmp1688);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1688));
// unreffing REF($69:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1687);
// unreffing REF($67:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1683));
// unreffing REF($61:org.pandalanguage.pandac.Type)
*(&local5) = $tmp1689;
goto block3;
block2:;
*(&local5) = $tmp1679;
goto block3;
block3:;
panda$core$Bit $tmp1690 = *(&local5);
bool $tmp1691 = $tmp1690.value;
if ($tmp1691) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp1692 = (panda$core$Int64) {504};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1693, $tmp1692);
abort(); // unreachable
block4:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1675)));
// unreffing REF($55:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1672)));
// unreffing REF($51:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1669));
// unreffing REF($48:org.pandalanguage.pandac.Type)
// line 506
org$pandalanguage$pandac$IR* $tmp1694 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1695 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1696 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp1697 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp1695, $tmp1696, param1, $tmp1697);
$fn1699 $tmp1698 = ($fn1699) $tmp1694->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1700 = $tmp1698($tmp1694, $tmp1695);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1695));
// unreffing REF($101:org.pandalanguage.pandac.IR.Statement)
// line 507
org$pandalanguage$pandac$IR* $tmp1701 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1702 = *(&local1);
$fn1704 $tmp1703 = ($fn1704) $tmp1701->$class->vtable[4];
$tmp1703($tmp1701, $tmp1702);
// line 508
panda$collections$Array* $tmp1705 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1705);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1706 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1707 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1708 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1706, $tmp1707, $tmp1708);
org$pandalanguage$pandac$IR$Value* $tmp1709 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param4, &$s1710, ((panda$collections$ListView*) $tmp1705), $tmp1706);
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1709));
org$pandalanguage$pandac$IR$Value* $tmp1711 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1711));
*(&local6) = $tmp1709;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1709));
// unreffing REF($124:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1708));
// unreffing REF($122:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1706));
// unreffing REF($120:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1705));
// unreffing REF($116:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 510
org$pandalanguage$pandac$IR$Value* $tmp1712 = *(&local6);
panda$core$Bit $tmp1713 = panda$core$Bit$init$builtin_bit($tmp1712 == NULL);
bool $tmp1714 = $tmp1713.value;
if ($tmp1714) goto block6; else goto block7;
block6:;
// line 511
org$pandalanguage$pandac$IR$Value* $tmp1715 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1715));
// unreffing compiledTest
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp1716 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1716));
// unreffing context
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
org$pandalanguage$pandac$IR* $tmp1717 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1717));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block7:;
// line 513
org$pandalanguage$pandac$IR* $tmp1718 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1719 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1720 = (panda$core$Int64) {5};
org$pandalanguage$pandac$IR$Value* $tmp1721 = *(&local6);
org$pandalanguage$pandac$IR$Value* $tmp1722 = org$pandalanguage$pandac$Compiler$extractBuiltinBit$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$R$org$pandalanguage$pandac$IR$Value(param0, param1, $tmp1721);
org$pandalanguage$pandac$IR$Block$ID $tmp1723 = *(&local3);
org$pandalanguage$pandac$IR$Block$ID $tmp1724 = *(&local2);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$org$pandalanguage$pandac$IR$Block$ID$org$pandalanguage$pandac$IR$Block$ID($tmp1719, $tmp1720, param1, $tmp1722, $tmp1723, $tmp1724);
$fn1726 $tmp1725 = ($fn1726) $tmp1718->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1727 = $tmp1725($tmp1718, $tmp1719);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1722));
// unreffing REF($173:org.pandalanguage.pandac.IR.Value)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1719));
// unreffing REF($169:org.pandalanguage.pandac.IR.Statement)
// line 515
org$pandalanguage$pandac$IR* $tmp1728 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1729 = *(&local2);
$fn1731 $tmp1730 = ($fn1731) $tmp1728->$class->vtable[4];
$tmp1730($tmp1728, $tmp1729);
// line 1
// line 517
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1732 = (org$pandalanguage$pandac$Compiler$AutoScope*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoScope$class);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler($tmp1732, param0);
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1732));
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1733 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1733));
*(&local7) = $tmp1732;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1732));
// unreffing REF($192:org.pandalanguage.pandac.Compiler.AutoScope)
// line 518
*(&local8) = ((org$pandalanguage$pandac$Pair*) NULL);
// line 1
// line 520
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp1734 = (org$pandalanguage$pandac$Compiler$AutoUnrefs*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$AutoUnrefs$class);
org$pandalanguage$pandac$Compiler$AutoUnrefs$init$org$pandalanguage$pandac$Compiler($tmp1734, param0);
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1734));
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp1735 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1735));
*(&local9) = $tmp1734;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1734));
// unreffing REF($208:org.pandalanguage.pandac.Compiler.AutoUnrefs)
// line 521
panda$core$Int64 $tmp1736 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Variable$Kind $tmp1737 = org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64($tmp1736);
$fn1739 $tmp1738 = ($fn1739) param4->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1740 = $tmp1738(param4);
org$pandalanguage$pandac$FixedArray** $tmp1741 = &$tmp1740->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1742 = *$tmp1741;
panda$core$Int64 $tmp1743 = (panda$core$Int64) {1};
panda$core$Object* $tmp1744 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1742, $tmp1743);
org$pandalanguage$pandac$Pair* $tmp1745 = org$pandalanguage$pandac$Compiler$compileTarget$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$Type$Q$R$org$pandalanguage$pandac$Pair$LTorg$pandalanguage$pandac$Variable$Corg$pandalanguage$pandac$IR$Value$Q$GT$Q(param0, param3, $tmp1737, ((org$pandalanguage$pandac$ASTNode*) NULL), ((org$pandalanguage$pandac$Type*) $tmp1744));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
org$pandalanguage$pandac$Pair* $tmp1746 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1746));
*(&local8) = $tmp1745;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1745));
// unreffing REF($233:org.pandalanguage.pandac.Pair<org.pandalanguage.pandac.Variable, org.pandalanguage.pandac.IR.Value?>?)
panda$core$Panda$unref$panda$core$Object$Q($tmp1744);
// unreffing REF($230:org.pandalanguage.pandac.FixedArray.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1740));
// unreffing REF($224:org.pandalanguage.pandac.Type)
// line 523
org$pandalanguage$pandac$Pair* $tmp1747 = *(&local8);
panda$core$Bit $tmp1748 = panda$core$Bit$init$builtin_bit($tmp1747 == NULL);
bool $tmp1749 = $tmp1748.value;
if ($tmp1749) goto block8; else goto block9;
block8:;
// line 524
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp1750 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1750));
// unreffing unrefs
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
org$pandalanguage$pandac$Pair* $tmp1751 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1751));
// unreffing compiledTarget
*(&local8) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1752 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1752));
// unreffing scope
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1753 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1753));
// unreffing compiledTest
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp1754 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1754));
// unreffing context
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
org$pandalanguage$pandac$IR* $tmp1755 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1755));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block9:;
org$pandalanguage$pandac$Compiler$AutoUnrefs* $tmp1756 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1756));
// unreffing unrefs
*(&local9) = ((org$pandalanguage$pandac$Compiler$AutoUnrefs*) NULL);
// line 527
org$pandalanguage$pandac$Pair* $tmp1757 = *(&local8);
panda$core$Object** $tmp1758 = &$tmp1757->first;
panda$core$Object* $tmp1759 = *$tmp1758;
org$pandalanguage$pandac$Type** $tmp1760 = &((org$pandalanguage$pandac$Variable*) $tmp1759)->type;
org$pandalanguage$pandac$Type* $tmp1761 = *$tmp1760;
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1761));
org$pandalanguage$pandac$Type* $tmp1762 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1762));
*(&local10) = $tmp1761;
// line 528
org$pandalanguage$pandac$Type* $tmp1763 = *(&local10);
panda$core$Bit $tmp1764 = org$pandalanguage$pandac$Compiler$isRefCounted$org$pandalanguage$pandac$Type$R$panda$core$Bit(param0, $tmp1763);
bool $tmp1765 = $tmp1764.value;
if ($tmp1765) goto block10; else goto block11;
block10:;
// line 529
panda$collections$Stack** $tmp1766 = &param0->enclosingContexts;
panda$collections$Stack* $tmp1767 = *$tmp1766;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp1768 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp1769 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Pair* $tmp1770 = *(&local8);
panda$core$Object** $tmp1771 = &$tmp1770->first;
panda$core$Object* $tmp1772 = *$tmp1771;
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64$org$pandalanguage$pandac$Variable($tmp1768, $tmp1769, ((org$pandalanguage$pandac$Variable*) $tmp1772));
panda$collections$Stack$push$panda$collections$Stack$T($tmp1767, ((panda$core$Object*) $tmp1768));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1768));
// unreffing REF($316:org.pandalanguage.pandac.Compiler.EnclosingContext)
goto block11;
block11:;
// line 532
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
// line 533
panda$collections$Array* $tmp1773 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1773);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1774 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1775 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Type* $tmp1776 = *(&local10);
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1774, $tmp1775, $tmp1776);
org$pandalanguage$pandac$IR$Value* $tmp1777 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, param4, &$s1778, ((panda$collections$ListView*) $tmp1773), $tmp1774);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1777));
org$pandalanguage$pandac$IR$Value* $tmp1779 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1779));
*(&local11) = $tmp1777;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1777));
// unreffing REF($341:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1774));
// unreffing REF($337:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1773));
// unreffing REF($333:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 535
org$pandalanguage$pandac$IR$Value* $tmp1780 = *(&local11);
panda$core$Bit $tmp1781 = panda$core$Bit$init$builtin_bit(false);
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block12; else goto block13;
block12:;
// line 536
org$pandalanguage$pandac$IR$Value* $tmp1783 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1783));
// unreffing next
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp1784 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1784));
// unreffing targetType
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp1785 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1785));
// unreffing compiledTarget
*(&local8) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1786 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1786));
// unreffing scope
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1787 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1787));
// unreffing compiledTest
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp1788 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1788));
// unreffing context
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
org$pandalanguage$pandac$IR* $tmp1789 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1789));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;
block13:;
// line 538
org$pandalanguage$pandac$lvalue$VariableLValue* $tmp1790 = (org$pandalanguage$pandac$lvalue$VariableLValue*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$lvalue$VariableLValue$class);
org$pandalanguage$pandac$Pair* $tmp1791 = *(&local8);
panda$core$Object** $tmp1792 = &$tmp1791->first;
panda$core$Object* $tmp1793 = *$tmp1792;
org$pandalanguage$pandac$lvalue$VariableLValue$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable($tmp1790, param0, param1, ((org$pandalanguage$pandac$Variable*) $tmp1793));
org$pandalanguage$pandac$IR$Value* $tmp1794 = *(&local11);
$fn1796 $tmp1795 = ($fn1796) $tmp1790->$class->vtable[4];
$tmp1795($tmp1790, $tmp1794);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1790));
// unreffing REF($401:org.pandalanguage.pandac.lvalue.VariableLValue)
// line 539
ITable* $tmp1797 = ((panda$collections$Iterable*) param5)->$class->itable;
while ($tmp1797->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1797 = $tmp1797->next;
}
$fn1799 $tmp1798 = $tmp1797->methods[0];
panda$collections$Iterator* $tmp1800 = $tmp1798(((panda$collections$Iterable*) param5));
goto block14;
block14:;
ITable* $tmp1801 = $tmp1800->$class->itable;
while ($tmp1801->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1801 = $tmp1801->next;
}
$fn1803 $tmp1802 = $tmp1801->methods[0];
panda$core$Bit $tmp1804 = $tmp1802($tmp1800);
bool $tmp1805 = $tmp1804.value;
if ($tmp1805) goto block16; else goto block15;
block15:;
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1806 = $tmp1800->$class->itable;
while ($tmp1806->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1806 = $tmp1806->next;
}
$fn1808 $tmp1807 = $tmp1806->methods[1];
panda$core$Object* $tmp1809 = $tmp1807($tmp1800);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1809)));
org$pandalanguage$pandac$ASTNode* $tmp1810 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1810));
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) $tmp1809);
// line 540
org$pandalanguage$pandac$ASTNode* $tmp1811 = *(&local12);
org$pandalanguage$pandac$Compiler$compileStatement$org$pandalanguage$pandac$ASTNode(param0, $tmp1811);
panda$core$Panda$unref$panda$core$Object$Q($tmp1809);
// unreffing REF($429:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1812 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1812));
// unreffing s
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block14;
block16:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1800));
// unreffing REF($418:panda.collections.Iterator<panda.collections.Iterable.T>)
org$pandalanguage$pandac$IR$Value* $tmp1813 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1813));
// unreffing next
*(&local11) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Type* $tmp1814 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1814));
// unreffing targetType
*(&local10) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Pair* $tmp1815 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1815));
// unreffing compiledTarget
*(&local8) = ((org$pandalanguage$pandac$Pair*) NULL);
org$pandalanguage$pandac$Compiler$AutoScope* $tmp1816 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1816));
// unreffing scope
*(&local7) = ((org$pandalanguage$pandac$Compiler$AutoScope*) NULL);
// line 543
org$pandalanguage$pandac$IR* $tmp1817 = *(&local0);
$fn1819 $tmp1818 = ($fn1819) $tmp1817->$class->vtable[5];
panda$core$Bit $tmp1820 = $tmp1818($tmp1817);
panda$core$Bit $tmp1821 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1820);
bool $tmp1822 = $tmp1821.value;
if ($tmp1822) goto block17; else goto block18;
block17:;
// line 544
org$pandalanguage$pandac$IR* $tmp1823 = *(&local0);
org$pandalanguage$pandac$IR$Statement* $tmp1824 = (org$pandalanguage$pandac$IR$Statement*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IR$Statement$class);
panda$core$Int64 $tmp1825 = (panda$core$Int64) {1};
org$pandalanguage$pandac$IR$Block$ID $tmp1826 = *(&local1);
org$pandalanguage$pandac$IR$Statement$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Block$ID($tmp1824, $tmp1825, param1, $tmp1826);
$fn1828 $tmp1827 = ($fn1828) $tmp1823->$class->vtable[2];
org$pandalanguage$pandac$IR$Statement$ID $tmp1829 = $tmp1827($tmp1823, $tmp1824);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1824));
// unreffing REF($481:org.pandalanguage.pandac.IR.Statement)
goto block18;
block18:;
// line 546
org$pandalanguage$pandac$IR* $tmp1830 = *(&local0);
org$pandalanguage$pandac$IR$Block$ID $tmp1831 = *(&local3);
$fn1833 $tmp1832 = ($fn1833) $tmp1830->$class->vtable[4];
$tmp1832($tmp1830, $tmp1831);
org$pandalanguage$pandac$IR$Value* $tmp1834 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1834));
// unreffing compiledTest
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$Compiler$AutoContext* $tmp1835 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1835));
// unreffing context
*(&local4) = ((org$pandalanguage$pandac$Compiler$AutoContext*) NULL);
org$pandalanguage$pandac$IR* $tmp1836 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1836));
// unreffing ir
*(&local0) = ((org$pandalanguage$pandac$IR*) NULL);
return;

}
void org$pandalanguage$pandac$statement$For$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$Compiler* param0, org$pandalanguage$pandac$Position param1, panda$core$String* param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$ASTNode* param4, panda$collections$ListView* param5) {

org$pandalanguage$pandac$IR$Value* local0 = NULL;
panda$core$Bit local1;
org$pandalanguage$pandac$Type* local2 = NULL;
panda$core$Bit local3;
org$pandalanguage$pandac$IR$Value* local4 = NULL;
panda$core$Bit local5;
org$pandalanguage$pandac$IR$Value* local6 = NULL;
org$pandalanguage$pandac$IR$Value* local7 = NULL;
// line 552
panda$core$Int64* $tmp1837 = &param4->$rawValue;
panda$core$Int64 $tmp1838 = *$tmp1837;
panda$core$Int64 $tmp1839 = (panda$core$Int64) {36};
panda$core$Bit $tmp1840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1838, $tmp1839);
bool $tmp1841 = $tmp1840.value;
if ($tmp1841) goto block2; else goto block1;
block2:;
// line 556
org$pandalanguage$pandac$statement$For$compileRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(param0, param1, param2, param3, param4, param5);
// line 557
return;
block1:;
// line 560
org$pandalanguage$pandac$IR$Value* $tmp1842 = org$pandalanguage$pandac$Compiler$compileExpression$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$IR$Value$Q(param0, param4);
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1842));
org$pandalanguage$pandac$IR$Value* $tmp1843 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1843));
*(&local0) = $tmp1842;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1842));
// unreffing REF($12:org.pandalanguage.pandac.IR.Value?)
// line 561
org$pandalanguage$pandac$IR$Value* $tmp1844 = *(&local0);
panda$core$Bit $tmp1845 = panda$core$Bit$init$builtin_bit($tmp1844 == NULL);
bool $tmp1846 = $tmp1845.value;
if ($tmp1846) goto block3; else goto block4;
block3:;
// line 562
org$pandalanguage$pandac$IR$Value* $tmp1847 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1847));
// unreffing list
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block4:;
// line 564
org$pandalanguage$pandac$IR$Value* $tmp1848 = *(&local0);
$fn1850 $tmp1849 = ($fn1850) $tmp1848->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1851 = $tmp1849($tmp1848);
panda$core$Bit $tmp1852 = org$pandalanguage$pandac$Type$get_isRange$R$panda$core$Bit($tmp1851);
bool $tmp1853 = $tmp1852.value;
if ($tmp1853) goto block7; else goto block8;
block7:;
*(&local1) = $tmp1852;
goto block9;
block8:;
org$pandalanguage$pandac$IR$Value* $tmp1854 = *(&local0);
$fn1856 $tmp1855 = ($fn1856) $tmp1854->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1857 = $tmp1855($tmp1854);
panda$core$Bit $tmp1858 = org$pandalanguage$pandac$Type$get_isSteppedRange$R$panda$core$Bit($tmp1857);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1857));
// unreffing REF($49:org.pandalanguage.pandac.Type)
*(&local1) = $tmp1858;
goto block9;
block9:;
panda$core$Bit $tmp1859 = *(&local1);
bool $tmp1860 = $tmp1859.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1851));
// unreffing REF($40:org.pandalanguage.pandac.Type)
if ($tmp1860) goto block5; else goto block10;
block5:;
// line 566
org$pandalanguage$pandac$IR$Value* $tmp1861 = *(&local0);
org$pandalanguage$pandac$statement$For$compileRangeFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(param0, param1, param2, param3, $tmp1861, param5);
goto block6;
block10:;
// line 1
// line 569
org$pandalanguage$pandac$IR$Value* $tmp1862 = *(&local0);
$fn1864 $tmp1863 = ($fn1864) $tmp1862->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1865 = $tmp1863($tmp1862);
panda$collections$HashSet* $tmp1866 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$HashSet$LTorg$pandalanguage$pandac$Type$GT(param0, $tmp1865);
ITable* $tmp1867 = ((panda$collections$Iterable*) $tmp1866)->$class->itable;
while ($tmp1867->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1867 = $tmp1867->next;
}
$fn1869 $tmp1868 = $tmp1867->methods[0];
panda$collections$Iterator* $tmp1870 = $tmp1868(((panda$collections$Iterable*) $tmp1866));
goto block11;
block11:;
ITable* $tmp1871 = $tmp1870->$class->itable;
while ($tmp1871->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1871 = $tmp1871->next;
}
$fn1873 $tmp1872 = $tmp1871->methods[0];
panda$core$Bit $tmp1874 = $tmp1872($tmp1870);
bool $tmp1875 = $tmp1874.value;
if ($tmp1875) goto block13; else goto block12;
block12:;
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
ITable* $tmp1876 = $tmp1870->$class->itable;
while ($tmp1876->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1876 = $tmp1876->next;
}
$fn1878 $tmp1877 = $tmp1876->methods[1];
panda$core$Object* $tmp1879 = $tmp1877($tmp1870);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp1879)));
org$pandalanguage$pandac$Type* $tmp1880 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1880));
*(&local2) = ((org$pandalanguage$pandac$Type*) $tmp1879);
// line 570
org$pandalanguage$pandac$Type* $tmp1881 = *(&local2);
org$pandalanguage$pandac$Type$Kind* $tmp1882 = &$tmp1881->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1883 = *$tmp1882;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1884;
$tmp1884 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1884->value = $tmp1883;
panda$core$Int64 $tmp1885 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp1886 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1885);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1887;
$tmp1887 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1887->value = $tmp1886;
ITable* $tmp1888 = ((panda$core$Equatable*) $tmp1884)->$class->itable;
while ($tmp1888->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1888 = $tmp1888->next;
}
$fn1890 $tmp1889 = $tmp1888->methods[0];
panda$core$Bit $tmp1891 = $tmp1889(((panda$core$Equatable*) $tmp1884), ((panda$core$Equatable*) $tmp1887));
bool $tmp1892 = $tmp1891.value;
if ($tmp1892) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Type* $tmp1893 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp1894 = &$tmp1893->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1895 = *$tmp1894;
panda$core$Int64 $tmp1896 = (panda$core$Int64) {0};
panda$core$Object* $tmp1897 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1895, $tmp1896);
org$pandalanguage$pandac$Type* $tmp1898 = org$pandalanguage$pandac$Type$Iterator$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1899 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1897), $tmp1898);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1898));
// unreffing REF($117:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1897);
// unreffing REF($115:org.pandalanguage.pandac.FixedArray.T)
*(&local3) = $tmp1899;
goto block18;
block17:;
*(&local3) = $tmp1891;
goto block18;
block18:;
panda$core$Bit $tmp1900 = *(&local3);
bool $tmp1901 = $tmp1900.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1887)));
// unreffing REF($104:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1884)));
// unreffing REF($100:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1901) goto block14; else goto block15;
block14:;
// line 571
$fn1903 $tmp1902 = ($fn1903) param4->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1904 = $tmp1902(param4);
org$pandalanguage$pandac$IR$Value* $tmp1905 = *(&local0);
org$pandalanguage$pandac$Type* $tmp1906 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp1907 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp1904, $tmp1905, $tmp1906);
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1907));
org$pandalanguage$pandac$IR$Value* $tmp1908 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1908));
*(&local4) = $tmp1907;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1907));
// unreffing REF($143:org.pandalanguage.pandac.IR.Value?)
// line 572
org$pandalanguage$pandac$IR$Value* $tmp1909 = *(&local4);
org$pandalanguage$pandac$statement$For$compileIteratorFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(param0, param1, param2, param3, $tmp1909, param5);
// line 573
org$pandalanguage$pandac$IR$Value* $tmp1910 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1910));
// unreffing iterator
*(&local4) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1879);
// unreffing REF($88:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp1911 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1911));
// unreffing intf
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1870));
// unreffing REF($77:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1866));
// unreffing REF($73:panda.collections.HashSet<org.pandalanguage.pandac.Type>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1865));
// unreffing REF($72:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$IR$Value* $tmp1912 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1912));
// unreffing list
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block15:;
// line 575
org$pandalanguage$pandac$Type* $tmp1913 = *(&local2);
org$pandalanguage$pandac$Type$Kind* $tmp1914 = &$tmp1913->typeKind;
org$pandalanguage$pandac$Type$Kind $tmp1915 = *$tmp1914;
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1916;
$tmp1916 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1916->value = $tmp1915;
panda$core$Int64 $tmp1917 = (panda$core$Int64) {11};
org$pandalanguage$pandac$Type$Kind $tmp1918 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp1917);
org$pandalanguage$pandac$Type$Kind$wrapper* $tmp1919;
$tmp1919 = (org$pandalanguage$pandac$Type$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Type$Kind$wrapperclass);
$tmp1919->value = $tmp1918;
ITable* $tmp1920 = ((panda$core$Equatable*) $tmp1916)->$class->itable;
while ($tmp1920->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp1920 = $tmp1920->next;
}
$fn1922 $tmp1921 = $tmp1920->methods[0];
panda$core$Bit $tmp1923 = $tmp1921(((panda$core$Equatable*) $tmp1916), ((panda$core$Equatable*) $tmp1919));
bool $tmp1924 = $tmp1923.value;
if ($tmp1924) goto block21; else goto block22;
block21:;
org$pandalanguage$pandac$Type* $tmp1925 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp1926 = &$tmp1925->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp1927 = *$tmp1926;
panda$core$Int64 $tmp1928 = (panda$core$Int64) {0};
panda$core$Object* $tmp1929 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp1927, $tmp1928);
org$pandalanguage$pandac$Type* $tmp1930 = org$pandalanguage$pandac$Type$Iterable$R$org$pandalanguage$pandac$Type();
panda$core$Bit $tmp1931 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1929), $tmp1930);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1930));
// unreffing REF($208:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q($tmp1929);
// unreffing REF($206:org.pandalanguage.pandac.FixedArray.T)
*(&local5) = $tmp1931;
goto block23;
block22:;
*(&local5) = $tmp1923;
goto block23;
block23:;
panda$core$Bit $tmp1932 = *(&local5);
bool $tmp1933 = $tmp1932.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1919)));
// unreffing REF($195:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp1916)));
// unreffing REF($191:panda.core.Equatable<org.pandalanguage.pandac.Type.Kind>)
if ($tmp1933) goto block19; else goto block20;
block19:;
// line 576
$fn1935 $tmp1934 = ($fn1935) param4->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1936 = $tmp1934(param4);
org$pandalanguage$pandac$IR$Value* $tmp1937 = *(&local0);
org$pandalanguage$pandac$Type* $tmp1938 = *(&local2);
org$pandalanguage$pandac$IR$Value* $tmp1939 = org$pandalanguage$pandac$Compiler$coerce$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$Q$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$IR$Value$Q(param0, $tmp1936, $tmp1937, $tmp1938);
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1939));
org$pandalanguage$pandac$IR$Value* $tmp1940 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1940));
*(&local6) = $tmp1939;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1939));
// unreffing REF($234:org.pandalanguage.pandac.IR.Value?)
// line 577
org$pandalanguage$pandac$IR$Value* $tmp1941 = *(&local6);
panda$core$Bit $tmp1942 = panda$core$Bit$init$builtin_bit($tmp1941 == NULL);
bool $tmp1943 = $tmp1942.value;
if ($tmp1943) goto block24; else goto block25;
block24:;
// line 578
org$pandalanguage$pandac$IR$Value* $tmp1944 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1944));
// unreffing iterable
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1879);
// unreffing REF($88:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp1945 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1945));
// unreffing intf
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1870));
// unreffing REF($77:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1866));
// unreffing REF($73:panda.collections.HashSet<org.pandalanguage.pandac.Type>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1865));
// unreffing REF($72:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$IR$Value* $tmp1946 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1946));
// unreffing list
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block25:;
// line 580
org$pandalanguage$pandac$IR$Value* $tmp1947 = *(&local6);
panda$collections$Array* $tmp1948 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp1948);
org$pandalanguage$pandac$Compiler$TypeContext* $tmp1949 = (org$pandalanguage$pandac$Compiler$TypeContext*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$TypeContext$class);
panda$core$Int64 $tmp1950 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$TypeContext$init$panda$core$Int64($tmp1949, $tmp1950);
org$pandalanguage$pandac$IR$Value* $tmp1951 = org$pandalanguage$pandac$expression$Call$compile$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$Compiler$TypeContext$R$org$pandalanguage$pandac$IR$Value$Q(param0, param1, $tmp1947, &$s1952, ((panda$collections$ListView*) $tmp1948), $tmp1949);
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1951));
org$pandalanguage$pandac$IR$Value* $tmp1953 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1953));
*(&local7) = $tmp1951;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1951));
// unreffing REF($290:org.pandalanguage.pandac.IR.Value?)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1949));
// unreffing REF($287:org.pandalanguage.pandac.Compiler.TypeContext)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1948));
// unreffing REF($283:panda.collections.Array<org.pandalanguage.pandac.ASTNode>)
// line 582
org$pandalanguage$pandac$IR$Value* $tmp1954 = *(&local7);
panda$core$Bit $tmp1955 = panda$core$Bit$init$builtin_bit($tmp1954 != NULL);
bool $tmp1956 = $tmp1955.value;
if ($tmp1956) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp1957 = (panda$core$Int64) {582};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1958, $tmp1957);
abort(); // unreachable
block26:;
// line 583
org$pandalanguage$pandac$IR$Value* $tmp1959 = *(&local7);
org$pandalanguage$pandac$statement$For$compileIteratorFor$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$IR$Value$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(param0, param1, param2, param3, $tmp1959, param5);
// line 584
org$pandalanguage$pandac$IR$Value* $tmp1960 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1960));
// unreffing iterator
*(&local7) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1961 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1961));
// unreffing iterable
*(&local6) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp1879);
// unreffing REF($88:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp1962 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1962));
// unreffing intf
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1870));
// unreffing REF($77:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1866));
// unreffing REF($73:panda.collections.HashSet<org.pandalanguage.pandac.Type>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1865));
// unreffing REF($72:org.pandalanguage.pandac.Type)
org$pandalanguage$pandac$IR$Value* $tmp1963 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1963));
// unreffing list
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;
block20:;
panda$core$Panda$unref$panda$core$Object$Q($tmp1879);
// unreffing REF($88:panda.collections.Iterator.T)
org$pandalanguage$pandac$Type* $tmp1964 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1964));
// unreffing intf
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
goto block11;
block13:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1870));
// unreffing REF($77:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1866));
// unreffing REF($73:panda.collections.HashSet<org.pandalanguage.pandac.Type>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1865));
// unreffing REF($72:org.pandalanguage.pandac.Type)
// line 587
$fn1966 $tmp1965 = ($fn1966) param4->$class->vtable[2];
org$pandalanguage$pandac$Position $tmp1967 = $tmp1965(param4);
org$pandalanguage$pandac$IR$Value* $tmp1968 = *(&local0);
$fn1970 $tmp1969 = ($fn1970) $tmp1968->$class->vtable[2];
org$pandalanguage$pandac$Type* $tmp1971 = $tmp1969($tmp1968);
panda$core$String* $tmp1972 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1973, ((panda$core$Object*) $tmp1971));
panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1972, &$s1975);
panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1977, $tmp1974);
org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(param0, $tmp1967, $tmp1976);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1976));
// unreffing REF($382:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1974));
// unreffing REF($381:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1972));
// unreffing REF($380:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1971));
// unreffing REF($378:org.pandalanguage.pandac.Type)
goto block6;
block6:;
org$pandalanguage$pandac$IR$Value* $tmp1978 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1978));
// unreffing list
*(&local0) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return;

}
void org$pandalanguage$pandac$statement$For$init(org$pandalanguage$pandac$statement$For* param0) {

return;

}
void org$pandalanguage$pandac$statement$For$cleanup(org$pandalanguage$pandac$statement$For* param0) {

// line 20
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

