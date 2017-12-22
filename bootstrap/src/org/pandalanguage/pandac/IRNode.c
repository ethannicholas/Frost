#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Bit.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/collections/Array.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/MethodDecl.h"


org$pandalanguage$pandac$IRNode$class_type org$pandalanguage$pandac$IRNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$IRNode$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position} };

typedef org$pandalanguage$pandac$Type* (*$fn172)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn185)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn200)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn202)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn205)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn264)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn317)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn385)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn410)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn416)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn422)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn453)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn471)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn515)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn522)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn541)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn547)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn553)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn567)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn591)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn597)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn603)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn646)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn652)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn658)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn681)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn687)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn693)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn701)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn707)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn713)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn724)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn745)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn777)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn783)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn789)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn864)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn879)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn896)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn980)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn986)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn992)(panda$collections$Iterator*);

static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x3a\x20", 17, -7730994269199854653, NULL };
static panda$core$String $s813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x2a\x20\x72\x65\x75\x73\x65\x64\x20\x76\x61\x6c\x75\x65\x20\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x3a\x20", 28, 2945252663019609900, NULL };
static panda$core$String $s823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1 = p_f0;
    org$pandalanguage$pandac$IRNode** $tmp2 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
    *$tmp2 = p_f1;
    org$pandalanguage$pandac$IRNode** $tmp3 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
    *$tmp3 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4 = p_f0;
    org$pandalanguage$pandac$Type** $tmp5 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
    *$tmp5 = p_f1;
    org$pandalanguage$pandac$IRNode** $tmp6 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
    *$tmp6 = p_f2;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp7 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp7 = p_f3;
    org$pandalanguage$pandac$IRNode** $tmp8 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
    *$tmp8 = p_f4;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp9 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp9 = p_f0;
    org$pandalanguage$pandac$Type** $tmp10 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
    *$tmp10 = p_f1;
    panda$core$Bit* $tmp11 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp11 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp12 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp12 = p_f0;
    panda$collections$ImmutableArray** $tmp13 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
    *$tmp13 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp14 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp14 = p_f0;
    panda$core$String** $tmp15 = ((panda$core$String**) ((char*) self->$data + 16));
    *$tmp15 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp16 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp16 = p_f0;
    org$pandalanguage$pandac$Type** $tmp17 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
    *$tmp17 = p_f1;
    org$pandalanguage$pandac$MethodRef** $tmp18 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
    *$tmp18 = p_f2;
    panda$collections$ImmutableArray** $tmp19 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
    *$tmp19 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp20 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp20 = p_f0;
    org$pandalanguage$pandac$IRNode** $tmp21 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
    *$tmp21 = p_f1;
    org$pandalanguage$pandac$Type** $tmp22 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
    *$tmp22 = p_f2;
    panda$core$Bit* $tmp23 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp23 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp24 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp24 = p_f0;
    org$pandalanguage$pandac$ChoiceEntry** $tmp25 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
    *$tmp25 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp26 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp26 = p_f0;
    org$pandalanguage$pandac$IRNode** $tmp27 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
    *$tmp27 = p_f1;
    org$pandalanguage$pandac$ChoiceEntry** $tmp28 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
    *$tmp28 = p_f2;
    panda$core$Int64* $tmp29 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp29 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp30 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp30 = p_f0;
    org$pandalanguage$pandac$Type** $tmp31 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
    *$tmp31 = p_f1;
    org$pandalanguage$pandac$IRNode** $tmp32 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
    *$tmp32 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp33 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp33 = p_f0;
    org$pandalanguage$pandac$Type** $tmp34 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
    *$tmp34 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$IRNode** $tmp35 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
    *$tmp35 = p_f0;
    org$pandalanguage$pandac$IRNode** $tmp36 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
    *$tmp36 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp37 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp37 = p_f0;
    panda$core$String** $tmp38 = ((panda$core$String**) ((char*) self->$data + 16));
    *$tmp38 = p_f1;
    panda$collections$ImmutableArray** $tmp39 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp39 = p_f2;
    org$pandalanguage$pandac$IRNode** $tmp40 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
    *$tmp40 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp41 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp41 = p_f0;
    org$pandalanguage$pandac$Type** $tmp42 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
    *$tmp42 = p_f1;
    org$pandalanguage$pandac$IRNode** $tmp43 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
    *$tmp43 = p_f2;
    org$pandalanguage$pandac$FieldDecl** $tmp44 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
    *$tmp44 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp45 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp45 = p_f0;
    org$pandalanguage$pandac$IRNode** $tmp46 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
    *$tmp46 = p_f1;
    panda$collections$ImmutableArray** $tmp47 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp47 = p_f2;
    org$pandalanguage$pandac$IRNode** $tmp48 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
    *$tmp48 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp49 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp49 = p_f0;
    org$pandalanguage$pandac$Type** $tmp50 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
    *$tmp50 = p_f1;
    panda$core$UInt64* $tmp51 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp51 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp52 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp52 = p_f0;
    org$pandalanguage$pandac$IRNode** $tmp53 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
    *$tmp53 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp54 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp54 = p_f0;
    panda$core$String** $tmp55 = ((panda$core$String**) ((char*) self->$data + 16));
    *$tmp55 = p_f1;
    panda$collections$ImmutableArray** $tmp56 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp56 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp57 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp57 = p_f0;
    org$pandalanguage$pandac$IRNode** $tmp58 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
    *$tmp58 = p_f1;
    panda$collections$ImmutableArray** $tmp59 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp59 = p_f2;
    panda$collections$ImmutableArray** $tmp60 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
    *$tmp60 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$MethodRef* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp61 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp61 = p_f0;
    org$pandalanguage$pandac$IRNode** $tmp62 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
    *$tmp62 = p_f1;
    org$pandalanguage$pandac$MethodRef** $tmp63 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
    *$tmp63 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp64 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp64 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp65 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp65 = p_f1;
    org$pandalanguage$pandac$IRNode** $tmp66 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
    *$tmp66 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp67 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp67 = p_f0;
    panda$core$String** $tmp68 = ((panda$core$String**) ((char*) self->$data + 16));
    *$tmp68 = p_f1;
    org$pandalanguage$pandac$IRNode** $tmp69 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
    *$tmp69 = p_f2;
    org$pandalanguage$pandac$IRNode** $tmp70 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
    *$tmp70 = p_f3;
    panda$collections$ImmutableArray** $tmp71 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
    *$tmp71 = p_f4;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp72 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp72 = p_f0;
    org$pandalanguage$pandac$Type** $tmp73 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
    *$tmp73 = p_f1;
    panda$core$Real64* $tmp74 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp74 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp75 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp75 = p_f0;
    org$pandalanguage$pandac$IRNode** $tmp76 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
    *$tmp76 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp77 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp77 = p_f0;
    org$pandalanguage$pandac$Type** $tmp78 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
    *$tmp78 = p_f1;
    panda$core$Int64* $tmp79 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp79 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$IRNode** $tmp80 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
    *$tmp80 = p_f0;
    panda$core$Int64* $tmp81 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp81 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp82 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp82 = p_f0;
    panda$core$String** $tmp83 = ((panda$core$String**) ((char*) self->$data + 16));
    *$tmp83 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp84 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp84 = p_f0;
    org$pandalanguage$pandac$IRNode** $tmp85 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
    *$tmp85 = p_f1;
    org$pandalanguage$pandac$IRNode** $tmp86 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
    *$tmp86 = p_f2;
    org$pandalanguage$pandac$IRNode** $tmp87 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
    *$tmp87 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp88 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp88 = p_f0;
    org$pandalanguage$pandac$Type** $tmp89 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
    *$tmp89 = p_f1;
    org$pandalanguage$pandac$IRNode** $tmp90 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
    *$tmp90 = p_f2;
    panda$collections$ImmutableArray** $tmp91 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
    *$tmp91 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp92 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp92 = p_f0;
    org$pandalanguage$pandac$Type** $tmp93 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
    *$tmp93 = p_f1;
    org$pandalanguage$pandac$IRNode** $tmp94 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
    *$tmp94 = p_f2;
    panda$collections$ImmutableArray** $tmp95 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
    *$tmp95 = p_f3;
    panda$collections$ImmutableArray** $tmp96 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
    *$tmp96 = p_f4;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp97 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp97 = p_f0;
    org$pandalanguage$pandac$IRNode** $tmp98 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
    *$tmp98 = p_f1;
    panda$collections$ImmutableArray** $tmp99 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp99 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp100 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp100 = p_f0;
    org$pandalanguage$pandac$IRNode** $tmp101 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
    *$tmp101 = p_f1;
    org$pandalanguage$pandac$IRNode** $tmp102 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
    *$tmp102 = p_f2;
    panda$core$Bit* $tmp103 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp103 = p_f3;
    org$pandalanguage$pandac$IRNode** $tmp104 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
    *$tmp104 = p_f4;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp105 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp105 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp106 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp106 = p_f1;
    panda$collections$ImmutableArray** $tmp107 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp107 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp108 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp108 = p_f0;
    org$pandalanguage$pandac$Variable** $tmp109 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
    *$tmp109 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp110 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp110 = p_f0;
    panda$collections$ImmutableArray** $tmp111 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
    *$tmp111 = p_f1;
    panda$collections$ImmutableArray** $tmp112 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
    *$tmp112 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp113 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp113 = p_f0;
    panda$core$String** $tmp114 = ((panda$core$String**) ((char*) self->$data + 16));
    *$tmp114 = p_f1;
    org$pandalanguage$pandac$IRNode** $tmp115 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
    *$tmp115 = p_f2;
    panda$collections$ImmutableArray** $tmp116 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
    *$tmp116 = p_f3;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$63_9117;
    org$pandalanguage$pandac$Type* type119;
    org$pandalanguage$pandac$Type* type122;
    org$pandalanguage$pandac$Type* type125;
    org$pandalanguage$pandac$Type* type128;
    org$pandalanguage$pandac$ChoiceEntry* ce131;
    org$pandalanguage$pandac$ChoiceEntry* ce135;
    panda$core$Int64 field137;
    org$pandalanguage$pandac$Type* type141;
    org$pandalanguage$pandac$Type* type144;
    org$pandalanguage$pandac$Type* type147;
    org$pandalanguage$pandac$Type* type150;
    org$pandalanguage$pandac$IRNode* ref157;
    org$pandalanguage$pandac$Position $tmp162;
    org$pandalanguage$pandac$Type* type164;
    org$pandalanguage$pandac$Type* type167;
    org$pandalanguage$pandac$IRNode* base170;
    org$pandalanguage$pandac$Type* type175;
    org$pandalanguage$pandac$Type* type178;
    panda$core$Int64 id180;
    org$pandalanguage$pandac$IRNode* base183;
    org$pandalanguage$pandac$Type* type188;
    org$pandalanguage$pandac$Type* type193;
    org$pandalanguage$pandac$IRNode* ifTrue196;
    org$pandalanguage$pandac$IRNode* ifFalse198;
    org$pandalanguage$pandac$Type* type212;
    org$pandalanguage$pandac$Type* type215;
    org$pandalanguage$pandac$Variable* variable222;
    {
        $match$63_9117 = self;
        panda$core$Bit $tmp118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp118.value) {
        {
            org$pandalanguage$pandac$Type** $tmp120 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 16));
            type119 = *$tmp120;
            return type119;
        }
        }
        else {
        panda$core$Bit $tmp121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp121.value) {
        {
            org$pandalanguage$pandac$Type** $tmp123 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 16));
            type122 = *$tmp123;
            return type122;
        }
        }
        else {
        panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp124.value) {
        {
            org$pandalanguage$pandac$Type** $tmp126 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 16));
            type125 = *$tmp126;
            return type125;
        }
        }
        else {
        panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp127.value) {
        {
            org$pandalanguage$pandac$Type** $tmp129 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 24));
            type128 = *$tmp129;
            return type128;
        }
        }
        else {
        panda$core$Bit $tmp130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp130.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp132 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$63_9117->$data + 16));
            ce131 = *$tmp132;
            org$pandalanguage$pandac$Type* $tmp133 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp133;
        }
        }
        else {
        panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp134.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp136 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$63_9117->$data + 24));
            ce135 = *$tmp136;
            panda$core$Int64* $tmp138 = ((panda$core$Int64*) ((char*) $match$63_9117->$data + 32));
            field137 = *$tmp138;
            panda$core$Object* $tmp139 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce135->fields, field137);
            return ((org$pandalanguage$pandac$Type*) $tmp139);
        }
        }
        else {
        panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp140.value) {
        {
            org$pandalanguage$pandac$Type** $tmp142 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 16));
            type141 = *$tmp142;
            return type141;
        }
        }
        else {
        panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp143.value) {
        {
            org$pandalanguage$pandac$Type** $tmp145 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 16));
            type144 = *$tmp145;
            return type144;
        }
        }
        else {
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp146.value) {
        {
            org$pandalanguage$pandac$Type** $tmp148 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 16));
            type147 = *$tmp148;
            return type147;
        }
        }
        else {
        panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp149.value) {
        {
            org$pandalanguage$pandac$Type** $tmp151 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 16));
            type150 = *$tmp151;
            return type150;
        }
        }
        else {
        panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp152.value) {
        {
            org$pandalanguage$pandac$Type* $tmp153 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            return $tmp153;
        }
        }
        else {
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp154.value) {
        {
            org$pandalanguage$pandac$Type* $tmp155 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            return $tmp155;
        }
        }
        else {
        panda$core$Bit $tmp156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp156.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp158 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$63_9117->$data + 16));
            ref157 = *$tmp158;
            org$pandalanguage$pandac$Type* $tmp159 = (org$pandalanguage$pandac$Type*) malloc(96);
            $tmp159->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp159->refCount.value = 1;
            org$pandalanguage$pandac$Position$init(&$tmp162);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp159, &$s161, ((panda$core$Int64) { 16 }), $tmp162, ((panda$core$Bit) { true }));
            return $tmp159;
        }
        }
        else {
        panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp163.value) {
        {
            org$pandalanguage$pandac$Type** $tmp165 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 16));
            type164 = *$tmp165;
            return type164;
        }
        }
        else {
        panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp166.value) {
        {
            org$pandalanguage$pandac$Type** $tmp168 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 16));
            type167 = *$tmp168;
            return type167;
        }
        }
        else {
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp169.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp171 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$63_9117->$data + 24));
            base170 = *$tmp171;
            org$pandalanguage$pandac$Type* $tmp173 = (($fn172) base170->$class->vtable[2])(base170);
            return $tmp173;
        }
        }
        else {
        panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp174.value) {
        {
            org$pandalanguage$pandac$Type** $tmp176 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 16));
            type175 = *$tmp176;
            return type175;
        }
        }
        else {
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp177.value) {
        {
            org$pandalanguage$pandac$Type** $tmp179 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 16));
            type178 = *$tmp179;
            panda$core$Int64* $tmp181 = ((panda$core$Int64*) ((char*) $match$63_9117->$data + 24));
            id180 = *$tmp181;
            return type178;
        }
        }
        else {
        panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp182.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp184 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$63_9117->$data + 0));
            base183 = *$tmp184;
            org$pandalanguage$pandac$Type* $tmp186 = (($fn185) base183->$class->vtable[2])(base183);
            return $tmp186;
        }
        }
        else {
        panda$core$Bit $tmp187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp187.value) {
        {
            org$pandalanguage$pandac$Type** $tmp189 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 16));
            type188 = *$tmp189;
            return type188;
        }
        }
        else {
        panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp190.value) {
        {
            org$pandalanguage$pandac$Type* $tmp191 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            return $tmp191;
        }
        }
        else {
        panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp192.value) {
        {
            org$pandalanguage$pandac$Type** $tmp194 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 16));
            type193 = *$tmp194;
            return type193;
        }
        }
        else {
        panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp195.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp197 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$63_9117->$data + 24));
            ifTrue196 = *$tmp197;
            org$pandalanguage$pandac$IRNode** $tmp199 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$63_9117->$data + 32));
            ifFalse198 = *$tmp199;
            org$pandalanguage$pandac$Type* $tmp201 = (($fn200) ifTrue196->$class->vtable[2])(ifTrue196);
            org$pandalanguage$pandac$Type* $tmp203 = (($fn202) ifFalse198->$class->vtable[2])(ifFalse198);
            panda$core$Bit $tmp204 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp201, $tmp203);
            PANDA_ASSERT($tmp204.value);
            org$pandalanguage$pandac$Type* $tmp206 = (($fn205) ifTrue196->$class->vtable[2])(ifTrue196);
            return $tmp206;
        }
        }
        else {
        panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp207.value) {
        {
            org$pandalanguage$pandac$Type* $tmp208 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            return $tmp208;
        }
        }
        else {
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp209.value) {
        {
            org$pandalanguage$pandac$Type* $tmp210 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp210;
        }
        }
        else {
        panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp211.value) {
        {
            org$pandalanguage$pandac$Type** $tmp213 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 16));
            type212 = *$tmp213;
            return type212;
        }
        }
        else {
        panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp214.value) {
        {
            org$pandalanguage$pandac$Type** $tmp216 = ((org$pandalanguage$pandac$Type**) ((char*) $match$63_9117->$data + 16));
            type215 = *$tmp216;
            return type215;
        }
        }
        else {
        panda$core$Bit $tmp217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp217.value) {
        {
            org$pandalanguage$pandac$Type* $tmp218 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp218;
        }
        }
        else {
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp219.value) {
        {
            org$pandalanguage$pandac$Type* $tmp220 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            return $tmp220;
        }
        }
        else {
        panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$63_9117->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp221.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp223 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$63_9117->$data + 16));
            variable222 = *$tmp223;
            return variable222->type;
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
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$131_9224;
    org$pandalanguage$pandac$Position position226;
    org$pandalanguage$pandac$Position position229;
    org$pandalanguage$pandac$Position position232;
    org$pandalanguage$pandac$Position position235;
    org$pandalanguage$pandac$Position position238;
    org$pandalanguage$pandac$Position position241;
    org$pandalanguage$pandac$Position position244;
    org$pandalanguage$pandac$Position position247;
    org$pandalanguage$pandac$Position position250;
    org$pandalanguage$pandac$Position position253;
    org$pandalanguage$pandac$Position position256;
    org$pandalanguage$pandac$Position position259;
    org$pandalanguage$pandac$IRNode* target262;
    org$pandalanguage$pandac$Position position267;
    org$pandalanguage$pandac$Position position270;
    org$pandalanguage$pandac$Position position273;
    org$pandalanguage$pandac$Position position276;
    org$pandalanguage$pandac$Position position279;
    org$pandalanguage$pandac$Position position282;
    org$pandalanguage$pandac$Position position285;
    org$pandalanguage$pandac$Position position288;
    org$pandalanguage$pandac$Position position291;
    org$pandalanguage$pandac$Position position294;
    org$pandalanguage$pandac$Position position297;
    org$pandalanguage$pandac$Position position300;
    org$pandalanguage$pandac$Position position303;
    org$pandalanguage$pandac$Position position306;
    org$pandalanguage$pandac$Position position309;
    org$pandalanguage$pandac$Position position312;
    org$pandalanguage$pandac$IRNode* base315;
    org$pandalanguage$pandac$Position position320;
    org$pandalanguage$pandac$Position position323;
    org$pandalanguage$pandac$Position position326;
    org$pandalanguage$pandac$Position position329;
    org$pandalanguage$pandac$Position position332;
    org$pandalanguage$pandac$Position position335;
    org$pandalanguage$pandac$Position position338;
    org$pandalanguage$pandac$Position position341;
    org$pandalanguage$pandac$Position position344;
    org$pandalanguage$pandac$Position position347;
    org$pandalanguage$pandac$Position position350;
    org$pandalanguage$pandac$Position position353;
    org$pandalanguage$pandac$Position position356;
    org$pandalanguage$pandac$Position position359;
    {
        $match$131_9224 = self;
        panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp225.value) {
        {
            org$pandalanguage$pandac$Position* $tmp227 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position226 = *$tmp227;
            return position226;
        }
        }
        else {
        panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp228.value) {
        {
            org$pandalanguage$pandac$Position* $tmp230 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position229 = *$tmp230;
            return position229;
        }
        }
        else {
        panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp231.value) {
        {
            org$pandalanguage$pandac$Position* $tmp233 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position232 = *$tmp233;
            return position232;
        }
        }
        else {
        panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp234.value) {
        {
            org$pandalanguage$pandac$Position* $tmp236 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position235 = *$tmp236;
            return position235;
        }
        }
        else {
        panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp237.value) {
        {
            org$pandalanguage$pandac$Position* $tmp239 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position238 = *$tmp239;
            return position238;
        }
        }
        else {
        panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp240.value) {
        {
            org$pandalanguage$pandac$Position* $tmp242 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position241 = *$tmp242;
            return position241;
        }
        }
        else {
        panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp243.value) {
        {
            org$pandalanguage$pandac$Position* $tmp245 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position244 = *$tmp245;
            return position244;
        }
        }
        else {
        panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp246.value) {
        {
            org$pandalanguage$pandac$Position* $tmp248 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position247 = *$tmp248;
            return position247;
        }
        }
        else {
        panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp249.value) {
        {
            org$pandalanguage$pandac$Position* $tmp251 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position250 = *$tmp251;
            return position250;
        }
        }
        else {
        panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp252.value) {
        {
            org$pandalanguage$pandac$Position* $tmp254 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position253 = *$tmp254;
            return position253;
        }
        }
        else {
        panda$core$Bit $tmp255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp255.value) {
        {
            org$pandalanguage$pandac$Position* $tmp257 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position256 = *$tmp257;
            return position256;
        }
        }
        else {
        panda$core$Bit $tmp258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp258.value) {
        {
            org$pandalanguage$pandac$Position* $tmp260 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position259 = *$tmp260;
            return position259;
        }
        }
        else {
        panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp261.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp263 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$131_9224->$data + 0));
            target262 = *$tmp263;
            org$pandalanguage$pandac$Position $tmp265 = (($fn264) target262->$class->vtable[3])(target262);
            return $tmp265;
        }
        }
        else {
        panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp266.value) {
        {
            org$pandalanguage$pandac$Position* $tmp268 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position267 = *$tmp268;
            return position267;
        }
        }
        else {
        panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp269.value) {
        {
            org$pandalanguage$pandac$Position* $tmp271 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position270 = *$tmp271;
            return position270;
        }
        }
        else {
        panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp272.value) {
        {
            org$pandalanguage$pandac$Position* $tmp274 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position273 = *$tmp274;
            return position273;
        }
        }
        else {
        panda$core$Bit $tmp275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp275.value) {
        {
            org$pandalanguage$pandac$Position* $tmp277 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position276 = *$tmp277;
            return position276;
        }
        }
        else {
        panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp278.value) {
        {
            org$pandalanguage$pandac$Position* $tmp280 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position279 = *$tmp280;
            return position279;
        }
        }
        else {
        panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp281.value) {
        {
            org$pandalanguage$pandac$Position* $tmp283 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position282 = *$tmp283;
            return position282;
        }
        }
        else {
        panda$core$Bit $tmp284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp284.value) {
        {
            org$pandalanguage$pandac$Position* $tmp286 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position285 = *$tmp286;
            return position285;
        }
        }
        else {
        panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp287.value) {
        {
            org$pandalanguage$pandac$Position* $tmp289 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position288 = *$tmp289;
            return position288;
        }
        }
        else {
        panda$core$Bit $tmp290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp290.value) {
        {
            org$pandalanguage$pandac$Position* $tmp292 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position291 = *$tmp292;
            return position291;
        }
        }
        else {
        panda$core$Bit $tmp293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp293.value) {
        {
            org$pandalanguage$pandac$Position* $tmp295 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position294 = *$tmp295;
            return position294;
        }
        }
        else {
        panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp296.value) {
        {
            org$pandalanguage$pandac$Position* $tmp298 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position297 = *$tmp298;
            return position297;
        }
        }
        else {
        panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp299.value) {
        {
            org$pandalanguage$pandac$Position* $tmp301 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position300 = *$tmp301;
            return position300;
        }
        }
        else {
        panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp302.value) {
        {
            org$pandalanguage$pandac$Position* $tmp304 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position303 = *$tmp304;
            return position303;
        }
        }
        else {
        panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp305.value) {
        {
            org$pandalanguage$pandac$Position* $tmp307 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position306 = *$tmp307;
            return position306;
        }
        }
        else {
        panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp308.value) {
        {
            org$pandalanguage$pandac$Position* $tmp310 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position309 = *$tmp310;
            return position309;
        }
        }
        else {
        panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp311.value) {
        {
            org$pandalanguage$pandac$Position* $tmp313 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position312 = *$tmp313;
            return position312;
        }
        }
        else {
        panda$core$Bit $tmp314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp314.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp316 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$131_9224->$data + 0));
            base315 = *$tmp316;
            org$pandalanguage$pandac$Position $tmp318 = (($fn317) base315->$class->vtable[3])(base315);
            return $tmp318;
        }
        }
        else {
        panda$core$Bit $tmp319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp319.value) {
        {
            org$pandalanguage$pandac$Position* $tmp321 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position320 = *$tmp321;
            return position320;
        }
        }
        else {
        panda$core$Bit $tmp322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp322.value) {
        {
            org$pandalanguage$pandac$Position* $tmp324 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position323 = *$tmp324;
            return position323;
        }
        }
        else {
        panda$core$Bit $tmp325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp325.value) {
        {
            org$pandalanguage$pandac$Position* $tmp327 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position326 = *$tmp327;
            return position326;
        }
        }
        else {
        panda$core$Bit $tmp328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp328.value) {
        {
            org$pandalanguage$pandac$Position* $tmp330 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position329 = *$tmp330;
            return position329;
        }
        }
        else {
        panda$core$Bit $tmp331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp331.value) {
        {
            org$pandalanguage$pandac$Position* $tmp333 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position332 = *$tmp333;
            return position332;
        }
        }
        else {
        panda$core$Bit $tmp334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp334.value) {
        {
            org$pandalanguage$pandac$Position* $tmp336 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position335 = *$tmp336;
            return position335;
        }
        }
        else {
        panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp337.value) {
        {
            org$pandalanguage$pandac$Position* $tmp339 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position338 = *$tmp339;
            return position338;
        }
        }
        else {
        panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp340.value) {
        {
            org$pandalanguage$pandac$Position* $tmp342 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position341 = *$tmp342;
            return position341;
        }
        }
        else {
        panda$core$Bit $tmp343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp343.value) {
        {
            org$pandalanguage$pandac$Position* $tmp345 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position344 = *$tmp345;
            return position344;
        }
        }
        else {
        panda$core$Bit $tmp346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp346.value) {
        {
            org$pandalanguage$pandac$Position* $tmp348 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position347 = *$tmp348;
            return position347;
        }
        }
        else {
        panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp349.value) {
        {
            org$pandalanguage$pandac$Position* $tmp351 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position350 = *$tmp351;
            return position350;
        }
        }
        else {
        panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp352.value) {
        {
            org$pandalanguage$pandac$Position* $tmp354 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position353 = *$tmp354;
            return position353;
        }
        }
        else {
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp355.value) {
        {
            org$pandalanguage$pandac$Position* $tmp357 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position356 = *$tmp357;
            return position356;
        }
        }
        else {
        panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9224->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp358.value) {
        {
            org$pandalanguage$pandac$Position* $tmp360 = ((org$pandalanguage$pandac$Position*) ((char*) $match$131_9224->$data + 0));
            position359 = *$tmp360;
            return position359;
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
    }
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$227_9361;
    org$pandalanguage$pandac$IRNode* test363;
    org$pandalanguage$pandac$IRNode* msg365;
    org$pandalanguage$pandac$IRNode* left379;
    org$pandalanguage$pandac$parser$Token$Kind op381;
    org$pandalanguage$pandac$IRNode* right383;
    panda$core$Bit bit397;
    panda$collections$ImmutableArray* statements401;
    panda$core$MutableString* result403;
    panda$collections$Iterator* s$Iter407;
    org$pandalanguage$pandac$IRNode* s419;
    panda$core$Char8 $tmp426;
    panda$core$String* label429;
    org$pandalanguage$pandac$MethodRef* m437;
    panda$collections$ImmutableArray* args439;
    org$pandalanguage$pandac$IRNode* value449;
    org$pandalanguage$pandac$Type* type451;
    org$pandalanguage$pandac$ChoiceEntry* ce461;
    org$pandalanguage$pandac$IRNode* base465;
    org$pandalanguage$pandac$ChoiceEntry* ce467;
    panda$core$Int64 field469;
    org$pandalanguage$pandac$Type* type483;
    org$pandalanguage$pandac$IRNode* call485;
    org$pandalanguage$pandac$IRNode* $match$258_17487;
    panda$collections$ImmutableArray* args489;
    org$pandalanguage$pandac$Type* Type499;
    panda$core$String* label503;
    org$pandalanguage$pandac$IRNode* target511;
    org$pandalanguage$pandac$IRNode* value513;
    panda$core$String* label525;
    panda$collections$ImmutableArray* statements527;
    org$pandalanguage$pandac$IRNode* test529;
    panda$core$MutableString* result531;
    panda$collections$Iterator* s$Iter538;
    org$pandalanguage$pandac$IRNode* s550;
    org$pandalanguage$pandac$IRNode* base563;
    org$pandalanguage$pandac$FieldDecl* field565;
    org$pandalanguage$pandac$IRNode* test575;
    panda$collections$ImmutableArray* ifTrue577;
    org$pandalanguage$pandac$IRNode* ifFalse579;
    panda$core$MutableString* result581;
    panda$collections$Iterator* s$Iter588;
    org$pandalanguage$pandac$IRNode* s600;
    panda$core$Char8 $tmp607;
    panda$core$UInt64 value614;
    org$pandalanguage$pandac$IRNode* value618;
    org$pandalanguage$pandac$IRNode* value625;
    panda$core$String* label632;
    panda$collections$ImmutableArray* statements634;
    panda$core$MutableString* result636;
    panda$collections$Iterator* s$Iter643;
    org$pandalanguage$pandac$IRNode* s655;
    panda$core$Char8 $tmp662;
    org$pandalanguage$pandac$IRNode* value665;
    panda$collections$ImmutableArray* whens667;
    panda$collections$ImmutableArray* other669;
    panda$core$MutableString* result671;
    panda$collections$Iterator* w$Iter678;
    org$pandalanguage$pandac$IRNode* w690;
    panda$collections$Iterator* s$Iter698;
    org$pandalanguage$pandac$IRNode* s710;
    panda$core$Char8 $tmp717;
    org$pandalanguage$pandac$IRNode* target720;
    org$pandalanguage$pandac$MethodRef* m722;
    panda$core$UInt64 value732;
    org$pandalanguage$pandac$parser$Token$Kind op740;
    org$pandalanguage$pandac$IRNode* base742;
    panda$core$String* label753;
    org$pandalanguage$pandac$IRNode* target755;
    org$pandalanguage$pandac$IRNode* list757;
    panda$collections$ImmutableArray* statements759;
    panda$core$MutableString* result761;
    panda$collections$Iterator* s$Iter774;
    org$pandalanguage$pandac$IRNode* s786;
    panda$core$Char8 $tmp793;
    panda$core$Real64 value796;
    org$pandalanguage$pandac$IRNode* value800;
    panda$core$Int64 id808;
    org$pandalanguage$pandac$IRNode* base816;
    panda$core$Int64 id818;
    panda$core$String* str831;
    org$pandalanguage$pandac$IRNode* test836;
    org$pandalanguage$pandac$IRNode* ifTrue838;
    org$pandalanguage$pandac$IRNode* ifFalse840;
    org$pandalanguage$pandac$Type* type853;
    panda$core$String* name857;
    org$pandalanguage$pandac$IRNode* base860;
    panda$collections$ImmutableArray* args862;
    org$pandalanguage$pandac$IRNode* target873;
    panda$collections$ImmutableArray* methods875;
    panda$collections$ImmutableArray* args877;
    org$pandalanguage$pandac$IRNode* target892;
    panda$collections$ImmutableArray* methods894;
    org$pandalanguage$pandac$IRNode* start905;
    org$pandalanguage$pandac$IRNode* end907;
    panda$core$Bit inclusive909;
    org$pandalanguage$pandac$IRNode* step911;
    panda$core$MutableString* result913;
    org$pandalanguage$pandac$Variable$Kind kind924;
    panda$collections$ImmutableArray* decls926;
    panda$core$MutableString* result928;
    org$pandalanguage$pandac$Variable$Kind $match$397_17931;
    org$pandalanguage$pandac$Variable* variable943;
    panda$collections$ImmutableArray* tests946;
    panda$collections$ImmutableArray* statements948;
    panda$core$String* label961;
    org$pandalanguage$pandac$IRNode* test963;
    panda$collections$ImmutableArray* statements965;
    panda$core$MutableString* result967;
    panda$collections$Iterator* s$Iter977;
    org$pandalanguage$pandac$IRNode* s989;
    panda$core$Char8 $tmp996;
    {
        $match$227_9361 = self;
        panda$core$Bit $tmp362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp362.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp364 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 16));
            test363 = *$tmp364;
            org$pandalanguage$pandac$IRNode** $tmp366 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 24));
            msg365 = *$tmp366;
            if (((panda$core$Bit) { msg365 != NULL }).value) {
            {
                panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s367, ((panda$core$Object*) test363));
                panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp368, &$s369);
                panda$core$String* $tmp371 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp370, ((panda$core$Object*) msg365));
                panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp371, &$s372);
                return $tmp373;
            }
            }
            panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s374, ((panda$core$Object*) test363));
            panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp375, &$s376);
            return $tmp377;
        }
        }
        else {
        panda$core$Bit $tmp378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp378.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp380 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 24));
            left379 = *$tmp380;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp382 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$227_9361->$data + 32));
            op381 = *$tmp382;
            org$pandalanguage$pandac$IRNode** $tmp384 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 40));
            right383 = *$tmp384;
            panda$core$String* $tmp386 = (($fn385) left379->$class->vtable[0])(left379);
            panda$core$String* $tmp388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp386, &$s387);
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp389;
            $tmp389 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
            $tmp389->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp389->refCount = 1;
            $tmp389->value = op381;
            panda$core$String* $tmp390 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp388, ((panda$core$Object*) $tmp389));
            panda$core$String* $tmp392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp390, &$s391);
            panda$core$String* $tmp393 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp392, ((panda$core$Object*) right383));
            panda$core$String* $tmp395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp393, &$s394);
            return $tmp395;
        }
        }
        else {
        panda$core$Bit $tmp396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp396.value) {
        {
            panda$core$Bit* $tmp398 = ((panda$core$Bit*) ((char*) $match$227_9361->$data + 24));
            bit397 = *$tmp398;
            panda$core$String* $tmp399 = panda$core$Bit$convert$R$panda$core$String(bit397);
            return $tmp399;
        }
        }
        else {
        panda$core$Bit $tmp400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp400.value) {
        {
            panda$collections$ImmutableArray** $tmp402 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 16));
            statements401 = *$tmp402;
            panda$core$MutableString* $tmp404 = (panda$core$MutableString*) malloc(48);
            $tmp404->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp404->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp404, &$s406);
            result403 = $tmp404;
            {
                ITable* $tmp408 = ((panda$collections$Iterable*) statements401)->$class->itable;
                while ($tmp408->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp408 = $tmp408->next;
                }
                $fn410 $tmp409 = $tmp408->methods[0];
                panda$collections$Iterator* $tmp411 = $tmp409(((panda$collections$Iterable*) statements401));
                s$Iter407 = $tmp411;
                $l412:;
                ITable* $tmp414 = s$Iter407->$class->itable;
                while ($tmp414->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp414 = $tmp414->next;
                }
                $fn416 $tmp415 = $tmp414->methods[0];
                panda$core$Bit $tmp417 = $tmp415(s$Iter407);
                panda$core$Bit $tmp418 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp417);
                if (!$tmp418.value) goto $l413;
                {
                    ITable* $tmp420 = s$Iter407->$class->itable;
                    while ($tmp420->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp420 = $tmp420->next;
                    }
                    $fn422 $tmp421 = $tmp420->methods[1];
                    panda$core$Object* $tmp423 = $tmp421(s$Iter407);
                    s419 = ((org$pandalanguage$pandac$IRNode*) $tmp423);
                    panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s419), &$s424);
                    panda$core$MutableString$append$panda$core$String(result403, $tmp425);
                }
                goto $l412;
                $l413:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp426, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result403, $tmp426);
            panda$core$String* $tmp427 = panda$core$MutableString$finish$R$panda$core$String(result403);
            return $tmp427;
        }
        }
        else {
        panda$core$Bit $tmp428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp428.value) {
        {
            panda$core$String** $tmp430 = ((panda$core$String**) ((char*) $match$227_9361->$data + 16));
            label429 = *$tmp430;
            if (((panda$core$Bit) { label429 != NULL }).value) {
            {
                panda$core$String* $tmp432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s431, label429);
                panda$core$String* $tmp434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp432, &$s433);
                return $tmp434;
            }
            }
            return &$s435;
        }
        }
        else {
        panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp436.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp438 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$227_9361->$data + 24));
            m437 = *$tmp438;
            panda$collections$ImmutableArray** $tmp440 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 32));
            args439 = *$tmp440;
            panda$core$String* $tmp441 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m437->value)->name);
            panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp441, &$s442);
            panda$core$String* $tmp444 = panda$collections$ImmutableArray$join$R$panda$core$String(args439);
            panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, $tmp444);
            panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, &$s446);
            return $tmp447;
        }
        }
        else {
        panda$core$Bit $tmp448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp448.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp450 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 16));
            value449 = *$tmp450;
            org$pandalanguage$pandac$Type** $tmp452 = ((org$pandalanguage$pandac$Type**) ((char*) $match$227_9361->$data + 24));
            type451 = *$tmp452;
            panda$core$String* $tmp454 = (($fn453) value449->$class->vtable[0])(value449);
            panda$core$String* $tmp456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp454, &$s455);
            panda$core$String* $tmp457 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp456, ((panda$core$Object*) type451));
            panda$core$String* $tmp459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp457, &$s458);
            return $tmp459;
        }
        }
        else {
        panda$core$Bit $tmp460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp460.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp462 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$227_9361->$data + 16));
            ce461 = *$tmp462;
            panda$core$String* $tmp463 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce461);
            return $tmp463;
        }
        }
        else {
        panda$core$Bit $tmp464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp464.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp466 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 16));
            base465 = *$tmp466;
            org$pandalanguage$pandac$ChoiceEntry** $tmp468 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$227_9361->$data + 24));
            ce467 = *$tmp468;
            panda$core$Int64* $tmp470 = ((panda$core$Int64*) ((char*) $match$227_9361->$data + 32));
            field469 = *$tmp470;
            panda$core$String* $tmp472 = (($fn471) base465->$class->vtable[0])(base465);
            panda$core$String* $tmp474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp472, &$s473);
            panda$core$String* $tmp475 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp474, ((panda$core$Object*) ce467));
            panda$core$String* $tmp477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp475, &$s476);
            panda$core$Int64$wrapper* $tmp478;
            $tmp478 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp478->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp478->refCount = 1;
            $tmp478->value = field469;
            panda$core$String* $tmp479 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp477, ((panda$core$Object*) $tmp478));
            panda$core$String* $tmp481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp479, &$s480);
            return $tmp481;
        }
        }
        else {
        panda$core$Bit $tmp482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp482.value) {
        {
            org$pandalanguage$pandac$Type** $tmp484 = ((org$pandalanguage$pandac$Type**) ((char*) $match$227_9361->$data + 16));
            type483 = *$tmp484;
            org$pandalanguage$pandac$IRNode** $tmp486 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 24));
            call485 = *$tmp486;
            {
                $match$258_17487 = call485;
                panda$core$Bit $tmp488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$258_17487->$rawValue, ((panda$core$Int64) { 5 }));
                if ($tmp488.value) {
                {
                    panda$collections$ImmutableArray** $tmp490 = ((panda$collections$ImmutableArray**) ((char*) $match$258_17487->$data + 32));
                    args489 = *$tmp490;
                    panda$core$String* $tmp491 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type483);
                    panda$core$String* $tmp493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp491, &$s492);
                    panda$core$String* $tmp494 = panda$collections$ImmutableArray$join$R$panda$core$String(args489);
                    panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp493, $tmp494);
                    panda$core$String* $tmp497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp495, &$s496);
                    return $tmp497;
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
        else {
        panda$core$Bit $tmp498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp498.value) {
        {
            org$pandalanguage$pandac$Type** $tmp500 = ((org$pandalanguage$pandac$Type**) ((char*) $match$227_9361->$data + 16));
            Type499 = *$tmp500;
            return &$s501;
        }
        }
        else {
        panda$core$Bit $tmp502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp502.value) {
        {
            panda$core$String** $tmp504 = ((panda$core$String**) ((char*) $match$227_9361->$data + 16));
            label503 = *$tmp504;
            if (((panda$core$Bit) { label503 != NULL }).value) {
            {
                panda$core$String* $tmp506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s505, label503);
                panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp506, &$s507);
                return $tmp508;
            }
            }
            return &$s509;
        }
        }
        else {
        panda$core$Bit $tmp510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp510.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp512 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 0));
            target511 = *$tmp512;
            org$pandalanguage$pandac$IRNode** $tmp514 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 8));
            value513 = *$tmp514;
            if (((panda$core$Bit) { value513 != NULL }).value) {
            {
                panda$core$String* $tmp516 = (($fn515) target511->$class->vtable[0])(target511);
                panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp516, &$s517);
                panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp518, ((panda$core$Object*) value513));
                panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp519, &$s520);
                return $tmp521;
            }
            }
            panda$core$String* $tmp523 = (($fn522) target511->$class->vtable[0])(target511);
            return $tmp523;
        }
        }
        else {
        panda$core$Bit $tmp524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp524.value) {
        {
            panda$core$String** $tmp526 = ((panda$core$String**) ((char*) $match$227_9361->$data + 16));
            label525 = *$tmp526;
            panda$collections$ImmutableArray** $tmp528 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 24));
            statements527 = *$tmp528;
            org$pandalanguage$pandac$IRNode** $tmp530 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 32));
            test529 = *$tmp530;
            panda$core$MutableString* $tmp532 = (panda$core$MutableString*) malloc(48);
            $tmp532->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp532->refCount.value = 1;
            panda$core$MutableString$init($tmp532);
            result531 = $tmp532;
            if (((panda$core$Bit) { label525 != NULL }).value) {
            {
                panda$core$String* $tmp534 = panda$core$String$convert$R$panda$core$String(label525);
                panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp534, &$s535);
                panda$core$MutableString$append$panda$core$String(result531, $tmp536);
            }
            }
            panda$core$MutableString$append$panda$core$String(result531, &$s537);
            {
                ITable* $tmp539 = ((panda$collections$Iterable*) statements527)->$class->itable;
                while ($tmp539->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp539 = $tmp539->next;
                }
                $fn541 $tmp540 = $tmp539->methods[0];
                panda$collections$Iterator* $tmp542 = $tmp540(((panda$collections$Iterable*) statements527));
                s$Iter538 = $tmp542;
                $l543:;
                ITable* $tmp545 = s$Iter538->$class->itable;
                while ($tmp545->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp545 = $tmp545->next;
                }
                $fn547 $tmp546 = $tmp545->methods[0];
                panda$core$Bit $tmp548 = $tmp546(s$Iter538);
                panda$core$Bit $tmp549 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp548);
                if (!$tmp549.value) goto $l544;
                {
                    ITable* $tmp551 = s$Iter538->$class->itable;
                    while ($tmp551->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp551 = $tmp551->next;
                    }
                    $fn553 $tmp552 = $tmp551->methods[1];
                    panda$core$Object* $tmp554 = $tmp552(s$Iter538);
                    s550 = ((org$pandalanguage$pandac$IRNode*) $tmp554);
                    panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s550), &$s555);
                    panda$core$MutableString$append$panda$core$String(result531, $tmp556);
                }
                goto $l543;
                $l544:;
            }
            panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s557, ((panda$core$Object*) test529));
            panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp558, &$s559);
            panda$core$MutableString$append$panda$core$String(result531, $tmp560);
            panda$core$String* $tmp561 = panda$core$MutableString$finish$R$panda$core$String(result531);
            return $tmp561;
        }
        }
        else {
        panda$core$Bit $tmp562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp562.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp564 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 24));
            base563 = *$tmp564;
            org$pandalanguage$pandac$FieldDecl** $tmp566 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$227_9361->$data + 32));
            field565 = *$tmp566;
            panda$core$String* $tmp568 = (($fn567) base563->$class->vtable[0])(base563);
            panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, &$s569);
            panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp570, ((org$pandalanguage$pandac$Symbol*) field565)->name);
            panda$core$String* $tmp573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp571, &$s572);
            return $tmp573;
        }
        }
        else {
        panda$core$Bit $tmp574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp574.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp576 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 16));
            test575 = *$tmp576;
            panda$collections$ImmutableArray** $tmp578 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 24));
            ifTrue577 = *$tmp578;
            org$pandalanguage$pandac$IRNode** $tmp580 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 32));
            ifFalse579 = *$tmp580;
            panda$core$MutableString* $tmp582 = (panda$core$MutableString*) malloc(48);
            $tmp582->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp582->refCount.value = 1;
            panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s584, ((panda$core$Object*) test575));
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, &$s586);
            panda$core$MutableString$init$panda$core$String($tmp582, $tmp587);
            result581 = $tmp582;
            {
                ITable* $tmp589 = ((panda$collections$Iterable*) ifTrue577)->$class->itable;
                while ($tmp589->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp589 = $tmp589->next;
                }
                $fn591 $tmp590 = $tmp589->methods[0];
                panda$collections$Iterator* $tmp592 = $tmp590(((panda$collections$Iterable*) ifTrue577));
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
                    s600 = ((org$pandalanguage$pandac$IRNode*) $tmp604);
                    panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s600), &$s605);
                    panda$core$MutableString$append$panda$core$String(result581, $tmp606);
                }
                goto $l593;
                $l594:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp607, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result581, $tmp607);
            if (((panda$core$Bit) { ifFalse579 != NULL }).value) {
            {
                panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s608, ((panda$core$Object*) ifFalse579));
                panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp609, &$s610);
                panda$core$MutableString$append$panda$core$String(result581, $tmp611);
            }
            }
            panda$core$String* $tmp612 = panda$core$MutableString$finish$R$panda$core$String(result581);
            return $tmp612;
        }
        }
        else {
        panda$core$Bit $tmp613 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp613.value) {
        {
            panda$core$UInt64* $tmp615 = ((panda$core$UInt64*) ((char*) $match$227_9361->$data + 24));
            value614 = *$tmp615;
            panda$core$String* $tmp616 = panda$core$UInt64$convert$R$panda$core$String(value614);
            return $tmp616;
        }
        }
        else {
        panda$core$Bit $tmp617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp617.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp619 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 16));
            value618 = *$tmp619;
            panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s620, ((panda$core$Object*) value618));
            panda$core$String* $tmp623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp621, &$s622);
            return $tmp623;
        }
        }
        else {
        panda$core$Bit $tmp624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp624.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp626 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 16));
            value625 = *$tmp626;
            panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s627, ((panda$core$Object*) value625));
            panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp628, &$s629);
            return $tmp630;
        }
        }
        else {
        panda$core$Bit $tmp631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp631.value) {
        {
            panda$core$String** $tmp633 = ((panda$core$String**) ((char*) $match$227_9361->$data + 16));
            label632 = *$tmp633;
            panda$collections$ImmutableArray** $tmp635 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 24));
            statements634 = *$tmp635;
            panda$core$MutableString* $tmp637 = (panda$core$MutableString*) malloc(48);
            $tmp637->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp637->refCount.value = 1;
            panda$core$MutableString$init($tmp637);
            result636 = $tmp637;
            if (((panda$core$Bit) { label632 != NULL }).value) {
            {
                panda$core$String* $tmp639 = panda$core$String$convert$R$panda$core$String(label632);
                panda$core$String* $tmp641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp639, &$s640);
                panda$core$MutableString$append$panda$core$String(result636, $tmp641);
            }
            }
            panda$core$MutableString$append$panda$core$String(result636, &$s642);
            {
                ITable* $tmp644 = ((panda$collections$Iterable*) statements634)->$class->itable;
                while ($tmp644->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp644 = $tmp644->next;
                }
                $fn646 $tmp645 = $tmp644->methods[0];
                panda$collections$Iterator* $tmp647 = $tmp645(((panda$collections$Iterable*) statements634));
                s$Iter643 = $tmp647;
                $l648:;
                ITable* $tmp650 = s$Iter643->$class->itable;
                while ($tmp650->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp650 = $tmp650->next;
                }
                $fn652 $tmp651 = $tmp650->methods[0];
                panda$core$Bit $tmp653 = $tmp651(s$Iter643);
                panda$core$Bit $tmp654 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp653);
                if (!$tmp654.value) goto $l649;
                {
                    ITable* $tmp656 = s$Iter643->$class->itable;
                    while ($tmp656->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp656 = $tmp656->next;
                    }
                    $fn658 $tmp657 = $tmp656->methods[1];
                    panda$core$Object* $tmp659 = $tmp657(s$Iter643);
                    s655 = ((org$pandalanguage$pandac$IRNode*) $tmp659);
                    panda$core$String* $tmp661 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s655), &$s660);
                    panda$core$MutableString$append$panda$core$String(result636, $tmp661);
                }
                goto $l648;
                $l649:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp662, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result636, $tmp662);
            panda$core$String* $tmp663 = panda$core$MutableString$finish$R$panda$core$String(result636);
            return $tmp663;
        }
        }
        else {
        panda$core$Bit $tmp664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp664.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp666 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 16));
            value665 = *$tmp666;
            panda$collections$ImmutableArray** $tmp668 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 24));
            whens667 = *$tmp668;
            panda$collections$ImmutableArray** $tmp670 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 32));
            other669 = *$tmp670;
            panda$core$MutableString* $tmp672 = (panda$core$MutableString*) malloc(48);
            $tmp672->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp672->refCount.value = 1;
            panda$core$String* $tmp675 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s674, ((panda$core$Object*) value665));
            panda$core$String* $tmp677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp675, &$s676);
            panda$core$MutableString$init$panda$core$String($tmp672, $tmp677);
            result671 = $tmp672;
            {
                ITable* $tmp679 = ((panda$collections$Iterable*) whens667)->$class->itable;
                while ($tmp679->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp679 = $tmp679->next;
                }
                $fn681 $tmp680 = $tmp679->methods[0];
                panda$collections$Iterator* $tmp682 = $tmp680(((panda$collections$Iterable*) whens667));
                w$Iter678 = $tmp682;
                $l683:;
                ITable* $tmp685 = w$Iter678->$class->itable;
                while ($tmp685->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp685 = $tmp685->next;
                }
                $fn687 $tmp686 = $tmp685->methods[0];
                panda$core$Bit $tmp688 = $tmp686(w$Iter678);
                panda$core$Bit $tmp689 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp688);
                if (!$tmp689.value) goto $l684;
                {
                    ITable* $tmp691 = w$Iter678->$class->itable;
                    while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp691 = $tmp691->next;
                    }
                    $fn693 $tmp692 = $tmp691->methods[1];
                    panda$core$Object* $tmp694 = $tmp692(w$Iter678);
                    w690 = ((org$pandalanguage$pandac$IRNode*) $tmp694);
                    panda$core$String* $tmp696 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w690), &$s695);
                    panda$core$MutableString$append$panda$core$String(result671, $tmp696);
                }
                goto $l683;
                $l684:;
            }
            if (((panda$core$Bit) { other669 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result671, &$s697);
                {
                    ITable* $tmp699 = ((panda$collections$Iterable*) other669)->$class->itable;
                    while ($tmp699->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp699 = $tmp699->next;
                    }
                    $fn701 $tmp700 = $tmp699->methods[0];
                    panda$collections$Iterator* $tmp702 = $tmp700(((panda$collections$Iterable*) other669));
                    s$Iter698 = $tmp702;
                    $l703:;
                    ITable* $tmp705 = s$Iter698->$class->itable;
                    while ($tmp705->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp705 = $tmp705->next;
                    }
                    $fn707 $tmp706 = $tmp705->methods[0];
                    panda$core$Bit $tmp708 = $tmp706(s$Iter698);
                    panda$core$Bit $tmp709 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp708);
                    if (!$tmp709.value) goto $l704;
                    {
                        ITable* $tmp711 = s$Iter698->$class->itable;
                        while ($tmp711->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp711 = $tmp711->next;
                        }
                        $fn713 $tmp712 = $tmp711->methods[1];
                        panda$core$Object* $tmp714 = $tmp712(s$Iter698);
                        s710 = ((org$pandalanguage$pandac$IRNode*) $tmp714);
                        panda$core$String* $tmp716 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s710), &$s715);
                        panda$core$MutableString$append$panda$core$String(result671, $tmp716);
                    }
                    goto $l703;
                    $l704:;
                }
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp717, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result671, $tmp717);
            panda$core$String* $tmp718 = panda$core$MutableString$finish$R$panda$core$String(result671);
            return $tmp718;
        }
        }
        else {
        panda$core$Bit $tmp719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp719.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp721 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 16));
            target720 = *$tmp721;
            org$pandalanguage$pandac$MethodRef** $tmp723 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$227_9361->$data + 24));
            m722 = *$tmp723;
            panda$core$String* $tmp725 = (($fn724) target720->$class->vtable[0])(target720);
            panda$core$String* $tmp727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp725, &$s726);
            panda$core$String* $tmp728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp727, ((org$pandalanguage$pandac$Symbol*) m722->value)->name);
            panda$core$String* $tmp730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp728, &$s729);
            return $tmp730;
        }
        }
        else {
        panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp731.value) {
        {
            panda$core$UInt64* $tmp733 = ((panda$core$UInt64*) ((char*) $match$227_9361->$data + 24));
            value732 = *$tmp733;
            panda$core$UInt64$wrapper* $tmp735;
            $tmp735 = (panda$core$UInt64$wrapper*) malloc(24);
            $tmp735->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
            $tmp735->refCount = 1;
            $tmp735->value = value732;
            panda$core$String* $tmp736 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s734, ((panda$core$Object*) $tmp735));
            return $tmp736;
        }
        }
        else {
        panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp737.value) {
        {
            return &$s738;
        }
        }
        else {
        panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp739.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp741 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$227_9361->$data + 16));
            op740 = *$tmp741;
            org$pandalanguage$pandac$IRNode** $tmp743 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 24));
            base742 = *$tmp743;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp744;
            $tmp744 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) malloc(24);
            $tmp744->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass;
            $tmp744->refCount = 1;
            $tmp744->value = op740;
            panda$core$String* $tmp746 = (($fn745) ((panda$core$Object*) $tmp744)->$class->vtable[0])(((panda$core$Object*) $tmp744));
            panda$core$String* $tmp748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp746, &$s747);
            panda$core$String* $tmp749 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp748, ((panda$core$Object*) base742));
            panda$core$String* $tmp751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp749, &$s750);
            return $tmp751;
        }
        }
        else {
        panda$core$Bit $tmp752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp752.value) {
        {
            panda$core$String** $tmp754 = ((panda$core$String**) ((char*) $match$227_9361->$data + 16));
            label753 = *$tmp754;
            org$pandalanguage$pandac$IRNode** $tmp756 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 24));
            target755 = *$tmp756;
            org$pandalanguage$pandac$IRNode** $tmp758 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 32));
            list757 = *$tmp758;
            panda$collections$ImmutableArray** $tmp760 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 40));
            statements759 = *$tmp760;
            panda$core$MutableString* $tmp762 = (panda$core$MutableString*) malloc(48);
            $tmp762->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp762->refCount.value = 1;
            panda$core$MutableString$init($tmp762);
            result761 = $tmp762;
            if (((panda$core$Bit) { label753 != NULL }).value) {
            {
                panda$core$String* $tmp764 = panda$core$String$convert$R$panda$core$String(label753);
                panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp764, &$s765);
                panda$core$MutableString$append$panda$core$String(result761, $tmp766);
            }
            }
            panda$core$String* $tmp768 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s767, ((panda$core$Object*) target755));
            panda$core$String* $tmp770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp768, &$s769);
            panda$core$String* $tmp771 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp770, ((panda$core$Object*) list757));
            panda$core$String* $tmp773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp771, &$s772);
            panda$core$MutableString$append$panda$core$String(result761, $tmp773);
            {
                ITable* $tmp775 = ((panda$collections$Iterable*) statements759)->$class->itable;
                while ($tmp775->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp775 = $tmp775->next;
                }
                $fn777 $tmp776 = $tmp775->methods[0];
                panda$collections$Iterator* $tmp778 = $tmp776(((panda$collections$Iterable*) statements759));
                s$Iter774 = $tmp778;
                $l779:;
                ITable* $tmp781 = s$Iter774->$class->itable;
                while ($tmp781->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp781 = $tmp781->next;
                }
                $fn783 $tmp782 = $tmp781->methods[0];
                panda$core$Bit $tmp784 = $tmp782(s$Iter774);
                panda$core$Bit $tmp785 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp784);
                if (!$tmp785.value) goto $l780;
                {
                    ITable* $tmp787 = s$Iter774->$class->itable;
                    while ($tmp787->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp787 = $tmp787->next;
                    }
                    $fn789 $tmp788 = $tmp787->methods[1];
                    panda$core$Object* $tmp790 = $tmp788(s$Iter774);
                    s786 = ((org$pandalanguage$pandac$IRNode*) $tmp790);
                    panda$core$String* $tmp792 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s786), &$s791);
                    panda$core$MutableString$append$panda$core$String(result761, $tmp792);
                }
                goto $l779;
                $l780:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp793, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result761, $tmp793);
            panda$core$String* $tmp794 = panda$core$MutableString$finish$R$panda$core$String(result761);
            return $tmp794;
        }
        }
        else {
        panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp795.value) {
        {
            panda$core$Real64* $tmp797 = ((panda$core$Real64*) ((char*) $match$227_9361->$data + 24));
            value796 = *$tmp797;
            panda$core$String* $tmp798 = panda$core$Real64$convert$R$panda$core$String(value796);
            return $tmp798;
        }
        }
        else {
        panda$core$Bit $tmp799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp799.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp801 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 16));
            value800 = *$tmp801;
            if (((panda$core$Bit) { value800 != NULL }).value) {
            {
                panda$core$String* $tmp803 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s802, ((panda$core$Object*) value800));
                panda$core$String* $tmp805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp803, &$s804);
                return $tmp805;
            }
            }
            return &$s806;
        }
        }
        else {
        panda$core$Bit $tmp807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp807.value) {
        {
            panda$core$Int64* $tmp809 = ((panda$core$Int64*) ((char*) $match$227_9361->$data + 24));
            id808 = *$tmp809;
            panda$core$Int64$wrapper* $tmp811;
            $tmp811 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp811->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp811->refCount = 1;
            $tmp811->value = id808;
            panda$core$String* $tmp812 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s810, ((panda$core$Object*) $tmp811));
            panda$core$String* $tmp814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp812, &$s813);
            return $tmp814;
        }
        }
        else {
        panda$core$Bit $tmp815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp815.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp817 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 0));
            base816 = *$tmp817;
            panda$core$Int64* $tmp819 = ((panda$core$Int64*) ((char*) $match$227_9361->$data + 8));
            id818 = *$tmp819;
            panda$core$Int64$wrapper* $tmp821;
            $tmp821 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp821->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp821->refCount = 1;
            $tmp821->value = id818;
            panda$core$String* $tmp822 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s820, ((panda$core$Object*) $tmp821));
            panda$core$String* $tmp824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp822, &$s823);
            panda$core$String* $tmp825 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp824, ((panda$core$Object*) base816));
            panda$core$String* $tmp827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp825, &$s826);
            return $tmp827;
        }
        }
        else {
        panda$core$Bit $tmp828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp828.value) {
        {
            return &$s829;
        }
        }
        else {
        panda$core$Bit $tmp830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp830.value) {
        {
            panda$core$String** $tmp832 = ((panda$core$String**) ((char*) $match$227_9361->$data + 16));
            str831 = *$tmp832;
            return str831;
        }
        }
        else {
        panda$core$Bit $tmp833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp833.value) {
        {
            return &$s834;
        }
        }
        else {
        panda$core$Bit $tmp835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp835.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp837 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 16));
            test836 = *$tmp837;
            org$pandalanguage$pandac$IRNode** $tmp839 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 24));
            ifTrue838 = *$tmp839;
            org$pandalanguage$pandac$IRNode** $tmp841 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 32));
            ifFalse840 = *$tmp841;
            panda$core$String* $tmp843 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s842, ((panda$core$Object*) test836));
            panda$core$String* $tmp845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp843, &$s844);
            panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp845, ((panda$core$Object*) ifTrue838));
            panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp846, &$s847);
            panda$core$String* $tmp849 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp848, ((panda$core$Object*) ifFalse840));
            panda$core$String* $tmp851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp849, &$s850);
            return $tmp851;
        }
        }
        else {
        panda$core$Bit $tmp852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp852.value) {
        {
            org$pandalanguage$pandac$Type** $tmp854 = ((org$pandalanguage$pandac$Type**) ((char*) $match$227_9361->$data + 16));
            type853 = *$tmp854;
            panda$core$String* $tmp855 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type853);
            return $tmp855;
        }
        }
        else {
        panda$core$Bit $tmp856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp856.value) {
        {
            panda$core$String** $tmp858 = ((panda$core$String**) ((char*) $match$227_9361->$data + 16));
            name857 = *$tmp858;
            return name857;
        }
        }
        else {
        panda$core$Bit $tmp859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp859.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp861 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 24));
            base860 = *$tmp861;
            panda$collections$ImmutableArray** $tmp863 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 32));
            args862 = *$tmp863;
            panda$core$String* $tmp865 = (($fn864) base860->$class->vtable[0])(base860);
            panda$core$String* $tmp867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp865, &$s866);
            panda$core$String* $tmp868 = panda$collections$ImmutableArray$join$R$panda$core$String(args862);
            panda$core$String* $tmp869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp867, $tmp868);
            panda$core$String* $tmp871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp869, &$s870);
            return $tmp871;
        }
        }
        else {
        panda$core$Bit $tmp872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp872.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp874 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 24));
            target873 = *$tmp874;
            panda$collections$ImmutableArray** $tmp876 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 32));
            methods875 = *$tmp876;
            panda$collections$ImmutableArray** $tmp878 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 40));
            args877 = *$tmp878;
            panda$core$String* $tmp880 = (($fn879) target873->$class->vtable[0])(target873);
            panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp880, &$s881);
            panda$core$Object* $tmp883 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods875, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp882, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp883)->value)->name);
            panda$core$String* $tmp886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp884, &$s885);
            panda$core$String* $tmp887 = panda$collections$ImmutableArray$join$R$panda$core$String(args877);
            panda$core$String* $tmp888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp886, $tmp887);
            panda$core$String* $tmp890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp888, &$s889);
            return $tmp890;
        }
        }
        else {
        panda$core$Bit $tmp891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp891.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp893 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 16));
            target892 = *$tmp893;
            panda$collections$ImmutableArray** $tmp895 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 24));
            methods894 = *$tmp895;
            panda$core$String* $tmp897 = (($fn896) target892->$class->vtable[0])(target892);
            panda$core$String* $tmp899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp897, &$s898);
            panda$core$Object* $tmp900 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods894, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp899, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp900)->value)->name);
            panda$core$String* $tmp903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp901, &$s902);
            return $tmp903;
        }
        }
        else {
        panda$core$Bit $tmp904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp904.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp906 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 16));
            start905 = *$tmp906;
            org$pandalanguage$pandac$IRNode** $tmp908 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 24));
            end907 = *$tmp908;
            panda$core$Bit* $tmp910 = ((panda$core$Bit*) ((char*) $match$227_9361->$data + 32));
            inclusive909 = *$tmp910;
            org$pandalanguage$pandac$IRNode** $tmp912 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 33));
            step911 = *$tmp912;
            panda$core$MutableString* $tmp914 = (panda$core$MutableString*) malloc(48);
            $tmp914->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp914->refCount.value = 1;
            panda$core$MutableString$init($tmp914);
            result913 = $tmp914;
            if (((panda$core$Bit) { start905 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result913, ((panda$core$Object*) start905));
            }
            }
            if (inclusive909.value) {
            {
                panda$core$MutableString$append$panda$core$String(result913, &$s916);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result913, &$s917);
            }
            }
            if (((panda$core$Bit) { end907 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result913, ((panda$core$Object*) end907));
            }
            }
            if (((panda$core$Bit) { step911 != NULL }).value) {
            {
                panda$core$String* $tmp919 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s918, ((panda$core$Object*) step911));
                panda$core$String* $tmp921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp919, &$s920);
                panda$core$MutableString$append$panda$core$String(result913, $tmp921);
            }
            }
            panda$core$String* $tmp922 = panda$core$MutableString$finish$R$panda$core$String(result913);
            return $tmp922;
        }
        }
        else {
        panda$core$Bit $tmp923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp923.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp925 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$227_9361->$data + 16));
            kind924 = *$tmp925;
            panda$collections$ImmutableArray** $tmp927 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 24));
            decls926 = *$tmp927;
            panda$core$MutableString* $tmp929 = (panda$core$MutableString*) malloc(48);
            $tmp929->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp929->refCount.value = 1;
            panda$core$MutableString$init($tmp929);
            result928 = $tmp929;
            {
                $match$397_17931 = kind924;
                panda$core$Bit $tmp932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$397_17931.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp932.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result928, &$s933);
                }
                }
                else {
                panda$core$Bit $tmp934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$397_17931.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp934.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result928, &$s935);
                }
                }
                else {
                panda$core$Bit $tmp936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$397_17931.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp936.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result928, &$s937);
                }
                }
                else {
                panda$core$Bit $tmp938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$397_17931.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp938.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result928, &$s939);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp940 = panda$collections$ImmutableArray$join$R$panda$core$String(decls926);
            panda$core$MutableString$append$panda$core$String(result928, $tmp940);
            panda$core$String* $tmp941 = panda$core$MutableString$finish$R$panda$core$String(result928);
            return $tmp941;
        }
        }
        else {
        panda$core$Bit $tmp942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp942.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp944 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$227_9361->$data + 16));
            variable943 = *$tmp944;
            return ((org$pandalanguage$pandac$Symbol*) variable943)->name;
        }
        }
        else {
        panda$core$Bit $tmp945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp945.value) {
        {
            panda$collections$ImmutableArray** $tmp947 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 16));
            tests946 = *$tmp947;
            panda$collections$ImmutableArray** $tmp949 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 24));
            statements948 = *$tmp949;
            panda$core$String* $tmp951 = panda$collections$ImmutableArray$join$R$panda$core$String(tests946);
            panda$core$String* $tmp952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s950, $tmp951);
            panda$core$String* $tmp954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp952, &$s953);
            panda$core$String* $tmp956 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(statements948, &$s955);
            panda$core$String* $tmp957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp954, $tmp956);
            panda$core$String* $tmp959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp957, &$s958);
            return $tmp959;
        }
        }
        else {
        panda$core$Bit $tmp960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$227_9361->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp960.value) {
        {
            panda$core$String** $tmp962 = ((panda$core$String**) ((char*) $match$227_9361->$data + 16));
            label961 = *$tmp962;
            org$pandalanguage$pandac$IRNode** $tmp964 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$227_9361->$data + 24));
            test963 = *$tmp964;
            panda$collections$ImmutableArray** $tmp966 = ((panda$collections$ImmutableArray**) ((char*) $match$227_9361->$data + 32));
            statements965 = *$tmp966;
            panda$core$MutableString* $tmp968 = (panda$core$MutableString*) malloc(48);
            $tmp968->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp968->refCount.value = 1;
            panda$core$MutableString$init($tmp968);
            result967 = $tmp968;
            if (((panda$core$Bit) { label961 != NULL }).value) {
            {
                panda$core$String* $tmp970 = panda$core$String$convert$R$panda$core$String(label961);
                panda$core$String* $tmp972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp970, &$s971);
                panda$core$MutableString$append$panda$core$String(result967, $tmp972);
            }
            }
            panda$core$String* $tmp974 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s973, ((panda$core$Object*) test963));
            panda$core$String* $tmp976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp974, &$s975);
            panda$core$MutableString$append$panda$core$String(result967, $tmp976);
            {
                ITable* $tmp978 = ((panda$collections$Iterable*) statements965)->$class->itable;
                while ($tmp978->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp978 = $tmp978->next;
                }
                $fn980 $tmp979 = $tmp978->methods[0];
                panda$collections$Iterator* $tmp981 = $tmp979(((panda$collections$Iterable*) statements965));
                s$Iter977 = $tmp981;
                $l982:;
                ITable* $tmp984 = s$Iter977->$class->itable;
                while ($tmp984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp984 = $tmp984->next;
                }
                $fn986 $tmp985 = $tmp984->methods[0];
                panda$core$Bit $tmp987 = $tmp985(s$Iter977);
                panda$core$Bit $tmp988 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp987);
                if (!$tmp988.value) goto $l983;
                {
                    ITable* $tmp990 = s$Iter977->$class->itable;
                    while ($tmp990->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp990 = $tmp990->next;
                    }
                    $fn992 $tmp991 = $tmp990->methods[1];
                    panda$core$Object* $tmp993 = $tmp991(s$Iter977);
                    s989 = ((org$pandalanguage$pandac$IRNode*) $tmp993);
                    panda$core$String* $tmp995 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s989), &$s994);
                    panda$core$MutableString$append$panda$core$String(result967, $tmp995);
                }
                goto $l982;
                $l983:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp996, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result967, $tmp996);
            panda$core$String* $tmp997 = panda$core$MutableString$finish$R$panda$core$String(result967);
            return $tmp997;
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
    }
}

