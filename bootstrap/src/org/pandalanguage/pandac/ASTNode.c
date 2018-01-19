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
typedef panda$collections$Iterator* (*$fn283)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn289)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn295)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn314)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn349)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn383)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn389)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn395)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn420)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn426)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn432)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn451)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn458)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn477)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn483)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn489)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn503)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn525)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn531)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn537)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn551)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn557)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn563)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn592)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn598)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn604)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn642)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn648)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn654)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn683)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn689)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn695)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn718)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn724)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn730)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn761)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn767)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn773)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn798)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn804)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn810)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn843)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn951)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn957)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn963)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn975)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn981)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn987)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1012)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1018)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1024)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s947 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    panda$collections$Iterator* s$Iter280;
    org$pandalanguage$pandac$ASTNode* s292;
    panda$core$Char8 $tmp299;
    panda$core$String* label302;
    org$pandalanguage$pandac$ASTNode* target310;
    panda$collections$ImmutableArray* args312;
    org$pandalanguage$pandac$ASTNode* dc323;
    panda$core$String* name325;
    panda$collections$ImmutableArray* fields327;
    panda$core$MutableString* result329;
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
    panda$collections$Iterator* a$Iter380;
    org$pandalanguage$pandac$ASTNode* a392;
    org$pandalanguage$pandac$ClassDecl$Kind $match$208_17399;
    panda$collections$Iterator* m$Iter417;
    org$pandalanguage$pandac$ASTNode* m429;
    panda$core$Char8 $tmp436;
    panda$core$String* label439;
    org$pandalanguage$pandac$ASTNode* target447;
    org$pandalanguage$pandac$ASTNode* value449;
    panda$core$String* label461;
    panda$collections$ImmutableArray* statements463;
    org$pandalanguage$pandac$ASTNode* test465;
    panda$core$MutableString* result467;
    panda$collections$Iterator* s$Iter474;
    org$pandalanguage$pandac$ASTNode* s486;
    org$pandalanguage$pandac$ASTNode* base499;
    panda$core$String* field501;
    org$pandalanguage$pandac$ASTNode* dc511;
    panda$collections$ImmutableArray* annotations513;
    org$pandalanguage$pandac$ASTNode* decl515;
    panda$core$MutableString* result517;
    panda$collections$Iterator* a$Iter522;
    org$pandalanguage$pandac$ASTNode* a534;
    panda$collections$ImmutableArray* entries543;
    panda$core$MutableString* result545;
    panda$collections$Iterator* e$Iter548;
    org$pandalanguage$pandac$ASTNode* e560;
    panda$core$String* label569;
    org$pandalanguage$pandac$ASTNode* target571;
    org$pandalanguage$pandac$ASTNode* list573;
    panda$collections$ImmutableArray* statements575;
    panda$core$MutableString* result577;
    panda$collections$Iterator* s$Iter589;
    org$pandalanguage$pandac$ASTNode* s601;
    panda$core$Char8 $tmp608;
    panda$core$String* name611;
    panda$collections$ImmutableArray* subtypes613;
    panda$core$String* name623;
    org$pandalanguage$pandac$ASTNode* test626;
    panda$collections$ImmutableArray* ifTrue628;
    org$pandalanguage$pandac$ASTNode* ifFalse630;
    panda$core$MutableString* result632;
    panda$collections$Iterator* s$Iter639;
    org$pandalanguage$pandac$ASTNode* s651;
    panda$core$Char8 $tmp658;
    panda$core$UInt64 value665;
    panda$core$String* label669;
    panda$collections$ImmutableArray* statements671;
    panda$core$MutableString* result673;
    panda$collections$Iterator* s$Iter680;
    org$pandalanguage$pandac$ASTNode* s692;
    panda$core$Char8 $tmp699;
    org$pandalanguage$pandac$ASTNode* value702;
    panda$collections$ImmutableArray* whens704;
    panda$collections$ImmutableArray* other706;
    panda$core$MutableString* result708;
    panda$collections$Iterator* w$Iter715;
    org$pandalanguage$pandac$ASTNode* w727;
    panda$core$Char8 $tmp736;
    org$pandalanguage$pandac$ASTNode* dc739;
    panda$collections$ImmutableArray* annotations741;
    org$pandalanguage$pandac$MethodDecl$Kind kind743;
    panda$core$String* name745;
    panda$collections$ImmutableArray* parameters747;
    org$pandalanguage$pandac$ASTNode* returnType749;
    panda$collections$ImmutableArray* statements751;
    panda$core$MutableString* result753;
    panda$collections$Iterator* a$Iter758;
    org$pandalanguage$pandac$ASTNode* a770;
    org$pandalanguage$pandac$MethodDecl$Kind $match$321_17777;
    panda$collections$Iterator* s$Iter795;
    org$pandalanguage$pandac$ASTNode* s807;
    panda$core$Char8 $tmp814;
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
    org$pandalanguage$pandac$Variable$Kind $match$390_17926;
    panda$collections$ImmutableArray* tests938;
    panda$collections$ImmutableArray* statements940;
    panda$core$MutableString* result942;
    panda$core$String* separator946;
    panda$collections$Iterator* t$Iter948;
    org$pandalanguage$pandac$ASTNode* t960;
    panda$core$Char8 $tmp971;
    panda$collections$Iterator* s$Iter972;
    org$pandalanguage$pandac$ASTNode* s984;
    panda$core$String* label993;
    org$pandalanguage$pandac$ASTNode* test995;
    panda$collections$ImmutableArray* statements997;
    panda$core$MutableString* result999;
    panda$collections$Iterator* s$Iter1009;
    org$pandalanguage$pandac$ASTNode* s1021;
    panda$core$Char8 $tmp1028;
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
            $tmp262 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaZAlloc(24);
            $tmp262->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp262->refCount = 1;
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
            panda$core$MutableString* $tmp277 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp277->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp277->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp277, &$s279);
            result276 = $tmp277;
            {
                ITable* $tmp281 = ((panda$collections$Iterable*) statements274)->$class->itable;
                while ($tmp281->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp281 = $tmp281->next;
                }
                $fn283 $tmp282 = $tmp281->methods[0];
                panda$collections$Iterator* $tmp284 = $tmp282(((panda$collections$Iterable*) statements274));
                s$Iter280 = $tmp284;
                $l285:;
                ITable* $tmp287 = s$Iter280->$class->itable;
                while ($tmp287->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp287 = $tmp287->next;
                }
                $fn289 $tmp288 = $tmp287->methods[0];
                panda$core$Bit $tmp290 = $tmp288(s$Iter280);
                panda$core$Bit $tmp291 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp290);
                if (!$tmp291.value) goto $l286;
                {
                    ITable* $tmp293 = s$Iter280->$class->itable;
                    while ($tmp293->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp293 = $tmp293->next;
                    }
                    $fn295 $tmp294 = $tmp293->methods[1];
                    panda$core$Object* $tmp296 = $tmp294(s$Iter280);
                    s292 = ((org$pandalanguage$pandac$ASTNode*) $tmp296);
                    panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s292), &$s297);
                    panda$core$MutableString$append$panda$core$String(result276, $tmp298);
                }
                goto $l285;
                $l286:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp284));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp299, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result276, $tmp299);
            panda$core$String* $tmp300 = panda$core$MutableString$finish$R$panda$core$String(result276);
            return $tmp300;
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
            panda$core$MutableString* $tmp330 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp330->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp330->refCount.value = 1;
            panda$core$MutableString$init($tmp330);
            result329 = $tmp330;
            if (((panda$core$Bit) { dc323 != NULL }).value) {
            {
                panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc323), &$s332);
                panda$core$MutableString$append$panda$core$String(result329, $tmp333);
            }
            }
            panda$core$String* $tmp334 = panda$core$String$convert$R$panda$core$String(name325);
            panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp334, &$s335);
            panda$core$String* $tmp337 = panda$collections$ImmutableArray$join$R$panda$core$String(fields327);
            panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp336, $tmp337);
            panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp338, &$s339);
            panda$core$MutableString$append$panda$core$String(result329, $tmp340);
            panda$core$String* $tmp341 = panda$core$MutableString$finish$R$panda$core$String(result329);
            return $tmp341;
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
            $tmp356 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
            $tmp356->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp356->refCount = 1;
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
            panda$core$MutableString* $tmp376 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp376->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp376->refCount.value = 1;
            panda$core$MutableString$init($tmp376);
            result375 = $tmp376;
            if (((panda$core$Bit) { dc361 != NULL }).value) {
            {
                panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc361), &$s378);
                panda$core$MutableString$append$panda$core$String(result375, $tmp379);
            }
            }
            {
                ITable* $tmp381 = ((panda$collections$Iterable*) annotations363)->$class->itable;
                while ($tmp381->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp381 = $tmp381->next;
                }
                $fn383 $tmp382 = $tmp381->methods[0];
                panda$collections$Iterator* $tmp384 = $tmp382(((panda$collections$Iterable*) annotations363));
                a$Iter380 = $tmp384;
                $l385:;
                ITable* $tmp387 = a$Iter380->$class->itable;
                while ($tmp387->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp387 = $tmp387->next;
                }
                $fn389 $tmp388 = $tmp387->methods[0];
                panda$core$Bit $tmp390 = $tmp388(a$Iter380);
                panda$core$Bit $tmp391 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp390);
                if (!$tmp391.value) goto $l386;
                {
                    ITable* $tmp393 = a$Iter380->$class->itable;
                    while ($tmp393->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp393 = $tmp393->next;
                    }
                    $fn395 $tmp394 = $tmp393->methods[1];
                    panda$core$Object* $tmp396 = $tmp394(a$Iter380);
                    a392 = ((org$pandalanguage$pandac$ASTNode*) $tmp396);
                    panda$core$String* $tmp398 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a392), &$s397);
                    panda$core$MutableString$append$panda$core$String(result375, $tmp398);
                }
                goto $l385;
                $l386:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
            }
            {
                $match$208_17399 = kind365;
                panda$core$Bit $tmp400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17399.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp400.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result375, &$s401);
                }
                }
                else {
                panda$core$Bit $tmp402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17399.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp402.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result375, &$s403);
                }
                }
                else {
                panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17399.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp404.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result375, &$s405);
                }
                }
                }
                }
            }
            panda$core$MutableString$append$panda$core$String(result375, name367);
            if (((panda$core$Bit) { generics369 != NULL }).value) {
            {
                panda$core$String* $tmp407 = panda$collections$ImmutableArray$join$R$panda$core$String(generics369);
                panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s406, $tmp407);
                panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp408, &$s409);
                panda$core$MutableString$append$panda$core$String(result375, $tmp410);
            }
            }
            if (((panda$core$Bit) { supertypes371 != NULL }).value) {
            {
                panda$core$String* $tmp412 = panda$collections$ImmutableArray$join$R$panda$core$String(supertypes371);
                panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s411, $tmp412);
                panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp413, &$s414);
                panda$core$MutableString$append$panda$core$String(result375, $tmp415);
            }
            }
            panda$core$MutableString$append$panda$core$String(result375, &$s416);
            {
                ITable* $tmp418 = ((panda$collections$Iterable*) members373)->$class->itable;
                while ($tmp418->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp418 = $tmp418->next;
                }
                $fn420 $tmp419 = $tmp418->methods[0];
                panda$collections$Iterator* $tmp421 = $tmp419(((panda$collections$Iterable*) members373));
                m$Iter417 = $tmp421;
                $l422:;
                ITable* $tmp424 = m$Iter417->$class->itable;
                while ($tmp424->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp424 = $tmp424->next;
                }
                $fn426 $tmp425 = $tmp424->methods[0];
                panda$core$Bit $tmp427 = $tmp425(m$Iter417);
                panda$core$Bit $tmp428 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp427);
                if (!$tmp428.value) goto $l423;
                {
                    ITable* $tmp430 = m$Iter417->$class->itable;
                    while ($tmp430->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp430 = $tmp430->next;
                    }
                    $fn432 $tmp431 = $tmp430->methods[1];
                    panda$core$Object* $tmp433 = $tmp431(m$Iter417);
                    m429 = ((org$pandalanguage$pandac$ASTNode*) $tmp433);
                    panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m429), &$s434);
                    panda$core$MutableString$append$panda$core$String(result375, $tmp435);
                }
                goto $l422;
                $l423:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp436, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result375, $tmp436);
            panda$core$String* $tmp437 = panda$core$MutableString$finish$R$panda$core$String(result375);
            return $tmp437;
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
            panda$core$MutableString* $tmp468 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp468->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp468->refCount.value = 1;
            panda$core$MutableString$init($tmp468);
            result467 = $tmp468;
            if (((panda$core$Bit) { label461 != NULL }).value) {
            {
                panda$core$String* $tmp470 = panda$core$String$convert$R$panda$core$String(label461);
                panda$core$String* $tmp472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp470, &$s471);
                panda$core$MutableString$append$panda$core$String(result467, $tmp472);
            }
            }
            panda$core$MutableString$append$panda$core$String(result467, &$s473);
            {
                ITable* $tmp475 = ((panda$collections$Iterable*) statements463)->$class->itable;
                while ($tmp475->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp475 = $tmp475->next;
                }
                $fn477 $tmp476 = $tmp475->methods[0];
                panda$collections$Iterator* $tmp478 = $tmp476(((panda$collections$Iterable*) statements463));
                s$Iter474 = $tmp478;
                $l479:;
                ITable* $tmp481 = s$Iter474->$class->itable;
                while ($tmp481->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp481 = $tmp481->next;
                }
                $fn483 $tmp482 = $tmp481->methods[0];
                panda$core$Bit $tmp484 = $tmp482(s$Iter474);
                panda$core$Bit $tmp485 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp484);
                if (!$tmp485.value) goto $l480;
                {
                    ITable* $tmp487 = s$Iter474->$class->itable;
                    while ($tmp487->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp487 = $tmp487->next;
                    }
                    $fn489 $tmp488 = $tmp487->methods[1];
                    panda$core$Object* $tmp490 = $tmp488(s$Iter474);
                    s486 = ((org$pandalanguage$pandac$ASTNode*) $tmp490);
                    panda$core$String* $tmp492 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s486), &$s491);
                    panda$core$MutableString$append$panda$core$String(result467, $tmp492);
                }
                goto $l479;
                $l480:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp478));
            }
            panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s493, ((panda$core$Object*) test465));
            panda$core$String* $tmp496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp494, &$s495);
            panda$core$MutableString$append$panda$core$String(result467, $tmp496);
            panda$core$String* $tmp497 = panda$core$MutableString$finish$R$panda$core$String(result467);
            return $tmp497;
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
            panda$core$MutableString* $tmp518 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp518->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp518->refCount.value = 1;
            panda$core$MutableString$init($tmp518);
            result517 = $tmp518;
            if (((panda$core$Bit) { dc511 != NULL }).value) {
            {
                panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc511), &$s520);
                panda$core$MutableString$append$panda$core$String(result517, $tmp521);
            }
            }
            {
                ITable* $tmp523 = ((panda$collections$Iterable*) annotations513)->$class->itable;
                while ($tmp523->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp523 = $tmp523->next;
                }
                $fn525 $tmp524 = $tmp523->methods[0];
                panda$collections$Iterator* $tmp526 = $tmp524(((panda$collections$Iterable*) annotations513));
                a$Iter522 = $tmp526;
                $l527:;
                ITable* $tmp529 = a$Iter522->$class->itable;
                while ($tmp529->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp529 = $tmp529->next;
                }
                $fn531 $tmp530 = $tmp529->methods[0];
                panda$core$Bit $tmp532 = $tmp530(a$Iter522);
                panda$core$Bit $tmp533 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp532);
                if (!$tmp533.value) goto $l528;
                {
                    ITable* $tmp535 = a$Iter522->$class->itable;
                    while ($tmp535->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp535 = $tmp535->next;
                    }
                    $fn537 $tmp536 = $tmp535->methods[1];
                    panda$core$Object* $tmp538 = $tmp536(a$Iter522);
                    a534 = ((org$pandalanguage$pandac$ASTNode*) $tmp538);
                    panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a534), &$s539);
                    panda$core$MutableString$append$panda$core$String(result517, $tmp540);
                }
                goto $l527;
                $l528:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp526));
            }
            panda$core$MutableString$append$panda$core$Object(result517, ((panda$core$Object*) decl515));
            panda$core$String* $tmp541 = panda$core$MutableString$finish$R$panda$core$String(result517);
            return $tmp541;
        }
        }
        else {
        panda$core$Bit $tmp542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp542.value) {
        {
            panda$collections$ImmutableArray** $tmp544 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 0));
            entries543 = *$tmp544;
            panda$core$MutableString* $tmp546 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp546->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp546->refCount.value = 1;
            panda$core$MutableString$init($tmp546);
            result545 = $tmp546;
            {
                ITable* $tmp549 = ((panda$collections$Iterable*) entries543)->$class->itable;
                while ($tmp549->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp549 = $tmp549->next;
                }
                $fn551 $tmp550 = $tmp549->methods[0];
                panda$collections$Iterator* $tmp552 = $tmp550(((panda$collections$Iterable*) entries543));
                e$Iter548 = $tmp552;
                $l553:;
                ITable* $tmp555 = e$Iter548->$class->itable;
                while ($tmp555->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp555 = $tmp555->next;
                }
                $fn557 $tmp556 = $tmp555->methods[0];
                panda$core$Bit $tmp558 = $tmp556(e$Iter548);
                panda$core$Bit $tmp559 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp558);
                if (!$tmp559.value) goto $l554;
                {
                    ITable* $tmp561 = e$Iter548->$class->itable;
                    while ($tmp561->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp561 = $tmp561->next;
                    }
                    $fn563 $tmp562 = $tmp561->methods[1];
                    panda$core$Object* $tmp564 = $tmp562(e$Iter548);
                    e560 = ((org$pandalanguage$pandac$ASTNode*) $tmp564);
                    panda$core$String* $tmp566 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e560), &$s565);
                    panda$core$MutableString$append$panda$core$String(result545, $tmp566);
                }
                goto $l553;
                $l554:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
            }
            panda$core$String* $tmp567 = panda$core$MutableString$finish$R$panda$core$String(result545);
            return $tmp567;
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
            panda$core$MutableString* $tmp578 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp578->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp578->refCount.value = 1;
            panda$core$MutableString$init($tmp578);
            result577 = $tmp578;
            if (((panda$core$Bit) { label569 != NULL }).value) {
            {
                panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label569, &$s580);
                panda$core$MutableString$append$panda$core$String(result577, $tmp581);
            }
            }
            panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s582, ((panda$core$Object*) target571));
            panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp583, &$s584);
            panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp585, ((panda$core$Object*) list573));
            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp586, &$s587);
            panda$core$MutableString$append$panda$core$String(result577, $tmp588);
            {
                ITable* $tmp590 = ((panda$collections$Iterable*) statements575)->$class->itable;
                while ($tmp590->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp590 = $tmp590->next;
                }
                $fn592 $tmp591 = $tmp590->methods[0];
                panda$collections$Iterator* $tmp593 = $tmp591(((panda$collections$Iterable*) statements575));
                s$Iter589 = $tmp593;
                $l594:;
                ITable* $tmp596 = s$Iter589->$class->itable;
                while ($tmp596->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp596 = $tmp596->next;
                }
                $fn598 $tmp597 = $tmp596->methods[0];
                panda$core$Bit $tmp599 = $tmp597(s$Iter589);
                panda$core$Bit $tmp600 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp599);
                if (!$tmp600.value) goto $l595;
                {
                    ITable* $tmp602 = s$Iter589->$class->itable;
                    while ($tmp602->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp602 = $tmp602->next;
                    }
                    $fn604 $tmp603 = $tmp602->methods[1];
                    panda$core$Object* $tmp605 = $tmp603(s$Iter589);
                    s601 = ((org$pandalanguage$pandac$ASTNode*) $tmp605);
                    panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s601), &$s606);
                    panda$core$MutableString$append$panda$core$String(result577, $tmp607);
                }
                goto $l594;
                $l595:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp608, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result577, $tmp608);
            panda$core$String* $tmp609 = panda$core$MutableString$finish$R$panda$core$String(result577);
            return $tmp609;
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
            panda$core$MutableString* $tmp633 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp633->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp633->refCount.value = 1;
            panda$core$String* $tmp636 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s635, ((panda$core$Object*) test626));
            panda$core$String* $tmp638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp636, &$s637);
            panda$core$MutableString$init$panda$core$String($tmp633, $tmp638);
            result632 = $tmp633;
            {
                ITable* $tmp640 = ((panda$collections$Iterable*) ifTrue628)->$class->itable;
                while ($tmp640->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp640 = $tmp640->next;
                }
                $fn642 $tmp641 = $tmp640->methods[0];
                panda$collections$Iterator* $tmp643 = $tmp641(((panda$collections$Iterable*) ifTrue628));
                s$Iter639 = $tmp643;
                $l644:;
                ITable* $tmp646 = s$Iter639->$class->itable;
                while ($tmp646->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp646 = $tmp646->next;
                }
                $fn648 $tmp647 = $tmp646->methods[0];
                panda$core$Bit $tmp649 = $tmp647(s$Iter639);
                panda$core$Bit $tmp650 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp649);
                if (!$tmp650.value) goto $l645;
                {
                    ITable* $tmp652 = s$Iter639->$class->itable;
                    while ($tmp652->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp652 = $tmp652->next;
                    }
                    $fn654 $tmp653 = $tmp652->methods[1];
                    panda$core$Object* $tmp655 = $tmp653(s$Iter639);
                    s651 = ((org$pandalanguage$pandac$ASTNode*) $tmp655);
                    panda$core$String* $tmp657 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s651), &$s656);
                    panda$core$MutableString$append$panda$core$String(result632, $tmp657);
                }
                goto $l644;
                $l645:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp643));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp658, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result632, $tmp658);
            if (((panda$core$Bit) { ifFalse630 != NULL }).value) {
            {
                panda$core$String* $tmp660 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s659, ((panda$core$Object*) ifFalse630));
                panda$core$String* $tmp662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp660, &$s661);
                panda$core$MutableString$append$panda$core$String(result632, $tmp662);
            }
            }
            panda$core$String* $tmp663 = panda$core$MutableString$finish$R$panda$core$String(result632);
            return $tmp663;
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
            panda$core$MutableString* $tmp674 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp674->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp674->refCount.value = 1;
            panda$core$MutableString$init($tmp674);
            result673 = $tmp674;
            if (((panda$core$Bit) { label669 != NULL }).value) {
            {
                panda$core$String* $tmp676 = panda$core$String$convert$R$panda$core$String(label669);
                panda$core$String* $tmp678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp676, &$s677);
                panda$core$MutableString$append$panda$core$String(result673, $tmp678);
            }
            }
            panda$core$MutableString$append$panda$core$String(result673, &$s679);
            {
                ITable* $tmp681 = ((panda$collections$Iterable*) statements671)->$class->itable;
                while ($tmp681->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp681 = $tmp681->next;
                }
                $fn683 $tmp682 = $tmp681->methods[0];
                panda$collections$Iterator* $tmp684 = $tmp682(((panda$collections$Iterable*) statements671));
                s$Iter680 = $tmp684;
                $l685:;
                ITable* $tmp687 = s$Iter680->$class->itable;
                while ($tmp687->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp687 = $tmp687->next;
                }
                $fn689 $tmp688 = $tmp687->methods[0];
                panda$core$Bit $tmp690 = $tmp688(s$Iter680);
                panda$core$Bit $tmp691 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp690);
                if (!$tmp691.value) goto $l686;
                {
                    ITable* $tmp693 = s$Iter680->$class->itable;
                    while ($tmp693->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp693 = $tmp693->next;
                    }
                    $fn695 $tmp694 = $tmp693->methods[1];
                    panda$core$Object* $tmp696 = $tmp694(s$Iter680);
                    s692 = ((org$pandalanguage$pandac$ASTNode*) $tmp696);
                    panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s692), &$s697);
                    panda$core$MutableString$append$panda$core$String(result673, $tmp698);
                }
                goto $l685;
                $l686:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp699, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result673, $tmp699);
            panda$core$String* $tmp700 = panda$core$MutableString$finish$R$panda$core$String(result673);
            return $tmp700;
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
            panda$core$MutableString* $tmp709 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp709->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp709->refCount.value = 1;
            panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s711, ((panda$core$Object*) value702));
            panda$core$String* $tmp714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp712, &$s713);
            panda$core$MutableString$init$panda$core$String($tmp709, $tmp714);
            result708 = $tmp709;
            {
                ITable* $tmp716 = ((panda$collections$Iterable*) whens704)->$class->itable;
                while ($tmp716->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp716 = $tmp716->next;
                }
                $fn718 $tmp717 = $tmp716->methods[0];
                panda$collections$Iterator* $tmp719 = $tmp717(((panda$collections$Iterable*) whens704));
                w$Iter715 = $tmp719;
                $l720:;
                ITable* $tmp722 = w$Iter715->$class->itable;
                while ($tmp722->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp722 = $tmp722->next;
                }
                $fn724 $tmp723 = $tmp722->methods[0];
                panda$core$Bit $tmp725 = $tmp723(w$Iter715);
                panda$core$Bit $tmp726 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp725);
                if (!$tmp726.value) goto $l721;
                {
                    ITable* $tmp728 = w$Iter715->$class->itable;
                    while ($tmp728->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp728 = $tmp728->next;
                    }
                    $fn730 $tmp729 = $tmp728->methods[1];
                    panda$core$Object* $tmp731 = $tmp729(w$Iter715);
                    w727 = ((org$pandalanguage$pandac$ASTNode*) $tmp731);
                    panda$core$String* $tmp733 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w727), &$s732);
                    panda$core$MutableString$append$panda$core$String(result708, $tmp733);
                }
                goto $l720;
                $l721:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp719));
            }
            if (((panda$core$Bit) { other706 != NULL }).value) {
            {
                panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other706), &$s734);
                panda$core$MutableString$append$panda$core$String(result708, $tmp735);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp736, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result708, $tmp736);
            panda$core$String* $tmp737 = panda$core$MutableString$finish$R$panda$core$String(result708);
            return $tmp737;
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
            panda$core$MutableString* $tmp754 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp754->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp754->refCount.value = 1;
            panda$core$MutableString$init($tmp754);
            result753 = $tmp754;
            if (((panda$core$Bit) { dc739 != NULL }).value) {
            {
                panda$core$String* $tmp757 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc739), &$s756);
                panda$core$MutableString$append$panda$core$String(result753, $tmp757);
            }
            }
            {
                ITable* $tmp759 = ((panda$collections$Iterable*) annotations741)->$class->itable;
                while ($tmp759->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp759 = $tmp759->next;
                }
                $fn761 $tmp760 = $tmp759->methods[0];
                panda$collections$Iterator* $tmp762 = $tmp760(((panda$collections$Iterable*) annotations741));
                a$Iter758 = $tmp762;
                $l763:;
                ITable* $tmp765 = a$Iter758->$class->itable;
                while ($tmp765->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp765 = $tmp765->next;
                }
                $fn767 $tmp766 = $tmp765->methods[0];
                panda$core$Bit $tmp768 = $tmp766(a$Iter758);
                panda$core$Bit $tmp769 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp768);
                if (!$tmp769.value) goto $l764;
                {
                    ITable* $tmp771 = a$Iter758->$class->itable;
                    while ($tmp771->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp771 = $tmp771->next;
                    }
                    $fn773 $tmp772 = $tmp771->methods[1];
                    panda$core$Object* $tmp774 = $tmp772(a$Iter758);
                    a770 = ((org$pandalanguage$pandac$ASTNode*) $tmp774);
                    panda$core$String* $tmp776 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a770), &$s775);
                    panda$core$MutableString$append$panda$core$String(result753, $tmp776);
                }
                goto $l763;
                $l764:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
            }
            {
                $match$321_17777 = kind743;
                panda$core$Bit $tmp778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17777.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp778.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result753, &$s779);
                }
                }
                else {
                panda$core$Bit $tmp780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17777.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp780.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result753, &$s781);
                }
                }
                else {
                panda$core$Bit $tmp782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17777.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp782.value) {
                {
                }
                }
                }
                }
            }
            panda$core$String* $tmp783 = panda$core$String$convert$R$panda$core$String(name745);
            panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp783, &$s784);
            panda$core$String* $tmp786 = panda$collections$ImmutableArray$join$R$panda$core$String(parameters747);
            panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp785, $tmp786);
            panda$core$String* $tmp789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp787, &$s788);
            panda$core$MutableString$append$panda$core$String(result753, $tmp789);
            if (((panda$core$Bit) { returnType749 != NULL }).value) {
            {
                panda$core$String* $tmp791 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s790, ((panda$core$Object*) returnType749));
                panda$core$String* $tmp793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp791, &$s792);
                panda$core$MutableString$append$panda$core$String(result753, $tmp793);
            }
            }
            if (((panda$core$Bit) { statements751 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result753, &$s794);
                {
                    ITable* $tmp796 = ((panda$collections$Iterable*) statements751)->$class->itable;
                    while ($tmp796->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp796 = $tmp796->next;
                    }
                    $fn798 $tmp797 = $tmp796->methods[0];
                    panda$collections$Iterator* $tmp799 = $tmp797(((panda$collections$Iterable*) statements751));
                    s$Iter795 = $tmp799;
                    $l800:;
                    ITable* $tmp802 = s$Iter795->$class->itable;
                    while ($tmp802->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp802 = $tmp802->next;
                    }
                    $fn804 $tmp803 = $tmp802->methods[0];
                    panda$core$Bit $tmp805 = $tmp803(s$Iter795);
                    panda$core$Bit $tmp806 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp805);
                    if (!$tmp806.value) goto $l801;
                    {
                        ITable* $tmp808 = s$Iter795->$class->itable;
                        while ($tmp808->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp808 = $tmp808->next;
                        }
                        $fn810 $tmp809 = $tmp808->methods[1];
                        panda$core$Object* $tmp811 = $tmp809(s$Iter795);
                        s807 = ((org$pandalanguage$pandac$ASTNode*) $tmp811);
                        panda$core$String* $tmp813 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s807), &$s812);
                        panda$core$MutableString$append$panda$core$String(result753, $tmp813);
                    }
                    goto $l800;
                    $l801:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp814, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result753, $tmp814);
            }
            }
            panda$core$String* $tmp815 = panda$core$MutableString$finish$R$panda$core$String(result753);
            return $tmp815;
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
            $tmp842 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaZAlloc(24);
            $tmp842->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp842->refCount = 1;
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
            panda$core$MutableString* $tmp860 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp860->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp860->refCount.value = 1;
            panda$core$MutableString$init($tmp860);
            result859 = $tmp860;
            panda$core$Bit $tmp865;
            if (((panda$core$Bit) { start851 != NULL }).value) goto $l862; else goto $l863;
            $l862:;
            panda$core$Bit $tmp866 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start851->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp865 = $tmp866;
            goto $l864;
            $l863:;
            $tmp865 = ((panda$core$Bit) { true });
            goto $l864;
            $l864:;
            if ($tmp865.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result859, ((panda$core$Object*) start851));
            }
            }
            if (inclusive855.value) {
            {
                panda$core$MutableString$append$panda$core$String(result859, &$s867);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result859, &$s868);
            }
            }
            panda$core$Bit $tmp872;
            if (((panda$core$Bit) { end853 != NULL }).value) goto $l869; else goto $l870;
            $l869:;
            panda$core$Bit $tmp873 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(end853->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp872 = $tmp873;
            goto $l871;
            $l870:;
            $tmp872 = ((panda$core$Bit) { true });
            goto $l871;
            $l871:;
            if ($tmp872.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result859, ((panda$core$Object*) end853));
            }
            }
            panda$core$Bit $tmp877;
            if (((panda$core$Bit) { step857 != NULL }).value) goto $l874; else goto $l875;
            $l874:;
            panda$core$Bit $tmp878 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(step857->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp877 = $tmp878;
            goto $l876;
            $l875:;
            $tmp877 = ((panda$core$Bit) { true });
            goto $l876;
            $l876:;
            if ($tmp877.value) {
            {
                panda$core$String* $tmp880 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s879, ((panda$core$Object*) step857));
                panda$core$MutableString$append$panda$core$String(result859, $tmp880);
            }
            }
            panda$core$String* $tmp881 = panda$core$MutableString$finish$R$panda$core$String(result859);
            return $tmp881;
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
            panda$core$MutableString* $tmp924 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp924->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp924->refCount.value = 1;
            panda$core$MutableString$init($tmp924);
            result923 = $tmp924;
            {
                $match$390_17926 = kind919;
                panda$core$Bit $tmp927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17926.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp927.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result923, &$s928);
                }
                }
                else {
                panda$core$Bit $tmp929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17926.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp929.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result923, &$s930);
                }
                }
                else {
                panda$core$Bit $tmp931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17926.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp931.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result923, &$s932);
                }
                }
                else {
                panda$core$Bit $tmp933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17926.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp933.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result923, &$s934);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp935 = panda$collections$ImmutableArray$join$R$panda$core$String(decls921);
            panda$core$MutableString$append$panda$core$String(result923, $tmp935);
            panda$core$String* $tmp936 = panda$core$MutableString$finish$R$panda$core$String(result923);
            return $tmp936;
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
            panda$core$MutableString* $tmp943 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp943->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp943->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp943, &$s945);
            result942 = $tmp943;
            separator946 = &$s947;
            {
                ITable* $tmp949 = ((panda$collections$Iterable*) tests938)->$class->itable;
                while ($tmp949->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp949 = $tmp949->next;
                }
                $fn951 $tmp950 = $tmp949->methods[0];
                panda$collections$Iterator* $tmp952 = $tmp950(((panda$collections$Iterable*) tests938));
                t$Iter948 = $tmp952;
                $l953:;
                ITable* $tmp955 = t$Iter948->$class->itable;
                while ($tmp955->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp955 = $tmp955->next;
                }
                $fn957 $tmp956 = $tmp955->methods[0];
                panda$core$Bit $tmp958 = $tmp956(t$Iter948);
                panda$core$Bit $tmp959 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp958);
                if (!$tmp959.value) goto $l954;
                {
                    ITable* $tmp961 = t$Iter948->$class->itable;
                    while ($tmp961->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp961 = $tmp961->next;
                    }
                    $fn963 $tmp962 = $tmp961->methods[1];
                    panda$core$Object* $tmp964 = $tmp962(t$Iter948);
                    t960 = ((org$pandalanguage$pandac$ASTNode*) $tmp964);
                    panda$core$String* $tmp965 = panda$core$String$convert$R$panda$core$String(separator946);
                    panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp965, &$s966);
                    panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp967, ((panda$core$Object*) t960));
                    panda$core$String* $tmp970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp968, &$s969);
                    panda$core$MutableString$append$panda$core$String(result942, $tmp970);
                }
                goto $l953;
                $l954:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp952));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp971, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result942, $tmp971);
            {
                ITable* $tmp973 = ((panda$collections$Iterable*) statements940)->$class->itable;
                while ($tmp973->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp973 = $tmp973->next;
                }
                $fn975 $tmp974 = $tmp973->methods[0];
                panda$collections$Iterator* $tmp976 = $tmp974(((panda$collections$Iterable*) statements940));
                s$Iter972 = $tmp976;
                $l977:;
                ITable* $tmp979 = s$Iter972->$class->itable;
                while ($tmp979->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp979 = $tmp979->next;
                }
                $fn981 $tmp980 = $tmp979->methods[0];
                panda$core$Bit $tmp982 = $tmp980(s$Iter972);
                panda$core$Bit $tmp983 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp982);
                if (!$tmp983.value) goto $l978;
                {
                    ITable* $tmp985 = s$Iter972->$class->itable;
                    while ($tmp985->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp985 = $tmp985->next;
                    }
                    $fn987 $tmp986 = $tmp985->methods[1];
                    panda$core$Object* $tmp988 = $tmp986(s$Iter972);
                    s984 = ((org$pandalanguage$pandac$ASTNode*) $tmp988);
                    panda$core$String* $tmp990 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s989, ((panda$core$Object*) s984));
                    panda$core$MutableString$append$panda$core$String(result942, $tmp990);
                }
                goto $l977;
                $l978:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp976));
            }
            panda$core$String* $tmp991 = panda$core$MutableString$finish$R$panda$core$String(result942);
            return $tmp991;
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
            panda$core$MutableString* $tmp1000 = (panda$core$MutableString*) pandaZAlloc(48);
            $tmp1000->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1000->refCount.value = 1;
            panda$core$MutableString$init($tmp1000);
            result999 = $tmp1000;
            if (((panda$core$Bit) { label993 != NULL }).value) {
            {
                panda$core$String* $tmp1002 = panda$core$String$convert$R$panda$core$String(label993);
                panda$core$String* $tmp1004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1002, &$s1003);
                panda$core$MutableString$append$panda$core$String(result999, $tmp1004);
            }
            }
            panda$core$String* $tmp1006 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1005, ((panda$core$Object*) test995));
            panda$core$String* $tmp1008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1006, &$s1007);
            panda$core$MutableString$append$panda$core$String(result999, $tmp1008);
            {
                ITable* $tmp1010 = ((panda$collections$Iterable*) statements997)->$class->itable;
                while ($tmp1010->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1010 = $tmp1010->next;
                }
                $fn1012 $tmp1011 = $tmp1010->methods[0];
                panda$collections$Iterator* $tmp1013 = $tmp1011(((panda$collections$Iterable*) statements997));
                s$Iter1009 = $tmp1013;
                $l1014:;
                ITable* $tmp1016 = s$Iter1009->$class->itable;
                while ($tmp1016->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1016 = $tmp1016->next;
                }
                $fn1018 $tmp1017 = $tmp1016->methods[0];
                panda$core$Bit $tmp1019 = $tmp1017(s$Iter1009);
                panda$core$Bit $tmp1020 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1019);
                if (!$tmp1020.value) goto $l1015;
                {
                    ITable* $tmp1022 = s$Iter1009->$class->itable;
                    while ($tmp1022->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1022 = $tmp1022->next;
                    }
                    $fn1024 $tmp1023 = $tmp1022->methods[1];
                    panda$core$Object* $tmp1025 = $tmp1023(s$Iter1009);
                    s1021 = ((org$pandalanguage$pandac$ASTNode*) $tmp1025);
                    panda$core$String* $tmp1027 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1021), &$s1026);
                    panda$core$MutableString$append$panda$core$String(result999, $tmp1027);
                }
                goto $l1014;
                $l1015:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1013));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1028, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result999, $tmp1028);
            panda$core$String* $tmp1029 = panda$core$MutableString$finish$R$panda$core$String(result999);
            return $tmp1029;
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

