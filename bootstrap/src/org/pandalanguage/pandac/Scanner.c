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
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/Annotations/Expression.h"
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
#include "org/pandalanguage/pandac/Alias.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
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

typedef panda$collections$Iterator* (*$fn88)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn95)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn106)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn117)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn158)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn165)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn176)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn193)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn217)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn224)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn235)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn352)(panda$core$Weak*);
typedef panda$core$Object* (*$fn362)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn434)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn441)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn452)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn545)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn552)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn563)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn589)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn596)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn607)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn647)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn654)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn665)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn694)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn701)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn712)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn743)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn750)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn761)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn786)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn793)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn804)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn829)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn836)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn847)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn861)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn868)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn879)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn938)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn945)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn956)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn978)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn985)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn996)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1010)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1017)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1028)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1051)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1058)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1069)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1081)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1100)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1107)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1118)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1177)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1184)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1195)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1231)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1247)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1388)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1395)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1406)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1470)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1477)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1488)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Position (*$fn1520)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn1526)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1535)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1546)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1553)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1564)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1575)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1578)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1613)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1620)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1631)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1648)(panda$core$Weak*);
typedef panda$core$Object* (*$fn1653)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1669)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1676)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1687)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1699)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1778)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1785)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1796)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1810)(panda$core$Weak*);
typedef panda$collections$Iterator* (*$fn1826)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1833)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1844)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1878)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1885)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1896)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x63\x61\x6e\x6e\x65\x72", 32, -9211796113705524212, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6e\x61\x6c", 9, 1797670743561030032, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6d\x70\x6c\x69\x63\x69\x74", 9, 1798087879658852924, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1797218527027547117, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x6c\x69\x6e\x65", 7, 176265944400704, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6c\x69\x7a\x65", 11, -1247743415806531590, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x75\x6e\x73\x61\x66\x65\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 16, -230432251521796329, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65", 4, 171153792, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x4f\x72", 6, 1745939840285, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74", 5, 17286503919, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x6f\x73\x74\x41\x6e\x64", 8, 17810302274923894, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x27", 25, -471457666966556892, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x61\x63\x63\x65\x70\x74\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, -1710462284219964193, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x73\x20\x6d\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 33, 7296237219576179758, NULL };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x6f\x6e\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x20\x6d\x65\x74\x68\x6f\x64\x20\x27", 30, -1250916154819313721, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x74\x6f\x20\x68\x61\x76\x65\x20\x61\x20\x62\x6f\x64\x79", 16, -7652461387112275530, NULL };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x67\x65\x6e\x65\x72\x69\x63\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73", 39, 2065374915651099436, NULL };
static panda$core$String $s1537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x73\x70\x65\x63\x69\x66\x79\x20\x73\x75\x70\x65\x72\x74\x79\x70\x65\x73", 34, -7551999266513558078, NULL };
static panda$core$String $s1591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x61\x77\x56\x61\x6c\x75\x65", 9, 1495840256931304876, NULL };
static panda$core$String $s1601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x64\x61\x74\x61", 5, 14360306347, NULL };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 38, 4891391085598657283, NULL };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x27\x69\x6e\x69\x74\x27\x20\x6d\x65\x74\x68\x6f\x64\x73", 35, -7771772290893523755, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20\x63\x6c\x65\x61\x6e\x75\x70\x20\x6d\x65\x74\x68\x6f\x64\x20\x63\x61\x6e\x6e\x6f\x74\x20\x62\x65\x20\x6f\x76\x65\x72\x72\x69\x64\x64\x65\x6e", 42, 7116798944073580305, NULL };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70", 7, 213449732148045, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73", 9, 2155968763569303102, NULL };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp2;
    panda$core$Weak* $tmp3;
    panda$core$Weak* $tmp4;
    self->compiler = NULL;
    {
        $tmp2 = self->compiler;
        panda$core$Weak* $tmp5 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp5, ((panda$core$Object*) p_compiler));
        $tmp4 = $tmp5;
        $tmp3 = $tmp4;
        self->compiler = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    org$pandalanguage$pandac$ASTNode* $match$19_99 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp10;
    org$pandalanguage$pandac$IRNode* node12 = NULL;
    org$pandalanguage$pandac$IRNode* $match$21_1717 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp18;
    org$pandalanguage$pandac$Type* type20 = NULL;
    org$pandalanguage$pandac$Type* $returnValue22;
    org$pandalanguage$pandac$Type* $tmp23;
    org$pandalanguage$pandac$Position position29;
    panda$core$String* name31 = NULL;
    org$pandalanguage$pandac$Type* $tmp33;
    org$pandalanguage$pandac$Type* $tmp34;
    org$pandalanguage$pandac$Type$Kind $tmp36;
    org$pandalanguage$pandac$Position position40;
    org$pandalanguage$pandac$ASTNode* base42 = NULL;
    panda$collections$Array* subtypes47 = NULL;
    panda$collections$Array* $tmp48;
    panda$collections$Array* $tmp49;
    org$pandalanguage$pandac$Type* $tmp51;
    org$pandalanguage$pandac$Type* $tmp53;
    org$pandalanguage$pandac$Type* $tmp54;
    panda$core$String* $tmp56;
    panda$core$Object* $tmp57;
    org$pandalanguage$pandac$Type$Kind $tmp61;
    org$pandalanguage$pandac$Position position67;
    panda$core$String* base69 = NULL;
    panda$collections$ImmutableArray* args71 = NULL;
    panda$collections$Array* finalArgs76 = NULL;
    panda$collections$Array* $tmp77;
    panda$collections$Array* $tmp78;
    panda$collections$Iterator* Iter$35$1783 = NULL;
    panda$collections$Iterator* $tmp84;
    panda$collections$Iterator* $tmp85;
    org$pandalanguage$pandac$ASTNode* arg101 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp102;
    panda$core$Object* $tmp103;
    org$pandalanguage$pandac$Type* $tmp108;
    org$pandalanguage$pandac$Type* $tmp112;
    org$pandalanguage$pandac$Type* $tmp113;
    org$pandalanguage$pandac$Type* $tmp114;
    org$pandalanguage$pandac$Type$Kind $tmp116;
    org$pandalanguage$pandac$Position position125;
    org$pandalanguage$pandac$parser$Token$Kind kind127;
    panda$collections$ImmutableArray* rawParameters129 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType131 = NULL;
    org$pandalanguage$pandac$Type$Kind typeKind136;
    org$pandalanguage$pandac$parser$Token$Kind $match$41_17137;
    org$pandalanguage$pandac$Type$Kind $tmp139;
    org$pandalanguage$pandac$Type$Kind $tmp141;
    org$pandalanguage$pandac$Type$Kind $tmp143;
    org$pandalanguage$pandac$Type$Kind $tmp145;
    panda$collections$Array* parameters146 = NULL;
    panda$collections$Array* $tmp147;
    panda$collections$Array* $tmp148;
    panda$collections$Iterator* Iter$54$17153 = NULL;
    panda$collections$Iterator* $tmp154;
    panda$collections$Iterator* $tmp155;
    org$pandalanguage$pandac$ASTNode* p171 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp172;
    panda$core$Object* $tmp173;
    org$pandalanguage$pandac$Type* $tmp178;
    org$pandalanguage$pandac$Type* returnType182 = NULL;
    org$pandalanguage$pandac$Type* $tmp183;
    org$pandalanguage$pandac$Type* $tmp184;
    org$pandalanguage$pandac$Type* $tmp185;
    org$pandalanguage$pandac$Type* $tmp187;
    org$pandalanguage$pandac$Type* $tmp188;
    org$pandalanguage$pandac$Type* $tmp189;
    org$pandalanguage$pandac$Type* $tmp191;
    org$pandalanguage$pandac$Type* $tmp192;
    panda$collections$ImmutableArray* $tmp195;
    int $tmp8;
    {
        $tmp10 = p_type;
        $match$19_99 = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Bit $tmp11 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp11.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp13 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$19_99->$data + 0));
            node12 = *$tmp13;
            int $tmp16;
            {
                $tmp18 = node12;
                $match$21_1717 = $tmp18;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
                panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$21_1717->$rawValue, ((panda$core$Int64) { 38 }));
                if ($tmp19.value) {
                {
                    org$pandalanguage$pandac$Type** $tmp21 = ((org$pandalanguage$pandac$Type**) ((char*) $match$21_1717->$data + 16));
                    type20 = *$tmp21;
                    $tmp23 = type20;
                    $returnValue22 = $tmp23;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
                    $tmp16 = 0;
                    goto $l14;
                    $l24:;
                    $tmp8 = 0;
                    goto $l6;
                    $l25:;
                    return $returnValue22;
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp16 = -1;
            goto $l14;
            $l14:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
            switch ($tmp16) {
                case -1: goto $l27;
                case 0: goto $l24;
            }
            $l27:;
        }
        }
        else {
        panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp28.value) {
        {
            org$pandalanguage$pandac$Position* $tmp30 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_99->$data + 0));
            position29 = *$tmp30;
            panda$core$String** $tmp32 = ((panda$core$String**) ((char*) $match$19_99->$data + 16));
            name31 = *$tmp32;
            org$pandalanguage$pandac$Type* $tmp35 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp36, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp35, name31, $tmp36, position29);
            $tmp34 = $tmp35;
            $tmp33 = $tmp34;
            $returnValue22 = $tmp33;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp33));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
            $tmp8 = 1;
            goto $l6;
            $l37:;
            return $returnValue22;
        }
        }
        else {
        panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp39.value) {
        {
            org$pandalanguage$pandac$Position* $tmp41 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_99->$data + 0));
            position40 = *$tmp41;
            org$pandalanguage$pandac$ASTNode** $tmp43 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$19_99->$data + 16));
            base42 = *$tmp43;
            int $tmp46;
            {
                panda$collections$Array* $tmp50 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp50);
                $tmp49 = $tmp50;
                $tmp48 = $tmp49;
                subtypes47 = $tmp48;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp48));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
                org$pandalanguage$pandac$Type* $tmp52 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, base42);
                $tmp51 = $tmp52;
                panda$collections$Array$add$panda$collections$Array$T(subtypes47, ((panda$core$Object*) $tmp51));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
                org$pandalanguage$pandac$Type* $tmp55 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                panda$core$Object* $tmp58 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(subtypes47, ((panda$core$Int64) { 0 }));
                $tmp57 = $tmp58;
                panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp57))->name, &$s59);
                $tmp56 = $tmp60;
                org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp61, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp55, $tmp56, $tmp61, position40, ((panda$collections$ListView*) subtypes47), ((panda$core$Bit) { false }));
                $tmp54 = $tmp55;
                $tmp53 = $tmp54;
                $returnValue22 = $tmp53;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
                panda$core$Panda$unref$panda$core$Object($tmp57);
                $tmp46 = 0;
                goto $l44;
                $l62:;
                $tmp8 = 2;
                goto $l6;
                $l63:;
                return $returnValue22;
            }
            $l44:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) subtypes47));
            subtypes47 = NULL;
            switch ($tmp46) {
                case 0: goto $l62;
            }
            $l65:;
        }
        }
        else {
        panda$core$Bit $tmp66 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp66.value) {
        {
            org$pandalanguage$pandac$Position* $tmp68 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_99->$data + 0));
            position67 = *$tmp68;
            panda$core$String** $tmp70 = ((panda$core$String**) ((char*) $match$19_99->$data + 16));
            base69 = *$tmp70;
            panda$collections$ImmutableArray** $tmp72 = ((panda$collections$ImmutableArray**) ((char*) $match$19_99->$data + 24));
            args71 = *$tmp72;
            int $tmp75;
            {
                panda$collections$Array* $tmp79 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp79);
                $tmp78 = $tmp79;
                $tmp77 = $tmp78;
                finalArgs76 = $tmp77;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
                {
                    int $tmp82;
                    {
                        ITable* $tmp86 = ((panda$collections$Iterable*) args71)->$class->itable;
                        while ($tmp86->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp86 = $tmp86->next;
                        }
                        $fn88 $tmp87 = $tmp86->methods[0];
                        panda$collections$Iterator* $tmp89 = $tmp87(((panda$collections$Iterable*) args71));
                        $tmp85 = $tmp89;
                        $tmp84 = $tmp85;
                        Iter$35$1783 = $tmp84;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
                        $l90:;
                        ITable* $tmp93 = Iter$35$1783->$class->itable;
                        while ($tmp93->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp93 = $tmp93->next;
                        }
                        $fn95 $tmp94 = $tmp93->methods[0];
                        panda$core$Bit $tmp96 = $tmp94(Iter$35$1783);
                        panda$core$Bit $tmp97 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp96);
                        bool $tmp92 = $tmp97.value;
                        if (!$tmp92) goto $l91;
                        {
                            int $tmp100;
                            {
                                ITable* $tmp104 = Iter$35$1783->$class->itable;
                                while ($tmp104->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp104 = $tmp104->next;
                                }
                                $fn106 $tmp105 = $tmp104->methods[1];
                                panda$core$Object* $tmp107 = $tmp105(Iter$35$1783);
                                $tmp103 = $tmp107;
                                $tmp102 = ((org$pandalanguage$pandac$ASTNode*) $tmp103);
                                arg101 = $tmp102;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
                                panda$core$Panda$unref$panda$core$Object($tmp103);
                                org$pandalanguage$pandac$Type* $tmp109 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, arg101);
                                $tmp108 = $tmp109;
                                panda$collections$Array$add$panda$collections$Array$T(finalArgs76, ((panda$core$Object*) $tmp108));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
                            }
                            $tmp100 = -1;
                            goto $l98;
                            $l98:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg101));
                            arg101 = NULL;
                            switch ($tmp100) {
                                case -1: goto $l110;
                            }
                            $l110:;
                        }
                        goto $l90;
                        $l91:;
                    }
                    $tmp82 = -1;
                    goto $l80;
                    $l80:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$35$1783));
                    Iter$35$1783 = NULL;
                    switch ($tmp82) {
                        case -1: goto $l111;
                    }
                    $l111:;
                }
                org$pandalanguage$pandac$Type* $tmp115 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
                org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp116, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Position $tmp118 = (($fn117) p_type->$class->vtable[2])(p_type);
                org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position($tmp115, base69, $tmp116, $tmp118);
                $tmp114 = $tmp115;
                org$pandalanguage$pandac$Type* $tmp119 = org$pandalanguage$pandac$Type$generic$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp114, ((panda$collections$ListView*) finalArgs76));
                $tmp113 = $tmp119;
                $tmp112 = $tmp113;
                $returnValue22 = $tmp112;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
                $tmp75 = 0;
                goto $l73;
                $l120:;
                $tmp8 = 3;
                goto $l6;
                $l121:;
                return $returnValue22;
            }
            $l73:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) finalArgs76));
            finalArgs76 = NULL;
            switch ($tmp75) {
                case 0: goto $l120;
            }
            $l123:;
        }
        }
        else {
        panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$19_99->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp124.value) {
        {
            org$pandalanguage$pandac$Position* $tmp126 = ((org$pandalanguage$pandac$Position*) ((char*) $match$19_99->$data + 0));
            position125 = *$tmp126;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp128 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$19_99->$data + 16));
            kind127 = *$tmp128;
            panda$collections$ImmutableArray** $tmp130 = ((panda$collections$ImmutableArray**) ((char*) $match$19_99->$data + 24));
            rawParameters129 = *$tmp130;
            org$pandalanguage$pandac$ASTNode** $tmp132 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$19_99->$data + 32));
            rawReturnType131 = *$tmp132;
            int $tmp135;
            {
                memset(&typeKind136, 0, sizeof(typeKind136));
                {
                    $match$41_17137 = kind127;
                    panda$core$Bit $tmp138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$41_17137.$rawValue, ((panda$core$Int64) { 90 }));
                    if ($tmp138.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp139, ((panda$core$Int64) { 14 }));
                        typeKind136 = $tmp139;
                    }
                    }
                    else {
                    panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$41_17137.$rawValue, ((panda$core$Int64) { 91 }));
                    if ($tmp140.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp141, ((panda$core$Int64) { 15 }));
                        typeKind136 = $tmp141;
                    }
                    }
                    else {
                    panda$core$Bit $tmp142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$41_17137.$rawValue, ((panda$core$Int64) { 92 }));
                    if ($tmp142.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp143, ((panda$core$Int64) { 16 }));
                        typeKind136 = $tmp143;
                    }
                    }
                    else {
                    panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$41_17137.$rawValue, ((panda$core$Int64) { 93 }));
                    if ($tmp144.value) {
                    {
                        org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp145, ((panda$core$Int64) { 17 }));
                        typeKind136 = $tmp145;
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
                panda$collections$Array* $tmp149 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp149);
                $tmp148 = $tmp149;
                $tmp147 = $tmp148;
                parameters146 = $tmp147;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
                {
                    int $tmp152;
                    {
                        ITable* $tmp156 = ((panda$collections$Iterable*) rawParameters129)->$class->itable;
                        while ($tmp156->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp156 = $tmp156->next;
                        }
                        $fn158 $tmp157 = $tmp156->methods[0];
                        panda$collections$Iterator* $tmp159 = $tmp157(((panda$collections$Iterable*) rawParameters129));
                        $tmp155 = $tmp159;
                        $tmp154 = $tmp155;
                        Iter$54$17153 = $tmp154;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
                        $l160:;
                        ITable* $tmp163 = Iter$54$17153->$class->itable;
                        while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp163 = $tmp163->next;
                        }
                        $fn165 $tmp164 = $tmp163->methods[0];
                        panda$core$Bit $tmp166 = $tmp164(Iter$54$17153);
                        panda$core$Bit $tmp167 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp166);
                        bool $tmp162 = $tmp167.value;
                        if (!$tmp162) goto $l161;
                        {
                            int $tmp170;
                            {
                                ITable* $tmp174 = Iter$54$17153->$class->itable;
                                while ($tmp174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp174 = $tmp174->next;
                                }
                                $fn176 $tmp175 = $tmp174->methods[1];
                                panda$core$Object* $tmp177 = $tmp175(Iter$54$17153);
                                $tmp173 = $tmp177;
                                $tmp172 = ((org$pandalanguage$pandac$ASTNode*) $tmp173);
                                p171 = $tmp172;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
                                panda$core$Panda$unref$panda$core$Object($tmp173);
                                org$pandalanguage$pandac$Type* $tmp179 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p171);
                                $tmp178 = $tmp179;
                                panda$collections$Array$add$panda$collections$Array$T(parameters146, ((panda$core$Object*) $tmp178));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
                            }
                            $tmp170 = -1;
                            goto $l168;
                            $l168:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p171));
                            p171 = NULL;
                            switch ($tmp170) {
                                case -1: goto $l180;
                            }
                            $l180:;
                        }
                        goto $l160;
                        $l161:;
                    }
                    $tmp152 = -1;
                    goto $l150;
                    $l150:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$54$17153));
                    Iter$54$17153 = NULL;
                    switch ($tmp152) {
                        case -1: goto $l181;
                    }
                    $l181:;
                }
                memset(&returnType182, 0, sizeof(returnType182));
                if (((panda$core$Bit) { rawReturnType131 != NULL }).value) {
                {
                    {
                        $tmp183 = returnType182;
                        org$pandalanguage$pandac$Type* $tmp186 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, rawReturnType131);
                        $tmp185 = $tmp186;
                        $tmp184 = $tmp185;
                        returnType182 = $tmp184;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
                    }
                }
                }
                else {
                {
                    {
                        $tmp187 = returnType182;
                        org$pandalanguage$pandac$Type* $tmp190 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                        $tmp189 = $tmp190;
                        $tmp188 = $tmp189;
                        returnType182 = $tmp188;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp188));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
                    }
                }
                }
                org$pandalanguage$pandac$Position $tmp194 = (($fn193) p_type->$class->vtable[2])(p_type);
                panda$collections$ImmutableArray* $tmp196 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(parameters146);
                $tmp195 = $tmp196;
                org$pandalanguage$pandac$Type* $tmp197 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type($tmp194, typeKind136, ((panda$collections$ListView*) $tmp195), returnType182);
                $tmp192 = $tmp197;
                $tmp191 = $tmp192;
                $returnValue22 = $tmp191;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp191));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
                $tmp135 = 0;
                goto $l133;
                $l198:;
                $tmp8 = 4;
                goto $l6;
                $l199:;
                return $returnValue22;
            }
            $l133:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters146));
            parameters146 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType182));
            switch ($tmp135) {
                case 0: goto $l198;
            }
            $l201:;
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
    $tmp8 = -1;
    goto $l6;
    $l6:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    switch ($tmp8) {
        case -1: goto $l202;
        case 1: goto $l37;
        case 0: goto $l25;
        case 3: goto $l121;
        case 4: goto $l199;
        case 2: goto $l63;
    }
    $l202:;
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, panda$collections$ImmutableArray* p_a) {
    panda$core$Int64 flags206;
    panda$collections$Array* expressions207 = NULL;
    panda$collections$Array* $tmp208;
    panda$collections$Iterator* Iter$73$9212 = NULL;
    panda$collections$Iterator* $tmp213;
    panda$collections$Iterator* $tmp214;
    org$pandalanguage$pandac$ASTNode* c230 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp231;
    panda$core$Object* $tmp232;
    org$pandalanguage$pandac$ASTNode* $match$74_13240 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp241;
    org$pandalanguage$pandac$Position position243;
    panda$core$String* text245 = NULL;
    org$pandalanguage$pandac$ASTNode* rawExpr247 = NULL;
    org$pandalanguage$pandac$ASTNode* expr252 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp253;
    panda$core$String* $match$77_21257 = NULL;
    panda$core$String* $tmp258;
    panda$collections$Array* $tmp313;
    panda$collections$Array* $tmp314;
    panda$collections$Array* $tmp315;
    org$pandalanguage$pandac$Annotations$Expression* $tmp317;
    org$pandalanguage$pandac$ASTNode* $tmp319;
    org$pandalanguage$pandac$ASTNode* $tmp320;
    panda$collections$Array* $tmp323;
    panda$collections$Array* $tmp324;
    panda$collections$Array* $tmp325;
    org$pandalanguage$pandac$Annotations$Expression* $tmp327;
    org$pandalanguage$pandac$ASTNode* $tmp329;
    org$pandalanguage$pandac$ASTNode* $tmp330;
    panda$collections$Array* $tmp333;
    panda$collections$Array* $tmp334;
    panda$collections$Array* $tmp335;
    org$pandalanguage$pandac$Annotations$Expression* $tmp337;
    org$pandalanguage$pandac$ASTNode* $tmp339;
    org$pandalanguage$pandac$ASTNode* $tmp340;
    panda$collections$Array* $tmp343;
    panda$collections$Array* $tmp344;
    panda$collections$Array* $tmp345;
    org$pandalanguage$pandac$Annotations$Expression* $tmp347;
    org$pandalanguage$pandac$ASTNode* $tmp349;
    org$pandalanguage$pandac$ASTNode* $tmp350;
    panda$core$Object* $tmp351;
    panda$core$String* $tmp354;
    panda$core$String* $tmp355;
    panda$core$Object* $tmp361;
    panda$core$String* $tmp364;
    panda$core$String* $tmp365;
    org$pandalanguage$pandac$Annotations* $returnValue374;
    org$pandalanguage$pandac$Annotations* $tmp375;
    org$pandalanguage$pandac$Annotations* $tmp376;
    int $tmp205;
    {
        flags206 = ((panda$core$Int64) { 0 });
        $tmp208 = NULL;
        expressions207 = $tmp208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
        {
            int $tmp211;
            {
                ITable* $tmp215 = ((panda$collections$Iterable*) p_a)->$class->itable;
                while ($tmp215->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp215 = $tmp215->next;
                }
                $fn217 $tmp216 = $tmp215->methods[0];
                panda$collections$Iterator* $tmp218 = $tmp216(((panda$collections$Iterable*) p_a));
                $tmp214 = $tmp218;
                $tmp213 = $tmp214;
                Iter$73$9212 = $tmp213;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp213));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
                $l219:;
                ITable* $tmp222 = Iter$73$9212->$class->itable;
                while ($tmp222->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp222 = $tmp222->next;
                }
                $fn224 $tmp223 = $tmp222->methods[0];
                panda$core$Bit $tmp225 = $tmp223(Iter$73$9212);
                panda$core$Bit $tmp226 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp225);
                bool $tmp221 = $tmp226.value;
                if (!$tmp221) goto $l220;
                {
                    int $tmp229;
                    {
                        ITable* $tmp233 = Iter$73$9212->$class->itable;
                        while ($tmp233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp233 = $tmp233->next;
                        }
                        $fn235 $tmp234 = $tmp233->methods[1];
                        panda$core$Object* $tmp236 = $tmp234(Iter$73$9212);
                        $tmp232 = $tmp236;
                        $tmp231 = ((org$pandalanguage$pandac$ASTNode*) $tmp232);
                        c230 = $tmp231;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
                        panda$core$Panda$unref$panda$core$Object($tmp232);
                        int $tmp239;
                        {
                            $tmp241 = c230;
                            $match$74_13240 = $tmp241;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
                            panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_13240->$rawValue, ((panda$core$Int64) { 0 }));
                            if ($tmp242.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp244 = ((org$pandalanguage$pandac$Position*) ((char*) $match$74_13240->$data + 0));
                                position243 = *$tmp244;
                                panda$core$String** $tmp246 = ((panda$core$String**) ((char*) $match$74_13240->$data + 16));
                                text245 = *$tmp246;
                                org$pandalanguage$pandac$ASTNode** $tmp248 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$74_13240->$data + 24));
                                rawExpr247 = *$tmp248;
                                int $tmp251;
                                {
                                    $tmp253 = rawExpr247;
                                    expr252 = $tmp253;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
                                    int $tmp256;
                                    {
                                        $tmp258 = text245;
                                        $match$77_21257 = $tmp258;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp258));
                                        panda$core$Bit $tmp260 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s259);
                                        if ($tmp260.value) {
                                        {
                                            panda$core$Int64 $tmp261 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                                            panda$core$Int64 $tmp262 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, $tmp261);
                                            flags206 = $tmp262;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp264 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s263);
                                        if ($tmp264.value) {
                                        {
                                            panda$core$Int64 $tmp265 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                                            panda$core$Int64 $tmp266 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, $tmp265);
                                            flags206 = $tmp266;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp268 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s267);
                                        if ($tmp268.value) {
                                        {
                                            panda$core$Int64 $tmp269 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                                            panda$core$Int64 $tmp270 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, $tmp269);
                                            flags206 = $tmp270;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp272 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s271);
                                        if ($tmp272.value) {
                                        {
                                            panda$core$Int64 $tmp273 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                                            panda$core$Int64 $tmp274 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, $tmp273);
                                            flags206 = $tmp274;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp276 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s275);
                                        if ($tmp276.value) {
                                        {
                                            panda$core$Int64 $tmp277 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                                            panda$core$Int64 $tmp278 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, $tmp277);
                                            flags206 = $tmp278;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp280 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s279);
                                        if ($tmp280.value) {
                                        {
                                            panda$core$Int64 $tmp281 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                                            panda$core$Int64 $tmp282 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, $tmp281);
                                            flags206 = $tmp282;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp284 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s283);
                                        if ($tmp284.value) {
                                        {
                                            panda$core$Int64 $tmp285 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                                            panda$core$Int64 $tmp286 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, $tmp285);
                                            flags206 = $tmp286;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp288 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s287);
                                        if ($tmp288.value) {
                                        {
                                            panda$core$Int64 $tmp289 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                                            panda$core$Int64 $tmp290 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, $tmp289);
                                            flags206 = $tmp290;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp292 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s291);
                                        if ($tmp292.value) {
                                        {
                                            panda$core$Int64 $tmp293 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                                            panda$core$Int64 $tmp294 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, $tmp293);
                                            flags206 = $tmp294;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp296 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s295);
                                        if ($tmp296.value) {
                                        {
                                            panda$core$Int64 $tmp297 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                                            panda$core$Int64 $tmp298 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, $tmp297);
                                            flags206 = $tmp298;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp300 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s299);
                                        if ($tmp300.value) {
                                        {
                                            panda$core$Int64 $tmp301 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                                            panda$core$Int64 $tmp302 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, $tmp301);
                                            flags206 = $tmp302;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp304 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s303);
                                        if ($tmp304.value) {
                                        {
                                            panda$core$Int64 $tmp305 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 12 }));
                                            panda$core$Int64 $tmp306 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, $tmp305);
                                            flags206 = $tmp306;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp308 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s307);
                                        if ($tmp308.value) {
                                        {
                                            panda$core$Int64 $tmp309 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 14 }));
                                            panda$core$Int64 $tmp310 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags206, $tmp309);
                                            flags206 = $tmp310;
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp312 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s311);
                                        if ($tmp312.value) {
                                        {
                                            if (((panda$core$Bit) { expressions207 == NULL }).value) {
                                            {
                                                {
                                                    $tmp313 = expressions207;
                                                    panda$collections$Array* $tmp316 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp316);
                                                    $tmp315 = $tmp316;
                                                    $tmp314 = $tmp315;
                                                    expressions207 = $tmp314;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp314));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp318 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp318, ((panda$core$Int64) { 0 }), expr252);
                                            $tmp317 = $tmp318;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions207, ((panda$core$Object*) $tmp317));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
                                            {
                                                $tmp319 = expr252;
                                                $tmp320 = NULL;
                                                expr252 = $tmp320;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp320));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp322 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s321);
                                        if ($tmp322.value) {
                                        {
                                            if (((panda$core$Bit) { expressions207 == NULL }).value) {
                                            {
                                                {
                                                    $tmp323 = expressions207;
                                                    panda$collections$Array* $tmp326 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp326);
                                                    $tmp325 = $tmp326;
                                                    $tmp324 = $tmp325;
                                                    expressions207 = $tmp324;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp324));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp328 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp328, ((panda$core$Int64) { 1 }), expr252);
                                            $tmp327 = $tmp328;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions207, ((panda$core$Object*) $tmp327));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
                                            {
                                                $tmp329 = expr252;
                                                $tmp330 = NULL;
                                                expr252 = $tmp330;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp330));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp332 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s331);
                                        if ($tmp332.value) {
                                        {
                                            if (((panda$core$Bit) { expressions207 == NULL }).value) {
                                            {
                                                {
                                                    $tmp333 = expressions207;
                                                    panda$collections$Array* $tmp336 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp336);
                                                    $tmp335 = $tmp336;
                                                    $tmp334 = $tmp335;
                                                    expressions207 = $tmp334;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp334));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp338 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp338, ((panda$core$Int64) { 2 }), expr252);
                                            $tmp337 = $tmp338;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions207, ((panda$core$Object*) $tmp337));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp337));
                                            {
                                                $tmp339 = expr252;
                                                $tmp340 = NULL;
                                                expr252 = $tmp340;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp340));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
                                            }
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp342 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$77_21257, &$s341);
                                        if ($tmp342.value) {
                                        {
                                            if (((panda$core$Bit) { expressions207 == NULL }).value) {
                                            {
                                                {
                                                    $tmp343 = expressions207;
                                                    panda$collections$Array* $tmp346 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                                    panda$collections$Array$init($tmp346);
                                                    $tmp345 = $tmp346;
                                                    $tmp344 = $tmp345;
                                                    expressions207 = $tmp344;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp344));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
                                                }
                                            }
                                            }
                                            org$pandalanguage$pandac$Annotations$Expression* $tmp348 = (org$pandalanguage$pandac$Annotations$Expression*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$Expression$class);
                                            org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode($tmp348, ((panda$core$Int64) { 3 }), expr252);
                                            $tmp347 = $tmp348;
                                            panda$collections$Array$add$panda$collections$Array$T(expressions207, ((panda$core$Object*) $tmp347));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp347));
                                            {
                                                $tmp349 = expr252;
                                                $tmp350 = NULL;
                                                expr252 = $tmp350;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
                                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
                                            }
                                        }
                                        }
                                        else {
                                        {
                                            panda$core$Object* $tmp353 = (($fn352) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp351 = $tmp353;
                                            panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s356, text245);
                                            $tmp355 = $tmp357;
                                            panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp355, &$s358);
                                            $tmp354 = $tmp359;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp351), position243, $tmp354);
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp355));
                                            panda$core$Panda$unref$panda$core$Object($tmp351);
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                        }
                                    }
                                    $tmp256 = -1;
                                    goto $l254;
                                    $l254:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
                                    switch ($tmp256) {
                                        case -1: goto $l360;
                                    }
                                    $l360:;
                                    if (((panda$core$Bit) { expr252 != NULL }).value) {
                                    {
                                        panda$core$Object* $tmp363 = (($fn362) self->compiler->$class->vtable[2])(self->compiler);
                                        $tmp361 = $tmp363;
                                        panda$core$String* $tmp367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s366, text245);
                                        $tmp365 = $tmp367;
                                        panda$core$String* $tmp369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp365, &$s368);
                                        $tmp364 = $tmp369;
                                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp361), position243, $tmp364);
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
                                        panda$core$Panda$unref$panda$core$Object($tmp361);
                                    }
                                    }
                                }
                                $tmp251 = -1;
                                goto $l249;
                                $l249:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expr252));
                                expr252 = NULL;
                                switch ($tmp251) {
                                    case -1: goto $l370;
                                }
                                $l370:;
                            }
                            }
                            else {
                            {
                                PANDA_ASSERT(((panda$core$Bit) { false }).value);
                            }
                            }
                        }
                        $tmp239 = -1;
                        goto $l237;
                        $l237:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
                        switch ($tmp239) {
                            case -1: goto $l371;
                        }
                        $l371:;
                    }
                    $tmp229 = -1;
                    goto $l227;
                    $l227:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c230));
                    c230 = NULL;
                    switch ($tmp229) {
                        case -1: goto $l372;
                    }
                    $l372:;
                }
                goto $l219;
                $l220:;
            }
            $tmp211 = -1;
            goto $l209;
            $l209:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$73$9212));
            Iter$73$9212 = NULL;
            switch ($tmp211) {
                case -1: goto $l373;
            }
            $l373:;
        }
        org$pandalanguage$pandac$Annotations* $tmp377 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
        org$pandalanguage$pandac$Annotations$init$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Annotations$Expression$GT$Q($tmp377, flags206, ((panda$collections$ListView*) expressions207));
        $tmp376 = $tmp377;
        $tmp375 = $tmp376;
        $returnValue374 = $tmp375;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp375));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
        $tmp205 = 0;
        goto $l203;
        $l378:;
        return $returnValue374;
    }
    $l203:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) expressions207));
    switch ($tmp205) {
        case 0: goto $l378;
    }
    $l380:;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ASTNode* p_varDecl) {
    panda$core$String* doccomment384 = NULL;
    panda$core$String* $tmp385;
    panda$core$String* $tmp386;
    org$pandalanguage$pandac$ASTNode* $match$136_13390 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp391;
    org$pandalanguage$pandac$Position position393;
    panda$core$String* text395 = NULL;
    panda$core$String* $tmp397;
    panda$core$String* $tmp398;
    org$pandalanguage$pandac$Annotations* annotations400 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp401;
    org$pandalanguage$pandac$Annotations* $tmp402;
    org$pandalanguage$pandac$FieldDecl$Kind fieldKind404;
    org$pandalanguage$pandac$ASTNode* $match$145_9408 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp409;
    org$pandalanguage$pandac$Variable$Kind kind411;
    panda$collections$ImmutableArray* decls413 = NULL;
    org$pandalanguage$pandac$Variable$Kind $match$147_17415;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp417;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp419;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp421;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp425;
    panda$collections$Iterator* Iter$158$17429 = NULL;
    panda$collections$Iterator* $tmp430;
    panda$collections$Iterator* $tmp431;
    org$pandalanguage$pandac$ASTNode* decl447 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp448;
    panda$core$Object* $tmp449;
    org$pandalanguage$pandac$ASTNode* $match$159_21457 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp458;
    org$pandalanguage$pandac$Position declPosition460;
    org$pandalanguage$pandac$ASTNode* target462 = NULL;
    org$pandalanguage$pandac$ASTNode* value464 = NULL;
    panda$core$String* name469 = NULL;
    org$pandalanguage$pandac$Type* type470 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$163_29474 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp475;
    panda$core$String* id477 = NULL;
    panda$core$String* $tmp479;
    panda$core$String* $tmp480;
    org$pandalanguage$pandac$Type* $tmp481;
    org$pandalanguage$pandac$Type* $tmp482;
    org$pandalanguage$pandac$Type* $tmp483;
    panda$core$String* id486 = NULL;
    org$pandalanguage$pandac$ASTNode* idType488 = NULL;
    panda$core$String* $tmp490;
    panda$core$String* $tmp491;
    org$pandalanguage$pandac$Type* $tmp492;
    org$pandalanguage$pandac$Type* $tmp493;
    org$pandalanguage$pandac$Type* $tmp494;
    org$pandalanguage$pandac$FieldDecl* field497 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp498;
    org$pandalanguage$pandac$FieldDecl* $tmp499;
    int $tmp383;
    {
        memset(&doccomment384, 0, sizeof(doccomment384));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp385 = doccomment384;
                $tmp386 = NULL;
                doccomment384 = $tmp386;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
            }
        }
        }
        else {
        {
            int $tmp389;
            {
                $tmp391 = p_rawDoccomment;
                $match$136_13390 = $tmp391;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp391));
                panda$core$Bit $tmp392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_13390->$rawValue, ((panda$core$Int64) { 37 }));
                if ($tmp392.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp394 = ((org$pandalanguage$pandac$Position*) ((char*) $match$136_13390->$data + 0));
                    position393 = *$tmp394;
                    panda$core$String** $tmp396 = ((panda$core$String**) ((char*) $match$136_13390->$data + 16));
                    text395 = *$tmp396;
                    {
                        $tmp397 = doccomment384;
                        $tmp398 = text395;
                        doccomment384 = $tmp398;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp397));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp389 = -1;
            goto $l387;
            $l387:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
            switch ($tmp389) {
                case -1: goto $l399;
            }
            $l399:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp403 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp402 = $tmp403;
        $tmp401 = $tmp402;
        annotations400 = $tmp401;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp402));
        memset(&fieldKind404, 0, sizeof(fieldKind404));
        int $tmp407;
        {
            $tmp409 = p_varDecl;
            $match$145_9408 = $tmp409;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp409));
            panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$145_9408->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp410.value) {
            {
                org$pandalanguage$pandac$Variable$Kind* $tmp412 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$145_9408->$data + 16));
                kind411 = *$tmp412;
                panda$collections$ImmutableArray** $tmp414 = ((panda$collections$ImmutableArray**) ((char*) $match$145_9408->$data + 24));
                decls413 = *$tmp414;
                {
                    $match$147_17415 = kind411;
                    panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_17415.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp416.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp417, ((panda$core$Int64) { 0 }));
                        fieldKind404 = $tmp417;
                    }
                    }
                    else {
                    panda$core$Bit $tmp418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_17415.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp418.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp419, ((panda$core$Int64) { 1 }));
                        fieldKind404 = $tmp419;
                    }
                    }
                    else {
                    panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_17415.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp420.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp421, ((panda$core$Int64) { 2 }));
                        fieldKind404 = $tmp421;
                        panda$core$Int64 $tmp422 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                        panda$core$Int64 $tmp423 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations400->flags, $tmp422);
                        annotations400->flags = $tmp423;
                    }
                    }
                    else {
                    panda$core$Bit $tmp424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_17415.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp424.value) {
                    {
                        org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp425, ((panda$core$Int64) { 3 }));
                        fieldKind404 = $tmp425;
                    }
                    }
                    }
                    }
                    }
                }
                {
                    int $tmp428;
                    {
                        ITable* $tmp432 = ((panda$collections$Iterable*) decls413)->$class->itable;
                        while ($tmp432->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp432 = $tmp432->next;
                        }
                        $fn434 $tmp433 = $tmp432->methods[0];
                        panda$collections$Iterator* $tmp435 = $tmp433(((panda$collections$Iterable*) decls413));
                        $tmp431 = $tmp435;
                        $tmp430 = $tmp431;
                        Iter$158$17429 = $tmp430;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp430));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp431));
                        $l436:;
                        ITable* $tmp439 = Iter$158$17429->$class->itable;
                        while ($tmp439->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp439 = $tmp439->next;
                        }
                        $fn441 $tmp440 = $tmp439->methods[0];
                        panda$core$Bit $tmp442 = $tmp440(Iter$158$17429);
                        panda$core$Bit $tmp443 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp442);
                        bool $tmp438 = $tmp443.value;
                        if (!$tmp438) goto $l437;
                        {
                            int $tmp446;
                            {
                                ITable* $tmp450 = Iter$158$17429->$class->itable;
                                while ($tmp450->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp450 = $tmp450->next;
                                }
                                $fn452 $tmp451 = $tmp450->methods[1];
                                panda$core$Object* $tmp453 = $tmp451(Iter$158$17429);
                                $tmp449 = $tmp453;
                                $tmp448 = ((org$pandalanguage$pandac$ASTNode*) $tmp449);
                                decl447 = $tmp448;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp448));
                                panda$core$Panda$unref$panda$core$Object($tmp449);
                                int $tmp456;
                                {
                                    $tmp458 = decl447;
                                    $match$159_21457 = $tmp458;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp458));
                                    panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$159_21457->$rawValue, ((panda$core$Int64) { 13 }));
                                    if ($tmp459.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp461 = ((org$pandalanguage$pandac$Position*) ((char*) $match$159_21457->$data + 0));
                                        declPosition460 = *$tmp461;
                                        org$pandalanguage$pandac$ASTNode** $tmp463 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$159_21457->$data + 16));
                                        target462 = *$tmp463;
                                        org$pandalanguage$pandac$ASTNode** $tmp465 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$159_21457->$data + 24));
                                        value464 = *$tmp465;
                                        int $tmp468;
                                        {
                                            memset(&name469, 0, sizeof(name469));
                                            memset(&type470, 0, sizeof(type470));
                                            int $tmp473;
                                            {
                                                $tmp475 = target462;
                                                $match$163_29474 = $tmp475;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp475));
                                                panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$163_29474->$rawValue, ((panda$core$Int64) { 20 }));
                                                if ($tmp476.value) {
                                                {
                                                    panda$core$String** $tmp478 = ((panda$core$String**) ((char*) $match$163_29474->$data + 16));
                                                    id477 = *$tmp478;
                                                    {
                                                        $tmp479 = name469;
                                                        $tmp480 = id477;
                                                        name469 = $tmp480;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp480));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
                                                    }
                                                    {
                                                        $tmp481 = type470;
                                                        org$pandalanguage$pandac$Type* $tmp484 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                                                        $tmp483 = $tmp484;
                                                        $tmp482 = $tmp483;
                                                        type470 = $tmp482;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp482));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
                                                    }
                                                }
                                                }
                                                else {
                                                panda$core$Bit $tmp485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$163_29474->$rawValue, ((panda$core$Int64) { 41 }));
                                                if ($tmp485.value) {
                                                {
                                                    panda$core$String** $tmp487 = ((panda$core$String**) ((char*) $match$163_29474->$data + 16));
                                                    id486 = *$tmp487;
                                                    org$pandalanguage$pandac$ASTNode** $tmp489 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$163_29474->$data + 24));
                                                    idType488 = *$tmp489;
                                                    {
                                                        $tmp490 = name469;
                                                        $tmp491 = id486;
                                                        name469 = $tmp491;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp491));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
                                                    }
                                                    {
                                                        $tmp492 = type470;
                                                        org$pandalanguage$pandac$Type* $tmp495 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, idType488);
                                                        $tmp494 = $tmp495;
                                                        $tmp493 = $tmp494;
                                                        type470 = $tmp493;
                                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp493));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp494));
                                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp492));
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
                                            $tmp473 = -1;
                                            goto $l471;
                                            $l471:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp475));
                                            switch ($tmp473) {
                                                case -1: goto $l496;
                                            }
                                            $l496:;
                                            org$pandalanguage$pandac$FieldDecl* $tmp500 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                                            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp500, p_owner, declPosition460, doccomment384, annotations400, fieldKind404, name469, type470, value464);
                                            $tmp499 = $tmp500;
                                            $tmp498 = $tmp499;
                                            field497 = $tmp498;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp498));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp499));
                                            org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field497));
                                            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field497));
                                        }
                                        $tmp468 = -1;
                                        goto $l466;
                                        $l466:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name469));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) type470));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) field497));
                                        field497 = NULL;
                                        switch ($tmp468) {
                                            case -1: goto $l501;
                                        }
                                        $l501:;
                                    }
                                    }
                                    else {
                                    {
                                        PANDA_ASSERT(((panda$core$Bit) { false }).value);
                                    }
                                    }
                                }
                                $tmp456 = -1;
                                goto $l454;
                                $l454:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
                                switch ($tmp456) {
                                    case -1: goto $l502;
                                }
                                $l502:;
                            }
                            $tmp446 = -1;
                            goto $l444;
                            $l444:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl447));
                            decl447 = NULL;
                            switch ($tmp446) {
                                case -1: goto $l503;
                            }
                            $l503:;
                        }
                        goto $l436;
                        $l437:;
                    }
                    $tmp428 = -1;
                    goto $l426;
                    $l426:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$158$17429));
                    Iter$158$17429 = NULL;
                    switch ($tmp428) {
                        case -1: goto $l504;
                    }
                    $l504:;
                }
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
        }
        $tmp407 = -1;
        goto $l405;
        $l405:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
        switch ($tmp407) {
            case -1: goto $l505;
        }
        $l505:;
    }
    $tmp383 = -1;
    goto $l381;
    $l381:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment384));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations400));
    annotations400 = NULL;
    switch ($tmp383) {
        case -1: goto $l506;
    }
    $l506:;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$188_9510 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp511;
    org$pandalanguage$pandac$ASTNode* test513 = NULL;
    panda$core$Int64 $returnValue515;
    org$pandalanguage$pandac$ASTNode* left520 = NULL;
    org$pandalanguage$pandac$ASTNode* right522 = NULL;
    panda$collections$ImmutableArray* statements534 = NULL;
    panda$core$Int64 result536;
    panda$collections$Iterator* Iter$197$17540 = NULL;
    panda$collections$Iterator* $tmp541;
    panda$collections$Iterator* $tmp542;
    org$pandalanguage$pandac$ASTNode* s558 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp559;
    panda$core$Object* $tmp560;
    org$pandalanguage$pandac$ASTNode* target575 = NULL;
    panda$collections$ImmutableArray* args577 = NULL;
    panda$core$Int64 result579;
    panda$collections$Iterator* Iter$205$17584 = NULL;
    panda$collections$Iterator* $tmp585;
    panda$collections$Iterator* $tmp586;
    org$pandalanguage$pandac$ASTNode* a602 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp603;
    panda$core$Object* $tmp604;
    org$pandalanguage$pandac$ASTNode* base616 = NULL;
    org$pandalanguage$pandac$ASTNode* value625 = NULL;
    panda$collections$ImmutableArray* statements633 = NULL;
    org$pandalanguage$pandac$ASTNode* test635 = NULL;
    panda$core$Int64 result637;
    panda$collections$Iterator* Iter$220$17642 = NULL;
    panda$collections$Iterator* $tmp643;
    panda$collections$Iterator* $tmp644;
    org$pandalanguage$pandac$ASTNode* s660 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp661;
    panda$core$Object* $tmp662;
    org$pandalanguage$pandac$ASTNode* base674 = NULL;
    org$pandalanguage$pandac$ASTNode* list680 = NULL;
    panda$collections$ImmutableArray* statements682 = NULL;
    panda$core$Int64 result684;
    panda$collections$Iterator* Iter$228$17689 = NULL;
    panda$collections$Iterator* $tmp690;
    panda$collections$Iterator* $tmp691;
    org$pandalanguage$pandac$ASTNode* s707 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp708;
    panda$core$Object* $tmp709;
    org$pandalanguage$pandac$ASTNode* test727 = NULL;
    panda$collections$ImmutableArray* ifTrue729 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse731 = NULL;
    panda$core$Int64 result733;
    panda$collections$Iterator* Iter$238$17738 = NULL;
    panda$collections$Iterator* $tmp739;
    panda$collections$Iterator* $tmp740;
    org$pandalanguage$pandac$ASTNode* s756 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp757;
    panda$core$Object* $tmp758;
    panda$collections$ImmutableArray* statements775 = NULL;
    panda$core$Int64 result777;
    panda$collections$Iterator* Iter$249$17781 = NULL;
    panda$collections$Iterator* $tmp782;
    panda$collections$Iterator* $tmp783;
    org$pandalanguage$pandac$ASTNode* s799 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp800;
    panda$core$Object* $tmp801;
    org$pandalanguage$pandac$ASTNode* value813 = NULL;
    panda$collections$ImmutableArray* whens815 = NULL;
    panda$collections$ImmutableArray* other817 = NULL;
    panda$core$Int64 result819;
    panda$collections$Iterator* Iter$255$17824 = NULL;
    panda$collections$Iterator* $tmp825;
    panda$collections$Iterator* $tmp826;
    org$pandalanguage$pandac$ASTNode* w842 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp843;
    panda$core$Object* $tmp844;
    panda$collections$Iterator* Iter$259$21856 = NULL;
    panda$collections$Iterator* $tmp857;
    panda$collections$Iterator* $tmp858;
    org$pandalanguage$pandac$ASTNode* s874 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp875;
    panda$core$Object* $tmp876;
    org$pandalanguage$pandac$ASTNode* base894 = NULL;
    org$pandalanguage$pandac$ASTNode* value907 = NULL;
    panda$collections$ImmutableArray* decls927 = NULL;
    panda$core$Int64 result929;
    panda$collections$Iterator* Iter$289$17933 = NULL;
    panda$collections$Iterator* $tmp934;
    panda$collections$Iterator* $tmp935;
    org$pandalanguage$pandac$ASTNode* decl951 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp952;
    panda$core$Object* $tmp953;
    panda$collections$ImmutableArray* tests965 = NULL;
    panda$collections$ImmutableArray* statements967 = NULL;
    panda$core$Int64 result969;
    panda$collections$Iterator* Iter$295$17973 = NULL;
    panda$collections$Iterator* $tmp974;
    panda$collections$Iterator* $tmp975;
    org$pandalanguage$pandac$ASTNode* test991 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp992;
    panda$core$Object* $tmp993;
    panda$collections$Iterator* Iter$298$171005 = NULL;
    panda$collections$Iterator* $tmp1006;
    panda$collections$Iterator* $tmp1007;
    org$pandalanguage$pandac$ASTNode* s1023 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1024;
    panda$core$Object* $tmp1025;
    org$pandalanguage$pandac$ASTNode* test1037 = NULL;
    panda$collections$ImmutableArray* statements1039 = NULL;
    panda$core$Int64 result1041;
    panda$collections$Iterator* Iter$304$171046 = NULL;
    panda$collections$Iterator* $tmp1047;
    panda$collections$Iterator* $tmp1048;
    org$pandalanguage$pandac$ASTNode* s1064 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1065;
    panda$core$Object* $tmp1066;
    int $tmp509;
    {
        $tmp511 = p_node;
        $match$188_9510 = $tmp511;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp511));
        panda$core$Bit $tmp512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp512.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp514 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_9510->$data + 16));
            test513 = *$tmp514;
            panda$core$Int64 $tmp516 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test513);
            $returnValue515 = $tmp516;
            $tmp509 = 0;
            goto $l507;
            $l517:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp519.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp521 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_9510->$data + 16));
            left520 = *$tmp521;
            org$pandalanguage$pandac$ASTNode** $tmp523 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_9510->$data + 32));
            right522 = *$tmp523;
            panda$core$Int64 $tmp524 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, left520);
            panda$core$Int64 $tmp525 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp524);
            panda$core$Int64 $tmp526 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, right522);
            panda$core$Int64 $tmp527 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp525, $tmp526);
            $returnValue515 = $tmp527;
            $tmp509 = 1;
            goto $l507;
            $l528:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp530.value) {
        {
            $returnValue515 = ((panda$core$Int64) { 1 });
            $tmp509 = 2;
            goto $l507;
            $l531:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp533.value) {
        {
            panda$collections$ImmutableArray** $tmp535 = ((panda$collections$ImmutableArray**) ((char*) $match$188_9510->$data + 16));
            statements534 = *$tmp535;
            result536 = ((panda$core$Int64) { 0 });
            {
                int $tmp539;
                {
                    ITable* $tmp543 = ((panda$collections$Iterable*) statements534)->$class->itable;
                    while ($tmp543->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp543 = $tmp543->next;
                    }
                    $fn545 $tmp544 = $tmp543->methods[0];
                    panda$collections$Iterator* $tmp546 = $tmp544(((panda$collections$Iterable*) statements534));
                    $tmp542 = $tmp546;
                    $tmp541 = $tmp542;
                    Iter$197$17540 = $tmp541;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp541));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
                    $l547:;
                    ITable* $tmp550 = Iter$197$17540->$class->itable;
                    while ($tmp550->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp550 = $tmp550->next;
                    }
                    $fn552 $tmp551 = $tmp550->methods[0];
                    panda$core$Bit $tmp553 = $tmp551(Iter$197$17540);
                    panda$core$Bit $tmp554 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp553);
                    bool $tmp549 = $tmp554.value;
                    if (!$tmp549) goto $l548;
                    {
                        int $tmp557;
                        {
                            ITable* $tmp561 = Iter$197$17540->$class->itable;
                            while ($tmp561->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp561 = $tmp561->next;
                            }
                            $fn563 $tmp562 = $tmp561->methods[1];
                            panda$core$Object* $tmp564 = $tmp562(Iter$197$17540);
                            $tmp560 = $tmp564;
                            $tmp559 = ((org$pandalanguage$pandac$ASTNode*) $tmp560);
                            s558 = $tmp559;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp559));
                            panda$core$Panda$unref$panda$core$Object($tmp560);
                            panda$core$Int64 $tmp565 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s558);
                            panda$core$Int64 $tmp566 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result536, $tmp565);
                            result536 = $tmp566;
                        }
                        $tmp557 = -1;
                        goto $l555;
                        $l555:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s558));
                        s558 = NULL;
                        switch ($tmp557) {
                            case -1: goto $l567;
                        }
                        $l567:;
                    }
                    goto $l547;
                    $l548:;
                }
                $tmp539 = -1;
                goto $l537;
                $l537:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$197$17540));
                Iter$197$17540 = NULL;
                switch ($tmp539) {
                    case -1: goto $l568;
                }
                $l568:;
            }
            $returnValue515 = result536;
            $tmp509 = 3;
            goto $l507;
            $l569:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp571.value) {
        {
            $returnValue515 = ((panda$core$Int64) { 1 });
            $tmp509 = 4;
            goto $l507;
            $l572:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp574.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp576 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_9510->$data + 16));
            target575 = *$tmp576;
            panda$collections$ImmutableArray** $tmp578 = ((panda$collections$ImmutableArray**) ((char*) $match$188_9510->$data + 24));
            args577 = *$tmp578;
            panda$core$Int64 $tmp580 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, target575);
            result579 = $tmp580;
            {
                int $tmp583;
                {
                    ITable* $tmp587 = ((panda$collections$Iterable*) args577)->$class->itable;
                    while ($tmp587->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp587 = $tmp587->next;
                    }
                    $fn589 $tmp588 = $tmp587->methods[0];
                    panda$collections$Iterator* $tmp590 = $tmp588(((panda$collections$Iterable*) args577));
                    $tmp586 = $tmp590;
                    $tmp585 = $tmp586;
                    Iter$205$17584 = $tmp585;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp585));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp586));
                    $l591:;
                    ITable* $tmp594 = Iter$205$17584->$class->itable;
                    while ($tmp594->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp594 = $tmp594->next;
                    }
                    $fn596 $tmp595 = $tmp594->methods[0];
                    panda$core$Bit $tmp597 = $tmp595(Iter$205$17584);
                    panda$core$Bit $tmp598 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp597);
                    bool $tmp593 = $tmp598.value;
                    if (!$tmp593) goto $l592;
                    {
                        int $tmp601;
                        {
                            ITable* $tmp605 = Iter$205$17584->$class->itable;
                            while ($tmp605->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp605 = $tmp605->next;
                            }
                            $fn607 $tmp606 = $tmp605->methods[1];
                            panda$core$Object* $tmp608 = $tmp606(Iter$205$17584);
                            $tmp604 = $tmp608;
                            $tmp603 = ((org$pandalanguage$pandac$ASTNode*) $tmp604);
                            a602 = $tmp603;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp603));
                            panda$core$Panda$unref$panda$core$Object($tmp604);
                            panda$core$Int64 $tmp609 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, a602);
                            panda$core$Int64 $tmp610 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result579, $tmp609);
                            result579 = $tmp610;
                        }
                        $tmp601 = -1;
                        goto $l599;
                        $l599:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a602));
                        a602 = NULL;
                        switch ($tmp601) {
                            case -1: goto $l611;
                        }
                        $l611:;
                    }
                    goto $l591;
                    $l592:;
                }
                $tmp583 = -1;
                goto $l581;
                $l581:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$205$17584));
                Iter$205$17584 = NULL;
                switch ($tmp583) {
                    case -1: goto $l612;
                }
                $l612:;
            }
            $returnValue515 = result579;
            $tmp509 = 5;
            goto $l507;
            $l613:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp615.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp617 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_9510->$data + 16));
            base616 = *$tmp617;
            panda$core$Int64 $tmp618 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base616);
            $returnValue515 = $tmp618;
            $tmp509 = 6;
            goto $l507;
            $l619:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp621.value) {
        {
            $returnValue515 = ((panda$core$Int64) { 1 });
            $tmp509 = 7;
            goto $l507;
            $l622:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp624.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp626 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_9510->$data + 24));
            value625 = *$tmp626;
            if (((panda$core$Bit) { value625 == NULL }).value) {
            {
                $returnValue515 = ((panda$core$Int64) { 0 });
                $tmp509 = 8;
                goto $l507;
                $l627:;
                return $returnValue515;
            }
            }
            panda$core$Int64 $tmp629 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value625);
            $returnValue515 = $tmp629;
            $tmp509 = 9;
            goto $l507;
            $l630:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp632.value) {
        {
            panda$collections$ImmutableArray** $tmp634 = ((panda$collections$ImmutableArray**) ((char*) $match$188_9510->$data + 24));
            statements633 = *$tmp634;
            org$pandalanguage$pandac$ASTNode** $tmp636 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_9510->$data + 32));
            test635 = *$tmp636;
            panda$core$Int64 $tmp638 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test635);
            result637 = $tmp638;
            {
                int $tmp641;
                {
                    ITable* $tmp645 = ((panda$collections$Iterable*) statements633)->$class->itable;
                    while ($tmp645->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp645 = $tmp645->next;
                    }
                    $fn647 $tmp646 = $tmp645->methods[0];
                    panda$collections$Iterator* $tmp648 = $tmp646(((panda$collections$Iterable*) statements633));
                    $tmp644 = $tmp648;
                    $tmp643 = $tmp644;
                    Iter$220$17642 = $tmp643;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp643));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
                    $l649:;
                    ITable* $tmp652 = Iter$220$17642->$class->itable;
                    while ($tmp652->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp652 = $tmp652->next;
                    }
                    $fn654 $tmp653 = $tmp652->methods[0];
                    panda$core$Bit $tmp655 = $tmp653(Iter$220$17642);
                    panda$core$Bit $tmp656 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp655);
                    bool $tmp651 = $tmp656.value;
                    if (!$tmp651) goto $l650;
                    {
                        int $tmp659;
                        {
                            ITable* $tmp663 = Iter$220$17642->$class->itable;
                            while ($tmp663->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp663 = $tmp663->next;
                            }
                            $fn665 $tmp664 = $tmp663->methods[1];
                            panda$core$Object* $tmp666 = $tmp664(Iter$220$17642);
                            $tmp662 = $tmp666;
                            $tmp661 = ((org$pandalanguage$pandac$ASTNode*) $tmp662);
                            s660 = $tmp661;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp661));
                            panda$core$Panda$unref$panda$core$Object($tmp662);
                            panda$core$Int64 $tmp667 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s660);
                            panda$core$Int64 $tmp668 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result637, $tmp667);
                            result637 = $tmp668;
                        }
                        $tmp659 = -1;
                        goto $l657;
                        $l657:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s660));
                        s660 = NULL;
                        switch ($tmp659) {
                            case -1: goto $l669;
                        }
                        $l669:;
                    }
                    goto $l649;
                    $l650:;
                }
                $tmp641 = -1;
                goto $l639;
                $l639:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$220$17642));
                Iter$220$17642 = NULL;
                switch ($tmp641) {
                    case -1: goto $l670;
                }
                $l670:;
            }
            $returnValue515 = result637;
            $tmp509 = 10;
            goto $l507;
            $l671:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp673.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp675 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_9510->$data + 16));
            base674 = *$tmp675;
            panda$core$Int64 $tmp676 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base674);
            $returnValue515 = $tmp676;
            $tmp509 = 11;
            goto $l507;
            $l677:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp679.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp681 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_9510->$data + 32));
            list680 = *$tmp681;
            panda$collections$ImmutableArray** $tmp683 = ((panda$collections$ImmutableArray**) ((char*) $match$188_9510->$data + 40));
            statements682 = *$tmp683;
            panda$core$Int64 $tmp685 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, list680);
            result684 = $tmp685;
            {
                int $tmp688;
                {
                    ITable* $tmp692 = ((panda$collections$Iterable*) statements682)->$class->itable;
                    while ($tmp692->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp692 = $tmp692->next;
                    }
                    $fn694 $tmp693 = $tmp692->methods[0];
                    panda$collections$Iterator* $tmp695 = $tmp693(((panda$collections$Iterable*) statements682));
                    $tmp691 = $tmp695;
                    $tmp690 = $tmp691;
                    Iter$228$17689 = $tmp690;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp690));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
                    $l696:;
                    ITable* $tmp699 = Iter$228$17689->$class->itable;
                    while ($tmp699->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp699 = $tmp699->next;
                    }
                    $fn701 $tmp700 = $tmp699->methods[0];
                    panda$core$Bit $tmp702 = $tmp700(Iter$228$17689);
                    panda$core$Bit $tmp703 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp702);
                    bool $tmp698 = $tmp703.value;
                    if (!$tmp698) goto $l697;
                    {
                        int $tmp706;
                        {
                            ITable* $tmp710 = Iter$228$17689->$class->itable;
                            while ($tmp710->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp710 = $tmp710->next;
                            }
                            $fn712 $tmp711 = $tmp710->methods[1];
                            panda$core$Object* $tmp713 = $tmp711(Iter$228$17689);
                            $tmp709 = $tmp713;
                            $tmp708 = ((org$pandalanguage$pandac$ASTNode*) $tmp709);
                            s707 = $tmp708;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp708));
                            panda$core$Panda$unref$panda$core$Object($tmp709);
                            panda$core$Int64 $tmp714 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s707);
                            panda$core$Int64 $tmp715 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result684, $tmp714);
                            result684 = $tmp715;
                        }
                        $tmp706 = -1;
                        goto $l704;
                        $l704:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s707));
                        s707 = NULL;
                        switch ($tmp706) {
                            case -1: goto $l716;
                        }
                        $l716:;
                    }
                    goto $l696;
                    $l697:;
                }
                $tmp688 = -1;
                goto $l686;
                $l686:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$228$17689));
                Iter$228$17689 = NULL;
                switch ($tmp688) {
                    case -1: goto $l717;
                }
                $l717:;
            }
            $returnValue515 = result684;
            $tmp509 = 12;
            goto $l507;
            $l718:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp720.value) {
        {
            $returnValue515 = ((panda$core$Int64) { 0 });
            $tmp509 = 13;
            goto $l507;
            $l721:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp723.value) {
        {
            $returnValue515 = ((panda$core$Int64) { 1 });
            $tmp509 = 14;
            goto $l507;
            $l724:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp726.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp728 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_9510->$data + 16));
            test727 = *$tmp728;
            panda$collections$ImmutableArray** $tmp730 = ((panda$collections$ImmutableArray**) ((char*) $match$188_9510->$data + 24));
            ifTrue729 = *$tmp730;
            org$pandalanguage$pandac$ASTNode** $tmp732 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_9510->$data + 32));
            ifFalse731 = *$tmp732;
            panda$core$Int64 $tmp734 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test727);
            result733 = $tmp734;
            {
                int $tmp737;
                {
                    ITable* $tmp741 = ((panda$collections$Iterable*) ifTrue729)->$class->itable;
                    while ($tmp741->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp741 = $tmp741->next;
                    }
                    $fn743 $tmp742 = $tmp741->methods[0];
                    panda$collections$Iterator* $tmp744 = $tmp742(((panda$collections$Iterable*) ifTrue729));
                    $tmp740 = $tmp744;
                    $tmp739 = $tmp740;
                    Iter$238$17738 = $tmp739;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp739));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp740));
                    $l745:;
                    ITable* $tmp748 = Iter$238$17738->$class->itable;
                    while ($tmp748->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp748 = $tmp748->next;
                    }
                    $fn750 $tmp749 = $tmp748->methods[0];
                    panda$core$Bit $tmp751 = $tmp749(Iter$238$17738);
                    panda$core$Bit $tmp752 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp751);
                    bool $tmp747 = $tmp752.value;
                    if (!$tmp747) goto $l746;
                    {
                        int $tmp755;
                        {
                            ITable* $tmp759 = Iter$238$17738->$class->itable;
                            while ($tmp759->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp759 = $tmp759->next;
                            }
                            $fn761 $tmp760 = $tmp759->methods[1];
                            panda$core$Object* $tmp762 = $tmp760(Iter$238$17738);
                            $tmp758 = $tmp762;
                            $tmp757 = ((org$pandalanguage$pandac$ASTNode*) $tmp758);
                            s756 = $tmp757;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp757));
                            panda$core$Panda$unref$panda$core$Object($tmp758);
                            panda$core$Int64 $tmp763 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s756);
                            panda$core$Int64 $tmp764 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result733, $tmp763);
                            result733 = $tmp764;
                        }
                        $tmp755 = -1;
                        goto $l753;
                        $l753:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s756));
                        s756 = NULL;
                        switch ($tmp755) {
                            case -1: goto $l765;
                        }
                        $l765:;
                    }
                    goto $l745;
                    $l746:;
                }
                $tmp737 = -1;
                goto $l735;
                $l735:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$238$17738));
                Iter$238$17738 = NULL;
                switch ($tmp737) {
                    case -1: goto $l766;
                }
                $l766:;
            }
            if (((panda$core$Bit) { ifFalse731 != NULL }).value) {
            {
                panda$core$Int64 $tmp767 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, ifFalse731);
                panda$core$Int64 $tmp768 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result733, $tmp767);
                result733 = $tmp768;
            }
            }
            $returnValue515 = result733;
            $tmp509 = 15;
            goto $l507;
            $l769:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp771.value) {
        {
            $returnValue515 = ((panda$core$Int64) { 1 });
            $tmp509 = 16;
            goto $l507;
            $l772:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp774.value) {
        {
            panda$collections$ImmutableArray** $tmp776 = ((panda$collections$ImmutableArray**) ((char*) $match$188_9510->$data + 24));
            statements775 = *$tmp776;
            result777 = ((panda$core$Int64) { 0 });
            {
                int $tmp780;
                {
                    ITable* $tmp784 = ((panda$collections$Iterable*) statements775)->$class->itable;
                    while ($tmp784->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp784 = $tmp784->next;
                    }
                    $fn786 $tmp785 = $tmp784->methods[0];
                    panda$collections$Iterator* $tmp787 = $tmp785(((panda$collections$Iterable*) statements775));
                    $tmp783 = $tmp787;
                    $tmp782 = $tmp783;
                    Iter$249$17781 = $tmp782;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp782));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp783));
                    $l788:;
                    ITable* $tmp791 = Iter$249$17781->$class->itable;
                    while ($tmp791->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp791 = $tmp791->next;
                    }
                    $fn793 $tmp792 = $tmp791->methods[0];
                    panda$core$Bit $tmp794 = $tmp792(Iter$249$17781);
                    panda$core$Bit $tmp795 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp794);
                    bool $tmp790 = $tmp795.value;
                    if (!$tmp790) goto $l789;
                    {
                        int $tmp798;
                        {
                            ITable* $tmp802 = Iter$249$17781->$class->itable;
                            while ($tmp802->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp802 = $tmp802->next;
                            }
                            $fn804 $tmp803 = $tmp802->methods[1];
                            panda$core$Object* $tmp805 = $tmp803(Iter$249$17781);
                            $tmp801 = $tmp805;
                            $tmp800 = ((org$pandalanguage$pandac$ASTNode*) $tmp801);
                            s799 = $tmp800;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp800));
                            panda$core$Panda$unref$panda$core$Object($tmp801);
                            panda$core$Int64 $tmp806 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s799);
                            panda$core$Int64 $tmp807 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result777, $tmp806);
                            result777 = $tmp807;
                        }
                        $tmp798 = -1;
                        goto $l796;
                        $l796:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s799));
                        s799 = NULL;
                        switch ($tmp798) {
                            case -1: goto $l808;
                        }
                        $l808:;
                    }
                    goto $l788;
                    $l789:;
                }
                $tmp780 = -1;
                goto $l778;
                $l778:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$249$17781));
                Iter$249$17781 = NULL;
                switch ($tmp780) {
                    case -1: goto $l809;
                }
                $l809:;
            }
            $returnValue515 = result777;
            $tmp509 = 17;
            goto $l507;
            $l810:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp812.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp814 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_9510->$data + 16));
            value813 = *$tmp814;
            panda$collections$ImmutableArray** $tmp816 = ((panda$collections$ImmutableArray**) ((char*) $match$188_9510->$data + 24));
            whens815 = *$tmp816;
            panda$collections$ImmutableArray** $tmp818 = ((panda$collections$ImmutableArray**) ((char*) $match$188_9510->$data + 32));
            other817 = *$tmp818;
            panda$core$Int64 $tmp820 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value813);
            result819 = $tmp820;
            {
                int $tmp823;
                {
                    ITable* $tmp827 = ((panda$collections$Iterable*) whens815)->$class->itable;
                    while ($tmp827->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp827 = $tmp827->next;
                    }
                    $fn829 $tmp828 = $tmp827->methods[0];
                    panda$collections$Iterator* $tmp830 = $tmp828(((panda$collections$Iterable*) whens815));
                    $tmp826 = $tmp830;
                    $tmp825 = $tmp826;
                    Iter$255$17824 = $tmp825;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp825));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp826));
                    $l831:;
                    ITable* $tmp834 = Iter$255$17824->$class->itable;
                    while ($tmp834->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp834 = $tmp834->next;
                    }
                    $fn836 $tmp835 = $tmp834->methods[0];
                    panda$core$Bit $tmp837 = $tmp835(Iter$255$17824);
                    panda$core$Bit $tmp838 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp837);
                    bool $tmp833 = $tmp838.value;
                    if (!$tmp833) goto $l832;
                    {
                        int $tmp841;
                        {
                            ITable* $tmp845 = Iter$255$17824->$class->itable;
                            while ($tmp845->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp845 = $tmp845->next;
                            }
                            $fn847 $tmp846 = $tmp845->methods[1];
                            panda$core$Object* $tmp848 = $tmp846(Iter$255$17824);
                            $tmp844 = $tmp848;
                            $tmp843 = ((org$pandalanguage$pandac$ASTNode*) $tmp844);
                            w842 = $tmp843;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp843));
                            panda$core$Panda$unref$panda$core$Object($tmp844);
                            panda$core$Int64 $tmp849 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, w842);
                            panda$core$Int64 $tmp850 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result819, $tmp849);
                            result819 = $tmp850;
                        }
                        $tmp841 = -1;
                        goto $l839;
                        $l839:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w842));
                        w842 = NULL;
                        switch ($tmp841) {
                            case -1: goto $l851;
                        }
                        $l851:;
                    }
                    goto $l831;
                    $l832:;
                }
                $tmp823 = -1;
                goto $l821;
                $l821:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$255$17824));
                Iter$255$17824 = NULL;
                switch ($tmp823) {
                    case -1: goto $l852;
                }
                $l852:;
            }
            if (((panda$core$Bit) { other817 != NULL }).value) {
            {
                {
                    int $tmp855;
                    {
                        ITable* $tmp859 = ((panda$collections$Iterable*) other817)->$class->itable;
                        while ($tmp859->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp859 = $tmp859->next;
                        }
                        $fn861 $tmp860 = $tmp859->methods[0];
                        panda$collections$Iterator* $tmp862 = $tmp860(((panda$collections$Iterable*) other817));
                        $tmp858 = $tmp862;
                        $tmp857 = $tmp858;
                        Iter$259$21856 = $tmp857;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp857));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp858));
                        $l863:;
                        ITable* $tmp866 = Iter$259$21856->$class->itable;
                        while ($tmp866->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp866 = $tmp866->next;
                        }
                        $fn868 $tmp867 = $tmp866->methods[0];
                        panda$core$Bit $tmp869 = $tmp867(Iter$259$21856);
                        panda$core$Bit $tmp870 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp869);
                        bool $tmp865 = $tmp870.value;
                        if (!$tmp865) goto $l864;
                        {
                            int $tmp873;
                            {
                                ITable* $tmp877 = Iter$259$21856->$class->itable;
                                while ($tmp877->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp877 = $tmp877->next;
                                }
                                $fn879 $tmp878 = $tmp877->methods[1];
                                panda$core$Object* $tmp880 = $tmp878(Iter$259$21856);
                                $tmp876 = $tmp880;
                                $tmp875 = ((org$pandalanguage$pandac$ASTNode*) $tmp876);
                                s874 = $tmp875;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp875));
                                panda$core$Panda$unref$panda$core$Object($tmp876);
                                panda$core$Int64 $tmp881 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s874);
                                panda$core$Int64 $tmp882 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result819, $tmp881);
                                result819 = $tmp882;
                            }
                            $tmp873 = -1;
                            goto $l871;
                            $l871:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s874));
                            s874 = NULL;
                            switch ($tmp873) {
                                case -1: goto $l883;
                            }
                            $l883:;
                        }
                        goto $l863;
                        $l864:;
                    }
                    $tmp855 = -1;
                    goto $l853;
                    $l853:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$259$21856));
                    Iter$259$21856 = NULL;
                    switch ($tmp855) {
                        case -1: goto $l884;
                    }
                    $l884:;
                }
            }
            }
            $returnValue515 = result819;
            $tmp509 = 18;
            goto $l507;
            $l885:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp887.value) {
        {
            $returnValue515 = ((panda$core$Int64) { 1 });
            $tmp509 = 19;
            goto $l507;
            $l888:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp890 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp890.value) {
        {
            $returnValue515 = ((panda$core$Int64) { 0 });
            $tmp509 = 20;
            goto $l507;
            $l891:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp893.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp895 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_9510->$data + 24));
            base894 = *$tmp895;
            panda$core$Int64 $tmp896 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, base894);
            panda$core$Int64 $tmp897 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), $tmp896);
            $returnValue515 = $tmp897;
            $tmp509 = 21;
            goto $l507;
            $l898:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp900.value) {
        {
            $returnValue515 = ((panda$core$Int64) { 1 });
            $tmp509 = 22;
            goto $l507;
            $l901:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp903.value) {
        {
            $returnValue515 = ((panda$core$Int64) { 1 });
            $tmp509 = 23;
            goto $l507;
            $l904:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp906.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp908 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_9510->$data + 16));
            value907 = *$tmp908;
            if (((panda$core$Bit) { value907 == NULL }).value) {
            {
                $returnValue515 = ((panda$core$Int64) { 0 });
                $tmp509 = 24;
                goto $l507;
                $l909:;
                return $returnValue515;
            }
            }
            panda$core$Int64 $tmp911 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, value907);
            $returnValue515 = $tmp911;
            $tmp509 = 25;
            goto $l507;
            $l912:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp914.value) {
        {
            $returnValue515 = ((panda$core$Int64) { 1 });
            $tmp509 = 26;
            goto $l507;
            $l915:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp917.value) {
        {
            $returnValue515 = ((panda$core$Int64) { 1 });
            $tmp509 = 27;
            goto $l507;
            $l918:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp920.value) {
        {
            $returnValue515 = ((panda$core$Int64) { 1 });
            $tmp509 = 28;
            goto $l507;
            $l921:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp923.value) {
        {
            $returnValue515 = ((panda$core$Int64) { 0 });
            $tmp509 = 29;
            goto $l507;
            $l924:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp926.value) {
        {
            panda$collections$ImmutableArray** $tmp928 = ((panda$collections$ImmutableArray**) ((char*) $match$188_9510->$data + 24));
            decls927 = *$tmp928;
            result929 = ((panda$core$Int64) { 0 });
            {
                int $tmp932;
                {
                    ITable* $tmp936 = ((panda$collections$Iterable*) decls927)->$class->itable;
                    while ($tmp936->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp936 = $tmp936->next;
                    }
                    $fn938 $tmp937 = $tmp936->methods[0];
                    panda$collections$Iterator* $tmp939 = $tmp937(((panda$collections$Iterable*) decls927));
                    $tmp935 = $tmp939;
                    $tmp934 = $tmp935;
                    Iter$289$17933 = $tmp934;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp934));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp935));
                    $l940:;
                    ITable* $tmp943 = Iter$289$17933->$class->itable;
                    while ($tmp943->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp943 = $tmp943->next;
                    }
                    $fn945 $tmp944 = $tmp943->methods[0];
                    panda$core$Bit $tmp946 = $tmp944(Iter$289$17933);
                    panda$core$Bit $tmp947 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp946);
                    bool $tmp942 = $tmp947.value;
                    if (!$tmp942) goto $l941;
                    {
                        int $tmp950;
                        {
                            ITable* $tmp954 = Iter$289$17933->$class->itable;
                            while ($tmp954->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp954 = $tmp954->next;
                            }
                            $fn956 $tmp955 = $tmp954->methods[1];
                            panda$core$Object* $tmp957 = $tmp955(Iter$289$17933);
                            $tmp953 = $tmp957;
                            $tmp952 = ((org$pandalanguage$pandac$ASTNode*) $tmp953);
                            decl951 = $tmp952;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp952));
                            panda$core$Panda$unref$panda$core$Object($tmp953);
                            panda$core$Int64 $tmp958 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, decl951);
                            panda$core$Int64 $tmp959 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result929, $tmp958);
                            result929 = $tmp959;
                        }
                        $tmp950 = -1;
                        goto $l948;
                        $l948:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) decl951));
                        decl951 = NULL;
                        switch ($tmp950) {
                            case -1: goto $l960;
                        }
                        $l960:;
                    }
                    goto $l940;
                    $l941:;
                }
                $tmp932 = -1;
                goto $l930;
                $l930:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$289$17933));
                Iter$289$17933 = NULL;
                switch ($tmp932) {
                    case -1: goto $l961;
                }
                $l961:;
            }
            $returnValue515 = result929;
            $tmp509 = 30;
            goto $l507;
            $l962:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp964.value) {
        {
            panda$collections$ImmutableArray** $tmp966 = ((panda$collections$ImmutableArray**) ((char*) $match$188_9510->$data + 16));
            tests965 = *$tmp966;
            panda$collections$ImmutableArray** $tmp968 = ((panda$collections$ImmutableArray**) ((char*) $match$188_9510->$data + 24));
            statements967 = *$tmp968;
            result969 = ((panda$core$Int64) { 0 });
            {
                int $tmp972;
                {
                    ITable* $tmp976 = ((panda$collections$Iterable*) tests965)->$class->itable;
                    while ($tmp976->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp976 = $tmp976->next;
                    }
                    $fn978 $tmp977 = $tmp976->methods[0];
                    panda$collections$Iterator* $tmp979 = $tmp977(((panda$collections$Iterable*) tests965));
                    $tmp975 = $tmp979;
                    $tmp974 = $tmp975;
                    Iter$295$17973 = $tmp974;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp974));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp975));
                    $l980:;
                    ITable* $tmp983 = Iter$295$17973->$class->itable;
                    while ($tmp983->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp983 = $tmp983->next;
                    }
                    $fn985 $tmp984 = $tmp983->methods[0];
                    panda$core$Bit $tmp986 = $tmp984(Iter$295$17973);
                    panda$core$Bit $tmp987 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp986);
                    bool $tmp982 = $tmp987.value;
                    if (!$tmp982) goto $l981;
                    {
                        int $tmp990;
                        {
                            ITable* $tmp994 = Iter$295$17973->$class->itable;
                            while ($tmp994->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp994 = $tmp994->next;
                            }
                            $fn996 $tmp995 = $tmp994->methods[1];
                            panda$core$Object* $tmp997 = $tmp995(Iter$295$17973);
                            $tmp993 = $tmp997;
                            $tmp992 = ((org$pandalanguage$pandac$ASTNode*) $tmp993);
                            test991 = $tmp992;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp992));
                            panda$core$Panda$unref$panda$core$Object($tmp993);
                            panda$core$Int64 $tmp998 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test991);
                            panda$core$Int64 $tmp999 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result969, $tmp998);
                            result969 = $tmp999;
                        }
                        $tmp990 = -1;
                        goto $l988;
                        $l988:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) test991));
                        test991 = NULL;
                        switch ($tmp990) {
                            case -1: goto $l1000;
                        }
                        $l1000:;
                    }
                    goto $l980;
                    $l981:;
                }
                $tmp972 = -1;
                goto $l970;
                $l970:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$295$17973));
                Iter$295$17973 = NULL;
                switch ($tmp972) {
                    case -1: goto $l1001;
                }
                $l1001:;
            }
            {
                int $tmp1004;
                {
                    ITable* $tmp1008 = ((panda$collections$Iterable*) statements967)->$class->itable;
                    while ($tmp1008->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1008 = $tmp1008->next;
                    }
                    $fn1010 $tmp1009 = $tmp1008->methods[0];
                    panda$collections$Iterator* $tmp1011 = $tmp1009(((panda$collections$Iterable*) statements967));
                    $tmp1007 = $tmp1011;
                    $tmp1006 = $tmp1007;
                    Iter$298$171005 = $tmp1006;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1006));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1007));
                    $l1012:;
                    ITable* $tmp1015 = Iter$298$171005->$class->itable;
                    while ($tmp1015->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1015 = $tmp1015->next;
                    }
                    $fn1017 $tmp1016 = $tmp1015->methods[0];
                    panda$core$Bit $tmp1018 = $tmp1016(Iter$298$171005);
                    panda$core$Bit $tmp1019 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1018);
                    bool $tmp1014 = $tmp1019.value;
                    if (!$tmp1014) goto $l1013;
                    {
                        int $tmp1022;
                        {
                            ITable* $tmp1026 = Iter$298$171005->$class->itable;
                            while ($tmp1026->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1026 = $tmp1026->next;
                            }
                            $fn1028 $tmp1027 = $tmp1026->methods[1];
                            panda$core$Object* $tmp1029 = $tmp1027(Iter$298$171005);
                            $tmp1025 = $tmp1029;
                            $tmp1024 = ((org$pandalanguage$pandac$ASTNode*) $tmp1025);
                            s1023 = $tmp1024;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1024));
                            panda$core$Panda$unref$panda$core$Object($tmp1025);
                            panda$core$Int64 $tmp1030 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1023);
                            panda$core$Int64 $tmp1031 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result969, $tmp1030);
                            result969 = $tmp1031;
                        }
                        $tmp1022 = -1;
                        goto $l1020;
                        $l1020:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1023));
                        s1023 = NULL;
                        switch ($tmp1022) {
                            case -1: goto $l1032;
                        }
                        $l1032:;
                    }
                    goto $l1012;
                    $l1013:;
                }
                $tmp1004 = -1;
                goto $l1002;
                $l1002:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$298$171005));
                Iter$298$171005 = NULL;
                switch ($tmp1004) {
                    case -1: goto $l1033;
                }
                $l1033:;
            }
            $returnValue515 = result969;
            $tmp509 = 31;
            goto $l507;
            $l1034:;
            return $returnValue515;
        }
        }
        else {
        panda$core$Bit $tmp1036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$188_9510->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1036.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1038 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$188_9510->$data + 24));
            test1037 = *$tmp1038;
            panda$collections$ImmutableArray** $tmp1040 = ((panda$collections$ImmutableArray**) ((char*) $match$188_9510->$data + 32));
            statements1039 = *$tmp1040;
            panda$core$Int64 $tmp1042 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, test1037);
            result1041 = $tmp1042;
            {
                int $tmp1045;
                {
                    ITable* $tmp1049 = ((panda$collections$Iterable*) statements1039)->$class->itable;
                    while ($tmp1049->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1049 = $tmp1049->next;
                    }
                    $fn1051 $tmp1050 = $tmp1049->methods[0];
                    panda$collections$Iterator* $tmp1052 = $tmp1050(((panda$collections$Iterable*) statements1039));
                    $tmp1048 = $tmp1052;
                    $tmp1047 = $tmp1048;
                    Iter$304$171046 = $tmp1047;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1047));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
                    $l1053:;
                    ITable* $tmp1056 = Iter$304$171046->$class->itable;
                    while ($tmp1056->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1056 = $tmp1056->next;
                    }
                    $fn1058 $tmp1057 = $tmp1056->methods[0];
                    panda$core$Bit $tmp1059 = $tmp1057(Iter$304$171046);
                    panda$core$Bit $tmp1060 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1059);
                    bool $tmp1055 = $tmp1060.value;
                    if (!$tmp1055) goto $l1054;
                    {
                        int $tmp1063;
                        {
                            ITable* $tmp1067 = Iter$304$171046->$class->itable;
                            while ($tmp1067->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1067 = $tmp1067->next;
                            }
                            $fn1069 $tmp1068 = $tmp1067->methods[1];
                            panda$core$Object* $tmp1070 = $tmp1068(Iter$304$171046);
                            $tmp1066 = $tmp1070;
                            $tmp1065 = ((org$pandalanguage$pandac$ASTNode*) $tmp1066);
                            s1064 = $tmp1065;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1065));
                            panda$core$Panda$unref$panda$core$Object($tmp1066);
                            panda$core$Int64 $tmp1071 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1064);
                            panda$core$Int64 $tmp1072 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result1041, $tmp1071);
                            result1041 = $tmp1072;
                        }
                        $tmp1063 = -1;
                        goto $l1061;
                        $l1061:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1064));
                        s1064 = NULL;
                        switch ($tmp1063) {
                            case -1: goto $l1073;
                        }
                        $l1073:;
                    }
                    goto $l1053;
                    $l1054:;
                }
                $tmp1045 = -1;
                goto $l1043;
                $l1043:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$304$171046));
                Iter$304$171046 = NULL;
                switch ($tmp1045) {
                    case -1: goto $l1074;
                }
                $l1074:;
            }
            $returnValue515 = result1041;
            $tmp509 = 32;
            goto $l507;
            $l1075:;
            return $returnValue515;
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
    $tmp509 = -1;
    goto $l507;
    $l507:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp511));
    switch ($tmp509) {
        case 2: goto $l531;
        case 32: goto $l1075;
        case 15: goto $l769;
        case -1: goto $l1077;
        case 11: goto $l677;
        case 16: goto $l772;
        case 10: goto $l671;
        case 27: goto $l918;
        case 14: goto $l724;
        case 28: goto $l921;
        case 1: goto $l528;
        case 31: goto $l1034;
        case 8: goto $l627;
        case 12: goto $l718;
        case 13: goto $l721;
        case 26: goto $l915;
        case 22: goto $l901;
        case 0: goto $l517;
        case 9: goto $l630;
        case 29: goto $l924;
        case 25: goto $l912;
        case 3: goto $l569;
        case 4: goto $l572;
        case 24: goto $l909;
        case 21: goto $l898;
        case 17: goto $l810;
        case 23: goto $l904;
        case 5: goto $l613;
        case 6: goto $l619;
        case 18: goto $l885;
        case 19: goto $l888;
        case 30: goto $l962;
        case 7: goto $l622;
        case 20: goto $l891;
    }
    $l1077:;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, panda$collections$ImmutableArray* p_statements) {
    panda$core$Object* $tmp1080;
    panda$core$Int64 c1091;
    panda$collections$Iterator* Iter$317$131095 = NULL;
    panda$collections$Iterator* $tmp1096;
    panda$collections$Iterator* $tmp1097;
    org$pandalanguage$pandac$ASTNode* s1113 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1114;
    panda$core$Object* $tmp1115;
    panda$core$Bit $returnValue1123;
    panda$core$Object* $tmp1082 = (($fn1081) self->compiler->$class->vtable[2])(self->compiler);
    $tmp1080 = $tmp1082;
    panda$core$Bit $tmp1083 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Compiler*) $tmp1080)->settings->optimizationLevel, ((panda$core$Int64) { 0 }));
    bool $tmp1079 = $tmp1083.value;
    panda$core$Panda$unref$panda$core$Object($tmp1080);
    if (!$tmp1079) goto $l1084;
    panda$core$Bit $tmp1085 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(p_annotations);
    panda$core$Bit $tmp1086 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1085);
    $tmp1079 = $tmp1086.value;
    $l1084:;
    panda$core$Bit $tmp1087 = { $tmp1079 };
    bool $tmp1078 = $tmp1087.value;
    if (!$tmp1078) goto $l1088;
    panda$core$Bit $tmp1089 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_annotations);
    $tmp1078 = $tmp1089.value;
    $l1088:;
    panda$core$Bit $tmp1090 = { $tmp1078 };
    if ($tmp1090.value) {
    {
        c1091 = ((panda$core$Int64) { 0 });
        {
            int $tmp1094;
            {
                ITable* $tmp1098 = ((panda$collections$Iterable*) p_statements)->$class->itable;
                while ($tmp1098->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1098 = $tmp1098->next;
                }
                $fn1100 $tmp1099 = $tmp1098->methods[0];
                panda$collections$Iterator* $tmp1101 = $tmp1099(((panda$collections$Iterable*) p_statements));
                $tmp1097 = $tmp1101;
                $tmp1096 = $tmp1097;
                Iter$317$131095 = $tmp1096;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1096));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1097));
                $l1102:;
                ITable* $tmp1105 = Iter$317$131095->$class->itable;
                while ($tmp1105->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1105 = $tmp1105->next;
                }
                $fn1107 $tmp1106 = $tmp1105->methods[0];
                panda$core$Bit $tmp1108 = $tmp1106(Iter$317$131095);
                panda$core$Bit $tmp1109 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1108);
                bool $tmp1104 = $tmp1109.value;
                if (!$tmp1104) goto $l1103;
                {
                    int $tmp1112;
                    {
                        ITable* $tmp1116 = Iter$317$131095->$class->itable;
                        while ($tmp1116->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1116 = $tmp1116->next;
                        }
                        $fn1118 $tmp1117 = $tmp1116->methods[1];
                        panda$core$Object* $tmp1119 = $tmp1117(Iter$317$131095);
                        $tmp1115 = $tmp1119;
                        $tmp1114 = ((org$pandalanguage$pandac$ASTNode*) $tmp1115);
                        s1113 = $tmp1114;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1114));
                        panda$core$Panda$unref$panda$core$Object($tmp1115);
                        panda$core$Int64 $tmp1120 = org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(self, s1113);
                        panda$core$Int64 $tmp1121 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(c1091, $tmp1120);
                        c1091 = $tmp1121;
                        panda$core$Bit $tmp1122 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(c1091, ((panda$core$Int64) { 10 }));
                        if ($tmp1122.value) {
                        {
                            $returnValue1123 = ((panda$core$Bit) { false });
                            $tmp1112 = 0;
                            goto $l1110;
                            $l1124:;
                            $tmp1094 = 0;
                            goto $l1092;
                            $l1125:;
                            return $returnValue1123;
                        }
                        }
                    }
                    $tmp1112 = -1;
                    goto $l1110;
                    $l1110:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1113));
                    s1113 = NULL;
                    switch ($tmp1112) {
                        case -1: goto $l1127;
                        case 0: goto $l1124;
                    }
                    $l1127:;
                }
                goto $l1102;
                $l1103:;
            }
            $tmp1094 = -1;
            goto $l1092;
            $l1092:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$317$131095));
            Iter$317$131095 = NULL;
            switch ($tmp1094) {
                case -1: goto $l1128;
                case 0: goto $l1125;
            }
            $l1128:;
        }
        $returnValue1123 = ((panda$core$Bit) { true });
        return $returnValue1123;
    }
    }
    $returnValue1123 = ((panda$core$Bit) { false });
    return $returnValue1123;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$MethodDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawParameters, org$pandalanguage$pandac$ASTNode* p_rawReturnType, panda$collections$ImmutableArray* p_statements) {
    panda$core$String* doccomment1134 = NULL;
    panda$core$String* $tmp1135;
    panda$core$String* $tmp1136;
    org$pandalanguage$pandac$ASTNode* $match$338_131140 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1141;
    org$pandalanguage$pandac$Position position1143;
    panda$core$String* text1145 = NULL;
    panda$core$String* $tmp1147;
    panda$core$String* $tmp1148;
    org$pandalanguage$pandac$Annotations* annotations1150 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1151;
    org$pandalanguage$pandac$Annotations* $tmp1152;
    panda$collections$Array* parameters1165 = NULL;
    panda$collections$Array* $tmp1166;
    panda$collections$Array* $tmp1167;
    panda$collections$Iterator* Iter$350$91172 = NULL;
    panda$collections$Iterator* $tmp1173;
    panda$collections$Iterator* $tmp1174;
    org$pandalanguage$pandac$ASTNode* p1190 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1191;
    panda$core$Object* $tmp1192;
    org$pandalanguage$pandac$ASTNode* $match$351_131200 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1201;
    panda$core$String* name1203 = NULL;
    org$pandalanguage$pandac$ASTNode* type1205 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1207;
    org$pandalanguage$pandac$Type* $tmp1209;
    org$pandalanguage$pandac$Type* returnType1214 = NULL;
    org$pandalanguage$pandac$Type* $tmp1215;
    org$pandalanguage$pandac$Type* $tmp1216;
    org$pandalanguage$pandac$Type* $tmp1217;
    org$pandalanguage$pandac$Type* $tmp1219;
    org$pandalanguage$pandac$Type* $tmp1220;
    org$pandalanguage$pandac$Type* $tmp1221;
    org$pandalanguage$pandac$Type* $tmp1226;
    panda$core$Object* $tmp1230;
    panda$core$Object* $tmp1246;
    panda$core$String* $tmp1249;
    panda$core$String* $tmp1250;
    org$pandalanguage$pandac$MethodDecl* $returnValue1255;
    org$pandalanguage$pandac$MethodDecl* $tmp1256;
    org$pandalanguage$pandac$MethodDecl* $tmp1257;
    int $tmp1133;
    {
        memset(&doccomment1134, 0, sizeof(doccomment1134));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1135 = doccomment1134;
                $tmp1136 = NULL;
                doccomment1134 = $tmp1136;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1136));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1135));
            }
        }
        }
        else {
        {
            int $tmp1139;
            {
                $tmp1141 = p_rawDoccomment;
                $match$338_131140 = $tmp1141;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1141));
                panda$core$Bit $tmp1142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$338_131140->$rawValue, ((panda$core$Int64) { 37 }));
                if ($tmp1142.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1144 = ((org$pandalanguage$pandac$Position*) ((char*) $match$338_131140->$data + 0));
                    position1143 = *$tmp1144;
                    panda$core$String** $tmp1146 = ((panda$core$String**) ((char*) $match$338_131140->$data + 16));
                    text1145 = *$tmp1146;
                    {
                        $tmp1147 = doccomment1134;
                        $tmp1148 = text1145;
                        doccomment1134 = $tmp1148;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1148));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1147));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1139 = -1;
            goto $l1137;
            $l1137:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1141));
            switch ($tmp1139) {
                case -1: goto $l1149;
            }
            $l1149:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1153 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1152 = $tmp1153;
        $tmp1151 = $tmp1152;
        annotations1150 = $tmp1151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1152));
        panda$core$Bit $tmp1156 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp1155 = $tmp1156.value;
        if (!$tmp1155) goto $l1157;
        panda$core$Bit $tmp1158 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_owner->annotations);
        $tmp1155 = $tmp1158.value;
        $l1157:;
        panda$core$Bit $tmp1159 = { $tmp1155 };
        bool $tmp1154 = $tmp1159.value;
        if ($tmp1154) goto $l1160;
        panda$core$Bit $tmp1161 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(annotations1150);
        $tmp1154 = $tmp1161.value;
        $l1160:;
        panda$core$Bit $tmp1162 = { $tmp1154 };
        if ($tmp1162.value) {
        {
            panda$core$Int64 $tmp1163 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
            panda$core$Int64 $tmp1164 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1150->flags, $tmp1163);
            annotations1150->flags = $tmp1164;
        }
        }
        panda$collections$Array* $tmp1168 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1168);
        $tmp1167 = $tmp1168;
        $tmp1166 = $tmp1167;
        parameters1165 = $tmp1166;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1166));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1167));
        {
            int $tmp1171;
            {
                ITable* $tmp1175 = ((panda$collections$Iterable*) p_rawParameters)->$class->itable;
                while ($tmp1175->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1175 = $tmp1175->next;
                }
                $fn1177 $tmp1176 = $tmp1175->methods[0];
                panda$collections$Iterator* $tmp1178 = $tmp1176(((panda$collections$Iterable*) p_rawParameters));
                $tmp1174 = $tmp1178;
                $tmp1173 = $tmp1174;
                Iter$350$91172 = $tmp1173;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1173));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1174));
                $l1179:;
                ITable* $tmp1182 = Iter$350$91172->$class->itable;
                while ($tmp1182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1182 = $tmp1182->next;
                }
                $fn1184 $tmp1183 = $tmp1182->methods[0];
                panda$core$Bit $tmp1185 = $tmp1183(Iter$350$91172);
                panda$core$Bit $tmp1186 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1185);
                bool $tmp1181 = $tmp1186.value;
                if (!$tmp1181) goto $l1180;
                {
                    int $tmp1189;
                    {
                        ITable* $tmp1193 = Iter$350$91172->$class->itable;
                        while ($tmp1193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1193 = $tmp1193->next;
                        }
                        $fn1195 $tmp1194 = $tmp1193->methods[1];
                        panda$core$Object* $tmp1196 = $tmp1194(Iter$350$91172);
                        $tmp1192 = $tmp1196;
                        $tmp1191 = ((org$pandalanguage$pandac$ASTNode*) $tmp1192);
                        p1190 = $tmp1191;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1191));
                        panda$core$Panda$unref$panda$core$Object($tmp1192);
                        int $tmp1199;
                        {
                            $tmp1201 = p1190;
                            $match$351_131200 = $tmp1201;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1201));
                            panda$core$Bit $tmp1202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351_131200->$rawValue, ((panda$core$Int64) { 31 }));
                            if ($tmp1202.value) {
                            {
                                panda$core$String** $tmp1204 = ((panda$core$String**) ((char*) $match$351_131200->$data + 16));
                                name1203 = *$tmp1204;
                                org$pandalanguage$pandac$ASTNode** $tmp1206 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$351_131200->$data + 24));
                                type1205 = *$tmp1206;
                                org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1208 = (org$pandalanguage$pandac$MethodDecl$Parameter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class);
                                org$pandalanguage$pandac$Type* $tmp1210 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1205);
                                $tmp1209 = $tmp1210;
                                org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp1208, name1203, $tmp1209);
                                $tmp1207 = $tmp1208;
                                panda$collections$Array$add$panda$collections$Array$T(parameters1165, ((panda$core$Object*) $tmp1207));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1207));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1209));
                            }
                            }
                            else {
                            {
                                PANDA_ASSERT(((panda$core$Bit) { false }).value);
                            }
                            }
                        }
                        $tmp1199 = -1;
                        goto $l1197;
                        $l1197:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1201));
                        switch ($tmp1199) {
                            case -1: goto $l1211;
                        }
                        $l1211:;
                    }
                    $tmp1189 = -1;
                    goto $l1187;
                    $l1187:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1190));
                    p1190 = NULL;
                    switch ($tmp1189) {
                        case -1: goto $l1212;
                    }
                    $l1212:;
                }
                goto $l1179;
                $l1180:;
            }
            $tmp1171 = -1;
            goto $l1169;
            $l1169:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$350$91172));
            Iter$350$91172 = NULL;
            switch ($tmp1171) {
                case -1: goto $l1213;
            }
            $l1213:;
        }
        memset(&returnType1214, 0, sizeof(returnType1214));
        if (((panda$core$Bit) { p_rawReturnType != NULL }).value) {
        {
            {
                $tmp1215 = returnType1214;
                org$pandalanguage$pandac$Type* $tmp1218 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, p_rawReturnType);
                $tmp1217 = $tmp1218;
                $tmp1216 = $tmp1217;
                returnType1214 = $tmp1216;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1216));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1217));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1215));
            }
        }
        }
        else {
        {
            {
                $tmp1219 = returnType1214;
                org$pandalanguage$pandac$Type* $tmp1222 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1221 = $tmp1222;
                $tmp1220 = $tmp1221;
                returnType1214 = $tmp1220;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1220));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1221));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1219));
            }
        }
        }
        panda$core$Bit $tmp1224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 1 }));
        bool $tmp1223 = $tmp1224.value;
        if (!$tmp1223) goto $l1225;
        org$pandalanguage$pandac$Type* $tmp1227 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1226 = $tmp1227;
        panda$core$Bit $tmp1228 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType1214, $tmp1226);
        $tmp1223 = $tmp1228.value;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1226));
        $l1225:;
        panda$core$Bit $tmp1229 = { $tmp1223 };
        if ($tmp1229.value) {
        {
            panda$core$Object* $tmp1232 = (($fn1231) self->compiler->$class->vtable[2])(self->compiler);
            $tmp1230 = $tmp1232;
            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1230), p_position, &$s1233);
            panda$core$Panda$unref$panda$core$Object($tmp1230);
        }
        }
        bool $tmp1234 = ((panda$core$Bit) { p_statements != NULL }).value;
        if (!$tmp1234) goto $l1235;
        panda$core$Bit $tmp1236 = org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$panda$core$Bit(self, annotations1150, p_statements);
        $tmp1234 = $tmp1236.value;
        $l1235:;
        panda$core$Bit $tmp1237 = { $tmp1234 };
        if ($tmp1237.value) {
        {
            panda$core$Int64 $tmp1238 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp1239 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1150->flags, $tmp1238);
            annotations1150->flags = $tmp1239;
        }
        }
        if (((panda$core$Bit) { p_statements == NULL }).value) {
        {
            panda$core$Bit $tmp1240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind.$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1240.value) {
            {
                panda$core$Int64 $tmp1241 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                panda$core$Int64 $tmp1242 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1150->flags, $tmp1241);
                annotations1150->flags = $tmp1242;
            }
            }
            else {
            panda$core$Int64 $tmp1243 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
            panda$core$Int64 $tmp1244 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations1150->flags, $tmp1243);
            panda$core$Bit $tmp1245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1244, ((panda$core$Int64) { 0 }));
            if ($tmp1245.value) {
            {
                panda$core$Object* $tmp1248 = (($fn1247) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1246 = $tmp1248;
                panda$core$String* $tmp1252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1251, p_name);
                $tmp1250 = $tmp1252;
                panda$core$String* $tmp1254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1250, &$s1253);
                $tmp1249 = $tmp1254;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1246), p_position, $tmp1249);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1249));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1250));
                panda$core$Panda$unref$panda$core$Object($tmp1246);
            }
            }
            }
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp1258 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1258, p_owner, p_position, doccomment1134, annotations1150, p_kind, p_name, parameters1165, returnType1214, p_statements);
        $tmp1257 = $tmp1258;
        $tmp1256 = $tmp1257;
        $returnValue1255 = $tmp1256;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1256));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1257));
        $tmp1133 = 0;
        goto $l1131;
        $l1259:;
        return $returnValue1255;
    }
    $l1131:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1134));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1150));
    annotations1150 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1165));
    parameters1165 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType1214));
    switch ($tmp1133) {
        case 0: goto $l1259;
    }
    $l1261:;
}
void org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$ASTNode* p_node) {
    org$pandalanguage$pandac$ASTNode* $match$384_91265 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1266;
    org$pandalanguage$pandac$Position position1268;
    org$pandalanguage$pandac$ASTNode* dc1270 = NULL;
    panda$collections$ImmutableArray* annotations1272 = NULL;
    org$pandalanguage$pandac$ASTNode* varDecl1274 = NULL;
    org$pandalanguage$pandac$Position position1277;
    org$pandalanguage$pandac$ASTNode* dc1279 = NULL;
    panda$collections$ImmutableArray* annotations1281 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1283;
    panda$core$String* name1285 = NULL;
    panda$collections$ImmutableArray* parameters1287 = NULL;
    org$pandalanguage$pandac$ASTNode* rawReturnType1289 = NULL;
    panda$collections$ImmutableArray* statements1291 = NULL;
    org$pandalanguage$pandac$MethodDecl* m1296 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1297;
    org$pandalanguage$pandac$MethodDecl* $tmp1298;
    org$pandalanguage$pandac$Position position1302;
    org$pandalanguage$pandac$ASTNode* dc1304 = NULL;
    panda$collections$ImmutableArray* annotations1306 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1308;
    panda$core$String* name1310 = NULL;
    panda$collections$ImmutableArray* generics1312 = NULL;
    panda$collections$ImmutableArray* supertypes1314 = NULL;
    panda$collections$ImmutableArray* members1316 = NULL;
    org$pandalanguage$pandac$ClassDecl* inner1321 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1322;
    org$pandalanguage$pandac$ClassDecl* $tmp1323;
    panda$core$Weak* $tmp1325;
    panda$core$Weak* $tmp1326;
    panda$core$Weak* $tmp1327;
    panda$core$String* $tmp1329;
    org$pandalanguage$pandac$Alias* $tmp1333;
    panda$core$String* $tmp1335;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1336;
    org$pandalanguage$pandac$Position $tmp1340;
    org$pandalanguage$pandac$Alias* $tmp1341;
    panda$core$String* $tmp1343;
    org$pandalanguage$pandac$Position $tmp1345;
    org$pandalanguage$pandac$Position position1348;
    org$pandalanguage$pandac$ASTNode* dc1350 = NULL;
    panda$core$String* name1352 = NULL;
    panda$collections$ImmutableArray* fields1354 = NULL;
    int $tmp1264;
    {
        $tmp1266 = p_node;
        $match$384_91265 = $tmp1266;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1266));
        panda$core$Bit $tmp1267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$384_91265->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1267.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1269 = ((org$pandalanguage$pandac$Position*) ((char*) $match$384_91265->$data + 0));
            position1268 = *$tmp1269;
            org$pandalanguage$pandac$ASTNode** $tmp1271 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$384_91265->$data + 16));
            dc1270 = *$tmp1271;
            panda$collections$ImmutableArray** $tmp1273 = ((panda$collections$ImmutableArray**) ((char*) $match$384_91265->$data + 24));
            annotations1272 = *$tmp1273;
            org$pandalanguage$pandac$ASTNode** $tmp1275 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$384_91265->$data + 32));
            varDecl1274 = *$tmp1275;
            org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(self, p_cl, position1268, dc1270, annotations1272, varDecl1274);
        }
        }
        else {
        panda$core$Bit $tmp1276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$384_91265->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1276.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1278 = ((org$pandalanguage$pandac$Position*) ((char*) $match$384_91265->$data + 0));
            position1277 = *$tmp1278;
            org$pandalanguage$pandac$ASTNode** $tmp1280 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$384_91265->$data + 16));
            dc1279 = *$tmp1280;
            panda$collections$ImmutableArray** $tmp1282 = ((panda$collections$ImmutableArray**) ((char*) $match$384_91265->$data + 24));
            annotations1281 = *$tmp1282;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1284 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$384_91265->$data + 32));
            kind1283 = *$tmp1284;
            panda$core$String** $tmp1286 = ((panda$core$String**) ((char*) $match$384_91265->$data + 40));
            name1285 = *$tmp1286;
            panda$collections$ImmutableArray** $tmp1288 = ((panda$collections$ImmutableArray**) ((char*) $match$384_91265->$data + 48));
            parameters1287 = *$tmp1288;
            org$pandalanguage$pandac$ASTNode** $tmp1290 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$384_91265->$data + 56));
            rawReturnType1289 = *$tmp1290;
            panda$collections$ImmutableArray** $tmp1292 = ((panda$collections$ImmutableArray**) ((char*) $match$384_91265->$data + 64));
            statements1291 = *$tmp1292;
            int $tmp1295;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1299 = org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$R$org$pandalanguage$pandac$MethodDecl$Q(self, p_cl, position1277, dc1279, annotations1281, kind1283, name1285, parameters1287, rawReturnType1289, statements1291);
                $tmp1298 = $tmp1299;
                $tmp1297 = $tmp1298;
                m1296 = $tmp1297;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1297));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1298));
                if (((panda$core$Bit) { m1296 != NULL }).value) {
                {
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) m1296));
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->methods, ((panda$core$Object*) m1296));
                }
                }
            }
            $tmp1295 = -1;
            goto $l1293;
            $l1293:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1296));
            m1296 = NULL;
            switch ($tmp1295) {
                case -1: goto $l1300;
            }
            $l1300:;
        }
        }
        else {
        panda$core$Bit $tmp1301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$384_91265->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1301.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1303 = ((org$pandalanguage$pandac$Position*) ((char*) $match$384_91265->$data + 0));
            position1302 = *$tmp1303;
            org$pandalanguage$pandac$ASTNode** $tmp1305 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$384_91265->$data + 16));
            dc1304 = *$tmp1305;
            panda$collections$ImmutableArray** $tmp1307 = ((panda$collections$ImmutableArray**) ((char*) $match$384_91265->$data + 24));
            annotations1306 = *$tmp1307;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1309 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$384_91265->$data + 32));
            kind1308 = *$tmp1309;
            panda$core$String** $tmp1311 = ((panda$core$String**) ((char*) $match$384_91265->$data + 40));
            name1310 = *$tmp1311;
            panda$collections$ImmutableArray** $tmp1313 = ((panda$collections$ImmutableArray**) ((char*) $match$384_91265->$data + 48));
            generics1312 = *$tmp1313;
            panda$collections$ImmutableArray** $tmp1315 = ((panda$collections$ImmutableArray**) ((char*) $match$384_91265->$data + 56));
            supertypes1314 = *$tmp1315;
            panda$collections$ImmutableArray** $tmp1317 = ((panda$collections$ImmutableArray**) ((char*) $match$384_91265->$data + 64));
            members1316 = *$tmp1317;
            int $tmp1320;
            {
                org$pandalanguage$pandac$ClassDecl* $tmp1324 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_cl->source, p_cl->aliases, p_cl->name, position1302, dc1304, annotations1306, kind1308, name1310, generics1312, supertypes1314, members1316);
                $tmp1323 = $tmp1324;
                $tmp1322 = $tmp1323;
                inner1321 = $tmp1322;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1322));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1323));
                if (((panda$core$Bit) { inner1321 != NULL }).value) {
                {
                    {
                        $tmp1325 = inner1321->owner;
                        panda$core$Weak* $tmp1328 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
                        panda$core$Weak$init$panda$core$Weak$T($tmp1328, ((panda$core$Object*) p_cl));
                        $tmp1327 = $tmp1328;
                        $tmp1326 = $tmp1327;
                        inner1321->owner = $tmp1326;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1326));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1327));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1325));
                    }
                    panda$collections$Array$add$panda$collections$Array$T(p_cl->classes, ((panda$core$Object*) inner1321));
                    panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(p_cl->name, &$s1330);
                    $tmp1329 = $tmp1331;
                    panda$core$Bit $tmp1332 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(inner1321->name, $tmp1329);
                    PANDA_ASSERT($tmp1332.value);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1329));
                    org$pandalanguage$pandac$Alias* $tmp1334 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$Int64 $tmp1337 = panda$core$String$length$R$panda$core$Int64(p_cl->name);
                    panda$core$Int64 $tmp1338 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1337, ((panda$core$Int64) { 1 }));
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1336, ((panda$core$Int64$nullable) { $tmp1338, true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                    panda$core$String* $tmp1339 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(inner1321->name, $tmp1336);
                    $tmp1335 = $tmp1339;
                    org$pandalanguage$pandac$Position$init(&$tmp1340);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1334, $tmp1335, inner1321->name, $tmp1340);
                    $tmp1333 = $tmp1334;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1333));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1333));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1335));
                    org$pandalanguage$pandac$Alias* $tmp1342 = (org$pandalanguage$pandac$Alias*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Alias$class);
                    panda$core$String* $tmp1344 = org$pandalanguage$pandac$ClassDecl$simpleName$R$panda$core$String(p_cl);
                    $tmp1343 = $tmp1344;
                    org$pandalanguage$pandac$Position$init(&$tmp1345);
                    org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position($tmp1342, $tmp1343, p_cl->name, $tmp1345);
                    $tmp1341 = $tmp1342;
                    org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(inner1321->symbolTable, ((org$pandalanguage$pandac$Symbol*) $tmp1341));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
                }
                }
            }
            $tmp1320 = -1;
            goto $l1318;
            $l1318:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1321));
            inner1321 = NULL;
            switch ($tmp1320) {
                case -1: goto $l1346;
            }
            $l1346:;
        }
        }
        else {
        panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$384_91265->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1347.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1349 = ((org$pandalanguage$pandac$Position*) ((char*) $match$384_91265->$data + 0));
            position1348 = *$tmp1349;
            org$pandalanguage$pandac$ASTNode** $tmp1351 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$384_91265->$data + 16));
            dc1350 = *$tmp1351;
            panda$core$String** $tmp1353 = ((panda$core$String**) ((char*) $match$384_91265->$data + 24));
            name1352 = *$tmp1353;
            panda$collections$ImmutableArray** $tmp1355 = ((panda$collections$ImmutableArray**) ((char*) $match$384_91265->$data + 32));
            fields1354 = *$tmp1355;
            org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_cl, position1348, dc1350, name1352, fields1354);
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
    $tmp1264 = -1;
    goto $l1262;
    $l1262:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1266));
    switch ($tmp1264) {
        case -1: goto $l1356;
    }
    $l1356:;
}
void org$pandalanguage$pandac$Scanner$scanChoiceEntry$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$core$String* p_name, panda$collections$ImmutableArray* p_rawFields) {
    panda$core$String* doccomment1360 = NULL;
    panda$core$String* $tmp1361;
    panda$core$String* $tmp1362;
    org$pandalanguage$pandac$ASTNode* $match$422_131366 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1367;
    org$pandalanguage$pandac$Position position1369;
    panda$core$String* text1371 = NULL;
    panda$core$String* $tmp1373;
    panda$core$String* $tmp1374;
    panda$collections$Array* fields1376 = NULL;
    panda$collections$Array* $tmp1377;
    panda$collections$Array* $tmp1378;
    panda$collections$Iterator* Iter$430$91383 = NULL;
    panda$collections$Iterator* $tmp1384;
    panda$collections$Iterator* $tmp1385;
    org$pandalanguage$pandac$ASTNode* t1401 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1402;
    panda$core$Object* $tmp1403;
    org$pandalanguage$pandac$Type* $tmp1408;
    org$pandalanguage$pandac$ChoiceEntry* entry1412 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1413;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1414;
    int $tmp1359;
    {
        memset(&doccomment1360, 0, sizeof(doccomment1360));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1361 = doccomment1360;
                $tmp1362 = NULL;
                doccomment1360 = $tmp1362;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1362));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1361));
            }
        }
        }
        else {
        {
            int $tmp1365;
            {
                $tmp1367 = p_rawDoccomment;
                $match$422_131366 = $tmp1367;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1367));
                panda$core$Bit $tmp1368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_131366->$rawValue, ((panda$core$Int64) { 37 }));
                if ($tmp1368.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1370 = ((org$pandalanguage$pandac$Position*) ((char*) $match$422_131366->$data + 0));
                    position1369 = *$tmp1370;
                    panda$core$String** $tmp1372 = ((panda$core$String**) ((char*) $match$422_131366->$data + 16));
                    text1371 = *$tmp1372;
                    {
                        $tmp1373 = doccomment1360;
                        $tmp1374 = text1371;
                        doccomment1360 = $tmp1374;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1374));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1373));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1365 = -1;
            goto $l1363;
            $l1363:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
            switch ($tmp1365) {
                case -1: goto $l1375;
            }
            $l1375:;
        }
        }
        panda$collections$Array* $tmp1379 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1379);
        $tmp1378 = $tmp1379;
        $tmp1377 = $tmp1378;
        fields1376 = $tmp1377;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1377));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1378));
        {
            int $tmp1382;
            {
                ITable* $tmp1386 = ((panda$collections$Iterable*) p_rawFields)->$class->itable;
                while ($tmp1386->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1386 = $tmp1386->next;
                }
                $fn1388 $tmp1387 = $tmp1386->methods[0];
                panda$collections$Iterator* $tmp1389 = $tmp1387(((panda$collections$Iterable*) p_rawFields));
                $tmp1385 = $tmp1389;
                $tmp1384 = $tmp1385;
                Iter$430$91383 = $tmp1384;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1384));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
                $l1390:;
                ITable* $tmp1393 = Iter$430$91383->$class->itable;
                while ($tmp1393->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1393 = $tmp1393->next;
                }
                $fn1395 $tmp1394 = $tmp1393->methods[0];
                panda$core$Bit $tmp1396 = $tmp1394(Iter$430$91383);
                panda$core$Bit $tmp1397 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1396);
                bool $tmp1392 = $tmp1397.value;
                if (!$tmp1392) goto $l1391;
                {
                    int $tmp1400;
                    {
                        ITable* $tmp1404 = Iter$430$91383->$class->itable;
                        while ($tmp1404->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1404 = $tmp1404->next;
                        }
                        $fn1406 $tmp1405 = $tmp1404->methods[1];
                        panda$core$Object* $tmp1407 = $tmp1405(Iter$430$91383);
                        $tmp1403 = $tmp1407;
                        $tmp1402 = ((org$pandalanguage$pandac$ASTNode*) $tmp1403);
                        t1401 = $tmp1402;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1402));
                        panda$core$Panda$unref$panda$core$Object($tmp1403);
                        org$pandalanguage$pandac$Type* $tmp1409 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, t1401);
                        $tmp1408 = $tmp1409;
                        panda$collections$Array$add$panda$collections$Array$T(fields1376, ((panda$core$Object*) $tmp1408));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1408));
                    }
                    $tmp1400 = -1;
                    goto $l1398;
                    $l1398:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1401));
                    t1401 = NULL;
                    switch ($tmp1400) {
                        case -1: goto $l1410;
                    }
                    $l1410:;
                }
                goto $l1390;
                $l1391:;
            }
            $tmp1382 = -1;
            goto $l1380;
            $l1380:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$430$91383));
            Iter$430$91383 = NULL;
            switch ($tmp1382) {
                case -1: goto $l1411;
            }
            $l1411:;
        }
        org$pandalanguage$pandac$ChoiceEntry* $tmp1415 = (org$pandalanguage$pandac$ChoiceEntry*) pandaObjectAlloc(97, (panda$core$Class*) &org$pandalanguage$pandac$ChoiceEntry$class);
        panda$core$Int64 $tmp1416 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->choiceEntries);
        org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT($tmp1415, p_cl, p_position, p_name, doccomment1360, $tmp1416, ((panda$collections$ListView*) fields1376));
        $tmp1414 = $tmp1415;
        $tmp1413 = $tmp1414;
        entry1412 = $tmp1413;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1413));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1414));
        panda$collections$Array$add$panda$collections$Array$T(p_cl->choiceEntries, ((panda$core$Object*) entry1412));
        org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(p_cl->symbolTable, ((org$pandalanguage$pandac$Symbol*) entry1412));
    }
    $tmp1359 = -1;
    goto $l1357;
    $l1357:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1360));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1376));
    fields1376 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry1412));
    entry1412 = NULL;
    switch ($tmp1359) {
        case -1: goto $l1417;
    }
    $l1417:;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$ASTNode* p_rawDoccomment, panda$collections$ImmutableArray* p_rawAnnotations, org$pandalanguage$pandac$ClassDecl$Kind p_kind, panda$core$String* p_name, panda$collections$ImmutableArray* p_generics, panda$collections$ImmutableArray* p_rawSupertypes, panda$collections$ImmutableArray* p_members) {
    panda$core$String* fullName1421 = NULL;
    panda$core$String* $tmp1424;
    panda$core$String* $tmp1425;
    panda$core$String* $tmp1426;
    panda$core$String* $tmp1427;
    panda$core$String* $tmp1428;
    panda$core$String* $tmp1429;
    panda$core$String* $tmp1436;
    panda$core$String* $tmp1437;
    panda$core$String* doccomment1438 = NULL;
    panda$core$String* $tmp1439;
    panda$core$String* $tmp1440;
    org$pandalanguage$pandac$ASTNode* $match$456_131444 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1445;
    org$pandalanguage$pandac$Position position1447;
    panda$core$String* text1449 = NULL;
    panda$core$String* $tmp1451;
    panda$core$String* $tmp1452;
    org$pandalanguage$pandac$Annotations* annotations1454 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1455;
    org$pandalanguage$pandac$Annotations* $tmp1456;
    panda$collections$Array* parameters1458 = NULL;
    panda$collections$Array* $tmp1459;
    panda$collections$Array* $tmp1460;
    panda$collections$Iterator* Iter$466$131465 = NULL;
    panda$collections$Iterator* $tmp1466;
    panda$collections$Iterator* $tmp1467;
    org$pandalanguage$pandac$ASTNode* p1483 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1484;
    panda$core$Object* $tmp1485;
    panda$core$String* name1490 = NULL;
    org$pandalanguage$pandac$Type* bound1491 = NULL;
    org$pandalanguage$pandac$ASTNode* $match$469_171495 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1496;
    panda$core$String* id1498 = NULL;
    panda$core$String* $tmp1500;
    panda$core$String* $tmp1501;
    org$pandalanguage$pandac$Type* $tmp1502;
    org$pandalanguage$pandac$Type* $tmp1503;
    org$pandalanguage$pandac$Type* $tmp1504;
    panda$core$String* id1507 = NULL;
    org$pandalanguage$pandac$ASTNode* type1509 = NULL;
    panda$core$String* $tmp1511;
    panda$core$String* $tmp1512;
    org$pandalanguage$pandac$Type* $tmp1513;
    org$pandalanguage$pandac$Type* $tmp1514;
    org$pandalanguage$pandac$Type* $tmp1515;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1518;
    panda$core$Object* $tmp1525;
    panda$collections$Array* supertypes1529 = NULL;
    panda$collections$Array* $tmp1530;
    panda$collections$Array* $tmp1531;
    panda$core$Object* $tmp1534;
    panda$collections$Iterator* Iter$490$131541 = NULL;
    panda$collections$Iterator* $tmp1542;
    panda$collections$Iterator* $tmp1543;
    org$pandalanguage$pandac$ASTNode* s1559 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1560;
    panda$core$Object* $tmp1561;
    org$pandalanguage$pandac$Type* $tmp1566;
    org$pandalanguage$pandac$ClassDecl* result1570 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1571;
    org$pandalanguage$pandac$ClassDecl* $tmp1572;
    panda$core$Object* $tmp1574;
    panda$core$Object* $tmp1577;
    org$pandalanguage$pandac$FieldDecl* rawValue1584 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1585;
    org$pandalanguage$pandac$FieldDecl* $tmp1586;
    org$pandalanguage$pandac$Annotations* $tmp1588;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1590;
    org$pandalanguage$pandac$Type* $tmp1592;
    org$pandalanguage$pandac$FieldDecl* data1594 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1595;
    org$pandalanguage$pandac$FieldDecl* $tmp1596;
    org$pandalanguage$pandac$Annotations* $tmp1598;
    org$pandalanguage$pandac$FieldDecl$Kind $tmp1600;
    org$pandalanguage$pandac$Type* $tmp1602;
    panda$collections$Iterator* Iter$507$91608 = NULL;
    panda$collections$Iterator* $tmp1609;
    panda$collections$Iterator* $tmp1610;
    org$pandalanguage$pandac$ASTNode* m1626 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1627;
    panda$core$Object* $tmp1628;
    org$pandalanguage$pandac$ASTNode* $match$508_131636 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1637;
    org$pandalanguage$pandac$Position mPosition1639;
    org$pandalanguage$pandac$MethodDecl$Kind methodKind1641;
    org$pandalanguage$pandac$ClassDecl$Kind $match$511_251644;
    panda$core$Object* $tmp1647;
    panda$core$Object* $tmp1652;
    panda$core$Bit foundInit1659;
    panda$core$Bit foundCleanup1660;
    panda$collections$Iterator* Iter$526$91664 = NULL;
    panda$collections$Iterator* $tmp1665;
    panda$collections$Iterator* $tmp1666;
    org$pandalanguage$pandac$MethodDecl* m1682 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1683;
    panda$core$Object* $tmp1684;
    panda$core$Object* $tmp1698;
    org$pandalanguage$pandac$MethodDecl* defaultInit1717 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1718;
    org$pandalanguage$pandac$MethodDecl* $tmp1719;
    org$pandalanguage$pandac$Annotations* $tmp1721;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1724;
    panda$collections$Array* $tmp1726;
    org$pandalanguage$pandac$Type* $tmp1728;
    panda$collections$ImmutableArray* $tmp1730;
    org$pandalanguage$pandac$MethodDecl* defaultCleanup1750 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1751;
    org$pandalanguage$pandac$MethodDecl* $tmp1752;
    org$pandalanguage$pandac$Annotations* $tmp1754;
    org$pandalanguage$pandac$MethodDecl$Kind $tmp1759;
    panda$collections$Array* $tmp1761;
    org$pandalanguage$pandac$Type* $tmp1763;
    panda$collections$ImmutableArray* $tmp1765;
    panda$core$Bit haveFields1769;
    panda$collections$Iterator* Iter$555$131773 = NULL;
    panda$collections$Iterator* $tmp1774;
    panda$collections$Iterator* $tmp1775;
    org$pandalanguage$pandac$ChoiceEntry* e1791 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* $tmp1792;
    panda$core$Object* $tmp1793;
    org$pandalanguage$pandac$Type* $tmp1804;
    org$pandalanguage$pandac$Type* $tmp1805;
    org$pandalanguage$pandac$Type* $tmp1806;
    panda$core$Object* $tmp1808;
    panda$core$Object* $tmp1809;
    org$pandalanguage$pandac$ClassDecl* $returnValue1813;
    org$pandalanguage$pandac$ClassDecl* $tmp1814;
    int $tmp1420;
    {
        memset(&fullName1421, 0, sizeof(fullName1421));
        panda$core$Bit $tmp1423 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s1422);
        if ($tmp1423.value) {
        {
            {
                $tmp1424 = fullName1421;
                panda$core$String* $tmp1430 = panda$core$String$convert$R$panda$core$String(p_contextName);
                $tmp1429 = $tmp1430;
                panda$core$String* $tmp1432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1429, &$s1431);
                $tmp1428 = $tmp1432;
                panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1428, p_name);
                $tmp1427 = $tmp1433;
                panda$core$String* $tmp1435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1427, &$s1434);
                $tmp1426 = $tmp1435;
                $tmp1425 = $tmp1426;
                fullName1421 = $tmp1425;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1425));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1426));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1427));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1428));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1429));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1424));
            }
        }
        }
        else {
        {
            {
                $tmp1436 = fullName1421;
                $tmp1437 = p_name;
                fullName1421 = $tmp1437;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1437));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1436));
            }
        }
        }
        memset(&doccomment1438, 0, sizeof(doccomment1438));
        if (((panda$core$Bit) { p_rawDoccomment == NULL }).value) {
        {
            {
                $tmp1439 = doccomment1438;
                $tmp1440 = NULL;
                doccomment1438 = $tmp1440;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1440));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1439));
            }
        }
        }
        else {
        {
            int $tmp1443;
            {
                $tmp1445 = p_rawDoccomment;
                $match$456_131444 = $tmp1445;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1445));
                panda$core$Bit $tmp1446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$456_131444->$rawValue, ((panda$core$Int64) { 37 }));
                if ($tmp1446.value) {
                {
                    org$pandalanguage$pandac$Position* $tmp1448 = ((org$pandalanguage$pandac$Position*) ((char*) $match$456_131444->$data + 0));
                    position1447 = *$tmp1448;
                    panda$core$String** $tmp1450 = ((panda$core$String**) ((char*) $match$456_131444->$data + 16));
                    text1449 = *$tmp1450;
                    {
                        $tmp1451 = doccomment1438;
                        $tmp1452 = text1449;
                        doccomment1438 = $tmp1452;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1452));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1451));
                    }
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1443 = -1;
            goto $l1441;
            $l1441:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1445));
            switch ($tmp1443) {
                case -1: goto $l1453;
            }
            $l1453:;
        }
        }
        org$pandalanguage$pandac$Annotations* $tmp1457 = org$pandalanguage$pandac$Scanner$convertAnnotations$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$Annotations(self, p_rawAnnotations);
        $tmp1456 = $tmp1457;
        $tmp1455 = $tmp1456;
        annotations1454 = $tmp1455;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1455));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1456));
        panda$collections$Array* $tmp1461 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1461);
        $tmp1460 = $tmp1461;
        $tmp1459 = $tmp1460;
        parameters1458 = $tmp1459;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1459));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1460));
        if (((panda$core$Bit) { p_generics != NULL }).value) {
        {
            {
                int $tmp1464;
                {
                    ITable* $tmp1468 = ((panda$collections$Iterable*) p_generics)->$class->itable;
                    while ($tmp1468->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1468 = $tmp1468->next;
                    }
                    $fn1470 $tmp1469 = $tmp1468->methods[0];
                    panda$collections$Iterator* $tmp1471 = $tmp1469(((panda$collections$Iterable*) p_generics));
                    $tmp1467 = $tmp1471;
                    $tmp1466 = $tmp1467;
                    Iter$466$131465 = $tmp1466;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1466));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1467));
                    $l1472:;
                    ITable* $tmp1475 = Iter$466$131465->$class->itable;
                    while ($tmp1475->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1475 = $tmp1475->next;
                    }
                    $fn1477 $tmp1476 = $tmp1475->methods[0];
                    panda$core$Bit $tmp1478 = $tmp1476(Iter$466$131465);
                    panda$core$Bit $tmp1479 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1478);
                    bool $tmp1474 = $tmp1479.value;
                    if (!$tmp1474) goto $l1473;
                    {
                        int $tmp1482;
                        {
                            ITable* $tmp1486 = Iter$466$131465->$class->itable;
                            while ($tmp1486->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1486 = $tmp1486->next;
                            }
                            $fn1488 $tmp1487 = $tmp1486->methods[1];
                            panda$core$Object* $tmp1489 = $tmp1487(Iter$466$131465);
                            $tmp1485 = $tmp1489;
                            $tmp1484 = ((org$pandalanguage$pandac$ASTNode*) $tmp1485);
                            p1483 = $tmp1484;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1484));
                            panda$core$Panda$unref$panda$core$Object($tmp1485);
                            memset(&name1490, 0, sizeof(name1490));
                            memset(&bound1491, 0, sizeof(bound1491));
                            int $tmp1494;
                            {
                                $tmp1496 = p1483;
                                $match$469_171495 = $tmp1496;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1496));
                                panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$469_171495->$rawValue, ((panda$core$Int64) { 20 }));
                                if ($tmp1497.value) {
                                {
                                    panda$core$String** $tmp1499 = ((panda$core$String**) ((char*) $match$469_171495->$data + 16));
                                    id1498 = *$tmp1499;
                                    {
                                        $tmp1500 = name1490;
                                        $tmp1501 = id1498;
                                        name1490 = $tmp1501;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1501));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1500));
                                    }
                                    {
                                        $tmp1502 = bound1491;
                                        org$pandalanguage$pandac$Type* $tmp1505 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                                        $tmp1504 = $tmp1505;
                                        $tmp1503 = $tmp1504;
                                        bound1491 = $tmp1503;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1503));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1504));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1502));
                                    }
                                }
                                }
                                else {
                                panda$core$Bit $tmp1506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$469_171495->$rawValue, ((panda$core$Int64) { 41 }));
                                if ($tmp1506.value) {
                                {
                                    panda$core$String** $tmp1508 = ((panda$core$String**) ((char*) $match$469_171495->$data + 16));
                                    id1507 = *$tmp1508;
                                    org$pandalanguage$pandac$ASTNode** $tmp1510 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$469_171495->$data + 24));
                                    type1509 = *$tmp1510;
                                    {
                                        $tmp1511 = name1490;
                                        $tmp1512 = id1507;
                                        name1490 = $tmp1512;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1512));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1511));
                                    }
                                    {
                                        $tmp1513 = bound1491;
                                        org$pandalanguage$pandac$Type* $tmp1516 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, type1509);
                                        $tmp1515 = $tmp1516;
                                        $tmp1514 = $tmp1515;
                                        bound1491 = $tmp1514;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1514));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1515));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1513));
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
                            $tmp1494 = -1;
                            goto $l1492;
                            $l1492:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1496));
                            switch ($tmp1494) {
                                case -1: goto $l1517;
                            }
                            $l1517:;
                            org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1519 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class);
                            org$pandalanguage$pandac$Position $tmp1521 = (($fn1520) p1483->$class->vtable[2])(p1483);
                            org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp1519, $tmp1521, fullName1421, name1490, bound1491);
                            $tmp1518 = $tmp1519;
                            panda$collections$Array$add$panda$collections$Array$T(parameters1458, ((panda$core$Object*) $tmp1518));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1518));
                        }
                        $tmp1482 = -1;
                        goto $l1480;
                        $l1480:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1483));
                        p1483 = NULL;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) name1490));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) bound1491));
                        switch ($tmp1482) {
                            case -1: goto $l1522;
                        }
                        $l1522:;
                    }
                    goto $l1472;
                    $l1473:;
                }
                $tmp1464 = -1;
                goto $l1462;
                $l1462:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$466$131465));
                Iter$466$131465 = NULL;
                switch ($tmp1464) {
                    case -1: goto $l1523;
                }
                $l1523:;
            }
            panda$core$Bit $tmp1524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1524.value) {
            {
                panda$core$Object* $tmp1527 = (($fn1526) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1525 = $tmp1527;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1525), p_position, &$s1528);
                panda$core$Panda$unref$panda$core$Object($tmp1525);
            }
            }
        }
        }
        panda$collections$Array* $tmp1532 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1532);
        $tmp1531 = $tmp1532;
        $tmp1530 = $tmp1531;
        supertypes1529 = $tmp1530;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1530));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1531));
        if (((panda$core$Bit) { p_rawSupertypes != NULL }).value) {
        {
            panda$core$Bit $tmp1533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1533.value) {
            {
                panda$core$Object* $tmp1536 = (($fn1535) self->compiler->$class->vtable[2])(self->compiler);
                $tmp1534 = $tmp1536;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1534), p_position, &$s1537);
                panda$core$Panda$unref$panda$core$Object($tmp1534);
            }
            }
            {
                int $tmp1540;
                {
                    ITable* $tmp1544 = ((panda$collections$Iterable*) p_rawSupertypes)->$class->itable;
                    while ($tmp1544->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1544 = $tmp1544->next;
                    }
                    $fn1546 $tmp1545 = $tmp1544->methods[0];
                    panda$collections$Iterator* $tmp1547 = $tmp1545(((panda$collections$Iterable*) p_rawSupertypes));
                    $tmp1543 = $tmp1547;
                    $tmp1542 = $tmp1543;
                    Iter$490$131541 = $tmp1542;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1542));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1543));
                    $l1548:;
                    ITable* $tmp1551 = Iter$490$131541->$class->itable;
                    while ($tmp1551->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1551 = $tmp1551->next;
                    }
                    $fn1553 $tmp1552 = $tmp1551->methods[0];
                    panda$core$Bit $tmp1554 = $tmp1552(Iter$490$131541);
                    panda$core$Bit $tmp1555 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1554);
                    bool $tmp1550 = $tmp1555.value;
                    if (!$tmp1550) goto $l1549;
                    {
                        int $tmp1558;
                        {
                            ITable* $tmp1562 = Iter$490$131541->$class->itable;
                            while ($tmp1562->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1562 = $tmp1562->next;
                            }
                            $fn1564 $tmp1563 = $tmp1562->methods[1];
                            panda$core$Object* $tmp1565 = $tmp1563(Iter$490$131541);
                            $tmp1561 = $tmp1565;
                            $tmp1560 = ((org$pandalanguage$pandac$ASTNode*) $tmp1561);
                            s1559 = $tmp1560;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1560));
                            panda$core$Panda$unref$panda$core$Object($tmp1561);
                            org$pandalanguage$pandac$Type* $tmp1567 = org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(self, s1559);
                            $tmp1566 = $tmp1567;
                            panda$collections$Array$add$panda$collections$Array$T(supertypes1529, ((panda$core$Object*) $tmp1566));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1566));
                        }
                        $tmp1558 = -1;
                        goto $l1556;
                        $l1556:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1559));
                        s1559 = NULL;
                        switch ($tmp1558) {
                            case -1: goto $l1568;
                        }
                        $l1568:;
                    }
                    goto $l1548;
                    $l1549:;
                }
                $tmp1540 = -1;
                goto $l1538;
                $l1538:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$490$131541));
                Iter$490$131541 = NULL;
                switch ($tmp1540) {
                    case -1: goto $l1569;
                }
                $l1569:;
            }
        }
        }
        org$pandalanguage$pandac$ClassDecl* $tmp1573 = (org$pandalanguage$pandac$ClassDecl*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class);
        panda$core$Object* $tmp1576 = (($fn1575) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1574 = $tmp1576;
        org$pandalanguage$pandac$ClassDecl$init$panda$io$File$org$pandalanguage$pandac$Position$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp1573, p_source, p_position, p_aliases, doccomment1438, annotations1454, p_kind, fullName1421, ((panda$collections$ListView*) supertypes1529), parameters1458, ((org$pandalanguage$pandac$Compiler*) $tmp1574)->root);
        $tmp1572 = $tmp1573;
        $tmp1571 = $tmp1572;
        result1570 = $tmp1571;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1571));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1572));
        panda$core$Panda$unref$panda$core$Object($tmp1574);
        panda$core$Object* $tmp1579 = (($fn1578) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1577 = $tmp1579;
        panda$collections$Stack$push$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1577)->currentClass, ((panda$core$Object*) result1570));
        panda$core$Panda$unref$panda$core$Object($tmp1577);
        panda$core$Bit $tmp1580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1580.value) {
        {
            int $tmp1583;
            {
                org$pandalanguage$pandac$FieldDecl* $tmp1587 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1589 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1589);
                $tmp1588 = $tmp1589;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1590, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1593 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
                $tmp1592 = $tmp1593;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1587, result1570, result1570->position, NULL, $tmp1588, $tmp1590, &$s1591, $tmp1592, NULL);
                $tmp1586 = $tmp1587;
                $tmp1585 = $tmp1586;
                rawValue1584 = $tmp1585;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1585));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1586));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1592));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1588));
                panda$collections$Array$add$panda$collections$Array$T(result1570->fields, ((panda$core$Object*) rawValue1584));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1570->symbolTable, ((org$pandalanguage$pandac$Symbol*) rawValue1584));
                org$pandalanguage$pandac$FieldDecl* $tmp1597 = (org$pandalanguage$pandac$FieldDecl*) pandaObjectAlloc(113, (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1599 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                org$pandalanguage$pandac$Annotations$init($tmp1599);
                $tmp1598 = $tmp1599;
                org$pandalanguage$pandac$FieldDecl$Kind$init$panda$core$Int64(&$tmp1600, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$Type* $tmp1603 = org$pandalanguage$pandac$Type$ChoiceData$R$org$pandalanguage$pandac$Type();
                $tmp1602 = $tmp1603;
                org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$FieldDecl$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp1597, result1570, result1570->position, NULL, $tmp1598, $tmp1600, &$s1601, $tmp1602, NULL);
                $tmp1596 = $tmp1597;
                $tmp1595 = $tmp1596;
                data1594 = $tmp1595;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1595));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1596));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1602));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1598));
                panda$collections$Array$add$panda$collections$Array$T(result1570->fields, ((panda$core$Object*) data1594));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1570->symbolTable, ((org$pandalanguage$pandac$Symbol*) data1594));
            }
            $tmp1583 = -1;
            goto $l1581;
            $l1581:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) rawValue1584));
            rawValue1584 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) data1594));
            data1594 = NULL;
            switch ($tmp1583) {
                case -1: goto $l1604;
            }
            $l1604:;
        }
        }
        {
            int $tmp1607;
            {
                ITable* $tmp1611 = ((panda$collections$Iterable*) p_members)->$class->itable;
                while ($tmp1611->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1611 = $tmp1611->next;
                }
                $fn1613 $tmp1612 = $tmp1611->methods[0];
                panda$collections$Iterator* $tmp1614 = $tmp1612(((panda$collections$Iterable*) p_members));
                $tmp1610 = $tmp1614;
                $tmp1609 = $tmp1610;
                Iter$507$91608 = $tmp1609;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1609));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1610));
                $l1615:;
                ITable* $tmp1618 = Iter$507$91608->$class->itable;
                while ($tmp1618->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1618 = $tmp1618->next;
                }
                $fn1620 $tmp1619 = $tmp1618->methods[0];
                panda$core$Bit $tmp1621 = $tmp1619(Iter$507$91608);
                panda$core$Bit $tmp1622 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1621);
                bool $tmp1617 = $tmp1622.value;
                if (!$tmp1617) goto $l1616;
                {
                    int $tmp1625;
                    {
                        ITable* $tmp1629 = Iter$507$91608->$class->itable;
                        while ($tmp1629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1629 = $tmp1629->next;
                        }
                        $fn1631 $tmp1630 = $tmp1629->methods[1];
                        panda$core$Object* $tmp1632 = $tmp1630(Iter$507$91608);
                        $tmp1628 = $tmp1632;
                        $tmp1627 = ((org$pandalanguage$pandac$ASTNode*) $tmp1628);
                        m1626 = $tmp1627;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1627));
                        panda$core$Panda$unref$panda$core$Object($tmp1628);
                        int $tmp1635;
                        {
                            $tmp1637 = m1626;
                            $match$508_131636 = $tmp1637;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1637));
                            panda$core$Bit $tmp1638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$508_131636->$rawValue, ((panda$core$Int64) { 26 }));
                            if ($tmp1638.value) {
                            {
                                org$pandalanguage$pandac$Position* $tmp1640 = ((org$pandalanguage$pandac$Position*) ((char*) $match$508_131636->$data + 0));
                                mPosition1639 = *$tmp1640;
                                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1642 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$508_131636->$data + 32));
                                methodKind1641 = *$tmp1642;
                                panda$core$Bit $tmp1643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(methodKind1641.$rawValue, ((panda$core$Int64) { 2 }));
                                if ($tmp1643.value) {
                                {
                                    {
                                        $match$511_251644 = p_kind;
                                        panda$core$Bit $tmp1645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$511_251644.$rawValue, ((panda$core$Int64) { 0 }));
                                        if ($tmp1645.value) {
                                        {
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$511_251644.$rawValue, ((panda$core$Int64) { 1 }));
                                        if ($tmp1646.value) {
                                        {
                                            panda$core$Object* $tmp1649 = (($fn1648) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1647 = $tmp1649;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1647), mPosition1639, &$s1650);
                                            panda$core$Panda$unref$panda$core$Object($tmp1647);
                                        }
                                        }
                                        else {
                                        panda$core$Bit $tmp1651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$511_251644.$rawValue, ((panda$core$Int64) { 2 }));
                                        if ($tmp1651.value) {
                                        {
                                            panda$core$Object* $tmp1654 = (($fn1653) self->compiler->$class->vtable[2])(self->compiler);
                                            $tmp1652 = $tmp1654;
                                            org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1652), mPosition1639, &$s1655);
                                            panda$core$Panda$unref$panda$core$Object($tmp1652);
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
                        $tmp1635 = -1;
                        goto $l1633;
                        $l1633:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1637));
                        switch ($tmp1635) {
                            case -1: goto $l1656;
                        }
                        $l1656:;
                        org$pandalanguage$pandac$Scanner$scanClassChild$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(self, result1570, m1626);
                    }
                    $tmp1625 = -1;
                    goto $l1623;
                    $l1623:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1626));
                    m1626 = NULL;
                    switch ($tmp1625) {
                        case -1: goto $l1657;
                    }
                    $l1657:;
                }
                goto $l1615;
                $l1616:;
            }
            $tmp1607 = -1;
            goto $l1605;
            $l1605:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$507$91608));
            Iter$507$91608 = NULL;
            switch ($tmp1607) {
                case -1: goto $l1658;
            }
            $l1658:;
        }
        foundInit1659 = ((panda$core$Bit) { false });
        foundCleanup1660 = ((panda$core$Bit) { false });
        {
            int $tmp1663;
            {
                ITable* $tmp1667 = ((panda$collections$Iterable*) result1570->methods)->$class->itable;
                while ($tmp1667->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1667 = $tmp1667->next;
                }
                $fn1669 $tmp1668 = $tmp1667->methods[0];
                panda$collections$Iterator* $tmp1670 = $tmp1668(((panda$collections$Iterable*) result1570->methods));
                $tmp1666 = $tmp1670;
                $tmp1665 = $tmp1666;
                Iter$526$91664 = $tmp1665;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1665));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1666));
                $l1671:;
                ITable* $tmp1674 = Iter$526$91664->$class->itable;
                while ($tmp1674->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1674 = $tmp1674->next;
                }
                $fn1676 $tmp1675 = $tmp1674->methods[0];
                panda$core$Bit $tmp1677 = $tmp1675(Iter$526$91664);
                panda$core$Bit $tmp1678 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1677);
                bool $tmp1673 = $tmp1678.value;
                if (!$tmp1673) goto $l1672;
                {
                    int $tmp1681;
                    {
                        ITable* $tmp1685 = Iter$526$91664->$class->itable;
                        while ($tmp1685->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1685 = $tmp1685->next;
                        }
                        $fn1687 $tmp1686 = $tmp1685->methods[1];
                        panda$core$Object* $tmp1688 = $tmp1686(Iter$526$91664);
                        $tmp1684 = $tmp1688;
                        $tmp1683 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1684);
                        m1682 = $tmp1683;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1683));
                        panda$core$Panda$unref$panda$core$Object($tmp1684);
                        panda$core$Bit $tmp1689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m1682->methodKind.$rawValue, ((panda$core$Int64) { 2 }));
                        if ($tmp1689.value) {
                        {
                            foundInit1659 = ((panda$core$Bit) { true });
                        }
                        }
                        panda$core$Bit $tmp1692 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1682)->name, &$s1691);
                        bool $tmp1690 = $tmp1692.value;
                        if (!$tmp1690) goto $l1693;
                        panda$core$Int64 $tmp1694 = panda$collections$Array$get_count$R$panda$core$Int64(m1682->parameters);
                        panda$core$Bit $tmp1695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1694, ((panda$core$Int64) { 0 }));
                        $tmp1690 = $tmp1695.value;
                        $l1693:;
                        panda$core$Bit $tmp1696 = { $tmp1690 };
                        if ($tmp1696.value) {
                        {
                            foundCleanup1660 = ((panda$core$Bit) { true });
                            panda$core$Bit $tmp1697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
                            if ($tmp1697.value) {
                            {
                                panda$core$Object* $tmp1700 = (($fn1699) self->compiler->$class->vtable[2])(self->compiler);
                                $tmp1698 = $tmp1700;
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1698), p_position, &$s1701);
                                panda$core$Panda$unref$panda$core$Object($tmp1698);
                            }
                            }
                        }
                        }
                    }
                    $tmp1681 = -1;
                    goto $l1679;
                    $l1679:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1682));
                    m1682 = NULL;
                    switch ($tmp1681) {
                        case -1: goto $l1702;
                    }
                    $l1702:;
                }
                goto $l1671;
                $l1672:;
            }
            $tmp1663 = -1;
            goto $l1661;
            $l1661:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$526$91664));
            Iter$526$91664 = NULL;
            switch ($tmp1663) {
                case -1: goto $l1703;
            }
            $l1703:;
        }
        panda$core$Bit $tmp1706 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit1659);
        bool $tmp1705 = $tmp1706.value;
        if (!$tmp1705) goto $l1707;
        panda$core$Bit $tmp1708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        $tmp1705 = $tmp1708.value;
        $l1707:;
        panda$core$Bit $tmp1709 = { $tmp1705 };
        bool $tmp1704 = $tmp1709.value;
        if (!$tmp1704) goto $l1710;
        panda$core$Bit $tmp1712 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1570->name, &$s1711);
        $tmp1704 = $tmp1712.value;
        $l1710:;
        panda$core$Bit $tmp1713 = { $tmp1704 };
        if ($tmp1713.value) {
        {
            int $tmp1716;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1720 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1722 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64 $tmp1723 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 13 }));
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1722, $tmp1723);
                $tmp1721 = $tmp1722;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1724, ((panda$core$Int64) { 2 }));
                panda$collections$Array* $tmp1727 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1727);
                $tmp1726 = $tmp1727;
                org$pandalanguage$pandac$Type* $tmp1729 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1728 = $tmp1729;
                panda$collections$ImmutableArray* $tmp1731 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1731);
                $tmp1730 = $tmp1731;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1720, result1570, p_position, NULL, $tmp1721, $tmp1724, &$s1725, $tmp1726, $tmp1728, $tmp1730);
                $tmp1719 = $tmp1720;
                $tmp1718 = $tmp1719;
                defaultInit1717 = $tmp1718;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1718));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1719));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1730));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1728));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1726));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1721));
                panda$collections$Array$add$panda$collections$Array$T(result1570->methods, ((panda$core$Object*) defaultInit1717));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1570->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit1717));
            }
            $tmp1716 = -1;
            goto $l1714;
            $l1714:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultInit1717));
            defaultInit1717 = NULL;
            switch ($tmp1716) {
                case -1: goto $l1732;
            }
            $l1732:;
        }
        }
        panda$core$Bit $tmp1735 = panda$core$Bit$$NOT$R$panda$core$Bit(foundCleanup1660);
        bool $tmp1734 = $tmp1735.value;
        if (!$tmp1734) goto $l1736;
        panda$core$Bit $tmp1738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 0 }));
        bool $tmp1737 = $tmp1738.value;
        if ($tmp1737) goto $l1739;
        panda$core$Bit $tmp1740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        $tmp1737 = $tmp1740.value;
        $l1739:;
        panda$core$Bit $tmp1741 = { $tmp1737 };
        $tmp1734 = $tmp1741.value;
        $l1736:;
        panda$core$Bit $tmp1742 = { $tmp1734 };
        bool $tmp1733 = $tmp1742.value;
        if (!$tmp1733) goto $l1743;
        panda$core$Bit $tmp1745 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(result1570->name, &$s1744);
        $tmp1733 = $tmp1745.value;
        $l1743:;
        panda$core$Bit $tmp1746 = { $tmp1733 };
        if ($tmp1746.value) {
        {
            int $tmp1749;
            {
                org$pandalanguage$pandac$MethodDecl* $tmp1753 = (org$pandalanguage$pandac$MethodDecl*) pandaObjectAlloc(136, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class);
                org$pandalanguage$pandac$Annotations* $tmp1755 = (org$pandalanguage$pandac$Annotations*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class);
                panda$core$Int64 $tmp1756 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                panda$core$Int64 $tmp1757 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 13 }));
                panda$core$Int64 $tmp1758 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp1756, $tmp1757);
                org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp1755, $tmp1758);
                $tmp1754 = $tmp1755;
                org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(&$tmp1759, ((panda$core$Int64) { 0 }));
                panda$collections$Array* $tmp1762 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1762);
                $tmp1761 = $tmp1762;
                org$pandalanguage$pandac$Type* $tmp1764 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp1763 = $tmp1764;
                panda$collections$ImmutableArray* $tmp1766 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
                panda$collections$ImmutableArray$init($tmp1766);
                $tmp1765 = $tmp1766;
                org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q($tmp1753, result1570, p_position, NULL, $tmp1754, $tmp1759, &$s1760, $tmp1761, $tmp1763, $tmp1765);
                $tmp1752 = $tmp1753;
                $tmp1751 = $tmp1752;
                defaultCleanup1750 = $tmp1751;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1751));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1752));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1765));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1763));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1761));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1754));
                panda$collections$Array$add$panda$collections$Array$T(result1570->methods, ((panda$core$Object*) defaultCleanup1750));
                org$pandalanguage$pandac$SymbolTable$add$org$pandalanguage$pandac$Symbol(result1570->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultCleanup1750));
            }
            $tmp1749 = -1;
            goto $l1747;
            $l1747:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) defaultCleanup1750));
            defaultCleanup1750 = NULL;
            switch ($tmp1749) {
                case -1: goto $l1767;
            }
            $l1767:;
        }
        }
        panda$core$Bit $tmp1768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1768.value) {
        {
            haveFields1769 = ((panda$core$Bit) { false });
            {
                int $tmp1772;
                {
                    ITable* $tmp1776 = ((panda$collections$Iterable*) result1570->choiceEntries)->$class->itable;
                    while ($tmp1776->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1776 = $tmp1776->next;
                    }
                    $fn1778 $tmp1777 = $tmp1776->methods[0];
                    panda$collections$Iterator* $tmp1779 = $tmp1777(((panda$collections$Iterable*) result1570->choiceEntries));
                    $tmp1775 = $tmp1779;
                    $tmp1774 = $tmp1775;
                    Iter$555$131773 = $tmp1774;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1774));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1775));
                    $l1780:;
                    ITable* $tmp1783 = Iter$555$131773->$class->itable;
                    while ($tmp1783->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1783 = $tmp1783->next;
                    }
                    $fn1785 $tmp1784 = $tmp1783->methods[0];
                    panda$core$Bit $tmp1786 = $tmp1784(Iter$555$131773);
                    panda$core$Bit $tmp1787 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1786);
                    bool $tmp1782 = $tmp1787.value;
                    if (!$tmp1782) goto $l1781;
                    {
                        int $tmp1790;
                        {
                            ITable* $tmp1794 = Iter$555$131773->$class->itable;
                            while ($tmp1794->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1794 = $tmp1794->next;
                            }
                            $fn1796 $tmp1795 = $tmp1794->methods[1];
                            panda$core$Object* $tmp1797 = $tmp1795(Iter$555$131773);
                            $tmp1793 = $tmp1797;
                            $tmp1792 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp1793);
                            e1791 = $tmp1792;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1792));
                            panda$core$Panda$unref$panda$core$Object($tmp1793);
                            panda$core$Int64 $tmp1798 = panda$collections$Array$get_count$R$panda$core$Int64(e1791->fields);
                            panda$core$Bit $tmp1799 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1798, ((panda$core$Int64) { 0 }));
                            if ($tmp1799.value) {
                            {
                                haveFields1769 = ((panda$core$Bit) { true });
                                $tmp1790 = 0;
                                goto $l1788;
                                $l1800:;
                                goto $l1781;
                            }
                            }
                        }
                        $tmp1790 = -1;
                        goto $l1788;
                        $l1788:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1791));
                        e1791 = NULL;
                        switch ($tmp1790) {
                            case 0: goto $l1800;
                            case -1: goto $l1801;
                        }
                        $l1801:;
                    }
                    goto $l1780;
                    $l1781:;
                }
                $tmp1772 = -1;
                goto $l1770;
                $l1770:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$555$131773));
                Iter$555$131773 = NULL;
                switch ($tmp1772) {
                    case -1: goto $l1802;
                }
                $l1802:;
            }
            panda$core$Bit $tmp1803 = panda$core$Bit$$NOT$R$panda$core$Bit(haveFields1769);
            if ($tmp1803.value) {
            {
                {
                    $tmp1804 = result1570->rawSuper;
                    org$pandalanguage$pandac$Type* $tmp1807 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
                    $tmp1806 = $tmp1807;
                    $tmp1805 = $tmp1806;
                    result1570->rawSuper = $tmp1805;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1805));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1806));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1804));
                }
            }
            }
        }
        }
        panda$core$Object* $tmp1811 = (($fn1810) self->compiler->$class->vtable[2])(self->compiler);
        $tmp1809 = $tmp1811;
        panda$core$Object* $tmp1812 = panda$collections$Stack$pop$R$panda$collections$Stack$T(((org$pandalanguage$pandac$Compiler*) $tmp1809)->currentClass);
        $tmp1808 = $tmp1812;
        panda$core$Panda$unref$panda$core$Object($tmp1808);
        panda$core$Panda$unref$panda$core$Object($tmp1809);
        $tmp1814 = result1570;
        $returnValue1813 = $tmp1814;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1814));
        $tmp1420 = 0;
        goto $l1418;
        $l1815:;
        return $returnValue1813;
    }
    $l1418:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fullName1421));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment1438));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1454));
    annotations1454 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parameters1458));
    parameters1458 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) supertypes1529));
    supertypes1529 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1570));
    result1570 = NULL;
    switch ($tmp1420) {
        case 0: goto $l1815;
    }
    $l1817:;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* Iter$571$91821 = NULL;
    panda$collections$Iterator* $tmp1822;
    panda$collections$Iterator* $tmp1823;
    org$pandalanguage$pandac$ClassDecl* inner1839 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1840;
    panda$core$Object* $tmp1841;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        int $tmp1820;
        {
            ITable* $tmp1824 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
            while ($tmp1824->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1824 = $tmp1824->next;
            }
            $fn1826 $tmp1825 = $tmp1824->methods[0];
            panda$collections$Iterator* $tmp1827 = $tmp1825(((panda$collections$Iterable*) p_cl->classes));
            $tmp1823 = $tmp1827;
            $tmp1822 = $tmp1823;
            Iter$571$91821 = $tmp1822;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1822));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1823));
            $l1828:;
            ITable* $tmp1831 = Iter$571$91821->$class->itable;
            while ($tmp1831->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1831 = $tmp1831->next;
            }
            $fn1833 $tmp1832 = $tmp1831->methods[0];
            panda$core$Bit $tmp1834 = $tmp1832(Iter$571$91821);
            panda$core$Bit $tmp1835 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1834);
            bool $tmp1830 = $tmp1835.value;
            if (!$tmp1830) goto $l1829;
            {
                int $tmp1838;
                {
                    ITable* $tmp1842 = Iter$571$91821->$class->itable;
                    while ($tmp1842->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1842 = $tmp1842->next;
                    }
                    $fn1844 $tmp1843 = $tmp1842->methods[1];
                    panda$core$Object* $tmp1845 = $tmp1843(Iter$571$91821);
                    $tmp1841 = $tmp1845;
                    $tmp1840 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1841);
                    inner1839 = $tmp1840;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1840));
                    panda$core$Panda$unref$panda$core$Object($tmp1841);
                    org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, inner1839, p_arr);
                }
                $tmp1838 = -1;
                goto $l1836;
                $l1836:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) inner1839));
                inner1839 = NULL;
                switch ($tmp1838) {
                    case -1: goto $l1846;
                }
                $l1846:;
            }
            goto $l1828;
            $l1829:;
        }
        $tmp1820 = -1;
        goto $l1818;
        $l1818:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$571$91821));
        Iter$571$91821 = NULL;
        switch ($tmp1820) {
            case -1: goto $l1847;
        }
        $l1847:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    org$pandalanguage$pandac$ASTNode* $match$577_91851 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1852;
    panda$collections$ImmutableArray* entries1854 = NULL;
    panda$collections$Array* result1859 = NULL;
    panda$collections$Array* $tmp1860;
    panda$collections$Array* $tmp1861;
    panda$core$String* currentPackage1863 = NULL;
    panda$core$String* $tmp1864;
    panda$collections$HashMap* aliases1866 = NULL;
    panda$collections$HashMap* $tmp1867;
    panda$collections$HashMap* $tmp1868;
    panda$collections$Iterator* Iter$582$171873 = NULL;
    panda$collections$Iterator* $tmp1874;
    panda$collections$Iterator* $tmp1875;
    org$pandalanguage$pandac$ASTNode* e1891 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1892;
    panda$core$Object* $tmp1893;
    org$pandalanguage$pandac$ASTNode* $match$583_211901 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1902;
    panda$core$String* name1904 = NULL;
    panda$core$String* $tmp1906;
    panda$core$String* $tmp1907;
    panda$core$String* fullName1909 = NULL;
    panda$core$String$Index$nullable idx1914;
    panda$core$String* alias1917 = NULL;
    panda$core$String* $tmp1918;
    panda$core$String* $tmp1919;
    panda$core$String* $tmp1920;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp1921;
    panda$core$String* $tmp1924;
    panda$core$String* $tmp1925;
    org$pandalanguage$pandac$Position position1928;
    org$pandalanguage$pandac$ASTNode* dc1930 = NULL;
    panda$collections$ImmutableArray* annotations1932 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind1934;
    panda$core$String* name1936 = NULL;
    panda$collections$ImmutableArray* generics1938 = NULL;
    panda$collections$ImmutableArray* supertypes1940 = NULL;
    panda$collections$ImmutableArray* members1942 = NULL;
    org$pandalanguage$pandac$ClassDecl* cl1947 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1948;
    org$pandalanguage$pandac$ClassDecl* $tmp1949;
    panda$collections$ListView* $returnValue1955;
    panda$collections$ListView* $tmp1956;
    int $tmp1850;
    {
        $tmp1852 = p_file;
        $match$577_91851 = $tmp1852;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1852));
        panda$core$Bit $tmp1853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$577_91851->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1853.value) {
        {
            panda$collections$ImmutableArray** $tmp1855 = ((panda$collections$ImmutableArray**) ((char*) $match$577_91851->$data + 0));
            entries1854 = *$tmp1855;
            int $tmp1858;
            {
                panda$collections$Array* $tmp1862 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp1862);
                $tmp1861 = $tmp1862;
                $tmp1860 = $tmp1861;
                result1859 = $tmp1860;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1860));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1861));
                $tmp1864 = &$s1865;
                currentPackage1863 = $tmp1864;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1864));
                panda$collections$HashMap* $tmp1869 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
                panda$collections$HashMap$init($tmp1869);
                $tmp1868 = $tmp1869;
                $tmp1867 = $tmp1868;
                aliases1866 = $tmp1867;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1867));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1868));
                {
                    int $tmp1872;
                    {
                        ITable* $tmp1876 = ((panda$collections$Iterable*) entries1854)->$class->itable;
                        while ($tmp1876->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1876 = $tmp1876->next;
                        }
                        $fn1878 $tmp1877 = $tmp1876->methods[0];
                        panda$collections$Iterator* $tmp1879 = $tmp1877(((panda$collections$Iterable*) entries1854));
                        $tmp1875 = $tmp1879;
                        $tmp1874 = $tmp1875;
                        Iter$582$171873 = $tmp1874;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1874));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1875));
                        $l1880:;
                        ITable* $tmp1883 = Iter$582$171873->$class->itable;
                        while ($tmp1883->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1883 = $tmp1883->next;
                        }
                        $fn1885 $tmp1884 = $tmp1883->methods[0];
                        panda$core$Bit $tmp1886 = $tmp1884(Iter$582$171873);
                        panda$core$Bit $tmp1887 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1886);
                        bool $tmp1882 = $tmp1887.value;
                        if (!$tmp1882) goto $l1881;
                        {
                            int $tmp1890;
                            {
                                ITable* $tmp1894 = Iter$582$171873->$class->itable;
                                while ($tmp1894->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1894 = $tmp1894->next;
                                }
                                $fn1896 $tmp1895 = $tmp1894->methods[1];
                                panda$core$Object* $tmp1897 = $tmp1895(Iter$582$171873);
                                $tmp1893 = $tmp1897;
                                $tmp1892 = ((org$pandalanguage$pandac$ASTNode*) $tmp1893);
                                e1891 = $tmp1892;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1892));
                                panda$core$Panda$unref$panda$core$Object($tmp1893);
                                int $tmp1900;
                                {
                                    $tmp1902 = e1891;
                                    $match$583_211901 = $tmp1902;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1902));
                                    panda$core$Bit $tmp1903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$583_211901->$rawValue, ((panda$core$Int64) { 30 }));
                                    if ($tmp1903.value) {
                                    {
                                        panda$core$String** $tmp1905 = ((panda$core$String**) ((char*) $match$583_211901->$data + 16));
                                        name1904 = *$tmp1905;
                                        {
                                            $tmp1906 = currentPackage1863;
                                            $tmp1907 = name1904;
                                            currentPackage1863 = $tmp1907;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1907));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1906));
                                        }
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$583_211901->$rawValue, ((panda$core$Int64) { 42 }));
                                    if ($tmp1908.value) {
                                    {
                                        panda$core$String** $tmp1910 = ((panda$core$String**) ((char*) $match$583_211901->$data + 16));
                                        fullName1909 = *$tmp1910;
                                        int $tmp1913;
                                        {
                                            panda$core$String$Index$nullable $tmp1916 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName1909, &$s1915);
                                            idx1914 = $tmp1916;
                                            memset(&alias1917, 0, sizeof(alias1917));
                                            if (((panda$core$Bit) { idx1914.nonnull }).value) {
                                            {
                                                {
                                                    $tmp1918 = alias1917;
                                                    panda$core$String$Index $tmp1922 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName1909, ((panda$core$String$Index) idx1914.value));
                                                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp1921, ((panda$core$String$Index$nullable) { $tmp1922, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                                                    panda$core$String* $tmp1923 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName1909, $tmp1921);
                                                    $tmp1920 = $tmp1923;
                                                    $tmp1919 = $tmp1920;
                                                    alias1917 = $tmp1919;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1919));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1920));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1918));
                                                }
                                            }
                                            }
                                            else {
                                            {
                                                {
                                                    $tmp1924 = alias1917;
                                                    $tmp1925 = fullName1909;
                                                    alias1917 = $tmp1925;
                                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1925));
                                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1924));
                                                }
                                            }
                                            }
                                            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(aliases1866, ((panda$collections$Key*) alias1917), ((panda$core$Object*) fullName1909));
                                        }
                                        $tmp1913 = -1;
                                        goto $l1911;
                                        $l1911:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) alias1917));
                                        switch ($tmp1913) {
                                            case -1: goto $l1926;
                                        }
                                        $l1926:;
                                    }
                                    }
                                    else {
                                    panda$core$Bit $tmp1927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$583_211901->$rawValue, ((panda$core$Int64) { 11 }));
                                    if ($tmp1927.value) {
                                    {
                                        org$pandalanguage$pandac$Position* $tmp1929 = ((org$pandalanguage$pandac$Position*) ((char*) $match$583_211901->$data + 0));
                                        position1928 = *$tmp1929;
                                        org$pandalanguage$pandac$ASTNode** $tmp1931 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$583_211901->$data + 16));
                                        dc1930 = *$tmp1931;
                                        panda$collections$ImmutableArray** $tmp1933 = ((panda$collections$ImmutableArray**) ((char*) $match$583_211901->$data + 24));
                                        annotations1932 = *$tmp1933;
                                        org$pandalanguage$pandac$ClassDecl$Kind* $tmp1935 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$583_211901->$data + 32));
                                        kind1934 = *$tmp1935;
                                        panda$core$String** $tmp1937 = ((panda$core$String**) ((char*) $match$583_211901->$data + 40));
                                        name1936 = *$tmp1937;
                                        panda$collections$ImmutableArray** $tmp1939 = ((panda$collections$ImmutableArray**) ((char*) $match$583_211901->$data + 48));
                                        generics1938 = *$tmp1939;
                                        panda$collections$ImmutableArray** $tmp1941 = ((panda$collections$ImmutableArray**) ((char*) $match$583_211901->$data + 56));
                                        supertypes1940 = *$tmp1941;
                                        panda$collections$ImmutableArray** $tmp1943 = ((panda$collections$ImmutableArray**) ((char*) $match$583_211901->$data + 64));
                                        members1942 = *$tmp1943;
                                        int $tmp1946;
                                        {
                                            org$pandalanguage$pandac$ClassDecl* $tmp1950 = org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$R$org$pandalanguage$pandac$ClassDecl$Q(self, p_source, ((panda$collections$MapView*) aliases1866), currentPackage1863, position1928, dc1930, annotations1932, kind1934, name1936, generics1938, supertypes1940, members1942);
                                            $tmp1949 = $tmp1950;
                                            $tmp1948 = $tmp1949;
                                            cl1947 = $tmp1948;
                                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1948));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1949));
                                            if (((panda$core$Bit) { cl1947 != NULL }).value) {
                                            {
                                                org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(self, cl1947, result1859);
                                            }
                                            }
                                        }
                                        $tmp1946 = -1;
                                        goto $l1944;
                                        $l1944:;
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1947));
                                        cl1947 = NULL;
                                        switch ($tmp1946) {
                                            case -1: goto $l1951;
                                        }
                                        $l1951:;
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
                                $tmp1900 = -1;
                                goto $l1898;
                                $l1898:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1902));
                                switch ($tmp1900) {
                                    case -1: goto $l1952;
                                }
                                $l1952:;
                            }
                            $tmp1890 = -1;
                            goto $l1888;
                            $l1888:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e1891));
                            e1891 = NULL;
                            switch ($tmp1890) {
                                case -1: goto $l1953;
                            }
                            $l1953:;
                        }
                        goto $l1880;
                        $l1881:;
                    }
                    $tmp1872 = -1;
                    goto $l1870;
                    $l1870:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$582$171873));
                    Iter$582$171873 = NULL;
                    switch ($tmp1872) {
                        case -1: goto $l1954;
                    }
                    $l1954:;
                }
                $tmp1956 = ((panda$collections$ListView*) result1859);
                $returnValue1955 = $tmp1956;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1956));
                $tmp1858 = 0;
                goto $l1856;
                $l1957:;
                $tmp1850 = 0;
                goto $l1848;
                $l1958:;
                return $returnValue1955;
            }
            $l1856:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1859));
            result1859 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) currentPackage1863));
            currentPackage1863 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) aliases1866));
            aliases1866 = NULL;
            switch ($tmp1858) {
                case 0: goto $l1957;
            }
            $l1960:;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
    }
    $tmp1850 = -1;
    goto $l1848;
    $l1848:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1852));
    switch ($tmp1850) {
        case 0: goto $l1958;
        case -1: goto $l1961;
    }
    $l1961:;
}
void org$pandalanguage$pandac$Scanner$cleanup(org$pandalanguage$pandac$Scanner* self) {
    int $tmp1964;
    {
    }
    $tmp1964 = -1;
    goto $l1962;
    $l1962:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1964) {
        case -1: goto $l1965;
    }
    $l1965:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
}

