#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Panda.h"
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
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, org$pandalanguage$pandac$ASTNode$cleanup, org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position} };

typedef org$pandalanguage$pandac$Position (*$fn241)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn330)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn354)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn360)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn366)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn386)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn421)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn454)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn460)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn466)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn491)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn497)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn503)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn523)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn530)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn548)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn554)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn560)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn575)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn596)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn602)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn608)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn622)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn628)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn634)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn663)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn669)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn675)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn713)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn719)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn725)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn743)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn759)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn765)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn771)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn794)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn800)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn806)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn837)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn843)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn849)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn874)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn880)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn886)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn920)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1027)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1033)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1039)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1051)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1057)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1063)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1088)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1094)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1100)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1004 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1021 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2 = p_f0;
    {
        panda$core$String** $tmp3 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String** $tmp4 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp4 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp3));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp5 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp5 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp6 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode** $tmp7 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp7 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp6));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp8 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode** $tmp9 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp9 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp8));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp10 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp10 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp11 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode** $tmp12 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp12 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp11));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp13 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp13 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp14 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$ASTNode** $tmp15 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        *$tmp15 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp14));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp16 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp16 = p_f0;
    panda$core$Bit* $tmp17 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp17 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp18 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp18 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp19 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$collections$ImmutableArray** $tmp20 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        *$tmp20 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp19));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp21 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp21 = p_f0;
    {
        panda$core$String** $tmp22 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String** $tmp23 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp23 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp22));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp24 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp24 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp25 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode** $tmp26 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp26 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp25));
    }
    {
        panda$collections$ImmutableArray** $tmp27 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp28 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp28 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp27));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp29 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp29 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp30 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode** $tmp31 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp31 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp30));
    }
    {
        panda$core$String** $tmp32 = ((panda$core$String**) ((char*) self->$data + 24));
        panda$core$String** $tmp33 = ((panda$core$String**) ((char*) self->$data + 24));
        *$tmp33 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp32));
    }
    {
        panda$collections$ImmutableArray** $tmp34 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray** $tmp35 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp35 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp34));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp36 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp36 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp37 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode** $tmp38 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp38 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp37));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp39 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ChoiceEntry** $tmp40 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        *$tmp40 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp39));
    }
    panda$core$Int64* $tmp41 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp41 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp42 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp42 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp43 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode** $tmp44 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp44 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp43));
    }
    {
        panda$collections$ImmutableArray** $tmp45 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp46 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp46 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp45));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp47 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp47 = p_f3;
    {
        panda$core$String** $tmp48 = ((panda$core$String**) ((char*) self->$data + 40));
        panda$core$String** $tmp49 = ((panda$core$String**) ((char*) self->$data + 40));
        *$tmp49 = p_f4;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp48));
    }
    {
        panda$collections$ImmutableArray** $tmp50 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        panda$collections$ImmutableArray** $tmp51 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        *$tmp51 = p_f5;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp50));
    }
    {
        panda$collections$ImmutableArray** $tmp52 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        panda$collections$ImmutableArray** $tmp53 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        *$tmp53 = p_f6;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp52));
    }
    {
        panda$collections$ImmutableArray** $tmp54 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        panda$collections$ImmutableArray** $tmp55 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        *$tmp55 = p_f7;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp54));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp56 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp56 = p_f0;
    {
        panda$core$String** $tmp57 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String** $tmp58 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp58 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp57));
    }
    {
        panda$collections$ImmutableArray** $tmp59 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp60 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp60 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp59));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp61 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$ASTNode** $tmp62 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        *$tmp62 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp61));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp63 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp63 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp64 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode** $tmp65 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp65 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp64));
    }
    {
        panda$core$String** $tmp66 = ((panda$core$String**) ((char*) self->$data + 24));
        panda$core$String** $tmp67 = ((panda$core$String**) ((char*) self->$data + 24));
        *$tmp67 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp66));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp68 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp68 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp69 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode** $tmp70 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp70 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp69));
    }
    {
        panda$collections$ImmutableArray** $tmp71 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp72 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp72 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp71));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp73 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$ASTNode** $tmp74 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        *$tmp74 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp73));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp75 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        panda$collections$ImmutableArray** $tmp76 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        *$tmp76 = p_f0;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp75));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp77 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp77 = p_f0;
    {
        panda$core$String** $tmp78 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String** $tmp79 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp79 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp78));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp80 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode** $tmp81 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp81 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp80));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp82 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$ASTNode** $tmp83 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        *$tmp83 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp82));
    }
    {
        panda$collections$ImmutableArray** $tmp84 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        panda$collections$ImmutableArray** $tmp85 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        *$tmp85 = p_f4;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp84));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp86 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp86 = p_f0;
    {
        panda$core$String** $tmp87 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String** $tmp88 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp88 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp87));
    }
    {
        panda$collections$ImmutableArray** $tmp89 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp90 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp90 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp89));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp91 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp91 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp92 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode** $tmp93 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp93 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp92));
    }
    {
        panda$collections$ImmutableArray** $tmp94 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp95 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp95 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp94));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp96 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$ASTNode** $tmp97 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        *$tmp97 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp96));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp98 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp98 = p_f0;
    panda$core$UInt64* $tmp99 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp99 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp100 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        org$pandalanguage$pandac$IRNode** $tmp101 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        *$tmp101 = p_f0;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp100));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp102 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp102 = p_f0;
    {
        panda$core$String** $tmp103 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String** $tmp104 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp104 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp103));
    }
    {
        panda$collections$ImmutableArray** $tmp105 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp106 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp106 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp105));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp107 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp107 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp108 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode** $tmp109 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp109 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp108));
    }
    {
        panda$collections$ImmutableArray** $tmp110 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp111 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp111 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp110));
    }
    {
        panda$collections$ImmutableArray** $tmp112 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray** $tmp113 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp113 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp112));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, org$pandalanguage$pandac$ASTNode* p_f6, panda$collections$ImmutableArray* p_f7) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp114 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp114 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp115 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode** $tmp116 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp116 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp115));
    }
    {
        panda$collections$ImmutableArray** $tmp117 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp118 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp118 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp117));
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp119 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp119 = p_f3;
    {
        panda$core$String** $tmp120 = ((panda$core$String**) ((char*) self->$data + 40));
        panda$core$String** $tmp121 = ((panda$core$String**) ((char*) self->$data + 40));
        *$tmp121 = p_f4;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp120));
    }
    {
        panda$collections$ImmutableArray** $tmp122 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        panda$collections$ImmutableArray** $tmp123 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        *$tmp123 = p_f5;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp122));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp124 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        org$pandalanguage$pandac$ASTNode** $tmp125 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        *$tmp125 = p_f6;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp124));
    }
    {
        panda$collections$ImmutableArray** $tmp126 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        panda$collections$ImmutableArray** $tmp127 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        *$tmp127 = p_f7;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp126));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp128 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp128 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp129 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp129 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp130 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode** $tmp131 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp131 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp130));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp132 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp132 = p_f0;
    {
        panda$core$String** $tmp133 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String** $tmp134 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp134 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp133));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp135 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode** $tmp136 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp136 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp135));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp137 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp137 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp138 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp138 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp139 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode** $tmp140 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp140 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp139));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp141 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp141 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp142 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode** $tmp143 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp143 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp142));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp144 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode** $tmp145 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp145 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp144));
    }
    panda$core$Bit* $tmp146 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp146 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp147 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        org$pandalanguage$pandac$ASTNode** $tmp148 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        *$tmp148 = p_f4;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp147));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp149 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp149 = p_f0;
    panda$core$Real64* $tmp150 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp150 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp151 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp151 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp152 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode** $tmp153 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp153 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp152));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp154 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp154 = p_f0;
    {
        panda$core$String** $tmp155 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String** $tmp156 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp156 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp155));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp157 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode** $tmp158 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp158 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp157));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp159 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp159 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp160 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp160 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp161 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp162 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp162 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp161));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp163 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp163 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp164 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$collections$ImmutableArray** $tmp165 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        *$tmp165 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp164));
    }
    {
        panda$collections$ImmutableArray** $tmp166 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray** $tmp167 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp167 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp166));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp168 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp168 = p_f0;
    {
        panda$core$String** $tmp169 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String** $tmp170 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp170 = p_f1;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp169));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp171 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode** $tmp172 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp172 = p_f2;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp171));
    }
    {
        panda$collections$ImmutableArray** $tmp173 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray** $tmp174 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp174 = p_f3;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) *$tmp173));
    }
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$77_9175;
    org$pandalanguage$pandac$Position position177;
    org$pandalanguage$pandac$Position position180;
    org$pandalanguage$pandac$Position position183;
    org$pandalanguage$pandac$Position position186;
    org$pandalanguage$pandac$Position position189;
    org$pandalanguage$pandac$Position position192;
    org$pandalanguage$pandac$Position position195;
    org$pandalanguage$pandac$Position position198;
    org$pandalanguage$pandac$Position position201;
    org$pandalanguage$pandac$Position position204;
    org$pandalanguage$pandac$Position position207;
    org$pandalanguage$pandac$Position position210;
    org$pandalanguage$pandac$Position position213;
    org$pandalanguage$pandac$Position position216;
    org$pandalanguage$pandac$Position position219;
    org$pandalanguage$pandac$Position $tmp222;
    org$pandalanguage$pandac$Position position224;
    org$pandalanguage$pandac$Position position227;
    org$pandalanguage$pandac$Position position230;
    org$pandalanguage$pandac$Position position233;
    org$pandalanguage$pandac$Position position236;
    org$pandalanguage$pandac$IRNode* ir239;
    org$pandalanguage$pandac$Position position244;
    org$pandalanguage$pandac$Position position247;
    org$pandalanguage$pandac$Position position250;
    org$pandalanguage$pandac$Position position253;
    org$pandalanguage$pandac$Position position256;
    org$pandalanguage$pandac$Position position259;
    org$pandalanguage$pandac$Position position262;
    org$pandalanguage$pandac$Position position265;
    org$pandalanguage$pandac$Position position268;
    org$pandalanguage$pandac$Position position271;
    org$pandalanguage$pandac$Position position274;
    org$pandalanguage$pandac$Position position277;
    org$pandalanguage$pandac$Position position280;
    org$pandalanguage$pandac$Position position283;
    org$pandalanguage$pandac$Position position286;
    org$pandalanguage$pandac$Position position289;
    org$pandalanguage$pandac$Position position292;
    org$pandalanguage$pandac$Position position295;
    org$pandalanguage$pandac$Position position298;
    org$pandalanguage$pandac$Position position301;
    {
        $match$77_9175 = self;
        panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp176.value) {
        {
            org$pandalanguage$pandac$Position* $tmp178 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position177 = *$tmp178;
            return position177;
        }
        }
        else {
        panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp179.value) {
        {
            org$pandalanguage$pandac$Position* $tmp181 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position180 = *$tmp181;
            return position180;
        }
        }
        else {
        panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp182.value) {
        {
            org$pandalanguage$pandac$Position* $tmp184 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position183 = *$tmp184;
            return position183;
        }
        }
        else {
        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp185.value) {
        {
            org$pandalanguage$pandac$Position* $tmp187 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position186 = *$tmp187;
            return position186;
        }
        }
        else {
        panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp188.value) {
        {
            org$pandalanguage$pandac$Position* $tmp190 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position189 = *$tmp190;
            return position189;
        }
        }
        else {
        panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp191.value) {
        {
            org$pandalanguage$pandac$Position* $tmp193 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position192 = *$tmp193;
            return position192;
        }
        }
        else {
        panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp194.value) {
        {
            org$pandalanguage$pandac$Position* $tmp196 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position195 = *$tmp196;
            return position195;
        }
        }
        else {
        panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp197.value) {
        {
            org$pandalanguage$pandac$Position* $tmp199 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position198 = *$tmp199;
            return position198;
        }
        }
        else {
        panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp200.value) {
        {
            org$pandalanguage$pandac$Position* $tmp202 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position201 = *$tmp202;
            return position201;
        }
        }
        else {
        panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp203.value) {
        {
            org$pandalanguage$pandac$Position* $tmp205 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position204 = *$tmp205;
            return position204;
        }
        }
        else {
        panda$core$Bit $tmp206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp206.value) {
        {
            org$pandalanguage$pandac$Position* $tmp208 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position207 = *$tmp208;
            return position207;
        }
        }
        else {
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp209.value) {
        {
            org$pandalanguage$pandac$Position* $tmp211 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position210 = *$tmp211;
            return position210;
        }
        }
        else {
        panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp212.value) {
        {
            org$pandalanguage$pandac$Position* $tmp214 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position213 = *$tmp214;
            return position213;
        }
        }
        else {
        panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp215.value) {
        {
            org$pandalanguage$pandac$Position* $tmp217 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position216 = *$tmp217;
            return position216;
        }
        }
        else {
        panda$core$Bit $tmp218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp218.value) {
        {
            org$pandalanguage$pandac$Position* $tmp220 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position219 = *$tmp220;
            return position219;
        }
        }
        else {
        panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp221.value) {
        {
            org$pandalanguage$pandac$Position$init(&$tmp222);
            return $tmp222;
        }
        }
        else {
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp223.value) {
        {
            org$pandalanguage$pandac$Position* $tmp225 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position224 = *$tmp225;
            return position224;
        }
        }
        else {
        panda$core$Bit $tmp226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp226.value) {
        {
            org$pandalanguage$pandac$Position* $tmp228 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position227 = *$tmp228;
            return position227;
        }
        }
        else {
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp229.value) {
        {
            org$pandalanguage$pandac$Position* $tmp231 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position230 = *$tmp231;
            return position230;
        }
        }
        else {
        panda$core$Bit $tmp232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp232.value) {
        {
            org$pandalanguage$pandac$Position* $tmp234 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position233 = *$tmp234;
            return position233;
        }
        }
        else {
        panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp235.value) {
        {
            org$pandalanguage$pandac$Position* $tmp237 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position236 = *$tmp237;
            return position236;
        }
        }
        else {
        panda$core$Bit $tmp238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp238.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp240 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$77_9175->$data + 0));
            ir239 = *$tmp240;
            org$pandalanguage$pandac$Position $tmp242 = (($fn241) ir239->$class->vtable[3])(ir239);
            return $tmp242;
        }
        }
        else {
        panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp243.value) {
        {
            org$pandalanguage$pandac$Position* $tmp245 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position244 = *$tmp245;
            return position244;
        }
        }
        else {
        panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp246.value) {
        {
            org$pandalanguage$pandac$Position* $tmp248 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position247 = *$tmp248;
            return position247;
        }
        }
        else {
        panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp249.value) {
        {
            org$pandalanguage$pandac$Position* $tmp251 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position250 = *$tmp251;
            return position250;
        }
        }
        else {
        panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp252.value) {
        {
            org$pandalanguage$pandac$Position* $tmp254 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position253 = *$tmp254;
            return position253;
        }
        }
        else {
        panda$core$Bit $tmp255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp255.value) {
        {
            org$pandalanguage$pandac$Position* $tmp257 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position256 = *$tmp257;
            return position256;
        }
        }
        else {
        panda$core$Bit $tmp258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp258.value) {
        {
            org$pandalanguage$pandac$Position* $tmp260 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position259 = *$tmp260;
            return position259;
        }
        }
        else {
        panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp261.value) {
        {
            org$pandalanguage$pandac$Position* $tmp263 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position262 = *$tmp263;
            return position262;
        }
        }
        else {
        panda$core$Bit $tmp264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp264.value) {
        {
            org$pandalanguage$pandac$Position* $tmp266 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position265 = *$tmp266;
            return position265;
        }
        }
        else {
        panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp267.value) {
        {
            org$pandalanguage$pandac$Position* $tmp269 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position268 = *$tmp269;
            return position268;
        }
        }
        else {
        panda$core$Bit $tmp270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp270.value) {
        {
            org$pandalanguage$pandac$Position* $tmp272 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position271 = *$tmp272;
            return position271;
        }
        }
        else {
        panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp273.value) {
        {
            org$pandalanguage$pandac$Position* $tmp275 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position274 = *$tmp275;
            return position274;
        }
        }
        else {
        panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp276.value) {
        {
            org$pandalanguage$pandac$Position* $tmp278 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position277 = *$tmp278;
            return position277;
        }
        }
        else {
        panda$core$Bit $tmp279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp279.value) {
        {
            org$pandalanguage$pandac$Position* $tmp281 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position280 = *$tmp281;
            return position280;
        }
        }
        else {
        panda$core$Bit $tmp282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp282.value) {
        {
            org$pandalanguage$pandac$Position* $tmp284 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position283 = *$tmp284;
            return position283;
        }
        }
        else {
        panda$core$Bit $tmp285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp285.value) {
        {
            org$pandalanguage$pandac$Position* $tmp287 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position286 = *$tmp287;
            return position286;
        }
        }
        else {
        panda$core$Bit $tmp288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp288.value) {
        {
            org$pandalanguage$pandac$Position* $tmp290 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position289 = *$tmp290;
            return position289;
        }
        }
        else {
        panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp291.value) {
        {
            org$pandalanguage$pandac$Position* $tmp293 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position292 = *$tmp293;
            return position292;
        }
        }
        else {
        panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp294.value) {
        {
            org$pandalanguage$pandac$Position* $tmp296 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position295 = *$tmp296;
            return position295;
        }
        }
        else {
        panda$core$Bit $tmp297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp297.value) {
        {
            org$pandalanguage$pandac$Position* $tmp299 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position298 = *$tmp299;
            return position298;
        }
        }
        else {
        panda$core$Bit $tmp300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9175->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp300.value) {
        {
            org$pandalanguage$pandac$Position* $tmp302 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9175->$data + 0));
            position301 = *$tmp302;
            return position301;
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
    org$pandalanguage$pandac$ASTNode* $match$168_9303;
    panda$core$String* name305;
    org$pandalanguage$pandac$ASTNode* test308;
    org$pandalanguage$pandac$ASTNode* msg310;
    org$pandalanguage$pandac$ASTNode* left324;
    org$pandalanguage$pandac$parser$Token$Kind op326;
    org$pandalanguage$pandac$ASTNode* right328;
    panda$core$Bit value342;
    panda$collections$ImmutableArray* statements346;
    panda$core$MutableString* result348;
    panda$collections$Iterator* Iter$182$17351;
    org$pandalanguage$pandac$ASTNode* s363;
    panda$core$Char8 $tmp370;
    panda$core$String* tmp1371;
    panda$core$String* label374;
    org$pandalanguage$pandac$ASTNode* target382;
    panda$collections$ImmutableArray* args384;
    org$pandalanguage$pandac$ASTNode* dc395;
    panda$core$String* name397;
    panda$collections$ImmutableArray* fields399;
    panda$core$MutableString* result401;
    panda$core$String* tmp2412;
    org$pandalanguage$pandac$ASTNode* base415;
    org$pandalanguage$pandac$ChoiceEntry* ce417;
    panda$core$Int64 index419;
    org$pandalanguage$pandac$ASTNode* dc433;
    panda$collections$ImmutableArray* annotations435;
    org$pandalanguage$pandac$ClassDecl$Kind kind437;
    panda$core$String* name439;
    panda$collections$ImmutableArray* generics441;
    panda$collections$ImmutableArray* supertypes443;
    panda$collections$ImmutableArray* members445;
    panda$core$MutableString* result447;
    panda$collections$Iterator* Iter$208$17451;
    org$pandalanguage$pandac$ASTNode* a463;
    org$pandalanguage$pandac$ClassDecl$Kind $match$211_17470;
    panda$collections$Iterator* Iter$224$17488;
    org$pandalanguage$pandac$ASTNode* m500;
    panda$core$Char8 $tmp507;
    panda$core$String* tmp3508;
    panda$core$String* label511;
    org$pandalanguage$pandac$ASTNode* target519;
    org$pandalanguage$pandac$ASTNode* value521;
    panda$core$String* label533;
    panda$collections$ImmutableArray* statements535;
    org$pandalanguage$pandac$ASTNode* test537;
    panda$core$MutableString* result539;
    panda$collections$Iterator* Iter$245$17545;
    org$pandalanguage$pandac$ASTNode* s557;
    panda$core$String* tmp4568;
    org$pandalanguage$pandac$ASTNode* base571;
    panda$core$String* field573;
    org$pandalanguage$pandac$ASTNode* dc583;
    panda$collections$ImmutableArray* annotations585;
    org$pandalanguage$pandac$ASTNode* decl587;
    panda$core$MutableString* result589;
    panda$collections$Iterator* Iter$257$17593;
    org$pandalanguage$pandac$ASTNode* a605;
    panda$core$String* tmp5612;
    panda$collections$ImmutableArray* entries615;
    panda$core$MutableString* result617;
    panda$collections$Iterator* Iter$264$17619;
    org$pandalanguage$pandac$ASTNode* e631;
    panda$core$String* tmp6638;
    panda$core$String* label641;
    org$pandalanguage$pandac$ASTNode* target643;
    org$pandalanguage$pandac$ASTNode* list645;
    panda$collections$ImmutableArray* statements647;
    panda$core$MutableString* result649;
    panda$collections$Iterator* Iter$274$17660;
    org$pandalanguage$pandac$ASTNode* s672;
    panda$core$Char8 $tmp679;
    panda$core$String* tmp7680;
    panda$core$String* name683;
    panda$collections$ImmutableArray* subtypes685;
    panda$core$String* name695;
    org$pandalanguage$pandac$ASTNode* test698;
    panda$collections$ImmutableArray* ifTrue700;
    org$pandalanguage$pandac$ASTNode* ifFalse702;
    panda$core$MutableString* result704;
    panda$collections$Iterator* Iter$285$17710;
    org$pandalanguage$pandac$ASTNode* s722;
    panda$core$Char8 $tmp729;
    panda$core$String* tmp8734;
    panda$core$UInt64 value737;
    org$pandalanguage$pandac$IRNode* ir741;
    panda$core$String* label746;
    panda$collections$ImmutableArray* statements748;
    panda$core$MutableString* result750;
    panda$collections$Iterator* Iter$303$17756;
    org$pandalanguage$pandac$ASTNode* s768;
    panda$core$Char8 $tmp775;
    panda$core$String* tmp9776;
    org$pandalanguage$pandac$ASTNode* value779;
    panda$collections$ImmutableArray* whens781;
    panda$collections$ImmutableArray* other783;
    panda$core$MutableString* result785;
    panda$collections$Iterator* Iter$310$17791;
    org$pandalanguage$pandac$ASTNode* w803;
    panda$core$Char8 $tmp812;
    panda$core$String* tmp10813;
    org$pandalanguage$pandac$ASTNode* dc816;
    panda$collections$ImmutableArray* annotations818;
    org$pandalanguage$pandac$MethodDecl$Kind kind820;
    panda$core$String* name822;
    panda$collections$ImmutableArray* parameters824;
    org$pandalanguage$pandac$ASTNode* returnType826;
    panda$collections$ImmutableArray* statements828;
    panda$core$MutableString* result830;
    panda$collections$Iterator* Iter$323$17834;
    org$pandalanguage$pandac$ASTNode* a846;
    org$pandalanguage$pandac$MethodDecl$Kind $match$326_17853;
    panda$collections$Iterator* Iter$337$21871;
    org$pandalanguage$pandac$ASTNode* s883;
    panda$core$Char8 $tmp890;
    panda$core$String* tmp11891;
    org$pandalanguage$pandac$ASTNode* base896;
    panda$core$String* name901;
    panda$core$String* name904;
    org$pandalanguage$pandac$ASTNode* type906;
    org$pandalanguage$pandac$parser$Token$Kind kind915;
    org$pandalanguage$pandac$ASTNode* base917;
    org$pandalanguage$pandac$ASTNode* start928;
    org$pandalanguage$pandac$ASTNode* end930;
    panda$core$Bit inclusive932;
    org$pandalanguage$pandac$ASTNode* step934;
    panda$core$MutableString* result936;
    panda$core$String* tmp12957;
    panda$core$Real64 value960;
    org$pandalanguage$pandac$ASTNode* value964;
    panda$core$String* str974;
    panda$core$String* name979;
    panda$core$String* name982;
    org$pandalanguage$pandac$ASTNode* type984;
    panda$core$String* name993;
    org$pandalanguage$pandac$Variable$Kind kind996;
    panda$collections$ImmutableArray* decls998;
    panda$core$MutableString* result1000;
    org$pandalanguage$pandac$Variable$Kind $match$395_171002;
    panda$core$String* tmp131012;
    panda$collections$ImmutableArray* tests1015;
    panda$collections$ImmutableArray* statements1017;
    panda$core$MutableString* result1019;
    panda$core$String* separator1022;
    panda$collections$Iterator* Iter$406$171024;
    org$pandalanguage$pandac$ASTNode* t1036;
    panda$core$Char8 $tmp1047;
    panda$collections$Iterator* Iter$410$171048;
    org$pandalanguage$pandac$ASTNode* s1060;
    panda$core$String* tmp141067;
    panda$core$String* label1070;
    org$pandalanguage$pandac$ASTNode* test1072;
    panda$collections$ImmutableArray* statements1074;
    panda$core$MutableString* result1076;
    panda$collections$Iterator* Iter$420$171085;
    org$pandalanguage$pandac$ASTNode* s1097;
    panda$core$Char8 $tmp1104;
    panda$core$String* tmp151105;
    {
        $match$168_9303 = self;
        panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp304.value) {
        {
            panda$core$String** $tmp306 = ((panda$core$String**) ((char*) $match$168_9303->$data + 16));
            name305 = *$tmp306;
            return name305;
        }
        }
        else {
        panda$core$Bit $tmp307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp307.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp309 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 16));
            test308 = *$tmp309;
            org$pandalanguage$pandac$ASTNode** $tmp311 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 24));
            msg310 = *$tmp311;
            if (((panda$core$Bit) { msg310 == NULL }).value) {
            {
                panda$core$String* $tmp313 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s312, ((panda$core$Object*) test308));
                panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp313, &$s314);
                return $tmp315;
            }
            }
            panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s316, ((panda$core$Object*) test308));
            panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp317, &$s318);
            panda$core$String* $tmp320 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp319, ((panda$core$Object*) msg310));
            panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp320, &$s321);
            return $tmp322;
        }
        }
        else {
        panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp323.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp325 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 16));
            left324 = *$tmp325;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp327 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$168_9303->$data + 24));
            op326 = *$tmp327;
            org$pandalanguage$pandac$ASTNode** $tmp329 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 32));
            right328 = *$tmp329;
            panda$core$String* $tmp331 = (($fn330) left324->$class->vtable[0])(left324);
            panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s332);
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp334;
            $tmp334 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp334->value = op326;
            panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp333, ((panda$core$Object*) $tmp334));
            panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp335, &$s336);
            panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp337, ((panda$core$Object*) right328));
            panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp338, &$s339);
            return $tmp340;
        }
        }
        else {
        panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp341.value) {
        {
            panda$core$Bit* $tmp343 = ((panda$core$Bit*) ((char*) $match$168_9303->$data + 16));
            value342 = *$tmp343;
            panda$core$String* $tmp344 = panda$core$Bit$convert$R$panda$core$String(value342);
            return $tmp344;
        }
        }
        else {
        panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp345.value) {
        {
            panda$collections$ImmutableArray** $tmp347 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 16));
            statements346 = *$tmp347;
            panda$core$MutableString* $tmp349 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp349, &$s350);
            result348 = $tmp349;
            {
                ITable* $tmp352 = ((panda$collections$Iterable*) statements346)->$class->itable;
                while ($tmp352->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp352 = $tmp352->next;
                }
                $fn354 $tmp353 = $tmp352->methods[0];
                panda$collections$Iterator* $tmp355 = $tmp353(((panda$collections$Iterable*) statements346));
                Iter$182$17351 = $tmp355;
                $l356:;
                ITable* $tmp358 = Iter$182$17351->$class->itable;
                while ($tmp358->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp358 = $tmp358->next;
                }
                $fn360 $tmp359 = $tmp358->methods[0];
                panda$core$Bit $tmp361 = $tmp359(Iter$182$17351);
                panda$core$Bit $tmp362 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp361);
                if (!$tmp362.value) goto $l357;
                {
                    ITable* $tmp364 = Iter$182$17351->$class->itable;
                    while ($tmp364->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp364 = $tmp364->next;
                    }
                    $fn366 $tmp365 = $tmp364->methods[1];
                    panda$core$Object* $tmp367 = $tmp365(Iter$182$17351);
                    s363 = ((org$pandalanguage$pandac$ASTNode*) $tmp367);
                    panda$core$String* $tmp369 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s363), &$s368);
                    panda$core$MutableString$append$panda$core$String(result348, $tmp369);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s363));
                }
                goto $l356;
                $l357:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$182$17351));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp370, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result348, $tmp370);
            {
                panda$core$String* $tmp372 = panda$core$MutableString$finish$R$panda$core$String(result348);
                tmp1371 = $tmp372;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result348));
                return tmp1371;
            }
        }
        }
        else {
        panda$core$Bit $tmp373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp373.value) {
        {
            panda$core$String** $tmp375 = ((panda$core$String**) ((char*) $match$168_9303->$data + 16));
            label374 = *$tmp375;
            if (((panda$core$Bit) { label374 != NULL }).value) {
            {
                panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s376, label374);
                panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp377, &$s378);
                return $tmp379;
            }
            }
            return &$s380;
        }
        }
        else {
        panda$core$Bit $tmp381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp381.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp383 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 16));
            target382 = *$tmp383;
            panda$collections$ImmutableArray** $tmp385 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 24));
            args384 = *$tmp385;
            panda$core$String* $tmp387 = (($fn386) target382->$class->vtable[0])(target382);
            panda$core$String* $tmp389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp387, &$s388);
            panda$core$String* $tmp390 = panda$collections$ImmutableArray$join$R$panda$core$String(args384);
            panda$core$String* $tmp391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp389, $tmp390);
            panda$core$String* $tmp393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp391, &$s392);
            return $tmp393;
        }
        }
        else {
        panda$core$Bit $tmp394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp394.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp396 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 16));
            dc395 = *$tmp396;
            panda$core$String** $tmp398 = ((panda$core$String**) ((char*) $match$168_9303->$data + 24));
            name397 = *$tmp398;
            panda$collections$ImmutableArray** $tmp400 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 32));
            fields399 = *$tmp400;
            panda$core$MutableString* $tmp402 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp402);
            result401 = $tmp402;
            if (((panda$core$Bit) { dc395 != NULL }).value) {
            {
                panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc395), &$s403);
                panda$core$MutableString$append$panda$core$String(result401, $tmp404);
            }
            }
            panda$core$String* $tmp405 = panda$core$String$convert$R$panda$core$String(name397);
            panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, &$s406);
            panda$core$String* $tmp408 = panda$collections$ImmutableArray$join$R$panda$core$String(fields399);
            panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp407, $tmp408);
            panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp409, &$s410);
            panda$core$MutableString$append$panda$core$String(result401, $tmp411);
            {
                panda$core$String* $tmp413 = panda$core$MutableString$finish$R$panda$core$String(result401);
                tmp2412 = $tmp413;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result401));
                return tmp2412;
            }
        }
        }
        else {
        panda$core$Bit $tmp414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp414.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp416 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 16));
            base415 = *$tmp416;
            org$pandalanguage$pandac$ChoiceEntry** $tmp418 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$168_9303->$data + 24));
            ce417 = *$tmp418;
            panda$core$Int64* $tmp420 = ((panda$core$Int64*) ((char*) $match$168_9303->$data + 32));
            index419 = *$tmp420;
            panda$core$String* $tmp422 = (($fn421) base415->$class->vtable[0])(base415);
            panda$core$String* $tmp424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp422, &$s423);
            panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp424, ((panda$core$Object*) ce417));
            panda$core$String* $tmp427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp425, &$s426);
            panda$core$Int64$wrapper* $tmp428;
            $tmp428 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp428->value = index419;
            panda$core$String* $tmp429 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp427, ((panda$core$Object*) $tmp428));
            panda$core$String* $tmp431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp429, &$s430);
            return $tmp431;
        }
        }
        else {
        panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp432.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp434 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 16));
            dc433 = *$tmp434;
            panda$collections$ImmutableArray** $tmp436 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 24));
            annotations435 = *$tmp436;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp438 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$168_9303->$data + 32));
            kind437 = *$tmp438;
            panda$core$String** $tmp440 = ((panda$core$String**) ((char*) $match$168_9303->$data + 40));
            name439 = *$tmp440;
            panda$collections$ImmutableArray** $tmp442 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 48));
            generics441 = *$tmp442;
            panda$collections$ImmutableArray** $tmp444 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 56));
            supertypes443 = *$tmp444;
            panda$collections$ImmutableArray** $tmp446 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 64));
            members445 = *$tmp446;
            panda$core$MutableString* $tmp448 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp448);
            result447 = $tmp448;
            if (((panda$core$Bit) { dc433 != NULL }).value) {
            {
                panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc433), &$s449);
                panda$core$MutableString$append$panda$core$String(result447, $tmp450);
            }
            }
            {
                ITable* $tmp452 = ((panda$collections$Iterable*) annotations435)->$class->itable;
                while ($tmp452->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp452 = $tmp452->next;
                }
                $fn454 $tmp453 = $tmp452->methods[0];
                panda$collections$Iterator* $tmp455 = $tmp453(((panda$collections$Iterable*) annotations435));
                Iter$208$17451 = $tmp455;
                $l456:;
                ITable* $tmp458 = Iter$208$17451->$class->itable;
                while ($tmp458->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp458 = $tmp458->next;
                }
                $fn460 $tmp459 = $tmp458->methods[0];
                panda$core$Bit $tmp461 = $tmp459(Iter$208$17451);
                panda$core$Bit $tmp462 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp461);
                if (!$tmp462.value) goto $l457;
                {
                    ITable* $tmp464 = Iter$208$17451->$class->itable;
                    while ($tmp464->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp464 = $tmp464->next;
                    }
                    $fn466 $tmp465 = $tmp464->methods[1];
                    panda$core$Object* $tmp467 = $tmp465(Iter$208$17451);
                    a463 = ((org$pandalanguage$pandac$ASTNode*) $tmp467);
                    panda$core$String* $tmp469 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a463), &$s468);
                    panda$core$MutableString$append$panda$core$String(result447, $tmp469);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a463));
                }
                goto $l456;
                $l457:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$208$17451));
            }
            {
                $match$211_17470 = kind437;
                panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$211_17470.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp471.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result447, &$s472);
                }
                }
                else {
                panda$core$Bit $tmp473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$211_17470.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp473.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result447, &$s474);
                }
                }
                else {
                panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$211_17470.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp475.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result447, &$s476);
                }
                }
                }
                }
            }
            panda$core$MutableString$append$panda$core$String(result447, name439);
            if (((panda$core$Bit) { generics441 != NULL }).value) {
            {
                panda$core$String* $tmp478 = panda$collections$ImmutableArray$join$R$panda$core$String(generics441);
                panda$core$String* $tmp479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s477, $tmp478);
                panda$core$String* $tmp481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp479, &$s480);
                panda$core$MutableString$append$panda$core$String(result447, $tmp481);
            }
            }
            if (((panda$core$Bit) { supertypes443 != NULL }).value) {
            {
                panda$core$String* $tmp483 = panda$collections$ImmutableArray$join$R$panda$core$String(supertypes443);
                panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s482, $tmp483);
                panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp484, &$s485);
                panda$core$MutableString$append$panda$core$String(result447, $tmp486);
            }
            }
            panda$core$MutableString$append$panda$core$String(result447, &$s487);
            {
                ITable* $tmp489 = ((panda$collections$Iterable*) members445)->$class->itable;
                while ($tmp489->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp489 = $tmp489->next;
                }
                $fn491 $tmp490 = $tmp489->methods[0];
                panda$collections$Iterator* $tmp492 = $tmp490(((panda$collections$Iterable*) members445));
                Iter$224$17488 = $tmp492;
                $l493:;
                ITable* $tmp495 = Iter$224$17488->$class->itable;
                while ($tmp495->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp495 = $tmp495->next;
                }
                $fn497 $tmp496 = $tmp495->methods[0];
                panda$core$Bit $tmp498 = $tmp496(Iter$224$17488);
                panda$core$Bit $tmp499 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp498);
                if (!$tmp499.value) goto $l494;
                {
                    ITable* $tmp501 = Iter$224$17488->$class->itable;
                    while ($tmp501->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp501 = $tmp501->next;
                    }
                    $fn503 $tmp502 = $tmp501->methods[1];
                    panda$core$Object* $tmp504 = $tmp502(Iter$224$17488);
                    m500 = ((org$pandalanguage$pandac$ASTNode*) $tmp504);
                    panda$core$String* $tmp506 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m500), &$s505);
                    panda$core$MutableString$append$panda$core$String(result447, $tmp506);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m500));
                }
                goto $l493;
                $l494:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$224$17488));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp507, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result447, $tmp507);
            {
                panda$core$String* $tmp509 = panda$core$MutableString$finish$R$panda$core$String(result447);
                tmp3508 = $tmp509;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result447));
                return tmp3508;
            }
        }
        }
        else {
        panda$core$Bit $tmp510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp510.value) {
        {
            panda$core$String** $tmp512 = ((panda$core$String**) ((char*) $match$168_9303->$data + 16));
            label511 = *$tmp512;
            if (((panda$core$Bit) { label511 != NULL }).value) {
            {
                panda$core$String* $tmp514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s513, label511);
                panda$core$String* $tmp516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp514, &$s515);
                return $tmp516;
            }
            }
            return &$s517;
        }
        }
        else {
        panda$core$Bit $tmp518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp518.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp520 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 16));
            target519 = *$tmp520;
            org$pandalanguage$pandac$ASTNode** $tmp522 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 24));
            value521 = *$tmp522;
            if (((panda$core$Bit) { value521 != NULL }).value) {
            {
                panda$core$String* $tmp524 = (($fn523) target519->$class->vtable[0])(target519);
                panda$core$String* $tmp526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp524, &$s525);
                panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp526, ((panda$core$Object*) value521));
                panda$core$String* $tmp529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp527, &$s528);
                return $tmp529;
            }
            }
            panda$core$String* $tmp531 = (($fn530) target519->$class->vtable[0])(target519);
            return $tmp531;
        }
        }
        else {
        panda$core$Bit $tmp532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp532.value) {
        {
            panda$core$String** $tmp534 = ((panda$core$String**) ((char*) $match$168_9303->$data + 16));
            label533 = *$tmp534;
            panda$collections$ImmutableArray** $tmp536 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 24));
            statements535 = *$tmp536;
            org$pandalanguage$pandac$ASTNode** $tmp538 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 32));
            test537 = *$tmp538;
            panda$core$MutableString* $tmp540 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp540);
            result539 = $tmp540;
            if (((panda$core$Bit) { label533 != NULL }).value) {
            {
                panda$core$String* $tmp541 = panda$core$String$convert$R$panda$core$String(label533);
                panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp541, &$s542);
                panda$core$MutableString$append$panda$core$String(result539, $tmp543);
            }
            }
            panda$core$MutableString$append$panda$core$String(result539, &$s544);
            {
                ITable* $tmp546 = ((panda$collections$Iterable*) statements535)->$class->itable;
                while ($tmp546->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp546 = $tmp546->next;
                }
                $fn548 $tmp547 = $tmp546->methods[0];
                panda$collections$Iterator* $tmp549 = $tmp547(((panda$collections$Iterable*) statements535));
                Iter$245$17545 = $tmp549;
                $l550:;
                ITable* $tmp552 = Iter$245$17545->$class->itable;
                while ($tmp552->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp552 = $tmp552->next;
                }
                $fn554 $tmp553 = $tmp552->methods[0];
                panda$core$Bit $tmp555 = $tmp553(Iter$245$17545);
                panda$core$Bit $tmp556 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp555);
                if (!$tmp556.value) goto $l551;
                {
                    ITable* $tmp558 = Iter$245$17545->$class->itable;
                    while ($tmp558->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp558 = $tmp558->next;
                    }
                    $fn560 $tmp559 = $tmp558->methods[1];
                    panda$core$Object* $tmp561 = $tmp559(Iter$245$17545);
                    s557 = ((org$pandalanguage$pandac$ASTNode*) $tmp561);
                    panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s557), &$s562);
                    panda$core$MutableString$append$panda$core$String(result539, $tmp563);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s557));
                }
                goto $l550;
                $l551:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$245$17545));
            }
            panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s564, ((panda$core$Object*) test537));
            panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp565, &$s566);
            panda$core$MutableString$append$panda$core$String(result539, $tmp567);
            {
                panda$core$String* $tmp569 = panda$core$MutableString$finish$R$panda$core$String(result539);
                tmp4568 = $tmp569;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result539));
                return tmp4568;
            }
        }
        }
        else {
        panda$core$Bit $tmp570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp570.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp572 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 16));
            base571 = *$tmp572;
            panda$core$String** $tmp574 = ((panda$core$String**) ((char*) $match$168_9303->$data + 24));
            field573 = *$tmp574;
            panda$core$String* $tmp576 = (($fn575) base571->$class->vtable[0])(base571);
            panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp576, &$s577);
            panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, field573);
            panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, &$s580);
            return $tmp581;
        }
        }
        else {
        panda$core$Bit $tmp582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp582.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp584 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 16));
            dc583 = *$tmp584;
            panda$collections$ImmutableArray** $tmp586 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 24));
            annotations585 = *$tmp586;
            org$pandalanguage$pandac$ASTNode** $tmp588 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 32));
            decl587 = *$tmp588;
            panda$core$MutableString* $tmp590 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp590);
            result589 = $tmp590;
            if (((panda$core$Bit) { dc583 != NULL }).value) {
            {
                panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc583), &$s591);
                panda$core$MutableString$append$panda$core$String(result589, $tmp592);
            }
            }
            {
                ITable* $tmp594 = ((panda$collections$Iterable*) annotations585)->$class->itable;
                while ($tmp594->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp594 = $tmp594->next;
                }
                $fn596 $tmp595 = $tmp594->methods[0];
                panda$collections$Iterator* $tmp597 = $tmp595(((panda$collections$Iterable*) annotations585));
                Iter$257$17593 = $tmp597;
                $l598:;
                ITable* $tmp600 = Iter$257$17593->$class->itable;
                while ($tmp600->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp600 = $tmp600->next;
                }
                $fn602 $tmp601 = $tmp600->methods[0];
                panda$core$Bit $tmp603 = $tmp601(Iter$257$17593);
                panda$core$Bit $tmp604 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp603);
                if (!$tmp604.value) goto $l599;
                {
                    ITable* $tmp606 = Iter$257$17593->$class->itable;
                    while ($tmp606->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp606 = $tmp606->next;
                    }
                    $fn608 $tmp607 = $tmp606->methods[1];
                    panda$core$Object* $tmp609 = $tmp607(Iter$257$17593);
                    a605 = ((org$pandalanguage$pandac$ASTNode*) $tmp609);
                    panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a605), &$s610);
                    panda$core$MutableString$append$panda$core$String(result589, $tmp611);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a605));
                }
                goto $l598;
                $l599:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$257$17593));
            }
            panda$core$MutableString$append$panda$core$Object(result589, ((panda$core$Object*) decl587));
            {
                panda$core$String* $tmp613 = panda$core$MutableString$finish$R$panda$core$String(result589);
                tmp5612 = $tmp613;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result589));
                return tmp5612;
            }
        }
        }
        else {
        panda$core$Bit $tmp614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp614.value) {
        {
            panda$collections$ImmutableArray** $tmp616 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 0));
            entries615 = *$tmp616;
            panda$core$MutableString* $tmp618 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp618);
            result617 = $tmp618;
            {
                ITable* $tmp620 = ((panda$collections$Iterable*) entries615)->$class->itable;
                while ($tmp620->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp620 = $tmp620->next;
                }
                $fn622 $tmp621 = $tmp620->methods[0];
                panda$collections$Iterator* $tmp623 = $tmp621(((panda$collections$Iterable*) entries615));
                Iter$264$17619 = $tmp623;
                $l624:;
                ITable* $tmp626 = Iter$264$17619->$class->itable;
                while ($tmp626->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp626 = $tmp626->next;
                }
                $fn628 $tmp627 = $tmp626->methods[0];
                panda$core$Bit $tmp629 = $tmp627(Iter$264$17619);
                panda$core$Bit $tmp630 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp629);
                if (!$tmp630.value) goto $l625;
                {
                    ITable* $tmp632 = Iter$264$17619->$class->itable;
                    while ($tmp632->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp632 = $tmp632->next;
                    }
                    $fn634 $tmp633 = $tmp632->methods[1];
                    panda$core$Object* $tmp635 = $tmp633(Iter$264$17619);
                    e631 = ((org$pandalanguage$pandac$ASTNode*) $tmp635);
                    panda$core$String* $tmp637 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e631), &$s636);
                    panda$core$MutableString$append$panda$core$String(result617, $tmp637);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e631));
                }
                goto $l624;
                $l625:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$264$17619));
            }
            {
                panda$core$String* $tmp639 = panda$core$MutableString$finish$R$panda$core$String(result617);
                tmp6638 = $tmp639;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result617));
                return tmp6638;
            }
        }
        }
        else {
        panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp640.value) {
        {
            panda$core$String** $tmp642 = ((panda$core$String**) ((char*) $match$168_9303->$data + 16));
            label641 = *$tmp642;
            org$pandalanguage$pandac$ASTNode** $tmp644 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 24));
            target643 = *$tmp644;
            org$pandalanguage$pandac$ASTNode** $tmp646 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 32));
            list645 = *$tmp646;
            panda$collections$ImmutableArray** $tmp648 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 40));
            statements647 = *$tmp648;
            panda$core$MutableString* $tmp650 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp650);
            result649 = $tmp650;
            if (((panda$core$Bit) { label641 != NULL }).value) {
            {
                panda$core$String* $tmp652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label641, &$s651);
                panda$core$MutableString$append$panda$core$String(result649, $tmp652);
            }
            }
            panda$core$String* $tmp654 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s653, ((panda$core$Object*) target643));
            panda$core$String* $tmp656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp654, &$s655);
            panda$core$String* $tmp657 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp656, ((panda$core$Object*) list645));
            panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp657, &$s658);
            panda$core$MutableString$append$panda$core$String(result649, $tmp659);
            {
                ITable* $tmp661 = ((panda$collections$Iterable*) statements647)->$class->itable;
                while ($tmp661->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp661 = $tmp661->next;
                }
                $fn663 $tmp662 = $tmp661->methods[0];
                panda$collections$Iterator* $tmp664 = $tmp662(((panda$collections$Iterable*) statements647));
                Iter$274$17660 = $tmp664;
                $l665:;
                ITable* $tmp667 = Iter$274$17660->$class->itable;
                while ($tmp667->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp667 = $tmp667->next;
                }
                $fn669 $tmp668 = $tmp667->methods[0];
                panda$core$Bit $tmp670 = $tmp668(Iter$274$17660);
                panda$core$Bit $tmp671 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp670);
                if (!$tmp671.value) goto $l666;
                {
                    ITable* $tmp673 = Iter$274$17660->$class->itable;
                    while ($tmp673->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp673 = $tmp673->next;
                    }
                    $fn675 $tmp674 = $tmp673->methods[1];
                    panda$core$Object* $tmp676 = $tmp674(Iter$274$17660);
                    s672 = ((org$pandalanguage$pandac$ASTNode*) $tmp676);
                    panda$core$String* $tmp678 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s672), &$s677);
                    panda$core$MutableString$append$panda$core$String(result649, $tmp678);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s672));
                }
                goto $l665;
                $l666:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$274$17660));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp679, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result649, $tmp679);
            {
                panda$core$String* $tmp681 = panda$core$MutableString$finish$R$panda$core$String(result649);
                tmp7680 = $tmp681;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result649));
                return tmp7680;
            }
        }
        }
        else {
        panda$core$Bit $tmp682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp682.value) {
        {
            panda$core$String** $tmp684 = ((panda$core$String**) ((char*) $match$168_9303->$data + 16));
            name683 = *$tmp684;
            panda$collections$ImmutableArray** $tmp686 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 24));
            subtypes685 = *$tmp686;
            panda$core$String* $tmp687 = panda$core$String$convert$R$panda$core$String(name683);
            panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp687, &$s688);
            panda$core$String* $tmp690 = panda$collections$ImmutableArray$join$R$panda$core$String(subtypes685);
            panda$core$String* $tmp691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp689, $tmp690);
            panda$core$String* $tmp693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp691, &$s692);
            return $tmp693;
        }
        }
        else {
        panda$core$Bit $tmp694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp694.value) {
        {
            panda$core$String** $tmp696 = ((panda$core$String**) ((char*) $match$168_9303->$data + 16));
            name695 = *$tmp696;
            return name695;
        }
        }
        else {
        panda$core$Bit $tmp697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp697.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp699 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 16));
            test698 = *$tmp699;
            panda$collections$ImmutableArray** $tmp701 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 24));
            ifTrue700 = *$tmp701;
            org$pandalanguage$pandac$ASTNode** $tmp703 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 32));
            ifFalse702 = *$tmp703;
            panda$core$MutableString* $tmp705 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s706, ((panda$core$Object*) test698));
            panda$core$String* $tmp709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp707, &$s708);
            panda$core$MutableString$init$panda$core$String($tmp705, $tmp709);
            result704 = $tmp705;
            {
                ITable* $tmp711 = ((panda$collections$Iterable*) ifTrue700)->$class->itable;
                while ($tmp711->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp711 = $tmp711->next;
                }
                $fn713 $tmp712 = $tmp711->methods[0];
                panda$collections$Iterator* $tmp714 = $tmp712(((panda$collections$Iterable*) ifTrue700));
                Iter$285$17710 = $tmp714;
                $l715:;
                ITable* $tmp717 = Iter$285$17710->$class->itable;
                while ($tmp717->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp717 = $tmp717->next;
                }
                $fn719 $tmp718 = $tmp717->methods[0];
                panda$core$Bit $tmp720 = $tmp718(Iter$285$17710);
                panda$core$Bit $tmp721 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp720);
                if (!$tmp721.value) goto $l716;
                {
                    ITable* $tmp723 = Iter$285$17710->$class->itable;
                    while ($tmp723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp723 = $tmp723->next;
                    }
                    $fn725 $tmp724 = $tmp723->methods[1];
                    panda$core$Object* $tmp726 = $tmp724(Iter$285$17710);
                    s722 = ((org$pandalanguage$pandac$ASTNode*) $tmp726);
                    panda$core$String* $tmp728 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s722), &$s727);
                    panda$core$MutableString$append$panda$core$String(result704, $tmp728);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s722));
                }
                goto $l715;
                $l716:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$285$17710));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp729, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result704, $tmp729);
            if (((panda$core$Bit) { ifFalse702 != NULL }).value) {
            {
                panda$core$String* $tmp731 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s730, ((panda$core$Object*) ifFalse702));
                panda$core$String* $tmp733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp731, &$s732);
                panda$core$MutableString$append$panda$core$String(result704, $tmp733);
            }
            }
            {
                panda$core$String* $tmp735 = panda$core$MutableString$finish$R$panda$core$String(result704);
                tmp8734 = $tmp735;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result704));
                return tmp8734;
            }
        }
        }
        else {
        panda$core$Bit $tmp736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp736.value) {
        {
            panda$core$UInt64* $tmp738 = ((panda$core$UInt64*) ((char*) $match$168_9303->$data + 16));
            value737 = *$tmp738;
            panda$core$String* $tmp739 = panda$core$UInt64$convert$R$panda$core$String(value737);
            return $tmp739;
        }
        }
        else {
        panda$core$Bit $tmp740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp740.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp742 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$168_9303->$data + 0));
            ir741 = *$tmp742;
            panda$core$String* $tmp744 = (($fn743) ir741->$class->vtable[0])(ir741);
            return $tmp744;
        }
        }
        else {
        panda$core$Bit $tmp745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp745.value) {
        {
            panda$core$String** $tmp747 = ((panda$core$String**) ((char*) $match$168_9303->$data + 16));
            label746 = *$tmp747;
            panda$collections$ImmutableArray** $tmp749 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 24));
            statements748 = *$tmp749;
            panda$core$MutableString* $tmp751 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp751);
            result750 = $tmp751;
            if (((panda$core$Bit) { label746 != NULL }).value) {
            {
                panda$core$String* $tmp752 = panda$core$String$convert$R$panda$core$String(label746);
                panda$core$String* $tmp754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp752, &$s753);
                panda$core$MutableString$append$panda$core$String(result750, $tmp754);
            }
            }
            panda$core$MutableString$append$panda$core$String(result750, &$s755);
            {
                ITable* $tmp757 = ((panda$collections$Iterable*) statements748)->$class->itable;
                while ($tmp757->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp757 = $tmp757->next;
                }
                $fn759 $tmp758 = $tmp757->methods[0];
                panda$collections$Iterator* $tmp760 = $tmp758(((panda$collections$Iterable*) statements748));
                Iter$303$17756 = $tmp760;
                $l761:;
                ITable* $tmp763 = Iter$303$17756->$class->itable;
                while ($tmp763->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp763 = $tmp763->next;
                }
                $fn765 $tmp764 = $tmp763->methods[0];
                panda$core$Bit $tmp766 = $tmp764(Iter$303$17756);
                panda$core$Bit $tmp767 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp766);
                if (!$tmp767.value) goto $l762;
                {
                    ITable* $tmp769 = Iter$303$17756->$class->itable;
                    while ($tmp769->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp769 = $tmp769->next;
                    }
                    $fn771 $tmp770 = $tmp769->methods[1];
                    panda$core$Object* $tmp772 = $tmp770(Iter$303$17756);
                    s768 = ((org$pandalanguage$pandac$ASTNode*) $tmp772);
                    panda$core$String* $tmp774 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s768), &$s773);
                    panda$core$MutableString$append$panda$core$String(result750, $tmp774);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s768));
                }
                goto $l761;
                $l762:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$303$17756));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp775, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result750, $tmp775);
            {
                panda$core$String* $tmp777 = panda$core$MutableString$finish$R$panda$core$String(result750);
                tmp9776 = $tmp777;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result750));
                return tmp9776;
            }
        }
        }
        else {
        panda$core$Bit $tmp778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp778.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp780 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 16));
            value779 = *$tmp780;
            panda$collections$ImmutableArray** $tmp782 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 24));
            whens781 = *$tmp782;
            panda$collections$ImmutableArray** $tmp784 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 32));
            other783 = *$tmp784;
            panda$core$MutableString* $tmp786 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp788 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s787, ((panda$core$Object*) value779));
            panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp788, &$s789);
            panda$core$MutableString$init$panda$core$String($tmp786, $tmp790);
            result785 = $tmp786;
            {
                ITable* $tmp792 = ((panda$collections$Iterable*) whens781)->$class->itable;
                while ($tmp792->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp792 = $tmp792->next;
                }
                $fn794 $tmp793 = $tmp792->methods[0];
                panda$collections$Iterator* $tmp795 = $tmp793(((panda$collections$Iterable*) whens781));
                Iter$310$17791 = $tmp795;
                $l796:;
                ITable* $tmp798 = Iter$310$17791->$class->itable;
                while ($tmp798->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp798 = $tmp798->next;
                }
                $fn800 $tmp799 = $tmp798->methods[0];
                panda$core$Bit $tmp801 = $tmp799(Iter$310$17791);
                panda$core$Bit $tmp802 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp801);
                if (!$tmp802.value) goto $l797;
                {
                    ITable* $tmp804 = Iter$310$17791->$class->itable;
                    while ($tmp804->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp804 = $tmp804->next;
                    }
                    $fn806 $tmp805 = $tmp804->methods[1];
                    panda$core$Object* $tmp807 = $tmp805(Iter$310$17791);
                    w803 = ((org$pandalanguage$pandac$ASTNode*) $tmp807);
                    panda$core$String* $tmp809 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w803), &$s808);
                    panda$core$MutableString$append$panda$core$String(result785, $tmp809);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w803));
                }
                goto $l796;
                $l797:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$310$17791));
            }
            if (((panda$core$Bit) { other783 != NULL }).value) {
            {
                panda$core$String* $tmp811 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other783), &$s810);
                panda$core$MutableString$append$panda$core$String(result785, $tmp811);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp812, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result785, $tmp812);
            {
                panda$core$String* $tmp814 = panda$core$MutableString$finish$R$panda$core$String(result785);
                tmp10813 = $tmp814;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result785));
                return tmp10813;
            }
        }
        }
        else {
        panda$core$Bit $tmp815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp815.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp817 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 16));
            dc816 = *$tmp817;
            panda$collections$ImmutableArray** $tmp819 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 24));
            annotations818 = *$tmp819;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp821 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$168_9303->$data + 32));
            kind820 = *$tmp821;
            panda$core$String** $tmp823 = ((panda$core$String**) ((char*) $match$168_9303->$data + 40));
            name822 = *$tmp823;
            panda$collections$ImmutableArray** $tmp825 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 48));
            parameters824 = *$tmp825;
            org$pandalanguage$pandac$ASTNode** $tmp827 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 56));
            returnType826 = *$tmp827;
            panda$collections$ImmutableArray** $tmp829 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 64));
            statements828 = *$tmp829;
            panda$core$MutableString* $tmp831 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp831);
            result830 = $tmp831;
            if (((panda$core$Bit) { dc816 != NULL }).value) {
            {
                panda$core$String* $tmp833 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc816), &$s832);
                panda$core$MutableString$append$panda$core$String(result830, $tmp833);
            }
            }
            {
                ITable* $tmp835 = ((panda$collections$Iterable*) annotations818)->$class->itable;
                while ($tmp835->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp835 = $tmp835->next;
                }
                $fn837 $tmp836 = $tmp835->methods[0];
                panda$collections$Iterator* $tmp838 = $tmp836(((panda$collections$Iterable*) annotations818));
                Iter$323$17834 = $tmp838;
                $l839:;
                ITable* $tmp841 = Iter$323$17834->$class->itable;
                while ($tmp841->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp841 = $tmp841->next;
                }
                $fn843 $tmp842 = $tmp841->methods[0];
                panda$core$Bit $tmp844 = $tmp842(Iter$323$17834);
                panda$core$Bit $tmp845 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp844);
                if (!$tmp845.value) goto $l840;
                {
                    ITable* $tmp847 = Iter$323$17834->$class->itable;
                    while ($tmp847->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp847 = $tmp847->next;
                    }
                    $fn849 $tmp848 = $tmp847->methods[1];
                    panda$core$Object* $tmp850 = $tmp848(Iter$323$17834);
                    a846 = ((org$pandalanguage$pandac$ASTNode*) $tmp850);
                    panda$core$String* $tmp852 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a846), &$s851);
                    panda$core$MutableString$append$panda$core$String(result830, $tmp852);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a846));
                }
                goto $l839;
                $l840:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$323$17834));
            }
            {
                $match$326_17853 = kind820;
                panda$core$Bit $tmp854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$326_17853.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp854.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result830, &$s855);
                }
                }
                else {
                panda$core$Bit $tmp856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$326_17853.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp856.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result830, &$s857);
                }
                }
                else {
                panda$core$Bit $tmp858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$326_17853.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp858.value) {
                {
                }
                }
                }
                }
            }
            panda$core$String* $tmp859 = panda$core$String$convert$R$panda$core$String(name822);
            panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp859, &$s860);
            panda$core$String* $tmp862 = panda$collections$ImmutableArray$join$R$panda$core$String(parameters824);
            panda$core$String* $tmp863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp861, $tmp862);
            panda$core$String* $tmp865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp863, &$s864);
            panda$core$MutableString$append$panda$core$String(result830, $tmp865);
            if (((panda$core$Bit) { returnType826 != NULL }).value) {
            {
                panda$core$String* $tmp867 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s866, ((panda$core$Object*) returnType826));
                panda$core$String* $tmp869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp867, &$s868);
                panda$core$MutableString$append$panda$core$String(result830, $tmp869);
            }
            }
            if (((panda$core$Bit) { statements828 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result830, &$s870);
                {
                    ITable* $tmp872 = ((panda$collections$Iterable*) statements828)->$class->itable;
                    while ($tmp872->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp872 = $tmp872->next;
                    }
                    $fn874 $tmp873 = $tmp872->methods[0];
                    panda$collections$Iterator* $tmp875 = $tmp873(((panda$collections$Iterable*) statements828));
                    Iter$337$21871 = $tmp875;
                    $l876:;
                    ITable* $tmp878 = Iter$337$21871->$class->itable;
                    while ($tmp878->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp878 = $tmp878->next;
                    }
                    $fn880 $tmp879 = $tmp878->methods[0];
                    panda$core$Bit $tmp881 = $tmp879(Iter$337$21871);
                    panda$core$Bit $tmp882 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp881);
                    if (!$tmp882.value) goto $l877;
                    {
                        ITable* $tmp884 = Iter$337$21871->$class->itable;
                        while ($tmp884->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp884 = $tmp884->next;
                        }
                        $fn886 $tmp885 = $tmp884->methods[1];
                        panda$core$Object* $tmp887 = $tmp885(Iter$337$21871);
                        s883 = ((org$pandalanguage$pandac$ASTNode*) $tmp887);
                        panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s883), &$s888);
                        panda$core$MutableString$append$panda$core$String(result830, $tmp889);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s883));
                    }
                    goto $l876;
                    $l877:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$337$21871));
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp890, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result830, $tmp890);
            }
            }
            {
                panda$core$String* $tmp892 = panda$core$MutableString$finish$R$panda$core$String(result830);
                tmp11891 = $tmp892;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result830));
                return tmp11891;
            }
        }
        }
        else {
        panda$core$Bit $tmp893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp893.value) {
        {
            return &$s894;
        }
        }
        else {
        panda$core$Bit $tmp895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp895.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp897 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 16));
            base896 = *$tmp897;
            panda$core$String* $tmp899 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base896), &$s898);
            return $tmp899;
        }
        }
        else {
        panda$core$Bit $tmp900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp900.value) {
        {
            panda$core$String** $tmp902 = ((panda$core$String**) ((char*) $match$168_9303->$data + 16));
            name901 = *$tmp902;
            return name901;
        }
        }
        else {
        panda$core$Bit $tmp903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp903.value) {
        {
            panda$core$String** $tmp905 = ((panda$core$String**) ((char*) $match$168_9303->$data + 16));
            name904 = *$tmp905;
            org$pandalanguage$pandac$ASTNode** $tmp907 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 24));
            type906 = *$tmp907;
            panda$core$String* $tmp908 = panda$core$String$convert$R$panda$core$String(name904);
            panda$core$String* $tmp910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp908, &$s909);
            panda$core$String* $tmp911 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp910, ((panda$core$Object*) type906));
            panda$core$String* $tmp913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp911, &$s912);
            return $tmp913;
        }
        }
        else {
        panda$core$Bit $tmp914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp914.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp916 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$168_9303->$data + 16));
            kind915 = *$tmp916;
            org$pandalanguage$pandac$ASTNode** $tmp918 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 24));
            base917 = *$tmp918;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp919;
            $tmp919 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp919->value = kind915;
            panda$core$String* $tmp921 = (($fn920) ((panda$core$Object*) $tmp919)->$class->vtable[0])(((panda$core$Object*) $tmp919));
            panda$core$String* $tmp923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp921, &$s922);
            panda$core$String* $tmp924 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp923, ((panda$core$Object*) base917));
            panda$core$String* $tmp926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp924, &$s925);
            return $tmp926;
        }
        }
        else {
        panda$core$Bit $tmp927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp927.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp929 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 16));
            start928 = *$tmp929;
            org$pandalanguage$pandac$ASTNode** $tmp931 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 24));
            end930 = *$tmp931;
            panda$core$Bit* $tmp933 = ((panda$core$Bit*) ((char*) $match$168_9303->$data + 32));
            inclusive932 = *$tmp933;
            org$pandalanguage$pandac$ASTNode** $tmp935 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 33));
            step934 = *$tmp935;
            panda$core$MutableString* $tmp937 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp937);
            result936 = $tmp937;
            panda$core$Bit $tmp941;
            if (((panda$core$Bit) { start928 != NULL }).value) goto $l938; else goto $l939;
            $l938:;
            panda$core$Bit $tmp942 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start928->$rawValue, ((panda$core$Int64) { 25 }));
            $tmp941 = $tmp942;
            goto $l940;
            $l939:;
            $tmp941 = ((panda$core$Bit) { true });
            goto $l940;
            $l940:;
            if ($tmp941.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result936, ((panda$core$Object*) start928));
            }
            }
            if (inclusive932.value) {
            {
                panda$core$MutableString$append$panda$core$String(result936, &$s943);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result936, &$s944);
            }
            }
            panda$core$Bit $tmp948;
            if (((panda$core$Bit) { end930 != NULL }).value) goto $l945; else goto $l946;
            $l945:;
            panda$core$Bit $tmp949 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(end930->$rawValue, ((panda$core$Int64) { 25 }));
            $tmp948 = $tmp949;
            goto $l947;
            $l946:;
            $tmp948 = ((panda$core$Bit) { true });
            goto $l947;
            $l947:;
            if ($tmp948.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result936, ((panda$core$Object*) end930));
            }
            }
            panda$core$Bit $tmp953;
            if (((panda$core$Bit) { step934 != NULL }).value) goto $l950; else goto $l951;
            $l950:;
            panda$core$Bit $tmp954 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(step934->$rawValue, ((panda$core$Int64) { 25 }));
            $tmp953 = $tmp954;
            goto $l952;
            $l951:;
            $tmp953 = ((panda$core$Bit) { true });
            goto $l952;
            $l952:;
            if ($tmp953.value) {
            {
                panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s955, ((panda$core$Object*) step934));
                panda$core$MutableString$append$panda$core$String(result936, $tmp956);
            }
            }
            {
                panda$core$String* $tmp958 = panda$core$MutableString$finish$R$panda$core$String(result936);
                tmp12957 = $tmp958;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result936));
                return tmp12957;
            }
        }
        }
        else {
        panda$core$Bit $tmp959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp959.value) {
        {
            panda$core$Real64* $tmp961 = ((panda$core$Real64*) ((char*) $match$168_9303->$data + 16));
            value960 = *$tmp961;
            panda$core$String* $tmp962 = panda$core$Real64$convert$R$panda$core$String(value960);
            return $tmp962;
        }
        }
        else {
        panda$core$Bit $tmp963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp963.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp965 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 16));
            value964 = *$tmp965;
            if (((panda$core$Bit) { value964 != NULL }).value) {
            {
                panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s966, ((panda$core$Object*) value964));
                panda$core$String* $tmp969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp967, &$s968);
                return $tmp969;
            }
            }
            return &$s970;
        }
        }
        else {
        panda$core$Bit $tmp971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp971.value) {
        {
            return &$s972;
        }
        }
        else {
        panda$core$Bit $tmp973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp973.value) {
        {
            panda$core$String** $tmp975 = ((panda$core$String**) ((char*) $match$168_9303->$data + 16));
            str974 = *$tmp975;
            return str974;
        }
        }
        else {
        panda$core$Bit $tmp976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp976.value) {
        {
            return &$s977;
        }
        }
        else {
        panda$core$Bit $tmp978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp978.value) {
        {
            panda$core$String** $tmp980 = ((panda$core$String**) ((char*) $match$168_9303->$data + 16));
            name979 = *$tmp980;
            return name979;
        }
        }
        else {
        panda$core$Bit $tmp981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp981.value) {
        {
            panda$core$String** $tmp983 = ((panda$core$String**) ((char*) $match$168_9303->$data + 16));
            name982 = *$tmp983;
            org$pandalanguage$pandac$ASTNode** $tmp985 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 24));
            type984 = *$tmp985;
            if (((panda$core$Bit) { type984 != NULL }).value) {
            {
                panda$core$String* $tmp986 = panda$core$String$convert$R$panda$core$String(name982);
                panda$core$String* $tmp988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp986, &$s987);
                panda$core$String* $tmp989 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp988, ((panda$core$Object*) type984));
                panda$core$String* $tmp991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp989, &$s990);
                return $tmp991;
            }
            }
            return name982;
        }
        }
        else {
        panda$core$Bit $tmp992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp992.value) {
        {
            panda$core$String** $tmp994 = ((panda$core$String**) ((char*) $match$168_9303->$data + 16));
            name993 = *$tmp994;
            return name993;
        }
        }
        else {
        panda$core$Bit $tmp995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp995.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp997 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$168_9303->$data + 16));
            kind996 = *$tmp997;
            panda$collections$ImmutableArray** $tmp999 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 24));
            decls998 = *$tmp999;
            panda$core$MutableString* $tmp1001 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1001);
            result1000 = $tmp1001;
            {
                $match$395_171002 = kind996;
                panda$core$Bit $tmp1003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$395_171002.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp1003.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1000, &$s1004);
                }
                }
                else {
                panda$core$Bit $tmp1005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$395_171002.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp1005.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1000, &$s1006);
                }
                }
                else {
                panda$core$Bit $tmp1007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$395_171002.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp1007.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1000, &$s1008);
                }
                }
                else {
                panda$core$Bit $tmp1009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$395_171002.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp1009.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1000, &$s1010);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp1011 = panda$collections$ImmutableArray$join$R$panda$core$String(decls998);
            panda$core$MutableString$append$panda$core$String(result1000, $tmp1011);
            {
                panda$core$String* $tmp1013 = panda$core$MutableString$finish$R$panda$core$String(result1000);
                tmp131012 = $tmp1013;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1000));
                return tmp131012;
            }
        }
        }
        else {
        panda$core$Bit $tmp1014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1014.value) {
        {
            panda$collections$ImmutableArray** $tmp1016 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 16));
            tests1015 = *$tmp1016;
            panda$collections$ImmutableArray** $tmp1018 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 24));
            statements1017 = *$tmp1018;
            panda$core$MutableString* $tmp1020 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp1020, &$s1021);
            result1019 = $tmp1020;
            separator1022 = &$s1023;
            {
                ITable* $tmp1025 = ((panda$collections$Iterable*) tests1015)->$class->itable;
                while ($tmp1025->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1025 = $tmp1025->next;
                }
                $fn1027 $tmp1026 = $tmp1025->methods[0];
                panda$collections$Iterator* $tmp1028 = $tmp1026(((panda$collections$Iterable*) tests1015));
                Iter$406$171024 = $tmp1028;
                $l1029:;
                ITable* $tmp1031 = Iter$406$171024->$class->itable;
                while ($tmp1031->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1031 = $tmp1031->next;
                }
                $fn1033 $tmp1032 = $tmp1031->methods[0];
                panda$core$Bit $tmp1034 = $tmp1032(Iter$406$171024);
                panda$core$Bit $tmp1035 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1034);
                if (!$tmp1035.value) goto $l1030;
                {
                    ITable* $tmp1037 = Iter$406$171024->$class->itable;
                    while ($tmp1037->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1037 = $tmp1037->next;
                    }
                    $fn1039 $tmp1038 = $tmp1037->methods[1];
                    panda$core$Object* $tmp1040 = $tmp1038(Iter$406$171024);
                    t1036 = ((org$pandalanguage$pandac$ASTNode*) $tmp1040);
                    panda$core$String* $tmp1041 = panda$core$String$convert$R$panda$core$String(separator1022);
                    panda$core$String* $tmp1043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1041, &$s1042);
                    panda$core$String* $tmp1044 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1043, ((panda$core$Object*) t1036));
                    panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1044, &$s1045);
                    panda$core$MutableString$append$panda$core$String(result1019, $tmp1046);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1036));
                }
                goto $l1029;
                $l1030:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$406$171024));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1047, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result1019, $tmp1047);
            {
                ITable* $tmp1049 = ((panda$collections$Iterable*) statements1017)->$class->itable;
                while ($tmp1049->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1049 = $tmp1049->next;
                }
                $fn1051 $tmp1050 = $tmp1049->methods[0];
                panda$collections$Iterator* $tmp1052 = $tmp1050(((panda$collections$Iterable*) statements1017));
                Iter$410$171048 = $tmp1052;
                $l1053:;
                ITable* $tmp1055 = Iter$410$171048->$class->itable;
                while ($tmp1055->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1055 = $tmp1055->next;
                }
                $fn1057 $tmp1056 = $tmp1055->methods[0];
                panda$core$Bit $tmp1058 = $tmp1056(Iter$410$171048);
                panda$core$Bit $tmp1059 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1058);
                if (!$tmp1059.value) goto $l1054;
                {
                    ITable* $tmp1061 = Iter$410$171048->$class->itable;
                    while ($tmp1061->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1061 = $tmp1061->next;
                    }
                    $fn1063 $tmp1062 = $tmp1061->methods[1];
                    panda$core$Object* $tmp1064 = $tmp1062(Iter$410$171048);
                    s1060 = ((org$pandalanguage$pandac$ASTNode*) $tmp1064);
                    panda$core$String* $tmp1066 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1065, ((panda$core$Object*) s1060));
                    panda$core$MutableString$append$panda$core$String(result1019, $tmp1066);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1060));
                }
                goto $l1053;
                $l1054:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$410$171048));
            }
            {
                panda$core$String* $tmp1068 = panda$core$MutableString$finish$R$panda$core$String(result1019);
                tmp141067 = $tmp1068;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1022));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1019));
                }
                return tmp141067;
            }
        }
        }
        else {
        panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9303->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1069.value) {
        {
            panda$core$String** $tmp1071 = ((panda$core$String**) ((char*) $match$168_9303->$data + 16));
            label1070 = *$tmp1071;
            org$pandalanguage$pandac$ASTNode** $tmp1073 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9303->$data + 24));
            test1072 = *$tmp1073;
            panda$collections$ImmutableArray** $tmp1075 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9303->$data + 32));
            statements1074 = *$tmp1075;
            panda$core$MutableString* $tmp1077 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1077);
            result1076 = $tmp1077;
            if (((panda$core$Bit) { label1070 != NULL }).value) {
            {
                panda$core$String* $tmp1078 = panda$core$String$convert$R$panda$core$String(label1070);
                panda$core$String* $tmp1080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1078, &$s1079);
                panda$core$MutableString$append$panda$core$String(result1076, $tmp1080);
            }
            }
            panda$core$String* $tmp1082 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1081, ((panda$core$Object*) test1072));
            panda$core$String* $tmp1084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1082, &$s1083);
            panda$core$MutableString$append$panda$core$String(result1076, $tmp1084);
            {
                ITable* $tmp1086 = ((panda$collections$Iterable*) statements1074)->$class->itable;
                while ($tmp1086->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1086 = $tmp1086->next;
                }
                $fn1088 $tmp1087 = $tmp1086->methods[0];
                panda$collections$Iterator* $tmp1089 = $tmp1087(((panda$collections$Iterable*) statements1074));
                Iter$420$171085 = $tmp1089;
                $l1090:;
                ITable* $tmp1092 = Iter$420$171085->$class->itable;
                while ($tmp1092->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1092 = $tmp1092->next;
                }
                $fn1094 $tmp1093 = $tmp1092->methods[0];
                panda$core$Bit $tmp1095 = $tmp1093(Iter$420$171085);
                panda$core$Bit $tmp1096 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1095);
                if (!$tmp1096.value) goto $l1091;
                {
                    ITable* $tmp1098 = Iter$420$171085->$class->itable;
                    while ($tmp1098->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1098 = $tmp1098->next;
                    }
                    $fn1100 $tmp1099 = $tmp1098->methods[1];
                    panda$core$Object* $tmp1101 = $tmp1099(Iter$420$171085);
                    s1097 = ((org$pandalanguage$pandac$ASTNode*) $tmp1101);
                    panda$core$String* $tmp1103 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1097), &$s1102);
                    panda$core$MutableString$append$panda$core$String(result1076, $tmp1103);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1097));
                }
                goto $l1090;
                $l1091:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$420$171085));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1104, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1076, $tmp1104);
            {
                panda$core$String* $tmp1106 = panda$core$MutableString$finish$R$panda$core$String(result1076);
                tmp151105 = $tmp1106;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1076));
                return tmp151105;
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
    org$pandalanguage$pandac$ASTNode* $match$5_11107;
    org$pandalanguage$pandac$Position _f01109;
    panda$core$String* _f11111;
    org$pandalanguage$pandac$Position _f01114;
    org$pandalanguage$pandac$ASTNode* _f11116;
    org$pandalanguage$pandac$ASTNode* _f21118;
    org$pandalanguage$pandac$Position _f01121;
    org$pandalanguage$pandac$ASTNode* _f11123;
    org$pandalanguage$pandac$parser$Token$Kind _f21125;
    org$pandalanguage$pandac$ASTNode* _f31127;
    org$pandalanguage$pandac$Position _f01130;
    panda$core$Bit _f11132;
    org$pandalanguage$pandac$Position _f01135;
    panda$collections$ImmutableArray* _f11137;
    org$pandalanguage$pandac$Position _f01140;
    panda$core$String* _f11142;
    org$pandalanguage$pandac$Position _f01145;
    org$pandalanguage$pandac$ASTNode* _f11147;
    panda$collections$ImmutableArray* _f21149;
    org$pandalanguage$pandac$Position _f01152;
    org$pandalanguage$pandac$ASTNode* _f11154;
    panda$core$String* _f21156;
    panda$collections$ImmutableArray* _f31158;
    org$pandalanguage$pandac$Position _f01161;
    org$pandalanguage$pandac$ASTNode* _f11163;
    org$pandalanguage$pandac$ChoiceEntry* _f21165;
    panda$core$Int64 _f31167;
    org$pandalanguage$pandac$Position _f01170;
    org$pandalanguage$pandac$ASTNode* _f11172;
    panda$collections$ImmutableArray* _f21174;
    org$pandalanguage$pandac$ClassDecl$Kind _f31176;
    panda$core$String* _f41178;
    panda$collections$ImmutableArray* _f51180;
    panda$collections$ImmutableArray* _f61182;
    panda$collections$ImmutableArray* _f71184;
    org$pandalanguage$pandac$Position _f01187;
    panda$core$String* _f11189;
    org$pandalanguage$pandac$Position _f01192;
    org$pandalanguage$pandac$ASTNode* _f11194;
    org$pandalanguage$pandac$ASTNode* _f21196;
    org$pandalanguage$pandac$Position _f01199;
    panda$core$String* _f11201;
    panda$collections$ImmutableArray* _f21203;
    org$pandalanguage$pandac$ASTNode* _f31205;
    org$pandalanguage$pandac$Position _f01208;
    org$pandalanguage$pandac$ASTNode* _f11210;
    panda$core$String* _f21212;
    org$pandalanguage$pandac$Position _f01215;
    org$pandalanguage$pandac$ASTNode* _f11217;
    panda$collections$ImmutableArray* _f21219;
    org$pandalanguage$pandac$ASTNode* _f31221;
    panda$collections$ImmutableArray* _f01224;
    org$pandalanguage$pandac$Position _f01227;
    panda$core$String* _f11229;
    org$pandalanguage$pandac$ASTNode* _f21231;
    org$pandalanguage$pandac$ASTNode* _f31233;
    panda$collections$ImmutableArray* _f41235;
    org$pandalanguage$pandac$Position _f01238;
    panda$core$String* _f11240;
    panda$collections$ImmutableArray* _f21242;
    org$pandalanguage$pandac$Position _f01245;
    panda$core$String* _f11247;
    org$pandalanguage$pandac$Position _f01250;
    org$pandalanguage$pandac$ASTNode* _f11252;
    panda$collections$ImmutableArray* _f21254;
    org$pandalanguage$pandac$ASTNode* _f31256;
    org$pandalanguage$pandac$Position _f01259;
    panda$core$UInt64 _f11261;
    org$pandalanguage$pandac$IRNode* _f01264;
    org$pandalanguage$pandac$Position _f01267;
    panda$core$String* _f11269;
    panda$collections$ImmutableArray* _f21271;
    org$pandalanguage$pandac$Position _f01274;
    org$pandalanguage$pandac$ASTNode* _f11276;
    panda$collections$ImmutableArray* _f21278;
    panda$collections$ImmutableArray* _f31280;
    org$pandalanguage$pandac$Position _f01283;
    org$pandalanguage$pandac$ASTNode* _f11285;
    panda$collections$ImmutableArray* _f21287;
    org$pandalanguage$pandac$MethodDecl$Kind _f31289;
    panda$core$String* _f41291;
    panda$collections$ImmutableArray* _f51293;
    org$pandalanguage$pandac$ASTNode* _f61295;
    panda$collections$ImmutableArray* _f71297;
    org$pandalanguage$pandac$Position _f01300;
    org$pandalanguage$pandac$Position _f01303;
    org$pandalanguage$pandac$ASTNode* _f11305;
    org$pandalanguage$pandac$Position _f01308;
    panda$core$String* _f11310;
    org$pandalanguage$pandac$Position _f01313;
    panda$core$String* _f11315;
    org$pandalanguage$pandac$ASTNode* _f21317;
    org$pandalanguage$pandac$Position _f01320;
    org$pandalanguage$pandac$parser$Token$Kind _f11322;
    org$pandalanguage$pandac$ASTNode* _f21324;
    org$pandalanguage$pandac$Position _f01327;
    org$pandalanguage$pandac$ASTNode* _f11329;
    org$pandalanguage$pandac$ASTNode* _f21331;
    panda$core$Bit _f31333;
    org$pandalanguage$pandac$ASTNode* _f41335;
    org$pandalanguage$pandac$Position _f01338;
    panda$core$Real64 _f11340;
    org$pandalanguage$pandac$Position _f01343;
    org$pandalanguage$pandac$ASTNode* _f11345;
    org$pandalanguage$pandac$Position _f01348;
    org$pandalanguage$pandac$Position _f01351;
    panda$core$String* _f11353;
    org$pandalanguage$pandac$Position _f01356;
    org$pandalanguage$pandac$Position _f01359;
    panda$core$String* _f11361;
    org$pandalanguage$pandac$Position _f01364;
    panda$core$String* _f11366;
    org$pandalanguage$pandac$ASTNode* _f21368;
    org$pandalanguage$pandac$Position _f01371;
    panda$core$String* _f11373;
    org$pandalanguage$pandac$Position _f01376;
    org$pandalanguage$pandac$Variable$Kind _f11378;
    panda$collections$ImmutableArray* _f21380;
    org$pandalanguage$pandac$Position _f01383;
    panda$collections$ImmutableArray* _f11385;
    panda$collections$ImmutableArray* _f21387;
    org$pandalanguage$pandac$Position _f01390;
    panda$core$String* _f11392;
    org$pandalanguage$pandac$ASTNode* _f21394;
    panda$collections$ImmutableArray* _f31396;
    {
        $match$5_11107 = self;
        panda$core$Bit $tmp1108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1108.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1110 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01109 = *$tmp1110;
            panda$core$String** $tmp1112 = ((panda$core$String**) ((char*) $match$5_11107->$data + 16));
            _f11111 = *$tmp1112;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11111));
        }
        }
        else {
        panda$core$Bit $tmp1113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1113.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1115 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01114 = *$tmp1115;
            org$pandalanguage$pandac$ASTNode** $tmp1117 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 16));
            _f11116 = *$tmp1117;
            org$pandalanguage$pandac$ASTNode** $tmp1119 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 24));
            _f21118 = *$tmp1119;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11116));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21118));
        }
        }
        else {
        panda$core$Bit $tmp1120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1120.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1122 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01121 = *$tmp1122;
            org$pandalanguage$pandac$ASTNode** $tmp1124 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 16));
            _f11123 = *$tmp1124;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1126 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11107->$data + 24));
            _f21125 = *$tmp1126;
            org$pandalanguage$pandac$ASTNode** $tmp1128 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 32));
            _f31127 = *$tmp1128;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11123));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31127));
        }
        }
        else {
        panda$core$Bit $tmp1129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1129.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1131 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01130 = *$tmp1131;
            panda$core$Bit* $tmp1133 = ((panda$core$Bit*) ((char*) $match$5_11107->$data + 16));
            _f11132 = *$tmp1133;
        }
        }
        else {
        panda$core$Bit $tmp1134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1134.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1136 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01135 = *$tmp1136;
            panda$collections$ImmutableArray** $tmp1138 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 16));
            _f11137 = *$tmp1138;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11137));
        }
        }
        else {
        panda$core$Bit $tmp1139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1139.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1141 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01140 = *$tmp1141;
            panda$core$String** $tmp1143 = ((panda$core$String**) ((char*) $match$5_11107->$data + 16));
            _f11142 = *$tmp1143;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11142));
        }
        }
        else {
        panda$core$Bit $tmp1144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1144.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1146 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01145 = *$tmp1146;
            org$pandalanguage$pandac$ASTNode** $tmp1148 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 16));
            _f11147 = *$tmp1148;
            panda$collections$ImmutableArray** $tmp1150 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 24));
            _f21149 = *$tmp1150;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11147));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21149));
        }
        }
        else {
        panda$core$Bit $tmp1151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1151.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1153 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01152 = *$tmp1153;
            org$pandalanguage$pandac$ASTNode** $tmp1155 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 16));
            _f11154 = *$tmp1155;
            panda$core$String** $tmp1157 = ((panda$core$String**) ((char*) $match$5_11107->$data + 24));
            _f21156 = *$tmp1157;
            panda$collections$ImmutableArray** $tmp1159 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 32));
            _f31158 = *$tmp1159;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11154));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21156));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31158));
        }
        }
        else {
        panda$core$Bit $tmp1160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1160.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1162 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01161 = *$tmp1162;
            org$pandalanguage$pandac$ASTNode** $tmp1164 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 16));
            _f11163 = *$tmp1164;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1166 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11107->$data + 24));
            _f21165 = *$tmp1166;
            panda$core$Int64* $tmp1168 = ((panda$core$Int64*) ((char*) $match$5_11107->$data + 32));
            _f31167 = *$tmp1168;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21165));
        }
        }
        else {
        panda$core$Bit $tmp1169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1169.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01170 = *$tmp1171;
            org$pandalanguage$pandac$ASTNode** $tmp1173 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 16));
            _f11172 = *$tmp1173;
            panda$collections$ImmutableArray** $tmp1175 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 24));
            _f21174 = *$tmp1175;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1177 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_11107->$data + 32));
            _f31176 = *$tmp1177;
            panda$core$String** $tmp1179 = ((panda$core$String**) ((char*) $match$5_11107->$data + 40));
            _f41178 = *$tmp1179;
            panda$collections$ImmutableArray** $tmp1181 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 48));
            _f51180 = *$tmp1181;
            panda$collections$ImmutableArray** $tmp1183 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 56));
            _f61182 = *$tmp1183;
            panda$collections$ImmutableArray** $tmp1185 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 64));
            _f71184 = *$tmp1185;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11172));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21174));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41178));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51180));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61182));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71184));
        }
        }
        else {
        panda$core$Bit $tmp1186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1186.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1188 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01187 = *$tmp1188;
            panda$core$String** $tmp1190 = ((panda$core$String**) ((char*) $match$5_11107->$data + 16));
            _f11189 = *$tmp1190;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11189));
        }
        }
        else {
        panda$core$Bit $tmp1191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1191.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1193 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01192 = *$tmp1193;
            org$pandalanguage$pandac$ASTNode** $tmp1195 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 16));
            _f11194 = *$tmp1195;
            org$pandalanguage$pandac$ASTNode** $tmp1197 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 24));
            _f21196 = *$tmp1197;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11194));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21196));
        }
        }
        else {
        panda$core$Bit $tmp1198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1198.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1200 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01199 = *$tmp1200;
            panda$core$String** $tmp1202 = ((panda$core$String**) ((char*) $match$5_11107->$data + 16));
            _f11201 = *$tmp1202;
            panda$collections$ImmutableArray** $tmp1204 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 24));
            _f21203 = *$tmp1204;
            org$pandalanguage$pandac$ASTNode** $tmp1206 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 32));
            _f31205 = *$tmp1206;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11201));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21203));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31205));
        }
        }
        else {
        panda$core$Bit $tmp1207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1207.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1209 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01208 = *$tmp1209;
            org$pandalanguage$pandac$ASTNode** $tmp1211 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 16));
            _f11210 = *$tmp1211;
            panda$core$String** $tmp1213 = ((panda$core$String**) ((char*) $match$5_11107->$data + 24));
            _f21212 = *$tmp1213;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21212));
        }
        }
        else {
        panda$core$Bit $tmp1214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1214.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1216 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01215 = *$tmp1216;
            org$pandalanguage$pandac$ASTNode** $tmp1218 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 16));
            _f11217 = *$tmp1218;
            panda$collections$ImmutableArray** $tmp1220 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 24));
            _f21219 = *$tmp1220;
            org$pandalanguage$pandac$ASTNode** $tmp1222 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 32));
            _f31221 = *$tmp1222;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11217));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21219));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31221));
        }
        }
        else {
        panda$core$Bit $tmp1223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1223.value) {
        {
            panda$collections$ImmutableArray** $tmp1225 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 0));
            _f01224 = *$tmp1225;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01224));
        }
        }
        else {
        panda$core$Bit $tmp1226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1226.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1228 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01227 = *$tmp1228;
            panda$core$String** $tmp1230 = ((panda$core$String**) ((char*) $match$5_11107->$data + 16));
            _f11229 = *$tmp1230;
            org$pandalanguage$pandac$ASTNode** $tmp1232 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 24));
            _f21231 = *$tmp1232;
            org$pandalanguage$pandac$ASTNode** $tmp1234 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 32));
            _f31233 = *$tmp1234;
            panda$collections$ImmutableArray** $tmp1236 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 40));
            _f41235 = *$tmp1236;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11229));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21231));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31233));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41235));
        }
        }
        else {
        panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1237.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1239 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01238 = *$tmp1239;
            panda$core$String** $tmp1241 = ((panda$core$String**) ((char*) $match$5_11107->$data + 16));
            _f11240 = *$tmp1241;
            panda$collections$ImmutableArray** $tmp1243 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 24));
            _f21242 = *$tmp1243;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11240));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21242));
        }
        }
        else {
        panda$core$Bit $tmp1244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1244.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1246 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01245 = *$tmp1246;
            panda$core$String** $tmp1248 = ((panda$core$String**) ((char*) $match$5_11107->$data + 16));
            _f11247 = *$tmp1248;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11247));
        }
        }
        else {
        panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1249.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1251 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01250 = *$tmp1251;
            org$pandalanguage$pandac$ASTNode** $tmp1253 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 16));
            _f11252 = *$tmp1253;
            panda$collections$ImmutableArray** $tmp1255 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 24));
            _f21254 = *$tmp1255;
            org$pandalanguage$pandac$ASTNode** $tmp1257 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 32));
            _f31256 = *$tmp1257;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11252));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21254));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31256));
        }
        }
        else {
        panda$core$Bit $tmp1258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1258.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1260 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01259 = *$tmp1260;
            panda$core$UInt64* $tmp1262 = ((panda$core$UInt64*) ((char*) $match$5_11107->$data + 16));
            _f11261 = *$tmp1262;
        }
        }
        else {
        panda$core$Bit $tmp1263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1263.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1265 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11107->$data + 0));
            _f01264 = *$tmp1265;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01264));
        }
        }
        else {
        panda$core$Bit $tmp1266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1266.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1268 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01267 = *$tmp1268;
            panda$core$String** $tmp1270 = ((panda$core$String**) ((char*) $match$5_11107->$data + 16));
            _f11269 = *$tmp1270;
            panda$collections$ImmutableArray** $tmp1272 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 24));
            _f21271 = *$tmp1272;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11269));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21271));
        }
        }
        else {
        panda$core$Bit $tmp1273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1273.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1275 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01274 = *$tmp1275;
            org$pandalanguage$pandac$ASTNode** $tmp1277 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 16));
            _f11276 = *$tmp1277;
            panda$collections$ImmutableArray** $tmp1279 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 24));
            _f21278 = *$tmp1279;
            panda$collections$ImmutableArray** $tmp1281 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 32));
            _f31280 = *$tmp1281;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11276));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21278));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31280));
        }
        }
        else {
        panda$core$Bit $tmp1282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1282.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1284 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01283 = *$tmp1284;
            org$pandalanguage$pandac$ASTNode** $tmp1286 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 16));
            _f11285 = *$tmp1286;
            panda$collections$ImmutableArray** $tmp1288 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 24));
            _f21287 = *$tmp1288;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1290 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_11107->$data + 32));
            _f31289 = *$tmp1290;
            panda$core$String** $tmp1292 = ((panda$core$String**) ((char*) $match$5_11107->$data + 40));
            _f41291 = *$tmp1292;
            panda$collections$ImmutableArray** $tmp1294 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 48));
            _f51293 = *$tmp1294;
            org$pandalanguage$pandac$ASTNode** $tmp1296 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 56));
            _f61295 = *$tmp1296;
            panda$collections$ImmutableArray** $tmp1298 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 64));
            _f71297 = *$tmp1298;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11285));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21287));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41291));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51293));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61295));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71297));
        }
        }
        else {
        panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1299.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1301 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01300 = *$tmp1301;
        }
        }
        else {
        panda$core$Bit $tmp1302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1302.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1304 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01303 = *$tmp1304;
            org$pandalanguage$pandac$ASTNode** $tmp1306 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 16));
            _f11305 = *$tmp1306;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11305));
        }
        }
        else {
        panda$core$Bit $tmp1307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1307.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1309 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01308 = *$tmp1309;
            panda$core$String** $tmp1311 = ((panda$core$String**) ((char*) $match$5_11107->$data + 16));
            _f11310 = *$tmp1311;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11310));
        }
        }
        else {
        panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1312.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1314 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01313 = *$tmp1314;
            panda$core$String** $tmp1316 = ((panda$core$String**) ((char*) $match$5_11107->$data + 16));
            _f11315 = *$tmp1316;
            org$pandalanguage$pandac$ASTNode** $tmp1318 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 24));
            _f21317 = *$tmp1318;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11315));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21317));
        }
        }
        else {
        panda$core$Bit $tmp1319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1319.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1321 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01320 = *$tmp1321;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1323 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11107->$data + 16));
            _f11322 = *$tmp1323;
            org$pandalanguage$pandac$ASTNode** $tmp1325 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 24));
            _f21324 = *$tmp1325;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21324));
        }
        }
        else {
        panda$core$Bit $tmp1326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1326.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1328 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01327 = *$tmp1328;
            org$pandalanguage$pandac$ASTNode** $tmp1330 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 16));
            _f11329 = *$tmp1330;
            org$pandalanguage$pandac$ASTNode** $tmp1332 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 24));
            _f21331 = *$tmp1332;
            panda$core$Bit* $tmp1334 = ((panda$core$Bit*) ((char*) $match$5_11107->$data + 32));
            _f31333 = *$tmp1334;
            org$pandalanguage$pandac$ASTNode** $tmp1336 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 33));
            _f41335 = *$tmp1336;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11329));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21331));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41335));
        }
        }
        else {
        panda$core$Bit $tmp1337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1337.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1339 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01338 = *$tmp1339;
            panda$core$Real64* $tmp1341 = ((panda$core$Real64*) ((char*) $match$5_11107->$data + 16));
            _f11340 = *$tmp1341;
        }
        }
        else {
        panda$core$Bit $tmp1342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1342.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1344 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01343 = *$tmp1344;
            org$pandalanguage$pandac$ASTNode** $tmp1346 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 16));
            _f11345 = *$tmp1346;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11345));
        }
        }
        else {
        panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1347.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1349 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01348 = *$tmp1349;
        }
        }
        else {
        panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1350.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1352 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01351 = *$tmp1352;
            panda$core$String** $tmp1354 = ((panda$core$String**) ((char*) $match$5_11107->$data + 16));
            _f11353 = *$tmp1354;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11353));
        }
        }
        else {
        panda$core$Bit $tmp1355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1355.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1357 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01356 = *$tmp1357;
        }
        }
        else {
        panda$core$Bit $tmp1358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1358.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1360 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01359 = *$tmp1360;
            panda$core$String** $tmp1362 = ((panda$core$String**) ((char*) $match$5_11107->$data + 16));
            _f11361 = *$tmp1362;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11361));
        }
        }
        else {
        panda$core$Bit $tmp1363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1363.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1365 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01364 = *$tmp1365;
            panda$core$String** $tmp1367 = ((panda$core$String**) ((char*) $match$5_11107->$data + 16));
            _f11366 = *$tmp1367;
            org$pandalanguage$pandac$ASTNode** $tmp1369 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 24));
            _f21368 = *$tmp1369;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11366));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21368));
        }
        }
        else {
        panda$core$Bit $tmp1370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1370.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1372 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01371 = *$tmp1372;
            panda$core$String** $tmp1374 = ((panda$core$String**) ((char*) $match$5_11107->$data + 16));
            _f11373 = *$tmp1374;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11373));
        }
        }
        else {
        panda$core$Bit $tmp1375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1375.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1377 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01376 = *$tmp1377;
            org$pandalanguage$pandac$Variable$Kind* $tmp1379 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11107->$data + 16));
            _f11378 = *$tmp1379;
            panda$collections$ImmutableArray** $tmp1381 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 24));
            _f21380 = *$tmp1381;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21380));
        }
        }
        else {
        panda$core$Bit $tmp1382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1382.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1384 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01383 = *$tmp1384;
            panda$collections$ImmutableArray** $tmp1386 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 16));
            _f11385 = *$tmp1386;
            panda$collections$ImmutableArray** $tmp1388 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 24));
            _f21387 = *$tmp1388;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11385));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21387));
        }
        }
        else {
        panda$core$Bit $tmp1389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11107->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1389.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1391 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11107->$data + 0));
            _f01390 = *$tmp1391;
            panda$core$String** $tmp1393 = ((panda$core$String**) ((char*) $match$5_11107->$data + 16));
            _f11392 = *$tmp1393;
            org$pandalanguage$pandac$ASTNode** $tmp1395 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11107->$data + 24));
            _f21394 = *$tmp1395;
            panda$collections$ImmutableArray** $tmp1397 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11107->$data + 32));
            _f31396 = *$tmp1397;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11392));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21394));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31396));
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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

