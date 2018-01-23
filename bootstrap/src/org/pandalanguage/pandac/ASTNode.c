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
typedef panda$core$String* (*$fn313)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn347)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn380)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn386)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn392)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn417)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn423)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn429)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn448)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn455)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn473)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn479)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn485)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn499)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn520)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn526)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn532)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn545)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn551)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn557)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn585)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn591)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn597)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn634)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn640)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn646)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn674)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn680)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn686)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn708)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn714)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn720)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn750)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn756)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn762)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn787)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn793)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn799)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn832)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn937)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn943)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn949)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn961)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn967)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn973)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn997)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1003)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1009)(panda$collections$Iterator*);

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
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    panda$core$String* label301;
    org$pandalanguage$pandac$ASTNode* target309;
    panda$collections$ImmutableArray* args311;
    org$pandalanguage$pandac$ASTNode* dc322;
    panda$core$String* name324;
    panda$collections$ImmutableArray* fields326;
    panda$core$MutableString* result328;
    org$pandalanguage$pandac$ASTNode* base341;
    org$pandalanguage$pandac$ChoiceEntry* ce343;
    panda$core$Int64 index345;
    org$pandalanguage$pandac$ASTNode* dc359;
    panda$collections$ImmutableArray* annotations361;
    org$pandalanguage$pandac$ClassDecl$Kind kind363;
    panda$core$String* name365;
    panda$collections$ImmutableArray* generics367;
    panda$collections$ImmutableArray* supertypes369;
    panda$collections$ImmutableArray* members371;
    panda$core$MutableString* result373;
    panda$collections$Iterator* a$Iter377;
    org$pandalanguage$pandac$ASTNode* a389;
    org$pandalanguage$pandac$ClassDecl$Kind $match$208_17396;
    panda$collections$Iterator* m$Iter414;
    org$pandalanguage$pandac$ASTNode* m426;
    panda$core$Char8 $tmp433;
    panda$core$String* label436;
    org$pandalanguage$pandac$ASTNode* target444;
    org$pandalanguage$pandac$ASTNode* value446;
    panda$core$String* label458;
    panda$collections$ImmutableArray* statements460;
    org$pandalanguage$pandac$ASTNode* test462;
    panda$core$MutableString* result464;
    panda$collections$Iterator* s$Iter470;
    org$pandalanguage$pandac$ASTNode* s482;
    org$pandalanguage$pandac$ASTNode* base495;
    panda$core$String* field497;
    org$pandalanguage$pandac$ASTNode* dc507;
    panda$collections$ImmutableArray* annotations509;
    org$pandalanguage$pandac$ASTNode* decl511;
    panda$core$MutableString* result513;
    panda$collections$Iterator* a$Iter517;
    org$pandalanguage$pandac$ASTNode* a529;
    panda$collections$ImmutableArray* entries538;
    panda$core$MutableString* result540;
    panda$collections$Iterator* e$Iter542;
    org$pandalanguage$pandac$ASTNode* e554;
    panda$core$String* label563;
    org$pandalanguage$pandac$ASTNode* target565;
    org$pandalanguage$pandac$ASTNode* list567;
    panda$collections$ImmutableArray* statements569;
    panda$core$MutableString* result571;
    panda$collections$Iterator* s$Iter582;
    org$pandalanguage$pandac$ASTNode* s594;
    panda$core$Char8 $tmp601;
    panda$core$String* name604;
    panda$collections$ImmutableArray* subtypes606;
    panda$core$String* name616;
    org$pandalanguage$pandac$ASTNode* test619;
    panda$collections$ImmutableArray* ifTrue621;
    org$pandalanguage$pandac$ASTNode* ifFalse623;
    panda$core$MutableString* result625;
    panda$collections$Iterator* s$Iter631;
    org$pandalanguage$pandac$ASTNode* s643;
    panda$core$Char8 $tmp650;
    panda$core$UInt64 value657;
    panda$core$String* label661;
    panda$collections$ImmutableArray* statements663;
    panda$core$MutableString* result665;
    panda$collections$Iterator* s$Iter671;
    org$pandalanguage$pandac$ASTNode* s683;
    panda$core$Char8 $tmp690;
    org$pandalanguage$pandac$ASTNode* value693;
    panda$collections$ImmutableArray* whens695;
    panda$collections$ImmutableArray* other697;
    panda$core$MutableString* result699;
    panda$collections$Iterator* w$Iter705;
    org$pandalanguage$pandac$ASTNode* w717;
    panda$core$Char8 $tmp726;
    org$pandalanguage$pandac$ASTNode* dc729;
    panda$collections$ImmutableArray* annotations731;
    org$pandalanguage$pandac$MethodDecl$Kind kind733;
    panda$core$String* name735;
    panda$collections$ImmutableArray* parameters737;
    org$pandalanguage$pandac$ASTNode* returnType739;
    panda$collections$ImmutableArray* statements741;
    panda$core$MutableString* result743;
    panda$collections$Iterator* a$Iter747;
    org$pandalanguage$pandac$ASTNode* a759;
    org$pandalanguage$pandac$MethodDecl$Kind $match$321_17766;
    panda$collections$Iterator* s$Iter784;
    org$pandalanguage$pandac$ASTNode* s796;
    panda$core$Char8 $tmp803;
    org$pandalanguage$pandac$ASTNode* base808;
    panda$core$String* name813;
    panda$core$String* name816;
    org$pandalanguage$pandac$ASTNode* type818;
    org$pandalanguage$pandac$parser$Token$Kind kind827;
    org$pandalanguage$pandac$ASTNode* base829;
    org$pandalanguage$pandac$ASTNode* start840;
    org$pandalanguage$pandac$ASTNode* end842;
    panda$core$Bit inclusive844;
    org$pandalanguage$pandac$ASTNode* step846;
    panda$core$MutableString* result848;
    panda$core$Real64 value871;
    org$pandalanguage$pandac$ASTNode* value875;
    panda$core$String* str885;
    panda$core$String* name890;
    panda$core$String* name893;
    org$pandalanguage$pandac$ASTNode* type895;
    panda$core$String* name904;
    org$pandalanguage$pandac$Variable$Kind kind907;
    panda$collections$ImmutableArray* decls909;
    panda$core$MutableString* result911;
    org$pandalanguage$pandac$Variable$Kind $match$390_17913;
    panda$collections$ImmutableArray* tests925;
    panda$collections$ImmutableArray* statements927;
    panda$core$MutableString* result929;
    panda$core$String* separator932;
    panda$collections$Iterator* t$Iter934;
    org$pandalanguage$pandac$ASTNode* t946;
    panda$core$Char8 $tmp957;
    panda$collections$Iterator* s$Iter958;
    org$pandalanguage$pandac$ASTNode* s970;
    panda$core$String* label979;
    org$pandalanguage$pandac$ASTNode* test981;
    panda$collections$ImmutableArray* statements983;
    panda$core$MutableString* result985;
    panda$collections$Iterator* s$Iter994;
    org$pandalanguage$pandac$ASTNode* s1006;
    panda$core$Char8 $tmp1013;
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
            panda$core$String* $tmp299 = panda$core$MutableString$finish$R$panda$core$String(result276);
            return $tmp299;
        }
        }
        else {
        panda$core$Bit $tmp300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp300.value) {
        {
            panda$core$String** $tmp302 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
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
        panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp308.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp310 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            target309 = *$tmp310;
            panda$collections$ImmutableArray** $tmp312 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
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
        panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp321.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp323 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            dc322 = *$tmp323;
            panda$core$String** $tmp325 = ((panda$core$String**) ((char*) $match$165_9231->$data + 24));
            name324 = *$tmp325;
            panda$collections$ImmutableArray** $tmp327 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 32));
            fields326 = *$tmp327;
            panda$core$MutableString* $tmp329 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp329);
            result328 = $tmp329;
            if (((panda$core$Bit) { dc322 != NULL }).value) {
            {
                panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc322), &$s330);
                panda$core$MutableString$append$panda$core$String(result328, $tmp331);
            }
            }
            panda$core$String* $tmp332 = panda$core$String$convert$R$panda$core$String(name324);
            panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp332, &$s333);
            panda$core$String* $tmp335 = panda$collections$ImmutableArray$join$R$panda$core$String(fields326);
            panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp334, $tmp335);
            panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp336, &$s337);
            panda$core$MutableString$append$panda$core$String(result328, $tmp338);
            panda$core$String* $tmp339 = panda$core$MutableString$finish$R$panda$core$String(result328);
            return $tmp339;
        }
        }
        else {
        panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp340.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp342 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            base341 = *$tmp342;
            org$pandalanguage$pandac$ChoiceEntry** $tmp344 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$165_9231->$data + 24));
            ce343 = *$tmp344;
            panda$core$Int64* $tmp346 = ((panda$core$Int64*) ((char*) $match$165_9231->$data + 32));
            index345 = *$tmp346;
            panda$core$String* $tmp348 = (($fn347) base341->$class->vtable[0])(base341);
            panda$core$String* $tmp350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp348, &$s349);
            panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp350, ((panda$core$Object*) ce343));
            panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp351, &$s352);
            panda$core$Int64$wrapper* $tmp354;
            $tmp354 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp354->value = index345;
            panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp353, ((panda$core$Object*) $tmp354));
            panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp355, &$s356);
            return $tmp357;
        }
        }
        else {
        panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp358.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp360 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            dc359 = *$tmp360;
            panda$collections$ImmutableArray** $tmp362 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            annotations361 = *$tmp362;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp364 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$165_9231->$data + 32));
            kind363 = *$tmp364;
            panda$core$String** $tmp366 = ((panda$core$String**) ((char*) $match$165_9231->$data + 40));
            name365 = *$tmp366;
            panda$collections$ImmutableArray** $tmp368 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 48));
            generics367 = *$tmp368;
            panda$collections$ImmutableArray** $tmp370 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 56));
            supertypes369 = *$tmp370;
            panda$collections$ImmutableArray** $tmp372 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 64));
            members371 = *$tmp372;
            panda$core$MutableString* $tmp374 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp374);
            result373 = $tmp374;
            if (((panda$core$Bit) { dc359 != NULL }).value) {
            {
                panda$core$String* $tmp376 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc359), &$s375);
                panda$core$MutableString$append$panda$core$String(result373, $tmp376);
            }
            }
            {
                ITable* $tmp378 = ((panda$collections$Iterable*) annotations361)->$class->itable;
                while ($tmp378->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp378 = $tmp378->next;
                }
                $fn380 $tmp379 = $tmp378->methods[0];
                panda$collections$Iterator* $tmp381 = $tmp379(((panda$collections$Iterable*) annotations361));
                a$Iter377 = $tmp381;
                $l382:;
                ITable* $tmp384 = a$Iter377->$class->itable;
                while ($tmp384->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp384 = $tmp384->next;
                }
                $fn386 $tmp385 = $tmp384->methods[0];
                panda$core$Bit $tmp387 = $tmp385(a$Iter377);
                panda$core$Bit $tmp388 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp387);
                if (!$tmp388.value) goto $l383;
                {
                    ITable* $tmp390 = a$Iter377->$class->itable;
                    while ($tmp390->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp390 = $tmp390->next;
                    }
                    $fn392 $tmp391 = $tmp390->methods[1];
                    panda$core$Object* $tmp393 = $tmp391(a$Iter377);
                    a389 = ((org$pandalanguage$pandac$ASTNode*) $tmp393);
                    panda$core$String* $tmp395 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a389), &$s394);
                    panda$core$MutableString$append$panda$core$String(result373, $tmp395);
                }
                goto $l382;
                $l383:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
            }
            {
                $match$208_17396 = kind363;
                panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17396.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp397.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result373, &$s398);
                }
                }
                else {
                panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17396.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp399.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result373, &$s400);
                }
                }
                else {
                panda$core$Bit $tmp401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17396.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp401.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result373, &$s402);
                }
                }
                }
                }
            }
            panda$core$MutableString$append$panda$core$String(result373, name365);
            if (((panda$core$Bit) { generics367 != NULL }).value) {
            {
                panda$core$String* $tmp404 = panda$collections$ImmutableArray$join$R$panda$core$String(generics367);
                panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s403, $tmp404);
                panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, &$s406);
                panda$core$MutableString$append$panda$core$String(result373, $tmp407);
            }
            }
            if (((panda$core$Bit) { supertypes369 != NULL }).value) {
            {
                panda$core$String* $tmp409 = panda$collections$ImmutableArray$join$R$panda$core$String(supertypes369);
                panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s408, $tmp409);
                panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp410, &$s411);
                panda$core$MutableString$append$panda$core$String(result373, $tmp412);
            }
            }
            panda$core$MutableString$append$panda$core$String(result373, &$s413);
            {
                ITable* $tmp415 = ((panda$collections$Iterable*) members371)->$class->itable;
                while ($tmp415->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp415 = $tmp415->next;
                }
                $fn417 $tmp416 = $tmp415->methods[0];
                panda$collections$Iterator* $tmp418 = $tmp416(((panda$collections$Iterable*) members371));
                m$Iter414 = $tmp418;
                $l419:;
                ITable* $tmp421 = m$Iter414->$class->itable;
                while ($tmp421->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp421 = $tmp421->next;
                }
                $fn423 $tmp422 = $tmp421->methods[0];
                panda$core$Bit $tmp424 = $tmp422(m$Iter414);
                panda$core$Bit $tmp425 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp424);
                if (!$tmp425.value) goto $l420;
                {
                    ITable* $tmp427 = m$Iter414->$class->itable;
                    while ($tmp427->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp427 = $tmp427->next;
                    }
                    $fn429 $tmp428 = $tmp427->methods[1];
                    panda$core$Object* $tmp430 = $tmp428(m$Iter414);
                    m426 = ((org$pandalanguage$pandac$ASTNode*) $tmp430);
                    panda$core$String* $tmp432 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m426), &$s431);
                    panda$core$MutableString$append$panda$core$String(result373, $tmp432);
                }
                goto $l419;
                $l420:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp418));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp433, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result373, $tmp433);
            panda$core$String* $tmp434 = panda$core$MutableString$finish$R$panda$core$String(result373);
            return $tmp434;
        }
        }
        else {
        panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp435.value) {
        {
            panda$core$String** $tmp437 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            label436 = *$tmp437;
            if (((panda$core$Bit) { label436 != NULL }).value) {
            {
                panda$core$String* $tmp439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s438, label436);
                panda$core$String* $tmp441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp439, &$s440);
                return $tmp441;
            }
            }
            return &$s442;
        }
        }
        else {
        panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp443.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp445 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            target444 = *$tmp445;
            org$pandalanguage$pandac$ASTNode** $tmp447 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 24));
            value446 = *$tmp447;
            if (((panda$core$Bit) { value446 != NULL }).value) {
            {
                panda$core$String* $tmp449 = (($fn448) target444->$class->vtable[0])(target444);
                panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp449, &$s450);
                panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp451, ((panda$core$Object*) value446));
                panda$core$String* $tmp454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp452, &$s453);
                return $tmp454;
            }
            }
            panda$core$String* $tmp456 = (($fn455) target444->$class->vtable[0])(target444);
            return $tmp456;
        }
        }
        else {
        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp457.value) {
        {
            panda$core$String** $tmp459 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            label458 = *$tmp459;
            panda$collections$ImmutableArray** $tmp461 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            statements460 = *$tmp461;
            org$pandalanguage$pandac$ASTNode** $tmp463 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 32));
            test462 = *$tmp463;
            panda$core$MutableString* $tmp465 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp465);
            result464 = $tmp465;
            if (((panda$core$Bit) { label458 != NULL }).value) {
            {
                panda$core$String* $tmp466 = panda$core$String$convert$R$panda$core$String(label458);
                panda$core$String* $tmp468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp466, &$s467);
                panda$core$MutableString$append$panda$core$String(result464, $tmp468);
            }
            }
            panda$core$MutableString$append$panda$core$String(result464, &$s469);
            {
                ITable* $tmp471 = ((panda$collections$Iterable*) statements460)->$class->itable;
                while ($tmp471->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp471 = $tmp471->next;
                }
                $fn473 $tmp472 = $tmp471->methods[0];
                panda$collections$Iterator* $tmp474 = $tmp472(((panda$collections$Iterable*) statements460));
                s$Iter470 = $tmp474;
                $l475:;
                ITable* $tmp477 = s$Iter470->$class->itable;
                while ($tmp477->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp477 = $tmp477->next;
                }
                $fn479 $tmp478 = $tmp477->methods[0];
                panda$core$Bit $tmp480 = $tmp478(s$Iter470);
                panda$core$Bit $tmp481 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp480);
                if (!$tmp481.value) goto $l476;
                {
                    ITable* $tmp483 = s$Iter470->$class->itable;
                    while ($tmp483->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp483 = $tmp483->next;
                    }
                    $fn485 $tmp484 = $tmp483->methods[1];
                    panda$core$Object* $tmp486 = $tmp484(s$Iter470);
                    s482 = ((org$pandalanguage$pandac$ASTNode*) $tmp486);
                    panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s482), &$s487);
                    panda$core$MutableString$append$panda$core$String(result464, $tmp488);
                }
                goto $l475;
                $l476:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
            }
            panda$core$String* $tmp490 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s489, ((panda$core$Object*) test462));
            panda$core$String* $tmp492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp490, &$s491);
            panda$core$MutableString$append$panda$core$String(result464, $tmp492);
            panda$core$String* $tmp493 = panda$core$MutableString$finish$R$panda$core$String(result464);
            return $tmp493;
        }
        }
        else {
        panda$core$Bit $tmp494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp494.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp496 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            base495 = *$tmp496;
            panda$core$String** $tmp498 = ((panda$core$String**) ((char*) $match$165_9231->$data + 24));
            field497 = *$tmp498;
            panda$core$String* $tmp500 = (($fn499) base495->$class->vtable[0])(base495);
            panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp500, &$s501);
            panda$core$String* $tmp503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp502, field497);
            panda$core$String* $tmp505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp503, &$s504);
            return $tmp505;
        }
        }
        else {
        panda$core$Bit $tmp506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp506.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp508 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            dc507 = *$tmp508;
            panda$collections$ImmutableArray** $tmp510 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            annotations509 = *$tmp510;
            org$pandalanguage$pandac$ASTNode** $tmp512 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 32));
            decl511 = *$tmp512;
            panda$core$MutableString* $tmp514 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp514);
            result513 = $tmp514;
            if (((panda$core$Bit) { dc507 != NULL }).value) {
            {
                panda$core$String* $tmp516 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc507), &$s515);
                panda$core$MutableString$append$panda$core$String(result513, $tmp516);
            }
            }
            {
                ITable* $tmp518 = ((panda$collections$Iterable*) annotations509)->$class->itable;
                while ($tmp518->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp518 = $tmp518->next;
                }
                $fn520 $tmp519 = $tmp518->methods[0];
                panda$collections$Iterator* $tmp521 = $tmp519(((panda$collections$Iterable*) annotations509));
                a$Iter517 = $tmp521;
                $l522:;
                ITable* $tmp524 = a$Iter517->$class->itable;
                while ($tmp524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp524 = $tmp524->next;
                }
                $fn526 $tmp525 = $tmp524->methods[0];
                panda$core$Bit $tmp527 = $tmp525(a$Iter517);
                panda$core$Bit $tmp528 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp527);
                if (!$tmp528.value) goto $l523;
                {
                    ITable* $tmp530 = a$Iter517->$class->itable;
                    while ($tmp530->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp530 = $tmp530->next;
                    }
                    $fn532 $tmp531 = $tmp530->methods[1];
                    panda$core$Object* $tmp533 = $tmp531(a$Iter517);
                    a529 = ((org$pandalanguage$pandac$ASTNode*) $tmp533);
                    panda$core$String* $tmp535 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a529), &$s534);
                    panda$core$MutableString$append$panda$core$String(result513, $tmp535);
                }
                goto $l522;
                $l523:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp521));
            }
            panda$core$MutableString$append$panda$core$Object(result513, ((panda$core$Object*) decl511));
            panda$core$String* $tmp536 = panda$core$MutableString$finish$R$panda$core$String(result513);
            return $tmp536;
        }
        }
        else {
        panda$core$Bit $tmp537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp537.value) {
        {
            panda$collections$ImmutableArray** $tmp539 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 0));
            entries538 = *$tmp539;
            panda$core$MutableString* $tmp541 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp541);
            result540 = $tmp541;
            {
                ITable* $tmp543 = ((panda$collections$Iterable*) entries538)->$class->itable;
                while ($tmp543->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp543 = $tmp543->next;
                }
                $fn545 $tmp544 = $tmp543->methods[0];
                panda$collections$Iterator* $tmp546 = $tmp544(((panda$collections$Iterable*) entries538));
                e$Iter542 = $tmp546;
                $l547:;
                ITable* $tmp549 = e$Iter542->$class->itable;
                while ($tmp549->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp549 = $tmp549->next;
                }
                $fn551 $tmp550 = $tmp549->methods[0];
                panda$core$Bit $tmp552 = $tmp550(e$Iter542);
                panda$core$Bit $tmp553 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp552);
                if (!$tmp553.value) goto $l548;
                {
                    ITable* $tmp555 = e$Iter542->$class->itable;
                    while ($tmp555->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp555 = $tmp555->next;
                    }
                    $fn557 $tmp556 = $tmp555->methods[1];
                    panda$core$Object* $tmp558 = $tmp556(e$Iter542);
                    e554 = ((org$pandalanguage$pandac$ASTNode*) $tmp558);
                    panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e554), &$s559);
                    panda$core$MutableString$append$panda$core$String(result540, $tmp560);
                }
                goto $l547;
                $l548:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp546));
            }
            panda$core$String* $tmp561 = panda$core$MutableString$finish$R$panda$core$String(result540);
            return $tmp561;
        }
        }
        else {
        panda$core$Bit $tmp562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp562.value) {
        {
            panda$core$String** $tmp564 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            label563 = *$tmp564;
            org$pandalanguage$pandac$ASTNode** $tmp566 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 24));
            target565 = *$tmp566;
            org$pandalanguage$pandac$ASTNode** $tmp568 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 32));
            list567 = *$tmp568;
            panda$collections$ImmutableArray** $tmp570 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 40));
            statements569 = *$tmp570;
            panda$core$MutableString* $tmp572 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp572);
            result571 = $tmp572;
            if (((panda$core$Bit) { label563 != NULL }).value) {
            {
                panda$core$String* $tmp574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label563, &$s573);
                panda$core$MutableString$append$panda$core$String(result571, $tmp574);
            }
            }
            panda$core$String* $tmp576 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s575, ((panda$core$Object*) target565));
            panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp576, &$s577);
            panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp578, ((panda$core$Object*) list567));
            panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, &$s580);
            panda$core$MutableString$append$panda$core$String(result571, $tmp581);
            {
                ITable* $tmp583 = ((panda$collections$Iterable*) statements569)->$class->itable;
                while ($tmp583->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp583 = $tmp583->next;
                }
                $fn585 $tmp584 = $tmp583->methods[0];
                panda$collections$Iterator* $tmp586 = $tmp584(((panda$collections$Iterable*) statements569));
                s$Iter582 = $tmp586;
                $l587:;
                ITable* $tmp589 = s$Iter582->$class->itable;
                while ($tmp589->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp589 = $tmp589->next;
                }
                $fn591 $tmp590 = $tmp589->methods[0];
                panda$core$Bit $tmp592 = $tmp590(s$Iter582);
                panda$core$Bit $tmp593 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp592);
                if (!$tmp593.value) goto $l588;
                {
                    ITable* $tmp595 = s$Iter582->$class->itable;
                    while ($tmp595->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp595 = $tmp595->next;
                    }
                    $fn597 $tmp596 = $tmp595->methods[1];
                    panda$core$Object* $tmp598 = $tmp596(s$Iter582);
                    s594 = ((org$pandalanguage$pandac$ASTNode*) $tmp598);
                    panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s594), &$s599);
                    panda$core$MutableString$append$panda$core$String(result571, $tmp600);
                }
                goto $l587;
                $l588:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp586));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp601, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result571, $tmp601);
            panda$core$String* $tmp602 = panda$core$MutableString$finish$R$panda$core$String(result571);
            return $tmp602;
        }
        }
        else {
        panda$core$Bit $tmp603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp603.value) {
        {
            panda$core$String** $tmp605 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            name604 = *$tmp605;
            panda$collections$ImmutableArray** $tmp607 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            subtypes606 = *$tmp607;
            panda$core$String* $tmp608 = panda$core$String$convert$R$panda$core$String(name604);
            panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp608, &$s609);
            panda$core$String* $tmp611 = panda$collections$ImmutableArray$join$R$panda$core$String(subtypes606);
            panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp610, $tmp611);
            panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp612, &$s613);
            return $tmp614;
        }
        }
        else {
        panda$core$Bit $tmp615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp615.value) {
        {
            panda$core$String** $tmp617 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            name616 = *$tmp617;
            return name616;
        }
        }
        else {
        panda$core$Bit $tmp618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp618.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp620 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            test619 = *$tmp620;
            panda$collections$ImmutableArray** $tmp622 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            ifTrue621 = *$tmp622;
            org$pandalanguage$pandac$ASTNode** $tmp624 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 32));
            ifFalse623 = *$tmp624;
            panda$core$MutableString* $tmp626 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s627, ((panda$core$Object*) test619));
            panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp628, &$s629);
            panda$core$MutableString$init$panda$core$String($tmp626, $tmp630);
            result625 = $tmp626;
            {
                ITable* $tmp632 = ((panda$collections$Iterable*) ifTrue621)->$class->itable;
                while ($tmp632->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp632 = $tmp632->next;
                }
                $fn634 $tmp633 = $tmp632->methods[0];
                panda$collections$Iterator* $tmp635 = $tmp633(((panda$collections$Iterable*) ifTrue621));
                s$Iter631 = $tmp635;
                $l636:;
                ITable* $tmp638 = s$Iter631->$class->itable;
                while ($tmp638->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp638 = $tmp638->next;
                }
                $fn640 $tmp639 = $tmp638->methods[0];
                panda$core$Bit $tmp641 = $tmp639(s$Iter631);
                panda$core$Bit $tmp642 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp641);
                if (!$tmp642.value) goto $l637;
                {
                    ITable* $tmp644 = s$Iter631->$class->itable;
                    while ($tmp644->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp644 = $tmp644->next;
                    }
                    $fn646 $tmp645 = $tmp644->methods[1];
                    panda$core$Object* $tmp647 = $tmp645(s$Iter631);
                    s643 = ((org$pandalanguage$pandac$ASTNode*) $tmp647);
                    panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s643), &$s648);
                    panda$core$MutableString$append$panda$core$String(result625, $tmp649);
                }
                goto $l636;
                $l637:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp650, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result625, $tmp650);
            if (((panda$core$Bit) { ifFalse623 != NULL }).value) {
            {
                panda$core$String* $tmp652 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s651, ((panda$core$Object*) ifFalse623));
                panda$core$String* $tmp654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp652, &$s653);
                panda$core$MutableString$append$panda$core$String(result625, $tmp654);
            }
            }
            panda$core$String* $tmp655 = panda$core$MutableString$finish$R$panda$core$String(result625);
            return $tmp655;
        }
        }
        else {
        panda$core$Bit $tmp656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp656.value) {
        {
            panda$core$UInt64* $tmp658 = ((panda$core$UInt64*) ((char*) $match$165_9231->$data + 16));
            value657 = *$tmp658;
            panda$core$String* $tmp659 = panda$core$UInt64$convert$R$panda$core$String(value657);
            return $tmp659;
        }
        }
        else {
        panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp660.value) {
        {
            panda$core$String** $tmp662 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            label661 = *$tmp662;
            panda$collections$ImmutableArray** $tmp664 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            statements663 = *$tmp664;
            panda$core$MutableString* $tmp666 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp666);
            result665 = $tmp666;
            if (((panda$core$Bit) { label661 != NULL }).value) {
            {
                panda$core$String* $tmp667 = panda$core$String$convert$R$panda$core$String(label661);
                panda$core$String* $tmp669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp667, &$s668);
                panda$core$MutableString$append$panda$core$String(result665, $tmp669);
            }
            }
            panda$core$MutableString$append$panda$core$String(result665, &$s670);
            {
                ITable* $tmp672 = ((panda$collections$Iterable*) statements663)->$class->itable;
                while ($tmp672->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp672 = $tmp672->next;
                }
                $fn674 $tmp673 = $tmp672->methods[0];
                panda$collections$Iterator* $tmp675 = $tmp673(((panda$collections$Iterable*) statements663));
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
                    s683 = ((org$pandalanguage$pandac$ASTNode*) $tmp687);
                    panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s683), &$s688);
                    panda$core$MutableString$append$panda$core$String(result665, $tmp689);
                }
                goto $l676;
                $l677:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp675));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp690, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result665, $tmp690);
            panda$core$String* $tmp691 = panda$core$MutableString$finish$R$panda$core$String(result665);
            return $tmp691;
        }
        }
        else {
        panda$core$Bit $tmp692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp692.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp694 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            value693 = *$tmp694;
            panda$collections$ImmutableArray** $tmp696 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            whens695 = *$tmp696;
            panda$collections$ImmutableArray** $tmp698 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 32));
            other697 = *$tmp698;
            panda$core$MutableString* $tmp700 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s701, ((panda$core$Object*) value693));
            panda$core$String* $tmp704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp702, &$s703);
            panda$core$MutableString$init$panda$core$String($tmp700, $tmp704);
            result699 = $tmp700;
            {
                ITable* $tmp706 = ((panda$collections$Iterable*) whens695)->$class->itable;
                while ($tmp706->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp706 = $tmp706->next;
                }
                $fn708 $tmp707 = $tmp706->methods[0];
                panda$collections$Iterator* $tmp709 = $tmp707(((panda$collections$Iterable*) whens695));
                w$Iter705 = $tmp709;
                $l710:;
                ITable* $tmp712 = w$Iter705->$class->itable;
                while ($tmp712->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp712 = $tmp712->next;
                }
                $fn714 $tmp713 = $tmp712->methods[0];
                panda$core$Bit $tmp715 = $tmp713(w$Iter705);
                panda$core$Bit $tmp716 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp715);
                if (!$tmp716.value) goto $l711;
                {
                    ITable* $tmp718 = w$Iter705->$class->itable;
                    while ($tmp718->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp718 = $tmp718->next;
                    }
                    $fn720 $tmp719 = $tmp718->methods[1];
                    panda$core$Object* $tmp721 = $tmp719(w$Iter705);
                    w717 = ((org$pandalanguage$pandac$ASTNode*) $tmp721);
                    panda$core$String* $tmp723 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w717), &$s722);
                    panda$core$MutableString$append$panda$core$String(result699, $tmp723);
                }
                goto $l710;
                $l711:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp709));
            }
            if (((panda$core$Bit) { other697 != NULL }).value) {
            {
                panda$core$String* $tmp725 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other697), &$s724);
                panda$core$MutableString$append$panda$core$String(result699, $tmp725);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp726, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result699, $tmp726);
            panda$core$String* $tmp727 = panda$core$MutableString$finish$R$panda$core$String(result699);
            return $tmp727;
        }
        }
        else {
        panda$core$Bit $tmp728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp728.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp730 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            dc729 = *$tmp730;
            panda$collections$ImmutableArray** $tmp732 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            annotations731 = *$tmp732;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp734 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$165_9231->$data + 32));
            kind733 = *$tmp734;
            panda$core$String** $tmp736 = ((panda$core$String**) ((char*) $match$165_9231->$data + 40));
            name735 = *$tmp736;
            panda$collections$ImmutableArray** $tmp738 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 48));
            parameters737 = *$tmp738;
            org$pandalanguage$pandac$ASTNode** $tmp740 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 56));
            returnType739 = *$tmp740;
            panda$collections$ImmutableArray** $tmp742 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 64));
            statements741 = *$tmp742;
            panda$core$MutableString* $tmp744 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp744);
            result743 = $tmp744;
            if (((panda$core$Bit) { dc729 != NULL }).value) {
            {
                panda$core$String* $tmp746 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc729), &$s745);
                panda$core$MutableString$append$panda$core$String(result743, $tmp746);
            }
            }
            {
                ITable* $tmp748 = ((panda$collections$Iterable*) annotations731)->$class->itable;
                while ($tmp748->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp748 = $tmp748->next;
                }
                $fn750 $tmp749 = $tmp748->methods[0];
                panda$collections$Iterator* $tmp751 = $tmp749(((panda$collections$Iterable*) annotations731));
                a$Iter747 = $tmp751;
                $l752:;
                ITable* $tmp754 = a$Iter747->$class->itable;
                while ($tmp754->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp754 = $tmp754->next;
                }
                $fn756 $tmp755 = $tmp754->methods[0];
                panda$core$Bit $tmp757 = $tmp755(a$Iter747);
                panda$core$Bit $tmp758 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp757);
                if (!$tmp758.value) goto $l753;
                {
                    ITable* $tmp760 = a$Iter747->$class->itable;
                    while ($tmp760->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp760 = $tmp760->next;
                    }
                    $fn762 $tmp761 = $tmp760->methods[1];
                    panda$core$Object* $tmp763 = $tmp761(a$Iter747);
                    a759 = ((org$pandalanguage$pandac$ASTNode*) $tmp763);
                    panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a759), &$s764);
                    panda$core$MutableString$append$panda$core$String(result743, $tmp765);
                }
                goto $l752;
                $l753:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp751));
            }
            {
                $match$321_17766 = kind733;
                panda$core$Bit $tmp767 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17766.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp767.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result743, &$s768);
                }
                }
                else {
                panda$core$Bit $tmp769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17766.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp769.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result743, &$s770);
                }
                }
                else {
                panda$core$Bit $tmp771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17766.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp771.value) {
                {
                }
                }
                }
                }
            }
            panda$core$String* $tmp772 = panda$core$String$convert$R$panda$core$String(name735);
            panda$core$String* $tmp774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp772, &$s773);
            panda$core$String* $tmp775 = panda$collections$ImmutableArray$join$R$panda$core$String(parameters737);
            panda$core$String* $tmp776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp774, $tmp775);
            panda$core$String* $tmp778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp776, &$s777);
            panda$core$MutableString$append$panda$core$String(result743, $tmp778);
            if (((panda$core$Bit) { returnType739 != NULL }).value) {
            {
                panda$core$String* $tmp780 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s779, ((panda$core$Object*) returnType739));
                panda$core$String* $tmp782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp780, &$s781);
                panda$core$MutableString$append$panda$core$String(result743, $tmp782);
            }
            }
            if (((panda$core$Bit) { statements741 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result743, &$s783);
                {
                    ITable* $tmp785 = ((panda$collections$Iterable*) statements741)->$class->itable;
                    while ($tmp785->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp785 = $tmp785->next;
                    }
                    $fn787 $tmp786 = $tmp785->methods[0];
                    panda$collections$Iterator* $tmp788 = $tmp786(((panda$collections$Iterable*) statements741));
                    s$Iter784 = $tmp788;
                    $l789:;
                    ITable* $tmp791 = s$Iter784->$class->itable;
                    while ($tmp791->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp791 = $tmp791->next;
                    }
                    $fn793 $tmp792 = $tmp791->methods[0];
                    panda$core$Bit $tmp794 = $tmp792(s$Iter784);
                    panda$core$Bit $tmp795 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp794);
                    if (!$tmp795.value) goto $l790;
                    {
                        ITable* $tmp797 = s$Iter784->$class->itable;
                        while ($tmp797->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp797 = $tmp797->next;
                        }
                        $fn799 $tmp798 = $tmp797->methods[1];
                        panda$core$Object* $tmp800 = $tmp798(s$Iter784);
                        s796 = ((org$pandalanguage$pandac$ASTNode*) $tmp800);
                        panda$core$String* $tmp802 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s796), &$s801);
                        panda$core$MutableString$append$panda$core$String(result743, $tmp802);
                    }
                    goto $l789;
                    $l790:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp788));
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp803, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result743, $tmp803);
            }
            }
            panda$core$String* $tmp804 = panda$core$MutableString$finish$R$panda$core$String(result743);
            return $tmp804;
        }
        }
        else {
        panda$core$Bit $tmp805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp805.value) {
        {
            return &$s806;
        }
        }
        else {
        panda$core$Bit $tmp807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp807.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp809 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            base808 = *$tmp809;
            panda$core$String* $tmp811 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base808), &$s810);
            return $tmp811;
        }
        }
        else {
        panda$core$Bit $tmp812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp812.value) {
        {
            panda$core$String** $tmp814 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            name813 = *$tmp814;
            return name813;
        }
        }
        else {
        panda$core$Bit $tmp815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp815.value) {
        {
            panda$core$String** $tmp817 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            name816 = *$tmp817;
            org$pandalanguage$pandac$ASTNode** $tmp819 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 24));
            type818 = *$tmp819;
            panda$core$String* $tmp820 = panda$core$String$convert$R$panda$core$String(name816);
            panda$core$String* $tmp822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp820, &$s821);
            panda$core$String* $tmp823 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp822, ((panda$core$Object*) type818));
            panda$core$String* $tmp825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp823, &$s824);
            return $tmp825;
        }
        }
        else {
        panda$core$Bit $tmp826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp826.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp828 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$165_9231->$data + 16));
            kind827 = *$tmp828;
            org$pandalanguage$pandac$ASTNode** $tmp830 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 24));
            base829 = *$tmp830;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp831;
            $tmp831 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp831->value = kind827;
            panda$core$String* $tmp833 = (($fn832) ((panda$core$Object*) $tmp831)->$class->vtable[0])(((panda$core$Object*) $tmp831));
            panda$core$String* $tmp835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp833, &$s834);
            panda$core$String* $tmp836 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp835, ((panda$core$Object*) base829));
            panda$core$String* $tmp838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp836, &$s837);
            return $tmp838;
        }
        }
        else {
        panda$core$Bit $tmp839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp839.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp841 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            start840 = *$tmp841;
            org$pandalanguage$pandac$ASTNode** $tmp843 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 24));
            end842 = *$tmp843;
            panda$core$Bit* $tmp845 = ((panda$core$Bit*) ((char*) $match$165_9231->$data + 32));
            inclusive844 = *$tmp845;
            org$pandalanguage$pandac$ASTNode** $tmp847 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 33));
            step846 = *$tmp847;
            panda$core$MutableString* $tmp849 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp849);
            result848 = $tmp849;
            panda$core$Bit $tmp853;
            if (((panda$core$Bit) { start840 != NULL }).value) goto $l850; else goto $l851;
            $l850:;
            panda$core$Bit $tmp854 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start840->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp853 = $tmp854;
            goto $l852;
            $l851:;
            $tmp853 = ((panda$core$Bit) { true });
            goto $l852;
            $l852:;
            if ($tmp853.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result848, ((panda$core$Object*) start840));
            }
            }
            if (inclusive844.value) {
            {
                panda$core$MutableString$append$panda$core$String(result848, &$s855);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result848, &$s856);
            }
            }
            panda$core$Bit $tmp860;
            if (((panda$core$Bit) { end842 != NULL }).value) goto $l857; else goto $l858;
            $l857:;
            panda$core$Bit $tmp861 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(end842->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp860 = $tmp861;
            goto $l859;
            $l858:;
            $tmp860 = ((panda$core$Bit) { true });
            goto $l859;
            $l859:;
            if ($tmp860.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result848, ((panda$core$Object*) end842));
            }
            }
            panda$core$Bit $tmp865;
            if (((panda$core$Bit) { step846 != NULL }).value) goto $l862; else goto $l863;
            $l862:;
            panda$core$Bit $tmp866 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(step846->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp865 = $tmp866;
            goto $l864;
            $l863:;
            $tmp865 = ((panda$core$Bit) { true });
            goto $l864;
            $l864:;
            if ($tmp865.value) {
            {
                panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s867, ((panda$core$Object*) step846));
                panda$core$MutableString$append$panda$core$String(result848, $tmp868);
            }
            }
            panda$core$String* $tmp869 = panda$core$MutableString$finish$R$panda$core$String(result848);
            return $tmp869;
        }
        }
        else {
        panda$core$Bit $tmp870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp870.value) {
        {
            panda$core$Real64* $tmp872 = ((panda$core$Real64*) ((char*) $match$165_9231->$data + 16));
            value871 = *$tmp872;
            panda$core$String* $tmp873 = panda$core$Real64$convert$R$panda$core$String(value871);
            return $tmp873;
        }
        }
        else {
        panda$core$Bit $tmp874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp874.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp876 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 16));
            value875 = *$tmp876;
            if (((panda$core$Bit) { value875 != NULL }).value) {
            {
                panda$core$String* $tmp878 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s877, ((panda$core$Object*) value875));
                panda$core$String* $tmp880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp878, &$s879);
                return $tmp880;
            }
            }
            return &$s881;
        }
        }
        else {
        panda$core$Bit $tmp882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp882.value) {
        {
            return &$s883;
        }
        }
        else {
        panda$core$Bit $tmp884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp884.value) {
        {
            panda$core$String** $tmp886 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            str885 = *$tmp886;
            return str885;
        }
        }
        else {
        panda$core$Bit $tmp887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp887.value) {
        {
            return &$s888;
        }
        }
        else {
        panda$core$Bit $tmp889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp889.value) {
        {
            panda$core$String** $tmp891 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            name890 = *$tmp891;
            return name890;
        }
        }
        else {
        panda$core$Bit $tmp892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp892.value) {
        {
            panda$core$String** $tmp894 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            name893 = *$tmp894;
            org$pandalanguage$pandac$ASTNode** $tmp896 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 24));
            type895 = *$tmp896;
            if (((panda$core$Bit) { type895 != NULL }).value) {
            {
                panda$core$String* $tmp897 = panda$core$String$convert$R$panda$core$String(name893);
                panda$core$String* $tmp899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp897, &$s898);
                panda$core$String* $tmp900 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp899, ((panda$core$Object*) type895));
                panda$core$String* $tmp902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp900, &$s901);
                return $tmp902;
            }
            }
            return name893;
        }
        }
        else {
        panda$core$Bit $tmp903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp903.value) {
        {
            panda$core$String** $tmp905 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            name904 = *$tmp905;
            return name904;
        }
        }
        else {
        panda$core$Bit $tmp906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp906.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp908 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$165_9231->$data + 16));
            kind907 = *$tmp908;
            panda$collections$ImmutableArray** $tmp910 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            decls909 = *$tmp910;
            panda$core$MutableString* $tmp912 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp912);
            result911 = $tmp912;
            {
                $match$390_17913 = kind907;
                panda$core$Bit $tmp914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17913.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp914.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result911, &$s915);
                }
                }
                else {
                panda$core$Bit $tmp916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17913.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp916.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result911, &$s917);
                }
                }
                else {
                panda$core$Bit $tmp918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17913.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp918.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result911, &$s919);
                }
                }
                else {
                panda$core$Bit $tmp920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_17913.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp920.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result911, &$s921);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp922 = panda$collections$ImmutableArray$join$R$panda$core$String(decls909);
            panda$core$MutableString$append$panda$core$String(result911, $tmp922);
            panda$core$String* $tmp923 = panda$core$MutableString$finish$R$panda$core$String(result911);
            return $tmp923;
        }
        }
        else {
        panda$core$Bit $tmp924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp924.value) {
        {
            panda$collections$ImmutableArray** $tmp926 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 16));
            tests925 = *$tmp926;
            panda$collections$ImmutableArray** $tmp928 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 24));
            statements927 = *$tmp928;
            panda$core$MutableString* $tmp930 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp930, &$s931);
            result929 = $tmp930;
            separator932 = &$s933;
            {
                ITable* $tmp935 = ((panda$collections$Iterable*) tests925)->$class->itable;
                while ($tmp935->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp935 = $tmp935->next;
                }
                $fn937 $tmp936 = $tmp935->methods[0];
                panda$collections$Iterator* $tmp938 = $tmp936(((panda$collections$Iterable*) tests925));
                t$Iter934 = $tmp938;
                $l939:;
                ITable* $tmp941 = t$Iter934->$class->itable;
                while ($tmp941->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp941 = $tmp941->next;
                }
                $fn943 $tmp942 = $tmp941->methods[0];
                panda$core$Bit $tmp944 = $tmp942(t$Iter934);
                panda$core$Bit $tmp945 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp944);
                if (!$tmp945.value) goto $l940;
                {
                    ITable* $tmp947 = t$Iter934->$class->itable;
                    while ($tmp947->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp947 = $tmp947->next;
                    }
                    $fn949 $tmp948 = $tmp947->methods[1];
                    panda$core$Object* $tmp950 = $tmp948(t$Iter934);
                    t946 = ((org$pandalanguage$pandac$ASTNode*) $tmp950);
                    panda$core$String* $tmp951 = panda$core$String$convert$R$panda$core$String(separator932);
                    panda$core$String* $tmp953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp951, &$s952);
                    panda$core$String* $tmp954 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp953, ((panda$core$Object*) t946));
                    panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp954, &$s955);
                    panda$core$MutableString$append$panda$core$String(result929, $tmp956);
                }
                goto $l939;
                $l940:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp938));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp957, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result929, $tmp957);
            {
                ITable* $tmp959 = ((panda$collections$Iterable*) statements927)->$class->itable;
                while ($tmp959->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp959 = $tmp959->next;
                }
                $fn961 $tmp960 = $tmp959->methods[0];
                panda$collections$Iterator* $tmp962 = $tmp960(((panda$collections$Iterable*) statements927));
                s$Iter958 = $tmp962;
                $l963:;
                ITable* $tmp965 = s$Iter958->$class->itable;
                while ($tmp965->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp965 = $tmp965->next;
                }
                $fn967 $tmp966 = $tmp965->methods[0];
                panda$core$Bit $tmp968 = $tmp966(s$Iter958);
                panda$core$Bit $tmp969 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp968);
                if (!$tmp969.value) goto $l964;
                {
                    ITable* $tmp971 = s$Iter958->$class->itable;
                    while ($tmp971->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp971 = $tmp971->next;
                    }
                    $fn973 $tmp972 = $tmp971->methods[1];
                    panda$core$Object* $tmp974 = $tmp972(s$Iter958);
                    s970 = ((org$pandalanguage$pandac$ASTNode*) $tmp974);
                    panda$core$String* $tmp976 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s975, ((panda$core$Object*) s970));
                    panda$core$MutableString$append$panda$core$String(result929, $tmp976);
                }
                goto $l963;
                $l964:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp962));
            }
            panda$core$String* $tmp977 = panda$core$MutableString$finish$R$panda$core$String(result929);
            return $tmp977;
        }
        }
        else {
        panda$core$Bit $tmp978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9231->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp978.value) {
        {
            panda$core$String** $tmp980 = ((panda$core$String**) ((char*) $match$165_9231->$data + 16));
            label979 = *$tmp980;
            org$pandalanguage$pandac$ASTNode** $tmp982 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9231->$data + 24));
            test981 = *$tmp982;
            panda$collections$ImmutableArray** $tmp984 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9231->$data + 32));
            statements983 = *$tmp984;
            panda$core$MutableString* $tmp986 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp986);
            result985 = $tmp986;
            if (((panda$core$Bit) { label979 != NULL }).value) {
            {
                panda$core$String* $tmp987 = panda$core$String$convert$R$panda$core$String(label979);
                panda$core$String* $tmp989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp987, &$s988);
                panda$core$MutableString$append$panda$core$String(result985, $tmp989);
            }
            }
            panda$core$String* $tmp991 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s990, ((panda$core$Object*) test981));
            panda$core$String* $tmp993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp991, &$s992);
            panda$core$MutableString$append$panda$core$String(result985, $tmp993);
            {
                ITable* $tmp995 = ((panda$collections$Iterable*) statements983)->$class->itable;
                while ($tmp995->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp995 = $tmp995->next;
                }
                $fn997 $tmp996 = $tmp995->methods[0];
                panda$collections$Iterator* $tmp998 = $tmp996(((panda$collections$Iterable*) statements983));
                s$Iter994 = $tmp998;
                $l999:;
                ITable* $tmp1001 = s$Iter994->$class->itable;
                while ($tmp1001->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1001 = $tmp1001->next;
                }
                $fn1003 $tmp1002 = $tmp1001->methods[0];
                panda$core$Bit $tmp1004 = $tmp1002(s$Iter994);
                panda$core$Bit $tmp1005 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1004);
                if (!$tmp1005.value) goto $l1000;
                {
                    ITable* $tmp1007 = s$Iter994->$class->itable;
                    while ($tmp1007->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1007 = $tmp1007->next;
                    }
                    $fn1009 $tmp1008 = $tmp1007->methods[1];
                    panda$core$Object* $tmp1010 = $tmp1008(s$Iter994);
                    s1006 = ((org$pandalanguage$pandac$ASTNode*) $tmp1010);
                    panda$core$String* $tmp1012 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1006), &$s1011);
                    panda$core$MutableString$append$panda$core$String(result985, $tmp1012);
                }
                goto $l999;
                $l1000:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp998));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1013, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result985, $tmp1013);
            panda$core$String* $tmp1014 = panda$core$MutableString$finish$R$panda$core$String(result985);
            return $tmp1014;
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

