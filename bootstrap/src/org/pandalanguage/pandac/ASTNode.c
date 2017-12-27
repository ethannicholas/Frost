#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
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

typedef panda$core$String* (*$fn322)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn348)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn354)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn360)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn379)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn415)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn450)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn456)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn462)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn487)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn493)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn499)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn518)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn525)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn545)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn551)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn557)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn571)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn594)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn600)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn606)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn621)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn627)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn633)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn663)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn669)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn675)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn714)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn720)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn726)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn756)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn762)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn768)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn792)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn798)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn804)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn836)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn842)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn848)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn873)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn879)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn885)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn918)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1030)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1036)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1042)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1054)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1060)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1066)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1092)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1098)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1104)(panda$collections$Iterator*);

static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1 = p_f0;
    {
        panda$core$String** $tmp2 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$Object* $tmp3 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp2 = ((panda$core$String*) $tmp3);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp5 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp6 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp5 = ((org$pandalanguage$pandac$ASTNode*) $tmp6);
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp7 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp8 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp7 = ((org$pandalanguage$pandac$ASTNode*) $tmp8);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp9 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp9 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp10 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp11 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp10 = ((org$pandalanguage$pandac$ASTNode*) $tmp11);
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp12 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp12 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp13 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        panda$core$Object* $tmp14 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp13 = ((org$pandalanguage$pandac$ASTNode*) $tmp14);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp15 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp15 = p_f0;
    panda$core$Bit* $tmp16 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp16 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp17 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp17 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp18 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$core$Object* $tmp19 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp18 = ((panda$collections$ImmutableArray*) $tmp19);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp20 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp20 = p_f0;
    {
        panda$core$String** $tmp21 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$Object* $tmp22 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp21 = ((panda$core$String*) $tmp22);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp23 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp23 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp24 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp25 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp24 = ((org$pandalanguage$pandac$ASTNode*) $tmp25);
    }
    {
        panda$collections$ImmutableArray** $tmp26 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp27 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp26 = ((panda$collections$ImmutableArray*) $tmp27);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp28 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp28 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp29 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp30 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp29 = ((org$pandalanguage$pandac$ASTNode*) $tmp30);
    }
    {
        panda$core$String** $tmp31 = ((panda$core$String**) ((char*) self->$data + 24));
        panda$core$Object* $tmp32 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp31 = ((panda$core$String*) $tmp32);
    }
    {
        panda$collections$ImmutableArray** $tmp33 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$core$Object* $tmp34 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp33 = ((panda$collections$ImmutableArray*) $tmp34);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp35 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp35 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp36 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp37 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp36 = ((org$pandalanguage$pandac$ASTNode*) $tmp37);
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp38 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        panda$core$Object* $tmp39 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp38 = ((org$pandalanguage$pandac$ChoiceEntry*) $tmp39);
    }
    panda$core$Int64* $tmp40 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp40 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp41 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp41 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp42 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp43 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp42 = ((org$pandalanguage$pandac$ASTNode*) $tmp43);
    }
    {
        panda$collections$ImmutableArray** $tmp44 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp45 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp44 = ((panda$collections$ImmutableArray*) $tmp45);
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp46 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp46 = p_f3;
    {
        panda$core$String** $tmp47 = ((panda$core$String**) ((char*) self->$data + 40));
        panda$core$Object* $tmp48 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f4));
        *$tmp47 = ((panda$core$String*) $tmp48);
    }
    {
        panda$collections$ImmutableArray** $tmp49 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        panda$core$Object* $tmp50 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f5));
        *$tmp49 = ((panda$collections$ImmutableArray*) $tmp50);
    }
    {
        panda$collections$ImmutableArray** $tmp51 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        panda$core$Object* $tmp52 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f6));
        *$tmp51 = ((panda$collections$ImmutableArray*) $tmp52);
    }
    {
        panda$collections$ImmutableArray** $tmp53 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        panda$core$Object* $tmp54 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f7));
        *$tmp53 = ((panda$collections$ImmutableArray*) $tmp54);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp55 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp55 = p_f0;
    {
        panda$core$String** $tmp56 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$Object* $tmp57 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp56 = ((panda$core$String*) $tmp57);
    }
    {
        panda$collections$ImmutableArray** $tmp58 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp59 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp58 = ((panda$collections$ImmutableArray*) $tmp59);
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp60 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        panda$core$Object* $tmp61 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp60 = ((org$pandalanguage$pandac$ASTNode*) $tmp61);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp62 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp62 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp63 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp64 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp63 = ((org$pandalanguage$pandac$ASTNode*) $tmp64);
    }
    {
        panda$core$String** $tmp65 = ((panda$core$String**) ((char*) self->$data + 24));
        panda$core$Object* $tmp66 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp65 = ((panda$core$String*) $tmp66);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp67 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp67 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp68 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp69 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp68 = ((org$pandalanguage$pandac$ASTNode*) $tmp69);
    }
    {
        panda$collections$ImmutableArray** $tmp70 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp71 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp70 = ((panda$collections$ImmutableArray*) $tmp71);
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp72 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        panda$core$Object* $tmp73 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp72 = ((org$pandalanguage$pandac$ASTNode*) $tmp73);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp74 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        panda$core$Object* $tmp75 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f0));
        *$tmp74 = ((panda$collections$ImmutableArray*) $tmp75);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp76 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp76 = p_f0;
    {
        panda$core$String** $tmp77 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$Object* $tmp78 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp77 = ((panda$core$String*) $tmp78);
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp79 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp80 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp79 = ((org$pandalanguage$pandac$ASTNode*) $tmp80);
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp81 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        panda$core$Object* $tmp82 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp81 = ((org$pandalanguage$pandac$ASTNode*) $tmp82);
    }
    {
        panda$collections$ImmutableArray** $tmp83 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        panda$core$Object* $tmp84 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f4));
        *$tmp83 = ((panda$collections$ImmutableArray*) $tmp84);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp85 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp85 = p_f0;
    {
        panda$core$String** $tmp86 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$Object* $tmp87 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp86 = ((panda$core$String*) $tmp87);
    }
    {
        panda$collections$ImmutableArray** $tmp88 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp89 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp88 = ((panda$collections$ImmutableArray*) $tmp89);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp90 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp90 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp91 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp92 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp91 = ((org$pandalanguage$pandac$ASTNode*) $tmp92);
    }
    {
        panda$collections$ImmutableArray** $tmp93 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp94 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp93 = ((panda$collections$ImmutableArray*) $tmp94);
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp95 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        panda$core$Object* $tmp96 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp95 = ((org$pandalanguage$pandac$ASTNode*) $tmp96);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp97 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp97 = p_f0;
    panda$core$UInt64* $tmp98 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp98 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp99 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp99 = p_f0;
    {
        panda$core$String** $tmp100 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$Object* $tmp101 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp100 = ((panda$core$String*) $tmp101);
    }
    {
        panda$collections$ImmutableArray** $tmp102 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp103 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp102 = ((panda$collections$ImmutableArray*) $tmp103);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp104 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp104 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp105 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp106 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp105 = ((org$pandalanguage$pandac$ASTNode*) $tmp106);
    }
    {
        panda$collections$ImmutableArray** $tmp107 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp108 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp107 = ((panda$collections$ImmutableArray*) $tmp108);
    }
    {
        panda$collections$ImmutableArray** $tmp109 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$core$Object* $tmp110 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp109 = ((panda$collections$ImmutableArray*) $tmp110);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, org$pandalanguage$pandac$ASTNode* p_f6, panda$collections$ImmutableArray* p_f7) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp111 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp111 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp112 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp113 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp112 = ((org$pandalanguage$pandac$ASTNode*) $tmp113);
    }
    {
        panda$collections$ImmutableArray** $tmp114 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp115 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp114 = ((panda$collections$ImmutableArray*) $tmp115);
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp116 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp116 = p_f3;
    {
        panda$core$String** $tmp117 = ((panda$core$String**) ((char*) self->$data + 40));
        panda$core$Object* $tmp118 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f4));
        *$tmp117 = ((panda$core$String*) $tmp118);
    }
    {
        panda$collections$ImmutableArray** $tmp119 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        panda$core$Object* $tmp120 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f5));
        *$tmp119 = ((panda$collections$ImmutableArray*) $tmp120);
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp121 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        panda$core$Object* $tmp122 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f6));
        *$tmp121 = ((org$pandalanguage$pandac$ASTNode*) $tmp122);
    }
    {
        panda$collections$ImmutableArray** $tmp123 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        panda$core$Object* $tmp124 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f7));
        *$tmp123 = ((panda$collections$ImmutableArray*) $tmp124);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp125 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp125 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp126 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp126 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp127 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp128 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp127 = ((org$pandalanguage$pandac$ASTNode*) $tmp128);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp129 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp129 = p_f0;
    {
        panda$core$String** $tmp130 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$Object* $tmp131 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp130 = ((panda$core$String*) $tmp131);
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp132 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp133 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp132 = ((org$pandalanguage$pandac$ASTNode*) $tmp133);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp134 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp134 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp135 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp135 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp136 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp137 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp136 = ((org$pandalanguage$pandac$ASTNode*) $tmp137);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp138 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp138 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp139 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp140 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp139 = ((org$pandalanguage$pandac$ASTNode*) $tmp140);
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp141 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp142 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp141 = ((org$pandalanguage$pandac$ASTNode*) $tmp142);
    }
    panda$core$Bit* $tmp143 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp143 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp144 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        panda$core$Object* $tmp145 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f4));
        *$tmp144 = ((org$pandalanguage$pandac$ASTNode*) $tmp145);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp146 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp146 = p_f0;
    panda$core$Real64* $tmp147 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp147 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp148 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp148 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp149 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        panda$core$Object* $tmp150 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp149 = ((org$pandalanguage$pandac$ASTNode*) $tmp150);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp151 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp151 = p_f0;
    {
        panda$core$String** $tmp152 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$Object* $tmp153 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp152 = ((panda$core$String*) $tmp153);
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp154 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp155 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp154 = ((org$pandalanguage$pandac$ASTNode*) $tmp155);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp156 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp156 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp157 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp157 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp158 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp159 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp158 = ((panda$collections$ImmutableArray*) $tmp159);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp160 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp160 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp161 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$core$Object* $tmp162 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp161 = ((panda$collections$ImmutableArray*) $tmp162);
    }
    {
        panda$collections$ImmutableArray** $tmp163 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$core$Object* $tmp164 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp163 = ((panda$collections$ImmutableArray*) $tmp164);
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp165 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp165 = p_f0;
    {
        panda$core$String** $tmp166 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$Object* $tmp167 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f1));
        *$tmp166 = ((panda$core$String*) $tmp167);
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp168 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        panda$core$Object* $tmp169 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f2));
        *$tmp168 = ((org$pandalanguage$pandac$ASTNode*) $tmp169);
    }
    {
        panda$collections$ImmutableArray** $tmp170 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$core$Object* $tmp171 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_f3));
        *$tmp170 = ((panda$collections$ImmutableArray*) $tmp171);
    }
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$76_9172;
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
    org$pandalanguage$pandac$Position $tmp219;
    org$pandalanguage$pandac$Position position221;
    org$pandalanguage$pandac$Position position224;
    org$pandalanguage$pandac$Position position227;
    org$pandalanguage$pandac$Position position230;
    org$pandalanguage$pandac$Position position233;
    org$pandalanguage$pandac$Position position236;
    org$pandalanguage$pandac$Position position239;
    org$pandalanguage$pandac$Position position242;
    org$pandalanguage$pandac$Position position245;
    org$pandalanguage$pandac$Position position248;
    org$pandalanguage$pandac$Position position251;
    org$pandalanguage$pandac$Position position254;
    org$pandalanguage$pandac$Position position257;
    org$pandalanguage$pandac$Position position260;
    org$pandalanguage$pandac$Position position263;
    org$pandalanguage$pandac$Position position266;
    org$pandalanguage$pandac$Position position269;
    org$pandalanguage$pandac$Position position272;
    org$pandalanguage$pandac$Position position275;
    org$pandalanguage$pandac$Position position278;
    org$pandalanguage$pandac$Position position281;
    org$pandalanguage$pandac$Position position284;
    org$pandalanguage$pandac$Position position287;
    org$pandalanguage$pandac$Position position290;
    org$pandalanguage$pandac$Position position293;
    {
        $match$76_9172 = self;
        panda$core$Bit $tmp173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp173.value) {
        {
            org$pandalanguage$pandac$Position* $tmp175 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position174 = *$tmp175;
            return position174;
        }
        }
        else {
        panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp176.value) {
        {
            org$pandalanguage$pandac$Position* $tmp178 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position177 = *$tmp178;
            return position177;
        }
        }
        else {
        panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp179.value) {
        {
            org$pandalanguage$pandac$Position* $tmp181 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position180 = *$tmp181;
            return position180;
        }
        }
        else {
        panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp182.value) {
        {
            org$pandalanguage$pandac$Position* $tmp184 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position183 = *$tmp184;
            return position183;
        }
        }
        else {
        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp185.value) {
        {
            org$pandalanguage$pandac$Position* $tmp187 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position186 = *$tmp187;
            return position186;
        }
        }
        else {
        panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp188.value) {
        {
            org$pandalanguage$pandac$Position* $tmp190 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position189 = *$tmp190;
            return position189;
        }
        }
        else {
        panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp191.value) {
        {
            org$pandalanguage$pandac$Position* $tmp193 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position192 = *$tmp193;
            return position192;
        }
        }
        else {
        panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp194.value) {
        {
            org$pandalanguage$pandac$Position* $tmp196 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position195 = *$tmp196;
            return position195;
        }
        }
        else {
        panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp197.value) {
        {
            org$pandalanguage$pandac$Position* $tmp199 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position198 = *$tmp199;
            return position198;
        }
        }
        else {
        panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp200.value) {
        {
            org$pandalanguage$pandac$Position* $tmp202 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position201 = *$tmp202;
            return position201;
        }
        }
        else {
        panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp203.value) {
        {
            org$pandalanguage$pandac$Position* $tmp205 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position204 = *$tmp205;
            return position204;
        }
        }
        else {
        panda$core$Bit $tmp206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp206.value) {
        {
            org$pandalanguage$pandac$Position* $tmp208 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position207 = *$tmp208;
            return position207;
        }
        }
        else {
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp209.value) {
        {
            org$pandalanguage$pandac$Position* $tmp211 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position210 = *$tmp211;
            return position210;
        }
        }
        else {
        panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp212.value) {
        {
            org$pandalanguage$pandac$Position* $tmp214 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position213 = *$tmp214;
            return position213;
        }
        }
        else {
        panda$core$Bit $tmp215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp215.value) {
        {
            org$pandalanguage$pandac$Position* $tmp217 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position216 = *$tmp217;
            return position216;
        }
        }
        else {
        panda$core$Bit $tmp218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp218.value) {
        {
            org$pandalanguage$pandac$Position$init(&$tmp219);
            return $tmp219;
        }
        }
        else {
        panda$core$Bit $tmp220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp220.value) {
        {
            org$pandalanguage$pandac$Position* $tmp222 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position221 = *$tmp222;
            return position221;
        }
        }
        else {
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp223.value) {
        {
            org$pandalanguage$pandac$Position* $tmp225 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position224 = *$tmp225;
            return position224;
        }
        }
        else {
        panda$core$Bit $tmp226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp226.value) {
        {
            org$pandalanguage$pandac$Position* $tmp228 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position227 = *$tmp228;
            return position227;
        }
        }
        else {
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp229.value) {
        {
            org$pandalanguage$pandac$Position* $tmp231 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position230 = *$tmp231;
            return position230;
        }
        }
        else {
        panda$core$Bit $tmp232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp232.value) {
        {
            org$pandalanguage$pandac$Position* $tmp234 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position233 = *$tmp234;
            return position233;
        }
        }
        else {
        panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp235.value) {
        {
            org$pandalanguage$pandac$Position* $tmp237 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position236 = *$tmp237;
            return position236;
        }
        }
        else {
        panda$core$Bit $tmp238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp238.value) {
        {
            org$pandalanguage$pandac$Position* $tmp240 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position239 = *$tmp240;
            return position239;
        }
        }
        else {
        panda$core$Bit $tmp241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp241.value) {
        {
            org$pandalanguage$pandac$Position* $tmp243 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position242 = *$tmp243;
            return position242;
        }
        }
        else {
        panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp244.value) {
        {
            org$pandalanguage$pandac$Position* $tmp246 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position245 = *$tmp246;
            return position245;
        }
        }
        else {
        panda$core$Bit $tmp247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp247.value) {
        {
            org$pandalanguage$pandac$Position* $tmp249 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position248 = *$tmp249;
            return position248;
        }
        }
        else {
        panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp250.value) {
        {
            org$pandalanguage$pandac$Position* $tmp252 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position251 = *$tmp252;
            return position251;
        }
        }
        else {
        panda$core$Bit $tmp253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp253.value) {
        {
            org$pandalanguage$pandac$Position* $tmp255 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position254 = *$tmp255;
            return position254;
        }
        }
        else {
        panda$core$Bit $tmp256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp256.value) {
        {
            org$pandalanguage$pandac$Position* $tmp258 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position257 = *$tmp258;
            return position257;
        }
        }
        else {
        panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp259.value) {
        {
            org$pandalanguage$pandac$Position* $tmp261 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position260 = *$tmp261;
            return position260;
        }
        }
        else {
        panda$core$Bit $tmp262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp262.value) {
        {
            org$pandalanguage$pandac$Position* $tmp264 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position263 = *$tmp264;
            return position263;
        }
        }
        else {
        panda$core$Bit $tmp265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp265.value) {
        {
            org$pandalanguage$pandac$Position* $tmp267 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position266 = *$tmp267;
            return position266;
        }
        }
        else {
        panda$core$Bit $tmp268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp268.value) {
        {
            org$pandalanguage$pandac$Position* $tmp270 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position269 = *$tmp270;
            return position269;
        }
        }
        else {
        panda$core$Bit $tmp271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp271.value) {
        {
            org$pandalanguage$pandac$Position* $tmp273 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position272 = *$tmp273;
            return position272;
        }
        }
        else {
        panda$core$Bit $tmp274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp274.value) {
        {
            org$pandalanguage$pandac$Position* $tmp276 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position275 = *$tmp276;
            return position275;
        }
        }
        else {
        panda$core$Bit $tmp277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp277.value) {
        {
            org$pandalanguage$pandac$Position* $tmp279 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position278 = *$tmp279;
            return position278;
        }
        }
        else {
        panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp280.value) {
        {
            org$pandalanguage$pandac$Position* $tmp282 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position281 = *$tmp282;
            return position281;
        }
        }
        else {
        panda$core$Bit $tmp283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp283.value) {
        {
            org$pandalanguage$pandac$Position* $tmp285 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position284 = *$tmp285;
            return position284;
        }
        }
        else {
        panda$core$Bit $tmp286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp286.value) {
        {
            org$pandalanguage$pandac$Position* $tmp288 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position287 = *$tmp288;
            return position287;
        }
        }
        else {
        panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp289.value) {
        {
            org$pandalanguage$pandac$Position* $tmp291 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position290 = *$tmp291;
            return position290;
        }
        }
        else {
        panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9172->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp292.value) {
        {
            org$pandalanguage$pandac$Position* $tmp294 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9172->$data + 0));
            position293 = *$tmp294;
            return position293;
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
    org$pandalanguage$pandac$ASTNode* $match$165_9295;
    panda$core$String* name297;
    org$pandalanguage$pandac$ASTNode* test300;
    org$pandalanguage$pandac$ASTNode* msg302;
    org$pandalanguage$pandac$ASTNode* left316;
    org$pandalanguage$pandac$parser$Token$Kind op318;
    org$pandalanguage$pandac$ASTNode* right320;
    panda$core$Bit value334;
    panda$collections$ImmutableArray* statements338;
    panda$core$MutableString* result340;
    panda$collections$Iterator* s$Iter345;
    org$pandalanguage$pandac$ASTNode* s357;
    panda$core$Char8 $tmp364;
    panda$core$String* label367;
    org$pandalanguage$pandac$ASTNode* target375;
    panda$collections$ImmutableArray* args377;
    org$pandalanguage$pandac$ASTNode* dc388;
    panda$core$String* name390;
    panda$collections$ImmutableArray* fields392;
    panda$core$MutableString* result394;
    org$pandalanguage$pandac$ASTNode* base409;
    org$pandalanguage$pandac$ChoiceEntry* ce411;
    panda$core$Int64 index413;
    org$pandalanguage$pandac$ASTNode* dc427;
    panda$collections$ImmutableArray* annotations429;
    org$pandalanguage$pandac$ClassDecl$Kind kind431;
    panda$core$String* name433;
    panda$collections$ImmutableArray* generics435;
    panda$collections$ImmutableArray* supertypes437;
    panda$collections$ImmutableArray* members439;
    panda$core$MutableString* result441;
    panda$collections$Iterator* a$Iter447;
    org$pandalanguage$pandac$ASTNode* a459;
    org$pandalanguage$pandac$ClassDecl$Kind $match$208_17466;
    panda$collections$Iterator* m$Iter484;
    org$pandalanguage$pandac$ASTNode* m496;
    panda$core$Char8 $tmp503;
    panda$core$String* label506;
    org$pandalanguage$pandac$ASTNode* target514;
    org$pandalanguage$pandac$ASTNode* value516;
    panda$core$String* label528;
    panda$collections$ImmutableArray* statements530;
    org$pandalanguage$pandac$ASTNode* test532;
    panda$core$MutableString* result534;
    panda$collections$Iterator* s$Iter542;
    org$pandalanguage$pandac$ASTNode* s554;
    org$pandalanguage$pandac$ASTNode* base567;
    panda$core$String* field569;
    org$pandalanguage$pandac$ASTNode* dc579;
    panda$collections$ImmutableArray* annotations581;
    org$pandalanguage$pandac$ASTNode* decl583;
    panda$core$MutableString* result585;
    panda$collections$Iterator* a$Iter591;
    org$pandalanguage$pandac$ASTNode* a603;
    panda$collections$ImmutableArray* entries612;
    panda$core$MutableString* result614;
    panda$collections$Iterator* e$Iter618;
    org$pandalanguage$pandac$ASTNode* e630;
    panda$core$String* label639;
    org$pandalanguage$pandac$ASTNode* target641;
    org$pandalanguage$pandac$ASTNode* list643;
    panda$collections$ImmutableArray* statements645;
    panda$core$MutableString* result647;
    panda$collections$Iterator* s$Iter660;
    org$pandalanguage$pandac$ASTNode* s672;
    panda$core$Char8 $tmp679;
    panda$core$String* name682;
    panda$collections$ImmutableArray* subtypes684;
    panda$core$String* name694;
    org$pandalanguage$pandac$ASTNode* test697;
    panda$collections$ImmutableArray* ifTrue699;
    org$pandalanguage$pandac$ASTNode* ifFalse701;
    panda$core$MutableString* result703;
    panda$collections$Iterator* s$Iter711;
    org$pandalanguage$pandac$ASTNode* s723;
    panda$core$Char8 $tmp730;
    panda$core$UInt64 value737;
    panda$core$String* label741;
    panda$collections$ImmutableArray* statements743;
    panda$core$MutableString* result745;
    panda$collections$Iterator* s$Iter753;
    org$pandalanguage$pandac$ASTNode* s765;
    panda$core$Char8 $tmp772;
    org$pandalanguage$pandac$ASTNode* value775;
    panda$collections$ImmutableArray* whens777;
    panda$collections$ImmutableArray* other779;
    panda$core$MutableString* result781;
    panda$collections$Iterator* w$Iter789;
    org$pandalanguage$pandac$ASTNode* w801;
    panda$core$Char8 $tmp810;
    org$pandalanguage$pandac$ASTNode* dc813;
    panda$collections$ImmutableArray* annotations815;
    org$pandalanguage$pandac$MethodDecl$Kind kind817;
    panda$core$String* name819;
    panda$collections$ImmutableArray* parameters821;
    org$pandalanguage$pandac$ASTNode* returnType823;
    panda$collections$ImmutableArray* statements825;
    panda$core$MutableString* result827;
    panda$collections$Iterator* a$Iter833;
    org$pandalanguage$pandac$ASTNode* a845;
    org$pandalanguage$pandac$MethodDecl$Kind $match$321_17852;
    panda$collections$Iterator* s$Iter870;
    org$pandalanguage$pandac$ASTNode* s882;
    panda$core$Char8 $tmp889;
    org$pandalanguage$pandac$ASTNode* base894;
    panda$core$String* name899;
    panda$core$String* name902;
    org$pandalanguage$pandac$ASTNode* type904;
    org$pandalanguage$pandac$parser$Token$Kind kind913;
    org$pandalanguage$pandac$ASTNode* base915;
    org$pandalanguage$pandac$ASTNode* start926;
    org$pandalanguage$pandac$ASTNode* end928;
    panda$core$Bit inclusive930;
    org$pandalanguage$pandac$ASTNode* step932;
    panda$core$MutableString* result934;
    panda$core$Real64 value959;
    org$pandalanguage$pandac$ASTNode* value963;
    panda$core$String* str973;
    panda$core$String* name978;
    panda$core$String* name981;
    org$pandalanguage$pandac$ASTNode* type983;
    panda$core$String* name992;
    org$pandalanguage$pandac$Variable$Kind kind995;
    panda$collections$ImmutableArray* decls997;
    panda$core$MutableString* result999;
    org$pandalanguage$pandac$Variable$Kind $match$390_171003;
    panda$collections$ImmutableArray* tests1015;
    panda$collections$ImmutableArray* statements1017;
    panda$core$MutableString* result1019;
    panda$core$String* separator1024;
    panda$collections$Iterator* t$Iter1027;
    org$pandalanguage$pandac$ASTNode* t1039;
    panda$core$Char8 $tmp1050;
    panda$collections$Iterator* s$Iter1051;
    org$pandalanguage$pandac$ASTNode* s1063;
    panda$core$String* label1072;
    org$pandalanguage$pandac$ASTNode* test1074;
    panda$collections$ImmutableArray* statements1076;
    panda$core$MutableString* result1078;
    panda$collections$Iterator* s$Iter1089;
    org$pandalanguage$pandac$ASTNode* s1101;
    panda$core$Char8 $tmp1108;
    {
        $match$165_9295 = self;
        panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp296.value) {
        {
            panda$core$String** $tmp298 = ((panda$core$String**) ((char*) $match$165_9295->$data + 16));
            name297 = *$tmp298;
            return name297;
        }
        }
        else {
        panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp299.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp301 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 16));
            test300 = *$tmp301;
            org$pandalanguage$pandac$ASTNode** $tmp303 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 24));
            msg302 = *$tmp303;
            if (((panda$core$Bit) { msg302 == NULL }).value) {
            {
                panda$core$String* $tmp305 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s304, ((panda$core$Object*) test300));
                panda$core$String* $tmp307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp305, &$s306);
                return $tmp307;
            }
            }
            panda$core$String* $tmp309 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s308, ((panda$core$Object*) test300));
            panda$core$String* $tmp311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp309, &$s310);
            panda$core$String* $tmp312 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp311, ((panda$core$Object*) msg302));
            panda$core$String* $tmp314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp312, &$s313);
            return $tmp314;
        }
        }
        else {
        panda$core$Bit $tmp315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp315.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp317 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 16));
            left316 = *$tmp317;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp319 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$165_9295->$data + 24));
            op318 = *$tmp319;
            org$pandalanguage$pandac$ASTNode** $tmp321 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 32));
            right320 = *$tmp321;
            panda$core$String* $tmp323 = (($fn322) left316->$class->vtable[0])(left316);
            panda$core$String* $tmp325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp323, &$s324);
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp326;
            $tmp326 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
            $tmp326->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp326->refCount = 1;
            $tmp326->value = op318;
            panda$core$String* $tmp327 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp325, ((panda$core$Object*) $tmp326));
            panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp327, &$s328);
            panda$core$String* $tmp330 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp329, ((panda$core$Object*) right320));
            panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s331);
            return $tmp332;
        }
        }
        else {
        panda$core$Bit $tmp333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp333.value) {
        {
            panda$core$Bit* $tmp335 = ((panda$core$Bit*) ((char*) $match$165_9295->$data + 16));
            value334 = *$tmp335;
            panda$core$String* $tmp336 = panda$core$Bit$convert$R$panda$core$String(value334);
            return $tmp336;
        }
        }
        else {
        panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp337.value) {
        {
            panda$collections$ImmutableArray** $tmp339 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 16));
            statements338 = *$tmp339;
            panda$core$MutableString* $tmp341 = (panda$core$MutableString*) malloc(48);
            $tmp341->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp341->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp341, &$s343);
            panda$core$Object* $tmp344 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp341));
            result340 = ((panda$core$MutableString*) $tmp344);
            {
                ITable* $tmp346 = ((panda$collections$Iterable*) statements338)->$class->itable;
                while ($tmp346->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp346 = $tmp346->next;
                }
                $fn348 $tmp347 = $tmp346->methods[0];
                panda$collections$Iterator* $tmp349 = $tmp347(((panda$collections$Iterable*) statements338));
                s$Iter345 = $tmp349;
                $l350:;
                ITable* $tmp352 = s$Iter345->$class->itable;
                while ($tmp352->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp352 = $tmp352->next;
                }
                $fn354 $tmp353 = $tmp352->methods[0];
                panda$core$Bit $tmp355 = $tmp353(s$Iter345);
                panda$core$Bit $tmp356 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp355);
                if (!$tmp356.value) goto $l351;
                {
                    ITable* $tmp358 = s$Iter345->$class->itable;
                    while ($tmp358->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp358 = $tmp358->next;
                    }
                    $fn360 $tmp359 = $tmp358->methods[1];
                    panda$core$Object* $tmp361 = $tmp359(s$Iter345);
                    s357 = ((org$pandalanguage$pandac$ASTNode*) $tmp361);
                    panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s357), &$s362);
                    panda$core$MutableString$append$panda$core$String(result340, $tmp363);
                }
                goto $l350;
                $l351:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp364, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result340, $tmp364);
            panda$core$String* $tmp365 = panda$core$MutableString$finish$R$panda$core$String(result340);
            return $tmp365;
        }
        }
        else {
        panda$core$Bit $tmp366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp366.value) {
        {
            panda$core$String** $tmp368 = ((panda$core$String**) ((char*) $match$165_9295->$data + 16));
            label367 = *$tmp368;
            if (((panda$core$Bit) { label367 != NULL }).value) {
            {
                panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s369, label367);
                panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp370, &$s371);
                return $tmp372;
            }
            }
            return &$s373;
        }
        }
        else {
        panda$core$Bit $tmp374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp374.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp376 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 16));
            target375 = *$tmp376;
            panda$collections$ImmutableArray** $tmp378 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 24));
            args377 = *$tmp378;
            panda$core$String* $tmp380 = (($fn379) target375->$class->vtable[0])(target375);
            panda$core$String* $tmp382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp380, &$s381);
            panda$core$String* $tmp383 = panda$collections$ImmutableArray$join$R$panda$core$String(args377);
            panda$core$String* $tmp384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp382, $tmp383);
            panda$core$String* $tmp386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp384, &$s385);
            return $tmp386;
        }
        }
        else {
        panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp387.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp389 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 16));
            dc388 = *$tmp389;
            panda$core$String** $tmp391 = ((panda$core$String**) ((char*) $match$165_9295->$data + 24));
            name390 = *$tmp391;
            panda$collections$ImmutableArray** $tmp393 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 32));
            fields392 = *$tmp393;
            panda$core$MutableString* $tmp395 = (panda$core$MutableString*) malloc(48);
            $tmp395->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp395->refCount.value = 1;
            panda$core$MutableString$init($tmp395);
            panda$core$Object* $tmp397 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp395));
            result394 = ((panda$core$MutableString*) $tmp397);
            if (((panda$core$Bit) { dc388 != NULL }).value) {
            {
                panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc388), &$s398);
                panda$core$MutableString$append$panda$core$String(result394, $tmp399);
            }
            }
            panda$core$String* $tmp400 = panda$core$String$convert$R$panda$core$String(name390);
            panda$core$String* $tmp402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp400, &$s401);
            panda$core$String* $tmp403 = panda$collections$ImmutableArray$join$R$panda$core$String(fields392);
            panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp402, $tmp403);
            panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp404, &$s405);
            panda$core$MutableString$append$panda$core$String(result394, $tmp406);
            panda$core$String* $tmp407 = panda$core$MutableString$finish$R$panda$core$String(result394);
            return $tmp407;
        }
        }
        else {
        panda$core$Bit $tmp408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp408.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp410 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 16));
            base409 = *$tmp410;
            org$pandalanguage$pandac$ChoiceEntry** $tmp412 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$165_9295->$data + 24));
            ce411 = *$tmp412;
            panda$core$Int64* $tmp414 = ((panda$core$Int64*) ((char*) $match$165_9295->$data + 32));
            index413 = *$tmp414;
            panda$core$String* $tmp416 = (($fn415) base409->$class->vtable[0])(base409);
            panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp416, &$s417);
            panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp418, ((panda$core$Object*) ce411));
            panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp419, &$s420);
            panda$core$Int64$wrapper* $tmp422;
            $tmp422 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp422->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp422->refCount = 1;
            $tmp422->value = index413;
            panda$core$String* $tmp423 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp421, ((panda$core$Object*) $tmp422));
            panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp423, &$s424);
            return $tmp425;
        }
        }
        else {
        panda$core$Bit $tmp426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp426.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp428 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 16));
            dc427 = *$tmp428;
            panda$collections$ImmutableArray** $tmp430 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 24));
            annotations429 = *$tmp430;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp432 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$165_9295->$data + 32));
            kind431 = *$tmp432;
            panda$core$String** $tmp434 = ((panda$core$String**) ((char*) $match$165_9295->$data + 40));
            name433 = *$tmp434;
            panda$collections$ImmutableArray** $tmp436 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 48));
            generics435 = *$tmp436;
            panda$collections$ImmutableArray** $tmp438 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 56));
            supertypes437 = *$tmp438;
            panda$collections$ImmutableArray** $tmp440 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 64));
            members439 = *$tmp440;
            panda$core$MutableString* $tmp442 = (panda$core$MutableString*) malloc(48);
            $tmp442->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp442->refCount.value = 1;
            panda$core$MutableString$init($tmp442);
            panda$core$Object* $tmp444 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp442));
            result441 = ((panda$core$MutableString*) $tmp444);
            if (((panda$core$Bit) { dc427 != NULL }).value) {
            {
                panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc427), &$s445);
                panda$core$MutableString$append$panda$core$String(result441, $tmp446);
            }
            }
            {
                ITable* $tmp448 = ((panda$collections$Iterable*) annotations429)->$class->itable;
                while ($tmp448->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp448 = $tmp448->next;
                }
                $fn450 $tmp449 = $tmp448->methods[0];
                panda$collections$Iterator* $tmp451 = $tmp449(((panda$collections$Iterable*) annotations429));
                a$Iter447 = $tmp451;
                $l452:;
                ITable* $tmp454 = a$Iter447->$class->itable;
                while ($tmp454->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp454 = $tmp454->next;
                }
                $fn456 $tmp455 = $tmp454->methods[0];
                panda$core$Bit $tmp457 = $tmp455(a$Iter447);
                panda$core$Bit $tmp458 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp457);
                if (!$tmp458.value) goto $l453;
                {
                    ITable* $tmp460 = a$Iter447->$class->itable;
                    while ($tmp460->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp460 = $tmp460->next;
                    }
                    $fn462 $tmp461 = $tmp460->methods[1];
                    panda$core$Object* $tmp463 = $tmp461(a$Iter447);
                    a459 = ((org$pandalanguage$pandac$ASTNode*) $tmp463);
                    panda$core$String* $tmp465 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a459), &$s464);
                    panda$core$MutableString$append$panda$core$String(result441, $tmp465);
                }
                goto $l452;
                $l453:;
            }
            {
                $match$208_17466 = kind431;
                panda$core$Bit $tmp467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17466.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp467.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result441, &$s468);
                }
                }
                else {
                panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17466.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp469.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result441, &$s470);
                }
                }
                else {
                panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17466.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp471.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result441, &$s472);
                }
                }
                }
                }
            }
            panda$core$MutableString$append$panda$core$String(result441, name433);
            if (((panda$core$Bit) { generics435 != NULL }).value) {
            {
                panda$core$String* $tmp474 = panda$collections$ImmutableArray$join$R$panda$core$String(generics435);
                panda$core$String* $tmp475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s473, $tmp474);
                panda$core$String* $tmp477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp475, &$s476);
                panda$core$MutableString$append$panda$core$String(result441, $tmp477);
            }
            }
            if (((panda$core$Bit) { supertypes437 != NULL }).value) {
            {
                panda$core$String* $tmp479 = panda$collections$ImmutableArray$join$R$panda$core$String(supertypes437);
                panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s478, $tmp479);
                panda$core$String* $tmp482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, &$s481);
                panda$core$MutableString$append$panda$core$String(result441, $tmp482);
            }
            }
            panda$core$MutableString$append$panda$core$String(result441, &$s483);
            {
                ITable* $tmp485 = ((panda$collections$Iterable*) members439)->$class->itable;
                while ($tmp485->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp485 = $tmp485->next;
                }
                $fn487 $tmp486 = $tmp485->methods[0];
                panda$collections$Iterator* $tmp488 = $tmp486(((panda$collections$Iterable*) members439));
                m$Iter484 = $tmp488;
                $l489:;
                ITable* $tmp491 = m$Iter484->$class->itable;
                while ($tmp491->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp491 = $tmp491->next;
                }
                $fn493 $tmp492 = $tmp491->methods[0];
                panda$core$Bit $tmp494 = $tmp492(m$Iter484);
                panda$core$Bit $tmp495 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp494);
                if (!$tmp495.value) goto $l490;
                {
                    ITable* $tmp497 = m$Iter484->$class->itable;
                    while ($tmp497->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp497 = $tmp497->next;
                    }
                    $fn499 $tmp498 = $tmp497->methods[1];
                    panda$core$Object* $tmp500 = $tmp498(m$Iter484);
                    m496 = ((org$pandalanguage$pandac$ASTNode*) $tmp500);
                    panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m496), &$s501);
                    panda$core$MutableString$append$panda$core$String(result441, $tmp502);
                }
                goto $l489;
                $l490:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp503, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result441, $tmp503);
            panda$core$String* $tmp504 = panda$core$MutableString$finish$R$panda$core$String(result441);
            return $tmp504;
        }
        }
        else {
        panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp505.value) {
        {
            panda$core$String** $tmp507 = ((panda$core$String**) ((char*) $match$165_9295->$data + 16));
            label506 = *$tmp507;
            if (((panda$core$Bit) { label506 != NULL }).value) {
            {
                panda$core$String* $tmp509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s508, label506);
                panda$core$String* $tmp511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp509, &$s510);
                return $tmp511;
            }
            }
            return &$s512;
        }
        }
        else {
        panda$core$Bit $tmp513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp513.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp515 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 16));
            target514 = *$tmp515;
            org$pandalanguage$pandac$ASTNode** $tmp517 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 24));
            value516 = *$tmp517;
            if (((panda$core$Bit) { value516 != NULL }).value) {
            {
                panda$core$String* $tmp519 = (($fn518) target514->$class->vtable[0])(target514);
                panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp519, &$s520);
                panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp521, ((panda$core$Object*) value516));
                panda$core$String* $tmp524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp522, &$s523);
                return $tmp524;
            }
            }
            panda$core$String* $tmp526 = (($fn525) target514->$class->vtable[0])(target514);
            return $tmp526;
        }
        }
        else {
        panda$core$Bit $tmp527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp527.value) {
        {
            panda$core$String** $tmp529 = ((panda$core$String**) ((char*) $match$165_9295->$data + 16));
            label528 = *$tmp529;
            panda$collections$ImmutableArray** $tmp531 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 24));
            statements530 = *$tmp531;
            org$pandalanguage$pandac$ASTNode** $tmp533 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 32));
            test532 = *$tmp533;
            panda$core$MutableString* $tmp535 = (panda$core$MutableString*) malloc(48);
            $tmp535->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp535->refCount.value = 1;
            panda$core$MutableString$init($tmp535);
            panda$core$Object* $tmp537 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp535));
            result534 = ((panda$core$MutableString*) $tmp537);
            if (((panda$core$Bit) { label528 != NULL }).value) {
            {
                panda$core$String* $tmp538 = panda$core$String$convert$R$panda$core$String(label528);
                panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp538, &$s539);
                panda$core$MutableString$append$panda$core$String(result534, $tmp540);
            }
            }
            panda$core$MutableString$append$panda$core$String(result534, &$s541);
            {
                ITable* $tmp543 = ((panda$collections$Iterable*) statements530)->$class->itable;
                while ($tmp543->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp543 = $tmp543->next;
                }
                $fn545 $tmp544 = $tmp543->methods[0];
                panda$collections$Iterator* $tmp546 = $tmp544(((panda$collections$Iterable*) statements530));
                s$Iter542 = $tmp546;
                $l547:;
                ITable* $tmp549 = s$Iter542->$class->itable;
                while ($tmp549->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp549 = $tmp549->next;
                }
                $fn551 $tmp550 = $tmp549->methods[0];
                panda$core$Bit $tmp552 = $tmp550(s$Iter542);
                panda$core$Bit $tmp553 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp552);
                if (!$tmp553.value) goto $l548;
                {
                    ITable* $tmp555 = s$Iter542->$class->itable;
                    while ($tmp555->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp555 = $tmp555->next;
                    }
                    $fn557 $tmp556 = $tmp555->methods[1];
                    panda$core$Object* $tmp558 = $tmp556(s$Iter542);
                    s554 = ((org$pandalanguage$pandac$ASTNode*) $tmp558);
                    panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s554), &$s559);
                    panda$core$MutableString$append$panda$core$String(result534, $tmp560);
                }
                goto $l547;
                $l548:;
            }
            panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s561, ((panda$core$Object*) test532));
            panda$core$String* $tmp564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp562, &$s563);
            panda$core$MutableString$append$panda$core$String(result534, $tmp564);
            panda$core$String* $tmp565 = panda$core$MutableString$finish$R$panda$core$String(result534);
            return $tmp565;
        }
        }
        else {
        panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp566.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp568 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 16));
            base567 = *$tmp568;
            panda$core$String** $tmp570 = ((panda$core$String**) ((char*) $match$165_9295->$data + 24));
            field569 = *$tmp570;
            panda$core$String* $tmp572 = (($fn571) base567->$class->vtable[0])(base567);
            panda$core$String* $tmp574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp572, &$s573);
            panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp574, field569);
            panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, &$s576);
            return $tmp577;
        }
        }
        else {
        panda$core$Bit $tmp578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp578.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp580 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 16));
            dc579 = *$tmp580;
            panda$collections$ImmutableArray** $tmp582 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 24));
            annotations581 = *$tmp582;
            org$pandalanguage$pandac$ASTNode** $tmp584 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 32));
            decl583 = *$tmp584;
            panda$core$MutableString* $tmp586 = (panda$core$MutableString*) malloc(48);
            $tmp586->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp586->refCount.value = 1;
            panda$core$MutableString$init($tmp586);
            panda$core$Object* $tmp588 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp586));
            result585 = ((panda$core$MutableString*) $tmp588);
            if (((panda$core$Bit) { dc579 != NULL }).value) {
            {
                panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc579), &$s589);
                panda$core$MutableString$append$panda$core$String(result585, $tmp590);
            }
            }
            {
                ITable* $tmp592 = ((panda$collections$Iterable*) annotations581)->$class->itable;
                while ($tmp592->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp592 = $tmp592->next;
                }
                $fn594 $tmp593 = $tmp592->methods[0];
                panda$collections$Iterator* $tmp595 = $tmp593(((panda$collections$Iterable*) annotations581));
                a$Iter591 = $tmp595;
                $l596:;
                ITable* $tmp598 = a$Iter591->$class->itable;
                while ($tmp598->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp598 = $tmp598->next;
                }
                $fn600 $tmp599 = $tmp598->methods[0];
                panda$core$Bit $tmp601 = $tmp599(a$Iter591);
                panda$core$Bit $tmp602 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp601);
                if (!$tmp602.value) goto $l597;
                {
                    ITable* $tmp604 = a$Iter591->$class->itable;
                    while ($tmp604->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp604 = $tmp604->next;
                    }
                    $fn606 $tmp605 = $tmp604->methods[1];
                    panda$core$Object* $tmp607 = $tmp605(a$Iter591);
                    a603 = ((org$pandalanguage$pandac$ASTNode*) $tmp607);
                    panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a603), &$s608);
                    panda$core$MutableString$append$panda$core$String(result585, $tmp609);
                }
                goto $l596;
                $l597:;
            }
            panda$core$MutableString$append$panda$core$Object(result585, ((panda$core$Object*) decl583));
            panda$core$String* $tmp610 = panda$core$MutableString$finish$R$panda$core$String(result585);
            return $tmp610;
        }
        }
        else {
        panda$core$Bit $tmp611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp611.value) {
        {
            panda$collections$ImmutableArray** $tmp613 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 0));
            entries612 = *$tmp613;
            panda$core$MutableString* $tmp615 = (panda$core$MutableString*) malloc(48);
            $tmp615->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp615->refCount.value = 1;
            panda$core$MutableString$init($tmp615);
            panda$core$Object* $tmp617 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp615));
            result614 = ((panda$core$MutableString*) $tmp617);
            {
                ITable* $tmp619 = ((panda$collections$Iterable*) entries612)->$class->itable;
                while ($tmp619->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp619 = $tmp619->next;
                }
                $fn621 $tmp620 = $tmp619->methods[0];
                panda$collections$Iterator* $tmp622 = $tmp620(((panda$collections$Iterable*) entries612));
                e$Iter618 = $tmp622;
                $l623:;
                ITable* $tmp625 = e$Iter618->$class->itable;
                while ($tmp625->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp625 = $tmp625->next;
                }
                $fn627 $tmp626 = $tmp625->methods[0];
                panda$core$Bit $tmp628 = $tmp626(e$Iter618);
                panda$core$Bit $tmp629 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp628);
                if (!$tmp629.value) goto $l624;
                {
                    ITable* $tmp631 = e$Iter618->$class->itable;
                    while ($tmp631->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp631 = $tmp631->next;
                    }
                    $fn633 $tmp632 = $tmp631->methods[1];
                    panda$core$Object* $tmp634 = $tmp632(e$Iter618);
                    e630 = ((org$pandalanguage$pandac$ASTNode*) $tmp634);
                    panda$core$String* $tmp636 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e630), &$s635);
                    panda$core$MutableString$append$panda$core$String(result614, $tmp636);
                }
                goto $l623;
                $l624:;
            }
            panda$core$String* $tmp637 = panda$core$MutableString$finish$R$panda$core$String(result614);
            return $tmp637;
        }
        }
        else {
        panda$core$Bit $tmp638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp638.value) {
        {
            panda$core$String** $tmp640 = ((panda$core$String**) ((char*) $match$165_9295->$data + 16));
            label639 = *$tmp640;
            org$pandalanguage$pandac$ASTNode** $tmp642 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 24));
            target641 = *$tmp642;
            org$pandalanguage$pandac$ASTNode** $tmp644 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 32));
            list643 = *$tmp644;
            panda$collections$ImmutableArray** $tmp646 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 40));
            statements645 = *$tmp646;
            panda$core$MutableString* $tmp648 = (panda$core$MutableString*) malloc(48);
            $tmp648->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp648->refCount.value = 1;
            panda$core$MutableString$init($tmp648);
            panda$core$Object* $tmp650 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp648));
            result647 = ((panda$core$MutableString*) $tmp650);
            if (((panda$core$Bit) { label639 != NULL }).value) {
            {
                panda$core$String* $tmp652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label639, &$s651);
                panda$core$MutableString$append$panda$core$String(result647, $tmp652);
            }
            }
            panda$core$String* $tmp654 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s653, ((panda$core$Object*) target641));
            panda$core$String* $tmp656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp654, &$s655);
            panda$core$String* $tmp657 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp656, ((panda$core$Object*) list643));
            panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp657, &$s658);
            panda$core$MutableString$append$panda$core$String(result647, $tmp659);
            {
                ITable* $tmp661 = ((panda$collections$Iterable*) statements645)->$class->itable;
                while ($tmp661->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp661 = $tmp661->next;
                }
                $fn663 $tmp662 = $tmp661->methods[0];
                panda$collections$Iterator* $tmp664 = $tmp662(((panda$collections$Iterable*) statements645));
                s$Iter660 = $tmp664;
                $l665:;
                ITable* $tmp667 = s$Iter660->$class->itable;
                while ($tmp667->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp667 = $tmp667->next;
                }
                $fn669 $tmp668 = $tmp667->methods[0];
                panda$core$Bit $tmp670 = $tmp668(s$Iter660);
                panda$core$Bit $tmp671 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp670);
                if (!$tmp671.value) goto $l666;
                {
                    ITable* $tmp673 = s$Iter660->$class->itable;
                    while ($tmp673->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp673 = $tmp673->next;
                    }
                    $fn675 $tmp674 = $tmp673->methods[1];
                    panda$core$Object* $tmp676 = $tmp674(s$Iter660);
                    s672 = ((org$pandalanguage$pandac$ASTNode*) $tmp676);
                    panda$core$String* $tmp678 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s672), &$s677);
                    panda$core$MutableString$append$panda$core$String(result647, $tmp678);
                }
                goto $l665;
                $l666:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp679, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result647, $tmp679);
            panda$core$String* $tmp680 = panda$core$MutableString$finish$R$panda$core$String(result647);
            return $tmp680;
        }
        }
        else {
        panda$core$Bit $tmp681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp681.value) {
        {
            panda$core$String** $tmp683 = ((panda$core$String**) ((char*) $match$165_9295->$data + 16));
            name682 = *$tmp683;
            panda$collections$ImmutableArray** $tmp685 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 24));
            subtypes684 = *$tmp685;
            panda$core$String* $tmp686 = panda$core$String$convert$R$panda$core$String(name682);
            panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp686, &$s687);
            panda$core$String* $tmp689 = panda$collections$ImmutableArray$join$R$panda$core$String(subtypes684);
            panda$core$String* $tmp690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp688, $tmp689);
            panda$core$String* $tmp692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp690, &$s691);
            return $tmp692;
        }
        }
        else {
        panda$core$Bit $tmp693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp693.value) {
        {
            panda$core$String** $tmp695 = ((panda$core$String**) ((char*) $match$165_9295->$data + 16));
            name694 = *$tmp695;
            return name694;
        }
        }
        else {
        panda$core$Bit $tmp696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp696.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp698 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 16));
            test697 = *$tmp698;
            panda$collections$ImmutableArray** $tmp700 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 24));
            ifTrue699 = *$tmp700;
            org$pandalanguage$pandac$ASTNode** $tmp702 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 32));
            ifFalse701 = *$tmp702;
            panda$core$MutableString* $tmp704 = (panda$core$MutableString*) malloc(48);
            $tmp704->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp704->refCount.value = 1;
            panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s706, ((panda$core$Object*) test697));
            panda$core$String* $tmp709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp707, &$s708);
            panda$core$MutableString$init$panda$core$String($tmp704, $tmp709);
            panda$core$Object* $tmp710 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp704));
            result703 = ((panda$core$MutableString*) $tmp710);
            {
                ITable* $tmp712 = ((panda$collections$Iterable*) ifTrue699)->$class->itable;
                while ($tmp712->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp712 = $tmp712->next;
                }
                $fn714 $tmp713 = $tmp712->methods[0];
                panda$collections$Iterator* $tmp715 = $tmp713(((panda$collections$Iterable*) ifTrue699));
                s$Iter711 = $tmp715;
                $l716:;
                ITable* $tmp718 = s$Iter711->$class->itable;
                while ($tmp718->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp718 = $tmp718->next;
                }
                $fn720 $tmp719 = $tmp718->methods[0];
                panda$core$Bit $tmp721 = $tmp719(s$Iter711);
                panda$core$Bit $tmp722 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp721);
                if (!$tmp722.value) goto $l717;
                {
                    ITable* $tmp724 = s$Iter711->$class->itable;
                    while ($tmp724->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp724 = $tmp724->next;
                    }
                    $fn726 $tmp725 = $tmp724->methods[1];
                    panda$core$Object* $tmp727 = $tmp725(s$Iter711);
                    s723 = ((org$pandalanguage$pandac$ASTNode*) $tmp727);
                    panda$core$String* $tmp729 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s723), &$s728);
                    panda$core$MutableString$append$panda$core$String(result703, $tmp729);
                }
                goto $l716;
                $l717:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp730, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result703, $tmp730);
            if (((panda$core$Bit) { ifFalse701 != NULL }).value) {
            {
                panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s731, ((panda$core$Object*) ifFalse701));
                panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp732, &$s733);
                panda$core$MutableString$append$panda$core$String(result703, $tmp734);
            }
            }
            panda$core$String* $tmp735 = panda$core$MutableString$finish$R$panda$core$String(result703);
            return $tmp735;
        }
        }
        else {
        panda$core$Bit $tmp736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp736.value) {
        {
            panda$core$UInt64* $tmp738 = ((panda$core$UInt64*) ((char*) $match$165_9295->$data + 16));
            value737 = *$tmp738;
            panda$core$String* $tmp739 = panda$core$UInt64$convert$R$panda$core$String(value737);
            return $tmp739;
        }
        }
        else {
        panda$core$Bit $tmp740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp740.value) {
        {
            panda$core$String** $tmp742 = ((panda$core$String**) ((char*) $match$165_9295->$data + 16));
            label741 = *$tmp742;
            panda$collections$ImmutableArray** $tmp744 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 24));
            statements743 = *$tmp744;
            panda$core$MutableString* $tmp746 = (panda$core$MutableString*) malloc(48);
            $tmp746->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp746->refCount.value = 1;
            panda$core$MutableString$init($tmp746);
            panda$core$Object* $tmp748 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp746));
            result745 = ((panda$core$MutableString*) $tmp748);
            if (((panda$core$Bit) { label741 != NULL }).value) {
            {
                panda$core$String* $tmp749 = panda$core$String$convert$R$panda$core$String(label741);
                panda$core$String* $tmp751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp749, &$s750);
                panda$core$MutableString$append$panda$core$String(result745, $tmp751);
            }
            }
            panda$core$MutableString$append$panda$core$String(result745, &$s752);
            {
                ITable* $tmp754 = ((panda$collections$Iterable*) statements743)->$class->itable;
                while ($tmp754->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp754 = $tmp754->next;
                }
                $fn756 $tmp755 = $tmp754->methods[0];
                panda$collections$Iterator* $tmp757 = $tmp755(((panda$collections$Iterable*) statements743));
                s$Iter753 = $tmp757;
                $l758:;
                ITable* $tmp760 = s$Iter753->$class->itable;
                while ($tmp760->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp760 = $tmp760->next;
                }
                $fn762 $tmp761 = $tmp760->methods[0];
                panda$core$Bit $tmp763 = $tmp761(s$Iter753);
                panda$core$Bit $tmp764 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp763);
                if (!$tmp764.value) goto $l759;
                {
                    ITable* $tmp766 = s$Iter753->$class->itable;
                    while ($tmp766->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp766 = $tmp766->next;
                    }
                    $fn768 $tmp767 = $tmp766->methods[1];
                    panda$core$Object* $tmp769 = $tmp767(s$Iter753);
                    s765 = ((org$pandalanguage$pandac$ASTNode*) $tmp769);
                    panda$core$String* $tmp771 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s765), &$s770);
                    panda$core$MutableString$append$panda$core$String(result745, $tmp771);
                }
                goto $l758;
                $l759:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp772, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result745, $tmp772);
            panda$core$String* $tmp773 = panda$core$MutableString$finish$R$panda$core$String(result745);
            return $tmp773;
        }
        }
        else {
        panda$core$Bit $tmp774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp774.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp776 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 16));
            value775 = *$tmp776;
            panda$collections$ImmutableArray** $tmp778 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 24));
            whens777 = *$tmp778;
            panda$collections$ImmutableArray** $tmp780 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 32));
            other779 = *$tmp780;
            panda$core$MutableString* $tmp782 = (panda$core$MutableString*) malloc(48);
            $tmp782->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp782->refCount.value = 1;
            panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s784, ((panda$core$Object*) value775));
            panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp785, &$s786);
            panda$core$MutableString$init$panda$core$String($tmp782, $tmp787);
            panda$core$Object* $tmp788 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp782));
            result781 = ((panda$core$MutableString*) $tmp788);
            {
                ITable* $tmp790 = ((panda$collections$Iterable*) whens777)->$class->itable;
                while ($tmp790->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp790 = $tmp790->next;
                }
                $fn792 $tmp791 = $tmp790->methods[0];
                panda$collections$Iterator* $tmp793 = $tmp791(((panda$collections$Iterable*) whens777));
                w$Iter789 = $tmp793;
                $l794:;
                ITable* $tmp796 = w$Iter789->$class->itable;
                while ($tmp796->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp796 = $tmp796->next;
                }
                $fn798 $tmp797 = $tmp796->methods[0];
                panda$core$Bit $tmp799 = $tmp797(w$Iter789);
                panda$core$Bit $tmp800 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp799);
                if (!$tmp800.value) goto $l795;
                {
                    ITable* $tmp802 = w$Iter789->$class->itable;
                    while ($tmp802->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp802 = $tmp802->next;
                    }
                    $fn804 $tmp803 = $tmp802->methods[1];
                    panda$core$Object* $tmp805 = $tmp803(w$Iter789);
                    w801 = ((org$pandalanguage$pandac$ASTNode*) $tmp805);
                    panda$core$String* $tmp807 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w801), &$s806);
                    panda$core$MutableString$append$panda$core$String(result781, $tmp807);
                }
                goto $l794;
                $l795:;
            }
            if (((panda$core$Bit) { other779 != NULL }).value) {
            {
                panda$core$String* $tmp809 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other779), &$s808);
                panda$core$MutableString$append$panda$core$String(result781, $tmp809);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp810, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result781, $tmp810);
            panda$core$String* $tmp811 = panda$core$MutableString$finish$R$panda$core$String(result781);
            return $tmp811;
        }
        }
        else {
        panda$core$Bit $tmp812 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp812.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp814 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 16));
            dc813 = *$tmp814;
            panda$collections$ImmutableArray** $tmp816 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 24));
            annotations815 = *$tmp816;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp818 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$165_9295->$data + 32));
            kind817 = *$tmp818;
            panda$core$String** $tmp820 = ((panda$core$String**) ((char*) $match$165_9295->$data + 40));
            name819 = *$tmp820;
            panda$collections$ImmutableArray** $tmp822 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 48));
            parameters821 = *$tmp822;
            org$pandalanguage$pandac$ASTNode** $tmp824 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 56));
            returnType823 = *$tmp824;
            panda$collections$ImmutableArray** $tmp826 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 64));
            statements825 = *$tmp826;
            panda$core$MutableString* $tmp828 = (panda$core$MutableString*) malloc(48);
            $tmp828->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp828->refCount.value = 1;
            panda$core$MutableString$init($tmp828);
            panda$core$Object* $tmp830 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp828));
            result827 = ((panda$core$MutableString*) $tmp830);
            if (((panda$core$Bit) { dc813 != NULL }).value) {
            {
                panda$core$String* $tmp832 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc813), &$s831);
                panda$core$MutableString$append$panda$core$String(result827, $tmp832);
            }
            }
            {
                ITable* $tmp834 = ((panda$collections$Iterable*) annotations815)->$class->itable;
                while ($tmp834->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp834 = $tmp834->next;
                }
                $fn836 $tmp835 = $tmp834->methods[0];
                panda$collections$Iterator* $tmp837 = $tmp835(((panda$collections$Iterable*) annotations815));
                a$Iter833 = $tmp837;
                $l838:;
                ITable* $tmp840 = a$Iter833->$class->itable;
                while ($tmp840->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp840 = $tmp840->next;
                }
                $fn842 $tmp841 = $tmp840->methods[0];
                panda$core$Bit $tmp843 = $tmp841(a$Iter833);
                panda$core$Bit $tmp844 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp843);
                if (!$tmp844.value) goto $l839;
                {
                    ITable* $tmp846 = a$Iter833->$class->itable;
                    while ($tmp846->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp846 = $tmp846->next;
                    }
                    $fn848 $tmp847 = $tmp846->methods[1];
                    panda$core$Object* $tmp849 = $tmp847(a$Iter833);
                    a845 = ((org$pandalanguage$pandac$ASTNode*) $tmp849);
                    panda$core$String* $tmp851 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a845), &$s850);
                    panda$core$MutableString$append$panda$core$String(result827, $tmp851);
                }
                goto $l838;
                $l839:;
            }
            {
                $match$321_17852 = kind817;
                panda$core$Bit $tmp853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17852.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp853.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result827, &$s854);
                }
                }
                else {
                panda$core$Bit $tmp855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17852.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp855.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result827, &$s856);
                }
                }
                else {
                panda$core$Bit $tmp857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17852.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp857.value) {
                {
                }
                }
                }
                }
            }
            panda$core$String* $tmp858 = panda$core$String$convert$R$panda$core$String(name819);
            panda$core$String* $tmp860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp858, &$s859);
            panda$core$String* $tmp861 = panda$collections$ImmutableArray$join$R$panda$core$String(parameters821);
            panda$core$String* $tmp862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp860, $tmp861);
            panda$core$String* $tmp864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp862, &$s863);
            panda$core$MutableString$append$panda$core$String(result827, $tmp864);
            if (((panda$core$Bit) { returnType823 != NULL }).value) {
            {
                panda$core$String* $tmp866 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s865, ((panda$core$Object*) returnType823));
                panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp866, &$s867);
                panda$core$MutableString$append$panda$core$String(result827, $tmp868);
            }
            }
            if (((panda$core$Bit) { statements825 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result827, &$s869);
                {
                    ITable* $tmp871 = ((panda$collections$Iterable*) statements825)->$class->itable;
                    while ($tmp871->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp871 = $tmp871->next;
                    }
                    $fn873 $tmp872 = $tmp871->methods[0];
                    panda$collections$Iterator* $tmp874 = $tmp872(((panda$collections$Iterable*) statements825));
                    s$Iter870 = $tmp874;
                    $l875:;
                    ITable* $tmp877 = s$Iter870->$class->itable;
                    while ($tmp877->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp877 = $tmp877->next;
                    }
                    $fn879 $tmp878 = $tmp877->methods[0];
                    panda$core$Bit $tmp880 = $tmp878(s$Iter870);
                    panda$core$Bit $tmp881 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp880);
                    if (!$tmp881.value) goto $l876;
                    {
                        ITable* $tmp883 = s$Iter870->$class->itable;
                        while ($tmp883->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp883 = $tmp883->next;
                        }
                        $fn885 $tmp884 = $tmp883->methods[1];
                        panda$core$Object* $tmp886 = $tmp884(s$Iter870);
                        s882 = ((org$pandalanguage$pandac$ASTNode*) $tmp886);
                        panda$core$String* $tmp888 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s882), &$s887);
                        panda$core$MutableString$append$panda$core$String(result827, $tmp888);
                    }
                    goto $l875;
                    $l876:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp889, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result827, $tmp889);
            }
            }
            panda$core$String* $tmp890 = panda$core$MutableString$finish$R$panda$core$String(result827);
            return $tmp890;
        }
        }
        else {
        panda$core$Bit $tmp891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp891.value) {
        {
            return &$s892;
        }
        }
        else {
        panda$core$Bit $tmp893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp893.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp895 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 16));
            base894 = *$tmp895;
            panda$core$String* $tmp897 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base894), &$s896);
            return $tmp897;
        }
        }
        else {
        panda$core$Bit $tmp898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp898.value) {
        {
            panda$core$String** $tmp900 = ((panda$core$String**) ((char*) $match$165_9295->$data + 16));
            name899 = *$tmp900;
            return name899;
        }
        }
        else {
        panda$core$Bit $tmp901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp901.value) {
        {
            panda$core$String** $tmp903 = ((panda$core$String**) ((char*) $match$165_9295->$data + 16));
            name902 = *$tmp903;
            org$pandalanguage$pandac$ASTNode** $tmp905 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 24));
            type904 = *$tmp905;
            panda$core$String* $tmp906 = panda$core$String$convert$R$panda$core$String(name902);
            panda$core$String* $tmp908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp906, &$s907);
            panda$core$String* $tmp909 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp908, ((panda$core$Object*) type904));
            panda$core$String* $tmp911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp909, &$s910);
            return $tmp911;
        }
        }
        else {
        panda$core$Bit $tmp912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp912.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp914 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$165_9295->$data + 16));
            kind913 = *$tmp914;
            org$pandalanguage$pandac$ASTNode** $tmp916 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 24));
            base915 = *$tmp916;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp917;
            $tmp917 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
            $tmp917->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp917->refCount = 1;
            $tmp917->value = kind913;
            panda$core$String* $tmp919 = (($fn918) ((panda$core$Object*) $tmp917)->$class->vtable[0])(((panda$core$Object*) $tmp917));
            panda$core$String* $tmp921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp919, &$s920);
            panda$core$String* $tmp922 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp921, ((panda$core$Object*) base915));
            panda$core$String* $tmp924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp922, &$s923);
            return $tmp924;
        }
        }
        else {
        panda$core$Bit $tmp925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp925.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp927 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 16));
            start926 = *$tmp927;
            org$pandalanguage$pandac$ASTNode** $tmp929 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 24));
            end928 = *$tmp929;
            panda$core$Bit* $tmp931 = ((panda$core$Bit*) ((char*) $match$165_9295->$data + 32));
            inclusive930 = *$tmp931;
            org$pandalanguage$pandac$ASTNode** $tmp933 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 33));
            step932 = *$tmp933;
            panda$core$MutableString* $tmp935 = (panda$core$MutableString*) malloc(48);
            $tmp935->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp935->refCount.value = 1;
            panda$core$MutableString$init($tmp935);
            panda$core$Object* $tmp937 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp935));
            result934 = ((panda$core$MutableString*) $tmp937);
            panda$core$Bit $tmp941;
            if (((panda$core$Bit) { start926 != NULL }).value) goto $l938; else goto $l939;
            $l938:;
            panda$core$Bit $tmp942 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start926->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp941 = $tmp942;
            goto $l940;
            $l939:;
            $tmp941 = ((panda$core$Bit) { true });
            goto $l940;
            $l940:;
            if ($tmp941.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result934, ((panda$core$Object*) start926));
            }
            }
            if (inclusive930.value) {
            {
                panda$core$MutableString$append$panda$core$String(result934, &$s943);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result934, &$s944);
            }
            }
            panda$core$Bit $tmp948;
            if (((panda$core$Bit) { end928 != NULL }).value) goto $l945; else goto $l946;
            $l945:;
            panda$core$Bit $tmp949 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(end928->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp948 = $tmp949;
            goto $l947;
            $l946:;
            $tmp948 = ((panda$core$Bit) { true });
            goto $l947;
            $l947:;
            if ($tmp948.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result934, ((panda$core$Object*) end928));
            }
            }
            panda$core$Bit $tmp953;
            if (((panda$core$Bit) { step932 != NULL }).value) goto $l950; else goto $l951;
            $l950:;
            panda$core$Bit $tmp954 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(step932->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp953 = $tmp954;
            goto $l952;
            $l951:;
            $tmp953 = ((panda$core$Bit) { true });
            goto $l952;
            $l952:;
            if ($tmp953.value) {
            {
                panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s955, ((panda$core$Object*) step932));
                panda$core$MutableString$append$panda$core$String(result934, $tmp956);
            }
            }
            panda$core$String* $tmp957 = panda$core$MutableString$finish$R$panda$core$String(result934);
            return $tmp957;
        }
        }
        else {
        panda$core$Bit $tmp958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp958.value) {
        {
            panda$core$Real64* $tmp960 = ((panda$core$Real64*) ((char*) $match$165_9295->$data + 16));
            value959 = *$tmp960;
            panda$core$String* $tmp961 = panda$core$Real64$convert$R$panda$core$String(value959);
            return $tmp961;
        }
        }
        else {
        panda$core$Bit $tmp962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp962.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp964 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 16));
            value963 = *$tmp964;
            if (((panda$core$Bit) { value963 != NULL }).value) {
            {
                panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s965, ((panda$core$Object*) value963));
                panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp966, &$s967);
                return $tmp968;
            }
            }
            return &$s969;
        }
        }
        else {
        panda$core$Bit $tmp970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp970.value) {
        {
            return &$s971;
        }
        }
        else {
        panda$core$Bit $tmp972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp972.value) {
        {
            panda$core$String** $tmp974 = ((panda$core$String**) ((char*) $match$165_9295->$data + 16));
            str973 = *$tmp974;
            return str973;
        }
        }
        else {
        panda$core$Bit $tmp975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp975.value) {
        {
            return &$s976;
        }
        }
        else {
        panda$core$Bit $tmp977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp977.value) {
        {
            panda$core$String** $tmp979 = ((panda$core$String**) ((char*) $match$165_9295->$data + 16));
            name978 = *$tmp979;
            return name978;
        }
        }
        else {
        panda$core$Bit $tmp980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp980.value) {
        {
            panda$core$String** $tmp982 = ((panda$core$String**) ((char*) $match$165_9295->$data + 16));
            name981 = *$tmp982;
            org$pandalanguage$pandac$ASTNode** $tmp984 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 24));
            type983 = *$tmp984;
            if (((panda$core$Bit) { type983 != NULL }).value) {
            {
                panda$core$String* $tmp985 = panda$core$String$convert$R$panda$core$String(name981);
                panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp985, &$s986);
                panda$core$String* $tmp988 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp987, ((panda$core$Object*) type983));
                panda$core$String* $tmp990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp988, &$s989);
                return $tmp990;
            }
            }
            return name981;
        }
        }
        else {
        panda$core$Bit $tmp991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp991.value) {
        {
            panda$core$String** $tmp993 = ((panda$core$String**) ((char*) $match$165_9295->$data + 16));
            name992 = *$tmp993;
            return name992;
        }
        }
        else {
        panda$core$Bit $tmp994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp994.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp996 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$165_9295->$data + 16));
            kind995 = *$tmp996;
            panda$collections$ImmutableArray** $tmp998 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 24));
            decls997 = *$tmp998;
            panda$core$MutableString* $tmp1000 = (panda$core$MutableString*) malloc(48);
            $tmp1000->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1000->refCount.value = 1;
            panda$core$MutableString$init($tmp1000);
            panda$core$Object* $tmp1002 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1000));
            result999 = ((panda$core$MutableString*) $tmp1002);
            {
                $match$390_171003 = kind995;
                panda$core$Bit $tmp1004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_171003.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp1004.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result999, &$s1005);
                }
                }
                else {
                panda$core$Bit $tmp1006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_171003.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp1006.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result999, &$s1007);
                }
                }
                else {
                panda$core$Bit $tmp1008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_171003.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp1008.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result999, &$s1009);
                }
                }
                else {
                panda$core$Bit $tmp1010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_171003.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp1010.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result999, &$s1011);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp1012 = panda$collections$ImmutableArray$join$R$panda$core$String(decls997);
            panda$core$MutableString$append$panda$core$String(result999, $tmp1012);
            panda$core$String* $tmp1013 = panda$core$MutableString$finish$R$panda$core$String(result999);
            return $tmp1013;
        }
        }
        else {
        panda$core$Bit $tmp1014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1014.value) {
        {
            panda$collections$ImmutableArray** $tmp1016 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 16));
            tests1015 = *$tmp1016;
            panda$collections$ImmutableArray** $tmp1018 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 24));
            statements1017 = *$tmp1018;
            panda$core$MutableString* $tmp1020 = (panda$core$MutableString*) malloc(48);
            $tmp1020->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1020->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp1020, &$s1022);
            panda$core$Object* $tmp1023 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1020));
            result1019 = ((panda$core$MutableString*) $tmp1023);
            panda$core$Object* $tmp1026 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s1025));
            separator1024 = ((panda$core$String*) $tmp1026);
            {
                ITable* $tmp1028 = ((panda$collections$Iterable*) tests1015)->$class->itable;
                while ($tmp1028->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1028 = $tmp1028->next;
                }
                $fn1030 $tmp1029 = $tmp1028->methods[0];
                panda$collections$Iterator* $tmp1031 = $tmp1029(((panda$collections$Iterable*) tests1015));
                t$Iter1027 = $tmp1031;
                $l1032:;
                ITable* $tmp1034 = t$Iter1027->$class->itable;
                while ($tmp1034->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1034 = $tmp1034->next;
                }
                $fn1036 $tmp1035 = $tmp1034->methods[0];
                panda$core$Bit $tmp1037 = $tmp1035(t$Iter1027);
                panda$core$Bit $tmp1038 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1037);
                if (!$tmp1038.value) goto $l1033;
                {
                    ITable* $tmp1040 = t$Iter1027->$class->itable;
                    while ($tmp1040->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1040 = $tmp1040->next;
                    }
                    $fn1042 $tmp1041 = $tmp1040->methods[1];
                    panda$core$Object* $tmp1043 = $tmp1041(t$Iter1027);
                    t1039 = ((org$pandalanguage$pandac$ASTNode*) $tmp1043);
                    panda$core$String* $tmp1044 = panda$core$String$convert$R$panda$core$String(separator1024);
                    panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1044, &$s1045);
                    panda$core$String* $tmp1047 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1046, ((panda$core$Object*) t1039));
                    panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, &$s1048);
                    panda$core$MutableString$append$panda$core$String(result1019, $tmp1049);
                }
                goto $l1032;
                $l1033:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1050, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result1019, $tmp1050);
            {
                ITable* $tmp1052 = ((panda$collections$Iterable*) statements1017)->$class->itable;
                while ($tmp1052->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1052 = $tmp1052->next;
                }
                $fn1054 $tmp1053 = $tmp1052->methods[0];
                panda$collections$Iterator* $tmp1055 = $tmp1053(((panda$collections$Iterable*) statements1017));
                s$Iter1051 = $tmp1055;
                $l1056:;
                ITable* $tmp1058 = s$Iter1051->$class->itable;
                while ($tmp1058->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1058 = $tmp1058->next;
                }
                $fn1060 $tmp1059 = $tmp1058->methods[0];
                panda$core$Bit $tmp1061 = $tmp1059(s$Iter1051);
                panda$core$Bit $tmp1062 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1061);
                if (!$tmp1062.value) goto $l1057;
                {
                    ITable* $tmp1064 = s$Iter1051->$class->itable;
                    while ($tmp1064->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1064 = $tmp1064->next;
                    }
                    $fn1066 $tmp1065 = $tmp1064->methods[1];
                    panda$core$Object* $tmp1067 = $tmp1065(s$Iter1051);
                    s1063 = ((org$pandalanguage$pandac$ASTNode*) $tmp1067);
                    panda$core$String* $tmp1069 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1068, ((panda$core$Object*) s1063));
                    panda$core$MutableString$append$panda$core$String(result1019, $tmp1069);
                }
                goto $l1056;
                $l1057:;
            }
            panda$core$String* $tmp1070 = panda$core$MutableString$finish$R$panda$core$String(result1019);
            return $tmp1070;
        }
        }
        else {
        panda$core$Bit $tmp1071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9295->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1071.value) {
        {
            panda$core$String** $tmp1073 = ((panda$core$String**) ((char*) $match$165_9295->$data + 16));
            label1072 = *$tmp1073;
            org$pandalanguage$pandac$ASTNode** $tmp1075 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9295->$data + 24));
            test1074 = *$tmp1075;
            panda$collections$ImmutableArray** $tmp1077 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9295->$data + 32));
            statements1076 = *$tmp1077;
            panda$core$MutableString* $tmp1079 = (panda$core$MutableString*) malloc(48);
            $tmp1079->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1079->refCount.value = 1;
            panda$core$MutableString$init($tmp1079);
            panda$core$Object* $tmp1081 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1079));
            result1078 = ((panda$core$MutableString*) $tmp1081);
            if (((panda$core$Bit) { label1072 != NULL }).value) {
            {
                panda$core$String* $tmp1082 = panda$core$String$convert$R$panda$core$String(label1072);
                panda$core$String* $tmp1084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1082, &$s1083);
                panda$core$MutableString$append$panda$core$String(result1078, $tmp1084);
            }
            }
            panda$core$String* $tmp1086 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1085, ((panda$core$Object*) test1074));
            panda$core$String* $tmp1088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1086, &$s1087);
            panda$core$MutableString$append$panda$core$String(result1078, $tmp1088);
            {
                ITable* $tmp1090 = ((panda$collections$Iterable*) statements1076)->$class->itable;
                while ($tmp1090->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1090 = $tmp1090->next;
                }
                $fn1092 $tmp1091 = $tmp1090->methods[0];
                panda$collections$Iterator* $tmp1093 = $tmp1091(((panda$collections$Iterable*) statements1076));
                s$Iter1089 = $tmp1093;
                $l1094:;
                ITable* $tmp1096 = s$Iter1089->$class->itable;
                while ($tmp1096->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1096 = $tmp1096->next;
                }
                $fn1098 $tmp1097 = $tmp1096->methods[0];
                panda$core$Bit $tmp1099 = $tmp1097(s$Iter1089);
                panda$core$Bit $tmp1100 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1099);
                if (!$tmp1100.value) goto $l1095;
                {
                    ITable* $tmp1102 = s$Iter1089->$class->itable;
                    while ($tmp1102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1102 = $tmp1102->next;
                    }
                    $fn1104 $tmp1103 = $tmp1102->methods[1];
                    panda$core$Object* $tmp1105 = $tmp1103(s$Iter1089);
                    s1101 = ((org$pandalanguage$pandac$ASTNode*) $tmp1105);
                    panda$core$String* $tmp1107 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1101), &$s1106);
                    panda$core$MutableString$append$panda$core$String(result1078, $tmp1107);
                }
                goto $l1094;
                $l1095:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1108, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1078, $tmp1108);
            panda$core$String* $tmp1109 = panda$core$MutableString$finish$R$panda$core$String(result1078);
            return $tmp1109;
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

