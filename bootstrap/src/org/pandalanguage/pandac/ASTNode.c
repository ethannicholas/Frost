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
org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position} };

typedef panda$core$String* (*$fn258)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn282)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn288)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn294)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn314)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn349)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn382)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn388)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn394)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn419)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn425)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn431)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn451)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn458)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn476)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn482)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn488)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn503)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn524)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn530)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn536)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn550)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn556)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn562)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn591)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn597)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn603)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn641)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn647)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn653)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn682)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn688)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn694)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn717)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn723)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn729)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn760)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn766)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn772)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn797)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn803)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn809)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn843)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn950)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn956)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn962)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn974)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn980)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn986)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1011)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1017)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1023)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1004 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp62 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp62 = p_f0;
    {
        panda$core$String** $tmp63 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp63 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp64 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp64 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp65 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp65 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp66 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp66 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp67 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp67 = p_f2;
    }
    {
        panda$collections$ImmutableArray** $tmp68 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp68 = p_f3;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, org$pandalanguage$pandac$ASTNode* p_f6, panda$collections$ImmutableArray* p_f7) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp69 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp69 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp70 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp70 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp71 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp71 = p_f2;
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp72 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp72 = p_f3;
    {
        panda$core$String** $tmp73 = ((panda$core$String**) ((char*) self->$data + 40));
        *$tmp73 = p_f4;
    }
    {
        panda$collections$ImmutableArray** $tmp74 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        *$tmp74 = p_f5;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp75 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        *$tmp75 = p_f6;
    }
    {
        panda$collections$ImmutableArray** $tmp76 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        *$tmp76 = p_f7;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp77 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp77 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp78 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp78 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp79 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp79 = p_f1;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp80 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp80 = p_f0;
    {
        panda$core$String** $tmp81 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp81 = p_f1;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp82 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp82 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp83 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp83 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp84 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp84 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp85 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp85 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp86 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp86 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp87 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp87 = p_f1;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp88 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp88 = p_f2;
    }
    panda$core$Bit* $tmp89 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp89 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp90 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        *$tmp90 = p_f4;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp91 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp91 = p_f0;
    panda$core$Real64* $tmp92 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp92 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp93 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp93 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp94 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        *$tmp94 = p_f1;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp95 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp95 = p_f0;
    {
        panda$core$String** $tmp96 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp96 = p_f1;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp97 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp97 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp98 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp98 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp99 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp99 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp100 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp100 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp101 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp101 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp102 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        *$tmp102 = p_f1;
    }
    {
        panda$collections$ImmutableArray** $tmp103 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        *$tmp103 = p_f2;
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp104 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp104 = p_f0;
    {
        panda$core$String** $tmp105 = ((panda$core$String**) ((char*) self->$data + 16));
        *$tmp105 = p_f1;
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp106 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        *$tmp106 = p_f2;
    }
    {
        panda$collections$ImmutableArray** $tmp107 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        *$tmp107 = p_f3;
    }
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$76_9108;
    org$pandalanguage$pandac$Position position110;
    org$pandalanguage$pandac$Position position113;
    org$pandalanguage$pandac$Position position116;
    org$pandalanguage$pandac$Position position119;
    org$pandalanguage$pandac$Position position122;
    org$pandalanguage$pandac$Position position125;
    org$pandalanguage$pandac$Position position128;
    org$pandalanguage$pandac$Position position131;
    org$pandalanguage$pandac$Position position134;
    org$pandalanguage$pandac$Position position137;
    org$pandalanguage$pandac$Position position140;
    org$pandalanguage$pandac$Position position143;
    org$pandalanguage$pandac$Position position146;
    org$pandalanguage$pandac$Position position149;
    org$pandalanguage$pandac$Position position152;
    org$pandalanguage$pandac$Position $tmp155;
    org$pandalanguage$pandac$Position position157;
    org$pandalanguage$pandac$Position position160;
    org$pandalanguage$pandac$Position position163;
    org$pandalanguage$pandac$Position position166;
    org$pandalanguage$pandac$Position position169;
    org$pandalanguage$pandac$Position position172;
    org$pandalanguage$pandac$Position position175;
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
    {
        $match$76_9108 = self;
        panda$core$Bit $tmp109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp109.value) {
        {
            org$pandalanguage$pandac$Position* $tmp111 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position110 = *$tmp111;
            return position110;
        }
        }
        else {
        panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp112.value) {
        {
            org$pandalanguage$pandac$Position* $tmp114 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position113 = *$tmp114;
            return position113;
        }
        }
        else {
        panda$core$Bit $tmp115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp115.value) {
        {
            org$pandalanguage$pandac$Position* $tmp117 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position116 = *$tmp117;
            return position116;
        }
        }
        else {
        panda$core$Bit $tmp118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp118.value) {
        {
            org$pandalanguage$pandac$Position* $tmp120 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position119 = *$tmp120;
            return position119;
        }
        }
        else {
        panda$core$Bit $tmp121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp121.value) {
        {
            org$pandalanguage$pandac$Position* $tmp123 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position122 = *$tmp123;
            return position122;
        }
        }
        else {
        panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp124.value) {
        {
            org$pandalanguage$pandac$Position* $tmp126 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position125 = *$tmp126;
            return position125;
        }
        }
        else {
        panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp127.value) {
        {
            org$pandalanguage$pandac$Position* $tmp129 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position128 = *$tmp129;
            return position128;
        }
        }
        else {
        panda$core$Bit $tmp130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp130.value) {
        {
            org$pandalanguage$pandac$Position* $tmp132 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position131 = *$tmp132;
            return position131;
        }
        }
        else {
        panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp133.value) {
        {
            org$pandalanguage$pandac$Position* $tmp135 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position134 = *$tmp135;
            return position134;
        }
        }
        else {
        panda$core$Bit $tmp136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp136.value) {
        {
            org$pandalanguage$pandac$Position* $tmp138 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position137 = *$tmp138;
            return position137;
        }
        }
        else {
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp139.value) {
        {
            org$pandalanguage$pandac$Position* $tmp141 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position140 = *$tmp141;
            return position140;
        }
        }
        else {
        panda$core$Bit $tmp142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp142.value) {
        {
            org$pandalanguage$pandac$Position* $tmp144 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position143 = *$tmp144;
            return position143;
        }
        }
        else {
        panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp145.value) {
        {
            org$pandalanguage$pandac$Position* $tmp147 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position146 = *$tmp147;
            return position146;
        }
        }
        else {
        panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp148.value) {
        {
            org$pandalanguage$pandac$Position* $tmp150 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position149 = *$tmp150;
            return position149;
        }
        }
        else {
        panda$core$Bit $tmp151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp151.value) {
        {
            org$pandalanguage$pandac$Position* $tmp153 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position152 = *$tmp153;
            return position152;
        }
        }
        else {
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp154.value) {
        {
            org$pandalanguage$pandac$Position$init(&$tmp155);
            return $tmp155;
        }
        }
        else {
        panda$core$Bit $tmp156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp156.value) {
        {
            org$pandalanguage$pandac$Position* $tmp158 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position157 = *$tmp158;
            return position157;
        }
        }
        else {
        panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp159.value) {
        {
            org$pandalanguage$pandac$Position* $tmp161 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position160 = *$tmp161;
            return position160;
        }
        }
        else {
        panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp162.value) {
        {
            org$pandalanguage$pandac$Position* $tmp164 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position163 = *$tmp164;
            return position163;
        }
        }
        else {
        panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp165.value) {
        {
            org$pandalanguage$pandac$Position* $tmp167 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position166 = *$tmp167;
            return position166;
        }
        }
        else {
        panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp168.value) {
        {
            org$pandalanguage$pandac$Position* $tmp170 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position169 = *$tmp170;
            return position169;
        }
        }
        else {
        panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp171.value) {
        {
            org$pandalanguage$pandac$Position* $tmp173 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position172 = *$tmp173;
            return position172;
        }
        }
        else {
        panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp174.value) {
        {
            org$pandalanguage$pandac$Position* $tmp176 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position175 = *$tmp176;
            return position175;
        }
        }
        else {
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp177.value) {
        {
            org$pandalanguage$pandac$Position* $tmp179 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position178 = *$tmp179;
            return position178;
        }
        }
        else {
        panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp180.value) {
        {
            org$pandalanguage$pandac$Position* $tmp182 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position181 = *$tmp182;
            return position181;
        }
        }
        else {
        panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp183.value) {
        {
            org$pandalanguage$pandac$Position* $tmp185 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position184 = *$tmp185;
            return position184;
        }
        }
        else {
        panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp186.value) {
        {
            org$pandalanguage$pandac$Position* $tmp188 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position187 = *$tmp188;
            return position187;
        }
        }
        else {
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp189.value) {
        {
            org$pandalanguage$pandac$Position* $tmp191 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position190 = *$tmp191;
            return position190;
        }
        }
        else {
        panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp192.value) {
        {
            org$pandalanguage$pandac$Position* $tmp194 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position193 = *$tmp194;
            return position193;
        }
        }
        else {
        panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp195.value) {
        {
            org$pandalanguage$pandac$Position* $tmp197 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position196 = *$tmp197;
            return position196;
        }
        }
        else {
        panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp198.value) {
        {
            org$pandalanguage$pandac$Position* $tmp200 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position199 = *$tmp200;
            return position199;
        }
        }
        else {
        panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp201.value) {
        {
            org$pandalanguage$pandac$Position* $tmp203 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position202 = *$tmp203;
            return position202;
        }
        }
        else {
        panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp204.value) {
        {
            org$pandalanguage$pandac$Position* $tmp206 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position205 = *$tmp206;
            return position205;
        }
        }
        else {
        panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp207.value) {
        {
            org$pandalanguage$pandac$Position* $tmp209 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position208 = *$tmp209;
            return position208;
        }
        }
        else {
        panda$core$Bit $tmp210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp210.value) {
        {
            org$pandalanguage$pandac$Position* $tmp212 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position211 = *$tmp212;
            return position211;
        }
        }
        else {
        panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp213.value) {
        {
            org$pandalanguage$pandac$Position* $tmp215 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position214 = *$tmp215;
            return position214;
        }
        }
        else {
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp216.value) {
        {
            org$pandalanguage$pandac$Position* $tmp218 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position217 = *$tmp218;
            return position217;
        }
        }
        else {
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp219.value) {
        {
            org$pandalanguage$pandac$Position* $tmp221 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position220 = *$tmp221;
            return position220;
        }
        }
        else {
        panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp222.value) {
        {
            org$pandalanguage$pandac$Position* $tmp224 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position223 = *$tmp224;
            return position223;
        }
        }
        else {
        panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp225.value) {
        {
            org$pandalanguage$pandac$Position* $tmp227 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position226 = *$tmp227;
            return position226;
        }
        }
        else {
        panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9108->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp228.value) {
        {
            org$pandalanguage$pandac$Position* $tmp230 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9108->$data + 0));
            position229 = *$tmp230;
            return position229;
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
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$165_9231;
    panda$core$String* name233;
    org$pandalanguage$pandac$ASTNode* test236;
    org$pandalanguage$pandac$ASTNode* msg238;
    org$pandalanguage$pandac$ASTNode* left252;
    org$pandalanguage$pandac$parser$Token$Kind op254;
    org$pandalanguage$pandac$ASTNode* right256;
    panda$core$Bit value270;
    panda$collections$ImmutableArray* statements274;
    panda$core$MutableString* result276;
    panda$collections$Iterator* s$Iter279;
    org$pandalanguage$pandac$ASTNode* s291;
    panda$core$Char8 $tmp298;
    panda$core$String* tmp1299;
    panda$core$String* label302;
    org$pandalanguage$pandac$ASTNode* target310;
    panda$collections$ImmutableArray* args312;
    org$pandalanguage$pandac$ASTNode* dc323;
    panda$core$String* name325;
    panda$collections$ImmutableArray* fields327;
    panda$core$MutableString* result329;
    panda$core$String* tmp2340;
    org$pandalanguage$pandac$ASTNode* base343;
    org$pandalanguage$pandac$ChoiceEntry* ce345;
    panda$core$Int64 index347;
    org$pandalanguage$pandac$ASTNode* dc361;
    panda$collections$ImmutableArray* annotations363;
    org$pandalanguage$pandac$ClassDecl$Kind kind365;
    panda$core$String* name367;
    panda$collections$ImmutableArray* generics369;
    panda$collections$ImmutableArray* supertypes371;
    panda$collections$ImmutableArray* members373;
    panda$core$MutableString* result375;
    panda$collections$Iterator* a$Iter379;
    org$pandalanguage$pandac$ASTNode* a391;
    org$pandalanguage$pandac$ClassDecl$Kind $match$208_17398;
    panda$collections$Iterator* m$Iter416;
    org$pandalanguage$pandac$ASTNode* m428;
    panda$core$Char8 $tmp435;
    panda$core$String* tmp3436;
    panda$core$String* label439;
    org$pandalanguage$pandac$ASTNode* target447;
    org$pandalanguage$pandac$ASTNode* value449;
    panda$core$String* label461;
    panda$collections$ImmutableArray* statements463;
    org$pandalanguage$pandac$ASTNode* test465;
    panda$core$MutableString* result467;
    panda$collections$Iterator* s$Iter473;
    org$pandalanguage$pandac$ASTNode* s485;
    panda$core$String* tmp4496;
    org$pandalanguage$pandac$ASTNode* base499;
    panda$core$String* field501;
    org$pandalanguage$pandac$ASTNode* dc511;
    panda$collections$ImmutableArray* annotations513;
    org$pandalanguage$pandac$ASTNode* decl515;
    panda$core$MutableString* result517;
    panda$collections$Iterator* a$Iter521;
    org$pandalanguage$pandac$ASTNode* a533;
    panda$core$String* tmp5540;
    panda$collections$ImmutableArray* entries543;
    panda$core$MutableString* result545;
    panda$collections$Iterator* e$Iter547;
    org$pandalanguage$pandac$ASTNode* e559;
    panda$core$String* tmp6566;
    panda$core$String* label569;
    org$pandalanguage$pandac$ASTNode* target571;
    org$pandalanguage$pandac$ASTNode* list573;
    panda$collections$ImmutableArray* statements575;
    panda$core$MutableString* result577;
    panda$collections$Iterator* s$Iter588;
    org$pandalanguage$pandac$ASTNode* s600;
    panda$core$Char8 $tmp607;
    panda$core$String* tmp7608;
    panda$core$String* name611;
    panda$collections$ImmutableArray* subtypes613;
    panda$core$String* name623;
    org$pandalanguage$pandac$ASTNode* test626;
    panda$collections$ImmutableArray* ifTrue628;
    org$pandalanguage$pandac$ASTNode* ifFalse630;
    panda$core$MutableString* result632;
    panda$collections$Iterator* s$Iter638;
    org$pandalanguage$pandac$ASTNode* s650;
    panda$core$Char8 $tmp657;
    panda$core$String* tmp8662;
    panda$core$UInt64 value665;
    panda$core$String* label669;
    panda$collections$ImmutableArray* statements671;
    panda$core$MutableString* result673;
    panda$collections$Iterator* s$Iter679;
    org$pandalanguage$pandac$ASTNode* s691;
    panda$core$Char8 $tmp698;
    panda$core$String* tmp9699;
    org$pandalanguage$pandac$ASTNode* value702;
    panda$collections$ImmutableArray* whens704;
    panda$collections$ImmutableArray* other706;
    panda$core$MutableString* result708;
    panda$collections$Iterator* w$Iter714;
    org$pandalanguage$pandac$ASTNode* w726;
    panda$core$Char8 $tmp735;
    panda$core$String* tmp10736;
    org$pandalanguage$pandac$ASTNode* dc739;
    panda$collections$ImmutableArray* annotations741;
    org$pandalanguage$pandac$MethodDecl$Kind kind743;
    panda$core$String* name745;
    panda$collections$ImmutableArray* parameters747;
    org$pandalanguage$pandac$ASTNode* returnType749;
    panda$collections$ImmutableArray* statements751;
    panda$core$MutableString* result753;
    panda$collections$Iterator* a$Iter757;
    org$pandalanguage$pandac$ASTNode* a769;
    org$pandalanguage$pandac$MethodDecl$Kind $match$321_17776;
    panda$collections$Iterator* s$Iter794;
    org$pandalanguage$pandac$ASTNode* s806;
    panda$core$Char8 $tmp813;
    panda$core$String* tmp11814;
    org$pandalanguage$pandac$ASTNode* base819;
    panda$core$String* name824;
    panda$core$String* name827;
    org$pandalanguage$pandac$ASTNode* type829;
    org$pandalanguage$pandac$parser$Token$Kind kind838;
    org$pandalanguage$pandac$ASTNode* base840;
    org$pandalanguage$pandac$ASTNode* start851;
    org$pandalanguage$pandac$ASTNode* end853;
    panda$core$Bit inclusive855;
    org$pandalanguage$pandac$ASTNode* step857;
    panda$core$MutableString* result859;
    panda$core$String* tmp12880;
    panda$core$Real64 value883;
    org$pandalanguage$pandac$ASTNode* value887;
    panda$core$String* str897;
    panda$core$String* name902;
    panda$core$String* name905;
    org$pandalanguage$pandac$ASTNode* type907;
    panda$core$String* name916;
    org$pandalanguage$pandac$Variable$Kind kind919;
    panda$collections$ImmutableArray* decls921;
    panda$core$MutableString* result923;
    org$pandalanguage$pandac$Variable$Kind $match$390_17925;
    panda$core$String* tmp13935;
    panda$collections$ImmutableArray* tests938;
    panda$collections$ImmutableArray* statements940;
    panda$core$MutableString* result942;
    panda$core$String* separator945;
    panda$collections$Iterator* t$Iter947;
    org$pandalanguage$pandac$ASTNode* t959;
    panda$core$Char8 $tmp970;
    panda$collections$Iterator* s$Iter971;
    org$pandalanguage$pandac$ASTNode* s983;
    panda$core$String* tmp14990;
    panda$core$String* label993;
    org$pandalanguage$pandac$ASTNode* test995;
    panda$collections$ImmutableArray* statements997;
    panda$core$MutableString* result999;
    panda$collections$Iterator* s$Iter1008;
    org$pandalanguage$pandac$ASTNode* s1020;
    panda$core$Char8 $tmp1027;
    panda$core$String* tmp151028;
    {
        $match$165_9231 = self;
        panda$core$Bit $tmp232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp232.value) {
        {
            panda$core$String** $tmp234 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            name233 = *$tmp234;
            return name233;
        }
        }
        else {
        panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp235.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp237 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            test236 = *$tmp237;
            org$pandalanguage$pandac$ASTNode** $tmp239 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 24));
            msg238 = *$tmp239;
            if (((panda$core$Bit) { msg238 == NULL }).value) {
            {
                panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s240, ((panda$core$Object*) test236));
                panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp241, &$s242);
                return $tmp243;
            }
            }
            panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s244, ((panda$core$Object*) test236));
            panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp245, &$s246);
            panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp247, ((panda$core$Object*) msg238));
            panda$core$String* $tmp250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp248, &$s249);
            return $tmp250;
        }
        }
        else {
        panda$core$Bit $tmp251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp251.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp253 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            left252 = *$tmp253;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp255 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$165_9231->$data + 24));
            op254 = *$tmp255;
            org$pandalanguage$pandac$ASTNode** $tmp257 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 32));
            right256 = *$tmp257;
            panda$core$String* $tmp259 = (($fn258) left252->$class->vtable[0])(left252);
            panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp259, &$s260);
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp262;
            $tmp262 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp262->value = op254;
            panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp261, ((panda$core$Object*) $tmp262));
            panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp263, &$s264);
            panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp265, ((panda$core$Object*) right256));
            panda$core$String* $tmp268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp266, &$s267);
            return $tmp268;
        }
        }
        else {
        panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp269.value) {
        {
            panda$core$Bit* $tmp271 = ((panda$core$Bit*) ((char*) $match$165_9231->$data + 16));
            value270 = *$tmp271;
            panda$core$String* $tmp272 = panda$core$Bit$convert$R$panda$core$String(value270);
            return $tmp272;
        }
        }
        else {
        panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp273.value) {
        {
            panda$collections$ImmutableArray** $tmp275 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 16));
            statements274 = *$tmp275;
            panda$core$MutableString* $tmp277 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp277, &$s278);
            result276 = $tmp277;
            {
                ITable* $tmp280 = ((panda$collections$Iterable*) statements274)->$class->itable;
                while ($tmp280->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp280 = $tmp280->next;
                }
                $fn282 $tmp281 = $tmp280->methods[0];
                panda$collections$Iterator* $tmp283 = $tmp281(((panda$collections$Iterable*) statements274));
                s$Iter279 = $tmp283;
                $l284:;
                ITable* $tmp286 = s$Iter279->$class->itable;
                while ($tmp286->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp286 = $tmp286->next;
                }
                $fn288 $tmp287 = $tmp286->methods[0];
                panda$core$Bit $tmp289 = $tmp287(s$Iter279);
                panda$core$Bit $tmp290 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp289);
                if (!$tmp290.value) goto $l285;
                {
                    ITable* $tmp292 = s$Iter279->$class->itable;
                    while ($tmp292->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp292 = $tmp292->next;
                    }
                    $fn294 $tmp293 = $tmp292->methods[1];
                    panda$core$Object* $tmp295 = $tmp293(s$Iter279);
                    s291 = ((org$pandalanguage$pandac$ASTNode*) $tmp295);
                    panda$core$String* $tmp297 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s291), &$s296);
                    panda$core$MutableString$append$panda$core$String(result276, $tmp297);
                }
                goto $l284;
                $l285:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp283));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp298, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result276, $tmp298);
            {
                panda$core$String* $tmp300 = panda$core$MutableString$finish$R$panda$core$String(result276);
                tmp1299 = $tmp300;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result276));
                return tmp1299;
            }
        }
        }
        else {
        panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp301.value) {
        {
            panda$core$String** $tmp303 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            label302 = *$tmp303;
            if (((panda$core$Bit) { label302 != NULL }).value) {
            {
                panda$core$String* $tmp305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s304, label302);
                panda$core$String* $tmp307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp305, &$s306);
                return $tmp307;
            }
            }
            return &$s308;
        }
        }
        else {
        panda$core$Bit $tmp309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp309.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp311 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            target310 = *$tmp311;
            panda$collections$ImmutableArray** $tmp313 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            args312 = *$tmp313;
            panda$core$String* $tmp315 = (($fn314) target310->$class->vtable[0])(target310);
            panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s316);
            panda$core$String* $tmp318 = panda$collections$ImmutableArray$join$R$panda$core$String(args312);
            panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp317, $tmp318);
            panda$core$String* $tmp321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp319, &$s320);
            return $tmp321;
        }
        }
        else {
        panda$core$Bit $tmp322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp322.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp324 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            dc323 = *$tmp324;
            panda$core$String** $tmp326 = ((panda$core$String**) ((char*) $match$165_9231->$data + 24));
            name325 = *$tmp326;
            panda$collections$ImmutableArray** $tmp328 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 32));
            fields327 = *$tmp328;
            panda$core$MutableString* $tmp330 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp330);
            result329 = $tmp330;
            if (((panda$core$Bit) { dc323 != NULL }).value) {
            {
                panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc323), &$s331);
                panda$core$MutableString$append$panda$core$String(result329, $tmp332);
            }
            }
            panda$core$String* $tmp333 = panda$core$String$convert$R$panda$core$String(name325);
            panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, &$s334);
            panda$core$String* $tmp336 = panda$collections$ImmutableArray$join$R$panda$core$String(fields327);
            panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp335, $tmp336);
            panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp337, &$s338);
            panda$core$MutableString$append$panda$core$String(result329, $tmp339);
            {
                panda$core$String* $tmp341 = panda$core$MutableString$finish$R$panda$core$String(result329);
                tmp2340 = $tmp341;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result329));
                return tmp2340;
            }
        }
        }
        else {
        panda$core$Bit $tmp342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp342.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp344 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            base343 = *$tmp344;
            org$pandalanguage$pandac$ChoiceEntry** $tmp346 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$165_9231->$data + 24));
            ce345 = *$tmp346;
            panda$core$Int64* $tmp348 = ((panda$core$Int64*) ((char*) $match$165_9231->$data + 32));
            index347 = *$tmp348;
            panda$core$String* $tmp350 = (($fn349) base343->$class->vtable[0])(base343);
            panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp350, &$s351);
            panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp352, ((panda$core$Object*) ce345));
            panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp353, &$s354);
            panda$core$Int64$wrapper* $tmp356;
            $tmp356 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp356->value = index347;
            panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp355, ((panda$core$Object*) $tmp356));
            panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp357, &$s358);
            return $tmp359;
        }
        }
        else {
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp360.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp362 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            dc361 = *$tmp362;
            panda$collections$ImmutableArray** $tmp364 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            annotations363 = *$tmp364;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp366 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$165_9231->$data + 32));
            kind365 = *$tmp366;
            panda$core$String** $tmp368 = ((panda$core$String**) ((char*) $match$165_9231->$data + 40));
            name367 = *$tmp368;
            panda$collections$ImmutableArray** $tmp370 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 48));
            generics369 = *$tmp370;
            panda$collections$ImmutableArray** $tmp372 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 56));
            supertypes371 = *$tmp372;
            panda$collections$ImmutableArray** $tmp374 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 64));
            members373 = *$tmp374;
            panda$core$MutableString* $tmp376 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp376);
            result375 = $tmp376;
            if (((panda$core$Bit) { dc361 != NULL }).value) {
            {
                panda$core$String* $tmp378 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc361), &$s377);
                panda$core$MutableString$append$panda$core$String(result375, $tmp378);
            }
            }
            {
                ITable* $tmp380 = ((panda$collections$Iterable*) annotations363)->$class->itable;
                while ($tmp380->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp380 = $tmp380->next;
                }
                $fn382 $tmp381 = $tmp380->methods[0];
                panda$collections$Iterator* $tmp383 = $tmp381(((panda$collections$Iterable*) annotations363));
                a$Iter379 = $tmp383;
                $l384:;
                ITable* $tmp386 = a$Iter379->$class->itable;
                while ($tmp386->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp386 = $tmp386->next;
                }
                $fn388 $tmp387 = $tmp386->methods[0];
                panda$core$Bit $tmp389 = $tmp387(a$Iter379);
                panda$core$Bit $tmp390 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp389);
                if (!$tmp390.value) goto $l385;
                {
                    ITable* $tmp392 = a$Iter379->$class->itable;
                    while ($tmp392->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp392 = $tmp392->next;
                    }
                    $fn394 $tmp393 = $tmp392->methods[1];
                    panda$core$Object* $tmp395 = $tmp393(a$Iter379);
                    a391 = ((org$pandalanguage$pandac$ASTNode*) $tmp395);
                    panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a391), &$s396);
                    panda$core$MutableString$append$panda$core$String(result375, $tmp397);
                }
                goto $l384;
                $l385:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp383));
            }
            {
                $match$208_17398 = kind365;
                panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17398.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp399.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result375, &$s400);
                }
                }
                else {
                panda$core$Bit $tmp401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17398.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp401.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result375, &$s402);
                }
                }
                else {
                panda$core$Bit $tmp403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17398.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp403.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result375, &$s404);
                }
                }
                }
                }
            }
            panda$core$MutableString$append$panda$core$String(result375, name367);
            if (((panda$core$Bit) { generics369 != NULL }).value) {
            {
                panda$core$String* $tmp406 = panda$collections$ImmutableArray$join$R$panda$core$String(generics369);
                panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s405, $tmp406);
                panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp407, &$s408);
                panda$core$MutableString$append$panda$core$String(result375, $tmp409);
            }
            }
            if (((panda$core$Bit) { supertypes371 != NULL }).value) {
            {
                panda$core$String* $tmp411 = panda$collections$ImmutableArray$join$R$panda$core$String(supertypes371);
                panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s410, $tmp411);
                panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp412, &$s413);
                panda$core$MutableString$append$panda$core$String(result375, $tmp414);
            }
            }
            panda$core$MutableString$append$panda$core$String(result375, &$s415);
            {
                ITable* $tmp417 = ((panda$collections$Iterable*) members373)->$class->itable;
                while ($tmp417->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp417 = $tmp417->next;
                }
                $fn419 $tmp418 = $tmp417->methods[0];
                panda$collections$Iterator* $tmp420 = $tmp418(((panda$collections$Iterable*) members373));
                m$Iter416 = $tmp420;
                $l421:;
                ITable* $tmp423 = m$Iter416->$class->itable;
                while ($tmp423->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp423 = $tmp423->next;
                }
                $fn425 $tmp424 = $tmp423->methods[0];
                panda$core$Bit $tmp426 = $tmp424(m$Iter416);
                panda$core$Bit $tmp427 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp426);
                if (!$tmp427.value) goto $l422;
                {
                    ITable* $tmp429 = m$Iter416->$class->itable;
                    while ($tmp429->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp429 = $tmp429->next;
                    }
                    $fn431 $tmp430 = $tmp429->methods[1];
                    panda$core$Object* $tmp432 = $tmp430(m$Iter416);
                    m428 = ((org$pandalanguage$pandac$ASTNode*) $tmp432);
                    panda$core$String* $tmp434 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m428), &$s433);
                    panda$core$MutableString$append$panda$core$String(result375, $tmp434);
                }
                goto $l421;
                $l422:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp435, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result375, $tmp435);
            {
                panda$core$String* $tmp437 = panda$core$MutableString$finish$R$panda$core$String(result375);
                tmp3436 = $tmp437;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result375));
                return tmp3436;
            }
        }
        }
        else {
        panda$core$Bit $tmp438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp438.value) {
        {
            panda$core$String** $tmp440 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            label439 = *$tmp440;
            if (((panda$core$Bit) { label439 != NULL }).value) {
            {
                panda$core$String* $tmp442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s441, label439);
                panda$core$String* $tmp444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp442, &$s443);
                return $tmp444;
            }
            }
            return &$s445;
        }
        }
        else {
        panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp446.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp448 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            target447 = *$tmp448;
            org$pandalanguage$pandac$ASTNode** $tmp450 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 24));
            value449 = *$tmp450;
            if (((panda$core$Bit) { value449 != NULL }).value) {
            {
                panda$core$String* $tmp452 = (($fn451) target447->$class->vtable[0])(target447);
                panda$core$String* $tmp454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp452, &$s453);
                panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp454, ((panda$core$Object*) value449));
                panda$core$String* $tmp457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp455, &$s456);
                return $tmp457;
            }
            }
            panda$core$String* $tmp459 = (($fn458) target447->$class->vtable[0])(target447);
            return $tmp459;
        }
        }
        else {
        panda$core$Bit $tmp460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp460.value) {
        {
            panda$core$String** $tmp462 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            label461 = *$tmp462;
            panda$collections$ImmutableArray** $tmp464 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            statements463 = *$tmp464;
            org$pandalanguage$pandac$ASTNode** $tmp466 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 32));
            test465 = *$tmp466;
            panda$core$MutableString* $tmp468 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp468);
            result467 = $tmp468;
            if (((panda$core$Bit) { label461 != NULL }).value) {
            {
                panda$core$String* $tmp469 = panda$core$String$convert$R$panda$core$String(label461);
                panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp469, &$s470);
                panda$core$MutableString$append$panda$core$String(result467, $tmp471);
            }
            }
            panda$core$MutableString$append$panda$core$String(result467, &$s472);
            {
                ITable* $tmp474 = ((panda$collections$Iterable*) statements463)->$class->itable;
                while ($tmp474->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp474 = $tmp474->next;
                }
                $fn476 $tmp475 = $tmp474->methods[0];
                panda$collections$Iterator* $tmp477 = $tmp475(((panda$collections$Iterable*) statements463));
                s$Iter473 = $tmp477;
                $l478:;
                ITable* $tmp480 = s$Iter473->$class->itable;
                while ($tmp480->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp480 = $tmp480->next;
                }
                $fn482 $tmp481 = $tmp480->methods[0];
                panda$core$Bit $tmp483 = $tmp481(s$Iter473);
                panda$core$Bit $tmp484 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp483);
                if (!$tmp484.value) goto $l479;
                {
                    ITable* $tmp486 = s$Iter473->$class->itable;
                    while ($tmp486->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp486 = $tmp486->next;
                    }
                    $fn488 $tmp487 = $tmp486->methods[1];
                    panda$core$Object* $tmp489 = $tmp487(s$Iter473);
                    s485 = ((org$pandalanguage$pandac$ASTNode*) $tmp489);
                    panda$core$String* $tmp491 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s485), &$s490);
                    panda$core$MutableString$append$panda$core$String(result467, $tmp491);
                }
                goto $l478;
                $l479:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp477));
            }
            panda$core$String* $tmp493 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s492, ((panda$core$Object*) test465));
            panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp493, &$s494);
            panda$core$MutableString$append$panda$core$String(result467, $tmp495);
            {
                panda$core$String* $tmp497 = panda$core$MutableString$finish$R$panda$core$String(result467);
                tmp4496 = $tmp497;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result467));
                return tmp4496;
            }
        }
        }
        else {
        panda$core$Bit $tmp498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp498.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp500 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            base499 = *$tmp500;
            panda$core$String** $tmp502 = ((panda$core$String**) ((char*) $match$165_9231->$data + 24));
            field501 = *$tmp502;
            panda$core$String* $tmp504 = (($fn503) base499->$class->vtable[0])(base499);
            panda$core$String* $tmp506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp504, &$s505);
            panda$core$String* $tmp507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp506, field501);
            panda$core$String* $tmp509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp507, &$s508);
            return $tmp509;
        }
        }
        else {
        panda$core$Bit $tmp510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp510.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp512 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            dc511 = *$tmp512;
            panda$collections$ImmutableArray** $tmp514 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            annotations513 = *$tmp514;
            org$pandalanguage$pandac$ASTNode** $tmp516 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 32));
            decl515 = *$tmp516;
            panda$core$MutableString* $tmp518 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp518);
            result517 = $tmp518;
            if (((panda$core$Bit) { dc511 != NULL }).value) {
            {
                panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc511), &$s519);
                panda$core$MutableString$append$panda$core$String(result517, $tmp520);
            }
            }
            {
                ITable* $tmp522 = ((panda$collections$Iterable*) annotations513)->$class->itable;
                while ($tmp522->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp522 = $tmp522->next;
                }
                $fn524 $tmp523 = $tmp522->methods[0];
                panda$collections$Iterator* $tmp525 = $tmp523(((panda$collections$Iterable*) annotations513));
                a$Iter521 = $tmp525;
                $l526:;
                ITable* $tmp528 = a$Iter521->$class->itable;
                while ($tmp528->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp528 = $tmp528->next;
                }
                $fn530 $tmp529 = $tmp528->methods[0];
                panda$core$Bit $tmp531 = $tmp529(a$Iter521);
                panda$core$Bit $tmp532 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp531);
                if (!$tmp532.value) goto $l527;
                {
                    ITable* $tmp534 = a$Iter521->$class->itable;
                    while ($tmp534->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp534 = $tmp534->next;
                    }
                    $fn536 $tmp535 = $tmp534->methods[1];
                    panda$core$Object* $tmp537 = $tmp535(a$Iter521);
                    a533 = ((org$pandalanguage$pandac$ASTNode*) $tmp537);
                    panda$core$String* $tmp539 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a533), &$s538);
                    panda$core$MutableString$append$panda$core$String(result517, $tmp539);
                }
                goto $l526;
                $l527:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp525));
            }
            panda$core$MutableString$append$panda$core$Object(result517, ((panda$core$Object*) decl515));
            {
                panda$core$String* $tmp541 = panda$core$MutableString$finish$R$panda$core$String(result517);
                tmp5540 = $tmp541;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result517));
                return tmp5540;
            }
        }
        }
        else {
        panda$core$Bit $tmp542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp542.value) {
        {
            panda$collections$ImmutableArray** $tmp544 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 0));
            entries543 = *$tmp544;
            panda$core$MutableString* $tmp546 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp546);
            result545 = $tmp546;
            {
                ITable* $tmp548 = ((panda$collections$Iterable*) entries543)->$class->itable;
                while ($tmp548->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp548 = $tmp548->next;
                }
                $fn550 $tmp549 = $tmp548->methods[0];
                panda$collections$Iterator* $tmp551 = $tmp549(((panda$collections$Iterable*) entries543));
                e$Iter547 = $tmp551;
                $l552:;
                ITable* $tmp554 = e$Iter547->$class->itable;
                while ($tmp554->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp554 = $tmp554->next;
                }
                $fn556 $tmp555 = $tmp554->methods[0];
                panda$core$Bit $tmp557 = $tmp555(e$Iter547);
                panda$core$Bit $tmp558 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp557);
                if (!$tmp558.value) goto $l553;
                {
                    ITable* $tmp560 = e$Iter547->$class->itable;
                    while ($tmp560->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp560 = $tmp560->next;
                    }
                    $fn562 $tmp561 = $tmp560->methods[1];
                    panda$core$Object* $tmp563 = $tmp561(e$Iter547);
                    e559 = ((org$pandalanguage$pandac$ASTNode*) $tmp563);
                    panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e559), &$s564);
                    panda$core$MutableString$append$panda$core$String(result545, $tmp565);
                }
                goto $l552;
                $l553:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp551));
            }
            {
                panda$core$String* $tmp567 = panda$core$MutableString$finish$R$panda$core$String(result545);
                tmp6566 = $tmp567;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result545));
                return tmp6566;
            }
        }
        }
        else {
        panda$core$Bit $tmp568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp568.value) {
        {
            panda$core$String** $tmp570 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            label569 = *$tmp570;
            org$pandalanguage$pandac$ASTNode** $tmp572 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 24));
            target571 = *$tmp572;
            org$pandalanguage$pandac$ASTNode** $tmp574 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 32));
            list573 = *$tmp574;
            panda$collections$ImmutableArray** $tmp576 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 40));
            statements575 = *$tmp576;
            panda$core$MutableString* $tmp578 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp578);
            result577 = $tmp578;
            if (((panda$core$Bit) { label569 != NULL }).value) {
            {
                panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label569, &$s579);
                panda$core$MutableString$append$panda$core$String(result577, $tmp580);
            }
            }
            panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s581, ((panda$core$Object*) target571));
            panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, &$s583);
            panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp584, ((panda$core$Object*) list573));
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, &$s586);
            panda$core$MutableString$append$panda$core$String(result577, $tmp587);
            {
                ITable* $tmp589 = ((panda$collections$Iterable*) statements575)->$class->itable;
                while ($tmp589->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp589 = $tmp589->next;
                }
                $fn591 $tmp590 = $tmp589->methods[0];
                panda$collections$Iterator* $tmp592 = $tmp590(((panda$collections$Iterable*) statements575));
                s$Iter588 = $tmp592;
                $l593:;
                ITable* $tmp595 = s$Iter588->$class->itable;
                while ($tmp595->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp595 = $tmp595->next;
                }
                $fn597 $tmp596 = $tmp595->methods[0];
                panda$core$Bit $tmp598 = $tmp596(s$Iter588);
                panda$core$Bit $tmp599 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp598);
                if (!$tmp599.value) goto $l594;
                {
                    ITable* $tmp601 = s$Iter588->$class->itable;
                    while ($tmp601->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp601 = $tmp601->next;
                    }
                    $fn603 $tmp602 = $tmp601->methods[1];
                    panda$core$Object* $tmp604 = $tmp602(s$Iter588);
                    s600 = ((org$pandalanguage$pandac$ASTNode*) $tmp604);
                    panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s600), &$s605);
                    panda$core$MutableString$append$panda$core$String(result577, $tmp606);
                }
                goto $l593;
                $l594:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp607, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result577, $tmp607);
            {
                panda$core$String* $tmp609 = panda$core$MutableString$finish$R$panda$core$String(result577);
                tmp7608 = $tmp609;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result577));
                return tmp7608;
            }
        }
        }
        else {
        panda$core$Bit $tmp610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp610.value) {
        {
            panda$core$String** $tmp612 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            name611 = *$tmp612;
            panda$collections$ImmutableArray** $tmp614 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            subtypes613 = *$tmp614;
            panda$core$String* $tmp615 = panda$core$String$convert$R$panda$core$String(name611);
            panda$core$String* $tmp617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp615, &$s616);
            panda$core$String* $tmp618 = panda$collections$ImmutableArray$join$R$panda$core$String(subtypes613);
            panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp617, $tmp618);
            panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp619, &$s620);
            return $tmp621;
        }
        }
        else {
        panda$core$Bit $tmp622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp622.value) {
        {
            panda$core$String** $tmp624 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            name623 = *$tmp624;
            return name623;
        }
        }
        else {
        panda$core$Bit $tmp625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp625.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp627 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            test626 = *$tmp627;
            panda$collections$ImmutableArray** $tmp629 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            ifTrue628 = *$tmp629;
            org$pandalanguage$pandac$ASTNode** $tmp631 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 32));
            ifFalse630 = *$tmp631;
            panda$core$MutableString* $tmp633 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp635 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s634, ((panda$core$Object*) test626));
            panda$core$String* $tmp637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp635, &$s636);
            panda$core$MutableString$init$panda$core$String($tmp633, $tmp637);
            result632 = $tmp633;
            {
                ITable* $tmp639 = ((panda$collections$Iterable*) ifTrue628)->$class->itable;
                while ($tmp639->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp639 = $tmp639->next;
                }
                $fn641 $tmp640 = $tmp639->methods[0];
                panda$collections$Iterator* $tmp642 = $tmp640(((panda$collections$Iterable*) ifTrue628));
                s$Iter638 = $tmp642;
                $l643:;
                ITable* $tmp645 = s$Iter638->$class->itable;
                while ($tmp645->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp645 = $tmp645->next;
                }
                $fn647 $tmp646 = $tmp645->methods[0];
                panda$core$Bit $tmp648 = $tmp646(s$Iter638);
                panda$core$Bit $tmp649 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp648);
                if (!$tmp649.value) goto $l644;
                {
                    ITable* $tmp651 = s$Iter638->$class->itable;
                    while ($tmp651->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp651 = $tmp651->next;
                    }
                    $fn653 $tmp652 = $tmp651->methods[1];
                    panda$core$Object* $tmp654 = $tmp652(s$Iter638);
                    s650 = ((org$pandalanguage$pandac$ASTNode*) $tmp654);
                    panda$core$String* $tmp656 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s650), &$s655);
                    panda$core$MutableString$append$panda$core$String(result632, $tmp656);
                }
                goto $l643;
                $l644:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp642));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp657, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result632, $tmp657);
            if (((panda$core$Bit) { ifFalse630 != NULL }).value) {
            {
                panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s658, ((panda$core$Object*) ifFalse630));
                panda$core$String* $tmp661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp659, &$s660);
                panda$core$MutableString$append$panda$core$String(result632, $tmp661);
            }
            }
            {
                panda$core$String* $tmp663 = panda$core$MutableString$finish$R$panda$core$String(result632);
                tmp8662 = $tmp663;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result632));
                return tmp8662;
            }
        }
        }
        else {
        panda$core$Bit $tmp664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp664.value) {
        {
            panda$core$UInt64* $tmp666 = ((panda$core$UInt64*) ((char*) $match$165_9231->$data + 16));
            value665 = *$tmp666;
            panda$core$String* $tmp667 = panda$core$UInt64$convert$R$panda$core$String(value665);
            return $tmp667;
        }
        }
        else {
        panda$core$Bit $tmp668 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp668.value) {
        {
            panda$core$String** $tmp670 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            label669 = *$tmp670;
            panda$collections$ImmutableArray** $tmp672 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            statements671 = *$tmp672;
            panda$core$MutableString* $tmp674 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp674);
            result673 = $tmp674;
            if (((panda$core$Bit) { label669 != NULL }).value) {
            {
                panda$core$String* $tmp675 = panda$core$String$convert$R$panda$core$String(label669);
                panda$core$String* $tmp677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp675, &$s676);
                panda$core$MutableString$append$panda$core$String(result673, $tmp677);
            }
            }
            panda$core$MutableString$append$panda$core$String(result673, &$s678);
            {
                ITable* $tmp680 = ((panda$collections$Iterable*) statements671)->$class->itable;
                while ($tmp680->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp680 = $tmp680->next;
                }
                $fn682 $tmp681 = $tmp680->methods[0];
                panda$collections$Iterator* $tmp683 = $tmp681(((panda$collections$Iterable*) statements671));
                s$Iter679 = $tmp683;
                $l684:;
                ITable* $tmp686 = s$Iter679->$class->itable;
                while ($tmp686->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp686 = $tmp686->next;
                }
                $fn688 $tmp687 = $tmp686->methods[0];
                panda$core$Bit $tmp689 = $tmp687(s$Iter679);
                panda$core$Bit $tmp690 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp689);
                if (!$tmp690.value) goto $l685;
                {
                    ITable* $tmp692 = s$Iter679->$class->itable;
                    while ($tmp692->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp692 = $tmp692->next;
                    }
                    $fn694 $tmp693 = $tmp692->methods[1];
                    panda$core$Object* $tmp695 = $tmp693(s$Iter679);
                    s691 = ((org$pandalanguage$pandac$ASTNode*) $tmp695);
                    panda$core$String* $tmp697 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s691), &$s696);
                    panda$core$MutableString$append$panda$core$String(result673, $tmp697);
                }
                goto $l684;
                $l685:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp683));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp698, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result673, $tmp698);
            {
                panda$core$String* $tmp700 = panda$core$MutableString$finish$R$panda$core$String(result673);
                tmp9699 = $tmp700;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result673));
                return tmp9699;
            }
        }
        }
        else {
        panda$core$Bit $tmp701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp701.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp703 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            value702 = *$tmp703;
            panda$collections$ImmutableArray** $tmp705 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            whens704 = *$tmp705;
            panda$collections$ImmutableArray** $tmp707 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 32));
            other706 = *$tmp707;
            panda$core$MutableString* $tmp709 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp711 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s710, ((panda$core$Object*) value702));
            panda$core$String* $tmp713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp711, &$s712);
            panda$core$MutableString$init$panda$core$String($tmp709, $tmp713);
            result708 = $tmp709;
            {
                ITable* $tmp715 = ((panda$collections$Iterable*) whens704)->$class->itable;
                while ($tmp715->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp715 = $tmp715->next;
                }
                $fn717 $tmp716 = $tmp715->methods[0];
                panda$collections$Iterator* $tmp718 = $tmp716(((panda$collections$Iterable*) whens704));
                w$Iter714 = $tmp718;
                $l719:;
                ITable* $tmp721 = w$Iter714->$class->itable;
                while ($tmp721->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp721 = $tmp721->next;
                }
                $fn723 $tmp722 = $tmp721->methods[0];
                panda$core$Bit $tmp724 = $tmp722(w$Iter714);
                panda$core$Bit $tmp725 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp724);
                if (!$tmp725.value) goto $l720;
                {
                    ITable* $tmp727 = w$Iter714->$class->itable;
                    while ($tmp727->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp727 = $tmp727->next;
                    }
                    $fn729 $tmp728 = $tmp727->methods[1];
                    panda$core$Object* $tmp730 = $tmp728(w$Iter714);
                    w726 = ((org$pandalanguage$pandac$ASTNode*) $tmp730);
                    panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w726), &$s731);
                    panda$core$MutableString$append$panda$core$String(result708, $tmp732);
                }
                goto $l719;
                $l720:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp718));
            }
            if (((panda$core$Bit) { other706 != NULL }).value) {
            {
                panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other706), &$s733);
                panda$core$MutableString$append$panda$core$String(result708, $tmp734);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp735, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result708, $tmp735);
            {
                panda$core$String* $tmp737 = panda$core$MutableString$finish$R$panda$core$String(result708);
                tmp10736 = $tmp737;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result708));
                return tmp10736;
            }
        }
        }
        else {
        panda$core$Bit $tmp738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp738.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp740 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            dc739 = *$tmp740;
            panda$collections$ImmutableArray** $tmp742 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            annotations741 = *$tmp742;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp744 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$165_9231->$data + 32));
            kind743 = *$tmp744;
            panda$core$String** $tmp746 = ((panda$core$String**) ((char*) $match$165_9231->$data + 40));
            name745 = *$tmp746;
            panda$collections$ImmutableArray** $tmp748 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 48));
            parameters747 = *$tmp748;
            org$pandalanguage$pandac$ASTNode** $tmp750 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 56));
            returnType749 = *$tmp750;
            panda$collections$ImmutableArray** $tmp752 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 64));
            statements751 = *$tmp752;
            panda$core$MutableString* $tmp754 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp754);
            result753 = $tmp754;
            if (((panda$core$Bit) { dc739 != NULL }).value) {
            {
                panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc739), &$s755);
                panda$core$MutableString$append$panda$core$String(result753, $tmp756);
            }
            }
            {
                ITable* $tmp758 = ((panda$collections$Iterable*) annotations741)->$class->itable;
                while ($tmp758->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp758 = $tmp758->next;
                }
                $fn760 $tmp759 = $tmp758->methods[0];
                panda$collections$Iterator* $tmp761 = $tmp759(((panda$collections$Iterable*) annotations741));
                a$Iter757 = $tmp761;
                $l762:;
                ITable* $tmp764 = a$Iter757->$class->itable;
                while ($tmp764->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp764 = $tmp764->next;
                }
                $fn766 $tmp765 = $tmp764->methods[0];
                panda$core$Bit $tmp767 = $tmp765(a$Iter757);
                panda$core$Bit $tmp768 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp767);
                if (!$tmp768.value) goto $l763;
                {
                    ITable* $tmp770 = a$Iter757->$class->itable;
                    while ($tmp770->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp770 = $tmp770->next;
                    }
                    $fn772 $tmp771 = $tmp770->methods[1];
                    panda$core$Object* $tmp773 = $tmp771(a$Iter757);
                    a769 = ((org$pandalanguage$pandac$ASTNode*) $tmp773);
                    panda$core$String* $tmp775 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a769), &$s774);
                    panda$core$MutableString$append$panda$core$String(result753, $tmp775);
                }
                goto $l762;
                $l763:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp761));
            }
            {
                $match$321_17776 = kind743;
                panda$core$Bit $tmp777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17776.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp777.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result753, &$s778);
                }
                }
                else {
                panda$core$Bit $tmp779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17776.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp779.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result753, &$s780);
                }
                }
                else {
                panda$core$Bit $tmp781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17776.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp781.value) {
                {
                }
                }
                }
                }
            }
            panda$core$String* $tmp782 = panda$core$String$convert$R$panda$core$String(name745);
            panda$core$String* $tmp784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp782, &$s783);
            panda$core$String* $tmp785 = panda$collections$ImmutableArray$join$R$panda$core$String(parameters747);
            panda$core$String* $tmp786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp784, $tmp785);
            panda$core$String* $tmp788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp786, &$s787);
            panda$core$MutableString$append$panda$core$String(result753, $tmp788);
            if (((panda$core$Bit) { returnType749 != NULL }).value) {
            {
                panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s789, ((panda$core$Object*) returnType749));
                panda$core$String* $tmp792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp790, &$s791);
                panda$core$MutableString$append$panda$core$String(result753, $tmp792);
            }
            }
            if (((panda$core$Bit) { statements751 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result753, &$s793);
                {
                    ITable* $tmp795 = ((panda$collections$Iterable*) statements751)->$class->itable;
                    while ($tmp795->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp795 = $tmp795->next;
                    }
                    $fn797 $tmp796 = $tmp795->methods[0];
                    panda$collections$Iterator* $tmp798 = $tmp796(((panda$collections$Iterable*) statements751));
                    s$Iter794 = $tmp798;
                    $l799:;
                    ITable* $tmp801 = s$Iter794->$class->itable;
                    while ($tmp801->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp801 = $tmp801->next;
                    }
                    $fn803 $tmp802 = $tmp801->methods[0];
                    panda$core$Bit $tmp804 = $tmp802(s$Iter794);
                    panda$core$Bit $tmp805 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp804);
                    if (!$tmp805.value) goto $l800;
                    {
                        ITable* $tmp807 = s$Iter794->$class->itable;
                        while ($tmp807->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp807 = $tmp807->next;
                        }
                        $fn809 $tmp808 = $tmp807->methods[1];
                        panda$core$Object* $tmp810 = $tmp808(s$Iter794);
                        s806 = ((org$pandalanguage$pandac$ASTNode*) $tmp810);
                        panda$core$String* $tmp812 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s806), &$s811);
                        panda$core$MutableString$append$panda$core$String(result753, $tmp812);
                    }
                    goto $l799;
                    $l800:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp798));
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp813, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result753, $tmp813);
            }
            }
            {
                panda$core$String* $tmp815 = panda$core$MutableString$finish$R$panda$core$String(result753);
                tmp11814 = $tmp815;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result753));
                return tmp11814;
            }
        }
        }
        else {
        panda$core$Bit $tmp816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp816.value) {
        {
            return &$s817;
        }
        }
        else {
        panda$core$Bit $tmp818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp818.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp820 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            base819 = *$tmp820;
            panda$core$String* $tmp822 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base819), &$s821);
            return $tmp822;
        }
        }
        else {
        panda$core$Bit $tmp823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp823.value) {
        {
            panda$core$String** $tmp825 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            name824 = *$tmp825;
            return name824;
        }
        }
        else {
        panda$core$Bit $tmp826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp826.value) {
        {
            panda$core$String** $tmp828 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            name827 = *$tmp828;
            org$pandalanguage$pandac$ASTNode** $tmp830 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 24));
            type829 = *$tmp830;
            panda$core$String* $tmp831 = panda$core$String$convert$R$panda$core$String(name827);
            panda$core$String* $tmp833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp831, &$s832);
            panda$core$String* $tmp834 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp833, ((panda$core$Object*) type829));
            panda$core$String* $tmp836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp834, &$s835);
            return $tmp836;
        }
        }
        else {
        panda$core$Bit $tmp837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp837.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp839 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$165_9231->$data + 16));
            kind838 = *$tmp839;
            org$pandalanguage$pandac$ASTNode** $tmp841 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 24));
            base840 = *$tmp841;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp842;
            $tmp842 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp842->value = kind838;
            panda$core$String* $tmp844 = (($fn843) ((panda$core$Object*) $tmp842)->$class->vtable[0])(((panda$core$Object*) $tmp842));
            panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp844, &$s845);
            panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp846, ((panda$core$Object*) base840));
            panda$core$String* $tmp849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp847, &$s848);
            return $tmp849;
        }
        }
        else {
        panda$core$Bit $tmp850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp850.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp852 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            start851 = *$tmp852;
            org$pandalanguage$pandac$ASTNode** $tmp854 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 24));
            end853 = *$tmp854;
            panda$core$Bit* $tmp856 = ((panda$core$Bit*) ((char*) $match$165_9231->$data + 32));
            inclusive855 = *$tmp856;
            org$pandalanguage$pandac$ASTNode** $tmp858 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 33));
            step857 = *$tmp858;
            panda$core$MutableString* $tmp860 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp860);
            result859 = $tmp860;
            panda$core$Bit $tmp864;
            if (((panda$core$Bit) { start851 != NULL }).value) goto $l861; else goto $l862;
            $l861:;
            panda$core$Bit $tmp865 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start851->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp864 = $tmp865;
            goto $l863;
            $l862:;
            $tmp864 = ((panda$core$Bit) { true });
            goto $l863;
            $l863:;
            if ($tmp864.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result859, ((panda$core$Object*) start851));
            }
            }
            if (inclusive855.value) {
            {
                panda$core$MutableString$append$panda$core$String(result859, &$s866);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result859, &$s867);
            }
            }
            panda$core$Bit $tmp871;
            if (((panda$core$Bit) { end853 != NULL }).value) goto $l868; else goto $l869;
            $l868:;
            panda$core$Bit $tmp872 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(end853->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp871 = $tmp872;
            goto $l870;
            $l869:;
            $tmp871 = ((panda$core$Bit) { true });
            goto $l870;
            $l870:;
            if ($tmp871.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result859, ((panda$core$Object*) end853));
            }
            }
            panda$core$Bit $tmp876;
            if (((panda$core$Bit) { step857 != NULL }).value) goto $l873; else goto $l874;
            $l873:;
            panda$core$Bit $tmp877 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(step857->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp876 = $tmp877;
            goto $l875;
            $l874:;
            $tmp876 = ((panda$core$Bit) { true });
            goto $l875;
            $l875:;
            if ($tmp876.value) {
            {
                panda$core$String* $tmp879 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s878, ((panda$core$Object*) step857));
                panda$core$MutableString$append$panda$core$String(result859, $tmp879);
            }
            }
            {
                panda$core$String* $tmp881 = panda$core$MutableString$finish$R$panda$core$String(result859);
                tmp12880 = $tmp881;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result859));
                return tmp12880;
            }
        }
        }
        else {
        panda$core$Bit $tmp882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp882.value) {
        {
            panda$core$Real64* $tmp884 = ((panda$core$Real64*) ((char*) $match$165_9231->$data + 16));
            value883 = *$tmp884;
            panda$core$String* $tmp885 = panda$core$Real64$convert$R$panda$core$String(value883);
            return $tmp885;
        }
        }
        else {
        panda$core$Bit $tmp886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp886.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp888 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            value887 = *$tmp888;
            if (((panda$core$Bit) { value887 != NULL }).value) {
            {
                panda$core$String* $tmp890 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s889, ((panda$core$Object*) value887));
                panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp890, &$s891);
                return $tmp892;
            }
            }
            return &$s893;
        }
        }
        else {
        panda$core$Bit $tmp894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp894.value) {
        {
            return &$s895;
        }
        }
        else {
        panda$core$Bit $tmp896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp896.value) {
        {
            panda$core$String** $tmp898 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            str897 = *$tmp898;
            return str897;
        }
        }
        else {
        panda$core$Bit $tmp899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp899.value) {
        {
            return &$s900;
        }
        }
        else {
        panda$core$Bit $tmp901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp901.value) {
        {
            panda$core$String** $tmp903 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            name902 = *$tmp903;
            return name902;
        }
        }
        else {
        panda$core$Bit $tmp904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp904.value) {
        {
            panda$core$String** $tmp906 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            name905 = *$tmp906;
            org$pandalanguage$pandac$ASTNode** $tmp908 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 24));
            type907 = *$tmp908;
            if (((panda$core$Bit) { type907 != NULL }).value) {
            {
                panda$core$String* $tmp909 = panda$core$String$convert$R$panda$core$String(name905);
                panda$core$String* $tmp911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp909, &$s910);
                panda$core$String* $tmp912 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp911, ((panda$core$Object*) type907));
                panda$core$String* $tmp914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp912, &$s913);
                return $tmp914;
            }
            }
            return name905;
        }
        }
        else {
        panda$core$Bit $tmp915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp915.value) {
        {
            panda$core$String** $tmp917 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            name916 = *$tmp917;
            return name916;
        }
        }
        else {
        panda$core$Bit $tmp918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp918.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp920 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$165_9231->$data + 16));
            kind919 = *$tmp920;
            panda$collections$ImmutableArray** $tmp922 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            decls921 = *$tmp922;
            panda$core$MutableString* $tmp924 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp924);
            result923 = $tmp924;
            {
                $match$390_17925 = kind919;
                panda$core$Bit $tmp926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17925.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp926.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result923, &$s927);
                }
                }
                else {
                panda$core$Bit $tmp928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17925.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp928.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result923, &$s929);
                }
                }
                else {
                panda$core$Bit $tmp930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17925.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp930.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result923, &$s931);
                }
                }
                else {
                panda$core$Bit $tmp932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17925.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp932.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result923, &$s933);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp934 = panda$collections$ImmutableArray$join$R$panda$core$String(decls921);
            panda$core$MutableString$append$panda$core$String(result923, $tmp934);
            {
                panda$core$String* $tmp936 = panda$core$MutableString$finish$R$panda$core$String(result923);
                tmp13935 = $tmp936;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result923));
                return tmp13935;
            }
        }
        }
        else {
        panda$core$Bit $tmp937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp937.value) {
        {
            panda$collections$ImmutableArray** $tmp939 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 16));
            tests938 = *$tmp939;
            panda$collections$ImmutableArray** $tmp941 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            statements940 = *$tmp941;
            panda$core$MutableString* $tmp943 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp943, &$s944);
            result942 = $tmp943;
            separator945 = &$s946;
            {
                ITable* $tmp948 = ((panda$collections$Iterable*) tests938)->$class->itable;
                while ($tmp948->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp948 = $tmp948->next;
                }
                $fn950 $tmp949 = $tmp948->methods[0];
                panda$collections$Iterator* $tmp951 = $tmp949(((panda$collections$Iterable*) tests938));
                t$Iter947 = $tmp951;
                $l952:;
                ITable* $tmp954 = t$Iter947->$class->itable;
                while ($tmp954->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp954 = $tmp954->next;
                }
                $fn956 $tmp955 = $tmp954->methods[0];
                panda$core$Bit $tmp957 = $tmp955(t$Iter947);
                panda$core$Bit $tmp958 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp957);
                if (!$tmp958.value) goto $l953;
                {
                    ITable* $tmp960 = t$Iter947->$class->itable;
                    while ($tmp960->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp960 = $tmp960->next;
                    }
                    $fn962 $tmp961 = $tmp960->methods[1];
                    panda$core$Object* $tmp963 = $tmp961(t$Iter947);
                    t959 = ((org$pandalanguage$pandac$ASTNode*) $tmp963);
                    panda$core$String* $tmp964 = panda$core$String$convert$R$panda$core$String(separator945);
                    panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp964, &$s965);
                    panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp966, ((panda$core$Object*) t959));
                    panda$core$String* $tmp969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp967, &$s968);
                    panda$core$MutableString$append$panda$core$String(result942, $tmp969);
                }
                goto $l952;
                $l953:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp951));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp970, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result942, $tmp970);
            {
                ITable* $tmp972 = ((panda$collections$Iterable*) statements940)->$class->itable;
                while ($tmp972->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp972 = $tmp972->next;
                }
                $fn974 $tmp973 = $tmp972->methods[0];
                panda$collections$Iterator* $tmp975 = $tmp973(((panda$collections$Iterable*) statements940));
                s$Iter971 = $tmp975;
                $l976:;
                ITable* $tmp978 = s$Iter971->$class->itable;
                while ($tmp978->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp978 = $tmp978->next;
                }
                $fn980 $tmp979 = $tmp978->methods[0];
                panda$core$Bit $tmp981 = $tmp979(s$Iter971);
                panda$core$Bit $tmp982 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp981);
                if (!$tmp982.value) goto $l977;
                {
                    ITable* $tmp984 = s$Iter971->$class->itable;
                    while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp984 = $tmp984->next;
                    }
                    $fn986 $tmp985 = $tmp984->methods[1];
                    panda$core$Object* $tmp987 = $tmp985(s$Iter971);
                    s983 = ((org$pandalanguage$pandac$ASTNode*) $tmp987);
                    panda$core$String* $tmp989 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s988, ((panda$core$Object*) s983));
                    panda$core$MutableString$append$panda$core$String(result942, $tmp989);
                }
                goto $l976;
                $l977:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp975));
            }
            {
                panda$core$String* $tmp991 = panda$core$MutableString$finish$R$panda$core$String(result942);
                tmp14990 = $tmp991;
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator945));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result942));
                }
                return tmp14990;
            }
        }
        }
        else {
        panda$core$Bit $tmp992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp992.value) {
        {
            panda$core$String** $tmp994 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            label993 = *$tmp994;
            org$pandalanguage$pandac$ASTNode** $tmp996 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 24));
            test995 = *$tmp996;
            panda$collections$ImmutableArray** $tmp998 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 32));
            statements997 = *$tmp998;
            panda$core$MutableString* $tmp1000 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1000);
            result999 = $tmp1000;
            if (((panda$core$Bit) { label993 != NULL }).value) {
            {
                panda$core$String* $tmp1001 = panda$core$String$convert$R$panda$core$String(label993);
                panda$core$String* $tmp1003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1001, &$s1002);
                panda$core$MutableString$append$panda$core$String(result999, $tmp1003);
            }
            }
            panda$core$String* $tmp1005 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1004, ((panda$core$Object*) test995));
            panda$core$String* $tmp1007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1005, &$s1006);
            panda$core$MutableString$append$panda$core$String(result999, $tmp1007);
            {
                ITable* $tmp1009 = ((panda$collections$Iterable*) statements997)->$class->itable;
                while ($tmp1009->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1009 = $tmp1009->next;
                }
                $fn1011 $tmp1010 = $tmp1009->methods[0];
                panda$collections$Iterator* $tmp1012 = $tmp1010(((panda$collections$Iterable*) statements997));
                s$Iter1008 = $tmp1012;
                $l1013:;
                ITable* $tmp1015 = s$Iter1008->$class->itable;
                while ($tmp1015->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1015 = $tmp1015->next;
                }
                $fn1017 $tmp1016 = $tmp1015->methods[0];
                panda$core$Bit $tmp1018 = $tmp1016(s$Iter1008);
                panda$core$Bit $tmp1019 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1018);
                if (!$tmp1019.value) goto $l1014;
                {
                    ITable* $tmp1021 = s$Iter1008->$class->itable;
                    while ($tmp1021->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1021 = $tmp1021->next;
                    }
                    $fn1023 $tmp1022 = $tmp1021->methods[1];
                    panda$core$Object* $tmp1024 = $tmp1022(s$Iter1008);
                    s1020 = ((org$pandalanguage$pandac$ASTNode*) $tmp1024);
                    panda$core$String* $tmp1026 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1020), &$s1025);
                    panda$core$MutableString$append$panda$core$String(result999, $tmp1026);
                }
                goto $l1013;
                $l1014:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1012));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1027, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result999, $tmp1027);
            {
                panda$core$String* $tmp1029 = panda$core$MutableString$finish$R$panda$core$String(result999);
                tmp151028 = $tmp1029;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result999));
                return tmp151028;
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

