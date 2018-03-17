#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Bit.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Panda.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, org$pandalanguage$pandac$ASTNode$cleanup, org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position} };

typedef org$pandalanguage$pandac$Position (*$fn175)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn264)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn288)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn294)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn300)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn320)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn355)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn388)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn394)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn400)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn425)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn431)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn437)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn457)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn464)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn482)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn488)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn494)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn509)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn530)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn536)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn542)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn556)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn562)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn568)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn597)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn603)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn609)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn647)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn653)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn659)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn677)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn693)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn699)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn705)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn728)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn734)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn740)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn771)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn777)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn783)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn808)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn814)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn820)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn854)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn961)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn967)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn973)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn985)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn991)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn997)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1022)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1028)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1034)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1017 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2 = p_f0;
    {
        panda$core$String** $tmp3 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp3 = p_f1;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp5 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp5 = p_f1;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp6 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp6 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp7 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp7 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp8 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp8 = p_f1;
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp9 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp9 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp10 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        *$tmp10 = p_f3;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp11 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp11 = p_f0;
    panda$core$Bit* $tmp12 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp12 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp13 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp13 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp14 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        *$tmp14 = p_f1;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp15 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp15 = p_f0;
    {
        panda$core$String** $tmp16 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp16 = p_f1;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp17 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp17 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp18 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp18 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp19 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp19 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp20 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp20 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp21 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp21 = p_f1;
    }
    {
        panda$core$String** $tmp22 = ((panda$core$String**) ((char*) self->$data + 24));
        *$tmp22 = p_f2;
    }
    {
        panda$collections$ImmutableArray** $tmp23 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp23 = p_f3;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp24 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp24 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp25 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp25 = p_f1;
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp26 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        *$tmp26 = p_f2;
    }
    panda$core$Int64* $tmp27 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp27 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp28 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp28 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp29 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp29 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp30 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp30 = p_f2;
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp31 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp31 = p_f3;
    {
        panda$core$String** $tmp32 = ((panda$core$String**) ((char*) self->$data + 40));
        *$tmp32 = p_f4;
    }
    {
        panda$collections$ImmutableArray** $tmp33 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        *$tmp33 = p_f5;
    }
    {
        panda$collections$ImmutableArray** $tmp34 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        *$tmp34 = p_f6;
    }
    {
        panda$collections$ImmutableArray** $tmp35 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        *$tmp35 = p_f7;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp36 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp36 = p_f0;
    {
        panda$core$String** $tmp37 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp37 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp38 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp38 = p_f2;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp39 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        *$tmp39 = p_f3;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp40 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp40 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp41 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp41 = p_f1;
    }
    {
        panda$core$String** $tmp42 = ((panda$core$String**) ((char*) self->$data + 24));
        *$tmp42 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp43 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp43 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp44 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp44 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp45 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp45 = p_f2;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp46 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        *$tmp46 = p_f3;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp47 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        *$tmp47 = p_f0;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp48 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp48 = p_f0;
    {
        panda$core$String** $tmp49 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp49 = p_f1;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp50 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp50 = p_f2;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp51 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        *$tmp51 = p_f3;
    }
    {
        panda$collections$ImmutableArray** $tmp52 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        *$tmp52 = p_f4;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp53 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp53 = p_f0;
    {
        panda$core$String** $tmp54 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp54 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp55 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp55 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp56 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp56 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp57 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp57 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp58 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp58 = p_f2;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp59 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        *$tmp59 = p_f3;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp60 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp60 = p_f0;
    panda$core$UInt64* $tmp61 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp61 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp62 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        *$tmp62 = p_f0;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp63 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp63 = p_f0;
    {
        panda$core$String** $tmp64 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp64 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp65 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp65 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp66 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp66 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp67 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp67 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp68 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp68 = p_f2;
    }
    {
        panda$collections$ImmutableArray** $tmp69 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp69 = p_f3;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, org$pandalanguage$pandac$ASTNode* p_f6, panda$collections$ImmutableArray* p_f7) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp70 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp70 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp71 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp71 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp72 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp72 = p_f2;
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp73 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp73 = p_f3;
    {
        panda$core$String** $tmp74 = ((panda$core$String**) ((char*) self->$data + 40));
        *$tmp74 = p_f4;
    }
    {
        panda$collections$ImmutableArray** $tmp75 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        *$tmp75 = p_f5;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp76 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        *$tmp76 = p_f6;
    }
    {
        panda$collections$ImmutableArray** $tmp77 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        *$tmp77 = p_f7;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp78 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp78 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp79 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp79 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp80 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp80 = p_f1;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp81 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp81 = p_f0;
    {
        panda$core$String** $tmp82 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp82 = p_f1;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp83 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp83 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp84 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp84 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp85 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp85 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp86 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp86 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp87 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp87 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp88 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp88 = p_f1;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp89 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp89 = p_f2;
    }
    panda$core$Bit* $tmp90 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp90 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp91 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        *$tmp91 = p_f4;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp92 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp92 = p_f0;
    panda$core$Real64* $tmp93 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp93 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp94 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp94 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp95 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp95 = p_f1;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp96 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp96 = p_f0;
    {
        panda$core$String** $tmp97 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp97 = p_f1;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp98 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp98 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp99 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp99 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp100 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp100 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp101 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp101 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp102 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp102 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp103 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        *$tmp103 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp104 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp104 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp105 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp105 = p_f0;
    {
        panda$core$String** $tmp106 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp106 = p_f1;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp107 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp107 = p_f2;
    }
    {
        panda$collections$ImmutableArray** $tmp108 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp108 = p_f3;
    }
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$77_9109;
    org$pandalanguage$pandac$Position position111;
    org$pandalanguage$pandac$Position position114;
    org$pandalanguage$pandac$Position position117;
    org$pandalanguage$pandac$Position position120;
    org$pandalanguage$pandac$Position position123;
    org$pandalanguage$pandac$Position position126;
    org$pandalanguage$pandac$Position position129;
    org$pandalanguage$pandac$Position position132;
    org$pandalanguage$pandac$Position position135;
    org$pandalanguage$pandac$Position position138;
    org$pandalanguage$pandac$Position position141;
    org$pandalanguage$pandac$Position position144;
    org$pandalanguage$pandac$Position position147;
    org$pandalanguage$pandac$Position position150;
    org$pandalanguage$pandac$Position position153;
    org$pandalanguage$pandac$Position $tmp156;
    org$pandalanguage$pandac$Position position158;
    org$pandalanguage$pandac$Position position161;
    org$pandalanguage$pandac$Position position164;
    org$pandalanguage$pandac$Position position167;
    org$pandalanguage$pandac$Position position170;
    org$pandalanguage$pandac$IRNode* ir173;
    org$pandalanguage$pandac$Position position178;
    org$pandalanguage$pandac$Position position181;
    org$pandalanguage$pandac$Position position184;
    org$pandalanguage$pandac$Position position187;
    org$pandalanguage$pandac$Position position190;
    org$pandalanguage$pandac$Position position193;
    org$pandalanguage$pandac$Position position196;
    org$pandalanguage$pandac$Position position199;
    org$pandalanguage$pandac$Position position202;
    org$pandalanguage$pandac$Position position205;
    org$pandalanguage$pandac$Position position208;
    org$pandalanguage$pandac$Position position211;
    org$pandalanguage$pandac$Position position214;
    org$pandalanguage$pandac$Position position217;
    org$pandalanguage$pandac$Position position220;
    org$pandalanguage$pandac$Position position223;
    org$pandalanguage$pandac$Position position226;
    org$pandalanguage$pandac$Position position229;
    org$pandalanguage$pandac$Position position232;
    org$pandalanguage$pandac$Position position235;
    {
        $match$77_9109 = self;
        panda$core$Bit $tmp110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp110.value) {
        {
            org$pandalanguage$pandac$Position* $tmp112 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position111 = *$tmp112;
            return position111;
        }
        }
        else {
        panda$core$Bit $tmp113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp113.value) {
        {
            org$pandalanguage$pandac$Position* $tmp115 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position114 = *$tmp115;
            return position114;
        }
        }
        else {
        panda$core$Bit $tmp116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp116.value) {
        {
            org$pandalanguage$pandac$Position* $tmp118 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position117 = *$tmp118;
            return position117;
        }
        }
        else {
        panda$core$Bit $tmp119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp119.value) {
        {
            org$pandalanguage$pandac$Position* $tmp121 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position120 = *$tmp121;
            return position120;
        }
        }
        else {
        panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp122.value) {
        {
            org$pandalanguage$pandac$Position* $tmp124 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position123 = *$tmp124;
            return position123;
        }
        }
        else {
        panda$core$Bit $tmp125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp125.value) {
        {
            org$pandalanguage$pandac$Position* $tmp127 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position126 = *$tmp127;
            return position126;
        }
        }
        else {
        panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp128.value) {
        {
            org$pandalanguage$pandac$Position* $tmp130 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position129 = *$tmp130;
            return position129;
        }
        }
        else {
        panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp131.value) {
        {
            org$pandalanguage$pandac$Position* $tmp133 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position132 = *$tmp133;
            return position132;
        }
        }
        else {
        panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp134.value) {
        {
            org$pandalanguage$pandac$Position* $tmp136 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position135 = *$tmp136;
            return position135;
        }
        }
        else {
        panda$core$Bit $tmp137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp137.value) {
        {
            org$pandalanguage$pandac$Position* $tmp139 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position138 = *$tmp139;
            return position138;
        }
        }
        else {
        panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp140.value) {
        {
            org$pandalanguage$pandac$Position* $tmp142 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position141 = *$tmp142;
            return position141;
        }
        }
        else {
        panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp143.value) {
        {
            org$pandalanguage$pandac$Position* $tmp145 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position144 = *$tmp145;
            return position144;
        }
        }
        else {
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp146.value) {
        {
            org$pandalanguage$pandac$Position* $tmp148 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position147 = *$tmp148;
            return position147;
        }
        }
        else {
        panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp149.value) {
        {
            org$pandalanguage$pandac$Position* $tmp151 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position150 = *$tmp151;
            return position150;
        }
        }
        else {
        panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp152.value) {
        {
            org$pandalanguage$pandac$Position* $tmp154 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position153 = *$tmp154;
            return position153;
        }
        }
        else {
        panda$core$Bit $tmp155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp155.value) {
        {
            org$pandalanguage$pandac$Position$init(&$tmp156);
            return $tmp156;
        }
        }
        else {
        panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp157.value) {
        {
            org$pandalanguage$pandac$Position* $tmp159 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position158 = *$tmp159;
            return position158;
        }
        }
        else {
        panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp160.value) {
        {
            org$pandalanguage$pandac$Position* $tmp162 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position161 = *$tmp162;
            return position161;
        }
        }
        else {
        panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp163.value) {
        {
            org$pandalanguage$pandac$Position* $tmp165 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position164 = *$tmp165;
            return position164;
        }
        }
        else {
        panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp166.value) {
        {
            org$pandalanguage$pandac$Position* $tmp168 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position167 = *$tmp168;
            return position167;
        }
        }
        else {
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp169.value) {
        {
            org$pandalanguage$pandac$Position* $tmp171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position170 = *$tmp171;
            return position170;
        }
        }
        else {
        panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp172.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp174 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$77_9109->$data + 0));
            ir173 = *$tmp174;
            org$pandalanguage$pandac$Position $tmp176 = (($fn175) ir173->$class->vtable[3])(ir173);
            return $tmp176;
        }
        }
        else {
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp177.value) {
        {
            org$pandalanguage$pandac$Position* $tmp179 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position178 = *$tmp179;
            return position178;
        }
        }
        else {
        panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp180.value) {
        {
            org$pandalanguage$pandac$Position* $tmp182 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position181 = *$tmp182;
            return position181;
        }
        }
        else {
        panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp183.value) {
        {
            org$pandalanguage$pandac$Position* $tmp185 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position184 = *$tmp185;
            return position184;
        }
        }
        else {
        panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp186.value) {
        {
            org$pandalanguage$pandac$Position* $tmp188 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position187 = *$tmp188;
            return position187;
        }
        }
        else {
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp189.value) {
        {
            org$pandalanguage$pandac$Position* $tmp191 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position190 = *$tmp191;
            return position190;
        }
        }
        else {
        panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp192.value) {
        {
            org$pandalanguage$pandac$Position* $tmp194 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position193 = *$tmp194;
            return position193;
        }
        }
        else {
        panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp195.value) {
        {
            org$pandalanguage$pandac$Position* $tmp197 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position196 = *$tmp197;
            return position196;
        }
        }
        else {
        panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp198.value) {
        {
            org$pandalanguage$pandac$Position* $tmp200 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position199 = *$tmp200;
            return position199;
        }
        }
        else {
        panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp201.value) {
        {
            org$pandalanguage$pandac$Position* $tmp203 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position202 = *$tmp203;
            return position202;
        }
        }
        else {
        panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp204.value) {
        {
            org$pandalanguage$pandac$Position* $tmp206 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position205 = *$tmp206;
            return position205;
        }
        }
        else {
        panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp207.value) {
        {
            org$pandalanguage$pandac$Position* $tmp209 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position208 = *$tmp209;
            return position208;
        }
        }
        else {
        panda$core$Bit $tmp210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp210.value) {
        {
            org$pandalanguage$pandac$Position* $tmp212 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position211 = *$tmp212;
            return position211;
        }
        }
        else {
        panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp213.value) {
        {
            org$pandalanguage$pandac$Position* $tmp215 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position214 = *$tmp215;
            return position214;
        }
        }
        else {
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp216.value) {
        {
            org$pandalanguage$pandac$Position* $tmp218 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position217 = *$tmp218;
            return position217;
        }
        }
        else {
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp219.value) {
        {
            org$pandalanguage$pandac$Position* $tmp221 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position220 = *$tmp221;
            return position220;
        }
        }
        else {
        panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp222.value) {
        {
            org$pandalanguage$pandac$Position* $tmp224 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position223 = *$tmp224;
            return position223;
        }
        }
        else {
        panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp225.value) {
        {
            org$pandalanguage$pandac$Position* $tmp227 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position226 = *$tmp227;
            return position226;
        }
        }
        else {
        panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp228.value) {
        {
            org$pandalanguage$pandac$Position* $tmp230 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position229 = *$tmp230;
            return position229;
        }
        }
        else {
        panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp231.value) {
        {
            org$pandalanguage$pandac$Position* $tmp233 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position232 = *$tmp233;
            return position232;
        }
        }
        else {
        panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9109->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp234.value) {
        {
            org$pandalanguage$pandac$Position* $tmp236 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9109->$data + 0));
            position235 = *$tmp236;
            return position235;
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
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$168_9237;
    panda$core$String* name239;
    org$pandalanguage$pandac$ASTNode* test242;
    org$pandalanguage$pandac$ASTNode* msg244;
    org$pandalanguage$pandac$ASTNode* left258;
    org$pandalanguage$pandac$parser$Token$Kind op260;
    org$pandalanguage$pandac$ASTNode* right262;
    panda$core$Bit value276;
    panda$collections$ImmutableArray* statements280;
    panda$core$MutableString* result282;
    panda$collections$Iterator* Iter$182$17285;
    org$pandalanguage$pandac$ASTNode* s297;
    panda$core$Char8 $tmp304;
    panda$core$String* tmp1305;
    panda$core$String* label308;
    org$pandalanguage$pandac$ASTNode* target316;
    panda$collections$ImmutableArray* args318;
    org$pandalanguage$pandac$ASTNode* dc329;
    panda$core$String* name331;
    panda$collections$ImmutableArray* fields333;
    panda$core$MutableString* result335;
    panda$core$String* tmp2346;
    org$pandalanguage$pandac$ASTNode* base349;
    org$pandalanguage$pandac$ChoiceEntry* ce351;
    panda$core$Int64 index353;
    org$pandalanguage$pandac$ASTNode* dc367;
    panda$collections$ImmutableArray* annotations369;
    org$pandalanguage$pandac$ClassDecl$Kind kind371;
    panda$core$String* name373;
    panda$collections$ImmutableArray* generics375;
    panda$collections$ImmutableArray* supertypes377;
    panda$collections$ImmutableArray* members379;
    panda$core$MutableString* result381;
    panda$collections$Iterator* Iter$208$17385;
    org$pandalanguage$pandac$ASTNode* a397;
    org$pandalanguage$pandac$ClassDecl$Kind $match$211_17404;
    panda$collections$Iterator* Iter$224$17422;
    org$pandalanguage$pandac$ASTNode* m434;
    panda$core$Char8 $tmp441;
    panda$core$String* tmp3442;
    panda$core$String* label445;
    org$pandalanguage$pandac$ASTNode* target453;
    org$pandalanguage$pandac$ASTNode* value455;
    panda$core$String* label467;
    panda$collections$ImmutableArray* statements469;
    org$pandalanguage$pandac$ASTNode* test471;
    panda$core$MutableString* result473;
    panda$collections$Iterator* Iter$245$17479;
    org$pandalanguage$pandac$ASTNode* s491;
    panda$core$String* tmp4502;
    org$pandalanguage$pandac$ASTNode* base505;
    panda$core$String* field507;
    org$pandalanguage$pandac$ASTNode* dc517;
    panda$collections$ImmutableArray* annotations519;
    org$pandalanguage$pandac$ASTNode* decl521;
    panda$core$MutableString* result523;
    panda$collections$Iterator* Iter$257$17527;
    org$pandalanguage$pandac$ASTNode* a539;
    panda$core$String* tmp5546;
    panda$collections$ImmutableArray* entries549;
    panda$core$MutableString* result551;
    panda$collections$Iterator* Iter$264$17553;
    org$pandalanguage$pandac$ASTNode* e565;
    panda$core$String* tmp6572;
    panda$core$String* label575;
    org$pandalanguage$pandac$ASTNode* target577;
    org$pandalanguage$pandac$ASTNode* list579;
    panda$collections$ImmutableArray* statements581;
    panda$core$MutableString* result583;
    panda$collections$Iterator* Iter$274$17594;
    org$pandalanguage$pandac$ASTNode* s606;
    panda$core$Char8 $tmp613;
    panda$core$String* tmp7614;
    panda$core$String* name617;
    panda$collections$ImmutableArray* subtypes619;
    panda$core$String* name629;
    org$pandalanguage$pandac$ASTNode* test632;
    panda$collections$ImmutableArray* ifTrue634;
    org$pandalanguage$pandac$ASTNode* ifFalse636;
    panda$core$MutableString* result638;
    panda$collections$Iterator* Iter$285$17644;
    org$pandalanguage$pandac$ASTNode* s656;
    panda$core$Char8 $tmp663;
    panda$core$String* tmp8668;
    panda$core$UInt64 value671;
    org$pandalanguage$pandac$IRNode* ir675;
    panda$core$String* label680;
    panda$collections$ImmutableArray* statements682;
    panda$core$MutableString* result684;
    panda$collections$Iterator* Iter$303$17690;
    org$pandalanguage$pandac$ASTNode* s702;
    panda$core$Char8 $tmp709;
    panda$core$String* tmp9710;
    org$pandalanguage$pandac$ASTNode* value713;
    panda$collections$ImmutableArray* whens715;
    panda$collections$ImmutableArray* other717;
    panda$core$MutableString* result719;
    panda$collections$Iterator* Iter$310$17725;
    org$pandalanguage$pandac$ASTNode* w737;
    panda$core$Char8 $tmp746;
    panda$core$String* tmp10747;
    org$pandalanguage$pandac$ASTNode* dc750;
    panda$collections$ImmutableArray* annotations752;
    org$pandalanguage$pandac$MethodDecl$Kind kind754;
    panda$core$String* name756;
    panda$collections$ImmutableArray* parameters758;
    org$pandalanguage$pandac$ASTNode* returnType760;
    panda$collections$ImmutableArray* statements762;
    panda$core$MutableString* result764;
    panda$collections$Iterator* Iter$323$17768;
    org$pandalanguage$pandac$ASTNode* a780;
    org$pandalanguage$pandac$MethodDecl$Kind $match$326_17787;
    panda$collections$Iterator* Iter$337$21805;
    org$pandalanguage$pandac$ASTNode* s817;
    panda$core$Char8 $tmp824;
    panda$core$String* tmp11825;
    org$pandalanguage$pandac$ASTNode* base830;
    panda$core$String* name835;
    panda$core$String* name838;
    org$pandalanguage$pandac$ASTNode* type840;
    org$pandalanguage$pandac$parser$Token$Kind kind849;
    org$pandalanguage$pandac$ASTNode* base851;
    org$pandalanguage$pandac$ASTNode* start862;
    org$pandalanguage$pandac$ASTNode* end864;
    panda$core$Bit inclusive866;
    org$pandalanguage$pandac$ASTNode* step868;
    panda$core$MutableString* result870;
    panda$core$String* tmp12891;
    panda$core$Real64 value894;
    org$pandalanguage$pandac$ASTNode* value898;
    panda$core$String* str908;
    panda$core$String* name913;
    panda$core$String* name916;
    org$pandalanguage$pandac$ASTNode* type918;
    panda$core$String* name927;
    org$pandalanguage$pandac$Variable$Kind kind930;
    panda$collections$ImmutableArray* decls932;
    panda$core$MutableString* result934;
    org$pandalanguage$pandac$Variable$Kind $match$395_17936;
    panda$core$String* tmp13946;
    panda$collections$ImmutableArray* tests949;
    panda$collections$ImmutableArray* statements951;
    panda$core$MutableString* result953;
    panda$core$String* separator956;
    panda$collections$Iterator* Iter$406$17958;
    org$pandalanguage$pandac$ASTNode* t970;
    panda$core$Char8 $tmp981;
    panda$collections$Iterator* Iter$410$17982;
    org$pandalanguage$pandac$ASTNode* s994;
    panda$core$String* tmp141001;
    panda$core$String* label1004;
    org$pandalanguage$pandac$ASTNode* test1006;
    panda$collections$ImmutableArray* statements1008;
    panda$core$MutableString* result1010;
    panda$collections$Iterator* Iter$420$171019;
    org$pandalanguage$pandac$ASTNode* s1031;
    panda$core$Char8 $tmp1038;
    panda$core$String* tmp151039;
    {
        $match$168_9237 = self;
        panda$core$Bit $tmp238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp238.value) {
        {
            panda$core$String** $tmp240 = ((panda$core$String**) ((char*) $match$168_9237->$data + 16));
            name239 = *$tmp240;
            return name239;
        }
        }
        else {
        panda$core$Bit $tmp241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp241.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp243 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 16));
            test242 = *$tmp243;
            org$pandalanguage$pandac$ASTNode** $tmp245 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 24));
            msg244 = *$tmp245;
            if (((panda$core$Bit) { msg244 == NULL }).value) {
            {
                panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s246, ((panda$core$Object*) test242));
                panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, &$s248);
                return $tmp249;
            }
            }
            panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s250, ((panda$core$Object*) test242));
            panda$core$String* $tmp253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp251, &$s252);
            panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp253, ((panda$core$Object*) msg244));
            panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp254, &$s255);
            return $tmp256;
        }
        }
        else {
        panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp257.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp259 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 16));
            left258 = *$tmp259;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp261 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$168_9237->$data + 24));
            op260 = *$tmp261;
            org$pandalanguage$pandac$ASTNode** $tmp263 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 32));
            right262 = *$tmp263;
            panda$core$String* $tmp265 = (($fn264) left258->$class->vtable[0])(left258);
            panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp265, &$s266);
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp268;
            $tmp268 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp268->value = op260;
            panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp267, ((panda$core$Object*) $tmp268));
            panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp269, &$s270);
            panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp271, ((panda$core$Object*) right262));
            panda$core$String* $tmp274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp272, &$s273);
            return $tmp274;
        }
        }
        else {
        panda$core$Bit $tmp275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp275.value) {
        {
            panda$core$Bit* $tmp277 = ((panda$core$Bit*) ((char*) $match$168_9237->$data + 16));
            value276 = *$tmp277;
            panda$core$String* $tmp278 = panda$core$Bit$convert$R$panda$core$String(value276);
            return $tmp278;
        }
        }
        else {
        panda$core$Bit $tmp279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp279.value) {
        {
            panda$collections$ImmutableArray** $tmp281 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 16));
            statements280 = *$tmp281;
            panda$core$MutableString* $tmp283 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp283, &$s284);
            result282 = $tmp283;
            {
                ITable* $tmp286 = ((panda$collections$Iterable*) statements280)->$class->itable;
                while ($tmp286->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp286 = $tmp286->next;
                }
                $fn288 $tmp287 = $tmp286->methods[0];
                panda$collections$Iterator* $tmp289 = $tmp287(((panda$collections$Iterable*) statements280));
                Iter$182$17285 = $tmp289;
                $l290:;
                ITable* $tmp292 = Iter$182$17285->$class->itable;
                while ($tmp292->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp292 = $tmp292->next;
                }
                $fn294 $tmp293 = $tmp292->methods[0];
                panda$core$Bit $tmp295 = $tmp293(Iter$182$17285);
                panda$core$Bit $tmp296 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp295);
                if (!$tmp296.value) goto $l291;
                {
                    ITable* $tmp298 = Iter$182$17285->$class->itable;
                    while ($tmp298->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp298 = $tmp298->next;
                    }
                    $fn300 $tmp299 = $tmp298->methods[1];
                    panda$core$Object* $tmp301 = $tmp299(Iter$182$17285);
                    s297 = ((org$pandalanguage$pandac$ASTNode*) $tmp301);
                    panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s297), &$s302);
                    panda$core$MutableString$append$panda$core$String(result282, $tmp303);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s297));
                }
                goto $l290;
                $l291:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$182$17285));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp304, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result282, $tmp304);
            {
                panda$core$String* $tmp306 = panda$core$MutableString$finish$R$panda$core$String(result282);
                tmp1305 = $tmp306;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result282));
                return tmp1305;
            }
        }
        }
        else {
        panda$core$Bit $tmp307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp307.value) {
        {
            panda$core$String** $tmp309 = ((panda$core$String**) ((char*) $match$168_9237->$data + 16));
            label308 = *$tmp309;
            if (((panda$core$Bit) { label308 != NULL }).value) {
            {
                panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s310, label308);
                panda$core$String* $tmp313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp311, &$s312);
                return $tmp313;
            }
            }
            return &$s314;
        }
        }
        else {
        panda$core$Bit $tmp315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp315.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp317 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 16));
            target316 = *$tmp317;
            panda$collections$ImmutableArray** $tmp319 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 24));
            args318 = *$tmp319;
            panda$core$String* $tmp321 = (($fn320) target316->$class->vtable[0])(target316);
            panda$core$String* $tmp323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp321, &$s322);
            panda$core$String* $tmp324 = panda$collections$ImmutableArray$join$R$panda$core$String(args318);
            panda$core$String* $tmp325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp323, $tmp324);
            panda$core$String* $tmp327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp325, &$s326);
            return $tmp327;
        }
        }
        else {
        panda$core$Bit $tmp328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp328.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp330 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 16));
            dc329 = *$tmp330;
            panda$core$String** $tmp332 = ((panda$core$String**) ((char*) $match$168_9237->$data + 24));
            name331 = *$tmp332;
            panda$collections$ImmutableArray** $tmp334 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 32));
            fields333 = *$tmp334;
            panda$core$MutableString* $tmp336 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp336);
            result335 = $tmp336;
            if (((panda$core$Bit) { dc329 != NULL }).value) {
            {
                panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc329), &$s337);
                panda$core$MutableString$append$panda$core$String(result335, $tmp338);
            }
            }
            panda$core$String* $tmp339 = panda$core$String$convert$R$panda$core$String(name331);
            panda$core$String* $tmp341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp339, &$s340);
            panda$core$String* $tmp342 = panda$collections$ImmutableArray$join$R$panda$core$String(fields333);
            panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp341, $tmp342);
            panda$core$String* $tmp345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, &$s344);
            panda$core$MutableString$append$panda$core$String(result335, $tmp345);
            {
                panda$core$String* $tmp347 = panda$core$MutableString$finish$R$panda$core$String(result335);
                tmp2346 = $tmp347;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result335));
                return tmp2346;
            }
        }
        }
        else {
        panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp348.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp350 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 16));
            base349 = *$tmp350;
            org$pandalanguage$pandac$ChoiceEntry** $tmp352 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$168_9237->$data + 24));
            ce351 = *$tmp352;
            panda$core$Int64* $tmp354 = ((panda$core$Int64*) ((char*) $match$168_9237->$data + 32));
            index353 = *$tmp354;
            panda$core$String* $tmp356 = (($fn355) base349->$class->vtable[0])(base349);
            panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp356, &$s357);
            panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp358, ((panda$core$Object*) ce351));
            panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp359, &$s360);
            panda$core$Int64$wrapper* $tmp362;
            $tmp362 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp362->value = index353;
            panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp361, ((panda$core$Object*) $tmp362));
            panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp363, &$s364);
            return $tmp365;
        }
        }
        else {
        panda$core$Bit $tmp366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp366.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp368 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 16));
            dc367 = *$tmp368;
            panda$collections$ImmutableArray** $tmp370 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 24));
            annotations369 = *$tmp370;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp372 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$168_9237->$data + 32));
            kind371 = *$tmp372;
            panda$core$String** $tmp374 = ((panda$core$String**) ((char*) $match$168_9237->$data + 40));
            name373 = *$tmp374;
            panda$collections$ImmutableArray** $tmp376 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 48));
            generics375 = *$tmp376;
            panda$collections$ImmutableArray** $tmp378 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 56));
            supertypes377 = *$tmp378;
            panda$collections$ImmutableArray** $tmp380 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 64));
            members379 = *$tmp380;
            panda$core$MutableString* $tmp382 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp382);
            result381 = $tmp382;
            if (((panda$core$Bit) { dc367 != NULL }).value) {
            {
                panda$core$String* $tmp384 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc367), &$s383);
                panda$core$MutableString$append$panda$core$String(result381, $tmp384);
            }
            }
            {
                ITable* $tmp386 = ((panda$collections$Iterable*) annotations369)->$class->itable;
                while ($tmp386->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp386 = $tmp386->next;
                }
                $fn388 $tmp387 = $tmp386->methods[0];
                panda$collections$Iterator* $tmp389 = $tmp387(((panda$collections$Iterable*) annotations369));
                Iter$208$17385 = $tmp389;
                $l390:;
                ITable* $tmp392 = Iter$208$17385->$class->itable;
                while ($tmp392->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp392 = $tmp392->next;
                }
                $fn394 $tmp393 = $tmp392->methods[0];
                panda$core$Bit $tmp395 = $tmp393(Iter$208$17385);
                panda$core$Bit $tmp396 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp395);
                if (!$tmp396.value) goto $l391;
                {
                    ITable* $tmp398 = Iter$208$17385->$class->itable;
                    while ($tmp398->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp398 = $tmp398->next;
                    }
                    $fn400 $tmp399 = $tmp398->methods[1];
                    panda$core$Object* $tmp401 = $tmp399(Iter$208$17385);
                    a397 = ((org$pandalanguage$pandac$ASTNode*) $tmp401);
                    panda$core$String* $tmp403 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a397), &$s402);
                    panda$core$MutableString$append$panda$core$String(result381, $tmp403);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a397));
                }
                goto $l390;
                $l391:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$208$17385));
            }
            {
                $match$211_17404 = kind371;
                panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$211_17404.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp405.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result381, &$s406);
                }
                }
                else {
                panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$211_17404.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp407.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result381, &$s408);
                }
                }
                else {
                panda$core$Bit $tmp409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$211_17404.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp409.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result381, &$s410);
                }
                }
                }
                }
            }
            panda$core$MutableString$append$panda$core$String(result381, name373);
            if (((panda$core$Bit) { generics375 != NULL }).value) {
            {
                panda$core$String* $tmp412 = panda$collections$ImmutableArray$join$R$panda$core$String(generics375);
                panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s411, $tmp412);
                panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp413, &$s414);
                panda$core$MutableString$append$panda$core$String(result381, $tmp415);
            }
            }
            if (((panda$core$Bit) { supertypes377 != NULL }).value) {
            {
                panda$core$String* $tmp417 = panda$collections$ImmutableArray$join$R$panda$core$String(supertypes377);
                panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s416, $tmp417);
                panda$core$String* $tmp420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp418, &$s419);
                panda$core$MutableString$append$panda$core$String(result381, $tmp420);
            }
            }
            panda$core$MutableString$append$panda$core$String(result381, &$s421);
            {
                ITable* $tmp423 = ((panda$collections$Iterable*) members379)->$class->itable;
                while ($tmp423->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp423 = $tmp423->next;
                }
                $fn425 $tmp424 = $tmp423->methods[0];
                panda$collections$Iterator* $tmp426 = $tmp424(((panda$collections$Iterable*) members379));
                Iter$224$17422 = $tmp426;
                $l427:;
                ITable* $tmp429 = Iter$224$17422->$class->itable;
                while ($tmp429->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp429 = $tmp429->next;
                }
                $fn431 $tmp430 = $tmp429->methods[0];
                panda$core$Bit $tmp432 = $tmp430(Iter$224$17422);
                panda$core$Bit $tmp433 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp432);
                if (!$tmp433.value) goto $l428;
                {
                    ITable* $tmp435 = Iter$224$17422->$class->itable;
                    while ($tmp435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp435 = $tmp435->next;
                    }
                    $fn437 $tmp436 = $tmp435->methods[1];
                    panda$core$Object* $tmp438 = $tmp436(Iter$224$17422);
                    m434 = ((org$pandalanguage$pandac$ASTNode*) $tmp438);
                    panda$core$String* $tmp440 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m434), &$s439);
                    panda$core$MutableString$append$panda$core$String(result381, $tmp440);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m434));
                }
                goto $l427;
                $l428:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$224$17422));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp441, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result381, $tmp441);
            {
                panda$core$String* $tmp443 = panda$core$MutableString$finish$R$panda$core$String(result381);
                tmp3442 = $tmp443;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result381));
                return tmp3442;
            }
        }
        }
        else {
        panda$core$Bit $tmp444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp444.value) {
        {
            panda$core$String** $tmp446 = ((panda$core$String**) ((char*) $match$168_9237->$data + 16));
            label445 = *$tmp446;
            if (((panda$core$Bit) { label445 != NULL }).value) {
            {
                panda$core$String* $tmp448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s447, label445);
                panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp448, &$s449);
                return $tmp450;
            }
            }
            return &$s451;
        }
        }
        else {
        panda$core$Bit $tmp452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp452.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp454 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 16));
            target453 = *$tmp454;
            org$pandalanguage$pandac$ASTNode** $tmp456 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 24));
            value455 = *$tmp456;
            if (((panda$core$Bit) { value455 != NULL }).value) {
            {
                panda$core$String* $tmp458 = (($fn457) target453->$class->vtable[0])(target453);
                panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp458, &$s459);
                panda$core$String* $tmp461 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp460, ((panda$core$Object*) value455));
                panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp461, &$s462);
                return $tmp463;
            }
            }
            panda$core$String* $tmp465 = (($fn464) target453->$class->vtable[0])(target453);
            return $tmp465;
        }
        }
        else {
        panda$core$Bit $tmp466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp466.value) {
        {
            panda$core$String** $tmp468 = ((panda$core$String**) ((char*) $match$168_9237->$data + 16));
            label467 = *$tmp468;
            panda$collections$ImmutableArray** $tmp470 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 24));
            statements469 = *$tmp470;
            org$pandalanguage$pandac$ASTNode** $tmp472 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 32));
            test471 = *$tmp472;
            panda$core$MutableString* $tmp474 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp474);
            result473 = $tmp474;
            if (((panda$core$Bit) { label467 != NULL }).value) {
            {
                panda$core$String* $tmp475 = panda$core$String$convert$R$panda$core$String(label467);
                panda$core$String* $tmp477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp475, &$s476);
                panda$core$MutableString$append$panda$core$String(result473, $tmp477);
            }
            }
            panda$core$MutableString$append$panda$core$String(result473, &$s478);
            {
                ITable* $tmp480 = ((panda$collections$Iterable*) statements469)->$class->itable;
                while ($tmp480->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp480 = $tmp480->next;
                }
                $fn482 $tmp481 = $tmp480->methods[0];
                panda$collections$Iterator* $tmp483 = $tmp481(((panda$collections$Iterable*) statements469));
                Iter$245$17479 = $tmp483;
                $l484:;
                ITable* $tmp486 = Iter$245$17479->$class->itable;
                while ($tmp486->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp486 = $tmp486->next;
                }
                $fn488 $tmp487 = $tmp486->methods[0];
                panda$core$Bit $tmp489 = $tmp487(Iter$245$17479);
                panda$core$Bit $tmp490 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp489);
                if (!$tmp490.value) goto $l485;
                {
                    ITable* $tmp492 = Iter$245$17479->$class->itable;
                    while ($tmp492->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp492 = $tmp492->next;
                    }
                    $fn494 $tmp493 = $tmp492->methods[1];
                    panda$core$Object* $tmp495 = $tmp493(Iter$245$17479);
                    s491 = ((org$pandalanguage$pandac$ASTNode*) $tmp495);
                    panda$core$String* $tmp497 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s491), &$s496);
                    panda$core$MutableString$append$panda$core$String(result473, $tmp497);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s491));
                }
                goto $l484;
                $l485:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$245$17479));
            }
            panda$core$String* $tmp499 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s498, ((panda$core$Object*) test471));
            panda$core$String* $tmp501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp499, &$s500);
            panda$core$MutableString$append$panda$core$String(result473, $tmp501);
            {
                panda$core$String* $tmp503 = panda$core$MutableString$finish$R$panda$core$String(result473);
                tmp4502 = $tmp503;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result473));
                return tmp4502;
            }
        }
        }
        else {
        panda$core$Bit $tmp504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp504.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp506 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 16));
            base505 = *$tmp506;
            panda$core$String** $tmp508 = ((panda$core$String**) ((char*) $match$168_9237->$data + 24));
            field507 = *$tmp508;
            panda$core$String* $tmp510 = (($fn509) base505->$class->vtable[0])(base505);
            panda$core$String* $tmp512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp510, &$s511);
            panda$core$String* $tmp513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp512, field507);
            panda$core$String* $tmp515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp513, &$s514);
            return $tmp515;
        }
        }
        else {
        panda$core$Bit $tmp516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp516.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp518 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 16));
            dc517 = *$tmp518;
            panda$collections$ImmutableArray** $tmp520 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 24));
            annotations519 = *$tmp520;
            org$pandalanguage$pandac$ASTNode** $tmp522 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 32));
            decl521 = *$tmp522;
            panda$core$MutableString* $tmp524 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp524);
            result523 = $tmp524;
            if (((panda$core$Bit) { dc517 != NULL }).value) {
            {
                panda$core$String* $tmp526 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc517), &$s525);
                panda$core$MutableString$append$panda$core$String(result523, $tmp526);
            }
            }
            {
                ITable* $tmp528 = ((panda$collections$Iterable*) annotations519)->$class->itable;
                while ($tmp528->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp528 = $tmp528->next;
                }
                $fn530 $tmp529 = $tmp528->methods[0];
                panda$collections$Iterator* $tmp531 = $tmp529(((panda$collections$Iterable*) annotations519));
                Iter$257$17527 = $tmp531;
                $l532:;
                ITable* $tmp534 = Iter$257$17527->$class->itable;
                while ($tmp534->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp534 = $tmp534->next;
                }
                $fn536 $tmp535 = $tmp534->methods[0];
                panda$core$Bit $tmp537 = $tmp535(Iter$257$17527);
                panda$core$Bit $tmp538 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp537);
                if (!$tmp538.value) goto $l533;
                {
                    ITable* $tmp540 = Iter$257$17527->$class->itable;
                    while ($tmp540->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp540 = $tmp540->next;
                    }
                    $fn542 $tmp541 = $tmp540->methods[1];
                    panda$core$Object* $tmp543 = $tmp541(Iter$257$17527);
                    a539 = ((org$pandalanguage$pandac$ASTNode*) $tmp543);
                    panda$core$String* $tmp545 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a539), &$s544);
                    panda$core$MutableString$append$panda$core$String(result523, $tmp545);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a539));
                }
                goto $l532;
                $l533:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$257$17527));
            }
            panda$core$MutableString$append$panda$core$Object(result523, ((panda$core$Object*) decl521));
            {
                panda$core$String* $tmp547 = panda$core$MutableString$finish$R$panda$core$String(result523);
                tmp5546 = $tmp547;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result523));
                return tmp5546;
            }
        }
        }
        else {
        panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp548.value) {
        {
            panda$collections$ImmutableArray** $tmp550 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 0));
            entries549 = *$tmp550;
            panda$core$MutableString* $tmp552 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp552);
            result551 = $tmp552;
            {
                ITable* $tmp554 = ((panda$collections$Iterable*) entries549)->$class->itable;
                while ($tmp554->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp554 = $tmp554->next;
                }
                $fn556 $tmp555 = $tmp554->methods[0];
                panda$collections$Iterator* $tmp557 = $tmp555(((panda$collections$Iterable*) entries549));
                Iter$264$17553 = $tmp557;
                $l558:;
                ITable* $tmp560 = Iter$264$17553->$class->itable;
                while ($tmp560->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp560 = $tmp560->next;
                }
                $fn562 $tmp561 = $tmp560->methods[0];
                panda$core$Bit $tmp563 = $tmp561(Iter$264$17553);
                panda$core$Bit $tmp564 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp563);
                if (!$tmp564.value) goto $l559;
                {
                    ITable* $tmp566 = Iter$264$17553->$class->itable;
                    while ($tmp566->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp566 = $tmp566->next;
                    }
                    $fn568 $tmp567 = $tmp566->methods[1];
                    panda$core$Object* $tmp569 = $tmp567(Iter$264$17553);
                    e565 = ((org$pandalanguage$pandac$ASTNode*) $tmp569);
                    panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e565), &$s570);
                    panda$core$MutableString$append$panda$core$String(result551, $tmp571);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e565));
                }
                goto $l558;
                $l559:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$264$17553));
            }
            {
                panda$core$String* $tmp573 = panda$core$MutableString$finish$R$panda$core$String(result551);
                tmp6572 = $tmp573;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result551));
                return tmp6572;
            }
        }
        }
        else {
        panda$core$Bit $tmp574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp574.value) {
        {
            panda$core$String** $tmp576 = ((panda$core$String**) ((char*) $match$168_9237->$data + 16));
            label575 = *$tmp576;
            org$pandalanguage$pandac$ASTNode** $tmp578 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 24));
            target577 = *$tmp578;
            org$pandalanguage$pandac$ASTNode** $tmp580 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 32));
            list579 = *$tmp580;
            panda$collections$ImmutableArray** $tmp582 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 40));
            statements581 = *$tmp582;
            panda$core$MutableString* $tmp584 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp584);
            result583 = $tmp584;
            if (((panda$core$Bit) { label575 != NULL }).value) {
            {
                panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label575, &$s585);
                panda$core$MutableString$append$panda$core$String(result583, $tmp586);
            }
            }
            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s587, ((panda$core$Object*) target577));
            panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp588, &$s589);
            panda$core$String* $tmp591 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp590, ((panda$core$Object*) list579));
            panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp591, &$s592);
            panda$core$MutableString$append$panda$core$String(result583, $tmp593);
            {
                ITable* $tmp595 = ((panda$collections$Iterable*) statements581)->$class->itable;
                while ($tmp595->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp595 = $tmp595->next;
                }
                $fn597 $tmp596 = $tmp595->methods[0];
                panda$collections$Iterator* $tmp598 = $tmp596(((panda$collections$Iterable*) statements581));
                Iter$274$17594 = $tmp598;
                $l599:;
                ITable* $tmp601 = Iter$274$17594->$class->itable;
                while ($tmp601->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp601 = $tmp601->next;
                }
                $fn603 $tmp602 = $tmp601->methods[0];
                panda$core$Bit $tmp604 = $tmp602(Iter$274$17594);
                panda$core$Bit $tmp605 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp604);
                if (!$tmp605.value) goto $l600;
                {
                    ITable* $tmp607 = Iter$274$17594->$class->itable;
                    while ($tmp607->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp607 = $tmp607->next;
                    }
                    $fn609 $tmp608 = $tmp607->methods[1];
                    panda$core$Object* $tmp610 = $tmp608(Iter$274$17594);
                    s606 = ((org$pandalanguage$pandac$ASTNode*) $tmp610);
                    panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s606), &$s611);
                    panda$core$MutableString$append$panda$core$String(result583, $tmp612);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s606));
                }
                goto $l599;
                $l600:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$274$17594));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp613, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result583, $tmp613);
            {
                panda$core$String* $tmp615 = panda$core$MutableString$finish$R$panda$core$String(result583);
                tmp7614 = $tmp615;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result583));
                return tmp7614;
            }
        }
        }
        else {
        panda$core$Bit $tmp616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp616.value) {
        {
            panda$core$String** $tmp618 = ((panda$core$String**) ((char*) $match$168_9237->$data + 16));
            name617 = *$tmp618;
            panda$collections$ImmutableArray** $tmp620 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 24));
            subtypes619 = *$tmp620;
            panda$core$String* $tmp621 = panda$core$String$convert$R$panda$core$String(name617);
            panda$core$String* $tmp623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp621, &$s622);
            panda$core$String* $tmp624 = panda$collections$ImmutableArray$join$R$panda$core$String(subtypes619);
            panda$core$String* $tmp625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp623, $tmp624);
            panda$core$String* $tmp627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp625, &$s626);
            return $tmp627;
        }
        }
        else {
        panda$core$Bit $tmp628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp628.value) {
        {
            panda$core$String** $tmp630 = ((panda$core$String**) ((char*) $match$168_9237->$data + 16));
            name629 = *$tmp630;
            return name629;
        }
        }
        else {
        panda$core$Bit $tmp631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp631.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp633 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 16));
            test632 = *$tmp633;
            panda$collections$ImmutableArray** $tmp635 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 24));
            ifTrue634 = *$tmp635;
            org$pandalanguage$pandac$ASTNode** $tmp637 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 32));
            ifFalse636 = *$tmp637;
            panda$core$MutableString* $tmp639 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp641 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s640, ((panda$core$Object*) test632));
            panda$core$String* $tmp643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp641, &$s642);
            panda$core$MutableString$init$panda$core$String($tmp639, $tmp643);
            result638 = $tmp639;
            {
                ITable* $tmp645 = ((panda$collections$Iterable*) ifTrue634)->$class->itable;
                while ($tmp645->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp645 = $tmp645->next;
                }
                $fn647 $tmp646 = $tmp645->methods[0];
                panda$collections$Iterator* $tmp648 = $tmp646(((panda$collections$Iterable*) ifTrue634));
                Iter$285$17644 = $tmp648;
                $l649:;
                ITable* $tmp651 = Iter$285$17644->$class->itable;
                while ($tmp651->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp651 = $tmp651->next;
                }
                $fn653 $tmp652 = $tmp651->methods[0];
                panda$core$Bit $tmp654 = $tmp652(Iter$285$17644);
                panda$core$Bit $tmp655 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp654);
                if (!$tmp655.value) goto $l650;
                {
                    ITable* $tmp657 = Iter$285$17644->$class->itable;
                    while ($tmp657->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp657 = $tmp657->next;
                    }
                    $fn659 $tmp658 = $tmp657->methods[1];
                    panda$core$Object* $tmp660 = $tmp658(Iter$285$17644);
                    s656 = ((org$pandalanguage$pandac$ASTNode*) $tmp660);
                    panda$core$String* $tmp662 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s656), &$s661);
                    panda$core$MutableString$append$panda$core$String(result638, $tmp662);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s656));
                }
                goto $l649;
                $l650:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$285$17644));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp663, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result638, $tmp663);
            if (((panda$core$Bit) { ifFalse636 != NULL }).value) {
            {
                panda$core$String* $tmp665 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s664, ((panda$core$Object*) ifFalse636));
                panda$core$String* $tmp667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp665, &$s666);
                panda$core$MutableString$append$panda$core$String(result638, $tmp667);
            }
            }
            {
                panda$core$String* $tmp669 = panda$core$MutableString$finish$R$panda$core$String(result638);
                tmp8668 = $tmp669;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result638));
                return tmp8668;
            }
        }
        }
        else {
        panda$core$Bit $tmp670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp670.value) {
        {
            panda$core$UInt64* $tmp672 = ((panda$core$UInt64*) ((char*) $match$168_9237->$data + 16));
            value671 = *$tmp672;
            panda$core$String* $tmp673 = panda$core$UInt64$convert$R$panda$core$String(value671);
            return $tmp673;
        }
        }
        else {
        panda$core$Bit $tmp674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp674.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp676 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$168_9237->$data + 0));
            ir675 = *$tmp676;
            panda$core$String* $tmp678 = (($fn677) ir675->$class->vtable[0])(ir675);
            return $tmp678;
        }
        }
        else {
        panda$core$Bit $tmp679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp679.value) {
        {
            panda$core$String** $tmp681 = ((panda$core$String**) ((char*) $match$168_9237->$data + 16));
            label680 = *$tmp681;
            panda$collections$ImmutableArray** $tmp683 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 24));
            statements682 = *$tmp683;
            panda$core$MutableString* $tmp685 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp685);
            result684 = $tmp685;
            if (((panda$core$Bit) { label680 != NULL }).value) {
            {
                panda$core$String* $tmp686 = panda$core$String$convert$R$panda$core$String(label680);
                panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp686, &$s687);
                panda$core$MutableString$append$panda$core$String(result684, $tmp688);
            }
            }
            panda$core$MutableString$append$panda$core$String(result684, &$s689);
            {
                ITable* $tmp691 = ((panda$collections$Iterable*) statements682)->$class->itable;
                while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp691 = $tmp691->next;
                }
                $fn693 $tmp692 = $tmp691->methods[0];
                panda$collections$Iterator* $tmp694 = $tmp692(((panda$collections$Iterable*) statements682));
                Iter$303$17690 = $tmp694;
                $l695:;
                ITable* $tmp697 = Iter$303$17690->$class->itable;
                while ($tmp697->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp697 = $tmp697->next;
                }
                $fn699 $tmp698 = $tmp697->methods[0];
                panda$core$Bit $tmp700 = $tmp698(Iter$303$17690);
                panda$core$Bit $tmp701 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp700);
                if (!$tmp701.value) goto $l696;
                {
                    ITable* $tmp703 = Iter$303$17690->$class->itable;
                    while ($tmp703->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp703 = $tmp703->next;
                    }
                    $fn705 $tmp704 = $tmp703->methods[1];
                    panda$core$Object* $tmp706 = $tmp704(Iter$303$17690);
                    s702 = ((org$pandalanguage$pandac$ASTNode*) $tmp706);
                    panda$core$String* $tmp708 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s702), &$s707);
                    panda$core$MutableString$append$panda$core$String(result684, $tmp708);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s702));
                }
                goto $l695;
                $l696:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$303$17690));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp709, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result684, $tmp709);
            {
                panda$core$String* $tmp711 = panda$core$MutableString$finish$R$panda$core$String(result684);
                tmp9710 = $tmp711;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result684));
                return tmp9710;
            }
        }
        }
        else {
        panda$core$Bit $tmp712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp712.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp714 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 16));
            value713 = *$tmp714;
            panda$collections$ImmutableArray** $tmp716 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 24));
            whens715 = *$tmp716;
            panda$collections$ImmutableArray** $tmp718 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 32));
            other717 = *$tmp718;
            panda$core$MutableString* $tmp720 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp722 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s721, ((panda$core$Object*) value713));
            panda$core$String* $tmp724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp722, &$s723);
            panda$core$MutableString$init$panda$core$String($tmp720, $tmp724);
            result719 = $tmp720;
            {
                ITable* $tmp726 = ((panda$collections$Iterable*) whens715)->$class->itable;
                while ($tmp726->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp726 = $tmp726->next;
                }
                $fn728 $tmp727 = $tmp726->methods[0];
                panda$collections$Iterator* $tmp729 = $tmp727(((panda$collections$Iterable*) whens715));
                Iter$310$17725 = $tmp729;
                $l730:;
                ITable* $tmp732 = Iter$310$17725->$class->itable;
                while ($tmp732->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp732 = $tmp732->next;
                }
                $fn734 $tmp733 = $tmp732->methods[0];
                panda$core$Bit $tmp735 = $tmp733(Iter$310$17725);
                panda$core$Bit $tmp736 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp735);
                if (!$tmp736.value) goto $l731;
                {
                    ITable* $tmp738 = Iter$310$17725->$class->itable;
                    while ($tmp738->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp738 = $tmp738->next;
                    }
                    $fn740 $tmp739 = $tmp738->methods[1];
                    panda$core$Object* $tmp741 = $tmp739(Iter$310$17725);
                    w737 = ((org$pandalanguage$pandac$ASTNode*) $tmp741);
                    panda$core$String* $tmp743 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w737), &$s742);
                    panda$core$MutableString$append$panda$core$String(result719, $tmp743);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w737));
                }
                goto $l730;
                $l731:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$310$17725));
            }
            if (((panda$core$Bit) { other717 != NULL }).value) {
            {
                panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other717), &$s744);
                panda$core$MutableString$append$panda$core$String(result719, $tmp745);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp746, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result719, $tmp746);
            {
                panda$core$String* $tmp748 = panda$core$MutableString$finish$R$panda$core$String(result719);
                tmp10747 = $tmp748;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result719));
                return tmp10747;
            }
        }
        }
        else {
        panda$core$Bit $tmp749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp749.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp751 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 16));
            dc750 = *$tmp751;
            panda$collections$ImmutableArray** $tmp753 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 24));
            annotations752 = *$tmp753;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp755 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$168_9237->$data + 32));
            kind754 = *$tmp755;
            panda$core$String** $tmp757 = ((panda$core$String**) ((char*) $match$168_9237->$data + 40));
            name756 = *$tmp757;
            panda$collections$ImmutableArray** $tmp759 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 48));
            parameters758 = *$tmp759;
            org$pandalanguage$pandac$ASTNode** $tmp761 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 56));
            returnType760 = *$tmp761;
            panda$collections$ImmutableArray** $tmp763 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 64));
            statements762 = *$tmp763;
            panda$core$MutableString* $tmp765 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp765);
            result764 = $tmp765;
            if (((panda$core$Bit) { dc750 != NULL }).value) {
            {
                panda$core$String* $tmp767 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc750), &$s766);
                panda$core$MutableString$append$panda$core$String(result764, $tmp767);
            }
            }
            {
                ITable* $tmp769 = ((panda$collections$Iterable*) annotations752)->$class->itable;
                while ($tmp769->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp769 = $tmp769->next;
                }
                $fn771 $tmp770 = $tmp769->methods[0];
                panda$collections$Iterator* $tmp772 = $tmp770(((panda$collections$Iterable*) annotations752));
                Iter$323$17768 = $tmp772;
                $l773:;
                ITable* $tmp775 = Iter$323$17768->$class->itable;
                while ($tmp775->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp775 = $tmp775->next;
                }
                $fn777 $tmp776 = $tmp775->methods[0];
                panda$core$Bit $tmp778 = $tmp776(Iter$323$17768);
                panda$core$Bit $tmp779 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp778);
                if (!$tmp779.value) goto $l774;
                {
                    ITable* $tmp781 = Iter$323$17768->$class->itable;
                    while ($tmp781->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp781 = $tmp781->next;
                    }
                    $fn783 $tmp782 = $tmp781->methods[1];
                    panda$core$Object* $tmp784 = $tmp782(Iter$323$17768);
                    a780 = ((org$pandalanguage$pandac$ASTNode*) $tmp784);
                    panda$core$String* $tmp786 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a780), &$s785);
                    panda$core$MutableString$append$panda$core$String(result764, $tmp786);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a780));
                }
                goto $l773;
                $l774:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$323$17768));
            }
            {
                $match$326_17787 = kind754;
                panda$core$Bit $tmp788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$326_17787.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp788.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result764, &$s789);
                }
                }
                else {
                panda$core$Bit $tmp790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$326_17787.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp790.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result764, &$s791);
                }
                }
                else {
                panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$326_17787.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp792.value) {
                {
                }
                }
                }
                }
            }
            panda$core$String* $tmp793 = panda$core$String$convert$R$panda$core$String(name756);
            panda$core$String* $tmp795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp793, &$s794);
            panda$core$String* $tmp796 = panda$collections$ImmutableArray$join$R$panda$core$String(parameters758);
            panda$core$String* $tmp797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp795, $tmp796);
            panda$core$String* $tmp799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp797, &$s798);
            panda$core$MutableString$append$panda$core$String(result764, $tmp799);
            if (((panda$core$Bit) { returnType760 != NULL }).value) {
            {
                panda$core$String* $tmp801 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s800, ((panda$core$Object*) returnType760));
                panda$core$String* $tmp803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp801, &$s802);
                panda$core$MutableString$append$panda$core$String(result764, $tmp803);
            }
            }
            if (((panda$core$Bit) { statements762 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result764, &$s804);
                {
                    ITable* $tmp806 = ((panda$collections$Iterable*) statements762)->$class->itable;
                    while ($tmp806->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp806 = $tmp806->next;
                    }
                    $fn808 $tmp807 = $tmp806->methods[0];
                    panda$collections$Iterator* $tmp809 = $tmp807(((panda$collections$Iterable*) statements762));
                    Iter$337$21805 = $tmp809;
                    $l810:;
                    ITable* $tmp812 = Iter$337$21805->$class->itable;
                    while ($tmp812->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp812 = $tmp812->next;
                    }
                    $fn814 $tmp813 = $tmp812->methods[0];
                    panda$core$Bit $tmp815 = $tmp813(Iter$337$21805);
                    panda$core$Bit $tmp816 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp815);
                    if (!$tmp816.value) goto $l811;
                    {
                        ITable* $tmp818 = Iter$337$21805->$class->itable;
                        while ($tmp818->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp818 = $tmp818->next;
                        }
                        $fn820 $tmp819 = $tmp818->methods[1];
                        panda$core$Object* $tmp821 = $tmp819(Iter$337$21805);
                        s817 = ((org$pandalanguage$pandac$ASTNode*) $tmp821);
                        panda$core$String* $tmp823 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s817), &$s822);
                        panda$core$MutableString$append$panda$core$String(result764, $tmp823);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s817));
                    }
                    goto $l810;
                    $l811:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$337$21805));
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp824, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result764, $tmp824);
            }
            }
            {
                panda$core$String* $tmp826 = panda$core$MutableString$finish$R$panda$core$String(result764);
                tmp11825 = $tmp826;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result764));
                return tmp11825;
            }
        }
        }
        else {
        panda$core$Bit $tmp827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp827.value) {
        {
            return &$s828;
        }
        }
        else {
        panda$core$Bit $tmp829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp829.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp831 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 16));
            base830 = *$tmp831;
            panda$core$String* $tmp833 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base830), &$s832);
            return $tmp833;
        }
        }
        else {
        panda$core$Bit $tmp834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp834.value) {
        {
            panda$core$String** $tmp836 = ((panda$core$String**) ((char*) $match$168_9237->$data + 16));
            name835 = *$tmp836;
            return name835;
        }
        }
        else {
        panda$core$Bit $tmp837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp837.value) {
        {
            panda$core$String** $tmp839 = ((panda$core$String**) ((char*) $match$168_9237->$data + 16));
            name838 = *$tmp839;
            org$pandalanguage$pandac$ASTNode** $tmp841 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 24));
            type840 = *$tmp841;
            panda$core$String* $tmp842 = panda$core$String$convert$R$panda$core$String(name838);
            panda$core$String* $tmp844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp842, &$s843);
            panda$core$String* $tmp845 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp844, ((panda$core$Object*) type840));
            panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp845, &$s846);
            return $tmp847;
        }
        }
        else {
        panda$core$Bit $tmp848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp848.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp850 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$168_9237->$data + 16));
            kind849 = *$tmp850;
            org$pandalanguage$pandac$ASTNode** $tmp852 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 24));
            base851 = *$tmp852;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp853;
            $tmp853 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp853->value = kind849;
            panda$core$String* $tmp855 = (($fn854) ((panda$core$Object*) $tmp853)->$class->vtable[0])(((panda$core$Object*) $tmp853));
            panda$core$String* $tmp857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp855, &$s856);
            panda$core$String* $tmp858 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp857, ((panda$core$Object*) base851));
            panda$core$String* $tmp860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp858, &$s859);
            return $tmp860;
        }
        }
        else {
        panda$core$Bit $tmp861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp861.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp863 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 16));
            start862 = *$tmp863;
            org$pandalanguage$pandac$ASTNode** $tmp865 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 24));
            end864 = *$tmp865;
            panda$core$Bit* $tmp867 = ((panda$core$Bit*) ((char*) $match$168_9237->$data + 32));
            inclusive866 = *$tmp867;
            org$pandalanguage$pandac$ASTNode** $tmp869 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 33));
            step868 = *$tmp869;
            panda$core$MutableString* $tmp871 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp871);
            result870 = $tmp871;
            panda$core$Bit $tmp875;
            if (((panda$core$Bit) { start862 != NULL }).value) goto $l872; else goto $l873;
            $l872:;
            panda$core$Bit $tmp876 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start862->$rawValue, ((panda$core$Int64) { 25 }));
            $tmp875 = $tmp876;
            goto $l874;
            $l873:;
            $tmp875 = ((panda$core$Bit) { true });
            goto $l874;
            $l874:;
            if ($tmp875.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result870, ((panda$core$Object*) start862));
            }
            }
            if (inclusive866.value) {
            {
                panda$core$MutableString$append$panda$core$String(result870, &$s877);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result870, &$s878);
            }
            }
            panda$core$Bit $tmp882;
            if (((panda$core$Bit) { end864 != NULL }).value) goto $l879; else goto $l880;
            $l879:;
            panda$core$Bit $tmp883 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(end864->$rawValue, ((panda$core$Int64) { 25 }));
            $tmp882 = $tmp883;
            goto $l881;
            $l880:;
            $tmp882 = ((panda$core$Bit) { true });
            goto $l881;
            $l881:;
            if ($tmp882.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result870, ((panda$core$Object*) end864));
            }
            }
            panda$core$Bit $tmp887;
            if (((panda$core$Bit) { step868 != NULL }).value) goto $l884; else goto $l885;
            $l884:;
            panda$core$Bit $tmp888 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(step868->$rawValue, ((panda$core$Int64) { 25 }));
            $tmp887 = $tmp888;
            goto $l886;
            $l885:;
            $tmp887 = ((panda$core$Bit) { true });
            goto $l886;
            $l886:;
            if ($tmp887.value) {
            {
                panda$core$String* $tmp890 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s889, ((panda$core$Object*) step868));
                panda$core$MutableString$append$panda$core$String(result870, $tmp890);
            }
            }
            {
                panda$core$String* $tmp892 = panda$core$MutableString$finish$R$panda$core$String(result870);
                tmp12891 = $tmp892;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result870));
                return tmp12891;
            }
        }
        }
        else {
        panda$core$Bit $tmp893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp893.value) {
        {
            panda$core$Real64* $tmp895 = ((panda$core$Real64*) ((char*) $match$168_9237->$data + 16));
            value894 = *$tmp895;
            panda$core$String* $tmp896 = panda$core$Real64$convert$R$panda$core$String(value894);
            return $tmp896;
        }
        }
        else {
        panda$core$Bit $tmp897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp897.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp899 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 16));
            value898 = *$tmp899;
            if (((panda$core$Bit) { value898 != NULL }).value) {
            {
                panda$core$String* $tmp901 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s900, ((panda$core$Object*) value898));
                panda$core$String* $tmp903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp901, &$s902);
                return $tmp903;
            }
            }
            return &$s904;
        }
        }
        else {
        panda$core$Bit $tmp905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp905.value) {
        {
            return &$s906;
        }
        }
        else {
        panda$core$Bit $tmp907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp907.value) {
        {
            panda$core$String** $tmp909 = ((panda$core$String**) ((char*) $match$168_9237->$data + 16));
            str908 = *$tmp909;
            return str908;
        }
        }
        else {
        panda$core$Bit $tmp910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp910.value) {
        {
            return &$s911;
        }
        }
        else {
        panda$core$Bit $tmp912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp912.value) {
        {
            panda$core$String** $tmp914 = ((panda$core$String**) ((char*) $match$168_9237->$data + 16));
            name913 = *$tmp914;
            return name913;
        }
        }
        else {
        panda$core$Bit $tmp915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp915.value) {
        {
            panda$core$String** $tmp917 = ((panda$core$String**) ((char*) $match$168_9237->$data + 16));
            name916 = *$tmp917;
            org$pandalanguage$pandac$ASTNode** $tmp919 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 24));
            type918 = *$tmp919;
            if (((panda$core$Bit) { type918 != NULL }).value) {
            {
                panda$core$String* $tmp920 = panda$core$String$convert$R$panda$core$String(name916);
                panda$core$String* $tmp922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp920, &$s921);
                panda$core$String* $tmp923 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp922, ((panda$core$Object*) type918));
                panda$core$String* $tmp925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp923, &$s924);
                return $tmp925;
            }
            }
            return name916;
        }
        }
        else {
        panda$core$Bit $tmp926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp926.value) {
        {
            panda$core$String** $tmp928 = ((panda$core$String**) ((char*) $match$168_9237->$data + 16));
            name927 = *$tmp928;
            return name927;
        }
        }
        else {
        panda$core$Bit $tmp929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp929.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp931 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$168_9237->$data + 16));
            kind930 = *$tmp931;
            panda$collections$ImmutableArray** $tmp933 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 24));
            decls932 = *$tmp933;
            panda$core$MutableString* $tmp935 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp935);
            result934 = $tmp935;
            {
                $match$395_17936 = kind930;
                panda$core$Bit $tmp937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$395_17936.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp937.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result934, &$s938);
                }
                }
                else {
                panda$core$Bit $tmp939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$395_17936.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp939.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result934, &$s940);
                }
                }
                else {
                panda$core$Bit $tmp941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$395_17936.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp941.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result934, &$s942);
                }
                }
                else {
                panda$core$Bit $tmp943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$395_17936.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp943.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result934, &$s944);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp945 = panda$collections$ImmutableArray$join$R$panda$core$String(decls932);
            panda$core$MutableString$append$panda$core$String(result934, $tmp945);
            {
                panda$core$String* $tmp947 = panda$core$MutableString$finish$R$panda$core$String(result934);
                tmp13946 = $tmp947;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result934));
                return tmp13946;
            }
        }
        }
        else {
        panda$core$Bit $tmp948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp948.value) {
        {
            panda$collections$ImmutableArray** $tmp950 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 16));
            tests949 = *$tmp950;
            panda$collections$ImmutableArray** $tmp952 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 24));
            statements951 = *$tmp952;
            panda$core$MutableString* $tmp954 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp954, &$s955);
            result953 = $tmp954;
            separator956 = &$s957;
            {
                ITable* $tmp959 = ((panda$collections$Iterable*) tests949)->$class->itable;
                while ($tmp959->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp959 = $tmp959->next;
                }
                $fn961 $tmp960 = $tmp959->methods[0];
                panda$collections$Iterator* $tmp962 = $tmp960(((panda$collections$Iterable*) tests949));
                Iter$406$17958 = $tmp962;
                $l963:;
                ITable* $tmp965 = Iter$406$17958->$class->itable;
                while ($tmp965->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp965 = $tmp965->next;
                }
                $fn967 $tmp966 = $tmp965->methods[0];
                panda$core$Bit $tmp968 = $tmp966(Iter$406$17958);
                panda$core$Bit $tmp969 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp968);
                if (!$tmp969.value) goto $l964;
                {
                    ITable* $tmp971 = Iter$406$17958->$class->itable;
                    while ($tmp971->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp971 = $tmp971->next;
                    }
                    $fn973 $tmp972 = $tmp971->methods[1];
                    panda$core$Object* $tmp974 = $tmp972(Iter$406$17958);
                    t970 = ((org$pandalanguage$pandac$ASTNode*) $tmp974);
                    panda$core$String* $tmp975 = panda$core$String$convert$R$panda$core$String(separator956);
                    panda$core$String* $tmp977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp975, &$s976);
                    panda$core$String* $tmp978 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp977, ((panda$core$Object*) t970));
                    panda$core$String* $tmp980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp978, &$s979);
                    panda$core$MutableString$append$panda$core$String(result953, $tmp980);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t970));
                }
                goto $l963;
                $l964:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$406$17958));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp981, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result953, $tmp981);
            {
                ITable* $tmp983 = ((panda$collections$Iterable*) statements951)->$class->itable;
                while ($tmp983->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp983 = $tmp983->next;
                }
                $fn985 $tmp984 = $tmp983->methods[0];
                panda$collections$Iterator* $tmp986 = $tmp984(((panda$collections$Iterable*) statements951));
                Iter$410$17982 = $tmp986;
                $l987:;
                ITable* $tmp989 = Iter$410$17982->$class->itable;
                while ($tmp989->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp989 = $tmp989->next;
                }
                $fn991 $tmp990 = $tmp989->methods[0];
                panda$core$Bit $tmp992 = $tmp990(Iter$410$17982);
                panda$core$Bit $tmp993 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp992);
                if (!$tmp993.value) goto $l988;
                {
                    ITable* $tmp995 = Iter$410$17982->$class->itable;
                    while ($tmp995->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp995 = $tmp995->next;
                    }
                    $fn997 $tmp996 = $tmp995->methods[1];
                    panda$core$Object* $tmp998 = $tmp996(Iter$410$17982);
                    s994 = ((org$pandalanguage$pandac$ASTNode*) $tmp998);
                    panda$core$String* $tmp1000 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s999, ((panda$core$Object*) s994));
                    panda$core$MutableString$append$panda$core$String(result953, $tmp1000);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s994));
                }
                goto $l987;
                $l988:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$410$17982));
            }
            {
                panda$core$String* $tmp1002 = panda$core$MutableString$finish$R$panda$core$String(result953);
                tmp141001 = $tmp1002;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator956));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result953));
                }
                return tmp141001;
            }
        }
        }
        else {
        panda$core$Bit $tmp1003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9237->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1003.value) {
        {
            panda$core$String** $tmp1005 = ((panda$core$String**) ((char*) $match$168_9237->$data + 16));
            label1004 = *$tmp1005;
            org$pandalanguage$pandac$ASTNode** $tmp1007 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9237->$data + 24));
            test1006 = *$tmp1007;
            panda$collections$ImmutableArray** $tmp1009 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9237->$data + 32));
            statements1008 = *$tmp1009;
            panda$core$MutableString* $tmp1011 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1011);
            result1010 = $tmp1011;
            if (((panda$core$Bit) { label1004 != NULL }).value) {
            {
                panda$core$String* $tmp1012 = panda$core$String$convert$R$panda$core$String(label1004);
                panda$core$String* $tmp1014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1012, &$s1013);
                panda$core$MutableString$append$panda$core$String(result1010, $tmp1014);
            }
            }
            panda$core$String* $tmp1016 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1015, ((panda$core$Object*) test1006));
            panda$core$String* $tmp1018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1016, &$s1017);
            panda$core$MutableString$append$panda$core$String(result1010, $tmp1018);
            {
                ITable* $tmp1020 = ((panda$collections$Iterable*) statements1008)->$class->itable;
                while ($tmp1020->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1020 = $tmp1020->next;
                }
                $fn1022 $tmp1021 = $tmp1020->methods[0];
                panda$collections$Iterator* $tmp1023 = $tmp1021(((panda$collections$Iterable*) statements1008));
                Iter$420$171019 = $tmp1023;
                $l1024:;
                ITable* $tmp1026 = Iter$420$171019->$class->itable;
                while ($tmp1026->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1026 = $tmp1026->next;
                }
                $fn1028 $tmp1027 = $tmp1026->methods[0];
                panda$core$Bit $tmp1029 = $tmp1027(Iter$420$171019);
                panda$core$Bit $tmp1030 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1029);
                if (!$tmp1030.value) goto $l1025;
                {
                    ITable* $tmp1032 = Iter$420$171019->$class->itable;
                    while ($tmp1032->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1032 = $tmp1032->next;
                    }
                    $fn1034 $tmp1033 = $tmp1032->methods[1];
                    panda$core$Object* $tmp1035 = $tmp1033(Iter$420$171019);
                    s1031 = ((org$pandalanguage$pandac$ASTNode*) $tmp1035);
                    panda$core$String* $tmp1037 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1031), &$s1036);
                    panda$core$MutableString$append$panda$core$String(result1010, $tmp1037);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1031));
                }
                goto $l1024;
                $l1025:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$420$171019));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1038, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1010, $tmp1038);
            {
                panda$core$String* $tmp1040 = panda$core$MutableString$finish$R$panda$core$String(result1010);
                tmp151039 = $tmp1040;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1010));
                return tmp151039;
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
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_11041;
    org$pandalanguage$pandac$Position _f01043;
    panda$core$String* _f11045;
    org$pandalanguage$pandac$Position _f01048;
    org$pandalanguage$pandac$ASTNode* _f11050;
    org$pandalanguage$pandac$ASTNode* _f21052;
    org$pandalanguage$pandac$Position _f01055;
    org$pandalanguage$pandac$ASTNode* _f11057;
    org$pandalanguage$pandac$parser$Token$Kind _f21059;
    org$pandalanguage$pandac$ASTNode* _f31061;
    org$pandalanguage$pandac$Position _f01064;
    panda$core$Bit _f11066;
    org$pandalanguage$pandac$Position _f01069;
    panda$collections$ImmutableArray* _f11071;
    org$pandalanguage$pandac$Position _f01074;
    panda$core$String* _f11076;
    org$pandalanguage$pandac$Position _f01079;
    org$pandalanguage$pandac$ASTNode* _f11081;
    panda$collections$ImmutableArray* _f21083;
    org$pandalanguage$pandac$Position _f01086;
    org$pandalanguage$pandac$ASTNode* _f11088;
    panda$core$String* _f21090;
    panda$collections$ImmutableArray* _f31092;
    org$pandalanguage$pandac$Position _f01095;
    org$pandalanguage$pandac$ASTNode* _f11097;
    org$pandalanguage$pandac$ChoiceEntry* _f21099;
    panda$core$Int64 _f31101;
    org$pandalanguage$pandac$Position _f01104;
    org$pandalanguage$pandac$ASTNode* _f11106;
    panda$collections$ImmutableArray* _f21108;
    org$pandalanguage$pandac$ClassDecl$Kind _f31110;
    panda$core$String* _f41112;
    panda$collections$ImmutableArray* _f51114;
    panda$collections$ImmutableArray* _f61116;
    panda$collections$ImmutableArray* _f71118;
    org$pandalanguage$pandac$Position _f01121;
    panda$core$String* _f11123;
    org$pandalanguage$pandac$Position _f01126;
    org$pandalanguage$pandac$ASTNode* _f11128;
    org$pandalanguage$pandac$ASTNode* _f21130;
    org$pandalanguage$pandac$Position _f01133;
    panda$core$String* _f11135;
    panda$collections$ImmutableArray* _f21137;
    org$pandalanguage$pandac$ASTNode* _f31139;
    org$pandalanguage$pandac$Position _f01142;
    org$pandalanguage$pandac$ASTNode* _f11144;
    panda$core$String* _f21146;
    org$pandalanguage$pandac$Position _f01149;
    org$pandalanguage$pandac$ASTNode* _f11151;
    panda$collections$ImmutableArray* _f21153;
    org$pandalanguage$pandac$ASTNode* _f31155;
    panda$collections$ImmutableArray* _f01158;
    org$pandalanguage$pandac$Position _f01161;
    panda$core$String* _f11163;
    org$pandalanguage$pandac$ASTNode* _f21165;
    org$pandalanguage$pandac$ASTNode* _f31167;
    panda$collections$ImmutableArray* _f41169;
    org$pandalanguage$pandac$Position _f01172;
    panda$core$String* _f11174;
    panda$collections$ImmutableArray* _f21176;
    org$pandalanguage$pandac$Position _f01179;
    panda$core$String* _f11181;
    org$pandalanguage$pandac$Position _f01184;
    org$pandalanguage$pandac$ASTNode* _f11186;
    panda$collections$ImmutableArray* _f21188;
    org$pandalanguage$pandac$ASTNode* _f31190;
    org$pandalanguage$pandac$Position _f01193;
    panda$core$UInt64 _f11195;
    org$pandalanguage$pandac$IRNode* _f01198;
    org$pandalanguage$pandac$Position _f01201;
    panda$core$String* _f11203;
    panda$collections$ImmutableArray* _f21205;
    org$pandalanguage$pandac$Position _f01208;
    org$pandalanguage$pandac$ASTNode* _f11210;
    panda$collections$ImmutableArray* _f21212;
    panda$collections$ImmutableArray* _f31214;
    org$pandalanguage$pandac$Position _f01217;
    org$pandalanguage$pandac$ASTNode* _f11219;
    panda$collections$ImmutableArray* _f21221;
    org$pandalanguage$pandac$MethodDecl$Kind _f31223;
    panda$core$String* _f41225;
    panda$collections$ImmutableArray* _f51227;
    org$pandalanguage$pandac$ASTNode* _f61229;
    panda$collections$ImmutableArray* _f71231;
    org$pandalanguage$pandac$Position _f01234;
    org$pandalanguage$pandac$Position _f01237;
    org$pandalanguage$pandac$ASTNode* _f11239;
    org$pandalanguage$pandac$Position _f01242;
    panda$core$String* _f11244;
    org$pandalanguage$pandac$Position _f01247;
    panda$core$String* _f11249;
    org$pandalanguage$pandac$ASTNode* _f21251;
    org$pandalanguage$pandac$Position _f01254;
    org$pandalanguage$pandac$parser$Token$Kind _f11256;
    org$pandalanguage$pandac$ASTNode* _f21258;
    org$pandalanguage$pandac$Position _f01261;
    org$pandalanguage$pandac$ASTNode* _f11263;
    org$pandalanguage$pandac$ASTNode* _f21265;
    panda$core$Bit _f31267;
    org$pandalanguage$pandac$ASTNode* _f41269;
    org$pandalanguage$pandac$Position _f01272;
    panda$core$Real64 _f11274;
    org$pandalanguage$pandac$Position _f01277;
    org$pandalanguage$pandac$ASTNode* _f11279;
    org$pandalanguage$pandac$Position _f01282;
    org$pandalanguage$pandac$Position _f01285;
    panda$core$String* _f11287;
    org$pandalanguage$pandac$Position _f01290;
    org$pandalanguage$pandac$Position _f01293;
    panda$core$String* _f11295;
    org$pandalanguage$pandac$Position _f01298;
    panda$core$String* _f11300;
    org$pandalanguage$pandac$ASTNode* _f21302;
    org$pandalanguage$pandac$Position _f01305;
    panda$core$String* _f11307;
    org$pandalanguage$pandac$Position _f01310;
    org$pandalanguage$pandac$Variable$Kind _f11312;
    panda$collections$ImmutableArray* _f21314;
    org$pandalanguage$pandac$Position _f01317;
    panda$collections$ImmutableArray* _f11319;
    panda$collections$ImmutableArray* _f21321;
    org$pandalanguage$pandac$Position _f01324;
    panda$core$String* _f11326;
    org$pandalanguage$pandac$ASTNode* _f21328;
    panda$collections$ImmutableArray* _f31330;
    {
        $match$5_11041 = self;
        panda$core$Bit $tmp1042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1042.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1044 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01043 = *$tmp1044;
            panda$core$String** $tmp1046 = ((panda$core$String**) ((char*) $match$5_11041->$data + 16));
            _f11045 = *$tmp1046;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11045));
        }
        }
        else {
        panda$core$Bit $tmp1047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1047.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1049 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01048 = *$tmp1049;
            org$pandalanguage$pandac$ASTNode** $tmp1051 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 16));
            _f11050 = *$tmp1051;
            org$pandalanguage$pandac$ASTNode** $tmp1053 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 24));
            _f21052 = *$tmp1053;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11050));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21052));
        }
        }
        else {
        panda$core$Bit $tmp1054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1054.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1056 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01055 = *$tmp1056;
            org$pandalanguage$pandac$ASTNode** $tmp1058 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 16));
            _f11057 = *$tmp1058;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1060 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11041->$data + 24));
            _f21059 = *$tmp1060;
            org$pandalanguage$pandac$ASTNode** $tmp1062 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 32));
            _f31061 = *$tmp1062;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11057));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31061));
        }
        }
        else {
        panda$core$Bit $tmp1063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1063.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1065 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01064 = *$tmp1065;
            panda$core$Bit* $tmp1067 = ((panda$core$Bit*) ((char*) $match$5_11041->$data + 16));
            _f11066 = *$tmp1067;
        }
        }
        else {
        panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1068.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1070 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01069 = *$tmp1070;
            panda$collections$ImmutableArray** $tmp1072 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 16));
            _f11071 = *$tmp1072;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11071));
        }
        }
        else {
        panda$core$Bit $tmp1073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1073.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1075 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01074 = *$tmp1075;
            panda$core$String** $tmp1077 = ((panda$core$String**) ((char*) $match$5_11041->$data + 16));
            _f11076 = *$tmp1077;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11076));
        }
        }
        else {
        panda$core$Bit $tmp1078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1078.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1080 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01079 = *$tmp1080;
            org$pandalanguage$pandac$ASTNode** $tmp1082 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 16));
            _f11081 = *$tmp1082;
            panda$collections$ImmutableArray** $tmp1084 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 24));
            _f21083 = *$tmp1084;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11081));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21083));
        }
        }
        else {
        panda$core$Bit $tmp1085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1085.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1087 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01086 = *$tmp1087;
            org$pandalanguage$pandac$ASTNode** $tmp1089 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 16));
            _f11088 = *$tmp1089;
            panda$core$String** $tmp1091 = ((panda$core$String**) ((char*) $match$5_11041->$data + 24));
            _f21090 = *$tmp1091;
            panda$collections$ImmutableArray** $tmp1093 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 32));
            _f31092 = *$tmp1093;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11088));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21090));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31092));
        }
        }
        else {
        panda$core$Bit $tmp1094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1094.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1096 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01095 = *$tmp1096;
            org$pandalanguage$pandac$ASTNode** $tmp1098 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 16));
            _f11097 = *$tmp1098;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1100 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11041->$data + 24));
            _f21099 = *$tmp1100;
            panda$core$Int64* $tmp1102 = ((panda$core$Int64*) ((char*) $match$5_11041->$data + 32));
            _f31101 = *$tmp1102;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11097));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21099));
        }
        }
        else {
        panda$core$Bit $tmp1103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1103.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1105 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01104 = *$tmp1105;
            org$pandalanguage$pandac$ASTNode** $tmp1107 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 16));
            _f11106 = *$tmp1107;
            panda$collections$ImmutableArray** $tmp1109 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 24));
            _f21108 = *$tmp1109;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1111 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_11041->$data + 32));
            _f31110 = *$tmp1111;
            panda$core$String** $tmp1113 = ((panda$core$String**) ((char*) $match$5_11041->$data + 40));
            _f41112 = *$tmp1113;
            panda$collections$ImmutableArray** $tmp1115 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 48));
            _f51114 = *$tmp1115;
            panda$collections$ImmutableArray** $tmp1117 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 56));
            _f61116 = *$tmp1117;
            panda$collections$ImmutableArray** $tmp1119 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 64));
            _f71118 = *$tmp1119;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11106));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21108));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41112));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51114));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61116));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71118));
        }
        }
        else {
        panda$core$Bit $tmp1120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1120.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1122 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01121 = *$tmp1122;
            panda$core$String** $tmp1124 = ((panda$core$String**) ((char*) $match$5_11041->$data + 16));
            _f11123 = *$tmp1124;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11123));
        }
        }
        else {
        panda$core$Bit $tmp1125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1125.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1127 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01126 = *$tmp1127;
            org$pandalanguage$pandac$ASTNode** $tmp1129 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 16));
            _f11128 = *$tmp1129;
            org$pandalanguage$pandac$ASTNode** $tmp1131 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 24));
            _f21130 = *$tmp1131;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11128));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21130));
        }
        }
        else {
        panda$core$Bit $tmp1132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1132.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1134 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01133 = *$tmp1134;
            panda$core$String** $tmp1136 = ((panda$core$String**) ((char*) $match$5_11041->$data + 16));
            _f11135 = *$tmp1136;
            panda$collections$ImmutableArray** $tmp1138 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 24));
            _f21137 = *$tmp1138;
            org$pandalanguage$pandac$ASTNode** $tmp1140 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 32));
            _f31139 = *$tmp1140;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11135));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21137));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31139));
        }
        }
        else {
        panda$core$Bit $tmp1141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1141.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1143 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01142 = *$tmp1143;
            org$pandalanguage$pandac$ASTNode** $tmp1145 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 16));
            _f11144 = *$tmp1145;
            panda$core$String** $tmp1147 = ((panda$core$String**) ((char*) $match$5_11041->$data + 24));
            _f21146 = *$tmp1147;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11144));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21146));
        }
        }
        else {
        panda$core$Bit $tmp1148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1148.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1150 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01149 = *$tmp1150;
            org$pandalanguage$pandac$ASTNode** $tmp1152 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 16));
            _f11151 = *$tmp1152;
            panda$collections$ImmutableArray** $tmp1154 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 24));
            _f21153 = *$tmp1154;
            org$pandalanguage$pandac$ASTNode** $tmp1156 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 32));
            _f31155 = *$tmp1156;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11151));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21153));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31155));
        }
        }
        else {
        panda$core$Bit $tmp1157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1157.value) {
        {
            panda$collections$ImmutableArray** $tmp1159 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 0));
            _f01158 = *$tmp1159;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01158));
        }
        }
        else {
        panda$core$Bit $tmp1160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1160.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1162 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01161 = *$tmp1162;
            panda$core$String** $tmp1164 = ((panda$core$String**) ((char*) $match$5_11041->$data + 16));
            _f11163 = *$tmp1164;
            org$pandalanguage$pandac$ASTNode** $tmp1166 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 24));
            _f21165 = *$tmp1166;
            org$pandalanguage$pandac$ASTNode** $tmp1168 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 32));
            _f31167 = *$tmp1168;
            panda$collections$ImmutableArray** $tmp1170 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 40));
            _f41169 = *$tmp1170;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21165));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31167));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41169));
        }
        }
        else {
        panda$core$Bit $tmp1171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1171.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1173 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01172 = *$tmp1173;
            panda$core$String** $tmp1175 = ((panda$core$String**) ((char*) $match$5_11041->$data + 16));
            _f11174 = *$tmp1175;
            panda$collections$ImmutableArray** $tmp1177 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 24));
            _f21176 = *$tmp1177;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11174));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21176));
        }
        }
        else {
        panda$core$Bit $tmp1178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1178.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1180 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01179 = *$tmp1180;
            panda$core$String** $tmp1182 = ((panda$core$String**) ((char*) $match$5_11041->$data + 16));
            _f11181 = *$tmp1182;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11181));
        }
        }
        else {
        panda$core$Bit $tmp1183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1183.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1185 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01184 = *$tmp1185;
            org$pandalanguage$pandac$ASTNode** $tmp1187 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 16));
            _f11186 = *$tmp1187;
            panda$collections$ImmutableArray** $tmp1189 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 24));
            _f21188 = *$tmp1189;
            org$pandalanguage$pandac$ASTNode** $tmp1191 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 32));
            _f31190 = *$tmp1191;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11186));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21188));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31190));
        }
        }
        else {
        panda$core$Bit $tmp1192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1192.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1194 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01193 = *$tmp1194;
            panda$core$UInt64* $tmp1196 = ((panda$core$UInt64*) ((char*) $match$5_11041->$data + 16));
            _f11195 = *$tmp1196;
        }
        }
        else {
        panda$core$Bit $tmp1197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1197.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1199 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11041->$data + 0));
            _f01198 = *$tmp1199;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01198));
        }
        }
        else {
        panda$core$Bit $tmp1200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1200.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1202 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01201 = *$tmp1202;
            panda$core$String** $tmp1204 = ((panda$core$String**) ((char*) $match$5_11041->$data + 16));
            _f11203 = *$tmp1204;
            panda$collections$ImmutableArray** $tmp1206 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 24));
            _f21205 = *$tmp1206;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11203));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21205));
        }
        }
        else {
        panda$core$Bit $tmp1207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1207.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1209 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01208 = *$tmp1209;
            org$pandalanguage$pandac$ASTNode** $tmp1211 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 16));
            _f11210 = *$tmp1211;
            panda$collections$ImmutableArray** $tmp1213 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 24));
            _f21212 = *$tmp1213;
            panda$collections$ImmutableArray** $tmp1215 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 32));
            _f31214 = *$tmp1215;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21212));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31214));
        }
        }
        else {
        panda$core$Bit $tmp1216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1216.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1218 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01217 = *$tmp1218;
            org$pandalanguage$pandac$ASTNode** $tmp1220 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 16));
            _f11219 = *$tmp1220;
            panda$collections$ImmutableArray** $tmp1222 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 24));
            _f21221 = *$tmp1222;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1224 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_11041->$data + 32));
            _f31223 = *$tmp1224;
            panda$core$String** $tmp1226 = ((panda$core$String**) ((char*) $match$5_11041->$data + 40));
            _f41225 = *$tmp1226;
            panda$collections$ImmutableArray** $tmp1228 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 48));
            _f51227 = *$tmp1228;
            org$pandalanguage$pandac$ASTNode** $tmp1230 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 56));
            _f61229 = *$tmp1230;
            panda$collections$ImmutableArray** $tmp1232 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 64));
            _f71231 = *$tmp1232;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11219));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21221));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41225));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51227));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61229));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71231));
        }
        }
        else {
        panda$core$Bit $tmp1233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1233.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1235 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01234 = *$tmp1235;
        }
        }
        else {
        panda$core$Bit $tmp1236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1236.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1238 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01237 = *$tmp1238;
            org$pandalanguage$pandac$ASTNode** $tmp1240 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 16));
            _f11239 = *$tmp1240;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11239));
        }
        }
        else {
        panda$core$Bit $tmp1241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1241.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1243 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01242 = *$tmp1243;
            panda$core$String** $tmp1245 = ((panda$core$String**) ((char*) $match$5_11041->$data + 16));
            _f11244 = *$tmp1245;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11244));
        }
        }
        else {
        panda$core$Bit $tmp1246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1246.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1248 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01247 = *$tmp1248;
            panda$core$String** $tmp1250 = ((panda$core$String**) ((char*) $match$5_11041->$data + 16));
            _f11249 = *$tmp1250;
            org$pandalanguage$pandac$ASTNode** $tmp1252 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 24));
            _f21251 = *$tmp1252;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11249));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21251));
        }
        }
        else {
        panda$core$Bit $tmp1253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1253.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1255 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01254 = *$tmp1255;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1257 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11041->$data + 16));
            _f11256 = *$tmp1257;
            org$pandalanguage$pandac$ASTNode** $tmp1259 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 24));
            _f21258 = *$tmp1259;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21258));
        }
        }
        else {
        panda$core$Bit $tmp1260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1260.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1262 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01261 = *$tmp1262;
            org$pandalanguage$pandac$ASTNode** $tmp1264 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 16));
            _f11263 = *$tmp1264;
            org$pandalanguage$pandac$ASTNode** $tmp1266 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 24));
            _f21265 = *$tmp1266;
            panda$core$Bit* $tmp1268 = ((panda$core$Bit*) ((char*) $match$5_11041->$data + 32));
            _f31267 = *$tmp1268;
            org$pandalanguage$pandac$ASTNode** $tmp1270 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 33));
            _f41269 = *$tmp1270;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11263));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21265));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41269));
        }
        }
        else {
        panda$core$Bit $tmp1271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1271.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1273 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01272 = *$tmp1273;
            panda$core$Real64* $tmp1275 = ((panda$core$Real64*) ((char*) $match$5_11041->$data + 16));
            _f11274 = *$tmp1275;
        }
        }
        else {
        panda$core$Bit $tmp1276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1276.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1278 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01277 = *$tmp1278;
            org$pandalanguage$pandac$ASTNode** $tmp1280 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 16));
            _f11279 = *$tmp1280;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11279));
        }
        }
        else {
        panda$core$Bit $tmp1281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1281.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1283 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01282 = *$tmp1283;
        }
        }
        else {
        panda$core$Bit $tmp1284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1284.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1286 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01285 = *$tmp1286;
            panda$core$String** $tmp1288 = ((panda$core$String**) ((char*) $match$5_11041->$data + 16));
            _f11287 = *$tmp1288;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11287));
        }
        }
        else {
        panda$core$Bit $tmp1289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1289.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1291 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01290 = *$tmp1291;
        }
        }
        else {
        panda$core$Bit $tmp1292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1292.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1294 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01293 = *$tmp1294;
            panda$core$String** $tmp1296 = ((panda$core$String**) ((char*) $match$5_11041->$data + 16));
            _f11295 = *$tmp1296;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11295));
        }
        }
        else {
        panda$core$Bit $tmp1297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1297.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1299 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01298 = *$tmp1299;
            panda$core$String** $tmp1301 = ((panda$core$String**) ((char*) $match$5_11041->$data + 16));
            _f11300 = *$tmp1301;
            org$pandalanguage$pandac$ASTNode** $tmp1303 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 24));
            _f21302 = *$tmp1303;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11300));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21302));
        }
        }
        else {
        panda$core$Bit $tmp1304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1304.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1306 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01305 = *$tmp1306;
            panda$core$String** $tmp1308 = ((panda$core$String**) ((char*) $match$5_11041->$data + 16));
            _f11307 = *$tmp1308;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11307));
        }
        }
        else {
        panda$core$Bit $tmp1309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1309.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1311 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01310 = *$tmp1311;
            org$pandalanguage$pandac$Variable$Kind* $tmp1313 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11041->$data + 16));
            _f11312 = *$tmp1313;
            panda$collections$ImmutableArray** $tmp1315 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 24));
            _f21314 = *$tmp1315;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21314));
        }
        }
        else {
        panda$core$Bit $tmp1316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1316.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1318 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01317 = *$tmp1318;
            panda$collections$ImmutableArray** $tmp1320 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 16));
            _f11319 = *$tmp1320;
            panda$collections$ImmutableArray** $tmp1322 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 24));
            _f21321 = *$tmp1322;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11319));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21321));
        }
        }
        else {
        panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11041->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1323.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1325 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11041->$data + 0));
            _f01324 = *$tmp1325;
            panda$core$String** $tmp1327 = ((panda$core$String**) ((char*) $match$5_11041->$data + 16));
            _f11326 = *$tmp1327;
            org$pandalanguage$pandac$ASTNode** $tmp1329 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11041->$data + 24));
            _f21328 = *$tmp1329;
            panda$collections$ImmutableArray** $tmp1331 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11041->$data + 32));
            _f31330 = *$tmp1331;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11326));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21328));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31330));
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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

