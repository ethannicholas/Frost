#include "org/pandalanguage/pandac/Scanner.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Weak.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/io/File.h"
#include "panda/collections/MapView.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/Stack.h"
#include "panda/collections/HashMap.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Key.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Scanner$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef panda$collections$Iterator* (*$fn61)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn68)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn76)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn99)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn106)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn114)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn172)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn222)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn229)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn237)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn301)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn308)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn316)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn335)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn342)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn350)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn380)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn387)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn395)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn417)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn424)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn432)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn455)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn462)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn470)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn488)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn495)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn503)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn522)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn529)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn537)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn546)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn553)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn561)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn603)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn610)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn618)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn634)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn641)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn649)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn658)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn665)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn673)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn690)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn697)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn705)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn713)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn729)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn736)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn744)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn789)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn796)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn804)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn833)(panda$core$Weak*);
typedef panda$core$Object* (*$fn849)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn956)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn963)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn971)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn986)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn993)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1001)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1170)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1177)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1185)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1212)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn1216)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1225)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1233)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1240)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1248)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1257)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1260)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1288)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1295)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1303)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1316)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1321)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1331)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1338)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1346)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1358)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1421)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1428)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1436)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1447)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1458)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1465)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1473)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1495)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1502)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1510)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x76", 2, 21833, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s1088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66", 1, 203, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = NULL;
    {
        panda$core$Weak* $tmp2 = self->compiler;
        panda$core$Weak* $tmp5 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp5, ((panda$core$Object*) p_compiler));
        panda$core$Weak* $tmp4 = $tmp5;
        panda$core$Weak* $tmp3 = $tmp4;
        self->compiler = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    org$pandalanguage$pandac$ASTNode* $match$19_96;
    org$pandalanguage$pandac$Position position8;
    panda$core$String* name10;
    org$pandalanguage$pandac$Position position17;
    org$pandalanguage$pandac$ASTNode* base19;
    panda$collections$Array* subtypes21;
    org$pandalanguage$pandac$Type* tmp127;
    org$pandalanguage$pandac$Position position38;
    panda$core$String* base40;
    panda$collections$ImmutableArray* args42;
    panda$collections$Array* subtypes44;
    panda$core$MutableString* name48;
    panda$core$Char8 $tmp52;
    panda$core$String* separator53;
    panda$collections$Iterator* Iter$31$1756;
    org$pandalanguage$pandac$ASTNode* arg71;
    org$pandalanguage$pandac$Type* subtype78;
    panda$core$Char8 $tmp85;
    org$pandalanguage$pandac$Type* tmp286;
    {
        $match$19_96 = p_type;
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_96->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp7.value) {
        {
            org$pandalanguage$pandac$Position* $tmp9 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_96->$data + 0));
            position8 = *$tmp9;
            panda$core$String** $tmp11 = ((panda$core$String**) ((char*) $match$19_96->$data + 16));
            name10 = *$tmp11;
            org$pandalanguage$pandac$Type* $tmp15 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position($tmp15, name10, ((panda$core$Int64) { 10 }), position8);
            org$pandalanguage$pandac$Type* $tmp14 = $tmp15;
            org$pandalanguage$pandac$Type* $tmp13 = $tmp14;
            org$pandalanguage$pandac$Type* $tmp12 = $tmp13;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
            return $tmp12;
        }
        }
        else {
        panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_96->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp16.value) {
        {
            org$pandalanguage$pandac$Position* $tmp18 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_96->$data + 0));
            position17 = *$tmp18;
            org$pandalanguage$pandac$ASTNode** $tmp20 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$19_96->$data + 16));
            base19 = *$tmp20;
            panda$collections$Array* $tmp24 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp24);
            panda$collections$Array* $tmp23 = $tmp24;
            panda$collections$Array* $tmp22 = $tmp23;
            subtypes21 = $tmp22;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
            org$pandalanguage$pandac$Type* $tmp26 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base19);
            org$pandalanguage$pandac$Type* $tmp25 = $tmp26;
            panda$collections$Array$add$panda$collections$Array$T(subtypes21, ((panda$core$Object*) $tmp25));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
            {
                org$pandalanguage$pandac$Type* $tmp30 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$Object* $tmp33 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes21, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp32 = $tmp33;
                panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp32))->name, &$s34);
                panda$core$String* $tmp31 = $tmp35;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp30, $tmp31, ((panda$core$Int64) { 11 }), position17, ((panda$collections$ListView*) subtypes21), ((panda$core$Bit) { false }));
                org$pandalanguage$pandac$Type* $tmp29 = $tmp30;
                org$pandalanguage$pandac$Type* $tmp28 = $tmp29;
                tmp127 = $tmp28;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
                panda$core$Panda$unref$panda$core$Object($tmp32);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes21));
                org$pandalanguage$pandac$Type* $tmp36 = tmp127;
                return $tmp36;
            }
        }
        }
        else {
        panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_96->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp37.value) {
        {
            org$pandalanguage$pandac$Position* $tmp39 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_96->$data + 0));
            position38 = *$tmp39;
            panda$core$String** $tmp41 = ((panda$core$String**) ((char*) $match$19_96->$data + 16));
            base40 = *$tmp41;
            panda$collections$ImmutableArray** $tmp43 = ((panda$collections$ImmutableArray**) ((char*) $match$19_96->$data + 24));
            args42 = *$tmp43;
            panda$collections$Array* $tmp47 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp47);
            panda$collections$Array* $tmp46 = $tmp47;
            panda$collections$Array* $tmp45 = $tmp46;
            subtypes44 = $tmp45;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp45));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
            panda$core$MutableString* $tmp51 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp51, base40);
            panda$core$MutableString* $tmp50 = $tmp51;
            panda$core$MutableString* $tmp49 = $tmp50;
            name48 = $tmp49;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp50));
            panda$core$Char8$init$panda$core$UInt8(&$tmp52, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(name48, $tmp52);
            panda$core$String* $tmp54 = &$s55;
            separator53 = $tmp54;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp54));
            {
                ITable* $tmp59 = ((panda$collections$Iterable*) args42)->$class->itable;
                while ($tmp59->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp59 = $tmp59->next;
                }
                $fn61 $tmp60 = $tmp59->methods[0];
                panda$collections$Iterator* $tmp62 = $tmp60(((panda$collections$Iterable*) args42));
                panda$collections$Iterator* $tmp58 = $tmp62;
                panda$collections$Iterator* $tmp57 = $tmp58;
                Iter$31$1756 = $tmp57;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
                $l63:;
                ITable* $tmp66 = Iter$31$1756->$class->itable;
                while ($tmp66->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp66 = $tmp66->next;
                }
                $fn68 $tmp67 = $tmp66->methods[0];
                panda$core$Bit $tmp69 = $tmp67(Iter$31$1756);
                panda$core$Bit $tmp70 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp69);
                bool $tmp65 = $tmp70.value;
                if (!$tmp65) goto $l64;
                {
                    ITable* $tmp74 = Iter$31$1756->$class->itable;
                    while ($tmp74->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp74 = $tmp74->next;
                    }
                    $fn76 $tmp75 = $tmp74->methods[1];
                    panda$core$Object* $tmp77 = $tmp75(Iter$31$1756);
                    panda$core$Object* $tmp73 = $tmp77;
                    org$pandalanguage$pandac$ASTNode* $tmp72 = ((org$pandalanguage$pandac$ASTNode*) $tmp73);
                    arg71 = $tmp72;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp72));
                    panda$core$Panda$unref$panda$core$Object($tmp73);
                    org$pandalanguage$pandac$Type* $tmp81 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg71);
                    org$pandalanguage$pandac$Type* $tmp80 = $tmp81;
                    org$pandalanguage$pandac$Type* $tmp79 = $tmp80;
                    subtype78 = $tmp79;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
                    panda$collections$Array$add$panda$collections$Array$T(subtypes44, ((panda$core$Object*) subtype78));
                    panda$core$MutableString$append$panda$core$String(name48, separator53);
                    panda$core$MutableString$append$panda$core$String(name48, ((org$pandalanguage$pandac$Symbol*) subtype78)->name);
                    {
                        panda$core$String* $tmp82 = separator53;
                        panda$core$String* $tmp83 = &$s84;
                        separator53 = $tmp83;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp82));
                    }
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg71));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtype78));
                    }
                }
                goto $l63;
                $l64:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$31$1756));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp85, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(name48, $tmp85);
            {
                org$pandalanguage$pandac$Type* $tmp89 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$String* $tmp91 = panda$core$MutableString$finish$R$panda$core$String(name48);
                panda$core$String* $tmp90 = $tmp91;
                org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp89, $tmp90, ((panda$core$Int64) { 21 }), position38, ((panda$collections$ListView*) subtypes44), ((panda$core$Bit) { false }));
                org$pandalanguage$pandac$Type* $tmp88 = $tmp89;
                org$pandalanguage$pandac$Type* $tmp87 = $tmp88;
                tmp286 = $tmp87;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp90));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes44));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator53));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name48));
                }
                org$pandalanguage$pandac$Type* $tmp92 = tmp286;
                return $tmp92;
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
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags93;
    panda$collections$Iterator* Iter$47$994;
    org$pandalanguage$pandac$ASTNode* c109;
    org$pandalanguage$pandac$ASTNode* $match$48_13116;
    org$pandalanguage$pandac$Position position118;
    panda$core$String* text120;
    panda$core$String* $match$50_21122;
    flags93 = ((panda$core$Int64) { 0 });
    {
        ITable* $tmp97 = ((panda$collections$Iterable*) p_a)->$class->itable;
        while ($tmp97->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp97 = $tmp97->next;
        }
        $fn99 $tmp98 = $tmp97->methods[0];
        panda$collections$Iterator* $tmp100 = $tmp98(((panda$collections$Iterable*) p_a));
        panda$collections$Iterator* $tmp96 = $tmp100;
        panda$collections$Iterator* $tmp95 = $tmp96;
        Iter$47$994 = $tmp95;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp95));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
        $l101:;
        ITable* $tmp104 = Iter$47$994->$class->itable;
        while ($tmp104->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp104 = $tmp104->next;
        }
        $fn106 $tmp105 = $tmp104->methods[0];
        panda$core$Bit $tmp107 = $tmp105(Iter$47$994);
        panda$core$Bit $tmp108 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp107);
        bool $tmp103 = $tmp108.value;
        if (!$tmp103) goto $l102;
        {
            ITable* $tmp112 = Iter$47$994->$class->itable;
            while ($tmp112->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp112 = $tmp112->next;
            }
            $fn114 $tmp113 = $tmp112->methods[1];
            panda$core$Object* $tmp115 = $tmp113(Iter$47$994);
            panda$core$Object* $tmp111 = $tmp115;
            org$pandalanguage$pandac$ASTNode* $tmp110 = ((org$pandalanguage$pandac$ASTNode*) $tmp111);
            c109 = $tmp110;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
            panda$core$Panda$unref$panda$core$Object($tmp111);
            {
                $match$48_13116 = c109;
                panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$48_13116->$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp117.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp119 = ((org$pandalanguage$pandac$Position*) ((char*) $match$48_13116->$data + 0));
                    position118 = *$tmp119;
                    panda$core$String** $tmp121 = ((panda$core$String**) ((char*) $match$48_13116->$data + 16));
                    text120 = *$tmp121;
                    {
                        $match$50_21122 = text120;
                        panda$core$Bit $tmp124 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21122, &$s123);
                        if ($tmp124.value) {
                        {
                            panda$core$Int64 $tmp125 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                            panda$core$Int64 $tmp126 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags93, $tmp125);
                            flags93 = $tmp126;
                        }
                        }
                        else {
                        panda$core$Bit $tmp128 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21122, &$s127);
                        if ($tmp128.value) {
                        {
                            panda$core$Int64 $tmp129 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                            panda$core$Int64 $tmp130 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags93, $tmp129);
                            flags93 = $tmp130;
                        }
                        }
                        else {
                        panda$core$Bit $tmp132 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21122, &$s131);
                        if ($tmp132.value) {
                        {
                            panda$core$Int64 $tmp133 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                            panda$core$Int64 $tmp134 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags93, $tmp133);
                            flags93 = $tmp134;
                        }
                        }
                        else {
                        panda$core$Bit $tmp136 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21122, &$s135);
                        if ($tmp136.value) {
                        {
                            panda$core$Int64 $tmp137 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                            panda$core$Int64 $tmp138 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags93, $tmp137);
                            flags93 = $tmp138;
                        }
                        }
                        else {
                        panda$core$Bit $tmp140 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21122, &$s139);
                        if ($tmp140.value) {
                        {
                            panda$core$Int64 $tmp141 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                            panda$core$Int64 $tmp142 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags93, $tmp141);
                            flags93 = $tmp142;
                        }
                        }
                        else {
                        panda$core$Bit $tmp144 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21122, &$s143);
                        if ($tmp144.value) {
                        {
                            panda$core$Int64 $tmp145 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                            panda$core$Int64 $tmp146 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags93, $tmp145);
                            flags93 = $tmp146;
                        }
                        }
                        else {
                        panda$core$Bit $tmp148 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21122, &$s147);
                        if ($tmp148.value) {
                        {
                            panda$core$Int64 $tmp149 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                            panda$core$Int64 $tmp150 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags93, $tmp149);
                            flags93 = $tmp150;
                        }
                        }
                        else {
                        panda$core$Bit $tmp152 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21122, &$s151);
                        if ($tmp152.value) {
                        {
                            panda$core$Int64 $tmp153 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                            panda$core$Int64 $tmp154 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags93, $tmp153);
                            flags93 = $tmp154;
                        }
                        }
                        else {
                        panda$core$Bit $tmp156 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21122, &$s155);
                        if ($tmp156.value) {
                        {
                            panda$core$Int64 $tmp157 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp158 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags93, $tmp157);
                            flags93 = $tmp158;
                        }
                        }
                        else {
                        panda$core$Bit $tmp160 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21122, &$s159);
                        if ($tmp160.value) {
                        {
                            panda$core$Int64 $tmp161 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                            panda$core$Int64 $tmp162 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags93, $tmp161);
                            flags93 = $tmp162;
                        }
                        }
                        else {
                        panda$core$Bit $tmp164 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21122, &$s163);
                        if ($tmp164.value) {
                        {
                            panda$core$Int64 $tmp165 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                            panda$core$Int64 $tmp166 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags93, $tmp165);
                            flags93 = $tmp166;
                        }
                        }
                        else {
                        panda$core$Bit $tmp168 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$50_21122, &$s167);
                        if ($tmp168.value) {
                        {
                            panda$core$Int64 $tmp169 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 12 }));
                            panda$core$Int64 $tmp170 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags93, $tmp169);
                            flags93 = $tmp170;
                        }
                        }
                        else {
                        {
                            panda$core$Object* $tmp173 = (($fn172) self->compiler->$class->vtable[2])(self->compiler);
                            panda$core$Object* $tmp171 = $tmp173;
                            panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s176, text120);
                            panda$core$String* $tmp175 = $tmp177;
                            panda$core$String* $tmp179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s178);
                            panda$core$String* $tmp174 = $tmp179;
                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp171), position118, $tmp174);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
                            panda$core$Panda$unref$panda$core$Object($tmp171);
                        }
                        }
                        }
                        }
                        }
                        }
                        }
                        }
                        }
                        }
                        }
                        }
                        }
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c109));
        }
        goto $l101;
        $l102:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$47$994));
    }
    org$pandalanguage$pandac$Annotations* $tmp183 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp183, flags93);
    org$pandalanguage$pandac$Annotations* $tmp182 = $tmp183;
    org$pandalanguage$pandac$Annotations* $tmp181 = $tmp182;
    org$pandalanguage$pandac$Annotations* $tmp180 = $tmp181;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
    return $tmp180;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment184;
    org$pandalanguage$pandac$ASTNode* $match$81_13187;
    org$pandalanguage$pandac$Position position189;
    panda$core$String* text191;
    org$pandalanguage$pandac$Annotations* annotations195;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind199;
    org$pandalanguage$pandac$ASTNode* $match$90_9200;
    org$pandalanguage$pandac$Variable$Kind kind202;
    panda$collections$ImmutableArray* decls204;
    org$pandalanguage$pandac$Variable$Kind $match$92_17206;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp208;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp210;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp212;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp216;
    panda$collections$Iterator* Iter$103$17217;
    org$pandalanguage$pandac$ASTNode* decl232;
    org$pandalanguage$pandac$ASTNode* $match$104_21239;
    org$pandalanguage$pandac$Position declPosition241;
    org$pandalanguage$pandac$ASTNode* target243;
    org$pandalanguage$pandac$ASTNode* value245;
    panda$core$String* name247;
    org$pandalanguage$pandac$Type* type248;
    org$pandalanguage$pandac$ASTNode* $match$108_29249;
    panda$core$String* id251;
    panda$core$String* id260;
    org$pandalanguage$pandac$ASTNode* idType262;
    org$pandalanguage$pandac$FieldDecl* field270;
    memset(&doccomment184, 0, sizeof(doccomment184));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            panda$core$String* $tmp185 = doccomment184;
            panda$core$String* $tmp186 = NULL;
            doccomment184 = $tmp186;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp186));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
        }
    }
    }
    else {
    {
        {
            $match$81_13187 = p_rawDoccomment;
            panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_13187->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp188.value) {
            {
                org$pandalanguage$pandac$Position* $tmp190 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_13187->$data + 0));
                position189 = *$tmp190;
                panda$core$String** $tmp192 = ((panda$core$String**) ((char*) $match$81_13187->$data + 16));
                text191 = *$tmp192;
                {
                    panda$core$String* $tmp193 = doccomment184;
                    panda$core$String* $tmp194 = text191;
                    doccomment184 = $tmp194;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp194));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
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
    org$pandalanguage$pandac$Annotations* $tmp198 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    org$pandalanguage$pandac$Annotations* $tmp197 = $tmp198;
    org$pandalanguage$pandac$Annotations* $tmp196 = $tmp197;
    annotations195 = $tmp196;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp196));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
    memset(&fieldKind199, 0, sizeof(fieldKind199));
    {
        $match$90_9200 = p_varDecl;
        panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$90_9200->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp201.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp203 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$90_9200->$data + 16));
            kind202 = *$tmp203;
            panda$collections$ImmutableArray** $tmp205 = ((panda$collections$ImmutableArray**) ((char*) $match$90_9200->$data + 24));
            decls204 = *$tmp205;
            {
                $match$92_17206 = kind202;
                panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$92_17206.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp207.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp208, ((panda$core$Int64) { 0 }));
                    fieldKind199 = $tmp208;
                }
                }
                else {
                panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$92_17206.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp209.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp210, ((panda$core$Int64) { 1 }));
                    fieldKind199 = $tmp210;
                }
                }
                else {
                panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$92_17206.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp211.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp212, ((panda$core$Int64) { 2 }));
                    fieldKind199 = $tmp212;
                    panda$core$Int64 $tmp213 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp214 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations195->flags, $tmp213);
                    annotations195->flags = $tmp214;
                }
                }
                else {
                panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$92_17206.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp215.value) {
                {
                    org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp216, ((panda$core$Int64) { 3 }));
                    fieldKind199 = $tmp216;
                }
                }
                }
                }
                }
            }
            {
                ITable* $tmp220 = ((panda$collections$Iterable*) decls204)->$class->itable;
                while ($tmp220->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp220 = $tmp220->next;
                }
                $fn222 $tmp221 = $tmp220->methods[0];
                panda$collections$Iterator* $tmp223 = $tmp221(((panda$collections$Iterable*) decls204));
                panda$collections$Iterator* $tmp219 = $tmp223;
                panda$collections$Iterator* $tmp218 = $tmp219;
                Iter$103$17217 = $tmp218;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp218));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
                $l224:;
                ITable* $tmp227 = Iter$103$17217->$class->itable;
                while ($tmp227->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp227 = $tmp227->next;
                }
                $fn229 $tmp228 = $tmp227->methods[0];
                panda$core$Bit $tmp230 = $tmp228(Iter$103$17217);
                panda$core$Bit $tmp231 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp230);
                bool $tmp226 = $tmp231.value;
                if (!$tmp226) goto $l225;
                {
                    ITable* $tmp235 = Iter$103$17217->$class->itable;
                    while ($tmp235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp235 = $tmp235->next;
                    }
                    $fn237 $tmp236 = $tmp235->methods[1];
                    panda$core$Object* $tmp238 = $tmp236(Iter$103$17217);
                    panda$core$Object* $tmp234 = $tmp238;
                    org$pandalanguage$pandac$ASTNode* $tmp233 = ((org$pandalanguage$pandac$ASTNode*) $tmp234);
                    decl232 = $tmp233;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp233));
                    panda$core$Panda$unref$panda$core$Object($tmp234);
                    {
                        $match$104_21239 = decl232;
                        panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$104_21239->$rawValue, ((panda$core$Int64) { 11 }));
                        if ($tmp240.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp242 = ((org$pandalanguage$pandac$Position*) ((char*) $match$104_21239->$data + 0));
                            declPosition241 = *$tmp242;
                            org$pandalanguage$pandac$ASTNode** $tmp244 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$104_21239->$data + 16));
                            target243 = *$tmp244;
                            org$pandalanguage$pandac$ASTNode** $tmp246 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$104_21239->$data + 24));
                            value245 = *$tmp246;
                            memset(&name247, 0, sizeof(name247));
                            memset(&type248, 0, sizeof(type248));
                            {
                                $match$108_29249 = target243;
                                panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_29249->$rawValue, ((panda$core$Int64) { 18 }));
                                if ($tmp250.value) {
                                {
                                    panda$core$String** $tmp252 = ((panda$core$String**) ((char*) $match$108_29249->$data + 16));
                                    id251 = *$tmp252;
                                    {
                                        panda$core$String* $tmp253 = name247;
                                        panda$core$String* $tmp254 = id251;
                                        name247 = $tmp254;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp253));
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp255 = type248;
                                        org$pandalanguage$pandac$Type* $tmp258 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                        org$pandalanguage$pandac$Type* $tmp257 = $tmp258;
                                        org$pandalanguage$pandac$Type* $tmp256 = $tmp257;
                                        type248 = $tmp256;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$108_29249->$rawValue, ((panda$core$Int64) { 37 }));
                                if ($tmp259.value) {
                                {
                                    panda$core$String** $tmp261 = ((panda$core$String**) ((char*) $match$108_29249->$data + 16));
                                    id260 = *$tmp261;
                                    org$pandalanguage$pandac$ASTNode** $tmp263 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$108_29249->$data + 24));
                                    idType262 = *$tmp263;
                                    {
                                        panda$core$String* $tmp264 = name247;
                                        panda$core$String* $tmp265 = id260;
                                        name247 = $tmp265;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
                                    }
                                    {
                                        org$pandalanguage$pandac$Type* $tmp266 = type248;
                                        org$pandalanguage$pandac$Type* $tmp269 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType262);
                                        org$pandalanguage$pandac$Type* $tmp268 = $tmp269;
                                        org$pandalanguage$pandac$Type* $tmp267 = $tmp268;
                                        type248 = $tmp267;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp267));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
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
                            org$pandalanguage$pandac$FieldDecl* $tmp273 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp273, p_owner, declPosition241, doccomment184, annotations195, fieldKind199, name247, type248, value245);
                            org$pandalanguage$pandac$FieldDecl* $tmp272 = $tmp273;
                            org$pandalanguage$pandac$FieldDecl* $tmp271 = $tmp272;
                            field270 = $tmp271;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp272));
                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field270));
                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field270));
                            {
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $match$108_29249));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field270));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type248));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name247));
                            }
                        }
                        }
                        else {
                        {
                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                        }
                        }
                    }
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl232));
                }
                goto $l224;
                $l225:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$103$17217));
            }
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations195));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment184));
    }
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$133_9274;
    org$pandalanguage$pandac$ASTNode* test276;
    org$pandalanguage$pandac$ASTNode* left281;
    org$pandalanguage$pandac$ASTNode* right283;
    panda$collections$ImmutableArray* statements293;
    panda$core$Int64 result295;
    panda$collections$Iterator* Iter$142$17296;
    org$pandalanguage$pandac$ASTNode* s311;
    org$pandalanguage$pandac$ASTNode* target324;
    panda$collections$ImmutableArray* args326;
    panda$core$Int64 result328;
    panda$collections$Iterator* Iter$150$17330;
    org$pandalanguage$pandac$ASTNode* a345;
    org$pandalanguage$pandac$ASTNode* base356;
    org$pandalanguage$pandac$ASTNode* value363;
    panda$collections$ImmutableArray* statements369;
    org$pandalanguage$pandac$ASTNode* test371;
    panda$core$Int64 result373;
    panda$collections$Iterator* Iter$165$17375;
    org$pandalanguage$pandac$ASTNode* s390;
    org$pandalanguage$pandac$ASTNode* base401;
    org$pandalanguage$pandac$ASTNode* list406;
    panda$collections$ImmutableArray* statements408;
    panda$core$Int64 result410;
    panda$collections$Iterator* Iter$173$17412;
    org$pandalanguage$pandac$ASTNode* s427;
    org$pandalanguage$pandac$ASTNode* test442;
    panda$collections$ImmutableArray* ifTrue444;
    org$pandalanguage$pandac$ASTNode* ifFalse446;
    panda$core$Int64 result448;
    panda$collections$Iterator* Iter$183$17450;
    org$pandalanguage$pandac$ASTNode* s465;
    panda$collections$ImmutableArray* statements480;
    panda$core$Int64 result482;
    panda$collections$Iterator* Iter$194$17483;
    org$pandalanguage$pandac$ASTNode* s498;
    org$pandalanguage$pandac$ASTNode* value509;
    panda$collections$ImmutableArray* whens511;
    panda$collections$ImmutableArray* other513;
    panda$core$Int64 result515;
    panda$collections$Iterator* Iter$200$17517;
    org$pandalanguage$pandac$ASTNode* w532;
    panda$collections$Iterator* Iter$204$21541;
    org$pandalanguage$pandac$ASTNode* s556;
    org$pandalanguage$pandac$ASTNode* base571;
    org$pandalanguage$pandac$ASTNode* value581;
    panda$collections$ImmutableArray* decls595;
    panda$core$Int64 result597;
    panda$collections$Iterator* Iter$234$17598;
    org$pandalanguage$pandac$ASTNode* decl613;
    panda$collections$ImmutableArray* tests624;
    panda$collections$ImmutableArray* statements626;
    panda$core$Int64 result628;
    panda$collections$Iterator* Iter$240$17629;
    org$pandalanguage$pandac$ASTNode* test644;
    panda$collections$Iterator* Iter$243$17653;
    org$pandalanguage$pandac$ASTNode* s668;
    org$pandalanguage$pandac$ASTNode* test679;
    panda$collections$ImmutableArray* statements681;
    panda$core$Int64 result683;
    panda$collections$Iterator* Iter$249$17685;
    org$pandalanguage$pandac$ASTNode* s700;
    {
        $match$133_9274 = p_node;
        panda$core$Bit $tmp275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp275.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp277 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9274->$data + 16));
            test276 = *$tmp277;
            panda$core$Int64 $tmp279 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test276);
            panda$core$Int64 $tmp278 = $tmp279;
            return $tmp278;
        }
        }
        else {
        panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp280.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp282 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9274->$data + 16));
            left281 = *$tmp282;
            org$pandalanguage$pandac$ASTNode** $tmp284 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9274->$data + 32));
            right283 = *$tmp284;
            panda$core$Int64 $tmp286 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left281);
            panda$core$Int64 $tmp287 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp286);
            panda$core$Int64 $tmp288 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right283);
            panda$core$Int64 $tmp289 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp287, $tmp288);
            panda$core$Int64 $tmp285 = $tmp289;
            return $tmp285;
        }
        }
        else {
        panda$core$Bit $tmp290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp290.value) {
        {
            panda$core$Int64 $tmp291 = ((panda$core$Int64) { 1 });
            return $tmp291;
        }
        }
        else {
        panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp292.value) {
        {
            panda$collections$ImmutableArray** $tmp294 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9274->$data + 16));
            statements293 = *$tmp294;
            result295 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp299 = ((panda$collections$Iterable*) statements293)->$class->itable;
                while ($tmp299->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp299 = $tmp299->next;
                }
                $fn301 $tmp300 = $tmp299->methods[0];
                panda$collections$Iterator* $tmp302 = $tmp300(((panda$collections$Iterable*) statements293));
                panda$collections$Iterator* $tmp298 = $tmp302;
                panda$collections$Iterator* $tmp297 = $tmp298;
                Iter$142$17296 = $tmp297;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
                $l303:;
                ITable* $tmp306 = Iter$142$17296->$class->itable;
                while ($tmp306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp306 = $tmp306->next;
                }
                $fn308 $tmp307 = $tmp306->methods[0];
                panda$core$Bit $tmp309 = $tmp307(Iter$142$17296);
                panda$core$Bit $tmp310 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp309);
                bool $tmp305 = $tmp310.value;
                if (!$tmp305) goto $l304;
                {
                    ITable* $tmp314 = Iter$142$17296->$class->itable;
                    while ($tmp314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp314 = $tmp314->next;
                    }
                    $fn316 $tmp315 = $tmp314->methods[1];
                    panda$core$Object* $tmp317 = $tmp315(Iter$142$17296);
                    panda$core$Object* $tmp313 = $tmp317;
                    org$pandalanguage$pandac$ASTNode* $tmp312 = ((org$pandalanguage$pandac$ASTNode*) $tmp313);
                    s311 = $tmp312;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
                    panda$core$Panda$unref$panda$core$Object($tmp313);
                    panda$core$Int64 $tmp318 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s311);
                    panda$core$Int64 $tmp319 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result295, $tmp318);
                    result295 = $tmp319;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s311));
                }
                goto $l303;
                $l304:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$142$17296));
            }
            panda$core$Int64 $tmp320 = result295;
            return $tmp320;
        }
        }
        else {
        panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp321.value) {
        {
            panda$core$Int64 $tmp322 = ((panda$core$Int64) { 1 });
            return $tmp322;
        }
        }
        else {
        panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp323.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp325 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9274->$data + 16));
            target324 = *$tmp325;
            panda$collections$ImmutableArray** $tmp327 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9274->$data + 24));
            args326 = *$tmp327;
            panda$core$Int64 $tmp329 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target324);
            result328 = $tmp329;
            {
                ITable* $tmp333 = ((panda$collections$Iterable*) args326)->$class->itable;
                while ($tmp333->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp333 = $tmp333->next;
                }
                $fn335 $tmp334 = $tmp333->methods[0];
                panda$collections$Iterator* $tmp336 = $tmp334(((panda$collections$Iterable*) args326));
                panda$collections$Iterator* $tmp332 = $tmp336;
                panda$collections$Iterator* $tmp331 = $tmp332;
                Iter$150$17330 = $tmp331;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
                $l337:;
                ITable* $tmp340 = Iter$150$17330->$class->itable;
                while ($tmp340->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp340 = $tmp340->next;
                }
                $fn342 $tmp341 = $tmp340->methods[0];
                panda$core$Bit $tmp343 = $tmp341(Iter$150$17330);
                panda$core$Bit $tmp344 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp343);
                bool $tmp339 = $tmp344.value;
                if (!$tmp339) goto $l338;
                {
                    ITable* $tmp348 = Iter$150$17330->$class->itable;
                    while ($tmp348->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp348 = $tmp348->next;
                    }
                    $fn350 $tmp349 = $tmp348->methods[1];
                    panda$core$Object* $tmp351 = $tmp349(Iter$150$17330);
                    panda$core$Object* $tmp347 = $tmp351;
                    org$pandalanguage$pandac$ASTNode* $tmp346 = ((org$pandalanguage$pandac$ASTNode*) $tmp347);
                    a345 = $tmp346;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp346));
                    panda$core$Panda$unref$panda$core$Object($tmp347);
                    panda$core$Int64 $tmp352 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a345);
                    panda$core$Int64 $tmp353 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result328, $tmp352);
                    result328 = $tmp353;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a345));
                }
                goto $l337;
                $l338:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$150$17330));
            }
            panda$core$Int64 $tmp354 = result328;
            return $tmp354;
        }
        }
        else {
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp355.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp357 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9274->$data + 16));
            base356 = *$tmp357;
            panda$core$Int64 $tmp359 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base356);
            panda$core$Int64 $tmp358 = $tmp359;
            return $tmp358;
        }
        }
        else {
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp360.value) {
        {
            panda$core$Int64 $tmp361 = ((panda$core$Int64) { 1 });
            return $tmp361;
        }
        }
        else {
        panda$core$Bit $tmp362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp362.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp364 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9274->$data + 24));
            value363 = *$tmp364;
            if (((panda$core$Bit) { value363 == NULL }).value) {
            {
                panda$core$Int64 $tmp365 = ((panda$core$Int64) { 0 });
                return $tmp365;
            }
            }
            panda$core$Int64 $tmp367 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value363);
            panda$core$Int64 $tmp366 = $tmp367;
            return $tmp366;
        }
        }
        else {
        panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp368.value) {
        {
            panda$collections$ImmutableArray** $tmp370 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9274->$data + 24));
            statements369 = *$tmp370;
            org$pandalanguage$pandac$ASTNode** $tmp372 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9274->$data + 32));
            test371 = *$tmp372;
            panda$core$Int64 $tmp374 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test371);
            result373 = $tmp374;
            {
                ITable* $tmp378 = ((panda$collections$Iterable*) statements369)->$class->itable;
                while ($tmp378->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp378 = $tmp378->next;
                }
                $fn380 $tmp379 = $tmp378->methods[0];
                panda$collections$Iterator* $tmp381 = $tmp379(((panda$collections$Iterable*) statements369));
                panda$collections$Iterator* $tmp377 = $tmp381;
                panda$collections$Iterator* $tmp376 = $tmp377;
                Iter$165$17375 = $tmp376;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp376));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
                $l382:;
                ITable* $tmp385 = Iter$165$17375->$class->itable;
                while ($tmp385->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp385 = $tmp385->next;
                }
                $fn387 $tmp386 = $tmp385->methods[0];
                panda$core$Bit $tmp388 = $tmp386(Iter$165$17375);
                panda$core$Bit $tmp389 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp388);
                bool $tmp384 = $tmp389.value;
                if (!$tmp384) goto $l383;
                {
                    ITable* $tmp393 = Iter$165$17375->$class->itable;
                    while ($tmp393->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp393 = $tmp393->next;
                    }
                    $fn395 $tmp394 = $tmp393->methods[1];
                    panda$core$Object* $tmp396 = $tmp394(Iter$165$17375);
                    panda$core$Object* $tmp392 = $tmp396;
                    org$pandalanguage$pandac$ASTNode* $tmp391 = ((org$pandalanguage$pandac$ASTNode*) $tmp392);
                    s390 = $tmp391;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp391));
                    panda$core$Panda$unref$panda$core$Object($tmp392);
                    panda$core$Int64 $tmp397 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s390);
                    panda$core$Int64 $tmp398 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result373, $tmp397);
                    result373 = $tmp398;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s390));
                }
                goto $l382;
                $l383:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$165$17375));
            }
            panda$core$Int64 $tmp399 = result373;
            return $tmp399;
        }
        }
        else {
        panda$core$Bit $tmp400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp400.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp402 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9274->$data + 16));
            base401 = *$tmp402;
            panda$core$Int64 $tmp404 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base401);
            panda$core$Int64 $tmp403 = $tmp404;
            return $tmp403;
        }
        }
        else {
        panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp405.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp407 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9274->$data + 32));
            list406 = *$tmp407;
            panda$collections$ImmutableArray** $tmp409 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9274->$data + 40));
            statements408 = *$tmp409;
            panda$core$Int64 $tmp411 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list406);
            result410 = $tmp411;
            {
                ITable* $tmp415 = ((panda$collections$Iterable*) statements408)->$class->itable;
                while ($tmp415->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp415 = $tmp415->next;
                }
                $fn417 $tmp416 = $tmp415->methods[0];
                panda$collections$Iterator* $tmp418 = $tmp416(((panda$collections$Iterable*) statements408));
                panda$collections$Iterator* $tmp414 = $tmp418;
                panda$collections$Iterator* $tmp413 = $tmp414;
                Iter$173$17412 = $tmp413;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp413));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
                $l419:;
                ITable* $tmp422 = Iter$173$17412->$class->itable;
                while ($tmp422->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp422 = $tmp422->next;
                }
                $fn424 $tmp423 = $tmp422->methods[0];
                panda$core$Bit $tmp425 = $tmp423(Iter$173$17412);
                panda$core$Bit $tmp426 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp425);
                bool $tmp421 = $tmp426.value;
                if (!$tmp421) goto $l420;
                {
                    ITable* $tmp430 = Iter$173$17412->$class->itable;
                    while ($tmp430->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp430 = $tmp430->next;
                    }
                    $fn432 $tmp431 = $tmp430->methods[1];
                    panda$core$Object* $tmp433 = $tmp431(Iter$173$17412);
                    panda$core$Object* $tmp429 = $tmp433;
                    org$pandalanguage$pandac$ASTNode* $tmp428 = ((org$pandalanguage$pandac$ASTNode*) $tmp429);
                    s427 = $tmp428;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp428));
                    panda$core$Panda$unref$panda$core$Object($tmp429);
                    panda$core$Int64 $tmp434 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s427);
                    panda$core$Int64 $tmp435 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result410, $tmp434);
                    result410 = $tmp435;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s427));
                }
                goto $l419;
                $l420:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$173$17412));
            }
            panda$core$Int64 $tmp436 = result410;
            return $tmp436;
        }
        }
        else {
        panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp437.value) {
        {
            panda$core$Int64 $tmp438 = ((panda$core$Int64) { 0 });
            return $tmp438;
        }
        }
        else {
        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp439.value) {
        {
            panda$core$Int64 $tmp440 = ((panda$core$Int64) { 1 });
            return $tmp440;
        }
        }
        else {
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp441.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp443 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9274->$data + 16));
            test442 = *$tmp443;
            panda$collections$ImmutableArray** $tmp445 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9274->$data + 24));
            ifTrue444 = *$tmp445;
            org$pandalanguage$pandac$ASTNode** $tmp447 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9274->$data + 32));
            ifFalse446 = *$tmp447;
            panda$core$Int64 $tmp449 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test442);
            result448 = $tmp449;
            {
                ITable* $tmp453 = ((panda$collections$Iterable*) ifTrue444)->$class->itable;
                while ($tmp453->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp453 = $tmp453->next;
                }
                $fn455 $tmp454 = $tmp453->methods[0];
                panda$collections$Iterator* $tmp456 = $tmp454(((panda$collections$Iterable*) ifTrue444));
                panda$collections$Iterator* $tmp452 = $tmp456;
                panda$collections$Iterator* $tmp451 = $tmp452;
                Iter$183$17450 = $tmp451;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp451));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
                $l457:;
                ITable* $tmp460 = Iter$183$17450->$class->itable;
                while ($tmp460->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp460 = $tmp460->next;
                }
                $fn462 $tmp461 = $tmp460->methods[0];
                panda$core$Bit $tmp463 = $tmp461(Iter$183$17450);
                panda$core$Bit $tmp464 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp463);
                bool $tmp459 = $tmp464.value;
                if (!$tmp459) goto $l458;
                {
                    ITable* $tmp468 = Iter$183$17450->$class->itable;
                    while ($tmp468->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp468 = $tmp468->next;
                    }
                    $fn470 $tmp469 = $tmp468->methods[1];
                    panda$core$Object* $tmp471 = $tmp469(Iter$183$17450);
                    panda$core$Object* $tmp467 = $tmp471;
                    org$pandalanguage$pandac$ASTNode* $tmp466 = ((org$pandalanguage$pandac$ASTNode*) $tmp467);
                    s465 = $tmp466;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp466));
                    panda$core$Panda$unref$panda$core$Object($tmp467);
                    panda$core$Int64 $tmp472 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s465);
                    panda$core$Int64 $tmp473 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result448, $tmp472);
                    result448 = $tmp473;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s465));
                }
                goto $l457;
                $l458:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$183$17450));
            }
            if (((panda$core$Bit) { ifFalse446 != NULL }).value) {
            {
                panda$core$Int64 $tmp474 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse446);
                panda$core$Int64 $tmp475 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result448, $tmp474);
                result448 = $tmp475;
            }
            }
            panda$core$Int64 $tmp476 = result448;
            return $tmp476;
        }
        }
        else {
        panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp477.value) {
        {
            panda$core$Int64 $tmp478 = ((panda$core$Int64) { 1 });
            return $tmp478;
        }
        }
        else {
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp479.value) {
        {
            panda$collections$ImmutableArray** $tmp481 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9274->$data + 24));
            statements480 = *$tmp481;
            result482 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp486 = ((panda$collections$Iterable*) statements480)->$class->itable;
                while ($tmp486->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp486 = $tmp486->next;
                }
                $fn488 $tmp487 = $tmp486->methods[0];
                panda$collections$Iterator* $tmp489 = $tmp487(((panda$collections$Iterable*) statements480));
                panda$collections$Iterator* $tmp485 = $tmp489;
                panda$collections$Iterator* $tmp484 = $tmp485;
                Iter$194$17483 = $tmp484;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp484));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
                $l490:;
                ITable* $tmp493 = Iter$194$17483->$class->itable;
                while ($tmp493->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp493 = $tmp493->next;
                }
                $fn495 $tmp494 = $tmp493->methods[0];
                panda$core$Bit $tmp496 = $tmp494(Iter$194$17483);
                panda$core$Bit $tmp497 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp496);
                bool $tmp492 = $tmp497.value;
                if (!$tmp492) goto $l491;
                {
                    ITable* $tmp501 = Iter$194$17483->$class->itable;
                    while ($tmp501->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp501 = $tmp501->next;
                    }
                    $fn503 $tmp502 = $tmp501->methods[1];
                    panda$core$Object* $tmp504 = $tmp502(Iter$194$17483);
                    panda$core$Object* $tmp500 = $tmp504;
                    org$pandalanguage$pandac$ASTNode* $tmp499 = ((org$pandalanguage$pandac$ASTNode*) $tmp500);
                    s498 = $tmp499;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp499));
                    panda$core$Panda$unref$panda$core$Object($tmp500);
                    panda$core$Int64 $tmp505 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s498);
                    panda$core$Int64 $tmp506 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result482, $tmp505);
                    result482 = $tmp506;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s498));
                }
                goto $l490;
                $l491:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$194$17483));
            }
            panda$core$Int64 $tmp507 = result482;
            return $tmp507;
        }
        }
        else {
        panda$core$Bit $tmp508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp508.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp510 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9274->$data + 16));
            value509 = *$tmp510;
            panda$collections$ImmutableArray** $tmp512 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9274->$data + 24));
            whens511 = *$tmp512;
            panda$collections$ImmutableArray** $tmp514 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9274->$data + 32));
            other513 = *$tmp514;
            panda$core$Int64 $tmp516 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value509);
            result515 = $tmp516;
            {
                ITable* $tmp520 = ((panda$collections$Iterable*) whens511)->$class->itable;
                while ($tmp520->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp520 = $tmp520->next;
                }
                $fn522 $tmp521 = $tmp520->methods[0];
                panda$collections$Iterator* $tmp523 = $tmp521(((panda$collections$Iterable*) whens511));
                panda$collections$Iterator* $tmp519 = $tmp523;
                panda$collections$Iterator* $tmp518 = $tmp519;
                Iter$200$17517 = $tmp518;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp518));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp519));
                $l524:;
                ITable* $tmp527 = Iter$200$17517->$class->itable;
                while ($tmp527->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp527 = $tmp527->next;
                }
                $fn529 $tmp528 = $tmp527->methods[0];
                panda$core$Bit $tmp530 = $tmp528(Iter$200$17517);
                panda$core$Bit $tmp531 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp530);
                bool $tmp526 = $tmp531.value;
                if (!$tmp526) goto $l525;
                {
                    ITable* $tmp535 = Iter$200$17517->$class->itable;
                    while ($tmp535->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp535 = $tmp535->next;
                    }
                    $fn537 $tmp536 = $tmp535->methods[1];
                    panda$core$Object* $tmp538 = $tmp536(Iter$200$17517);
                    panda$core$Object* $tmp534 = $tmp538;
                    org$pandalanguage$pandac$ASTNode* $tmp533 = ((org$pandalanguage$pandac$ASTNode*) $tmp534);
                    w532 = $tmp533;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp533));
                    panda$core$Panda$unref$panda$core$Object($tmp534);
                    panda$core$Int64 $tmp539 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w532);
                    panda$core$Int64 $tmp540 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result515, $tmp539);
                    result515 = $tmp540;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w532));
                }
                goto $l524;
                $l525:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$200$17517));
            }
            if (((panda$core$Bit) { other513 != NULL }).value) {
            {
                {
                    ITable* $tmp544 = ((panda$collections$Iterable*) other513)->$class->itable;
                    while ($tmp544->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp544 = $tmp544->next;
                    }
                    $fn546 $tmp545 = $tmp544->methods[0];
                    panda$collections$Iterator* $tmp547 = $tmp545(((panda$collections$Iterable*) other513));
                    panda$collections$Iterator* $tmp543 = $tmp547;
                    panda$collections$Iterator* $tmp542 = $tmp543;
                    Iter$204$21541 = $tmp542;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp542));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
                    $l548:;
                    ITable* $tmp551 = Iter$204$21541->$class->itable;
                    while ($tmp551->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp551 = $tmp551->next;
                    }
                    $fn553 $tmp552 = $tmp551->methods[0];
                    panda$core$Bit $tmp554 = $tmp552(Iter$204$21541);
                    panda$core$Bit $tmp555 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp554);
                    bool $tmp550 = $tmp555.value;
                    if (!$tmp550) goto $l549;
                    {
                        ITable* $tmp559 = Iter$204$21541->$class->itable;
                        while ($tmp559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp559 = $tmp559->next;
                        }
                        $fn561 $tmp560 = $tmp559->methods[1];
                        panda$core$Object* $tmp562 = $tmp560(Iter$204$21541);
                        panda$core$Object* $tmp558 = $tmp562;
                        org$pandalanguage$pandac$ASTNode* $tmp557 = ((org$pandalanguage$pandac$ASTNode*) $tmp558);
                        s556 = $tmp557;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp557));
                        panda$core$Panda$unref$panda$core$Object($tmp558);
                        panda$core$Int64 $tmp563 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s556);
                        panda$core$Int64 $tmp564 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result515, $tmp563);
                        result515 = $tmp564;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s556));
                    }
                    goto $l548;
                    $l549:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$204$21541));
                }
            }
            }
            panda$core$Int64 $tmp565 = result515;
            return $tmp565;
        }
        }
        else {
        panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp566.value) {
        {
            panda$core$Int64 $tmp567 = ((panda$core$Int64) { 1 });
            return $tmp567;
        }
        }
        else {
        panda$core$Bit $tmp568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp568.value) {
        {
            panda$core$Int64 $tmp569 = ((panda$core$Int64) { 0 });
            return $tmp569;
        }
        }
        else {
        panda$core$Bit $tmp570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp570.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp572 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9274->$data + 24));
            base571 = *$tmp572;
            panda$core$Int64 $tmp574 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base571);
            panda$core$Int64 $tmp575 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp574);
            panda$core$Int64 $tmp573 = $tmp575;
            return $tmp573;
        }
        }
        else {
        panda$core$Bit $tmp576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp576.value) {
        {
            panda$core$Int64 $tmp577 = ((panda$core$Int64) { 1 });
            return $tmp577;
        }
        }
        else {
        panda$core$Bit $tmp578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp578.value) {
        {
            panda$core$Int64 $tmp579 = ((panda$core$Int64) { 1 });
            return $tmp579;
        }
        }
        else {
        panda$core$Bit $tmp580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp580.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp582 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9274->$data + 16));
            value581 = *$tmp582;
            if (((panda$core$Bit) { value581 == NULL }).value) {
            {
                panda$core$Int64 $tmp583 = ((panda$core$Int64) { 0 });
                return $tmp583;
            }
            }
            panda$core$Int64 $tmp585 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value581);
            panda$core$Int64 $tmp584 = $tmp585;
            return $tmp584;
        }
        }
        else {
        panda$core$Bit $tmp586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp586.value) {
        {
            panda$core$Int64 $tmp587 = ((panda$core$Int64) { 1 });
            return $tmp587;
        }
        }
        else {
        panda$core$Bit $tmp588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp588.value) {
        {
            panda$core$Int64 $tmp589 = ((panda$core$Int64) { 1 });
            return $tmp589;
        }
        }
        else {
        panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp590.value) {
        {
            panda$core$Int64 $tmp591 = ((panda$core$Int64) { 1 });
            return $tmp591;
        }
        }
        else {
        panda$core$Bit $tmp592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp592.value) {
        {
            panda$core$Int64 $tmp593 = ((panda$core$Int64) { 0 });
            return $tmp593;
        }
        }
        else {
        panda$core$Bit $tmp594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp594.value) {
        {
            panda$collections$ImmutableArray** $tmp596 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9274->$data + 24));
            decls595 = *$tmp596;
            result597 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp601 = ((panda$collections$Iterable*) decls595)->$class->itable;
                while ($tmp601->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp601 = $tmp601->next;
                }
                $fn603 $tmp602 = $tmp601->methods[0];
                panda$collections$Iterator* $tmp604 = $tmp602(((panda$collections$Iterable*) decls595));
                panda$collections$Iterator* $tmp600 = $tmp604;
                panda$collections$Iterator* $tmp599 = $tmp600;
                Iter$234$17598 = $tmp599;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp599));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp600));
                $l605:;
                ITable* $tmp608 = Iter$234$17598->$class->itable;
                while ($tmp608->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp608 = $tmp608->next;
                }
                $fn610 $tmp609 = $tmp608->methods[0];
                panda$core$Bit $tmp611 = $tmp609(Iter$234$17598);
                panda$core$Bit $tmp612 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp611);
                bool $tmp607 = $tmp612.value;
                if (!$tmp607) goto $l606;
                {
                    ITable* $tmp616 = Iter$234$17598->$class->itable;
                    while ($tmp616->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp616 = $tmp616->next;
                    }
                    $fn618 $tmp617 = $tmp616->methods[1];
                    panda$core$Object* $tmp619 = $tmp617(Iter$234$17598);
                    panda$core$Object* $tmp615 = $tmp619;
                    org$pandalanguage$pandac$ASTNode* $tmp614 = ((org$pandalanguage$pandac$ASTNode*) $tmp615);
                    decl613 = $tmp614;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp614));
                    panda$core$Panda$unref$panda$core$Object($tmp615);
                    panda$core$Int64 $tmp620 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl613);
                    panda$core$Int64 $tmp621 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result597, $tmp620);
                    result597 = $tmp621;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl613));
                }
                goto $l605;
                $l606:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$234$17598));
            }
            panda$core$Int64 $tmp622 = result597;
            return $tmp622;
        }
        }
        else {
        panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp623.value) {
        {
            panda$collections$ImmutableArray** $tmp625 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9274->$data + 16));
            tests624 = *$tmp625;
            panda$collections$ImmutableArray** $tmp627 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9274->$data + 24));
            statements626 = *$tmp627;
            result628 = ((panda$core$Int64) { 0 });
            {
                ITable* $tmp632 = ((panda$collections$Iterable*) tests624)->$class->itable;
                while ($tmp632->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp632 = $tmp632->next;
                }
                $fn634 $tmp633 = $tmp632->methods[0];
                panda$collections$Iterator* $tmp635 = $tmp633(((panda$collections$Iterable*) tests624));
                panda$collections$Iterator* $tmp631 = $tmp635;
                panda$collections$Iterator* $tmp630 = $tmp631;
                Iter$240$17629 = $tmp630;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp630));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp631));
                $l636:;
                ITable* $tmp639 = Iter$240$17629->$class->itable;
                while ($tmp639->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp639 = $tmp639->next;
                }
                $fn641 $tmp640 = $tmp639->methods[0];
                panda$core$Bit $tmp642 = $tmp640(Iter$240$17629);
                panda$core$Bit $tmp643 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp642);
                bool $tmp638 = $tmp643.value;
                if (!$tmp638) goto $l637;
                {
                    ITable* $tmp647 = Iter$240$17629->$class->itable;
                    while ($tmp647->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp647 = $tmp647->next;
                    }
                    $fn649 $tmp648 = $tmp647->methods[1];
                    panda$core$Object* $tmp650 = $tmp648(Iter$240$17629);
                    panda$core$Object* $tmp646 = $tmp650;
                    org$pandalanguage$pandac$ASTNode* $tmp645 = ((org$pandalanguage$pandac$ASTNode*) $tmp646);
                    test644 = $tmp645;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp645));
                    panda$core$Panda$unref$panda$core$Object($tmp646);
                    panda$core$Int64 $tmp651 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test644);
                    panda$core$Int64 $tmp652 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result628, $tmp651);
                    result628 = $tmp652;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test644));
                }
                goto $l636;
                $l637:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$240$17629));
            }
            {
                ITable* $tmp656 = ((panda$collections$Iterable*) statements626)->$class->itable;
                while ($tmp656->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp656 = $tmp656->next;
                }
                $fn658 $tmp657 = $tmp656->methods[0];
                panda$collections$Iterator* $tmp659 = $tmp657(((panda$collections$Iterable*) statements626));
                panda$collections$Iterator* $tmp655 = $tmp659;
                panda$collections$Iterator* $tmp654 = $tmp655;
                Iter$243$17653 = $tmp654;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp654));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp655));
                $l660:;
                ITable* $tmp663 = Iter$243$17653->$class->itable;
                while ($tmp663->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp663 = $tmp663->next;
                }
                $fn665 $tmp664 = $tmp663->methods[0];
                panda$core$Bit $tmp666 = $tmp664(Iter$243$17653);
                panda$core$Bit $tmp667 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp666);
                bool $tmp662 = $tmp667.value;
                if (!$tmp662) goto $l661;
                {
                    ITable* $tmp671 = Iter$243$17653->$class->itable;
                    while ($tmp671->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp671 = $tmp671->next;
                    }
                    $fn673 $tmp672 = $tmp671->methods[1];
                    panda$core$Object* $tmp674 = $tmp672(Iter$243$17653);
                    panda$core$Object* $tmp670 = $tmp674;
                    org$pandalanguage$pandac$ASTNode* $tmp669 = ((org$pandalanguage$pandac$ASTNode*) $tmp670);
                    s668 = $tmp669;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp669));
                    panda$core$Panda$unref$panda$core$Object($tmp670);
                    panda$core$Int64 $tmp675 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s668);
                    panda$core$Int64 $tmp676 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result628, $tmp675);
                    result628 = $tmp676;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s668));
                }
                goto $l660;
                $l661:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$243$17653));
            }
            panda$core$Int64 $tmp677 = result628;
            return $tmp677;
        }
        }
        else {
        panda$core$Bit $tmp678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$133_9274->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp678.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp680 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$133_9274->$data + 24));
            test679 = *$tmp680;
            panda$collections$ImmutableArray** $tmp682 = ((panda$collections$ImmutableArray**) ((char*) $match$133_9274->$data + 32));
            statements681 = *$tmp682;
            panda$core$Int64 $tmp684 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test679);
            result683 = $tmp684;
            {
                ITable* $tmp688 = ((panda$collections$Iterable*) statements681)->$class->itable;
                while ($tmp688->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp688 = $tmp688->next;
                }
                $fn690 $tmp689 = $tmp688->methods[0];
                panda$collections$Iterator* $tmp691 = $tmp689(((panda$collections$Iterable*) statements681));
                panda$collections$Iterator* $tmp687 = $tmp691;
                panda$collections$Iterator* $tmp686 = $tmp687;
                Iter$249$17685 = $tmp686;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp686));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp687));
                $l692:;
                ITable* $tmp695 = Iter$249$17685->$class->itable;
                while ($tmp695->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp695 = $tmp695->next;
                }
                $fn697 $tmp696 = $tmp695->methods[0];
                panda$core$Bit $tmp698 = $tmp696(Iter$249$17685);
                panda$core$Bit $tmp699 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp698);
                bool $tmp694 = $tmp699.value;
                if (!$tmp694) goto $l693;
                {
                    ITable* $tmp703 = Iter$249$17685->$class->itable;
                    while ($tmp703->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp703 = $tmp703->next;
                    }
                    $fn705 $tmp704 = $tmp703->methods[1];
                    panda$core$Object* $tmp706 = $tmp704(Iter$249$17685);
                    panda$core$Object* $tmp702 = $tmp706;
                    org$pandalanguage$pandac$ASTNode* $tmp701 = ((org$pandalanguage$pandac$ASTNode*) $tmp702);
                    s700 = $tmp701;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp701));
                    panda$core$Panda$unref$panda$core$Object($tmp702);
                    panda$core$Int64 $tmp707 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s700);
                    panda$core$Int64 $tmp708 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result683, $tmp707);
                    result683 = $tmp708;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s700));
                }
                goto $l692;
                $l693:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$249$17685));
            }
            panda$core$Int64 $tmp709 = result683;
            return $tmp709;
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
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Int64 c723;
    panda$collections$Iterator* Iter$262$13724;
    org$pandalanguage$pandac$ASTNode* s739;
    panda$core$Bit tmp3749;
    panda$core$Bit tmp4750;
    panda$core$Object* $tmp714 = (($fn713) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp712 = $tmp714;
    panda$core$Bit $tmp715 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp712)->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp711 = $tmp715.value;
    panda$core$Panda$unref$panda$core$Object($tmp712);
    if (!$tmp711) goto $l716;
    panda$core$Bit $tmp717 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp718 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp717);
    $tmp711 = $tmp718.value;
    $l716:;
    panda$core$Bit $tmp719 = { $tmp711 };
    bool $tmp710 = $tmp719.value;
    if (!$tmp710) goto $l720;
    panda$core$Bit $tmp721 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp710 = $tmp721.value;
    $l720:;
    panda$core$Bit $tmp722 = { $tmp710 };
    if ($tmp722.value) {
    {
        c723 = ((panda$core$Int64) { 0 });
        {
            ITable* $tmp727 = ((panda$collections$Iterable*) p_statements)->$class->itable;
            while ($tmp727->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp727 = $tmp727->next;
            }
            $fn729 $tmp728 = $tmp727->methods[0];
            panda$collections$Iterator* $tmp730 = $tmp728(((panda$collections$Iterable*) p_statements));
            panda$collections$Iterator* $tmp726 = $tmp730;
            panda$collections$Iterator* $tmp725 = $tmp726;
            Iter$262$13724 = $tmp725;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp725));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp726));
            $l731:;
            ITable* $tmp734 = Iter$262$13724->$class->itable;
            while ($tmp734->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp734 = $tmp734->next;
            }
            $fn736 $tmp735 = $tmp734->methods[0];
            panda$core$Bit $tmp737 = $tmp735(Iter$262$13724);
            panda$core$Bit $tmp738 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp737);
            bool $tmp733 = $tmp738.value;
            if (!$tmp733) goto $l732;
            {
                ITable* $tmp742 = Iter$262$13724->$class->itable;
                while ($tmp742->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp742 = $tmp742->next;
                }
                $fn744 $tmp743 = $tmp742->methods[1];
                panda$core$Object* $tmp745 = $tmp743(Iter$262$13724);
                panda$core$Object* $tmp741 = $tmp745;
                org$pandalanguage$pandac$ASTNode* $tmp740 = ((org$pandalanguage$pandac$ASTNode*) $tmp741);
                s739 = $tmp740;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp740));
                panda$core$Panda$unref$panda$core$Object($tmp741);
                panda$core$Int64 $tmp746 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s739);
                panda$core$Int64 $tmp747 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c723, $tmp746);
                c723 = $tmp747;
                panda$core$Bit $tmp748 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c723, ((panda$core$Int64) { 10 }));
                if ($tmp748.value) {
                {
                    {
                        tmp3749 = ((panda$core$Bit) { false });
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s739));
                        {
                            tmp4750 = tmp3749;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$262$13724));
                            panda$core$Bit $tmp751 = tmp4750;
                            return $tmp751;
                        }
                    }
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s739));
            }
            goto $l731;
            $l732:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$262$13724));
        }
        panda$core$Bit $tmp752 = ((panda$core$Bit) { true });
        return $tmp752;
    }
    }
    panda$core$Bit $tmp753 = ((panda$core$Bit) { false });
    return $tmp753;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment754;
    org$pandalanguage$pandac$ASTNode* $match$283_13757;
    org$pandalanguage$pandac$Position position759;
    panda$core$String* text761;
    org$pandalanguage$pandac$Annotations* annotations765;
    panda$collections$Array* parameters780;
    panda$collections$Iterator* Iter$295$9784;
    org$pandalanguage$pandac$ASTNode* p799;
    org$pandalanguage$pandac$ASTNode* $match$296_13806;
    panda$core$String* name808;
    org$pandalanguage$pandac$ASTNode* type810;
    org$pandalanguage$pandac$Type* returnType816;
    org$pandalanguage$pandac$MethodDecl* tmp5857;
    memset(&doccomment754, 0, sizeof(doccomment754));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            panda$core$String* $tmp755 = doccomment754;
            panda$core$String* $tmp756 = NULL;
            doccomment754 = $tmp756;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp756));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp755));
        }
    }
    }
    else {
    {
        {
            $match$283_13757 = p_rawDoccomment;
            panda$core$Bit $tmp758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$283_13757->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp758.value) {
            {
                org$pandalanguage$pandac$Position* $tmp760 = ((org$pandalanguage$pandac$Position*) ((char*) $match$283_13757->$data + 0));
                position759 = *$tmp760;
                panda$core$String** $tmp762 = ((panda$core$String**) ((char*) $match$283_13757->$data + 16));
                text761 = *$tmp762;
                {
                    panda$core$String* $tmp763 = doccomment754;
                    panda$core$String* $tmp764 = text761;
                    doccomment754 = $tmp764;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp764));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp763));
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
    org$pandalanguage$pandac$Annotations* $tmp768 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    org$pandalanguage$pandac$Annotations* $tmp767 = $tmp768;
    org$pandalanguage$pandac$Annotations* $tmp766 = $tmp767;
    annotations765 = $tmp766;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp766));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp767));
    panda$core$Bit $tmp771 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp770 = $tmp771.value;
    if (!$tmp770) goto $l772;
    panda$core$Bit $tmp773 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
    $tmp770 = $tmp773.value;
    $l772:;
    panda$core$Bit $tmp774 = { $tmp770 };
    bool $tmp769 = $tmp774.value;
    if ($tmp769) goto $l775;
    panda$core$Bit $tmp776 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations765);
    $tmp769 = $tmp776.value;
    $l775:;
    panda$core$Bit $tmp777 = { $tmp769 };
    if ($tmp777.value) {
    {
        panda$core$Int64 $tmp778 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp779 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations765->flags, $tmp778);
        annotations765->flags = $tmp779;
    }
    }
    panda$collections$Array* $tmp783 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp783);
    panda$collections$Array* $tmp782 = $tmp783;
    panda$collections$Array* $tmp781 = $tmp782;
    parameters780 = $tmp781;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp781));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp782));
    {
        ITable* $tmp787 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
        while ($tmp787->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp787 = $tmp787->next;
        }
        $fn789 $tmp788 = $tmp787->methods[0];
        panda$collections$Iterator* $tmp790 = $tmp788(((panda$collections$Iterable*) p_rawParameters));
        panda$collections$Iterator* $tmp786 = $tmp790;
        panda$collections$Iterator* $tmp785 = $tmp786;
        Iter$295$9784 = $tmp785;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp785));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp786));
        $l791:;
        ITable* $tmp794 = Iter$295$9784->$class->itable;
        while ($tmp794->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp794 = $tmp794->next;
        }
        $fn796 $tmp795 = $tmp794->methods[0];
        panda$core$Bit $tmp797 = $tmp795(Iter$295$9784);
        panda$core$Bit $tmp798 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp797);
        bool $tmp793 = $tmp798.value;
        if (!$tmp793) goto $l792;
        {
            ITable* $tmp802 = Iter$295$9784->$class->itable;
            while ($tmp802->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp802 = $tmp802->next;
            }
            $fn804 $tmp803 = $tmp802->methods[1];
            panda$core$Object* $tmp805 = $tmp803(Iter$295$9784);
            panda$core$Object* $tmp801 = $tmp805;
            org$pandalanguage$pandac$ASTNode* $tmp800 = ((org$pandalanguage$pandac$ASTNode*) $tmp801);
            p799 = $tmp800;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp800));
            panda$core$Panda$unref$panda$core$Object($tmp801);
            {
                $match$296_13806 = p799;
                panda$core$Bit $tmp807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$296_13806->$rawValue, ((panda$core$Int64) { 28 }));
                if ($tmp807.value) {
                {
                    panda$core$String** $tmp809 = ((panda$core$String**) ((char*) $match$296_13806->$data + 16));
                    name808 = *$tmp809;
                    org$pandalanguage$pandac$ASTNode** $tmp811 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$296_13806->$data + 24));
                    type810 = *$tmp811;
                    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp813 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                    org$pandalanguage$pandac$Type* $tmp815 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type810);
                    org$pandalanguage$pandac$Type* $tmp814 = $tmp815;
                    org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp813, name808, $tmp814);
                    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp812 = $tmp813;
                    panda$collections$Array$add$panda$collections$Array$T(parameters780, ((panda$core$Object*) $tmp812));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp814));
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p799));
        }
        goto $l791;
        $l792:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$295$9784));
    }
    memset(&returnType816, 0, sizeof(returnType816));
    if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
    {
        {
            org$pandalanguage$pandac$Type* $tmp817 = returnType816;
            org$pandalanguage$pandac$Type* $tmp820 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
            org$pandalanguage$pandac$Type* $tmp819 = $tmp820;
            org$pandalanguage$pandac$Type* $tmp818 = $tmp819;
            returnType816 = $tmp818;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp818));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp819));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp817));
        }
    }
    }
    else {
    {
        {
            org$pandalanguage$pandac$Type* $tmp821 = returnType816;
            org$pandalanguage$pandac$Type* $tmp824 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp823 = $tmp824;
            org$pandalanguage$pandac$Type* $tmp822 = $tmp823;
            returnType816 = $tmp822;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp822));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp823));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp821));
        }
    }
    }
    panda$core$Bit $tmp826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
    bool $tmp825 = $tmp826.value;
    if (!$tmp825) goto $l827;
    org$pandalanguage$pandac$Type* $tmp829 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$Type* $tmp828 = $tmp829;
    panda$core$Bit $tmp830 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType816, $tmp828);
    $tmp825 = $tmp830.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp828));
    $l827:;
    panda$core$Bit $tmp831 = { $tmp825 };
    if ($tmp831.value) {
    {
        panda$core$Object* $tmp834 = (($fn833) self->compiler->$class->vtable[2])(self->compiler);
        panda$core$Object* $tmp832 = $tmp834;
        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp832), p_position, &$s835);
        panda$core$Panda$unref$panda$core$Object($tmp832);
    }
    }
    bool $tmp836 = ((panda$core$Bit) { p_statements != NULL }).value;
    if (!$tmp836) goto $l837;
    panda$core$Bit $tmp838 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations765, p_statements);
    $tmp836 = $tmp838.value;
    $l837:;
    panda$core$Bit $tmp839 = { $tmp836 };
    if ($tmp839.value) {
    {
        panda$core$Int64 $tmp840 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp841 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations765->flags, $tmp840);
        annotations765->flags = $tmp841;
    }
    }
    if (((panda$core$Bit) { p_statements == NULL }).value) {
    {
        panda$core$Bit $tmp842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp842.value) {
        {
            panda$core$Int64 $tmp843 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp844 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations765->flags, $tmp843);
            annotations765->flags = $tmp844;
        }
        }
        else {
        panda$core$Int64 $tmp845 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp846 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations765->flags, $tmp845);
        panda$core$Bit $tmp847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp846, ((panda$core$Int64) { 0 }));
        if ($tmp847.value) {
        {
            panda$core$Object* $tmp850 = (($fn849) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp848 = $tmp850;
            panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s853, p_name);
            panda$core$String* $tmp852 = $tmp854;
            panda$core$String* $tmp856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp852, &$s855);
            panda$core$String* $tmp851 = $tmp856;
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp848), p_position, $tmp851);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp851));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp852));
            panda$core$Panda$unref$panda$core$Object($tmp848);
        }
        }
        }
    }
    }
    {
        org$pandalanguage$pandac$MethodDecl* $tmp860 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp860, p_owner, p_position, doccomment754, annotations765, p_kind, p_name, parameters780, returnType816, p_statements);
        org$pandalanguage$pandac$MethodDecl* $tmp859 = $tmp860;
        org$pandalanguage$pandac$MethodDecl* $tmp858 = $tmp859;
        tmp5857 = $tmp858;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp858));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp859));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations765));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters780));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType816));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment754));
        }
        org$pandalanguage$pandac$MethodDecl* $tmp861 = tmp5857;
        return $tmp861;
    }
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$329_9862;
    org$pandalanguage$pandac$Position position864;
    org$pandalanguage$pandac$ASTNode* dc866;
    panda$collections$ImmutableArray* annotations868;
    org$pandalanguage$pandac$ASTNode* varDecl870;
    org$pandalanguage$pandac$Position position873;
    org$pandalanguage$pandac$ASTNode* dc875;
    panda$collections$ImmutableArray* annotations877;
    org$pandalanguage$pandac$MethodDecl$Kind kind879;
    panda$core$String* name881;
    panda$collections$ImmutableArray* parameters883;
    org$pandalanguage$pandac$ASTNode* rawReturnType885;
    panda$collections$ImmutableArray* statements887;
    org$pandalanguage$pandac$MethodDecl* m889;
    org$pandalanguage$pandac$Position position894;
    org$pandalanguage$pandac$ASTNode* dc896;
    panda$collections$ImmutableArray* annotations898;
    org$pandalanguage$pandac$ClassDecl$Kind kind900;
    panda$core$String* name902;
    panda$collections$ImmutableArray* generics904;
    panda$collections$ImmutableArray* supertypes906;
    panda$collections$ImmutableArray* members908;
    org$pandalanguage$pandac$ClassDecl* inner910;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp921;
    org$pandalanguage$pandac$Position position928;
    org$pandalanguage$pandac$ASTNode* dc930;
    panda$core$String* name932;
    panda$collections$ImmutableArray* fields934;
    {
        $match$329_9862 = p_node;
        panda$core$Bit $tmp863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_9862->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp863.value) {
        {
            org$pandalanguage$pandac$Position* $tmp865 = ((org$pandalanguage$pandac$Position*) ((char*) $match$329_9862->$data + 0));
            position864 = *$tmp865;
            org$pandalanguage$pandac$ASTNode** $tmp867 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_9862->$data + 16));
            dc866 = *$tmp867;
            panda$collections$ImmutableArray** $tmp869 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9862->$data + 24));
            annotations868 = *$tmp869;
            org$pandalanguage$pandac$ASTNode** $tmp871 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_9862->$data + 32));
            varDecl870 = *$tmp871;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position864, dc866, annotations868, varDecl870);
        }
        }
        else {
        panda$core$Bit $tmp872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_9862->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp872.value) {
        {
            org$pandalanguage$pandac$Position* $tmp874 = ((org$pandalanguage$pandac$Position*) ((char*) $match$329_9862->$data + 0));
            position873 = *$tmp874;
            org$pandalanguage$pandac$ASTNode** $tmp876 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_9862->$data + 16));
            dc875 = *$tmp876;
            panda$collections$ImmutableArray** $tmp878 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9862->$data + 24));
            annotations877 = *$tmp878;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp880 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$329_9862->$data + 32));
            kind879 = *$tmp880;
            panda$core$String** $tmp882 = ((panda$core$String**) ((char*) $match$329_9862->$data + 40));
            name881 = *$tmp882;
            panda$collections$ImmutableArray** $tmp884 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9862->$data + 48));
            parameters883 = *$tmp884;
            org$pandalanguage$pandac$ASTNode** $tmp886 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_9862->$data + 56));
            rawReturnType885 = *$tmp886;
            panda$collections$ImmutableArray** $tmp888 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9862->$data + 64));
            statements887 = *$tmp888;
            org$pandalanguage$pandac$MethodDecl* $tmp892 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position873, dc875, annotations877, kind879, name881, parameters883, rawReturnType885, statements887);
            org$pandalanguage$pandac$MethodDecl* $tmp891 = $tmp892;
            org$pandalanguage$pandac$MethodDecl* $tmp890 = $tmp891;
            m889 = $tmp890;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp890));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp891));
            if (((panda$core$Bit) { m889 != NULL }).value) {
            {
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m889));
                panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m889));
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m889));
        }
        }
        else {
        panda$core$Bit $tmp893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_9862->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp893.value) {
        {
            org$pandalanguage$pandac$Position* $tmp895 = ((org$pandalanguage$pandac$Position*) ((char*) $match$329_9862->$data + 0));
            position894 = *$tmp895;
            org$pandalanguage$pandac$ASTNode** $tmp897 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_9862->$data + 16));
            dc896 = *$tmp897;
            panda$collections$ImmutableArray** $tmp899 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9862->$data + 24));
            annotations898 = *$tmp899;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp901 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$329_9862->$data + 32));
            kind900 = *$tmp901;
            panda$core$String** $tmp903 = ((panda$core$String**) ((char*) $match$329_9862->$data + 40));
            name902 = *$tmp903;
            panda$collections$ImmutableArray** $tmp905 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9862->$data + 48));
            generics904 = *$tmp905;
            panda$collections$ImmutableArray** $tmp907 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9862->$data + 56));
            supertypes906 = *$tmp907;
            panda$collections$ImmutableArray** $tmp909 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9862->$data + 64));
            members908 = *$tmp909;
            org$pandalanguage$pandac$ClassDecl* $tmp913 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, ((org$pandalanguage$pandac$Symbol*) p_cl)->name, position894, dc896, annotations898, kind900, name902, generics904, supertypes906, members908);
            org$pandalanguage$pandac$ClassDecl* $tmp912 = $tmp913;
            org$pandalanguage$pandac$ClassDecl* $tmp911 = $tmp912;
            inner910 = $tmp911;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp911));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
            if (((panda$core$Bit) { inner910 != NULL }).value) {
            {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp914 = inner910->owner;
                    org$pandalanguage$pandac$ClassDecl* $tmp915 = p_cl;
                    inner910->owner = $tmp915;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp915));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp914));
                }
                panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner910));
                panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_cl)->name, &$s917);
                panda$core$String* $tmp916 = $tmp918;
                panda$core$Bit $tmp919 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) inner910)->name, $tmp916);
                PANDA_ASSERT($tmp919.value);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
                panda$core$Int64 $tmp922 = panda$core$String$length$R$panda$core$Int64(((org$pandalanguage$pandac$Symbol*) p_cl)->name);
                panda$core$Int64 $tmp923 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp922, ((panda$core$Int64) { 1 }));
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp921, ((panda$core$Int64$nullable) { $tmp923, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$core$String* $tmp924 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner910)->name, $tmp921);
                panda$core$String* $tmp920 = $tmp924;
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner910), $tmp920);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp920));
                panda$core$String* $tmp926 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                panda$core$String* $tmp925 = $tmp926;
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol$panda$core$String(inner910->symbolTable, ((org$pandalanguage$pandac$Symbol*) p_cl), $tmp925);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp925));
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner910));
        }
        }
        else {
        panda$core$Bit $tmp927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_9862->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp927.value) {
        {
            org$pandalanguage$pandac$Position* $tmp929 = ((org$pandalanguage$pandac$Position*) ((char*) $match$329_9862->$data + 0));
            position928 = *$tmp929;
            org$pandalanguage$pandac$ASTNode** $tmp931 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$329_9862->$data + 16));
            dc930 = *$tmp931;
            panda$core$String** $tmp933 = ((panda$core$String**) ((char*) $match$329_9862->$data + 24));
            name932 = *$tmp933;
            panda$collections$ImmutableArray** $tmp935 = ((panda$collections$ImmutableArray**) ((char*) $match$329_9862->$data + 32));
            fields934 = *$tmp935;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position928, dc930, name932, fields934);
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
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment936;
    org$pandalanguage$pandac$ASTNode* $match$367_13939;
    org$pandalanguage$pandac$Position position941;
    panda$core$String* text943;
    panda$collections$Array* fields947;
    panda$collections$Iterator* Iter$375$9951;
    org$pandalanguage$pandac$ASTNode* t966;
    org$pandalanguage$pandac$ChoiceEntry* entry975;
    panda$core$Bit found980;
    panda$collections$Iterator* Iter$383$16981;
    org$pandalanguage$pandac$MethodDecl* m996;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1013;
    panda$collections$Array* parameters1043;
    panda$collections$Array* statements1052;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1061;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1065;
    org$pandalanguage$pandac$parser$Token$Kind $tmp1098;
    org$pandalanguage$pandac$MethodDecl* synthetic1115;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1121;
    memset(&doccomment936, 0, sizeof(doccomment936));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            panda$core$String* $tmp937 = doccomment936;
            panda$core$String* $tmp938 = NULL;
            doccomment936 = $tmp938;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp938));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp937));
        }
    }
    }
    else {
    {
        {
            $match$367_13939 = p_rawDoccomment;
            panda$core$Bit $tmp940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$367_13939->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp940.value) {
            {
                org$pandalanguage$pandac$Position* $tmp942 = ((org$pandalanguage$pandac$Position*) ((char*) $match$367_13939->$data + 0));
                position941 = *$tmp942;
                panda$core$String** $tmp944 = ((panda$core$String**) ((char*) $match$367_13939->$data + 16));
                text943 = *$tmp944;
                {
                    panda$core$String* $tmp945 = doccomment936;
                    panda$core$String* $tmp946 = text943;
                    doccomment936 = $tmp946;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp946));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp945));
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
    panda$collections$Array* $tmp950 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp950);
    panda$collections$Array* $tmp949 = $tmp950;
    panda$collections$Array* $tmp948 = $tmp949;
    fields947 = $tmp948;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp948));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp949));
    {
        ITable* $tmp954 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
        while ($tmp954->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp954 = $tmp954->next;
        }
        $fn956 $tmp955 = $tmp954->methods[0];
        panda$collections$Iterator* $tmp957 = $tmp955(((panda$collections$Iterable*) p_rawFields));
        panda$collections$Iterator* $tmp953 = $tmp957;
        panda$collections$Iterator* $tmp952 = $tmp953;
        Iter$375$9951 = $tmp952;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp952));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp953));
        $l958:;
        ITable* $tmp961 = Iter$375$9951->$class->itable;
        while ($tmp961->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp961 = $tmp961->next;
        }
        $fn963 $tmp962 = $tmp961->methods[0];
        panda$core$Bit $tmp964 = $tmp962(Iter$375$9951);
        panda$core$Bit $tmp965 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp964);
        bool $tmp960 = $tmp965.value;
        if (!$tmp960) goto $l959;
        {
            ITable* $tmp969 = Iter$375$9951->$class->itable;
            while ($tmp969->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp969 = $tmp969->next;
            }
            $fn971 $tmp970 = $tmp969->methods[1];
            panda$core$Object* $tmp972 = $tmp970(Iter$375$9951);
            panda$core$Object* $tmp968 = $tmp972;
            org$pandalanguage$pandac$ASTNode* $tmp967 = ((org$pandalanguage$pandac$ASTNode*) $tmp968);
            t966 = $tmp967;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp967));
            panda$core$Panda$unref$panda$core$Object($tmp968);
            org$pandalanguage$pandac$Type* $tmp974 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t966);
            org$pandalanguage$pandac$Type* $tmp973 = $tmp974;
            panda$collections$Array$add$panda$collections$Array$T(fields947, ((panda$core$Object*) $tmp973));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp973));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t966));
        }
        goto $l958;
        $l959:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$375$9951));
    }
    org$pandalanguage$pandac$ChoiceEntry* $tmp978 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(97, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
    panda$core$Int64 $tmp979 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
    org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp978, p_cl, p_position, p_name, doccomment936, $tmp979, ((panda$collections$ListView*) fields947));
    org$pandalanguage$pandac$ChoiceEntry* $tmp977 = $tmp978;
    org$pandalanguage$pandac$ChoiceEntry* $tmp976 = $tmp977;
    entry975 = $tmp976;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp976));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp977));
    panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry975));
    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry975));
    found980 = ((panda$core$Bit) { false });
    {
        ITable* $tmp984 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
        while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp984 = $tmp984->next;
        }
        $fn986 $tmp985 = $tmp984->methods[0];
        panda$collections$Iterator* $tmp987 = $tmp985(((panda$collections$Iterable*) p_cl->methods));
        panda$collections$Iterator* $tmp983 = $tmp987;
        panda$collections$Iterator* $tmp982 = $tmp983;
        Iter$383$16981 = $tmp982;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp982));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
        $l988:;
        ITable* $tmp991 = Iter$383$16981->$class->itable;
        while ($tmp991->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp991 = $tmp991->next;
        }
        $fn993 $tmp992 = $tmp991->methods[0];
        panda$core$Bit $tmp994 = $tmp992(Iter$383$16981);
        panda$core$Bit $tmp995 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp994);
        bool $tmp990 = $tmp995.value;
        if (!$tmp990) goto $l989;
        {
            ITable* $tmp999 = Iter$383$16981->$class->itable;
            while ($tmp999->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp999 = $tmp999->next;
            }
            $fn1001 $tmp1000 = $tmp999->methods[1];
            panda$core$Object* $tmp1002 = $tmp1000(Iter$383$16981);
            panda$core$Object* $tmp998 = $tmp1002;
            org$pandalanguage$pandac$MethodDecl* $tmp997 = ((org$pandalanguage$pandac$MethodDecl*) $tmp998);
            m996 = $tmp997;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp997));
            panda$core$Panda$unref$panda$core$Object($tmp998);
            panda$core$Bit $tmp1003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m996->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1003.value);
            panda$core$Int64 $tmp1004 = panda$collections$Array$get_count$R$panda$core$Int64(m996->parameters);
            panda$core$Int64 $tmp1005 = panda$collections$Array$get_count$R$panda$core$Int64(fields947);
            panda$core$Int64 $tmp1006 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1005, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp1007 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1004, $tmp1006);
            if ($tmp1007.value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m996));
                    goto $l988;
                }
            }
            }
            panda$core$Object* $tmp1009 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m996->parameters, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1008 = $tmp1009;
            org$pandalanguage$pandac$Type* $tmp1011 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$Type* $tmp1010 = $tmp1011;
            panda$core$Bit $tmp1012 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1008)->type, $tmp1010);
            PANDA_ASSERT($tmp1012.value);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1010));
            panda$core$Panda$unref$panda$core$Object($tmp1008);
            panda$core$Int64 $tmp1014 = panda$collections$Array$get_count$R$panda$core$Int64(fields947);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1013, ((panda$core$Int64) { 0 }), $tmp1014, ((panda$core$Bit) { false }));
            int64_t $tmp1016 = $tmp1013.min.value;
            panda$core$Int64 i1015 = { $tmp1016 };
            int64_t $tmp1018 = $tmp1013.max.value;
            bool $tmp1019 = $tmp1013.inclusive.value;
            if ($tmp1019) goto $l1026; else goto $l1027;
            $l1026:;
            if ($tmp1016 <= $tmp1018) goto $l1020; else goto $l1022;
            $l1027:;
            if ($tmp1016 < $tmp1018) goto $l1020; else goto $l1022;
            $l1020:;
            {
                panda$core$Object* $tmp1029 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields947, i1015);
                panda$core$Object* $tmp1028 = $tmp1029;
                panda$core$Int64 $tmp1031 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i1015, ((panda$core$Int64) { 1 }));
                panda$core$Object* $tmp1032 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(m996->parameters, $tmp1031);
                panda$core$Object* $tmp1030 = $tmp1032;
                panda$core$Bit $tmp1033 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1028), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1030)->type);
                panda$core$Panda$unref$panda$core$Object($tmp1030);
                panda$core$Panda$unref$panda$core$Object($tmp1028);
                if ($tmp1033.value) {
                {
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m996));
                        goto $l988;
                    }
                }
                }
            }
            $l1023:;
            int64_t $tmp1035 = $tmp1018 - i1015.value;
            if ($tmp1019) goto $l1036; else goto $l1037;
            $l1036:;
            if ((uint64_t) $tmp1035 >= 1) goto $l1034; else goto $l1022;
            $l1037:;
            if ((uint64_t) $tmp1035 > 1) goto $l1034; else goto $l1022;
            $l1034:;
            i1015.value += 1;
            goto $l1020;
            $l1022:;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1040 = entry975->initMethod;
                org$pandalanguage$pandac$MethodDecl* $tmp1041 = m996;
                entry975->initMethod = $tmp1041;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1041));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1040));
            }
            found980 = ((panda$core$Bit) { true });
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m996));
                goto $l989;
            }
        }
        goto $l988;
        $l989:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$383$16981));
    }
    panda$core$Bit $tmp1042 = panda$core$Bit$$NOT$R$panda$core$Bit(found980);
    if ($tmp1042.value) {
    {
        panda$collections$Array* $tmp1046 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1046);
        panda$collections$Array* $tmp1045 = $tmp1046;
        panda$collections$Array* $tmp1044 = $tmp1045;
        parameters1043 = $tmp1044;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1044));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1045));
        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1048 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
        org$pandalanguage$pandac$Type* $tmp1051 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$Type* $tmp1050 = $tmp1051;
        org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1048, &$s1049, $tmp1050);
        org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1047 = $tmp1048;
        panda$collections$Array$add$panda$collections$Array$T(parameters1043, ((panda$core$Object*) $tmp1047));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1047));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1050));
        panda$collections$Array* $tmp1055 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1055);
        panda$collections$Array* $tmp1054 = $tmp1055;
        panda$collections$Array* $tmp1053 = $tmp1054;
        statements1052 = $tmp1053;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1053));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1054));
        org$pandalanguage$pandac$ASTNode* $tmp1057 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode* $tmp1059 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1059, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s1060);
        org$pandalanguage$pandac$ASTNode* $tmp1058 = $tmp1059;
        org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1061, ((panda$core$Int64) { 73 }));
        org$pandalanguage$pandac$ASTNode* $tmp1063 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1063, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, &$s1064);
        org$pandalanguage$pandac$ASTNode* $tmp1062 = $tmp1063;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1057, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp1058, $tmp1061, $tmp1062);
        org$pandalanguage$pandac$ASTNode* $tmp1056 = $tmp1057;
        panda$collections$Array$add$panda$collections$Array$T(statements1052, ((panda$core$Object*) $tmp1056));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1056));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1062));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1058));
        panda$core$Int64 $tmp1066 = panda$collections$Array$get_count$R$panda$core$Int64(fields947);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1065, ((panda$core$Int64) { 0 }), $tmp1066, ((panda$core$Bit) { false }));
        int64_t $tmp1068 = $tmp1065.min.value;
        panda$core$Int64 i1067 = { $tmp1068 };
        int64_t $tmp1070 = $tmp1065.max.value;
        bool $tmp1071 = $tmp1065.inclusive.value;
        if ($tmp1071) goto $l1078; else goto $l1079;
        $l1078:;
        if ($tmp1068 <= $tmp1070) goto $l1072; else goto $l1074;
        $l1079:;
        if ($tmp1068 < $tmp1070) goto $l1072; else goto $l1074;
        $l1072:;
        {
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1081 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
            panda$core$Int64$wrapper* $tmp1086;
            $tmp1086 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1086->value = i1067;
            panda$core$Object* $tmp1085 = ((panda$core$Object*) $tmp1086);
            panda$core$String* $tmp1087 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1084, $tmp1085);
            panda$core$String* $tmp1083 = $tmp1087;
            panda$core$String* $tmp1089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1083, &$s1088);
            panda$core$String* $tmp1082 = $tmp1089;
            panda$core$Object* $tmp1091 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(fields947, i1067);
            panda$core$Object* $tmp1090 = $tmp1091;
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1081, $tmp1082, ((org$pandalanguage$pandac$Type*) $tmp1090));
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1080 = $tmp1081;
            panda$collections$Array$add$panda$collections$Array$T(parameters1043, ((panda$core$Object*) $tmp1080));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1080));
            panda$core$Panda$unref$panda$core$Object($tmp1090);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1082));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1083));
            panda$core$Panda$unref$panda$core$Object($tmp1085);
            org$pandalanguage$pandac$ASTNode* $tmp1093 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode* $tmp1095 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode* $tmp1097 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position($tmp1097, ((panda$core$Int64) { 33 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position);
            org$pandalanguage$pandac$ASTNode* $tmp1096 = $tmp1097;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64($tmp1095, ((panda$core$Int64) { 8 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp1096, entry975, i1067);
            org$pandalanguage$pandac$ASTNode* $tmp1094 = $tmp1095;
            org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(&$tmp1098, ((panda$core$Int64) { 73 }));
            org$pandalanguage$pandac$ASTNode* $tmp1100 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
            panda$core$Int64$wrapper* $tmp1105;
            $tmp1105 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1105->value = i1067;
            panda$core$Object* $tmp1104 = ((panda$core$Object*) $tmp1105);
            panda$core$String* $tmp1106 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1103, $tmp1104);
            panda$core$String* $tmp1102 = $tmp1106;
            panda$core$String* $tmp1108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1102, &$s1107);
            panda$core$String* $tmp1101 = $tmp1108;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp1100, ((panda$core$Int64) { 18 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp1101);
            org$pandalanguage$pandac$ASTNode* $tmp1099 = $tmp1100;
            org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode($tmp1093, ((panda$core$Int64) { 2 }), ((org$pandalanguage$pandac$Symbol*) p_cl)->position, $tmp1094, $tmp1098, $tmp1099);
            org$pandalanguage$pandac$ASTNode* $tmp1092 = $tmp1093;
            panda$collections$Array$add$panda$collections$Array$T(statements1052, ((panda$core$Object*) $tmp1092));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1092));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1099));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1101));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1102));
            panda$core$Panda$unref$panda$core$Object($tmp1104);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1094));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1096));
        }
        $l1075:;
        int64_t $tmp1110 = $tmp1070 - i1067.value;
        if ($tmp1071) goto $l1111; else goto $l1112;
        $l1111:;
        if ((uint64_t) $tmp1110 >= 1) goto $l1109; else goto $l1074;
        $l1112:;
        if ((uint64_t) $tmp1110 > 1) goto $l1109; else goto $l1074;
        $l1109:;
        i1067.value += 1;
        goto $l1072;
        $l1074:;
        org$pandalanguage$pandac$MethodDecl* $tmp1118 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp1120 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp1120);
        org$pandalanguage$pandac$Annotations* $tmp1119 = $tmp1120;
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1121, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$Type* $tmp1124 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$Type* $tmp1123 = $tmp1124;
        panda$collections$ImmutableArray* $tmp1126 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(statements1052);
        panda$collections$ImmutableArray* $tmp1125 = $tmp1126;
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1118, p_cl, ((org$pandalanguage$pandac$Symbol*) p_cl)->position, NULL, $tmp1119, $tmp1121, &$s1122, parameters1043, $tmp1123, $tmp1125);
        org$pandalanguage$pandac$MethodDecl* $tmp1117 = $tmp1118;
        org$pandalanguage$pandac$MethodDecl* $tmp1116 = $tmp1117;
        synthetic1115 = $tmp1116;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1116));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1117));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1125));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1123));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1119));
        {
            org$pandalanguage$pandac$MethodDecl* $tmp1127 = entry975->initMethod;
            org$pandalanguage$pandac$MethodDecl* $tmp1128 = synthetic1115;
            entry975->initMethod = $tmp1128;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1128));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1127));
        }
        panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) synthetic1115));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) synthetic1115));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1043));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) statements1052));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) synthetic1115));
        }
    }
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields947));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry975));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment936));
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1129;
    panda$core$String* doccomment1146;
    org$pandalanguage$pandac$ASTNode* $match$442_131149;
    org$pandalanguage$pandac$Position position1151;
    panda$core$String* text1153;
    org$pandalanguage$pandac$Annotations* annotations1157;
    panda$collections$Array* parameters1161;
    panda$collections$Iterator* Iter$452$131165;
    org$pandalanguage$pandac$ASTNode* p1180;
    panda$core$String* name1187;
    org$pandalanguage$pandac$Type* bound1188;
    org$pandalanguage$pandac$ASTNode* $match$455_171189;
    panda$core$String* id1191;
    panda$core$String* id1200;
    org$pandalanguage$pandac$ASTNode* type1202;
    panda$collections$Array* supertypes1219;
    panda$collections$Iterator* Iter$476$131228;
    org$pandalanguage$pandac$ASTNode* s1243;
    org$pandalanguage$pandac$ClassDecl* result1252;
    org$pandalanguage$pandac$FieldDecl* rawValue1263;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1269;
    org$pandalanguage$pandac$FieldDecl* data1273;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1279;
    panda$collections$Iterator* Iter$493$91283;
    org$pandalanguage$pandac$ASTNode* m1298;
    org$pandalanguage$pandac$ASTNode* $match$494_131305;
    org$pandalanguage$pandac$Position mPosition1307;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1309;
    org$pandalanguage$pandac$ClassDecl$Kind $match$497_251312;
    panda$core$Bit foundInit1324;
    panda$core$Bit foundCleanup1325;
    panda$collections$Iterator* Iter$512$91326;
    org$pandalanguage$pandac$MethodDecl* m1341;
    org$pandalanguage$pandac$MethodDecl* defaultInit1371;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1377;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1399;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1406;
    panda$core$Bit haveFields1415;
    panda$collections$Iterator* Iter$540$131416;
    org$pandalanguage$pandac$ChoiceEntry* e1431;
    org$pandalanguage$pandac$ClassDecl* tmp61450;
    memset(&fullName1129, 0, sizeof(fullName1129));
    panda$core$Bit $tmp1131 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1130);
    if ($tmp1131.value) {
    {
        {
            panda$core$String* $tmp1132 = fullName1129;
            panda$core$String* $tmp1138 = panda$core$String$convert$R$panda$core$String(p_contextName);
            panda$core$String* $tmp1137 = $tmp1138;
            panda$core$String* $tmp1140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1137, &$s1139);
            panda$core$String* $tmp1136 = $tmp1140;
            panda$core$String* $tmp1141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1136, p_name);
            panda$core$String* $tmp1135 = $tmp1141;
            panda$core$String* $tmp1143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1135, &$s1142);
            panda$core$String* $tmp1134 = $tmp1143;
            panda$core$String* $tmp1133 = $tmp1134;
            fullName1129 = $tmp1133;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1133));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1134));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1135));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1136));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1137));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1132));
        }
    }
    }
    else {
    {
        {
            panda$core$String* $tmp1144 = fullName1129;
            panda$core$String* $tmp1145 = p_name;
            fullName1129 = $tmp1145;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1145));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1144));
        }
    }
    }
    memset(&doccomment1146, 0, sizeof(doccomment1146));
    if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
    {
        {
            panda$core$String* $tmp1147 = doccomment1146;
            panda$core$String* $tmp1148 = NULL;
            doccomment1146 = $tmp1148;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1148));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1147));
        }
    }
    }
    else {
    {
        {
            $match$442_131149 = p_rawDoccomment;
            panda$core$Bit $tmp1150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$442_131149->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp1150.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1152 = ((org$pandalanguage$pandac$Position*) ((char*) $match$442_131149->$data + 0));
                position1151 = *$tmp1152;
                panda$core$String** $tmp1154 = ((panda$core$String**) ((char*) $match$442_131149->$data + 16));
                text1153 = *$tmp1154;
                {
                    panda$core$String* $tmp1155 = doccomment1146;
                    panda$core$String* $tmp1156 = text1153;
                    doccomment1146 = $tmp1156;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1156));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1155));
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
    org$pandalanguage$pandac$Annotations* $tmp1160 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
    org$pandalanguage$pandac$Annotations* $tmp1159 = $tmp1160;
    org$pandalanguage$pandac$Annotations* $tmp1158 = $tmp1159;
    annotations1157 = $tmp1158;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1158));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1159));
    panda$collections$Array* $tmp1164 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1164);
    panda$collections$Array* $tmp1163 = $tmp1164;
    panda$collections$Array* $tmp1162 = $tmp1163;
    parameters1161 = $tmp1162;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1162));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1163));
    if (((panda$core$Bit) { p_generics != NULL }).value) {
    {
        {
            ITable* $tmp1168 = ((panda$collections$Iterable*) p_generics)->$class->itable;
            while ($tmp1168->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1168 = $tmp1168->next;
            }
            $fn1170 $tmp1169 = $tmp1168->methods[0];
            panda$collections$Iterator* $tmp1171 = $tmp1169(((panda$collections$Iterable*) p_generics));
            panda$collections$Iterator* $tmp1167 = $tmp1171;
            panda$collections$Iterator* $tmp1166 = $tmp1167;
            Iter$452$131165 = $tmp1166;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1166));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1167));
            $l1172:;
            ITable* $tmp1175 = Iter$452$131165->$class->itable;
            while ($tmp1175->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1175 = $tmp1175->next;
            }
            $fn1177 $tmp1176 = $tmp1175->methods[0];
            panda$core$Bit $tmp1178 = $tmp1176(Iter$452$131165);
            panda$core$Bit $tmp1179 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1178);
            bool $tmp1174 = $tmp1179.value;
            if (!$tmp1174) goto $l1173;
            {
                ITable* $tmp1183 = Iter$452$131165->$class->itable;
                while ($tmp1183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1183 = $tmp1183->next;
                }
                $fn1185 $tmp1184 = $tmp1183->methods[1];
                panda$core$Object* $tmp1186 = $tmp1184(Iter$452$131165);
                panda$core$Object* $tmp1182 = $tmp1186;
                org$pandalanguage$pandac$ASTNode* $tmp1181 = ((org$pandalanguage$pandac$ASTNode*) $tmp1182);
                p1180 = $tmp1181;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1181));
                panda$core$Panda$unref$panda$core$Object($tmp1182);
                memset(&name1187, 0, sizeof(name1187));
                memset(&bound1188, 0, sizeof(bound1188));
                {
                    $match$455_171189 = p1180;
                    panda$core$Bit $tmp1190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$455_171189->$rawValue, ((panda$core$Int64) { 18 }));
                    if ($tmp1190.value) {
                    {
                        panda$core$String** $tmp1192 = ((panda$core$String**) ((char*) $match$455_171189->$data + 16));
                        id1191 = *$tmp1192;
                        {
                            panda$core$String* $tmp1193 = name1187;
                            panda$core$String* $tmp1194 = id1191;
                            name1187 = $tmp1194;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1194));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1193));
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp1195 = bound1188;
                            org$pandalanguage$pandac$Type* $tmp1198 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                            org$pandalanguage$pandac$Type* $tmp1197 = $tmp1198;
                            org$pandalanguage$pandac$Type* $tmp1196 = $tmp1197;
                            bound1188 = $tmp1196;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1196));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1197));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1195));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$455_171189->$rawValue, ((panda$core$Int64) { 37 }));
                    if ($tmp1199.value) {
                    {
                        panda$core$String** $tmp1201 = ((panda$core$String**) ((char*) $match$455_171189->$data + 16));
                        id1200 = *$tmp1201;
                        org$pandalanguage$pandac$ASTNode** $tmp1203 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$455_171189->$data + 24));
                        type1202 = *$tmp1203;
                        {
                            panda$core$String* $tmp1204 = name1187;
                            panda$core$String* $tmp1205 = id1200;
                            name1187 = $tmp1205;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1205));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1204));
                        }
                        {
                            org$pandalanguage$pandac$Type* $tmp1206 = bound1188;
                            org$pandalanguage$pandac$Type* $tmp1209 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1202);
                            org$pandalanguage$pandac$Type* $tmp1208 = $tmp1209;
                            org$pandalanguage$pandac$Type* $tmp1207 = $tmp1208;
                            bound1188 = $tmp1207;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1207));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1208));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1206));
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
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1211 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                org$pandalanguage$pandac$Position $tmp1213 = (($fn1212) p1180->$class->vtable[2])(p1180);
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1211, $tmp1213, fullName1129, name1187, bound1188);
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1210 = $tmp1211;
                panda$collections$Array$add$panda$collections$Array$T(parameters1161, ((panda$core$Object*) $tmp1210));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1210));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1188));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1180));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1187));
                }
            }
            goto $l1172;
            $l1173:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$452$131165));
        }
        panda$core$Bit $tmp1214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1214.value) {
        {
            panda$core$Object* $tmp1217 = (($fn1216) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp1215 = $tmp1217;
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1215), p_position, &$s1218);
            panda$core$Panda$unref$panda$core$Object($tmp1215);
        }
        }
    }
    }
    panda$collections$Array* $tmp1222 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp1222);
    panda$collections$Array* $tmp1221 = $tmp1222;
    panda$collections$Array* $tmp1220 = $tmp1221;
    supertypes1219 = $tmp1220;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1220));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1221));
    if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
    {
        panda$core$Bit $tmp1223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1223.value) {
        {
            panda$core$Object* $tmp1226 = (($fn1225) self->compiler->$class->vtable[2])(self->compiler);
            panda$core$Object* $tmp1224 = $tmp1226;
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1224), p_position, &$s1227);
            panda$core$Panda$unref$panda$core$Object($tmp1224);
        }
        }
        {
            ITable* $tmp1231 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
            while ($tmp1231->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1231 = $tmp1231->next;
            }
            $fn1233 $tmp1232 = $tmp1231->methods[0];
            panda$collections$Iterator* $tmp1234 = $tmp1232(((panda$collections$Iterable*) p_rawSupertypes));
            panda$collections$Iterator* $tmp1230 = $tmp1234;
            panda$collections$Iterator* $tmp1229 = $tmp1230;
            Iter$476$131228 = $tmp1229;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1229));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1230));
            $l1235:;
            ITable* $tmp1238 = Iter$476$131228->$class->itable;
            while ($tmp1238->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1238 = $tmp1238->next;
            }
            $fn1240 $tmp1239 = $tmp1238->methods[0];
            panda$core$Bit $tmp1241 = $tmp1239(Iter$476$131228);
            panda$core$Bit $tmp1242 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1241);
            bool $tmp1237 = $tmp1242.value;
            if (!$tmp1237) goto $l1236;
            {
                ITable* $tmp1246 = Iter$476$131228->$class->itable;
                while ($tmp1246->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1246 = $tmp1246->next;
                }
                $fn1248 $tmp1247 = $tmp1246->methods[1];
                panda$core$Object* $tmp1249 = $tmp1247(Iter$476$131228);
                panda$core$Object* $tmp1245 = $tmp1249;
                org$pandalanguage$pandac$ASTNode* $tmp1244 = ((org$pandalanguage$pandac$ASTNode*) $tmp1245);
                s1243 = $tmp1244;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1244));
                panda$core$Panda$unref$panda$core$Object($tmp1245);
                org$pandalanguage$pandac$Type* $tmp1251 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1243);
                org$pandalanguage$pandac$Type* $tmp1250 = $tmp1251;
                panda$collections$Array$add$panda$collections$Array$T(supertypes1219, ((panda$core$Object*) $tmp1250));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1250));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1243));
            }
            goto $l1235;
            $l1236:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$476$131228));
        }
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp1255 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(201, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
    panda$core$Object* $tmp1258 = (($fn1257) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp1256 = $tmp1258;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1255, p_source, p_position, p_aliases, doccomment1146, annotations1157, p_kind, fullName1129, ((panda$collections$ListView*) supertypes1219), parameters1161, ((org$pandalanguage$pandac$Compiler*) $tmp1256)->root);
    org$pandalanguage$pandac$ClassDecl* $tmp1254 = $tmp1255;
    org$pandalanguage$pandac$ClassDecl* $tmp1253 = $tmp1254;
    result1252 = $tmp1253;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1253));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1254));
    panda$core$Panda$unref$panda$core$Object($tmp1256);
    panda$core$Object* $tmp1261 = (($fn1260) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp1259 = $tmp1261;
    panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1259)->currentClass, ((panda$core$Object*) result1252));
    panda$core$Panda$unref$panda$core$Object($tmp1259);
    panda$core$Bit $tmp1262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1262.value) {
    {
        org$pandalanguage$pandac$FieldDecl* $tmp1266 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp1268 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp1268);
        org$pandalanguage$pandac$Annotations* $tmp1267 = $tmp1268;
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1269, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp1272 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$Type* $tmp1271 = $tmp1272;
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1266, result1252, ((org$pandalanguage$pandac$Symbol*) result1252)->position, NULL, $tmp1267, $tmp1269, &$s1270, $tmp1271, NULL);
        org$pandalanguage$pandac$FieldDecl* $tmp1265 = $tmp1266;
        org$pandalanguage$pandac$FieldDecl* $tmp1264 = $tmp1265;
        rawValue1263 = $tmp1264;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1264));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1265));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1271));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1267));
        panda$collections$Array$add$panda$collections$Array$T(result1252->fields, ((panda$core$Object*) rawValue1263));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1252->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1263));
        org$pandalanguage$pandac$FieldDecl* $tmp1276 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp1278 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp1278);
        org$pandalanguage$pandac$Annotations* $tmp1277 = $tmp1278;
        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1279, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$Type* $tmp1282 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$Type* $tmp1281 = $tmp1282;
        org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1276, result1252, ((org$pandalanguage$pandac$Symbol*) result1252)->position, NULL, $tmp1277, $tmp1279, &$s1280, $tmp1281, NULL);
        org$pandalanguage$pandac$FieldDecl* $tmp1275 = $tmp1276;
        org$pandalanguage$pandac$FieldDecl* $tmp1274 = $tmp1275;
        data1273 = $tmp1274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1275));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1281));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1277));
        panda$collections$Array$add$panda$collections$Array$T(result1252->fields, ((panda$core$Object*) data1273));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1252->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1273));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1263));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1273));
        }
    }
    }
    {
        ITable* $tmp1286 = ((panda$collections$Iterable*) p_members)->$class->itable;
        while ($tmp1286->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1286 = $tmp1286->next;
        }
        $fn1288 $tmp1287 = $tmp1286->methods[0];
        panda$collections$Iterator* $tmp1289 = $tmp1287(((panda$collections$Iterable*) p_members));
        panda$collections$Iterator* $tmp1285 = $tmp1289;
        panda$collections$Iterator* $tmp1284 = $tmp1285;
        Iter$493$91283 = $tmp1284;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1284));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1285));
        $l1290:;
        ITable* $tmp1293 = Iter$493$91283->$class->itable;
        while ($tmp1293->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1293 = $tmp1293->next;
        }
        $fn1295 $tmp1294 = $tmp1293->methods[0];
        panda$core$Bit $tmp1296 = $tmp1294(Iter$493$91283);
        panda$core$Bit $tmp1297 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1296);
        bool $tmp1292 = $tmp1297.value;
        if (!$tmp1292) goto $l1291;
        {
            ITable* $tmp1301 = Iter$493$91283->$class->itable;
            while ($tmp1301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1301 = $tmp1301->next;
            }
            $fn1303 $tmp1302 = $tmp1301->methods[1];
            panda$core$Object* $tmp1304 = $tmp1302(Iter$493$91283);
            panda$core$Object* $tmp1300 = $tmp1304;
            org$pandalanguage$pandac$ASTNode* $tmp1299 = ((org$pandalanguage$pandac$ASTNode*) $tmp1300);
            m1298 = $tmp1299;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1299));
            panda$core$Panda$unref$panda$core$Object($tmp1300);
            {
                $match$494_131305 = m1298;
                panda$core$Bit $tmp1306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$494_131305->$rawValue, ((panda$core$Int64) { 24 }));
                if ($tmp1306.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1308 = ((org$pandalanguage$pandac$Position*) ((char*) $match$494_131305->$data + 0));
                    mPosition1307 = *$tmp1308;
                    org$pandalanguage$pandac$MethodDecl$Kind* $tmp1310 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$494_131305->$data + 32));
                    methodKind1309 = *$tmp1310;
                    panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1309.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1311.value) {
                    {
                        {
                            $match$497_251312 = p_kind;
                            panda$core$Bit $tmp1313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$497_251312.$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp1313.value) {
                            {
                            }
                            }
                            else {
                            panda$core$Bit $tmp1314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$497_251312.$rawValue, ((panda$core$Int64) { 1 }));
                            if ($tmp1314.value) {
                            {
                                panda$core$Object* $tmp1317 = (($fn1316) self->compiler->$class->vtable[2])(self->compiler);
                                panda$core$Object* $tmp1315 = $tmp1317;
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1315), mPosition1307, &$s1318);
                                panda$core$Panda$unref$panda$core$Object($tmp1315);
                            }
                            }
                            else {
                            panda$core$Bit $tmp1319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$497_251312.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1319.value) {
                            {
                                panda$core$Object* $tmp1322 = (($fn1321) self->compiler->$class->vtable[2])(self->compiler);
                                panda$core$Object* $tmp1320 = $tmp1322;
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1320), mPosition1307, &$s1323);
                                panda$core$Panda$unref$panda$core$Object($tmp1320);
                            }
                            }
                            }
                            }
                        }
                    }
                    }
                }
                }
                else {
                {
                }
                }
            }
            org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1252, m1298);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1298));
        }
        goto $l1290;
        $l1291:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$493$91283));
    }
    foundInit1324 = ((panda$core$Bit) { false });
    foundCleanup1325 = ((panda$core$Bit) { false });
    {
        ITable* $tmp1329 = ((panda$collections$Iterable*) result1252->methods)->$class->itable;
        while ($tmp1329->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1329 = $tmp1329->next;
        }
        $fn1331 $tmp1330 = $tmp1329->methods[0];
        panda$collections$Iterator* $tmp1332 = $tmp1330(((panda$collections$Iterable*) result1252->methods));
        panda$collections$Iterator* $tmp1328 = $tmp1332;
        panda$collections$Iterator* $tmp1327 = $tmp1328;
        Iter$512$91326 = $tmp1327;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1327));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1328));
        $l1333:;
        ITable* $tmp1336 = Iter$512$91326->$class->itable;
        while ($tmp1336->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1336 = $tmp1336->next;
        }
        $fn1338 $tmp1337 = $tmp1336->methods[0];
        panda$core$Bit $tmp1339 = $tmp1337(Iter$512$91326);
        panda$core$Bit $tmp1340 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1339);
        bool $tmp1335 = $tmp1340.value;
        if (!$tmp1335) goto $l1334;
        {
            ITable* $tmp1344 = Iter$512$91326->$class->itable;
            while ($tmp1344->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1344 = $tmp1344->next;
            }
            $fn1346 $tmp1345 = $tmp1344->methods[1];
            panda$core$Object* $tmp1347 = $tmp1345(Iter$512$91326);
            panda$core$Object* $tmp1343 = $tmp1347;
            org$pandalanguage$pandac$MethodDecl* $tmp1342 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1343);
            m1341 = $tmp1342;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1342));
            panda$core$Panda$unref$panda$core$Object($tmp1343);
            panda$core$Bit $tmp1348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1341->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1348.value) {
            {
                foundInit1324 = ((panda$core$Bit) { true });
            }
            }
            panda$core$Bit $tmp1351 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1341)->name, &$s1350);
            bool $tmp1349 = $tmp1351.value;
            if (!$tmp1349) goto $l1352;
            panda$core$Int64 $tmp1353 = panda$collections$Array$get_count$R$panda$core$Int64(m1341->parameters);
            panda$core$Bit $tmp1354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1353, ((panda$core$Int64) { 0 }));
            $tmp1349 = $tmp1354.value;
            $l1352:;
            panda$core$Bit $tmp1355 = { $tmp1349 };
            if ($tmp1355.value) {
            {
                foundCleanup1325 = ((panda$core$Bit) { true });
                panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp1356.value) {
                {
                    panda$core$Object* $tmp1359 = (($fn1358) self->compiler->$class->vtable[2])(self->compiler);
                    panda$core$Object* $tmp1357 = $tmp1359;
                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1357), p_position, &$s1360);
                    panda$core$Panda$unref$panda$core$Object($tmp1357);
                }
                }
            }
            }
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1341));
        }
        goto $l1333;
        $l1334:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$512$91326));
    }
    panda$core$Bit $tmp1363 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1324);
    bool $tmp1362 = $tmp1363.value;
    if (!$tmp1362) goto $l1364;
    panda$core$Bit $tmp1365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    $tmp1362 = $tmp1365.value;
    $l1364:;
    panda$core$Bit $tmp1366 = { $tmp1362 };
    bool $tmp1361 = $tmp1366.value;
    if (!$tmp1361) goto $l1367;
    panda$core$Bit $tmp1369 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result1252)->name, &$s1368);
    $tmp1361 = $tmp1369.value;
    $l1367:;
    panda$core$Bit $tmp1370 = { $tmp1361 };
    if ($tmp1370.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1374 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp1376 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init($tmp1376);
        org$pandalanguage$pandac$Annotations* $tmp1375 = $tmp1376;
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1377, ((panda$core$Int64) { 2 }));
        panda$collections$Array* $tmp1380 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1380);
        panda$collections$Array* $tmp1379 = $tmp1380;
        org$pandalanguage$pandac$Type* $tmp1382 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$Type* $tmp1381 = $tmp1382;
        panda$collections$ImmutableArray* $tmp1384 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp1384);
        panda$collections$ImmutableArray* $tmp1383 = $tmp1384;
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1374, result1252, p_position, NULL, $tmp1375, $tmp1377, &$s1378, $tmp1379, $tmp1381, $tmp1383);
        org$pandalanguage$pandac$MethodDecl* $tmp1373 = $tmp1374;
        org$pandalanguage$pandac$MethodDecl* $tmp1372 = $tmp1373;
        defaultInit1371 = $tmp1372;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1372));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1373));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1383));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1379));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1375));
        panda$collections$Array$add$panda$collections$Array$T(result1252->methods, ((panda$core$Object*) defaultInit1371));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1252->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1371));
    }
    }
    panda$core$Bit $tmp1387 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1325);
    bool $tmp1386 = $tmp1387.value;
    if (!$tmp1386) goto $l1388;
    panda$core$Bit $tmp1390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
    bool $tmp1389 = $tmp1390.value;
    if ($tmp1389) goto $l1391;
    panda$core$Bit $tmp1392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    $tmp1389 = $tmp1392.value;
    $l1391:;
    panda$core$Bit $tmp1393 = { $tmp1389 };
    $tmp1386 = $tmp1393.value;
    $l1388:;
    panda$core$Bit $tmp1394 = { $tmp1386 };
    bool $tmp1385 = $tmp1394.value;
    if (!$tmp1385) goto $l1395;
    panda$core$Bit $tmp1397 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result1252)->name, &$s1396);
    $tmp1385 = $tmp1397.value;
    $l1395:;
    panda$core$Bit $tmp1398 = { $tmp1385 };
    if ($tmp1398.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp1402 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$Annotations* $tmp1404 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        panda$core$Int64 $tmp1405 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1404, $tmp1405);
        org$pandalanguage$pandac$Annotations* $tmp1403 = $tmp1404;
        org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1406, ((panda$core$Int64) { 0 }));
        panda$collections$Array* $tmp1409 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1409);
        panda$collections$Array* $tmp1408 = $tmp1409;
        org$pandalanguage$pandac$Type* $tmp1411 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$Type* $tmp1410 = $tmp1411;
        panda$collections$ImmutableArray* $tmp1413 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp1413);
        panda$collections$ImmutableArray* $tmp1412 = $tmp1413;
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1402, result1252, p_position, NULL, $tmp1403, $tmp1406, &$s1407, $tmp1408, $tmp1410, $tmp1412);
        org$pandalanguage$pandac$MethodDecl* $tmp1401 = $tmp1402;
        org$pandalanguage$pandac$MethodDecl* $tmp1400 = $tmp1401;
        defaultCleanup1399 = $tmp1400;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1400));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1412));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1410));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1408));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1403));
        panda$collections$Array$add$panda$collections$Array$T(result1252->methods, ((panda$core$Object*) defaultCleanup1399));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1252->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1399));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1399));
    }
    }
    panda$core$Bit $tmp1414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp1414.value) {
    {
        haveFields1415 = ((panda$core$Bit) { false });
        {
            ITable* $tmp1419 = ((panda$collections$Iterable*) result1252->choiceEntries)->$class->itable;
            while ($tmp1419->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1419 = $tmp1419->next;
            }
            $fn1421 $tmp1420 = $tmp1419->methods[0];
            panda$collections$Iterator* $tmp1422 = $tmp1420(((panda$collections$Iterable*) result1252->choiceEntries));
            panda$collections$Iterator* $tmp1418 = $tmp1422;
            panda$collections$Iterator* $tmp1417 = $tmp1418;
            Iter$540$131416 = $tmp1417;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1417));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1418));
            $l1423:;
            ITable* $tmp1426 = Iter$540$131416->$class->itable;
            while ($tmp1426->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1426 = $tmp1426->next;
            }
            $fn1428 $tmp1427 = $tmp1426->methods[0];
            panda$core$Bit $tmp1429 = $tmp1427(Iter$540$131416);
            panda$core$Bit $tmp1430 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1429);
            bool $tmp1425 = $tmp1430.value;
            if (!$tmp1425) goto $l1424;
            {
                ITable* $tmp1434 = Iter$540$131416->$class->itable;
                while ($tmp1434->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1434 = $tmp1434->next;
                }
                $fn1436 $tmp1435 = $tmp1434->methods[1];
                panda$core$Object* $tmp1437 = $tmp1435(Iter$540$131416);
                panda$core$Object* $tmp1433 = $tmp1437;
                org$pandalanguage$pandac$ChoiceEntry* $tmp1432 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1433);
                e1431 = $tmp1432;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1432));
                panda$core$Panda$unref$panda$core$Object($tmp1433);
                panda$core$Int64 $tmp1438 = panda$collections$Array$get_count$R$panda$core$Int64(e1431->fields);
                panda$core$Bit $tmp1439 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1438, ((panda$core$Int64) { 0 }));
                if ($tmp1439.value) {
                {
                    haveFields1415 = ((panda$core$Bit) { true });
                    {
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1431));
                        goto $l1424;
                    }
                }
                }
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1431));
            }
            goto $l1423;
            $l1424:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$540$131416));
        }
        panda$core$Bit $tmp1440 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1415);
        if ($tmp1440.value) {
        {
            {
                org$pandalanguage$pandac$Type* $tmp1441 = result1252->rawSuper;
                org$pandalanguage$pandac$Type* $tmp1444 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                org$pandalanguage$pandac$Type* $tmp1443 = $tmp1444;
                org$pandalanguage$pandac$Type* $tmp1442 = $tmp1443;
                result1252->rawSuper = $tmp1442;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1442));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1443));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1441));
            }
        }
        }
    }
    }
    panda$core$Object* $tmp1448 = (($fn1447) self->compiler->$class->vtable[2])(self->compiler);
    panda$core$Object* $tmp1446 = $tmp1448;
    panda$core$Object* $tmp1449 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1446)->currentClass);
    panda$core$Object* $tmp1445 = $tmp1449;
    panda$core$Panda$unref$panda$core$Object($tmp1445);
    panda$core$Panda$unref$panda$core$Object($tmp1446);
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1451 = result1252;
        tmp61450 = $tmp1451;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1451));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1129));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1252));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1157));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1161));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1219));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1146));
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1452 = tmp61450;
        return $tmp1452;
    }
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$556$91453;
    org$pandalanguage$pandac$ClassDecl* inner1468;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp1456 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp1456->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1456 = $tmp1456->next;
        }
        $fn1458 $tmp1457 = $tmp1456->methods[0];
        panda$collections$Iterator* $tmp1459 = $tmp1457(((panda$collections$Iterable*) p_cl->classes));
        panda$collections$Iterator* $tmp1455 = $tmp1459;
        panda$collections$Iterator* $tmp1454 = $tmp1455;
        Iter$556$91453 = $tmp1454;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1454));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1455));
        $l1460:;
        ITable* $tmp1463 = Iter$556$91453->$class->itable;
        while ($tmp1463->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1463 = $tmp1463->next;
        }
        $fn1465 $tmp1464 = $tmp1463->methods[0];
        panda$core$Bit $tmp1466 = $tmp1464(Iter$556$91453);
        panda$core$Bit $tmp1467 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1466);
        bool $tmp1462 = $tmp1467.value;
        if (!$tmp1462) goto $l1461;
        {
            ITable* $tmp1471 = Iter$556$91453->$class->itable;
            while ($tmp1471->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1471 = $tmp1471->next;
            }
            $fn1473 $tmp1472 = $tmp1471->methods[1];
            panda$core$Object* $tmp1474 = $tmp1472(Iter$556$91453);
            panda$core$Object* $tmp1470 = $tmp1474;
            org$pandalanguage$pandac$ClassDecl* $tmp1469 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1470);
            inner1468 = $tmp1469;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1469));
            panda$core$Panda$unref$panda$core$Object($tmp1470);
            org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1468, p_arr);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1468));
        }
        goto $l1460;
        $l1461:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$556$91453));
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$562_91475;
    panda$collections$ImmutableArray* entries1477;
    panda$collections$Array* result1479;
    panda$core$String* currentPackage1483;
    panda$collections$HashMap* aliases1486;
    panda$collections$Iterator* Iter$567$171490;
    org$pandalanguage$pandac$ASTNode* e1505;
    org$pandalanguage$pandac$ASTNode* $match$568_211512;
    panda$core$String* name1514;
    panda$core$String* fullName1519;
    panda$core$String$Index$nullable idx1521;
    panda$core$String* alias1524;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1528;
    org$pandalanguage$pandac$Position position1534;
    org$pandalanguage$pandac$ASTNode* dc1536;
    panda$collections$ImmutableArray* annotations1538;
    org$pandalanguage$pandac$ClassDecl$Kind kind1540;
    panda$core$String* name1542;
    panda$collections$ImmutableArray* generics1544;
    panda$collections$ImmutableArray* supertypes1546;
    panda$collections$ImmutableArray* members1548;
    org$pandalanguage$pandac$ClassDecl* cl1550;
    panda$collections$ListView* tmp71554;
    {
        $match$562_91475 = p_file;
        panda$core$Bit $tmp1476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$562_91475->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1476.value) {
        {
            panda$collections$ImmutableArray** $tmp1478 = ((panda$collections$ImmutableArray**) ((char*) $match$562_91475->$data + 0));
            entries1477 = *$tmp1478;
            panda$collections$Array* $tmp1482 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp1482);
            panda$collections$Array* $tmp1481 = $tmp1482;
            panda$collections$Array* $tmp1480 = $tmp1481;
            result1479 = $tmp1480;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1480));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1481));
            panda$core$String* $tmp1484 = &$s1485;
            currentPackage1483 = $tmp1484;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1484));
            panda$collections$HashMap* $tmp1489 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
            panda$collections$HashMap$init($tmp1489);
            panda$collections$HashMap* $tmp1488 = $tmp1489;
            panda$collections$HashMap* $tmp1487 = $tmp1488;
            aliases1486 = $tmp1487;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1487));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1488));
            {
                ITable* $tmp1493 = ((panda$collections$Iterable*) entries1477)->$class->itable;
                while ($tmp1493->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1493 = $tmp1493->next;
                }
                $fn1495 $tmp1494 = $tmp1493->methods[0];
                panda$collections$Iterator* $tmp1496 = $tmp1494(((panda$collections$Iterable*) entries1477));
                panda$collections$Iterator* $tmp1492 = $tmp1496;
                panda$collections$Iterator* $tmp1491 = $tmp1492;
                Iter$567$171490 = $tmp1491;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1491));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1492));
                $l1497:;
                ITable* $tmp1500 = Iter$567$171490->$class->itable;
                while ($tmp1500->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1500 = $tmp1500->next;
                }
                $fn1502 $tmp1501 = $tmp1500->methods[0];
                panda$core$Bit $tmp1503 = $tmp1501(Iter$567$171490);
                panda$core$Bit $tmp1504 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1503);
                bool $tmp1499 = $tmp1504.value;
                if (!$tmp1499) goto $l1498;
                {
                    ITable* $tmp1508 = Iter$567$171490->$class->itable;
                    while ($tmp1508->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1508 = $tmp1508->next;
                    }
                    $fn1510 $tmp1509 = $tmp1508->methods[1];
                    panda$core$Object* $tmp1511 = $tmp1509(Iter$567$171490);
                    panda$core$Object* $tmp1507 = $tmp1511;
                    org$pandalanguage$pandac$ASTNode* $tmp1506 = ((org$pandalanguage$pandac$ASTNode*) $tmp1507);
                    e1505 = $tmp1506;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1506));
                    panda$core$Panda$unref$panda$core$Object($tmp1507);
                    {
                        $match$568_211512 = e1505;
                        panda$core$Bit $tmp1513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_211512->$rawValue, ((panda$core$Int64) { 27 }));
                        if ($tmp1513.value) {
                        {
                            panda$core$String** $tmp1515 = ((panda$core$String**) ((char*) $match$568_211512->$data + 16));
                            name1514 = *$tmp1515;
                            {
                                panda$core$String* $tmp1516 = currentPackage1483;
                                panda$core$String* $tmp1517 = name1514;
                                currentPackage1483 = $tmp1517;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1517));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1516));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp1518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_211512->$rawValue, ((panda$core$Int64) { 38 }));
                        if ($tmp1518.value) {
                        {
                            panda$core$String** $tmp1520 = ((panda$core$String**) ((char*) $match$568_211512->$data + 16));
                            fullName1519 = *$tmp1520;
                            panda$core$String$Index$nullable $tmp1523 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1519, &$s1522);
                            idx1521 = $tmp1523;
                            memset(&alias1524, 0, sizeof(alias1524));
                            if (((panda$core$Bit) { idx1521.nonnull }).value) {
                            {
                                {
                                    panda$core$String* $tmp1525 = alias1524;
                                    panda$core$String$Index $tmp1529 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1519, ((panda$core$String$Index) idx1521.value));
                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1528, ((panda$core$String$Index$nullable) { $tmp1529, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                    panda$core$String* $tmp1530 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1519, $tmp1528);
                                    panda$core$String* $tmp1527 = $tmp1530;
                                    panda$core$String* $tmp1526 = $tmp1527;
                                    alias1524 = $tmp1526;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1526));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1527));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1525));
                                }
                            }
                            }
                            else {
                            {
                                {
                                    panda$core$String* $tmp1531 = alias1524;
                                    panda$core$String* $tmp1532 = fullName1519;
                                    alias1524 = $tmp1532;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1532));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1531));
                                }
                            }
                            }
                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1486, ((panda$collections$Key*) alias1524), ((panda$core$Object*) fullName1519));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1524));
                        }
                        }
                        else {
                        panda$core$Bit $tmp1533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$568_211512->$rawValue, ((panda$core$Int64) { 9 }));
                        if ($tmp1533.value) {
                        {
                            org$pandalanguage$pandac$Position* $tmp1535 = ((org$pandalanguage$pandac$Position*) ((char*) $match$568_211512->$data + 0));
                            position1534 = *$tmp1535;
                            org$pandalanguage$pandac$ASTNode** $tmp1537 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$568_211512->$data + 16));
                            dc1536 = *$tmp1537;
                            panda$collections$ImmutableArray** $tmp1539 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211512->$data + 24));
                            annotations1538 = *$tmp1539;
                            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1541 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$568_211512->$data + 32));
                            kind1540 = *$tmp1541;
                            panda$core$String** $tmp1543 = ((panda$core$String**) ((char*) $match$568_211512->$data + 40));
                            name1542 = *$tmp1543;
                            panda$collections$ImmutableArray** $tmp1545 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211512->$data + 48));
                            generics1544 = *$tmp1545;
                            panda$collections$ImmutableArray** $tmp1547 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211512->$data + 56));
                            supertypes1546 = *$tmp1547;
                            panda$collections$ImmutableArray** $tmp1549 = ((panda$collections$ImmutableArray**) ((char*) $match$568_211512->$data + 64));
                            members1548 = *$tmp1549;
                            org$pandalanguage$pandac$ClassDecl* $tmp1553 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1486), currentPackage1483, position1534, dc1536, annotations1538, kind1540, name1542, generics1544, supertypes1546, members1548);
                            org$pandalanguage$pandac$ClassDecl* $tmp1552 = $tmp1553;
                            org$pandalanguage$pandac$ClassDecl* $tmp1551 = $tmp1552;
                            cl1550 = $tmp1551;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1551));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1552));
                            if (((panda$core$Bit) { cl1550 != NULL }).value) {
                            {
                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1550, result1479);
                            }
                            }
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1550));
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1505));
                }
                goto $l1497;
                $l1498:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$567$171490));
            }
            {
                panda$collections$ListView* $tmp1555 = ((panda$collections$ListView*) result1479);
                tmp71554 = $tmp1555;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1555));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1483));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1479));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases1486));
                }
                panda$collections$ListView* $tmp1556 = tmp71554;
                return $tmp1556;
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
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
}

