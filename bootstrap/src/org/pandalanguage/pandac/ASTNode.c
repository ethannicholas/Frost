#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/String.h"
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
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position} };

typedef panda$core$String* (*$fn257)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn282)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn288)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn294)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn313)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn348)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn382)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn388)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn394)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn419)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn425)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn431)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn450)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn457)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn476)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn482)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn488)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn502)(org$pandalanguage$pandac$ASTNode*);
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
typedef panda$core$String* (*$fn842)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn950)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn956)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn962)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn974)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn980)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn986)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1011)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1017)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1023)(panda$collections$Iterator*);

static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1 = p_f0;
    panda$core$String** $tmp2 = ((panda$core$String**) ((char*) self->$data + 16));
    *$tmp2 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3 = p_f0;
    org$pandalanguage$pandac$ASTNode** $tmp4 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
    *$tmp4 = p_f1;
    org$pandalanguage$pandac$ASTNode** $tmp5 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
    *$tmp5 = p_f2;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp6 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp6 = p_f0;
    org$pandalanguage$pandac$ASTNode** $tmp7 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
    *$tmp7 = p_f1;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp8 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp8 = p_f2;
    org$pandalanguage$pandac$ASTNode** $tmp9 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
    *$tmp9 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp10 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp10 = p_f0;
    panda$core$Bit* $tmp11 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp11 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp12 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp12 = p_f0;
    panda$collections$ImmutableArray** $tmp13 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
    *$tmp13 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp14 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp14 = p_f0;
    panda$core$String** $tmp15 = ((panda$core$String**) ((char*) self->$data + 16));
    *$tmp15 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp16 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp16 = p_f0;
    org$pandalanguage$pandac$ASTNode** $tmp17 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
    *$tmp17 = p_f1;
    panda$collections$ImmutableArray** $tmp18 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp18 = p_f2;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp19 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp19 = p_f0;
    org$pandalanguage$pandac$ASTNode** $tmp20 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
    *$tmp20 = p_f1;
    panda$core$String** $tmp21 = ((panda$core$String**) ((char*) self->$data + 24));
    *$tmp21 = p_f2;
    panda$collections$ImmutableArray** $tmp22 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
    *$tmp22 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp23 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp23 = p_f0;
    org$pandalanguage$pandac$ASTNode** $tmp24 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
    *$tmp24 = p_f1;
    org$pandalanguage$pandac$ChoiceEntry** $tmp25 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
    *$tmp25 = p_f2;
    panda$core$Int64* $tmp26 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp26 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp27 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp27 = p_f0;
    org$pandalanguage$pandac$ASTNode** $tmp28 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
    *$tmp28 = p_f1;
    panda$collections$ImmutableArray** $tmp29 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp29 = p_f2;
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp30 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp30 = p_f3;
    panda$core$String** $tmp31 = ((panda$core$String**) ((char*) self->$data + 40));
    *$tmp31 = p_f4;
    panda$collections$ImmutableArray** $tmp32 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
    *$tmp32 = p_f5;
    panda$collections$ImmutableArray** $tmp33 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
    *$tmp33 = p_f6;
    panda$collections$ImmutableArray** $tmp34 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
    *$tmp34 = p_f7;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp35 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp35 = p_f0;
    panda$core$String** $tmp36 = ((panda$core$String**) ((char*) self->$data + 16));
    *$tmp36 = p_f1;
    panda$collections$ImmutableArray** $tmp37 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp37 = p_f2;
    org$pandalanguage$pandac$ASTNode** $tmp38 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
    *$tmp38 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp39 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp39 = p_f0;
    org$pandalanguage$pandac$ASTNode** $tmp40 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
    *$tmp40 = p_f1;
    panda$core$String** $tmp41 = ((panda$core$String**) ((char*) self->$data + 24));
    *$tmp41 = p_f2;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp42 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp42 = p_f0;
    org$pandalanguage$pandac$ASTNode** $tmp43 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
    *$tmp43 = p_f1;
    panda$collections$ImmutableArray** $tmp44 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp44 = p_f2;
    org$pandalanguage$pandac$ASTNode** $tmp45 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
    *$tmp45 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    self->$rawValue = p_rv;
    panda$collections$ImmutableArray** $tmp46 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
    *$tmp46 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp47 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp47 = p_f0;
    panda$core$String** $tmp48 = ((panda$core$String**) ((char*) self->$data + 16));
    *$tmp48 = p_f1;
    org$pandalanguage$pandac$ASTNode** $tmp49 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
    *$tmp49 = p_f2;
    org$pandalanguage$pandac$ASTNode** $tmp50 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
    *$tmp50 = p_f3;
    panda$collections$ImmutableArray** $tmp51 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
    *$tmp51 = p_f4;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp52 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp52 = p_f0;
    panda$core$String** $tmp53 = ((panda$core$String**) ((char*) self->$data + 16));
    *$tmp53 = p_f1;
    panda$collections$ImmutableArray** $tmp54 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp54 = p_f2;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp55 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp55 = p_f0;
    org$pandalanguage$pandac$ASTNode** $tmp56 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
    *$tmp56 = p_f1;
    panda$collections$ImmutableArray** $tmp57 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp57 = p_f2;
    org$pandalanguage$pandac$ASTNode** $tmp58 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
    *$tmp58 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp59 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp59 = p_f0;
    panda$core$UInt64* $tmp60 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp60 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp61 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp61 = p_f0;
    panda$core$String** $tmp62 = ((panda$core$String**) ((char*) self->$data + 16));
    *$tmp62 = p_f1;
    panda$collections$ImmutableArray** $tmp63 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp63 = p_f2;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp64 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp64 = p_f0;
    org$pandalanguage$pandac$ASTNode** $tmp65 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
    *$tmp65 = p_f1;
    panda$collections$ImmutableArray** $tmp66 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp66 = p_f2;
    panda$collections$ImmutableArray** $tmp67 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
    *$tmp67 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, org$pandalanguage$pandac$ASTNode* p_f6, panda$collections$ImmutableArray* p_f7) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp68 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp68 = p_f0;
    org$pandalanguage$pandac$ASTNode** $tmp69 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
    *$tmp69 = p_f1;
    panda$collections$ImmutableArray** $tmp70 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp70 = p_f2;
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp71 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp71 = p_f3;
    panda$core$String** $tmp72 = ((panda$core$String**) ((char*) self->$data + 40));
    *$tmp72 = p_f4;
    panda$collections$ImmutableArray** $tmp73 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
    *$tmp73 = p_f5;
    org$pandalanguage$pandac$ASTNode** $tmp74 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
    *$tmp74 = p_f6;
    panda$collections$ImmutableArray** $tmp75 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
    *$tmp75 = p_f7;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp76 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp76 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp77 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp77 = p_f0;
    org$pandalanguage$pandac$ASTNode** $tmp78 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
    *$tmp78 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp79 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp79 = p_f0;
    panda$core$String** $tmp80 = ((panda$core$String**) ((char*) self->$data + 16));
    *$tmp80 = p_f1;
    org$pandalanguage$pandac$ASTNode** $tmp81 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
    *$tmp81 = p_f2;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp82 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp82 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp83 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp83 = p_f1;
    org$pandalanguage$pandac$ASTNode** $tmp84 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
    *$tmp84 = p_f2;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp85 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp85 = p_f0;
    org$pandalanguage$pandac$ASTNode** $tmp86 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
    *$tmp86 = p_f1;
    org$pandalanguage$pandac$ASTNode** $tmp87 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
    *$tmp87 = p_f2;
    panda$core$Bit* $tmp88 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp88 = p_f3;
    org$pandalanguage$pandac$ASTNode** $tmp89 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
    *$tmp89 = p_f4;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp90 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp90 = p_f0;
    panda$core$Real64* $tmp91 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp91 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp92 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp92 = p_f0;
    org$pandalanguage$pandac$ASTNode** $tmp93 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
    *$tmp93 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp94 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp94 = p_f0;
    panda$core$String** $tmp95 = ((panda$core$String**) ((char*) self->$data + 16));
    *$tmp95 = p_f1;
    org$pandalanguage$pandac$ASTNode** $tmp96 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
    *$tmp96 = p_f2;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp97 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp97 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp98 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp98 = p_f1;
    panda$collections$ImmutableArray** $tmp99 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp99 = p_f2;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp100 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp100 = p_f0;
    panda$collections$ImmutableArray** $tmp101 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
    *$tmp101 = p_f1;
    panda$collections$ImmutableArray** $tmp102 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp102 = p_f2;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp103 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp103 = p_f0;
    panda$core$String** $tmp104 = ((panda$core$String**) ((char*) self->$data + 16));
    *$tmp104 = p_f1;
    org$pandalanguage$pandac$ASTNode** $tmp105 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
    *$tmp105 = p_f2;
    panda$collections$ImmutableArray** $tmp106 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
    *$tmp106 = p_f3;
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$76_9107;
    org$pandalanguage$pandac$Position position109;
    org$pandalanguage$pandac$Position position112;
    org$pandalanguage$pandac$Position position115;
    org$pandalanguage$pandac$Position position118;
    org$pandalanguage$pandac$Position position121;
    org$pandalanguage$pandac$Position position124;
    org$pandalanguage$pandac$Position position127;
    org$pandalanguage$pandac$Position position130;
    org$pandalanguage$pandac$Position position133;
    org$pandalanguage$pandac$Position position136;
    org$pandalanguage$pandac$Position position139;
    org$pandalanguage$pandac$Position position142;
    org$pandalanguage$pandac$Position position145;
    org$pandalanguage$pandac$Position position148;
    org$pandalanguage$pandac$Position position151;
    org$pandalanguage$pandac$Position $tmp154;
    org$pandalanguage$pandac$Position position156;
    org$pandalanguage$pandac$Position position159;
    org$pandalanguage$pandac$Position position162;
    org$pandalanguage$pandac$Position position165;
    org$pandalanguage$pandac$Position position168;
    org$pandalanguage$pandac$Position position171;
    org$pandalanguage$pandac$Position position174;
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
    org$pandalanguage$pandac$Position position222;
    org$pandalanguage$pandac$Position position225;
    org$pandalanguage$pandac$Position position228;
    {
        $match$76_9107 = self;
        panda$core$Bit $tmp108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp108.value) {
        {
            org$pandalanguage$pandac$Position* $tmp110 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position109 = *$tmp110;
            return position109;
        }
        }
        else {
        panda$core$Bit $tmp111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp111.value) {
        {
            org$pandalanguage$pandac$Position* $tmp113 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position112 = *$tmp113;
            return position112;
        }
        }
        else {
        panda$core$Bit $tmp114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp114.value) {
        {
            org$pandalanguage$pandac$Position* $tmp116 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position115 = *$tmp116;
            return position115;
        }
        }
        else {
        panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp117.value) {
        {
            org$pandalanguage$pandac$Position* $tmp119 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position118 = *$tmp119;
            return position118;
        }
        }
        else {
        panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp120.value) {
        {
            org$pandalanguage$pandac$Position* $tmp122 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position121 = *$tmp122;
            return position121;
        }
        }
        else {
        panda$core$Bit $tmp123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp123.value) {
        {
            org$pandalanguage$pandac$Position* $tmp125 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position124 = *$tmp125;
            return position124;
        }
        }
        else {
        panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp126.value) {
        {
            org$pandalanguage$pandac$Position* $tmp128 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position127 = *$tmp128;
            return position127;
        }
        }
        else {
        panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp129.value) {
        {
            org$pandalanguage$pandac$Position* $tmp131 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position130 = *$tmp131;
            return position130;
        }
        }
        else {
        panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp132.value) {
        {
            org$pandalanguage$pandac$Position* $tmp134 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position133 = *$tmp134;
            return position133;
        }
        }
        else {
        panda$core$Bit $tmp135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp135.value) {
        {
            org$pandalanguage$pandac$Position* $tmp137 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position136 = *$tmp137;
            return position136;
        }
        }
        else {
        panda$core$Bit $tmp138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp138.value) {
        {
            org$pandalanguage$pandac$Position* $tmp140 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position139 = *$tmp140;
            return position139;
        }
        }
        else {
        panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp141.value) {
        {
            org$pandalanguage$pandac$Position* $tmp143 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position142 = *$tmp143;
            return position142;
        }
        }
        else {
        panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp144.value) {
        {
            org$pandalanguage$pandac$Position* $tmp146 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position145 = *$tmp146;
            return position145;
        }
        }
        else {
        panda$core$Bit $tmp147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp147.value) {
        {
            org$pandalanguage$pandac$Position* $tmp149 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position148 = *$tmp149;
            return position148;
        }
        }
        else {
        panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp150.value) {
        {
            org$pandalanguage$pandac$Position* $tmp152 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position151 = *$tmp152;
            return position151;
        }
        }
        else {
        panda$core$Bit $tmp153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp153.value) {
        {
            org$pandalanguage$pandac$Position$init(&$tmp154);
            return $tmp154;
        }
        }
        else {
        panda$core$Bit $tmp155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp155.value) {
        {
            org$pandalanguage$pandac$Position* $tmp157 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position156 = *$tmp157;
            return position156;
        }
        }
        else {
        panda$core$Bit $tmp158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp158.value) {
        {
            org$pandalanguage$pandac$Position* $tmp160 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position159 = *$tmp160;
            return position159;
        }
        }
        else {
        panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp161.value) {
        {
            org$pandalanguage$pandac$Position* $tmp163 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position162 = *$tmp163;
            return position162;
        }
        }
        else {
        panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp164.value) {
        {
            org$pandalanguage$pandac$Position* $tmp166 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position165 = *$tmp166;
            return position165;
        }
        }
        else {
        panda$core$Bit $tmp167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp167.value) {
        {
            org$pandalanguage$pandac$Position* $tmp169 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position168 = *$tmp169;
            return position168;
        }
        }
        else {
        panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp170.value) {
        {
            org$pandalanguage$pandac$Position* $tmp172 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position171 = *$tmp172;
            return position171;
        }
        }
        else {
        panda$core$Bit $tmp173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp173.value) {
        {
            org$pandalanguage$pandac$Position* $tmp175 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position174 = *$tmp175;
            return position174;
        }
        }
        else {
        panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp176.value) {
        {
            org$pandalanguage$pandac$Position* $tmp178 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position177 = *$tmp178;
            return position177;
        }
        }
        else {
        panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp179.value) {
        {
            org$pandalanguage$pandac$Position* $tmp181 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position180 = *$tmp181;
            return position180;
        }
        }
        else {
        panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp182.value) {
        {
            org$pandalanguage$pandac$Position* $tmp184 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position183 = *$tmp184;
            return position183;
        }
        }
        else {
        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp185.value) {
        {
            org$pandalanguage$pandac$Position* $tmp187 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position186 = *$tmp187;
            return position186;
        }
        }
        else {
        panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp188.value) {
        {
            org$pandalanguage$pandac$Position* $tmp190 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position189 = *$tmp190;
            return position189;
        }
        }
        else {
        panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp191.value) {
        {
            org$pandalanguage$pandac$Position* $tmp193 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position192 = *$tmp193;
            return position192;
        }
        }
        else {
        panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp194.value) {
        {
            org$pandalanguage$pandac$Position* $tmp196 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position195 = *$tmp196;
            return position195;
        }
        }
        else {
        panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp197.value) {
        {
            org$pandalanguage$pandac$Position* $tmp199 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position198 = *$tmp199;
            return position198;
        }
        }
        else {
        panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp200.value) {
        {
            org$pandalanguage$pandac$Position* $tmp202 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position201 = *$tmp202;
            return position201;
        }
        }
        else {
        panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp203.value) {
        {
            org$pandalanguage$pandac$Position* $tmp205 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position204 = *$tmp205;
            return position204;
        }
        }
        else {
        panda$core$Bit $tmp206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp206.value) {
        {
            org$pandalanguage$pandac$Position* $tmp208 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position207 = *$tmp208;
            return position207;
        }
        }
        else {
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp209.value) {
        {
            org$pandalanguage$pandac$Position* $tmp211 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position210 = *$tmp211;
            return position210;
        }
        }
        else {
        panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp212.value) {
        {
            org$pandalanguage$pandac$Position* $tmp214 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position213 = *$tmp214;
            return position213;
        }
        }
        else {
        panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp215.value) {
        {
            org$pandalanguage$pandac$Position* $tmp217 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position216 = *$tmp217;
            return position216;
        }
        }
        else {
        panda$core$Bit $tmp218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp218.value) {
        {
            org$pandalanguage$pandac$Position* $tmp220 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position219 = *$tmp220;
            return position219;
        }
        }
        else {
        panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp221.value) {
        {
            org$pandalanguage$pandac$Position* $tmp223 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position222 = *$tmp223;
            return position222;
        }
        }
        else {
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp224.value) {
        {
            org$pandalanguage$pandac$Position* $tmp226 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position225 = *$tmp226;
            return position225;
        }
        }
        else {
        panda$core$Bit $tmp227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp227.value) {
        {
            org$pandalanguage$pandac$Position* $tmp229 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position228 = *$tmp229;
            return position228;
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
    org$pandalanguage$pandac$ASTNode* $match$165_9230;
    panda$core$String* name232;
    org$pandalanguage$pandac$ASTNode* test235;
    org$pandalanguage$pandac$ASTNode* msg237;
    org$pandalanguage$pandac$ASTNode* left251;
    org$pandalanguage$pandac$parser$Token$Kind op253;
    org$pandalanguage$pandac$ASTNode* right255;
    panda$core$Bit value269;
    panda$collections$ImmutableArray* statements273;
    panda$core$MutableString* result275;
    panda$collections$Iterator* s$Iter279;
    org$pandalanguage$pandac$ASTNode* s291;
    panda$core$Char8 $tmp298;
    panda$core$String* label301;
    org$pandalanguage$pandac$ASTNode* target309;
    panda$collections$ImmutableArray* args311;
    org$pandalanguage$pandac$ASTNode* dc322;
    panda$core$String* name324;
    panda$collections$ImmutableArray* fields326;
    panda$core$MutableString* result328;
    org$pandalanguage$pandac$ASTNode* base342;
    org$pandalanguage$pandac$ChoiceEntry* ce344;
    panda$core$Int64 index346;
    org$pandalanguage$pandac$ASTNode* dc360;
    panda$collections$ImmutableArray* annotations362;
    org$pandalanguage$pandac$ClassDecl$Kind kind364;
    panda$core$String* name366;
    panda$collections$ImmutableArray* generics368;
    panda$collections$ImmutableArray* supertypes370;
    panda$collections$ImmutableArray* members372;
    panda$core$MutableString* result374;
    panda$collections$Iterator* a$Iter379;
    org$pandalanguage$pandac$ASTNode* a391;
    org$pandalanguage$pandac$ClassDecl$Kind $match$208_17398;
    panda$collections$Iterator* m$Iter416;
    org$pandalanguage$pandac$ASTNode* m428;
    panda$core$Char8 $tmp435;
    panda$core$String* label438;
    org$pandalanguage$pandac$ASTNode* target446;
    org$pandalanguage$pandac$ASTNode* value448;
    panda$core$String* label460;
    panda$collections$ImmutableArray* statements462;
    org$pandalanguage$pandac$ASTNode* test464;
    panda$core$MutableString* result466;
    panda$collections$Iterator* s$Iter473;
    org$pandalanguage$pandac$ASTNode* s485;
    org$pandalanguage$pandac$ASTNode* base498;
    panda$core$String* field500;
    org$pandalanguage$pandac$ASTNode* dc510;
    panda$collections$ImmutableArray* annotations512;
    org$pandalanguage$pandac$ASTNode* decl514;
    panda$core$MutableString* result516;
    panda$collections$Iterator* a$Iter521;
    org$pandalanguage$pandac$ASTNode* a533;
    panda$collections$ImmutableArray* entries542;
    panda$core$MutableString* result544;
    panda$collections$Iterator* e$Iter547;
    org$pandalanguage$pandac$ASTNode* e559;
    panda$core$String* label568;
    org$pandalanguage$pandac$ASTNode* target570;
    org$pandalanguage$pandac$ASTNode* list572;
    panda$collections$ImmutableArray* statements574;
    panda$core$MutableString* result576;
    panda$collections$Iterator* s$Iter588;
    org$pandalanguage$pandac$ASTNode* s600;
    panda$core$Char8 $tmp607;
    panda$core$String* name610;
    panda$collections$ImmutableArray* subtypes612;
    panda$core$String* name622;
    org$pandalanguage$pandac$ASTNode* test625;
    panda$collections$ImmutableArray* ifTrue627;
    org$pandalanguage$pandac$ASTNode* ifFalse629;
    panda$core$MutableString* result631;
    panda$collections$Iterator* s$Iter638;
    org$pandalanguage$pandac$ASTNode* s650;
    panda$core$Char8 $tmp657;
    panda$core$UInt64 value664;
    panda$core$String* label668;
    panda$collections$ImmutableArray* statements670;
    panda$core$MutableString* result672;
    panda$collections$Iterator* s$Iter679;
    org$pandalanguage$pandac$ASTNode* s691;
    panda$core$Char8 $tmp698;
    org$pandalanguage$pandac$ASTNode* value701;
    panda$collections$ImmutableArray* whens703;
    panda$collections$ImmutableArray* other705;
    panda$core$MutableString* result707;
    panda$collections$Iterator* w$Iter714;
    org$pandalanguage$pandac$ASTNode* w726;
    panda$core$Char8 $tmp735;
    org$pandalanguage$pandac$ASTNode* dc738;
    panda$collections$ImmutableArray* annotations740;
    org$pandalanguage$pandac$MethodDecl$Kind kind742;
    panda$core$String* name744;
    panda$collections$ImmutableArray* parameters746;
    org$pandalanguage$pandac$ASTNode* returnType748;
    panda$collections$ImmutableArray* statements750;
    panda$core$MutableString* result752;
    panda$collections$Iterator* a$Iter757;
    org$pandalanguage$pandac$ASTNode* a769;
    org$pandalanguage$pandac$MethodDecl$Kind $match$321_17776;
    panda$collections$Iterator* s$Iter794;
    org$pandalanguage$pandac$ASTNode* s806;
    panda$core$Char8 $tmp813;
    org$pandalanguage$pandac$ASTNode* base818;
    panda$core$String* name823;
    panda$core$String* name826;
    org$pandalanguage$pandac$ASTNode* type828;
    org$pandalanguage$pandac$parser$Token$Kind kind837;
    org$pandalanguage$pandac$ASTNode* base839;
    org$pandalanguage$pandac$ASTNode* start850;
    org$pandalanguage$pandac$ASTNode* end852;
    panda$core$Bit inclusive854;
    org$pandalanguage$pandac$ASTNode* step856;
    panda$core$MutableString* result858;
    panda$core$Real64 value882;
    org$pandalanguage$pandac$ASTNode* value886;
    panda$core$String* str896;
    panda$core$String* name901;
    panda$core$String* name904;
    org$pandalanguage$pandac$ASTNode* type906;
    panda$core$String* name915;
    org$pandalanguage$pandac$Variable$Kind kind918;
    panda$collections$ImmutableArray* decls920;
    panda$core$MutableString* result922;
    org$pandalanguage$pandac$Variable$Kind $match$390_17925;
    panda$collections$ImmutableArray* tests937;
    panda$collections$ImmutableArray* statements939;
    panda$core$MutableString* result941;
    panda$core$String* separator945;
    panda$collections$Iterator* t$Iter947;
    org$pandalanguage$pandac$ASTNode* t959;
    panda$core$Char8 $tmp970;
    panda$collections$Iterator* s$Iter971;
    org$pandalanguage$pandac$ASTNode* s983;
    panda$core$String* label992;
    org$pandalanguage$pandac$ASTNode* test994;
    panda$collections$ImmutableArray* statements996;
    panda$core$MutableString* result998;
    panda$collections$Iterator* s$Iter1008;
    org$pandalanguage$pandac$ASTNode* s1020;
    panda$core$Char8 $tmp1027;
    {
        $match$165_9230 = self;
        panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp231.value) {
        {
            panda$core$String** $tmp233 = ((panda$core$String**) ((char*) $match$165_9230->$data + 16));
            name232 = *$tmp233;
            return name232;
        }
        }
        else {
        panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp234.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp236 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 16));
            test235 = *$tmp236;
            org$pandalanguage$pandac$ASTNode** $tmp238 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 24));
            msg237 = *$tmp238;
            if (((panda$core$Bit) { msg237 == NULL }).value) {
            {
                panda$core$String* $tmp240 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s239, ((panda$core$Object*) test235));
                panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp240, &$s241);
                return $tmp242;
            }
            }
            panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s243, ((panda$core$Object*) test235));
            panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, &$s245);
            panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp246, ((panda$core$Object*) msg237));
            panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, &$s248);
            return $tmp249;
        }
        }
        else {
        panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp250.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp252 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 16));
            left251 = *$tmp252;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp254 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$165_9230->$data + 24));
            op253 = *$tmp254;
            org$pandalanguage$pandac$ASTNode** $tmp256 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 32));
            right255 = *$tmp256;
            panda$core$String* $tmp258 = (($fn257) left251->$class->vtable[0])(left251);
            panda$core$String* $tmp260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp258, &$s259);
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp261;
            $tmp261 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
            $tmp261->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp261->refCount = 1;
            $tmp261->value = op253;
            panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp260, ((panda$core$Object*) $tmp261));
            panda$core$String* $tmp264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp262, &$s263);
            panda$core$String* $tmp265 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp264, ((panda$core$Object*) right255));
            panda$core$String* $tmp267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp265, &$s266);
            return $tmp267;
        }
        }
        else {
        panda$core$Bit $tmp268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp268.value) {
        {
            panda$core$Bit* $tmp270 = ((panda$core$Bit*) ((char*) $match$165_9230->$data + 16));
            value269 = *$tmp270;
            panda$core$String* $tmp271 = panda$core$Bit$convert$R$panda$core$String(value269);
            return $tmp271;
        }
        }
        else {
        panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp272.value) {
        {
            panda$collections$ImmutableArray** $tmp274 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 16));
            statements273 = *$tmp274;
            panda$core$MutableString* $tmp276 = (panda$core$MutableString*) malloc(48);
            $tmp276->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp276->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp276, &$s278);
            result275 = $tmp276;
            {
                ITable* $tmp280 = ((panda$collections$Iterable*) statements273)->$class->itable;
                while ($tmp280->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp280 = $tmp280->next;
                }
                $fn282 $tmp281 = $tmp280->methods[0];
                panda$collections$Iterator* $tmp283 = $tmp281(((panda$collections$Iterable*) statements273));
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
                    panda$core$MutableString$append$panda$core$String(result275, $tmp297);
                }
                goto $l284;
                $l285:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp298, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result275, $tmp298);
            panda$core$String* $tmp299 = panda$core$MutableString$finish$R$panda$core$String(result275);
            return $tmp299;
        }
        }
        else {
        panda$core$Bit $tmp300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp300.value) {
        {
            panda$core$String** $tmp302 = ((panda$core$String**) ((char*) $match$165_9230->$data + 16));
            label301 = *$tmp302;
            if (((panda$core$Bit) { label301 != NULL }).value) {
            {
                panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s303, label301);
                panda$core$String* $tmp306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp304, &$s305);
                return $tmp306;
            }
            }
            return &$s307;
        }
        }
        else {
        panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp308.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp310 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 16));
            target309 = *$tmp310;
            panda$collections$ImmutableArray** $tmp312 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 24));
            args311 = *$tmp312;
            panda$core$String* $tmp314 = (($fn313) target309->$class->vtable[0])(target309);
            panda$core$String* $tmp316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp314, &$s315);
            panda$core$String* $tmp317 = panda$collections$ImmutableArray$join$R$panda$core$String(args311);
            panda$core$String* $tmp318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp316, $tmp317);
            panda$core$String* $tmp320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp318, &$s319);
            return $tmp320;
        }
        }
        else {
        panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp321.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp323 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 16));
            dc322 = *$tmp323;
            panda$core$String** $tmp325 = ((panda$core$String**) ((char*) $match$165_9230->$data + 24));
            name324 = *$tmp325;
            panda$collections$ImmutableArray** $tmp327 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 32));
            fields326 = *$tmp327;
            panda$core$MutableString* $tmp329 = (panda$core$MutableString*) malloc(48);
            $tmp329->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp329->refCount.value = 1;
            panda$core$MutableString$init($tmp329);
            result328 = $tmp329;
            if (((panda$core$Bit) { dc322 != NULL }).value) {
            {
                panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc322), &$s331);
                panda$core$MutableString$append$panda$core$String(result328, $tmp332);
            }
            }
            panda$core$String* $tmp333 = panda$core$String$convert$R$panda$core$String(name324);
            panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp333, &$s334);
            panda$core$String* $tmp336 = panda$collections$ImmutableArray$join$R$panda$core$String(fields326);
            panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp335, $tmp336);
            panda$core$String* $tmp339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp337, &$s338);
            panda$core$MutableString$append$panda$core$String(result328, $tmp339);
            panda$core$String* $tmp340 = panda$core$MutableString$finish$R$panda$core$String(result328);
            return $tmp340;
        }
        }
        else {
        panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp341.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp343 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 16));
            base342 = *$tmp343;
            org$pandalanguage$pandac$ChoiceEntry** $tmp345 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$165_9230->$data + 24));
            ce344 = *$tmp345;
            panda$core$Int64* $tmp347 = ((panda$core$Int64*) ((char*) $match$165_9230->$data + 32));
            index346 = *$tmp347;
            panda$core$String* $tmp349 = (($fn348) base342->$class->vtable[0])(base342);
            panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp349, &$s350);
            panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp351, ((panda$core$Object*) ce344));
            panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp352, &$s353);
            panda$core$Int64$wrapper* $tmp355;
            $tmp355 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp355->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp355->refCount = 1;
            $tmp355->value = index346;
            panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp354, ((panda$core$Object*) $tmp355));
            panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp356, &$s357);
            return $tmp358;
        }
        }
        else {
        panda$core$Bit $tmp359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp359.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp361 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 16));
            dc360 = *$tmp361;
            panda$collections$ImmutableArray** $tmp363 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 24));
            annotations362 = *$tmp363;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp365 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$165_9230->$data + 32));
            kind364 = *$tmp365;
            panda$core$String** $tmp367 = ((panda$core$String**) ((char*) $match$165_9230->$data + 40));
            name366 = *$tmp367;
            panda$collections$ImmutableArray** $tmp369 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 48));
            generics368 = *$tmp369;
            panda$collections$ImmutableArray** $tmp371 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 56));
            supertypes370 = *$tmp371;
            panda$collections$ImmutableArray** $tmp373 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 64));
            members372 = *$tmp373;
            panda$core$MutableString* $tmp375 = (panda$core$MutableString*) malloc(48);
            $tmp375->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp375->refCount.value = 1;
            panda$core$MutableString$init($tmp375);
            result374 = $tmp375;
            if (((panda$core$Bit) { dc360 != NULL }).value) {
            {
                panda$core$String* $tmp378 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc360), &$s377);
                panda$core$MutableString$append$panda$core$String(result374, $tmp378);
            }
            }
            {
                ITable* $tmp380 = ((panda$collections$Iterable*) annotations362)->$class->itable;
                while ($tmp380->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp380 = $tmp380->next;
                }
                $fn382 $tmp381 = $tmp380->methods[0];
                panda$collections$Iterator* $tmp383 = $tmp381(((panda$collections$Iterable*) annotations362));
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
                    panda$core$MutableString$append$panda$core$String(result374, $tmp397);
                }
                goto $l384;
                $l385:;
            }
            {
                $match$208_17398 = kind364;
                panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17398.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp399.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result374, &$s400);
                }
                }
                else {
                panda$core$Bit $tmp401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17398.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp401.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result374, &$s402);
                }
                }
                else {
                panda$core$Bit $tmp403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17398.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp403.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result374, &$s404);
                }
                }
                }
                }
            }
            panda$core$MutableString$append$panda$core$String(result374, name366);
            if (((panda$core$Bit) { generics368 != NULL }).value) {
            {
                panda$core$String* $tmp406 = panda$collections$ImmutableArray$join$R$panda$core$String(generics368);
                panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s405, $tmp406);
                panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp407, &$s408);
                panda$core$MutableString$append$panda$core$String(result374, $tmp409);
            }
            }
            if (((panda$core$Bit) { supertypes370 != NULL }).value) {
            {
                panda$core$String* $tmp411 = panda$collections$ImmutableArray$join$R$panda$core$String(supertypes370);
                panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s410, $tmp411);
                panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp412, &$s413);
                panda$core$MutableString$append$panda$core$String(result374, $tmp414);
            }
            }
            panda$core$MutableString$append$panda$core$String(result374, &$s415);
            {
                ITable* $tmp417 = ((panda$collections$Iterable*) members372)->$class->itable;
                while ($tmp417->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp417 = $tmp417->next;
                }
                $fn419 $tmp418 = $tmp417->methods[0];
                panda$collections$Iterator* $tmp420 = $tmp418(((panda$collections$Iterable*) members372));
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
                    panda$core$MutableString$append$panda$core$String(result374, $tmp434);
                }
                goto $l421;
                $l422:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp435, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result374, $tmp435);
            panda$core$String* $tmp436 = panda$core$MutableString$finish$R$panda$core$String(result374);
            return $tmp436;
        }
        }
        else {
        panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp437.value) {
        {
            panda$core$String** $tmp439 = ((panda$core$String**) ((char*) $match$165_9230->$data + 16));
            label438 = *$tmp439;
            if (((panda$core$Bit) { label438 != NULL }).value) {
            {
                panda$core$String* $tmp441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s440, label438);
                panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp441, &$s442);
                return $tmp443;
            }
            }
            return &$s444;
        }
        }
        else {
        panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp445.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp447 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 16));
            target446 = *$tmp447;
            org$pandalanguage$pandac$ASTNode** $tmp449 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 24));
            value448 = *$tmp449;
            if (((panda$core$Bit) { value448 != NULL }).value) {
            {
                panda$core$String* $tmp451 = (($fn450) target446->$class->vtable[0])(target446);
                panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp451, &$s452);
                panda$core$String* $tmp454 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp453, ((panda$core$Object*) value448));
                panda$core$String* $tmp456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp454, &$s455);
                return $tmp456;
            }
            }
            panda$core$String* $tmp458 = (($fn457) target446->$class->vtable[0])(target446);
            return $tmp458;
        }
        }
        else {
        panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp459.value) {
        {
            panda$core$String** $tmp461 = ((panda$core$String**) ((char*) $match$165_9230->$data + 16));
            label460 = *$tmp461;
            panda$collections$ImmutableArray** $tmp463 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 24));
            statements462 = *$tmp463;
            org$pandalanguage$pandac$ASTNode** $tmp465 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 32));
            test464 = *$tmp465;
            panda$core$MutableString* $tmp467 = (panda$core$MutableString*) malloc(48);
            $tmp467->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp467->refCount.value = 1;
            panda$core$MutableString$init($tmp467);
            result466 = $tmp467;
            if (((panda$core$Bit) { label460 != NULL }).value) {
            {
                panda$core$String* $tmp469 = panda$core$String$convert$R$panda$core$String(label460);
                panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp469, &$s470);
                panda$core$MutableString$append$panda$core$String(result466, $tmp471);
            }
            }
            panda$core$MutableString$append$panda$core$String(result466, &$s472);
            {
                ITable* $tmp474 = ((panda$collections$Iterable*) statements462)->$class->itable;
                while ($tmp474->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp474 = $tmp474->next;
                }
                $fn476 $tmp475 = $tmp474->methods[0];
                panda$collections$Iterator* $tmp477 = $tmp475(((panda$collections$Iterable*) statements462));
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
                    panda$core$MutableString$append$panda$core$String(result466, $tmp491);
                }
                goto $l478;
                $l479:;
            }
            panda$core$String* $tmp493 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s492, ((panda$core$Object*) test464));
            panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp493, &$s494);
            panda$core$MutableString$append$panda$core$String(result466, $tmp495);
            panda$core$String* $tmp496 = panda$core$MutableString$finish$R$panda$core$String(result466);
            return $tmp496;
        }
        }
        else {
        panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp497.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp499 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 16));
            base498 = *$tmp499;
            panda$core$String** $tmp501 = ((panda$core$String**) ((char*) $match$165_9230->$data + 24));
            field500 = *$tmp501;
            panda$core$String* $tmp503 = (($fn502) base498->$class->vtable[0])(base498);
            panda$core$String* $tmp505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp503, &$s504);
            panda$core$String* $tmp506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp505, field500);
            panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp506, &$s507);
            return $tmp508;
        }
        }
        else {
        panda$core$Bit $tmp509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp509.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp511 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 16));
            dc510 = *$tmp511;
            panda$collections$ImmutableArray** $tmp513 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 24));
            annotations512 = *$tmp513;
            org$pandalanguage$pandac$ASTNode** $tmp515 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 32));
            decl514 = *$tmp515;
            panda$core$MutableString* $tmp517 = (panda$core$MutableString*) malloc(48);
            $tmp517->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp517->refCount.value = 1;
            panda$core$MutableString$init($tmp517);
            result516 = $tmp517;
            if (((panda$core$Bit) { dc510 != NULL }).value) {
            {
                panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc510), &$s519);
                panda$core$MutableString$append$panda$core$String(result516, $tmp520);
            }
            }
            {
                ITable* $tmp522 = ((panda$collections$Iterable*) annotations512)->$class->itable;
                while ($tmp522->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp522 = $tmp522->next;
                }
                $fn524 $tmp523 = $tmp522->methods[0];
                panda$collections$Iterator* $tmp525 = $tmp523(((panda$collections$Iterable*) annotations512));
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
                    panda$core$MutableString$append$panda$core$String(result516, $tmp539);
                }
                goto $l526;
                $l527:;
            }
            panda$core$MutableString$append$panda$core$Object(result516, ((panda$core$Object*) decl514));
            panda$core$String* $tmp540 = panda$core$MutableString$finish$R$panda$core$String(result516);
            return $tmp540;
        }
        }
        else {
        panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp541.value) {
        {
            panda$collections$ImmutableArray** $tmp543 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 0));
            entries542 = *$tmp543;
            panda$core$MutableString* $tmp545 = (panda$core$MutableString*) malloc(48);
            $tmp545->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp545->refCount.value = 1;
            panda$core$MutableString$init($tmp545);
            result544 = $tmp545;
            {
                ITable* $tmp548 = ((panda$collections$Iterable*) entries542)->$class->itable;
                while ($tmp548->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp548 = $tmp548->next;
                }
                $fn550 $tmp549 = $tmp548->methods[0];
                panda$collections$Iterator* $tmp551 = $tmp549(((panda$collections$Iterable*) entries542));
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
                    panda$core$MutableString$append$panda$core$String(result544, $tmp565);
                }
                goto $l552;
                $l553:;
            }
            panda$core$String* $tmp566 = panda$core$MutableString$finish$R$panda$core$String(result544);
            return $tmp566;
        }
        }
        else {
        panda$core$Bit $tmp567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp567.value) {
        {
            panda$core$String** $tmp569 = ((panda$core$String**) ((char*) $match$165_9230->$data + 16));
            label568 = *$tmp569;
            org$pandalanguage$pandac$ASTNode** $tmp571 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 24));
            target570 = *$tmp571;
            org$pandalanguage$pandac$ASTNode** $tmp573 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 32));
            list572 = *$tmp573;
            panda$collections$ImmutableArray** $tmp575 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 40));
            statements574 = *$tmp575;
            panda$core$MutableString* $tmp577 = (panda$core$MutableString*) malloc(48);
            $tmp577->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp577->refCount.value = 1;
            panda$core$MutableString$init($tmp577);
            result576 = $tmp577;
            if (((panda$core$Bit) { label568 != NULL }).value) {
            {
                panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label568, &$s579);
                panda$core$MutableString$append$panda$core$String(result576, $tmp580);
            }
            }
            panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s581, ((panda$core$Object*) target570));
            panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, &$s583);
            panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp584, ((panda$core$Object*) list572));
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, &$s586);
            panda$core$MutableString$append$panda$core$String(result576, $tmp587);
            {
                ITable* $tmp589 = ((panda$collections$Iterable*) statements574)->$class->itable;
                while ($tmp589->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp589 = $tmp589->next;
                }
                $fn591 $tmp590 = $tmp589->methods[0];
                panda$collections$Iterator* $tmp592 = $tmp590(((panda$collections$Iterable*) statements574));
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
                    panda$core$MutableString$append$panda$core$String(result576, $tmp606);
                }
                goto $l593;
                $l594:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp607, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result576, $tmp607);
            panda$core$String* $tmp608 = panda$core$MutableString$finish$R$panda$core$String(result576);
            return $tmp608;
        }
        }
        else {
        panda$core$Bit $tmp609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp609.value) {
        {
            panda$core$String** $tmp611 = ((panda$core$String**) ((char*) $match$165_9230->$data + 16));
            name610 = *$tmp611;
            panda$collections$ImmutableArray** $tmp613 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 24));
            subtypes612 = *$tmp613;
            panda$core$String* $tmp614 = panda$core$String$convert$R$panda$core$String(name610);
            panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp614, &$s615);
            panda$core$String* $tmp617 = panda$collections$ImmutableArray$join$R$panda$core$String(subtypes612);
            panda$core$String* $tmp618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp616, $tmp617);
            panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp618, &$s619);
            return $tmp620;
        }
        }
        else {
        panda$core$Bit $tmp621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp621.value) {
        {
            panda$core$String** $tmp623 = ((panda$core$String**) ((char*) $match$165_9230->$data + 16));
            name622 = *$tmp623;
            return name622;
        }
        }
        else {
        panda$core$Bit $tmp624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp624.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp626 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 16));
            test625 = *$tmp626;
            panda$collections$ImmutableArray** $tmp628 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 24));
            ifTrue627 = *$tmp628;
            org$pandalanguage$pandac$ASTNode** $tmp630 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 32));
            ifFalse629 = *$tmp630;
            panda$core$MutableString* $tmp632 = (panda$core$MutableString*) malloc(48);
            $tmp632->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp632->refCount.value = 1;
            panda$core$String* $tmp635 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s634, ((panda$core$Object*) test625));
            panda$core$String* $tmp637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp635, &$s636);
            panda$core$MutableString$init$panda$core$String($tmp632, $tmp637);
            result631 = $tmp632;
            {
                ITable* $tmp639 = ((panda$collections$Iterable*) ifTrue627)->$class->itable;
                while ($tmp639->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp639 = $tmp639->next;
                }
                $fn641 $tmp640 = $tmp639->methods[0];
                panda$collections$Iterator* $tmp642 = $tmp640(((panda$collections$Iterable*) ifTrue627));
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
                    panda$core$MutableString$append$panda$core$String(result631, $tmp656);
                }
                goto $l643;
                $l644:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp657, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result631, $tmp657);
            if (((panda$core$Bit) { ifFalse629 != NULL }).value) {
            {
                panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s658, ((panda$core$Object*) ifFalse629));
                panda$core$String* $tmp661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp659, &$s660);
                panda$core$MutableString$append$panda$core$String(result631, $tmp661);
            }
            }
            panda$core$String* $tmp662 = panda$core$MutableString$finish$R$panda$core$String(result631);
            return $tmp662;
        }
        }
        else {
        panda$core$Bit $tmp663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp663.value) {
        {
            panda$core$UInt64* $tmp665 = ((panda$core$UInt64*) ((char*) $match$165_9230->$data + 16));
            value664 = *$tmp665;
            panda$core$String* $tmp666 = panda$core$UInt64$convert$R$panda$core$String(value664);
            return $tmp666;
        }
        }
        else {
        panda$core$Bit $tmp667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp667.value) {
        {
            panda$core$String** $tmp669 = ((panda$core$String**) ((char*) $match$165_9230->$data + 16));
            label668 = *$tmp669;
            panda$collections$ImmutableArray** $tmp671 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 24));
            statements670 = *$tmp671;
            panda$core$MutableString* $tmp673 = (panda$core$MutableString*) malloc(48);
            $tmp673->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp673->refCount.value = 1;
            panda$core$MutableString$init($tmp673);
            result672 = $tmp673;
            if (((panda$core$Bit) { label668 != NULL }).value) {
            {
                panda$core$String* $tmp675 = panda$core$String$convert$R$panda$core$String(label668);
                panda$core$String* $tmp677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp675, &$s676);
                panda$core$MutableString$append$panda$core$String(result672, $tmp677);
            }
            }
            panda$core$MutableString$append$panda$core$String(result672, &$s678);
            {
                ITable* $tmp680 = ((panda$collections$Iterable*) statements670)->$class->itable;
                while ($tmp680->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp680 = $tmp680->next;
                }
                $fn682 $tmp681 = $tmp680->methods[0];
                panda$collections$Iterator* $tmp683 = $tmp681(((panda$collections$Iterable*) statements670));
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
                    panda$core$MutableString$append$panda$core$String(result672, $tmp697);
                }
                goto $l684;
                $l685:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp698, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result672, $tmp698);
            panda$core$String* $tmp699 = panda$core$MutableString$finish$R$panda$core$String(result672);
            return $tmp699;
        }
        }
        else {
        panda$core$Bit $tmp700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp700.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp702 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 16));
            value701 = *$tmp702;
            panda$collections$ImmutableArray** $tmp704 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 24));
            whens703 = *$tmp704;
            panda$collections$ImmutableArray** $tmp706 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 32));
            other705 = *$tmp706;
            panda$core$MutableString* $tmp708 = (panda$core$MutableString*) malloc(48);
            $tmp708->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp708->refCount.value = 1;
            panda$core$String* $tmp711 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s710, ((panda$core$Object*) value701));
            panda$core$String* $tmp713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp711, &$s712);
            panda$core$MutableString$init$panda$core$String($tmp708, $tmp713);
            result707 = $tmp708;
            {
                ITable* $tmp715 = ((panda$collections$Iterable*) whens703)->$class->itable;
                while ($tmp715->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp715 = $tmp715->next;
                }
                $fn717 $tmp716 = $tmp715->methods[0];
                panda$collections$Iterator* $tmp718 = $tmp716(((panda$collections$Iterable*) whens703));
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
                    panda$core$MutableString$append$panda$core$String(result707, $tmp732);
                }
                goto $l719;
                $l720:;
            }
            if (((panda$core$Bit) { other705 != NULL }).value) {
            {
                panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other705), &$s733);
                panda$core$MutableString$append$panda$core$String(result707, $tmp734);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp735, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result707, $tmp735);
            panda$core$String* $tmp736 = panda$core$MutableString$finish$R$panda$core$String(result707);
            return $tmp736;
        }
        }
        else {
        panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp737.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp739 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 16));
            dc738 = *$tmp739;
            panda$collections$ImmutableArray** $tmp741 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 24));
            annotations740 = *$tmp741;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp743 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$165_9230->$data + 32));
            kind742 = *$tmp743;
            panda$core$String** $tmp745 = ((panda$core$String**) ((char*) $match$165_9230->$data + 40));
            name744 = *$tmp745;
            panda$collections$ImmutableArray** $tmp747 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 48));
            parameters746 = *$tmp747;
            org$pandalanguage$pandac$ASTNode** $tmp749 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 56));
            returnType748 = *$tmp749;
            panda$collections$ImmutableArray** $tmp751 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 64));
            statements750 = *$tmp751;
            panda$core$MutableString* $tmp753 = (panda$core$MutableString*) malloc(48);
            $tmp753->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp753->refCount.value = 1;
            panda$core$MutableString$init($tmp753);
            result752 = $tmp753;
            if (((panda$core$Bit) { dc738 != NULL }).value) {
            {
                panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc738), &$s755);
                panda$core$MutableString$append$panda$core$String(result752, $tmp756);
            }
            }
            {
                ITable* $tmp758 = ((panda$collections$Iterable*) annotations740)->$class->itable;
                while ($tmp758->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp758 = $tmp758->next;
                }
                $fn760 $tmp759 = $tmp758->methods[0];
                panda$collections$Iterator* $tmp761 = $tmp759(((panda$collections$Iterable*) annotations740));
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
                    panda$core$MutableString$append$panda$core$String(result752, $tmp775);
                }
                goto $l762;
                $l763:;
            }
            {
                $match$321_17776 = kind742;
                panda$core$Bit $tmp777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17776.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp777.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result752, &$s778);
                }
                }
                else {
                panda$core$Bit $tmp779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17776.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp779.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result752, &$s780);
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
            panda$core$String* $tmp782 = panda$core$String$convert$R$panda$core$String(name744);
            panda$core$String* $tmp784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp782, &$s783);
            panda$core$String* $tmp785 = panda$collections$ImmutableArray$join$R$panda$core$String(parameters746);
            panda$core$String* $tmp786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp784, $tmp785);
            panda$core$String* $tmp788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp786, &$s787);
            panda$core$MutableString$append$panda$core$String(result752, $tmp788);
            if (((panda$core$Bit) { returnType748 != NULL }).value) {
            {
                panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s789, ((panda$core$Object*) returnType748));
                panda$core$String* $tmp792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp790, &$s791);
                panda$core$MutableString$append$panda$core$String(result752, $tmp792);
            }
            }
            if (((panda$core$Bit) { statements750 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result752, &$s793);
                {
                    ITable* $tmp795 = ((panda$collections$Iterable*) statements750)->$class->itable;
                    while ($tmp795->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp795 = $tmp795->next;
                    }
                    $fn797 $tmp796 = $tmp795->methods[0];
                    panda$collections$Iterator* $tmp798 = $tmp796(((panda$collections$Iterable*) statements750));
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
                        panda$core$MutableString$append$panda$core$String(result752, $tmp812);
                    }
                    goto $l799;
                    $l800:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp813, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result752, $tmp813);
            }
            }
            panda$core$String* $tmp814 = panda$core$MutableString$finish$R$panda$core$String(result752);
            return $tmp814;
        }
        }
        else {
        panda$core$Bit $tmp815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp815.value) {
        {
            return &$s816;
        }
        }
        else {
        panda$core$Bit $tmp817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp817.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp819 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 16));
            base818 = *$tmp819;
            panda$core$String* $tmp821 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base818), &$s820);
            return $tmp821;
        }
        }
        else {
        panda$core$Bit $tmp822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp822.value) {
        {
            panda$core$String** $tmp824 = ((panda$core$String**) ((char*) $match$165_9230->$data + 16));
            name823 = *$tmp824;
            return name823;
        }
        }
        else {
        panda$core$Bit $tmp825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp825.value) {
        {
            panda$core$String** $tmp827 = ((panda$core$String**) ((char*) $match$165_9230->$data + 16));
            name826 = *$tmp827;
            org$pandalanguage$pandac$ASTNode** $tmp829 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 24));
            type828 = *$tmp829;
            panda$core$String* $tmp830 = panda$core$String$convert$R$panda$core$String(name826);
            panda$core$String* $tmp832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp830, &$s831);
            panda$core$String* $tmp833 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp832, ((panda$core$Object*) type828));
            panda$core$String* $tmp835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp833, &$s834);
            return $tmp835;
        }
        }
        else {
        panda$core$Bit $tmp836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp836.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp838 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$165_9230->$data + 16));
            kind837 = *$tmp838;
            org$pandalanguage$pandac$ASTNode** $tmp840 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 24));
            base839 = *$tmp840;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp841;
            $tmp841 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
            $tmp841->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp841->refCount = 1;
            $tmp841->value = kind837;
            panda$core$String* $tmp843 = (($fn842) ((panda$core$Object*) $tmp841)->$class->vtable[0])(((panda$core$Object*) $tmp841));
            panda$core$String* $tmp845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp843, &$s844);
            panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp845, ((panda$core$Object*) base839));
            panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp846, &$s847);
            return $tmp848;
        }
        }
        else {
        panda$core$Bit $tmp849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp849.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp851 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 16));
            start850 = *$tmp851;
            org$pandalanguage$pandac$ASTNode** $tmp853 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 24));
            end852 = *$tmp853;
            panda$core$Bit* $tmp855 = ((panda$core$Bit*) ((char*) $match$165_9230->$data + 32));
            inclusive854 = *$tmp855;
            org$pandalanguage$pandac$ASTNode** $tmp857 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 33));
            step856 = *$tmp857;
            panda$core$MutableString* $tmp859 = (panda$core$MutableString*) malloc(48);
            $tmp859->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp859->refCount.value = 1;
            panda$core$MutableString$init($tmp859);
            result858 = $tmp859;
            panda$core$Bit $tmp864;
            if (((panda$core$Bit) { start850 != NULL }).value) goto $l861; else goto $l862;
            $l861:;
            panda$core$Bit $tmp865 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start850->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp864 = $tmp865;
            goto $l863;
            $l862:;
            $tmp864 = ((panda$core$Bit) { true });
            goto $l863;
            $l863:;
            if ($tmp864.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result858, ((panda$core$Object*) start850));
            }
            }
            if (inclusive854.value) {
            {
                panda$core$MutableString$append$panda$core$String(result858, &$s866);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result858, &$s867);
            }
            }
            panda$core$Bit $tmp871;
            if (((panda$core$Bit) { end852 != NULL }).value) goto $l868; else goto $l869;
            $l868:;
            panda$core$Bit $tmp872 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(end852->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp871 = $tmp872;
            goto $l870;
            $l869:;
            $tmp871 = ((panda$core$Bit) { true });
            goto $l870;
            $l870:;
            if ($tmp871.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result858, ((panda$core$Object*) end852));
            }
            }
            panda$core$Bit $tmp876;
            if (((panda$core$Bit) { step856 != NULL }).value) goto $l873; else goto $l874;
            $l873:;
            panda$core$Bit $tmp877 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(step856->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp876 = $tmp877;
            goto $l875;
            $l874:;
            $tmp876 = ((panda$core$Bit) { true });
            goto $l875;
            $l875:;
            if ($tmp876.value) {
            {
                panda$core$String* $tmp879 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s878, ((panda$core$Object*) step856));
                panda$core$MutableString$append$panda$core$String(result858, $tmp879);
            }
            }
            panda$core$String* $tmp880 = panda$core$MutableString$finish$R$panda$core$String(result858);
            return $tmp880;
        }
        }
        else {
        panda$core$Bit $tmp881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp881.value) {
        {
            panda$core$Real64* $tmp883 = ((panda$core$Real64*) ((char*) $match$165_9230->$data + 16));
            value882 = *$tmp883;
            panda$core$String* $tmp884 = panda$core$Real64$convert$R$panda$core$String(value882);
            return $tmp884;
        }
        }
        else {
        panda$core$Bit $tmp885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp885.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp887 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 16));
            value886 = *$tmp887;
            if (((panda$core$Bit) { value886 != NULL }).value) {
            {
                panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s888, ((panda$core$Object*) value886));
                panda$core$String* $tmp891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp889, &$s890);
                return $tmp891;
            }
            }
            return &$s892;
        }
        }
        else {
        panda$core$Bit $tmp893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp893.value) {
        {
            return &$s894;
        }
        }
        else {
        panda$core$Bit $tmp895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp895.value) {
        {
            panda$core$String** $tmp897 = ((panda$core$String**) ((char*) $match$165_9230->$data + 16));
            str896 = *$tmp897;
            return str896;
        }
        }
        else {
        panda$core$Bit $tmp898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp898.value) {
        {
            return &$s899;
        }
        }
        else {
        panda$core$Bit $tmp900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp900.value) {
        {
            panda$core$String** $tmp902 = ((panda$core$String**) ((char*) $match$165_9230->$data + 16));
            name901 = *$tmp902;
            return name901;
        }
        }
        else {
        panda$core$Bit $tmp903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp903.value) {
        {
            panda$core$String** $tmp905 = ((panda$core$String**) ((char*) $match$165_9230->$data + 16));
            name904 = *$tmp905;
            org$pandalanguage$pandac$ASTNode** $tmp907 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 24));
            type906 = *$tmp907;
            if (((panda$core$Bit) { type906 != NULL }).value) {
            {
                panda$core$String* $tmp908 = panda$core$String$convert$R$panda$core$String(name904);
                panda$core$String* $tmp910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp908, &$s909);
                panda$core$String* $tmp911 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp910, ((panda$core$Object*) type906));
                panda$core$String* $tmp913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp911, &$s912);
                return $tmp913;
            }
            }
            return name904;
        }
        }
        else {
        panda$core$Bit $tmp914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp914.value) {
        {
            panda$core$String** $tmp916 = ((panda$core$String**) ((char*) $match$165_9230->$data + 16));
            name915 = *$tmp916;
            return name915;
        }
        }
        else {
        panda$core$Bit $tmp917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp917.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp919 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$165_9230->$data + 16));
            kind918 = *$tmp919;
            panda$collections$ImmutableArray** $tmp921 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 24));
            decls920 = *$tmp921;
            panda$core$MutableString* $tmp923 = (panda$core$MutableString*) malloc(48);
            $tmp923->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp923->refCount.value = 1;
            panda$core$MutableString$init($tmp923);
            result922 = $tmp923;
            {
                $match$390_17925 = kind918;
                panda$core$Bit $tmp926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17925.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp926.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result922, &$s927);
                }
                }
                else {
                panda$core$Bit $tmp928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17925.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp928.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result922, &$s929);
                }
                }
                else {
                panda$core$Bit $tmp930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17925.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp930.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result922, &$s931);
                }
                }
                else {
                panda$core$Bit $tmp932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17925.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp932.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result922, &$s933);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp934 = panda$collections$ImmutableArray$join$R$panda$core$String(decls920);
            panda$core$MutableString$append$panda$core$String(result922, $tmp934);
            panda$core$String* $tmp935 = panda$core$MutableString$finish$R$panda$core$String(result922);
            return $tmp935;
        }
        }
        else {
        panda$core$Bit $tmp936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp936.value) {
        {
            panda$collections$ImmutableArray** $tmp938 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 16));
            tests937 = *$tmp938;
            panda$collections$ImmutableArray** $tmp940 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 24));
            statements939 = *$tmp940;
            panda$core$MutableString* $tmp942 = (panda$core$MutableString*) malloc(48);
            $tmp942->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp942->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp942, &$s944);
            result941 = $tmp942;
            separator945 = &$s946;
            {
                ITable* $tmp948 = ((panda$collections$Iterable*) tests937)->$class->itable;
                while ($tmp948->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp948 = $tmp948->next;
                }
                $fn950 $tmp949 = $tmp948->methods[0];
                panda$collections$Iterator* $tmp951 = $tmp949(((panda$collections$Iterable*) tests937));
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
                    panda$core$MutableString$append$panda$core$String(result941, $tmp969);
                }
                goto $l952;
                $l953:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp970, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result941, $tmp970);
            {
                ITable* $tmp972 = ((panda$collections$Iterable*) statements939)->$class->itable;
                while ($tmp972->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp972 = $tmp972->next;
                }
                $fn974 $tmp973 = $tmp972->methods[0];
                panda$collections$Iterator* $tmp975 = $tmp973(((panda$collections$Iterable*) statements939));
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
                    panda$core$MutableString$append$panda$core$String(result941, $tmp989);
                }
                goto $l976;
                $l977:;
            }
            panda$core$String* $tmp990 = panda$core$MutableString$finish$R$panda$core$String(result941);
            return $tmp990;
        }
        }
        else {
        panda$core$Bit $tmp991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9230->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp991.value) {
        {
            panda$core$String** $tmp993 = ((panda$core$String**) ((char*) $match$165_9230->$data + 16));
            label992 = *$tmp993;
            org$pandalanguage$pandac$ASTNode** $tmp995 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9230->$data + 24));
            test994 = *$tmp995;
            panda$collections$ImmutableArray** $tmp997 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9230->$data + 32));
            statements996 = *$tmp997;
            panda$core$MutableString* $tmp999 = (panda$core$MutableString*) malloc(48);
            $tmp999->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp999->refCount.value = 1;
            panda$core$MutableString$init($tmp999);
            result998 = $tmp999;
            if (((panda$core$Bit) { label992 != NULL }).value) {
            {
                panda$core$String* $tmp1001 = panda$core$String$convert$R$panda$core$String(label992);
                panda$core$String* $tmp1003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1001, &$s1002);
                panda$core$MutableString$append$panda$core$String(result998, $tmp1003);
            }
            }
            panda$core$String* $tmp1005 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1004, ((panda$core$Object*) test994));
            panda$core$String* $tmp1007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1005, &$s1006);
            panda$core$MutableString$append$panda$core$String(result998, $tmp1007);
            {
                ITable* $tmp1009 = ((panda$collections$Iterable*) statements996)->$class->itable;
                while ($tmp1009->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1009 = $tmp1009->next;
                }
                $fn1011 $tmp1010 = $tmp1009->methods[0];
                panda$collections$Iterator* $tmp1012 = $tmp1010(((panda$collections$Iterable*) statements996));
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
                    panda$core$MutableString$append$panda$core$String(result998, $tmp1026);
                }
                goto $l1013;
                $l1014:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1027, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result998, $tmp1027);
            panda$core$String* $tmp1028 = panda$core$MutableString$finish$R$panda$core$String(result998);
            return $tmp1028;
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

