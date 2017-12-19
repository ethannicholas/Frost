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

typedef panda$core$String* (*$fn429)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn458)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn464)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn470)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn493)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn532)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn568)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn574)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn580)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn605)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn611)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn617)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn640)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn647)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn668)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn674)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn680)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn696)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn720)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn726)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn732)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn746)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn752)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn758)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn789)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn795)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn801)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn845)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn851)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn857)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn890)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn896)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn902)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn927)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn933)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn939)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn972)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn978)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn984)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1009)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1015)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1021)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1062)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1188)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1194)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1200)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1212)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1218)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1224)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1251)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1257)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1263)(panda$collections$Iterator*);

static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
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
    panda$core$String* name111;
    org$pandalanguage$pandac$Position position114;
    org$pandalanguage$pandac$ASTNode* test116;
    org$pandalanguage$pandac$ASTNode* msg118;
    org$pandalanguage$pandac$Position position121;
    org$pandalanguage$pandac$ASTNode* left123;
    org$pandalanguage$pandac$parser$Token$Kind op125;
    org$pandalanguage$pandac$ASTNode* right127;
    org$pandalanguage$pandac$Position position130;
    panda$core$Bit value132;
    org$pandalanguage$pandac$Position position135;
    panda$collections$ImmutableArray* statements137;
    org$pandalanguage$pandac$Position position140;
    panda$core$String* label142;
    org$pandalanguage$pandac$Position position145;
    org$pandalanguage$pandac$ASTNode* target147;
    panda$collections$ImmutableArray* args149;
    org$pandalanguage$pandac$Position position152;
    org$pandalanguage$pandac$ASTNode* dc154;
    panda$core$String* name156;
    panda$collections$ImmutableArray* fields158;
    org$pandalanguage$pandac$Position position161;
    org$pandalanguage$pandac$ASTNode* base163;
    org$pandalanguage$pandac$ChoiceEntry* ce165;
    panda$core$Int64 index167;
    org$pandalanguage$pandac$Position position170;
    org$pandalanguage$pandac$ASTNode* dc172;
    panda$collections$ImmutableArray* annotations174;
    org$pandalanguage$pandac$ClassDecl$Kind kind176;
    panda$core$String* name178;
    panda$collections$ImmutableArray* generics180;
    panda$collections$ImmutableArray* supertypes182;
    panda$collections$ImmutableArray* members184;
    org$pandalanguage$pandac$Position position187;
    panda$core$String* label189;
    org$pandalanguage$pandac$Position position192;
    org$pandalanguage$pandac$ASTNode* target194;
    org$pandalanguage$pandac$ASTNode* value196;
    org$pandalanguage$pandac$Position position199;
    panda$core$String* label201;
    panda$collections$ImmutableArray* statements203;
    org$pandalanguage$pandac$ASTNode* test205;
    org$pandalanguage$pandac$Position position208;
    org$pandalanguage$pandac$ASTNode* base210;
    panda$core$String* field212;
    org$pandalanguage$pandac$Position position215;
    org$pandalanguage$pandac$ASTNode* dc217;
    panda$collections$ImmutableArray* annotations219;
    org$pandalanguage$pandac$ASTNode* decl221;
    panda$collections$ImmutableArray* _224;
    org$pandalanguage$pandac$Position $tmp226;
    org$pandalanguage$pandac$Position position228;
    panda$core$String* label230;
    org$pandalanguage$pandac$ASTNode* target232;
    org$pandalanguage$pandac$ASTNode* list234;
    panda$collections$ImmutableArray* statements236;
    org$pandalanguage$pandac$Position position239;
    panda$core$String* name241;
    panda$collections$ImmutableArray* subtypes243;
    org$pandalanguage$pandac$Position position246;
    panda$core$String* name248;
    org$pandalanguage$pandac$Position position251;
    org$pandalanguage$pandac$ASTNode* test253;
    panda$collections$ImmutableArray* ifTrue255;
    org$pandalanguage$pandac$ASTNode* ifFalse257;
    org$pandalanguage$pandac$Position position260;
    panda$core$UInt64 value262;
    org$pandalanguage$pandac$Position position265;
    panda$core$String* label267;
    panda$collections$ImmutableArray* statements269;
    org$pandalanguage$pandac$Position position272;
    org$pandalanguage$pandac$ASTNode* value274;
    panda$collections$ImmutableArray* whens276;
    panda$collections$ImmutableArray* other278;
    org$pandalanguage$pandac$Position position281;
    org$pandalanguage$pandac$ASTNode* dc283;
    panda$collections$ImmutableArray* annotations285;
    org$pandalanguage$pandac$MethodDecl$Kind kind287;
    panda$core$String* name289;
    panda$collections$ImmutableArray* parameters291;
    org$pandalanguage$pandac$ASTNode* returnType293;
    panda$collections$ImmutableArray* statements295;
    org$pandalanguage$pandac$Position position298;
    org$pandalanguage$pandac$Position position301;
    org$pandalanguage$pandac$ASTNode* base303;
    org$pandalanguage$pandac$Position position306;
    panda$core$String* name308;
    org$pandalanguage$pandac$Position position311;
    panda$core$String* name313;
    org$pandalanguage$pandac$ASTNode* type315;
    org$pandalanguage$pandac$Position position318;
    org$pandalanguage$pandac$parser$Token$Kind kind320;
    org$pandalanguage$pandac$ASTNode* base322;
    org$pandalanguage$pandac$Position position325;
    org$pandalanguage$pandac$ASTNode* start327;
    org$pandalanguage$pandac$ASTNode* end329;
    panda$core$Bit inclusive331;
    org$pandalanguage$pandac$ASTNode* step333;
    org$pandalanguage$pandac$Position position336;
    panda$core$Real64 value338;
    org$pandalanguage$pandac$Position position341;
    org$pandalanguage$pandac$ASTNode* value343;
    org$pandalanguage$pandac$Position position346;
    org$pandalanguage$pandac$Position position349;
    panda$core$String* str351;
    org$pandalanguage$pandac$Position position354;
    org$pandalanguage$pandac$Position position357;
    panda$core$String* name359;
    org$pandalanguage$pandac$Position position362;
    panda$core$String* name364;
    org$pandalanguage$pandac$ASTNode* type366;
    org$pandalanguage$pandac$Position position369;
    panda$core$String* name371;
    org$pandalanguage$pandac$Position position374;
    org$pandalanguage$pandac$Variable$Kind kind376;
    panda$collections$ImmutableArray* decls378;
    org$pandalanguage$pandac$Position position381;
    panda$collections$ImmutableArray* tests383;
    panda$collections$ImmutableArray* statements385;
    org$pandalanguage$pandac$Position position388;
    panda$core$String* label390;
    org$pandalanguage$pandac$ASTNode* test392;
    panda$collections$ImmutableArray* statements394;
    {
        $match$76_9107 = self;
        panda$core$Bit $tmp108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp108.value) {
        {
            org$pandalanguage$pandac$Position* $tmp110 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position109 = *$tmp110;
            panda$core$String** $tmp112 = ((panda$core$String**) ((char*) $match$76_9107->$data + 16));
            name111 = *$tmp112;
            return position109;
        }
        }
        else {
        panda$core$Bit $tmp113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp113.value) {
        {
            org$pandalanguage$pandac$Position* $tmp115 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position114 = *$tmp115;
            org$pandalanguage$pandac$ASTNode** $tmp117 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 16));
            test116 = *$tmp117;
            org$pandalanguage$pandac$ASTNode** $tmp119 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 24));
            msg118 = *$tmp119;
            return position114;
        }
        }
        else {
        panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp120.value) {
        {
            org$pandalanguage$pandac$Position* $tmp122 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position121 = *$tmp122;
            org$pandalanguage$pandac$ASTNode** $tmp124 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 16));
            left123 = *$tmp124;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp126 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$76_9107->$data + 24));
            op125 = *$tmp126;
            org$pandalanguage$pandac$ASTNode** $tmp128 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 32));
            right127 = *$tmp128;
            return position121;
        }
        }
        else {
        panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp129.value) {
        {
            org$pandalanguage$pandac$Position* $tmp131 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position130 = *$tmp131;
            panda$core$Bit* $tmp133 = ((panda$core$Bit*) ((char*) $match$76_9107->$data + 16));
            value132 = *$tmp133;
            return position130;
        }
        }
        else {
        panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp134.value) {
        {
            org$pandalanguage$pandac$Position* $tmp136 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position135 = *$tmp136;
            panda$collections$ImmutableArray** $tmp138 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 16));
            statements137 = *$tmp138;
            return position135;
        }
        }
        else {
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp139.value) {
        {
            org$pandalanguage$pandac$Position* $tmp141 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position140 = *$tmp141;
            panda$core$String** $tmp143 = ((panda$core$String**) ((char*) $match$76_9107->$data + 16));
            label142 = *$tmp143;
            return position140;
        }
        }
        else {
        panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp144.value) {
        {
            org$pandalanguage$pandac$Position* $tmp146 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position145 = *$tmp146;
            org$pandalanguage$pandac$ASTNode** $tmp148 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 16));
            target147 = *$tmp148;
            panda$collections$ImmutableArray** $tmp150 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 24));
            args149 = *$tmp150;
            return position145;
        }
        }
        else {
        panda$core$Bit $tmp151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp151.value) {
        {
            org$pandalanguage$pandac$Position* $tmp153 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position152 = *$tmp153;
            org$pandalanguage$pandac$ASTNode** $tmp155 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 16));
            dc154 = *$tmp155;
            panda$core$String** $tmp157 = ((panda$core$String**) ((char*) $match$76_9107->$data + 24));
            name156 = *$tmp157;
            panda$collections$ImmutableArray** $tmp159 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 32));
            fields158 = *$tmp159;
            return position152;
        }
        }
        else {
        panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp160.value) {
        {
            org$pandalanguage$pandac$Position* $tmp162 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position161 = *$tmp162;
            org$pandalanguage$pandac$ASTNode** $tmp164 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 16));
            base163 = *$tmp164;
            org$pandalanguage$pandac$ChoiceEntry** $tmp166 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$76_9107->$data + 24));
            ce165 = *$tmp166;
            panda$core$Int64* $tmp168 = ((panda$core$Int64*) ((char*) $match$76_9107->$data + 32));
            index167 = *$tmp168;
            return position161;
        }
        }
        else {
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp169.value) {
        {
            org$pandalanguage$pandac$Position* $tmp171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position170 = *$tmp171;
            org$pandalanguage$pandac$ASTNode** $tmp173 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 16));
            dc172 = *$tmp173;
            panda$collections$ImmutableArray** $tmp175 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 24));
            annotations174 = *$tmp175;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp177 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$76_9107->$data + 32));
            kind176 = *$tmp177;
            panda$core$String** $tmp179 = ((panda$core$String**) ((char*) $match$76_9107->$data + 40));
            name178 = *$tmp179;
            panda$collections$ImmutableArray** $tmp181 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 48));
            generics180 = *$tmp181;
            panda$collections$ImmutableArray** $tmp183 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 56));
            supertypes182 = *$tmp183;
            panda$collections$ImmutableArray** $tmp185 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 64));
            members184 = *$tmp185;
            return position170;
        }
        }
        else {
        panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp186.value) {
        {
            org$pandalanguage$pandac$Position* $tmp188 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position187 = *$tmp188;
            panda$core$String** $tmp190 = ((panda$core$String**) ((char*) $match$76_9107->$data + 16));
            label189 = *$tmp190;
            return position187;
        }
        }
        else {
        panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp191.value) {
        {
            org$pandalanguage$pandac$Position* $tmp193 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position192 = *$tmp193;
            org$pandalanguage$pandac$ASTNode** $tmp195 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 16));
            target194 = *$tmp195;
            org$pandalanguage$pandac$ASTNode** $tmp197 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 24));
            value196 = *$tmp197;
            return position192;
        }
        }
        else {
        panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp198.value) {
        {
            org$pandalanguage$pandac$Position* $tmp200 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position199 = *$tmp200;
            panda$core$String** $tmp202 = ((panda$core$String**) ((char*) $match$76_9107->$data + 16));
            label201 = *$tmp202;
            panda$collections$ImmutableArray** $tmp204 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 24));
            statements203 = *$tmp204;
            org$pandalanguage$pandac$ASTNode** $tmp206 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 32));
            test205 = *$tmp206;
            return position199;
        }
        }
        else {
        panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp207.value) {
        {
            org$pandalanguage$pandac$Position* $tmp209 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position208 = *$tmp209;
            org$pandalanguage$pandac$ASTNode** $tmp211 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 16));
            base210 = *$tmp211;
            panda$core$String** $tmp213 = ((panda$core$String**) ((char*) $match$76_9107->$data + 24));
            field212 = *$tmp213;
            return position208;
        }
        }
        else {
        panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp214.value) {
        {
            org$pandalanguage$pandac$Position* $tmp216 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position215 = *$tmp216;
            org$pandalanguage$pandac$ASTNode** $tmp218 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 16));
            dc217 = *$tmp218;
            panda$collections$ImmutableArray** $tmp220 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 24));
            annotations219 = *$tmp220;
            org$pandalanguage$pandac$ASTNode** $tmp222 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 32));
            decl221 = *$tmp222;
            return position215;
        }
        }
        else {
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp223.value) {
        {
            panda$collections$ImmutableArray** $tmp225 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 0));
            _224 = *$tmp225;
            org$pandalanguage$pandac$Position$init(&$tmp226);
            return $tmp226;
        }
        }
        else {
        panda$core$Bit $tmp227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp227.value) {
        {
            org$pandalanguage$pandac$Position* $tmp229 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position228 = *$tmp229;
            panda$core$String** $tmp231 = ((panda$core$String**) ((char*) $match$76_9107->$data + 16));
            label230 = *$tmp231;
            org$pandalanguage$pandac$ASTNode** $tmp233 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 24));
            target232 = *$tmp233;
            org$pandalanguage$pandac$ASTNode** $tmp235 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 32));
            list234 = *$tmp235;
            panda$collections$ImmutableArray** $tmp237 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 40));
            statements236 = *$tmp237;
            return position228;
        }
        }
        else {
        panda$core$Bit $tmp238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp238.value) {
        {
            org$pandalanguage$pandac$Position* $tmp240 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position239 = *$tmp240;
            panda$core$String** $tmp242 = ((panda$core$String**) ((char*) $match$76_9107->$data + 16));
            name241 = *$tmp242;
            panda$collections$ImmutableArray** $tmp244 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 24));
            subtypes243 = *$tmp244;
            return position239;
        }
        }
        else {
        panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp245.value) {
        {
            org$pandalanguage$pandac$Position* $tmp247 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position246 = *$tmp247;
            panda$core$String** $tmp249 = ((panda$core$String**) ((char*) $match$76_9107->$data + 16));
            name248 = *$tmp249;
            return position246;
        }
        }
        else {
        panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp250.value) {
        {
            org$pandalanguage$pandac$Position* $tmp252 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position251 = *$tmp252;
            org$pandalanguage$pandac$ASTNode** $tmp254 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 16));
            test253 = *$tmp254;
            panda$collections$ImmutableArray** $tmp256 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 24));
            ifTrue255 = *$tmp256;
            org$pandalanguage$pandac$ASTNode** $tmp258 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 32));
            ifFalse257 = *$tmp258;
            return position251;
        }
        }
        else {
        panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp259.value) {
        {
            org$pandalanguage$pandac$Position* $tmp261 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position260 = *$tmp261;
            panda$core$UInt64* $tmp263 = ((panda$core$UInt64*) ((char*) $match$76_9107->$data + 16));
            value262 = *$tmp263;
            return position260;
        }
        }
        else {
        panda$core$Bit $tmp264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp264.value) {
        {
            org$pandalanguage$pandac$Position* $tmp266 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position265 = *$tmp266;
            panda$core$String** $tmp268 = ((panda$core$String**) ((char*) $match$76_9107->$data + 16));
            label267 = *$tmp268;
            panda$collections$ImmutableArray** $tmp270 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 24));
            statements269 = *$tmp270;
            return position265;
        }
        }
        else {
        panda$core$Bit $tmp271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp271.value) {
        {
            org$pandalanguage$pandac$Position* $tmp273 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position272 = *$tmp273;
            org$pandalanguage$pandac$ASTNode** $tmp275 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 16));
            value274 = *$tmp275;
            panda$collections$ImmutableArray** $tmp277 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 24));
            whens276 = *$tmp277;
            panda$collections$ImmutableArray** $tmp279 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 32));
            other278 = *$tmp279;
            return position272;
        }
        }
        else {
        panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp280.value) {
        {
            org$pandalanguage$pandac$Position* $tmp282 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position281 = *$tmp282;
            org$pandalanguage$pandac$ASTNode** $tmp284 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 16));
            dc283 = *$tmp284;
            panda$collections$ImmutableArray** $tmp286 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 24));
            annotations285 = *$tmp286;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp288 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$76_9107->$data + 32));
            kind287 = *$tmp288;
            panda$core$String** $tmp290 = ((panda$core$String**) ((char*) $match$76_9107->$data + 40));
            name289 = *$tmp290;
            panda$collections$ImmutableArray** $tmp292 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 48));
            parameters291 = *$tmp292;
            org$pandalanguage$pandac$ASTNode** $tmp294 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 56));
            returnType293 = *$tmp294;
            panda$collections$ImmutableArray** $tmp296 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 64));
            statements295 = *$tmp296;
            return position281;
        }
        }
        else {
        panda$core$Bit $tmp297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp297.value) {
        {
            org$pandalanguage$pandac$Position* $tmp299 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position298 = *$tmp299;
            return position298;
        }
        }
        else {
        panda$core$Bit $tmp300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp300.value) {
        {
            org$pandalanguage$pandac$Position* $tmp302 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position301 = *$tmp302;
            org$pandalanguage$pandac$ASTNode** $tmp304 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 16));
            base303 = *$tmp304;
            return position301;
        }
        }
        else {
        panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp305.value) {
        {
            org$pandalanguage$pandac$Position* $tmp307 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position306 = *$tmp307;
            panda$core$String** $tmp309 = ((panda$core$String**) ((char*) $match$76_9107->$data + 16));
            name308 = *$tmp309;
            return position306;
        }
        }
        else {
        panda$core$Bit $tmp310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp310.value) {
        {
            org$pandalanguage$pandac$Position* $tmp312 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position311 = *$tmp312;
            panda$core$String** $tmp314 = ((panda$core$String**) ((char*) $match$76_9107->$data + 16));
            name313 = *$tmp314;
            org$pandalanguage$pandac$ASTNode** $tmp316 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 24));
            type315 = *$tmp316;
            return position311;
        }
        }
        else {
        panda$core$Bit $tmp317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp317.value) {
        {
            org$pandalanguage$pandac$Position* $tmp319 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position318 = *$tmp319;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp321 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$76_9107->$data + 16));
            kind320 = *$tmp321;
            org$pandalanguage$pandac$ASTNode** $tmp323 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 24));
            base322 = *$tmp323;
            return position318;
        }
        }
        else {
        panda$core$Bit $tmp324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp324.value) {
        {
            org$pandalanguage$pandac$Position* $tmp326 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position325 = *$tmp326;
            org$pandalanguage$pandac$ASTNode** $tmp328 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 16));
            start327 = *$tmp328;
            org$pandalanguage$pandac$ASTNode** $tmp330 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 24));
            end329 = *$tmp330;
            panda$core$Bit* $tmp332 = ((panda$core$Bit*) ((char*) $match$76_9107->$data + 32));
            inclusive331 = *$tmp332;
            org$pandalanguage$pandac$ASTNode** $tmp334 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 33));
            step333 = *$tmp334;
            return position325;
        }
        }
        else {
        panda$core$Bit $tmp335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp335.value) {
        {
            org$pandalanguage$pandac$Position* $tmp337 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position336 = *$tmp337;
            panda$core$Real64* $tmp339 = ((panda$core$Real64*) ((char*) $match$76_9107->$data + 16));
            value338 = *$tmp339;
            return position336;
        }
        }
        else {
        panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp340.value) {
        {
            org$pandalanguage$pandac$Position* $tmp342 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position341 = *$tmp342;
            org$pandalanguage$pandac$ASTNode** $tmp344 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 16));
            value343 = *$tmp344;
            return position341;
        }
        }
        else {
        panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp345.value) {
        {
            org$pandalanguage$pandac$Position* $tmp347 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position346 = *$tmp347;
            return position346;
        }
        }
        else {
        panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp348.value) {
        {
            org$pandalanguage$pandac$Position* $tmp350 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position349 = *$tmp350;
            panda$core$String** $tmp352 = ((panda$core$String**) ((char*) $match$76_9107->$data + 16));
            str351 = *$tmp352;
            return position349;
        }
        }
        else {
        panda$core$Bit $tmp353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp353.value) {
        {
            org$pandalanguage$pandac$Position* $tmp355 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position354 = *$tmp355;
            return position354;
        }
        }
        else {
        panda$core$Bit $tmp356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp356.value) {
        {
            org$pandalanguage$pandac$Position* $tmp358 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position357 = *$tmp358;
            panda$core$String** $tmp360 = ((panda$core$String**) ((char*) $match$76_9107->$data + 16));
            name359 = *$tmp360;
            return position357;
        }
        }
        else {
        panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp361.value) {
        {
            org$pandalanguage$pandac$Position* $tmp363 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position362 = *$tmp363;
            panda$core$String** $tmp365 = ((panda$core$String**) ((char*) $match$76_9107->$data + 16));
            name364 = *$tmp365;
            org$pandalanguage$pandac$ASTNode** $tmp367 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 24));
            type366 = *$tmp367;
            return position362;
        }
        }
        else {
        panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp368.value) {
        {
            org$pandalanguage$pandac$Position* $tmp370 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position369 = *$tmp370;
            panda$core$String** $tmp372 = ((panda$core$String**) ((char*) $match$76_9107->$data + 16));
            name371 = *$tmp372;
            return position369;
        }
        }
        else {
        panda$core$Bit $tmp373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp373.value) {
        {
            org$pandalanguage$pandac$Position* $tmp375 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position374 = *$tmp375;
            org$pandalanguage$pandac$Variable$Kind* $tmp377 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$76_9107->$data + 16));
            kind376 = *$tmp377;
            panda$collections$ImmutableArray** $tmp379 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 24));
            decls378 = *$tmp379;
            return position374;
        }
        }
        else {
        panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp380.value) {
        {
            org$pandalanguage$pandac$Position* $tmp382 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position381 = *$tmp382;
            panda$collections$ImmutableArray** $tmp384 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 16));
            tests383 = *$tmp384;
            panda$collections$ImmutableArray** $tmp386 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 24));
            statements385 = *$tmp386;
            return position381;
        }
        }
        else {
        panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_9107->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp387.value) {
        {
            org$pandalanguage$pandac$Position* $tmp389 = ((org$pandalanguage$pandac$Position*) ((char*) $match$76_9107->$data + 0));
            position388 = *$tmp389;
            panda$core$String** $tmp391 = ((panda$core$String**) ((char*) $match$76_9107->$data + 16));
            label390 = *$tmp391;
            org$pandalanguage$pandac$ASTNode** $tmp393 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$76_9107->$data + 24));
            test392 = *$tmp393;
            panda$collections$ImmutableArray** $tmp395 = ((panda$collections$ImmutableArray**) ((char*) $match$76_9107->$data + 32));
            statements394 = *$tmp395;
            return position388;
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
    org$pandalanguage$pandac$ASTNode* $match$165_9396;
    org$pandalanguage$pandac$Position _398;
    panda$core$String* name400;
    org$pandalanguage$pandac$Position _403;
    org$pandalanguage$pandac$ASTNode* test405;
    org$pandalanguage$pandac$ASTNode* msg407;
    org$pandalanguage$pandac$Position _421;
    org$pandalanguage$pandac$ASTNode* left423;
    org$pandalanguage$pandac$parser$Token$Kind op425;
    org$pandalanguage$pandac$ASTNode* right427;
    org$pandalanguage$pandac$Position _441;
    panda$core$Bit value443;
    org$pandalanguage$pandac$Position _447;
    panda$collections$ImmutableArray* statements449;
    panda$core$MutableString* result451;
    panda$collections$Iterator* s$Iter455;
    org$pandalanguage$pandac$ASTNode* s467;
    panda$core$Char8 $tmp474;
    org$pandalanguage$pandac$Position _477;
    panda$core$String* label479;
    org$pandalanguage$pandac$Position _487;
    org$pandalanguage$pandac$ASTNode* target489;
    panda$collections$ImmutableArray* args491;
    org$pandalanguage$pandac$Position _502;
    org$pandalanguage$pandac$ASTNode* dc504;
    panda$core$String* name506;
    panda$collections$ImmutableArray* fields508;
    panda$core$MutableString* result510;
    org$pandalanguage$pandac$Position _524;
    org$pandalanguage$pandac$ASTNode* base526;
    org$pandalanguage$pandac$ChoiceEntry* ce528;
    panda$core$Int64 index530;
    org$pandalanguage$pandac$Position _544;
    org$pandalanguage$pandac$ASTNode* dc546;
    panda$collections$ImmutableArray* annotations548;
    org$pandalanguage$pandac$ClassDecl$Kind kind550;
    panda$core$String* name552;
    panda$collections$ImmutableArray* generics554;
    panda$collections$ImmutableArray* supertypes556;
    panda$collections$ImmutableArray* members558;
    panda$core$MutableString* result560;
    panda$collections$Iterator* a$Iter565;
    org$pandalanguage$pandac$ASTNode* a577;
    org$pandalanguage$pandac$ClassDecl$Kind $match$208_17584;
    panda$collections$Iterator* m$Iter602;
    org$pandalanguage$pandac$ASTNode* m614;
    panda$core$Char8 $tmp621;
    org$pandalanguage$pandac$Position _624;
    panda$core$String* label626;
    org$pandalanguage$pandac$Position _634;
    org$pandalanguage$pandac$ASTNode* target636;
    org$pandalanguage$pandac$ASTNode* value638;
    org$pandalanguage$pandac$Position _650;
    panda$core$String* label652;
    panda$collections$ImmutableArray* statements654;
    org$pandalanguage$pandac$ASTNode* test656;
    panda$core$MutableString* result658;
    panda$collections$Iterator* s$Iter665;
    org$pandalanguage$pandac$ASTNode* s677;
    org$pandalanguage$pandac$Position _690;
    org$pandalanguage$pandac$ASTNode* base692;
    panda$core$String* field694;
    org$pandalanguage$pandac$Position _704;
    org$pandalanguage$pandac$ASTNode* dc706;
    panda$collections$ImmutableArray* annotations708;
    org$pandalanguage$pandac$ASTNode* decl710;
    panda$core$MutableString* result712;
    panda$collections$Iterator* a$Iter717;
    org$pandalanguage$pandac$ASTNode* a729;
    panda$collections$ImmutableArray* entries738;
    panda$core$MutableString* result740;
    panda$collections$Iterator* e$Iter743;
    org$pandalanguage$pandac$ASTNode* e755;
    org$pandalanguage$pandac$Position _764;
    panda$core$String* label766;
    org$pandalanguage$pandac$ASTNode* target768;
    org$pandalanguage$pandac$ASTNode* list770;
    panda$collections$ImmutableArray* statements772;
    panda$core$MutableString* result774;
    panda$collections$Iterator* s$Iter786;
    org$pandalanguage$pandac$ASTNode* s798;
    panda$core$Char8 $tmp805;
    org$pandalanguage$pandac$Position _808;
    panda$core$String* name810;
    panda$collections$ImmutableArray* subtypes812;
    org$pandalanguage$pandac$Position _822;
    panda$core$String* name824;
    org$pandalanguage$pandac$Position _827;
    org$pandalanguage$pandac$ASTNode* test829;
    panda$collections$ImmutableArray* ifTrue831;
    org$pandalanguage$pandac$ASTNode* ifFalse833;
    panda$core$MutableString* result835;
    panda$collections$Iterator* s$Iter842;
    org$pandalanguage$pandac$ASTNode* s854;
    panda$core$Char8 $tmp861;
    org$pandalanguage$pandac$Position _868;
    panda$core$UInt64 value870;
    org$pandalanguage$pandac$Position _874;
    panda$core$String* label876;
    panda$collections$ImmutableArray* statements878;
    panda$core$MutableString* result880;
    panda$collections$Iterator* s$Iter887;
    org$pandalanguage$pandac$ASTNode* s899;
    panda$core$Char8 $tmp906;
    org$pandalanguage$pandac$Position _909;
    org$pandalanguage$pandac$ASTNode* value911;
    panda$collections$ImmutableArray* whens913;
    panda$collections$ImmutableArray* other915;
    panda$core$MutableString* result917;
    panda$collections$Iterator* w$Iter924;
    org$pandalanguage$pandac$ASTNode* w936;
    panda$core$Char8 $tmp945;
    org$pandalanguage$pandac$Position _948;
    org$pandalanguage$pandac$ASTNode* dc950;
    panda$collections$ImmutableArray* annotations952;
    org$pandalanguage$pandac$MethodDecl$Kind kind954;
    panda$core$String* name956;
    panda$collections$ImmutableArray* parameters958;
    org$pandalanguage$pandac$ASTNode* returnType960;
    panda$collections$ImmutableArray* statements962;
    panda$core$MutableString* result964;
    panda$collections$Iterator* a$Iter969;
    org$pandalanguage$pandac$ASTNode* a981;
    org$pandalanguage$pandac$MethodDecl$Kind $match$321_17988;
    panda$collections$Iterator* s$Iter1006;
    org$pandalanguage$pandac$ASTNode* s1018;
    panda$core$Char8 $tmp1025;
    org$pandalanguage$pandac$Position _1030;
    org$pandalanguage$pandac$ASTNode* base1032;
    org$pandalanguage$pandac$Position _1037;
    panda$core$String* name1039;
    org$pandalanguage$pandac$Position _1042;
    panda$core$String* name1044;
    org$pandalanguage$pandac$ASTNode* type1046;
    org$pandalanguage$pandac$Position _1055;
    org$pandalanguage$pandac$parser$Token$Kind kind1057;
    org$pandalanguage$pandac$ASTNode* base1059;
    org$pandalanguage$pandac$Position _1070;
    org$pandalanguage$pandac$ASTNode* start1072;
    org$pandalanguage$pandac$ASTNode* end1074;
    panda$core$Bit inclusive1076;
    org$pandalanguage$pandac$ASTNode* step1078;
    panda$core$MutableString* result1080;
    org$pandalanguage$pandac$Position _1104;
    panda$core$Real64 value1106;
    org$pandalanguage$pandac$Position _1110;
    org$pandalanguage$pandac$ASTNode* value1112;
    org$pandalanguage$pandac$Position _1122;
    panda$core$String* str1124;
    org$pandalanguage$pandac$Position _1129;
    panda$core$String* name1131;
    org$pandalanguage$pandac$Position _1134;
    panda$core$String* name1136;
    org$pandalanguage$pandac$ASTNode* type1138;
    org$pandalanguage$pandac$Position _1147;
    panda$core$String* name1149;
    org$pandalanguage$pandac$Position _1152;
    org$pandalanguage$pandac$Variable$Kind kind1154;
    panda$collections$ImmutableArray* decls1156;
    panda$core$MutableString* result1158;
    org$pandalanguage$pandac$Variable$Kind $match$390_171161;
    org$pandalanguage$pandac$Position _1173;
    panda$collections$ImmutableArray* tests1175;
    panda$collections$ImmutableArray* statements1177;
    panda$core$MutableString* result1179;
    panda$core$String* separator1183;
    panda$collections$Iterator* t$Iter1185;
    org$pandalanguage$pandac$ASTNode* t1197;
    panda$core$Char8 $tmp1208;
    panda$collections$Iterator* s$Iter1209;
    org$pandalanguage$pandac$ASTNode* s1221;
    org$pandalanguage$pandac$Position _1230;
    panda$core$String* label1232;
    org$pandalanguage$pandac$ASTNode* test1234;
    panda$collections$ImmutableArray* statements1236;
    panda$core$MutableString* result1238;
    panda$collections$Iterator* s$Iter1248;
    org$pandalanguage$pandac$ASTNode* s1260;
    panda$core$Char8 $tmp1267;
    {
        $match$165_9396 = self;
        panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp397.value) {
        {
            org$pandalanguage$pandac$Position* $tmp399 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _398 = *$tmp399;
            panda$core$String** $tmp401 = ((panda$core$String**) ((char*) $match$165_9396->$data + 16));
            name400 = *$tmp401;
            return name400;
        }
        }
        else {
        panda$core$Bit $tmp402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp402.value) {
        {
            org$pandalanguage$pandac$Position* $tmp404 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _403 = *$tmp404;
            org$pandalanguage$pandac$ASTNode** $tmp406 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 16));
            test405 = *$tmp406;
            org$pandalanguage$pandac$ASTNode** $tmp408 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 24));
            msg407 = *$tmp408;
            if (((panda$core$Bit) { msg407 == NULL }).value) {
            {
                panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s409, ((panda$core$Object*) test405));
                panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp410, &$s411);
                return $tmp412;
            }
            }
            panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s413, ((panda$core$Object*) test405));
            panda$core$String* $tmp416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp414, &$s415);
            panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp416, ((panda$core$Object*) msg407));
            panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp417, &$s418);
            return $tmp419;
        }
        }
        else {
        panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp420.value) {
        {
            org$pandalanguage$pandac$Position* $tmp422 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _421 = *$tmp422;
            org$pandalanguage$pandac$ASTNode** $tmp424 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 16));
            left423 = *$tmp424;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp426 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$165_9396->$data + 24));
            op425 = *$tmp426;
            org$pandalanguage$pandac$ASTNode** $tmp428 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 32));
            right427 = *$tmp428;
            panda$core$String* $tmp430 = (($fn429) left423->$class->vtable[0])(left423);
            panda$core$String* $tmp432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp430, &$s431);
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp433;
            $tmp433 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
            $tmp433->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp433->refCount = 1;
            $tmp433->value = op425;
            panda$core$String* $tmp434 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp432, ((panda$core$Object*) $tmp433));
            panda$core$String* $tmp436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp434, &$s435);
            panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp436, ((panda$core$Object*) right427));
            panda$core$String* $tmp439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp437, &$s438);
            return $tmp439;
        }
        }
        else {
        panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp440.value) {
        {
            org$pandalanguage$pandac$Position* $tmp442 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _441 = *$tmp442;
            panda$core$Bit* $tmp444 = ((panda$core$Bit*) ((char*) $match$165_9396->$data + 16));
            value443 = *$tmp444;
            panda$core$String* $tmp445 = panda$core$Bit$convert$R$panda$core$String(value443);
            return $tmp445;
        }
        }
        else {
        panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp446.value) {
        {
            org$pandalanguage$pandac$Position* $tmp448 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _447 = *$tmp448;
            panda$collections$ImmutableArray** $tmp450 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 16));
            statements449 = *$tmp450;
            panda$core$MutableString* $tmp452 = (panda$core$MutableString*) malloc(48);
            $tmp452->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp452->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp452, &$s454);
            result451 = $tmp452;
            {
                ITable* $tmp456 = ((panda$collections$Iterable*) statements449)->$class->itable;
                while ($tmp456->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp456 = $tmp456->next;
                }
                $fn458 $tmp457 = $tmp456->methods[0];
                panda$collections$Iterator* $tmp459 = $tmp457(((panda$collections$Iterable*) statements449));
                s$Iter455 = $tmp459;
                $l460:;
                ITable* $tmp462 = s$Iter455->$class->itable;
                while ($tmp462->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp462 = $tmp462->next;
                }
                $fn464 $tmp463 = $tmp462->methods[0];
                panda$core$Bit $tmp465 = $tmp463(s$Iter455);
                panda$core$Bit $tmp466 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp465);
                if (!$tmp466.value) goto $l461;
                {
                    ITable* $tmp468 = s$Iter455->$class->itable;
                    while ($tmp468->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp468 = $tmp468->next;
                    }
                    $fn470 $tmp469 = $tmp468->methods[1];
                    panda$core$Object* $tmp471 = $tmp469(s$Iter455);
                    s467 = ((org$pandalanguage$pandac$ASTNode*) $tmp471);
                    panda$core$String* $tmp473 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s467), &$s472);
                    panda$core$MutableString$append$panda$core$String(result451, $tmp473);
                }
                goto $l460;
                $l461:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp474, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result451, $tmp474);
            panda$core$String* $tmp475 = panda$core$MutableString$finish$R$panda$core$String(result451);
            return $tmp475;
        }
        }
        else {
        panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp476.value) {
        {
            org$pandalanguage$pandac$Position* $tmp478 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _477 = *$tmp478;
            panda$core$String** $tmp480 = ((panda$core$String**) ((char*) $match$165_9396->$data + 16));
            label479 = *$tmp480;
            if (((panda$core$Bit) { label479 != NULL }).value) {
            {
                panda$core$String* $tmp482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s481, label479);
                panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp482, &$s483);
                return $tmp484;
            }
            }
            return &$s485;
        }
        }
        else {
        panda$core$Bit $tmp486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp486.value) {
        {
            org$pandalanguage$pandac$Position* $tmp488 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _487 = *$tmp488;
            org$pandalanguage$pandac$ASTNode** $tmp490 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 16));
            target489 = *$tmp490;
            panda$collections$ImmutableArray** $tmp492 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 24));
            args491 = *$tmp492;
            panda$core$String* $tmp494 = (($fn493) target489->$class->vtable[0])(target489);
            panda$core$String* $tmp496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp494, &$s495);
            panda$core$String* $tmp497 = panda$collections$ImmutableArray$join$R$panda$core$String(args491);
            panda$core$String* $tmp498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp496, $tmp497);
            panda$core$String* $tmp500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp498, &$s499);
            return $tmp500;
        }
        }
        else {
        panda$core$Bit $tmp501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp501.value) {
        {
            org$pandalanguage$pandac$Position* $tmp503 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _502 = *$tmp503;
            org$pandalanguage$pandac$ASTNode** $tmp505 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 16));
            dc504 = *$tmp505;
            panda$core$String** $tmp507 = ((panda$core$String**) ((char*) $match$165_9396->$data + 24));
            name506 = *$tmp507;
            panda$collections$ImmutableArray** $tmp509 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 32));
            fields508 = *$tmp509;
            panda$core$MutableString* $tmp511 = (panda$core$MutableString*) malloc(48);
            $tmp511->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp511->refCount.value = 1;
            panda$core$MutableString$init($tmp511);
            result510 = $tmp511;
            if (((panda$core$Bit) { dc504 != NULL }).value) {
            {
                panda$core$String* $tmp514 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc504), &$s513);
                panda$core$MutableString$append$panda$core$String(result510, $tmp514);
            }
            }
            panda$core$String* $tmp515 = panda$core$String$convert$R$panda$core$String(name506);
            panda$core$String* $tmp517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp515, &$s516);
            panda$core$String* $tmp518 = panda$collections$ImmutableArray$join$R$panda$core$String(fields508);
            panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp517, $tmp518);
            panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp519, &$s520);
            panda$core$MutableString$append$panda$core$String(result510, $tmp521);
            panda$core$String* $tmp522 = panda$core$MutableString$finish$R$panda$core$String(result510);
            return $tmp522;
        }
        }
        else {
        panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp523.value) {
        {
            org$pandalanguage$pandac$Position* $tmp525 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _524 = *$tmp525;
            org$pandalanguage$pandac$ASTNode** $tmp527 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 16));
            base526 = *$tmp527;
            org$pandalanguage$pandac$ChoiceEntry** $tmp529 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$165_9396->$data + 24));
            ce528 = *$tmp529;
            panda$core$Int64* $tmp531 = ((panda$core$Int64*) ((char*) $match$165_9396->$data + 32));
            index530 = *$tmp531;
            panda$core$String* $tmp533 = (($fn532) base526->$class->vtable[0])(base526);
            panda$core$String* $tmp535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp533, &$s534);
            panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp535, ((panda$core$Object*) ce528));
            panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp536, &$s537);
            panda$core$Int64$wrapper* $tmp539;
            $tmp539 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp539->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp539->refCount = 1;
            $tmp539->value = index530;
            panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp538, ((panda$core$Object*) $tmp539));
            panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp540, &$s541);
            return $tmp542;
        }
        }
        else {
        panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp543.value) {
        {
            org$pandalanguage$pandac$Position* $tmp545 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _544 = *$tmp545;
            org$pandalanguage$pandac$ASTNode** $tmp547 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 16));
            dc546 = *$tmp547;
            panda$collections$ImmutableArray** $tmp549 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 24));
            annotations548 = *$tmp549;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp551 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$165_9396->$data + 32));
            kind550 = *$tmp551;
            panda$core$String** $tmp553 = ((panda$core$String**) ((char*) $match$165_9396->$data + 40));
            name552 = *$tmp553;
            panda$collections$ImmutableArray** $tmp555 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 48));
            generics554 = *$tmp555;
            panda$collections$ImmutableArray** $tmp557 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 56));
            supertypes556 = *$tmp557;
            panda$collections$ImmutableArray** $tmp559 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 64));
            members558 = *$tmp559;
            panda$core$MutableString* $tmp561 = (panda$core$MutableString*) malloc(48);
            $tmp561->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp561->refCount.value = 1;
            panda$core$MutableString$init($tmp561);
            result560 = $tmp561;
            if (((panda$core$Bit) { dc546 != NULL }).value) {
            {
                panda$core$String* $tmp564 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc546), &$s563);
                panda$core$MutableString$append$panda$core$String(result560, $tmp564);
            }
            }
            {
                ITable* $tmp566 = ((panda$collections$Iterable*) annotations548)->$class->itable;
                while ($tmp566->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp566 = $tmp566->next;
                }
                $fn568 $tmp567 = $tmp566->methods[0];
                panda$collections$Iterator* $tmp569 = $tmp567(((panda$collections$Iterable*) annotations548));
                a$Iter565 = $tmp569;
                $l570:;
                ITable* $tmp572 = a$Iter565->$class->itable;
                while ($tmp572->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp572 = $tmp572->next;
                }
                $fn574 $tmp573 = $tmp572->methods[0];
                panda$core$Bit $tmp575 = $tmp573(a$Iter565);
                panda$core$Bit $tmp576 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp575);
                if (!$tmp576.value) goto $l571;
                {
                    ITable* $tmp578 = a$Iter565->$class->itable;
                    while ($tmp578->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp578 = $tmp578->next;
                    }
                    $fn580 $tmp579 = $tmp578->methods[1];
                    panda$core$Object* $tmp581 = $tmp579(a$Iter565);
                    a577 = ((org$pandalanguage$pandac$ASTNode*) $tmp581);
                    panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a577), &$s582);
                    panda$core$MutableString$append$panda$core$String(result560, $tmp583);
                }
                goto $l570;
                $l571:;
            }
            {
                $match$208_17584 = kind550;
                panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17584.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp585.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result560, &$s586);
                }
                }
                else {
                panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17584.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp587.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result560, &$s588);
                }
                }
                else {
                panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$208_17584.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp589.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result560, &$s590);
                }
                }
                }
                }
            }
            panda$core$MutableString$append$panda$core$String(result560, name552);
            if (((panda$core$Bit) { generics554 != NULL }).value) {
            {
                panda$core$String* $tmp592 = panda$collections$ImmutableArray$join$R$panda$core$String(generics554);
                panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s591, $tmp592);
                panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp593, &$s594);
                panda$core$MutableString$append$panda$core$String(result560, $tmp595);
            }
            }
            if (((panda$core$Bit) { supertypes556 != NULL }).value) {
            {
                panda$core$String* $tmp597 = panda$collections$ImmutableArray$join$R$panda$core$String(supertypes556);
                panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s596, $tmp597);
                panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp598, &$s599);
                panda$core$MutableString$append$panda$core$String(result560, $tmp600);
            }
            }
            panda$core$MutableString$append$panda$core$String(result560, &$s601);
            {
                ITable* $tmp603 = ((panda$collections$Iterable*) members558)->$class->itable;
                while ($tmp603->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp603 = $tmp603->next;
                }
                $fn605 $tmp604 = $tmp603->methods[0];
                panda$collections$Iterator* $tmp606 = $tmp604(((panda$collections$Iterable*) members558));
                m$Iter602 = $tmp606;
                $l607:;
                ITable* $tmp609 = m$Iter602->$class->itable;
                while ($tmp609->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp609 = $tmp609->next;
                }
                $fn611 $tmp610 = $tmp609->methods[0];
                panda$core$Bit $tmp612 = $tmp610(m$Iter602);
                panda$core$Bit $tmp613 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp612);
                if (!$tmp613.value) goto $l608;
                {
                    ITable* $tmp615 = m$Iter602->$class->itable;
                    while ($tmp615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp615 = $tmp615->next;
                    }
                    $fn617 $tmp616 = $tmp615->methods[1];
                    panda$core$Object* $tmp618 = $tmp616(m$Iter602);
                    m614 = ((org$pandalanguage$pandac$ASTNode*) $tmp618);
                    panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m614), &$s619);
                    panda$core$MutableString$append$panda$core$String(result560, $tmp620);
                }
                goto $l607;
                $l608:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp621, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result560, $tmp621);
            panda$core$String* $tmp622 = panda$core$MutableString$finish$R$panda$core$String(result560);
            return $tmp622;
        }
        }
        else {
        panda$core$Bit $tmp623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp623.value) {
        {
            org$pandalanguage$pandac$Position* $tmp625 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _624 = *$tmp625;
            panda$core$String** $tmp627 = ((panda$core$String**) ((char*) $match$165_9396->$data + 16));
            label626 = *$tmp627;
            if (((panda$core$Bit) { label626 != NULL }).value) {
            {
                panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s628, label626);
                panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp629, &$s630);
                return $tmp631;
            }
            }
            return &$s632;
        }
        }
        else {
        panda$core$Bit $tmp633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp633.value) {
        {
            org$pandalanguage$pandac$Position* $tmp635 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _634 = *$tmp635;
            org$pandalanguage$pandac$ASTNode** $tmp637 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 16));
            target636 = *$tmp637;
            org$pandalanguage$pandac$ASTNode** $tmp639 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 24));
            value638 = *$tmp639;
            if (((panda$core$Bit) { value638 != NULL }).value) {
            {
                panda$core$String* $tmp641 = (($fn640) target636->$class->vtable[0])(target636);
                panda$core$String* $tmp643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp641, &$s642);
                panda$core$String* $tmp644 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp643, ((panda$core$Object*) value638));
                panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp644, &$s645);
                return $tmp646;
            }
            }
            panda$core$String* $tmp648 = (($fn647) target636->$class->vtable[0])(target636);
            return $tmp648;
        }
        }
        else {
        panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp649.value) {
        {
            org$pandalanguage$pandac$Position* $tmp651 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _650 = *$tmp651;
            panda$core$String** $tmp653 = ((panda$core$String**) ((char*) $match$165_9396->$data + 16));
            label652 = *$tmp653;
            panda$collections$ImmutableArray** $tmp655 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 24));
            statements654 = *$tmp655;
            org$pandalanguage$pandac$ASTNode** $tmp657 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 32));
            test656 = *$tmp657;
            panda$core$MutableString* $tmp659 = (panda$core$MutableString*) malloc(48);
            $tmp659->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp659->refCount.value = 1;
            panda$core$MutableString$init($tmp659);
            result658 = $tmp659;
            if (((panda$core$Bit) { label652 != NULL }).value) {
            {
                panda$core$String* $tmp661 = panda$core$String$convert$R$panda$core$String(label652);
                panda$core$String* $tmp663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp661, &$s662);
                panda$core$MutableString$append$panda$core$String(result658, $tmp663);
            }
            }
            panda$core$MutableString$append$panda$core$String(result658, &$s664);
            {
                ITable* $tmp666 = ((panda$collections$Iterable*) statements654)->$class->itable;
                while ($tmp666->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp666 = $tmp666->next;
                }
                $fn668 $tmp667 = $tmp666->methods[0];
                panda$collections$Iterator* $tmp669 = $tmp667(((panda$collections$Iterable*) statements654));
                s$Iter665 = $tmp669;
                $l670:;
                ITable* $tmp672 = s$Iter665->$class->itable;
                while ($tmp672->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp672 = $tmp672->next;
                }
                $fn674 $tmp673 = $tmp672->methods[0];
                panda$core$Bit $tmp675 = $tmp673(s$Iter665);
                panda$core$Bit $tmp676 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp675);
                if (!$tmp676.value) goto $l671;
                {
                    ITable* $tmp678 = s$Iter665->$class->itable;
                    while ($tmp678->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp678 = $tmp678->next;
                    }
                    $fn680 $tmp679 = $tmp678->methods[1];
                    panda$core$Object* $tmp681 = $tmp679(s$Iter665);
                    s677 = ((org$pandalanguage$pandac$ASTNode*) $tmp681);
                    panda$core$String* $tmp683 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s677), &$s682);
                    panda$core$MutableString$append$panda$core$String(result658, $tmp683);
                }
                goto $l670;
                $l671:;
            }
            panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s684, ((panda$core$Object*) test656));
            panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp685, &$s686);
            panda$core$MutableString$append$panda$core$String(result658, $tmp687);
            panda$core$String* $tmp688 = panda$core$MutableString$finish$R$panda$core$String(result658);
            return $tmp688;
        }
        }
        else {
        panda$core$Bit $tmp689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp689.value) {
        {
            org$pandalanguage$pandac$Position* $tmp691 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _690 = *$tmp691;
            org$pandalanguage$pandac$ASTNode** $tmp693 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 16));
            base692 = *$tmp693;
            panda$core$String** $tmp695 = ((panda$core$String**) ((char*) $match$165_9396->$data + 24));
            field694 = *$tmp695;
            panda$core$String* $tmp697 = (($fn696) base692->$class->vtable[0])(base692);
            panda$core$String* $tmp699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp697, &$s698);
            panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp699, field694);
            panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp700, &$s701);
            return $tmp702;
        }
        }
        else {
        panda$core$Bit $tmp703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp703.value) {
        {
            org$pandalanguage$pandac$Position* $tmp705 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _704 = *$tmp705;
            org$pandalanguage$pandac$ASTNode** $tmp707 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 16));
            dc706 = *$tmp707;
            panda$collections$ImmutableArray** $tmp709 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 24));
            annotations708 = *$tmp709;
            org$pandalanguage$pandac$ASTNode** $tmp711 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 32));
            decl710 = *$tmp711;
            panda$core$MutableString* $tmp713 = (panda$core$MutableString*) malloc(48);
            $tmp713->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp713->refCount.value = 1;
            panda$core$MutableString$init($tmp713);
            result712 = $tmp713;
            if (((panda$core$Bit) { dc706 != NULL }).value) {
            {
                panda$core$String* $tmp716 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc706), &$s715);
                panda$core$MutableString$append$panda$core$String(result712, $tmp716);
            }
            }
            {
                ITable* $tmp718 = ((panda$collections$Iterable*) annotations708)->$class->itable;
                while ($tmp718->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp718 = $tmp718->next;
                }
                $fn720 $tmp719 = $tmp718->methods[0];
                panda$collections$Iterator* $tmp721 = $tmp719(((panda$collections$Iterable*) annotations708));
                a$Iter717 = $tmp721;
                $l722:;
                ITable* $tmp724 = a$Iter717->$class->itable;
                while ($tmp724->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp724 = $tmp724->next;
                }
                $fn726 $tmp725 = $tmp724->methods[0];
                panda$core$Bit $tmp727 = $tmp725(a$Iter717);
                panda$core$Bit $tmp728 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp727);
                if (!$tmp728.value) goto $l723;
                {
                    ITable* $tmp730 = a$Iter717->$class->itable;
                    while ($tmp730->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp730 = $tmp730->next;
                    }
                    $fn732 $tmp731 = $tmp730->methods[1];
                    panda$core$Object* $tmp733 = $tmp731(a$Iter717);
                    a729 = ((org$pandalanguage$pandac$ASTNode*) $tmp733);
                    panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a729), &$s734);
                    panda$core$MutableString$append$panda$core$String(result712, $tmp735);
                }
                goto $l722;
                $l723:;
            }
            panda$core$MutableString$append$panda$core$Object(result712, ((panda$core$Object*) decl710));
            panda$core$String* $tmp736 = panda$core$MutableString$finish$R$panda$core$String(result712);
            return $tmp736;
        }
        }
        else {
        panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp737.value) {
        {
            panda$collections$ImmutableArray** $tmp739 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 0));
            entries738 = *$tmp739;
            panda$core$MutableString* $tmp741 = (panda$core$MutableString*) malloc(48);
            $tmp741->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp741->refCount.value = 1;
            panda$core$MutableString$init($tmp741);
            result740 = $tmp741;
            {
                ITable* $tmp744 = ((panda$collections$Iterable*) entries738)->$class->itable;
                while ($tmp744->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp744 = $tmp744->next;
                }
                $fn746 $tmp745 = $tmp744->methods[0];
                panda$collections$Iterator* $tmp747 = $tmp745(((panda$collections$Iterable*) entries738));
                e$Iter743 = $tmp747;
                $l748:;
                ITable* $tmp750 = e$Iter743->$class->itable;
                while ($tmp750->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp750 = $tmp750->next;
                }
                $fn752 $tmp751 = $tmp750->methods[0];
                panda$core$Bit $tmp753 = $tmp751(e$Iter743);
                panda$core$Bit $tmp754 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp753);
                if (!$tmp754.value) goto $l749;
                {
                    ITable* $tmp756 = e$Iter743->$class->itable;
                    while ($tmp756->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp756 = $tmp756->next;
                    }
                    $fn758 $tmp757 = $tmp756->methods[1];
                    panda$core$Object* $tmp759 = $tmp757(e$Iter743);
                    e755 = ((org$pandalanguage$pandac$ASTNode*) $tmp759);
                    panda$core$String* $tmp761 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e755), &$s760);
                    panda$core$MutableString$append$panda$core$String(result740, $tmp761);
                }
                goto $l748;
                $l749:;
            }
            panda$core$String* $tmp762 = panda$core$MutableString$finish$R$panda$core$String(result740);
            return $tmp762;
        }
        }
        else {
        panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp763.value) {
        {
            org$pandalanguage$pandac$Position* $tmp765 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _764 = *$tmp765;
            panda$core$String** $tmp767 = ((panda$core$String**) ((char*) $match$165_9396->$data + 16));
            label766 = *$tmp767;
            org$pandalanguage$pandac$ASTNode** $tmp769 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 24));
            target768 = *$tmp769;
            org$pandalanguage$pandac$ASTNode** $tmp771 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 32));
            list770 = *$tmp771;
            panda$collections$ImmutableArray** $tmp773 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 40));
            statements772 = *$tmp773;
            panda$core$MutableString* $tmp775 = (panda$core$MutableString*) malloc(48);
            $tmp775->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp775->refCount.value = 1;
            panda$core$MutableString$init($tmp775);
            result774 = $tmp775;
            if (((panda$core$Bit) { label766 != NULL }).value) {
            {
                panda$core$String* $tmp778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label766, &$s777);
                panda$core$MutableString$append$panda$core$String(result774, $tmp778);
            }
            }
            panda$core$String* $tmp780 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s779, ((panda$core$Object*) target768));
            panda$core$String* $tmp782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp780, &$s781);
            panda$core$String* $tmp783 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp782, ((panda$core$Object*) list770));
            panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp783, &$s784);
            panda$core$MutableString$append$panda$core$String(result774, $tmp785);
            {
                ITable* $tmp787 = ((panda$collections$Iterable*) statements772)->$class->itable;
                while ($tmp787->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp787 = $tmp787->next;
                }
                $fn789 $tmp788 = $tmp787->methods[0];
                panda$collections$Iterator* $tmp790 = $tmp788(((panda$collections$Iterable*) statements772));
                s$Iter786 = $tmp790;
                $l791:;
                ITable* $tmp793 = s$Iter786->$class->itable;
                while ($tmp793->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp793 = $tmp793->next;
                }
                $fn795 $tmp794 = $tmp793->methods[0];
                panda$core$Bit $tmp796 = $tmp794(s$Iter786);
                panda$core$Bit $tmp797 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp796);
                if (!$tmp797.value) goto $l792;
                {
                    ITable* $tmp799 = s$Iter786->$class->itable;
                    while ($tmp799->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp799 = $tmp799->next;
                    }
                    $fn801 $tmp800 = $tmp799->methods[1];
                    panda$core$Object* $tmp802 = $tmp800(s$Iter786);
                    s798 = ((org$pandalanguage$pandac$ASTNode*) $tmp802);
                    panda$core$String* $tmp804 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s798), &$s803);
                    panda$core$MutableString$append$panda$core$String(result774, $tmp804);
                }
                goto $l791;
                $l792:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp805, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result774, $tmp805);
            panda$core$String* $tmp806 = panda$core$MutableString$finish$R$panda$core$String(result774);
            return $tmp806;
        }
        }
        else {
        panda$core$Bit $tmp807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp807.value) {
        {
            org$pandalanguage$pandac$Position* $tmp809 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _808 = *$tmp809;
            panda$core$String** $tmp811 = ((panda$core$String**) ((char*) $match$165_9396->$data + 16));
            name810 = *$tmp811;
            panda$collections$ImmutableArray** $tmp813 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 24));
            subtypes812 = *$tmp813;
            panda$core$String* $tmp814 = panda$core$String$convert$R$panda$core$String(name810);
            panda$core$String* $tmp816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp814, &$s815);
            panda$core$String* $tmp817 = panda$collections$ImmutableArray$join$R$panda$core$String(subtypes812);
            panda$core$String* $tmp818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp816, $tmp817);
            panda$core$String* $tmp820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp818, &$s819);
            return $tmp820;
        }
        }
        else {
        panda$core$Bit $tmp821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp821.value) {
        {
            org$pandalanguage$pandac$Position* $tmp823 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _822 = *$tmp823;
            panda$core$String** $tmp825 = ((panda$core$String**) ((char*) $match$165_9396->$data + 16));
            name824 = *$tmp825;
            return name824;
        }
        }
        else {
        panda$core$Bit $tmp826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp826.value) {
        {
            org$pandalanguage$pandac$Position* $tmp828 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _827 = *$tmp828;
            org$pandalanguage$pandac$ASTNode** $tmp830 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 16));
            test829 = *$tmp830;
            panda$collections$ImmutableArray** $tmp832 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 24));
            ifTrue831 = *$tmp832;
            org$pandalanguage$pandac$ASTNode** $tmp834 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 32));
            ifFalse833 = *$tmp834;
            panda$core$MutableString* $tmp836 = (panda$core$MutableString*) malloc(48);
            $tmp836->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp836->refCount.value = 1;
            panda$core$String* $tmp839 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s838, ((panda$core$Object*) test829));
            panda$core$String* $tmp841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp839, &$s840);
            panda$core$MutableString$init$panda$core$String($tmp836, $tmp841);
            result835 = $tmp836;
            {
                ITable* $tmp843 = ((panda$collections$Iterable*) ifTrue831)->$class->itable;
                while ($tmp843->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp843 = $tmp843->next;
                }
                $fn845 $tmp844 = $tmp843->methods[0];
                panda$collections$Iterator* $tmp846 = $tmp844(((panda$collections$Iterable*) ifTrue831));
                s$Iter842 = $tmp846;
                $l847:;
                ITable* $tmp849 = s$Iter842->$class->itable;
                while ($tmp849->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp849 = $tmp849->next;
                }
                $fn851 $tmp850 = $tmp849->methods[0];
                panda$core$Bit $tmp852 = $tmp850(s$Iter842);
                panda$core$Bit $tmp853 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp852);
                if (!$tmp853.value) goto $l848;
                {
                    ITable* $tmp855 = s$Iter842->$class->itable;
                    while ($tmp855->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp855 = $tmp855->next;
                    }
                    $fn857 $tmp856 = $tmp855->methods[1];
                    panda$core$Object* $tmp858 = $tmp856(s$Iter842);
                    s854 = ((org$pandalanguage$pandac$ASTNode*) $tmp858);
                    panda$core$String* $tmp860 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s854), &$s859);
                    panda$core$MutableString$append$panda$core$String(result835, $tmp860);
                }
                goto $l847;
                $l848:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp861, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result835, $tmp861);
            if (((panda$core$Bit) { ifFalse833 != NULL }).value) {
            {
                panda$core$String* $tmp863 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s862, ((panda$core$Object*) ifFalse833));
                panda$core$String* $tmp865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp863, &$s864);
                panda$core$MutableString$append$panda$core$String(result835, $tmp865);
            }
            }
            panda$core$String* $tmp866 = panda$core$MutableString$finish$R$panda$core$String(result835);
            return $tmp866;
        }
        }
        else {
        panda$core$Bit $tmp867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp867.value) {
        {
            org$pandalanguage$pandac$Position* $tmp869 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _868 = *$tmp869;
            panda$core$UInt64* $tmp871 = ((panda$core$UInt64*) ((char*) $match$165_9396->$data + 16));
            value870 = *$tmp871;
            panda$core$String* $tmp872 = panda$core$UInt64$convert$R$panda$core$String(value870);
            return $tmp872;
        }
        }
        else {
        panda$core$Bit $tmp873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp873.value) {
        {
            org$pandalanguage$pandac$Position* $tmp875 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _874 = *$tmp875;
            panda$core$String** $tmp877 = ((panda$core$String**) ((char*) $match$165_9396->$data + 16));
            label876 = *$tmp877;
            panda$collections$ImmutableArray** $tmp879 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 24));
            statements878 = *$tmp879;
            panda$core$MutableString* $tmp881 = (panda$core$MutableString*) malloc(48);
            $tmp881->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp881->refCount.value = 1;
            panda$core$MutableString$init($tmp881);
            result880 = $tmp881;
            if (((panda$core$Bit) { label876 != NULL }).value) {
            {
                panda$core$String* $tmp883 = panda$core$String$convert$R$panda$core$String(label876);
                panda$core$String* $tmp885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp883, &$s884);
                panda$core$MutableString$append$panda$core$String(result880, $tmp885);
            }
            }
            panda$core$MutableString$append$panda$core$String(result880, &$s886);
            {
                ITable* $tmp888 = ((panda$collections$Iterable*) statements878)->$class->itable;
                while ($tmp888->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp888 = $tmp888->next;
                }
                $fn890 $tmp889 = $tmp888->methods[0];
                panda$collections$Iterator* $tmp891 = $tmp889(((panda$collections$Iterable*) statements878));
                s$Iter887 = $tmp891;
                $l892:;
                ITable* $tmp894 = s$Iter887->$class->itable;
                while ($tmp894->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp894 = $tmp894->next;
                }
                $fn896 $tmp895 = $tmp894->methods[0];
                panda$core$Bit $tmp897 = $tmp895(s$Iter887);
                panda$core$Bit $tmp898 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp897);
                if (!$tmp898.value) goto $l893;
                {
                    ITable* $tmp900 = s$Iter887->$class->itable;
                    while ($tmp900->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp900 = $tmp900->next;
                    }
                    $fn902 $tmp901 = $tmp900->methods[1];
                    panda$core$Object* $tmp903 = $tmp901(s$Iter887);
                    s899 = ((org$pandalanguage$pandac$ASTNode*) $tmp903);
                    panda$core$String* $tmp905 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s899), &$s904);
                    panda$core$MutableString$append$panda$core$String(result880, $tmp905);
                }
                goto $l892;
                $l893:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp906, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result880, $tmp906);
            panda$core$String* $tmp907 = panda$core$MutableString$finish$R$panda$core$String(result880);
            return $tmp907;
        }
        }
        else {
        panda$core$Bit $tmp908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp908.value) {
        {
            org$pandalanguage$pandac$Position* $tmp910 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _909 = *$tmp910;
            org$pandalanguage$pandac$ASTNode** $tmp912 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 16));
            value911 = *$tmp912;
            panda$collections$ImmutableArray** $tmp914 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 24));
            whens913 = *$tmp914;
            panda$collections$ImmutableArray** $tmp916 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 32));
            other915 = *$tmp916;
            panda$core$MutableString* $tmp918 = (panda$core$MutableString*) malloc(48);
            $tmp918->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp918->refCount.value = 1;
            panda$core$String* $tmp921 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s920, ((panda$core$Object*) value911));
            panda$core$String* $tmp923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp921, &$s922);
            panda$core$MutableString$init$panda$core$String($tmp918, $tmp923);
            result917 = $tmp918;
            {
                ITable* $tmp925 = ((panda$collections$Iterable*) whens913)->$class->itable;
                while ($tmp925->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp925 = $tmp925->next;
                }
                $fn927 $tmp926 = $tmp925->methods[0];
                panda$collections$Iterator* $tmp928 = $tmp926(((panda$collections$Iterable*) whens913));
                w$Iter924 = $tmp928;
                $l929:;
                ITable* $tmp931 = w$Iter924->$class->itable;
                while ($tmp931->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp931 = $tmp931->next;
                }
                $fn933 $tmp932 = $tmp931->methods[0];
                panda$core$Bit $tmp934 = $tmp932(w$Iter924);
                panda$core$Bit $tmp935 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp934);
                if (!$tmp935.value) goto $l930;
                {
                    ITable* $tmp937 = w$Iter924->$class->itable;
                    while ($tmp937->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp937 = $tmp937->next;
                    }
                    $fn939 $tmp938 = $tmp937->methods[1];
                    panda$core$Object* $tmp940 = $tmp938(w$Iter924);
                    w936 = ((org$pandalanguage$pandac$ASTNode*) $tmp940);
                    panda$core$String* $tmp942 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w936), &$s941);
                    panda$core$MutableString$append$panda$core$String(result917, $tmp942);
                }
                goto $l929;
                $l930:;
            }
            if (((panda$core$Bit) { other915 != NULL }).value) {
            {
                panda$core$String* $tmp944 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other915), &$s943);
                panda$core$MutableString$append$panda$core$String(result917, $tmp944);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp945, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result917, $tmp945);
            panda$core$String* $tmp946 = panda$core$MutableString$finish$R$panda$core$String(result917);
            return $tmp946;
        }
        }
        else {
        panda$core$Bit $tmp947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp947.value) {
        {
            org$pandalanguage$pandac$Position* $tmp949 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _948 = *$tmp949;
            org$pandalanguage$pandac$ASTNode** $tmp951 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 16));
            dc950 = *$tmp951;
            panda$collections$ImmutableArray** $tmp953 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 24));
            annotations952 = *$tmp953;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp955 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$165_9396->$data + 32));
            kind954 = *$tmp955;
            panda$core$String** $tmp957 = ((panda$core$String**) ((char*) $match$165_9396->$data + 40));
            name956 = *$tmp957;
            panda$collections$ImmutableArray** $tmp959 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 48));
            parameters958 = *$tmp959;
            org$pandalanguage$pandac$ASTNode** $tmp961 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 56));
            returnType960 = *$tmp961;
            panda$collections$ImmutableArray** $tmp963 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 64));
            statements962 = *$tmp963;
            panda$core$MutableString* $tmp965 = (panda$core$MutableString*) malloc(48);
            $tmp965->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp965->refCount.value = 1;
            panda$core$MutableString$init($tmp965);
            result964 = $tmp965;
            if (((panda$core$Bit) { dc950 != NULL }).value) {
            {
                panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc950), &$s967);
                panda$core$MutableString$append$panda$core$String(result964, $tmp968);
            }
            }
            {
                ITable* $tmp970 = ((panda$collections$Iterable*) annotations952)->$class->itable;
                while ($tmp970->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp970 = $tmp970->next;
                }
                $fn972 $tmp971 = $tmp970->methods[0];
                panda$collections$Iterator* $tmp973 = $tmp971(((panda$collections$Iterable*) annotations952));
                a$Iter969 = $tmp973;
                $l974:;
                ITable* $tmp976 = a$Iter969->$class->itable;
                while ($tmp976->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp976 = $tmp976->next;
                }
                $fn978 $tmp977 = $tmp976->methods[0];
                panda$core$Bit $tmp979 = $tmp977(a$Iter969);
                panda$core$Bit $tmp980 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp979);
                if (!$tmp980.value) goto $l975;
                {
                    ITable* $tmp982 = a$Iter969->$class->itable;
                    while ($tmp982->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp982 = $tmp982->next;
                    }
                    $fn984 $tmp983 = $tmp982->methods[1];
                    panda$core$Object* $tmp985 = $tmp983(a$Iter969);
                    a981 = ((org$pandalanguage$pandac$ASTNode*) $tmp985);
                    panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a981), &$s986);
                    panda$core$MutableString$append$panda$core$String(result964, $tmp987);
                }
                goto $l974;
                $l975:;
            }
            {
                $match$321_17988 = kind954;
                panda$core$Bit $tmp989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17988.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp989.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result964, &$s990);
                }
                }
                else {
                panda$core$Bit $tmp991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17988.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp991.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result964, &$s992);
                }
                }
                else {
                panda$core$Bit $tmp993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$321_17988.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp993.value) {
                {
                }
                }
                }
                }
            }
            panda$core$String* $tmp994 = panda$core$String$convert$R$panda$core$String(name956);
            panda$core$String* $tmp996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp994, &$s995);
            panda$core$String* $tmp997 = panda$collections$ImmutableArray$join$R$panda$core$String(parameters958);
            panda$core$String* $tmp998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp996, $tmp997);
            panda$core$String* $tmp1000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp998, &$s999);
            panda$core$MutableString$append$panda$core$String(result964, $tmp1000);
            if (((panda$core$Bit) { returnType960 != NULL }).value) {
            {
                panda$core$String* $tmp1002 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1001, ((panda$core$Object*) returnType960));
                panda$core$String* $tmp1004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1002, &$s1003);
                panda$core$MutableString$append$panda$core$String(result964, $tmp1004);
            }
            }
            if (((panda$core$Bit) { statements962 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result964, &$s1005);
                {
                    ITable* $tmp1007 = ((panda$collections$Iterable*) statements962)->$class->itable;
                    while ($tmp1007->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1007 = $tmp1007->next;
                    }
                    $fn1009 $tmp1008 = $tmp1007->methods[0];
                    panda$collections$Iterator* $tmp1010 = $tmp1008(((panda$collections$Iterable*) statements962));
                    s$Iter1006 = $tmp1010;
                    $l1011:;
                    ITable* $tmp1013 = s$Iter1006->$class->itable;
                    while ($tmp1013->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1013 = $tmp1013->next;
                    }
                    $fn1015 $tmp1014 = $tmp1013->methods[0];
                    panda$core$Bit $tmp1016 = $tmp1014(s$Iter1006);
                    panda$core$Bit $tmp1017 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1016);
                    if (!$tmp1017.value) goto $l1012;
                    {
                        ITable* $tmp1019 = s$Iter1006->$class->itable;
                        while ($tmp1019->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1019 = $tmp1019->next;
                        }
                        $fn1021 $tmp1020 = $tmp1019->methods[1];
                        panda$core$Object* $tmp1022 = $tmp1020(s$Iter1006);
                        s1018 = ((org$pandalanguage$pandac$ASTNode*) $tmp1022);
                        panda$core$String* $tmp1024 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1018), &$s1023);
                        panda$core$MutableString$append$panda$core$String(result964, $tmp1024);
                    }
                    goto $l1011;
                    $l1012:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1025, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result964, $tmp1025);
            }
            }
            panda$core$String* $tmp1026 = panda$core$MutableString$finish$R$panda$core$String(result964);
            return $tmp1026;
        }
        }
        else {
        panda$core$Bit $tmp1027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1027.value) {
        {
            return &$s1028;
        }
        }
        else {
        panda$core$Bit $tmp1029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1029.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1031 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _1030 = *$tmp1031;
            org$pandalanguage$pandac$ASTNode** $tmp1033 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 16));
            base1032 = *$tmp1033;
            panda$core$String* $tmp1035 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base1032), &$s1034);
            return $tmp1035;
        }
        }
        else {
        panda$core$Bit $tmp1036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1036.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1038 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _1037 = *$tmp1038;
            panda$core$String** $tmp1040 = ((panda$core$String**) ((char*) $match$165_9396->$data + 16));
            name1039 = *$tmp1040;
            return name1039;
        }
        }
        else {
        panda$core$Bit $tmp1041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1041.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1043 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _1042 = *$tmp1043;
            panda$core$String** $tmp1045 = ((panda$core$String**) ((char*) $match$165_9396->$data + 16));
            name1044 = *$tmp1045;
            org$pandalanguage$pandac$ASTNode** $tmp1047 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 24));
            type1046 = *$tmp1047;
            panda$core$String* $tmp1048 = panda$core$String$convert$R$panda$core$String(name1044);
            panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, &$s1049);
            panda$core$String* $tmp1051 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1050, ((panda$core$Object*) type1046));
            panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1051, &$s1052);
            return $tmp1053;
        }
        }
        else {
        panda$core$Bit $tmp1054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1054.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1056 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _1055 = *$tmp1056;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1058 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$165_9396->$data + 16));
            kind1057 = *$tmp1058;
            org$pandalanguage$pandac$ASTNode** $tmp1060 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 24));
            base1059 = *$tmp1060;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1061;
            $tmp1061 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
            $tmp1061->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp1061->refCount = 1;
            $tmp1061->value = kind1057;
            panda$core$String* $tmp1063 = (($fn1062) ((panda$core$Object*) $tmp1061)->$class->vtable[0])(((panda$core$Object*) $tmp1061));
            panda$core$String* $tmp1065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1063, &$s1064);
            panda$core$String* $tmp1066 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1065, ((panda$core$Object*) base1059));
            panda$core$String* $tmp1068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1066, &$s1067);
            return $tmp1068;
        }
        }
        else {
        panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1069.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1071 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _1070 = *$tmp1071;
            org$pandalanguage$pandac$ASTNode** $tmp1073 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 16));
            start1072 = *$tmp1073;
            org$pandalanguage$pandac$ASTNode** $tmp1075 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 24));
            end1074 = *$tmp1075;
            panda$core$Bit* $tmp1077 = ((panda$core$Bit*) ((char*) $match$165_9396->$data + 32));
            inclusive1076 = *$tmp1077;
            org$pandalanguage$pandac$ASTNode** $tmp1079 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 33));
            step1078 = *$tmp1079;
            panda$core$MutableString* $tmp1081 = (panda$core$MutableString*) malloc(48);
            $tmp1081->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1081->refCount.value = 1;
            panda$core$MutableString$init($tmp1081);
            result1080 = $tmp1081;
            panda$core$Bit $tmp1086;
            if (((panda$core$Bit) { start1072 != NULL }).value) goto $l1083; else goto $l1084;
            $l1083:;
            panda$core$Bit $tmp1087 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(start1072->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1086 = $tmp1087;
            goto $l1085;
            $l1084:;
            $tmp1086 = ((panda$core$Bit) { true });
            goto $l1085;
            $l1085:;
            if ($tmp1086.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1080, ((panda$core$Object*) start1072));
            }
            }
            if (inclusive1076.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1080, &$s1088);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result1080, &$s1089);
            }
            }
            panda$core$Bit $tmp1093;
            if (((panda$core$Bit) { end1074 != NULL }).value) goto $l1090; else goto $l1091;
            $l1090:;
            panda$core$Bit $tmp1094 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(end1074->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1093 = $tmp1094;
            goto $l1092;
            $l1091:;
            $tmp1093 = ((panda$core$Bit) { true });
            goto $l1092;
            $l1092:;
            if ($tmp1093.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1080, ((panda$core$Object*) end1074));
            }
            }
            panda$core$Bit $tmp1098;
            if (((panda$core$Bit) { step1078 != NULL }).value) goto $l1095; else goto $l1096;
            $l1095:;
            panda$core$Bit $tmp1099 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(step1078->$rawValue, ((panda$core$Int64) { 24 }));
            $tmp1098 = $tmp1099;
            goto $l1097;
            $l1096:;
            $tmp1098 = ((panda$core$Bit) { true });
            goto $l1097;
            $l1097:;
            if ($tmp1098.value) {
            {
                panda$core$String* $tmp1101 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1100, ((panda$core$Object*) step1078));
                panda$core$MutableString$append$panda$core$String(result1080, $tmp1101);
            }
            }
            panda$core$String* $tmp1102 = panda$core$MutableString$finish$R$panda$core$String(result1080);
            return $tmp1102;
        }
        }
        else {
        panda$core$Bit $tmp1103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1103.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1105 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _1104 = *$tmp1105;
            panda$core$Real64* $tmp1107 = ((panda$core$Real64*) ((char*) $match$165_9396->$data + 16));
            value1106 = *$tmp1107;
            panda$core$String* $tmp1108 = panda$core$Real64$convert$R$panda$core$String(value1106);
            return $tmp1108;
        }
        }
        else {
        panda$core$Bit $tmp1109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1109.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1111 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _1110 = *$tmp1111;
            org$pandalanguage$pandac$ASTNode** $tmp1113 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 16));
            value1112 = *$tmp1113;
            if (((panda$core$Bit) { value1112 != NULL }).value) {
            {
                panda$core$String* $tmp1115 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1114, ((panda$core$Object*) value1112));
                panda$core$String* $tmp1117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1115, &$s1116);
                return $tmp1117;
            }
            }
            return &$s1118;
        }
        }
        else {
        panda$core$Bit $tmp1119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1119.value) {
        {
            return &$s1120;
        }
        }
        else {
        panda$core$Bit $tmp1121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1121.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1123 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _1122 = *$tmp1123;
            panda$core$String** $tmp1125 = ((panda$core$String**) ((char*) $match$165_9396->$data + 16));
            str1124 = *$tmp1125;
            return str1124;
        }
        }
        else {
        panda$core$Bit $tmp1126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1126.value) {
        {
            return &$s1127;
        }
        }
        else {
        panda$core$Bit $tmp1128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1128.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1130 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _1129 = *$tmp1130;
            panda$core$String** $tmp1132 = ((panda$core$String**) ((char*) $match$165_9396->$data + 16));
            name1131 = *$tmp1132;
            return name1131;
        }
        }
        else {
        panda$core$Bit $tmp1133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1133.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1135 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _1134 = *$tmp1135;
            panda$core$String** $tmp1137 = ((panda$core$String**) ((char*) $match$165_9396->$data + 16));
            name1136 = *$tmp1137;
            org$pandalanguage$pandac$ASTNode** $tmp1139 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 24));
            type1138 = *$tmp1139;
            if (((panda$core$Bit) { type1138 != NULL }).value) {
            {
                panda$core$String* $tmp1140 = panda$core$String$convert$R$panda$core$String(name1136);
                panda$core$String* $tmp1142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1140, &$s1141);
                panda$core$String* $tmp1143 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1142, ((panda$core$Object*) type1138));
                panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1143, &$s1144);
                return $tmp1145;
            }
            }
            return name1136;
        }
        }
        else {
        panda$core$Bit $tmp1146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1146.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1148 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _1147 = *$tmp1148;
            panda$core$String** $tmp1150 = ((panda$core$String**) ((char*) $match$165_9396->$data + 16));
            name1149 = *$tmp1150;
            return name1149;
        }
        }
        else {
        panda$core$Bit $tmp1151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1151.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1153 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _1152 = *$tmp1153;
            org$pandalanguage$pandac$Variable$Kind* $tmp1155 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$165_9396->$data + 16));
            kind1154 = *$tmp1155;
            panda$collections$ImmutableArray** $tmp1157 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 24));
            decls1156 = *$tmp1157;
            panda$core$MutableString* $tmp1159 = (panda$core$MutableString*) malloc(48);
            $tmp1159->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1159->refCount.value = 1;
            panda$core$MutableString$init($tmp1159);
            result1158 = $tmp1159;
            {
                $match$390_171161 = kind1154;
                panda$core$Bit $tmp1162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_171161.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp1162.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1158, &$s1163);
                }
                }
                else {
                panda$core$Bit $tmp1164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_171161.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp1164.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1158, &$s1165);
                }
                }
                else {
                panda$core$Bit $tmp1166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_171161.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp1166.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1158, &$s1167);
                }
                }
                else {
                panda$core$Bit $tmp1168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$390_171161.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp1168.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1158, &$s1169);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp1170 = panda$collections$ImmutableArray$join$R$panda$core$String(decls1156);
            panda$core$MutableString$append$panda$core$String(result1158, $tmp1170);
            panda$core$String* $tmp1171 = panda$core$MutableString$finish$R$panda$core$String(result1158);
            return $tmp1171;
        }
        }
        else {
        panda$core$Bit $tmp1172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1172.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1174 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _1173 = *$tmp1174;
            panda$collections$ImmutableArray** $tmp1176 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 16));
            tests1175 = *$tmp1176;
            panda$collections$ImmutableArray** $tmp1178 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 24));
            statements1177 = *$tmp1178;
            panda$core$MutableString* $tmp1180 = (panda$core$MutableString*) malloc(48);
            $tmp1180->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1180->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp1180, &$s1182);
            result1179 = $tmp1180;
            separator1183 = &$s1184;
            {
                ITable* $tmp1186 = ((panda$collections$Iterable*) tests1175)->$class->itable;
                while ($tmp1186->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1186 = $tmp1186->next;
                }
                $fn1188 $tmp1187 = $tmp1186->methods[0];
                panda$collections$Iterator* $tmp1189 = $tmp1187(((panda$collections$Iterable*) tests1175));
                t$Iter1185 = $tmp1189;
                $l1190:;
                ITable* $tmp1192 = t$Iter1185->$class->itable;
                while ($tmp1192->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1192 = $tmp1192->next;
                }
                $fn1194 $tmp1193 = $tmp1192->methods[0];
                panda$core$Bit $tmp1195 = $tmp1193(t$Iter1185);
                panda$core$Bit $tmp1196 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1195);
                if (!$tmp1196.value) goto $l1191;
                {
                    ITable* $tmp1198 = t$Iter1185->$class->itable;
                    while ($tmp1198->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1198 = $tmp1198->next;
                    }
                    $fn1200 $tmp1199 = $tmp1198->methods[1];
                    panda$core$Object* $tmp1201 = $tmp1199(t$Iter1185);
                    t1197 = ((org$pandalanguage$pandac$ASTNode*) $tmp1201);
                    panda$core$String* $tmp1202 = panda$core$String$convert$R$panda$core$String(separator1183);
                    panda$core$String* $tmp1204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1202, &$s1203);
                    panda$core$String* $tmp1205 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1204, ((panda$core$Object*) t1197));
                    panda$core$String* $tmp1207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1205, &$s1206);
                    panda$core$MutableString$append$panda$core$String(result1179, $tmp1207);
                }
                goto $l1190;
                $l1191:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1208, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result1179, $tmp1208);
            {
                ITable* $tmp1210 = ((panda$collections$Iterable*) statements1177)->$class->itable;
                while ($tmp1210->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1210 = $tmp1210->next;
                }
                $fn1212 $tmp1211 = $tmp1210->methods[0];
                panda$collections$Iterator* $tmp1213 = $tmp1211(((panda$collections$Iterable*) statements1177));
                s$Iter1209 = $tmp1213;
                $l1214:;
                ITable* $tmp1216 = s$Iter1209->$class->itable;
                while ($tmp1216->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1216 = $tmp1216->next;
                }
                $fn1218 $tmp1217 = $tmp1216->methods[0];
                panda$core$Bit $tmp1219 = $tmp1217(s$Iter1209);
                panda$core$Bit $tmp1220 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1219);
                if (!$tmp1220.value) goto $l1215;
                {
                    ITable* $tmp1222 = s$Iter1209->$class->itable;
                    while ($tmp1222->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1222 = $tmp1222->next;
                    }
                    $fn1224 $tmp1223 = $tmp1222->methods[1];
                    panda$core$Object* $tmp1225 = $tmp1223(s$Iter1209);
                    s1221 = ((org$pandalanguage$pandac$ASTNode*) $tmp1225);
                    panda$core$String* $tmp1227 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1226, ((panda$core$Object*) s1221));
                    panda$core$MutableString$append$panda$core$String(result1179, $tmp1227);
                }
                goto $l1214;
                $l1215:;
            }
            panda$core$String* $tmp1228 = panda$core$MutableString$finish$R$panda$core$String(result1179);
            return $tmp1228;
        }
        }
        else {
        panda$core$Bit $tmp1229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$165_9396->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1229.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1231 = ((org$pandalanguage$pandac$Position*) ((char*) $match$165_9396->$data + 0));
            _1230 = *$tmp1231;
            panda$core$String** $tmp1233 = ((panda$core$String**) ((char*) $match$165_9396->$data + 16));
            label1232 = *$tmp1233;
            org$pandalanguage$pandac$ASTNode** $tmp1235 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$165_9396->$data + 24));
            test1234 = *$tmp1235;
            panda$collections$ImmutableArray** $tmp1237 = ((panda$collections$ImmutableArray**) ((char*) $match$165_9396->$data + 32));
            statements1236 = *$tmp1237;
            panda$core$MutableString* $tmp1239 = (panda$core$MutableString*) malloc(48);
            $tmp1239->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1239->refCount.value = 1;
            panda$core$MutableString$init($tmp1239);
            result1238 = $tmp1239;
            if (((panda$core$Bit) { label1232 != NULL }).value) {
            {
                panda$core$String* $tmp1241 = panda$core$String$convert$R$panda$core$String(label1232);
                panda$core$String* $tmp1243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1241, &$s1242);
                panda$core$MutableString$append$panda$core$String(result1238, $tmp1243);
            }
            }
            panda$core$String* $tmp1245 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1244, ((panda$core$Object*) test1234));
            panda$core$String* $tmp1247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1245, &$s1246);
            panda$core$MutableString$append$panda$core$String(result1238, $tmp1247);
            {
                ITable* $tmp1249 = ((panda$collections$Iterable*) statements1236)->$class->itable;
                while ($tmp1249->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1249 = $tmp1249->next;
                }
                $fn1251 $tmp1250 = $tmp1249->methods[0];
                panda$collections$Iterator* $tmp1252 = $tmp1250(((panda$collections$Iterable*) statements1236));
                s$Iter1248 = $tmp1252;
                $l1253:;
                ITable* $tmp1255 = s$Iter1248->$class->itable;
                while ($tmp1255->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1255 = $tmp1255->next;
                }
                $fn1257 $tmp1256 = $tmp1255->methods[0];
                panda$core$Bit $tmp1258 = $tmp1256(s$Iter1248);
                panda$core$Bit $tmp1259 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1258);
                if (!$tmp1259.value) goto $l1254;
                {
                    ITable* $tmp1261 = s$Iter1248->$class->itable;
                    while ($tmp1261->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1261 = $tmp1261->next;
                    }
                    $fn1263 $tmp1262 = $tmp1261->methods[1];
                    panda$core$Object* $tmp1264 = $tmp1262(s$Iter1248);
                    s1260 = ((org$pandalanguage$pandac$ASTNode*) $tmp1264);
                    panda$core$String* $tmp1266 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1260), &$s1265);
                    panda$core$MutableString$append$panda$core$String(result1238, $tmp1266);
                }
                goto $l1253;
                $l1254:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1267, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1238, $tmp1267);
            panda$core$String* $tmp1268 = panda$core$MutableString$finish$R$panda$core$String(result1238);
            return $tmp1268;
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

