#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
#include "panda/core/Bit.h"
#include "panda/collections/ListView.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/io/Console.h"


org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$core$String* (*$fn61)(panda$core$Object*);
typedef panda$core$String* (*$fn63)(panda$core$Object*);
typedef panda$core$String* (*$fn66)(panda$core$Object*);
typedef panda$core$String* (*$fn151)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn256)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn262)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn268)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn288)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn306)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn312)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn318)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn331)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn337)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn343)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn347)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn355)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn361)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn367)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn392)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn398)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn404)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn417)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn423)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn429)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn442)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn448)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn454)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn467)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn473)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn479)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn499)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn516)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn522)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn528)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn590)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn596)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn602)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn639)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn645)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn651)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn702)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn708)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn714)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 14995, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B\x3D", 2, 14605, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x3D", 2, 14100, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x3D", 2, 15009, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F\x3D", 3, 1514556, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x3D", 2, 14504, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3D", 2, 14807, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 16120, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 162, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6F\x70\x65\x72\x61\x74\x6F\x72\x3A", 10, -7170024553821458165, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 194, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x63\x6B\x61\x67\x65\x20", 8, 22940502189900249, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x73\x65\x73\x20", 5, 22804693981, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2E", 3, 1504239, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E", 2, 14893, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x6C\x73\x65\x20", 6, 1408465922990, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x72\x20", 4, 210294960, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20", 4, 138112280, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6F\x20", 3, 2061644, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x68\x69\x6C\x65\x20", 7, 142443813564802, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x6F\x6F\x70\x20", 5, 21864130875, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x20", 6, 2103477946150, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B", 5, 20826514318, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 229300545255605, NULL };
static panda$core$String $s246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E", 6, 2270302428273, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 22634, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 164, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x3D\x20", 4, 137627884, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6F\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 213374837, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 22634, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20", 3, 1362623, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 13473, NULL };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 223586327, NULL };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 14808, NULL };
static panda$core$String $s728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x41\x53\x54\x4E\x6F\x64\x65\x3A", 9, 1750457173102951541, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };

panda$core$String* org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    switch (p_op.value) {
        case 51:
        {
            return &$s1;
        }
        break;
        case 66:
        {
            return &$s2;
        }
        break;
        case 54:
        {
            return &$s3;
        }
        break;
        case 55:
        {
            return &$s4;
        }
        break;
        case 53:
        {
            return &$s5;
        }
        break;
        case 52:
        {
            return &$s6;
        }
        break;
        case 74:
        {
            return &$s7;
        }
        break;
        case 83:
        {
            return &$s8;
        }
        break;
        case 77:
        {
            return &$s9;
        }
        break;
        case 79:
        {
            return &$s10;
        }
        break;
        case 76:
        {
            return &$s11;
        }
        break;
        case 75:
        {
            return &$s12;
        }
        break;
        case 68:
        {
            return &$s13;
        }
        break;
        case 73:
        {
            return &$s14;
        }
        break;
        case 58:
        {
            return &$s15;
        }
        break;
        case 59:
        {
            return &$s16;
        }
        break;
        case 63:
        {
            return &$s17;
        }
        break;
        case 65:
        {
            return &$s18;
        }
        break;
        case 62:
        {
            return &$s19;
        }
        break;
        case 64:
        {
            return &$s20;
        }
        break;
        default:
        {
            panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s21, ((panda$core$Object*) wrap_panda$core$Int64(p_op)));
            panda$core$String* $tmp24 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp22, &$s23);
            return $tmp24;
        }
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, NULL, NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$UInt64 p_payload) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) wrap_panda$core$UInt64(p_payload)), NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Real64 p_payload) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) wrap_panda$core$Real64(p_payload)), NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$String* p_payload) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) p_payload), NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Bit p_payload) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, ((panda$core$Object*) wrap_panda$core$Bit(p_payload)), NULL);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(self, p_kind, p_position, NULL, p_children);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$Object* p_payload, panda$collections$ListView* p_children) {
    self->kind = p_kind;
    self->position = p_position;
    self->payload = p_payload;
    if (((panda$core$Bit) { p_children != NULL }).value) {
    {
        panda$collections$ImmutableArray* $tmp25 = (panda$collections$ImmutableArray*) malloc(32);
        $tmp25->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
        $tmp25->refCount.value = 1;
        panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp25, p_children);
        self->children = $tmp25;
    }
    }
    else {
    {
        self->children = NULL;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    panda$core$MutableString* result81;
    panda$core$MutableString* result95;
    panda$core$MutableString* result112;
    panda$core$Char8 $tmp117;
    panda$core$String* separator118;
    panda$core$Range$LTpanda$core$Int64$GT $tmp120;
    panda$core$Char8 $tmp143;
    panda$core$String* result169;
    panda$core$MutableString* result249;
    panda$collections$Iterator* child$Iter253;
    org$pandalanguage$pandac$ASTNode* child265;
    panda$core$String* c270;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp279;
    panda$core$Char8 $tmp285;
    panda$core$Char8 $tmp286;
    panda$core$MutableString* result293;
    panda$core$Char8 $tmp298;
    panda$core$String* separator299;
    panda$collections$Iterator* c$Iter301;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp302;
    org$pandalanguage$pandac$ASTNode* c315;
    panda$core$Char8 $tmp321;
    panda$core$MutableString* result323;
    panda$core$String* separator326;
    panda$collections$Iterator* c$Iter328;
    org$pandalanguage$pandac$ASTNode* c340;
    panda$core$MutableString* result349;
    panda$collections$Iterator* c$Iter352;
    org$pandalanguage$pandac$ASTNode* c364;
    panda$core$Char8 $tmp369;
    panda$core$MutableString* result383;
    panda$core$String* separator387;
    panda$collections$Iterator* c$Iter389;
    org$pandalanguage$pandac$ASTNode* c401;
    panda$core$MutableString* result408;
    panda$core$String* separator412;
    panda$collections$Iterator* c$Iter414;
    org$pandalanguage$pandac$ASTNode* c426;
    panda$core$MutableString* result433;
    panda$core$String* separator437;
    panda$collections$Iterator* c$Iter439;
    org$pandalanguage$pandac$ASTNode* c451;
    panda$core$MutableString* result458;
    panda$core$String* separator462;
    panda$collections$Iterator* c$Iter464;
    org$pandalanguage$pandac$ASTNode* c476;
    panda$core$MutableString* result507;
    panda$core$String* separator511;
    panda$collections$Iterator* c$Iter513;
    org$pandalanguage$pandac$ASTNode* c525;
    panda$core$Char8 $tmp531;
    panda$collections$Iterator* c$Iter587;
    org$pandalanguage$pandac$ASTNode* c599;
    panda$core$MutableString* result632;
    panda$collections$Iterator* c$Iter636;
    org$pandalanguage$pandac$ASTNode* c648;
    panda$core$Char8 $tmp653;
    panda$core$Char8 $tmp654;
    panda$core$MutableString* result658;
    panda$core$Char8 $tmp676;
    panda$core$Char8 $tmp677;
    panda$core$MutableString* result682;
    panda$core$Char8 $tmp692;
    panda$core$MutableString* result696;
    panda$collections$Iterator* c$Iter699;
    org$pandalanguage$pandac$ASTNode* c711;
    panda$core$Char8 $tmp716;
    switch (self->kind.value) {
        case 112:
        {
            panda$core$Int64 $tmp27 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp27, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp28.value);
            panda$core$String* $tmp29 = org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp30 = panda$core$String$convert$R$panda$core$String($tmp29);
            panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp30, &$s31);
            panda$core$Object* $tmp33 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp32, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp33)));
            panda$core$String* $tmp36 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp34, &$s35);
            return $tmp36;
        }
        break;
        case 103:
        {
            panda$core$Int64 $tmp37 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp37, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp38.value);
            panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64$wrapper*) self->payload)->value, ((panda$core$Int64) { 101 }));
            if ($tmp39.value) {
            {
                panda$core$Object* $tmp40 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp41 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp40));
                panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp41, &$s42);
                panda$core$Object* $tmp44 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp45 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp43, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp44)));
                panda$core$String* $tmp47 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp45, &$s46);
                return $tmp47;
            }
            }
            panda$core$Object* $tmp49 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s48, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp49)));
            panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, &$s51);
            panda$core$String* $tmp53 = org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp52, $tmp53);
            panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp54, &$s55);
            panda$core$Object* $tmp57 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp58 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp56, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp57)));
            panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp58, &$s59);
            return $tmp60;
        }
        break;
        case 102:
        {
            panda$core$String* $tmp62 = (($fn61) self->payload->$class->vtable[0])(self->payload);
            return $tmp62;
        }
        break;
        case 116:
        {
            panda$core$String* $tmp64 = (($fn63) self->payload->$class->vtable[0])(self->payload);
            return $tmp64;
        }
        break;
        case 113:
        {
            panda$core$String* $tmp67 = (($fn66) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp68 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s65, $tmp67);
            panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp68, &$s69);
            return $tmp70;
        }
        break;
        case 100:
        {
            panda$core$String* $tmp72 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s71, self->payload);
            panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp72, &$s73);
            return $tmp74;
        }
        break;
        case 101:
        {
            panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s75, self->payload);
            panda$core$String* $tmp78 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp76, &$s77);
            return $tmp78;
        }
        break;
        case 104:
        {
            panda$core$Int64 $tmp79 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp80 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp79, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp80.value);
            panda$core$MutableString* $tmp82 = (panda$core$MutableString*) malloc(48);
            $tmp82->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp82->refCount.value = 1;
            panda$core$MutableString$init($tmp82);
            result81 = $tmp82;
            panda$core$Object* $tmp84 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp84) != NULL }).value) {
            {
                panda$core$Object* $tmp85 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result81, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp85)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result81, &$s86);
            panda$core$Object* $tmp87 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp87) != NULL }).value) {
            {
                panda$core$Object* $tmp88 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result81, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp88)));
            }
            }
            panda$core$Object* $tmp89 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp89) != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result81, &$s90);
                panda$core$Object* $tmp91 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result81, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp91)));
            }
            }
            panda$core$String* $tmp92 = panda$core$MutableString$finish$R$panda$core$String(result81);
            return $tmp92;
        }
        break;
        case 105:
        {
            panda$core$Int64 $tmp93 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp94 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp93, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp94.value);
            panda$core$MutableString* $tmp96 = (panda$core$MutableString*) malloc(48);
            $tmp96->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp96->refCount.value = 1;
            panda$core$MutableString$init($tmp96);
            result95 = $tmp96;
            panda$core$Object* $tmp98 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp99 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp98)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp99.value) {
            {
                panda$core$Object* $tmp100 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$MutableString$append$panda$core$Object(result95, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp100)));
            }
            }
            panda$core$MutableString$append$panda$core$String(result95, &$s101);
            panda$core$Object* $tmp102 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp103 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp102)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp103.value) {
            {
                panda$core$Object* $tmp104 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
                panda$core$MutableString$append$panda$core$Object(result95, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp104)));
            }
            }
            panda$core$Object* $tmp105 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp106 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp105)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp106.value) {
            {
                panda$core$MutableString$append$panda$core$String(result95, &$s107);
                panda$core$Object* $tmp108 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$MutableString$append$panda$core$Object(result95, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp108)));
            }
            }
            panda$core$String* $tmp109 = panda$core$MutableString$finish$R$panda$core$String(result95);
            return $tmp109;
        }
        break;
        case 107:
        {
            panda$core$Int64 $tmp110 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp111 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp110, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp111.value);
            panda$core$MutableString* $tmp113 = (panda$core$MutableString*) malloc(48);
            $tmp113->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp113->refCount.value = 1;
            panda$core$Object* $tmp115 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp116 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp115));
            panda$core$MutableString$init$panda$core$String($tmp113, $tmp116);
            result112 = $tmp113;
            panda$core$Char8$init$panda$core$UInt8(&$tmp117, ((panda$core$UInt8) { 40 }));
            panda$core$MutableString$append$panda$core$Char8(result112, $tmp117);
            separator118 = &$s119;
            panda$core$Int64 $tmp121 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp120, ((panda$core$Int64) { 1 }), $tmp121, ((panda$core$Bit) { false }));
            int64_t $tmp123 = $tmp120.min.value;
            panda$core$Int64 i122 = { $tmp123 };
            int64_t $tmp125 = $tmp120.max.value;
            bool $tmp126 = $tmp120.inclusive.value;
            if ($tmp126) goto $l133; else goto $l134;
            $l133:;
            if ($tmp123 <= $tmp125) goto $l127; else goto $l129;
            $l134:;
            if ($tmp123 < $tmp125) goto $l127; else goto $l129;
            $l127:;
            {
                panda$core$MutableString$append$panda$core$String(result112, separator118);
                panda$core$Object* $tmp135 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, i122);
                panda$core$MutableString$append$panda$core$Object(result112, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp135)));
                separator118 = &$s136;
            }
            $l130:;
            int64_t $tmp138 = $tmp125 - i122.value;
            if ($tmp126) goto $l139; else goto $l140;
            $l139:;
            if ($tmp138 >= 1) goto $l137; else goto $l129;
            $l140:;
            if ($tmp138 > 1) goto $l137; else goto $l129;
            $l137:;
            i122.value += 1;
            goto $l127;
            $l129:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp143, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(result112, $tmp143);
            panda$core$String* $tmp144 = panda$core$MutableString$finish$R$panda$core$String(result112);
            return $tmp144;
        }
        break;
        case 106:
        {
            if (((panda$core$Bit) { self->children != NULL }).value) {
            {
                panda$core$Int64 $tmp145 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
                panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp145, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp146.value);
                panda$core$String* $tmp148 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(self->payload, &$s147);
                panda$core$Object* $tmp149 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp150 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp148, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp149)));
                return $tmp150;
            }
            }
            panda$core$String* $tmp152 = (($fn151) self->payload->$class->vtable[0])(self->payload);
            return $tmp152;
        }
        break;
        case 108:
        {
            panda$core$Int64 $tmp153 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp153, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp154.value);
            panda$core$Object* $tmp155 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp156 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp155));
            panda$core$String* $tmp158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp156, &$s157);
            panda$core$String* $tmp159 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp158, self->payload);
            panda$core$String* $tmp161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp159, &$s160);
            return $tmp161;
        }
        break;
        case 118:
        {
            panda$core$Int64 $tmp163 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp163, ((panda$core$Int64) { 2 }));
            bool $tmp162 = $tmp164.value;
            if ($tmp162) goto $l165;
            panda$core$Int64 $tmp166 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp166, ((panda$core$Int64) { 3 }));
            $tmp162 = $tmp167.value;
            $l165:;
            panda$core$Bit $tmp168 = { $tmp162 };
            PANDA_ASSERT($tmp168.value);
            panda$core$Object* $tmp171 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s170, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp171)));
            panda$core$String* $tmp174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp172, &$s173);
            panda$core$Object* $tmp175 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp176 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp174, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp175)));
            panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp176, &$s177);
            result169 = $tmp178;
            panda$core$Int64 $tmp179 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp179, ((panda$core$Int64) { 3 }));
            if ($tmp180.value) {
            {
                panda$core$Object* $tmp182 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
                panda$core$String* $tmp183 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s181, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp182)));
                panda$core$String* $tmp185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp183, &$s184);
                panda$core$String* $tmp186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result169, $tmp185);
                return $tmp186;
            }
            }
            return result169;
        }
        break;
        case 119:
        {
            panda$core$Int64 $tmp187 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp187, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp188.value);
            panda$core$Object* $tmp190 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s189, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp190)));
            panda$core$String* $tmp193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp191, &$s192);
            panda$core$Object* $tmp194 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp195 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp193, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp194)));
            panda$core$String* $tmp197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp195, &$s196);
            panda$core$Object* $tmp198 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp199 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp197, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp198)));
            panda$core$String* $tmp201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp199, &$s200);
            return $tmp201;
        }
        break;
        case 121:
        {
            panda$core$Int64 $tmp202 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp202, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp203.value);
            panda$core$Object* $tmp205 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s204, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp205)));
            panda$core$String* $tmp208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp206, &$s207);
            panda$core$Object* $tmp209 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp210 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp208, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp209)));
            panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp210, &$s211);
            return $tmp212;
        }
        break;
        case 120:
        {
            panda$core$Int64 $tmp213 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp213, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp214.value);
            panda$core$Object* $tmp216 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s215, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp216)));
            panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp217, &$s218);
            panda$core$Object* $tmp220 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp219, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp220)));
            panda$core$String* $tmp223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp221, &$s222);
            return $tmp223;
        }
        break;
        case 122:
        {
            panda$core$Int64 $tmp224 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp224, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp225.value);
            panda$core$Object* $tmp227 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp228 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s226, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp227)));
            panda$core$String* $tmp230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp228, &$s229);
            return $tmp230;
        }
        break;
        case 134:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s231, self->payload);
                panda$core$String* $tmp234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp232, &$s233);
                return $tmp234;
            }
            }
            return &$s235;
        }
        break;
        case 135:
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s236, self->payload);
                panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp237, &$s238);
                return $tmp239;
            }
            }
            return &$s240;
        }
        break;
        case 136:
        {
            if (((panda$core$Bit) { self->children != NULL }).value) {
            {
                panda$core$Int64 $tmp241 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
                panda$core$Bit $tmp242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp241, ((panda$core$Int64) { 1 }));
                PANDA_ASSERT($tmp242.value);
                panda$core$Object* $tmp244 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s243, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp244)));
                panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp245, &$s246);
                return $tmp247;
            }
            }
            return &$s248;
        }
        break;
        case 126:
        {
            panda$core$MutableString* $tmp250 = (panda$core$MutableString*) malloc(48);
            $tmp250->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp250->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp250, &$s252);
            result249 = $tmp250;
            {
                ITable* $tmp254 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp254->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp254 = $tmp254->next;
                }
                $fn256 $tmp255 = $tmp254->methods[0];
                panda$collections$Iterator* $tmp257 = $tmp255(((panda$collections$Iterable*) self->children));
                child$Iter253 = $tmp257;
                $l258:;
                ITable* $tmp260 = child$Iter253->$class->itable;
                while ($tmp260->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp260 = $tmp260->next;
                }
                $fn262 $tmp261 = $tmp260->methods[0];
                panda$core$Bit $tmp263 = $tmp261(child$Iter253);
                panda$core$Bit $tmp264 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp263);
                if (!$tmp264.value) goto $l259;
                {
                    ITable* $tmp266 = child$Iter253->$class->itable;
                    while ($tmp266->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp266 = $tmp266->next;
                    }
                    $fn268 $tmp267 = $tmp266->methods[1];
                    panda$core$Object* $tmp269 = $tmp267(child$Iter253);
                    child265 = ((org$pandalanguage$pandac$ASTNode*) $tmp269);
                    panda$core$String* $tmp271 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(child265);
                    c270 = $tmp271;
                    panda$core$Bit $tmp274 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c270, &$s273);
                    bool $tmp272 = $tmp274.value;
                    if (!$tmp272) goto $l275;
                    panda$core$Bit $tmp277 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c270, &$s276);
                    $tmp272 = $tmp277.value;
                    $l275:;
                    panda$core$Bit $tmp278 = { $tmp272 };
                    if ($tmp278.value) {
                    {
                        panda$core$String$Index $tmp280 = panda$core$String$start$R$panda$core$String$Index(c270);
                        panda$core$String$Index $tmp281 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c270, $tmp280);
                        panda$core$String$Index $tmp282 = panda$core$String$end$R$panda$core$String$Index(c270);
                        panda$core$String$Index $tmp283 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c270, $tmp282);
                        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp279, $tmp281, $tmp283, ((panda$core$Bit) { false }));
                        panda$core$String* $tmp284 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(c270, $tmp279);
                        panda$core$MutableString$append$panda$core$String(result249, $tmp284);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$Object(result249, ((panda$core$Object*) child265));
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp285, ((panda$core$UInt8) { 10 }));
                    panda$core$MutableString$append$panda$core$Char8(result249, $tmp285);
                }
                goto $l258;
                $l259:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp286, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result249, $tmp286);
            panda$core$String* $tmp287 = panda$core$MutableString$finish$R$panda$core$String(result249);
            return $tmp287;
        }
        break;
        case 109:
        {
            panda$core$String* $tmp289 = (($fn288) self->payload->$class->vtable[0])(self->payload);
            return $tmp289;
        }
        break;
        case 110:
        {
            panda$core$Object* $tmp290 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp290)), &$s291);
            return $tmp292;
        }
        break;
        case 154:
        {
            panda$core$MutableString* $tmp294 = (panda$core$MutableString*) malloc(48);
            $tmp294->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp294->refCount.value = 1;
            panda$core$Object* $tmp296 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp297 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp296));
            panda$core$MutableString$init$panda$core$String($tmp294, $tmp297);
            result293 = $tmp294;
            panda$core$Char8$init$panda$core$UInt8(&$tmp298, ((panda$core$UInt8) { 60 }));
            panda$core$MutableString$append$panda$core$Char8(result293, $tmp298);
            separator299 = &$s300;
            {
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp302, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                panda$collections$ImmutableArray* $tmp303 = panda$collections$ImmutableArray$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$T$GT(self->children, $tmp302);
                ITable* $tmp304 = ((panda$collections$Iterable*) $tmp303)->$class->itable;
                while ($tmp304->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp304 = $tmp304->next;
                }
                $fn306 $tmp305 = $tmp304->methods[0];
                panda$collections$Iterator* $tmp307 = $tmp305(((panda$collections$Iterable*) $tmp303));
                c$Iter301 = $tmp307;
                $l308:;
                ITable* $tmp310 = c$Iter301->$class->itable;
                while ($tmp310->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp310 = $tmp310->next;
                }
                $fn312 $tmp311 = $tmp310->methods[0];
                panda$core$Bit $tmp313 = $tmp311(c$Iter301);
                panda$core$Bit $tmp314 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp313);
                if (!$tmp314.value) goto $l309;
                {
                    ITable* $tmp316 = c$Iter301->$class->itable;
                    while ($tmp316->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp316 = $tmp316->next;
                    }
                    $fn318 $tmp317 = $tmp316->methods[1];
                    panda$core$Object* $tmp319 = $tmp317(c$Iter301);
                    c315 = ((org$pandalanguage$pandac$ASTNode*) $tmp319);
                    panda$core$MutableString$append$panda$core$String(result293, separator299);
                    panda$core$MutableString$append$panda$core$Object(result293, ((panda$core$Object*) c315));
                    separator299 = &$s320;
                }
                goto $l308;
                $l309:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp321, ((panda$core$UInt8) { 62 }));
            panda$core$MutableString$append$panda$core$Char8(result293, $tmp321);
            panda$core$String* $tmp322 = panda$core$MutableString$finish$R$panda$core$String(result293);
            return $tmp322;
        }
        break;
        case 139:
        {
            panda$core$MutableString* $tmp324 = (panda$core$MutableString*) malloc(48);
            $tmp324->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp324->refCount.value = 1;
            panda$core$MutableString$init($tmp324);
            result323 = $tmp324;
            separator326 = &$s327;
            {
                ITable* $tmp329 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp329->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp329 = $tmp329->next;
                }
                $fn331 $tmp330 = $tmp329->methods[0];
                panda$collections$Iterator* $tmp332 = $tmp330(((panda$collections$Iterable*) self->children));
                c$Iter328 = $tmp332;
                $l333:;
                ITable* $tmp335 = c$Iter328->$class->itable;
                while ($tmp335->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp335 = $tmp335->next;
                }
                $fn337 $tmp336 = $tmp335->methods[0];
                panda$core$Bit $tmp338 = $tmp336(c$Iter328);
                panda$core$Bit $tmp339 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp338);
                if (!$tmp339.value) goto $l334;
                {
                    ITable* $tmp341 = c$Iter328->$class->itable;
                    while ($tmp341->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp341 = $tmp341->next;
                    }
                    $fn343 $tmp342 = $tmp341->methods[1];
                    panda$core$Object* $tmp344 = $tmp342(c$Iter328);
                    c340 = ((org$pandalanguage$pandac$ASTNode*) $tmp344);
                    panda$core$MutableString$append$panda$core$String(result323, separator326);
                    panda$core$MutableString$append$panda$core$Object(result323, ((panda$core$Object*) c340));
                    separator326 = &$s345;
                }
                goto $l333;
                $l334:;
            }
            panda$core$String* $tmp346 = panda$core$MutableString$finish$R$panda$core$String(result323);
            return $tmp346;
        }
        break;
        case 143:
        {
            panda$core$String* $tmp348 = (($fn347) self->payload->$class->vtable[0])(self->payload);
            return $tmp348;
        }
        break;
        case 144:
        {
            panda$core$MutableString* $tmp350 = (panda$core$MutableString*) malloc(48);
            $tmp350->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp350->refCount.value = 1;
            panda$core$MutableString$init($tmp350);
            result349 = $tmp350;
            {
                ITable* $tmp353 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp353->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp353 = $tmp353->next;
                }
                $fn355 $tmp354 = $tmp353->methods[0];
                panda$collections$Iterator* $tmp356 = $tmp354(((panda$collections$Iterable*) self->children));
                c$Iter352 = $tmp356;
                $l357:;
                ITable* $tmp359 = c$Iter352->$class->itable;
                while ($tmp359->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp359 = $tmp359->next;
                }
                $fn361 $tmp360 = $tmp359->methods[0];
                panda$core$Bit $tmp362 = $tmp360(c$Iter352);
                panda$core$Bit $tmp363 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp362);
                if (!$tmp363.value) goto $l358;
                {
                    ITable* $tmp365 = c$Iter352->$class->itable;
                    while ($tmp365->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp365 = $tmp365->next;
                    }
                    $fn367 $tmp366 = $tmp365->methods[1];
                    panda$core$Object* $tmp368 = $tmp366(c$Iter352);
                    c364 = ((org$pandalanguage$pandac$ASTNode*) $tmp368);
                    panda$core$MutableString$append$panda$core$Object(result349, ((panda$core$Object*) c364));
                    panda$core$Char8$init$panda$core$UInt8(&$tmp369, ((panda$core$UInt8) { 10 }));
                    panda$core$MutableString$append$panda$core$Char8(result349, $tmp369);
                }
                goto $l357;
                $l358:;
            }
            panda$core$String* $tmp370 = panda$core$MutableString$finish$R$panda$core$String(result349);
            return $tmp370;
        }
        break;
        case 129:
        {
            panda$core$Int64 $tmp371 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp371, ((panda$core$Int64) { 1 }));
            if ($tmp372.value) {
            {
                panda$core$Object* $tmp373 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp374 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp373));
                return $tmp374;
            }
            }
            panda$core$Object* $tmp375 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp376 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp375));
            panda$core$String* $tmp378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp376, &$s377);
            panda$core$Object* $tmp379 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp378, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp379)));
            panda$core$String* $tmp382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp380, &$s381);
            return $tmp382;
        }
        break;
        case 130:
        {
            panda$core$MutableString* $tmp384 = (panda$core$MutableString*) malloc(48);
            $tmp384->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp384->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp384, &$s386);
            result383 = $tmp384;
            separator387 = &$s388;
            {
                ITable* $tmp390 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp390->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp390 = $tmp390->next;
                }
                $fn392 $tmp391 = $tmp390->methods[0];
                panda$collections$Iterator* $tmp393 = $tmp391(((panda$collections$Iterable*) self->children));
                c$Iter389 = $tmp393;
                $l394:;
                ITable* $tmp396 = c$Iter389->$class->itable;
                while ($tmp396->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp396 = $tmp396->next;
                }
                $fn398 $tmp397 = $tmp396->methods[0];
                panda$core$Bit $tmp399 = $tmp397(c$Iter389);
                panda$core$Bit $tmp400 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp399);
                if (!$tmp400.value) goto $l395;
                {
                    ITable* $tmp402 = c$Iter389->$class->itable;
                    while ($tmp402->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp402 = $tmp402->next;
                    }
                    $fn404 $tmp403 = $tmp402->methods[1];
                    panda$core$Object* $tmp405 = $tmp403(c$Iter389);
                    c401 = ((org$pandalanguage$pandac$ASTNode*) $tmp405);
                    panda$core$MutableString$append$panda$core$String(result383, separator387);
                    panda$core$MutableString$append$panda$core$Object(result383, ((panda$core$Object*) c401));
                    separator387 = &$s406;
                }
                goto $l394;
                $l395:;
            }
            panda$core$String* $tmp407 = panda$core$MutableString$finish$R$panda$core$String(result383);
            return $tmp407;
        }
        break;
        case 131:
        {
            panda$core$MutableString* $tmp409 = (panda$core$MutableString*) malloc(48);
            $tmp409->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp409->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp409, &$s411);
            result408 = $tmp409;
            separator412 = &$s413;
            {
                ITable* $tmp415 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp415->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp415 = $tmp415->next;
                }
                $fn417 $tmp416 = $tmp415->methods[0];
                panda$collections$Iterator* $tmp418 = $tmp416(((panda$collections$Iterable*) self->children));
                c$Iter414 = $tmp418;
                $l419:;
                ITable* $tmp421 = c$Iter414->$class->itable;
                while ($tmp421->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp421 = $tmp421->next;
                }
                $fn423 $tmp422 = $tmp421->methods[0];
                panda$core$Bit $tmp424 = $tmp422(c$Iter414);
                panda$core$Bit $tmp425 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp424);
                if (!$tmp425.value) goto $l420;
                {
                    ITable* $tmp427 = c$Iter414->$class->itable;
                    while ($tmp427->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp427 = $tmp427->next;
                    }
                    $fn429 $tmp428 = $tmp427->methods[1];
                    panda$core$Object* $tmp430 = $tmp428(c$Iter414);
                    c426 = ((org$pandalanguage$pandac$ASTNode*) $tmp430);
                    panda$core$MutableString$append$panda$core$String(result408, separator412);
                    panda$core$MutableString$append$panda$core$Object(result408, ((panda$core$Object*) c426));
                    separator412 = &$s431;
                }
                goto $l419;
                $l420:;
            }
            panda$core$String* $tmp432 = panda$core$MutableString$finish$R$panda$core$String(result408);
            return $tmp432;
        }
        break;
        case 133:
        {
            panda$core$MutableString* $tmp434 = (panda$core$MutableString*) malloc(48);
            $tmp434->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp434->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp434, &$s436);
            result433 = $tmp434;
            separator437 = &$s438;
            {
                ITable* $tmp440 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp440->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp440 = $tmp440->next;
                }
                $fn442 $tmp441 = $tmp440->methods[0];
                panda$collections$Iterator* $tmp443 = $tmp441(((panda$collections$Iterable*) self->children));
                c$Iter439 = $tmp443;
                $l444:;
                ITable* $tmp446 = c$Iter439->$class->itable;
                while ($tmp446->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp446 = $tmp446->next;
                }
                $fn448 $tmp447 = $tmp446->methods[0];
                panda$core$Bit $tmp449 = $tmp447(c$Iter439);
                panda$core$Bit $tmp450 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp449);
                if (!$tmp450.value) goto $l445;
                {
                    ITable* $tmp452 = c$Iter439->$class->itable;
                    while ($tmp452->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp452 = $tmp452->next;
                    }
                    $fn454 $tmp453 = $tmp452->methods[1];
                    panda$core$Object* $tmp455 = $tmp453(c$Iter439);
                    c451 = ((org$pandalanguage$pandac$ASTNode*) $tmp455);
                    panda$core$MutableString$append$panda$core$String(result433, separator437);
                    panda$core$MutableString$append$panda$core$Object(result433, ((panda$core$Object*) c451));
                    separator437 = &$s456;
                }
                goto $l444;
                $l445:;
            }
            panda$core$String* $tmp457 = panda$core$MutableString$finish$R$panda$core$String(result433);
            return $tmp457;
        }
        break;
        case 132:
        {
            panda$core$MutableString* $tmp459 = (panda$core$MutableString*) malloc(48);
            $tmp459->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp459->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp459, &$s461);
            result458 = $tmp459;
            separator462 = &$s463;
            {
                ITable* $tmp465 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp465->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp465 = $tmp465->next;
                }
                $fn467 $tmp466 = $tmp465->methods[0];
                panda$collections$Iterator* $tmp468 = $tmp466(((panda$collections$Iterable*) self->children));
                c$Iter464 = $tmp468;
                $l469:;
                ITable* $tmp471 = c$Iter464->$class->itable;
                while ($tmp471->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp471 = $tmp471->next;
                }
                $fn473 $tmp472 = $tmp471->methods[0];
                panda$core$Bit $tmp474 = $tmp472(c$Iter464);
                panda$core$Bit $tmp475 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp474);
                if (!$tmp475.value) goto $l470;
                {
                    ITable* $tmp477 = c$Iter464->$class->itable;
                    while ($tmp477->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp477 = $tmp477->next;
                    }
                    $fn479 $tmp478 = $tmp477->methods[1];
                    panda$core$Object* $tmp480 = $tmp478(c$Iter464);
                    c476 = ((org$pandalanguage$pandac$ASTNode*) $tmp480);
                    panda$core$MutableString$append$panda$core$String(result458, separator462);
                    panda$core$MutableString$append$panda$core$Object(result458, ((panda$core$Object*) c476));
                    separator462 = &$s481;
                }
                goto $l469;
                $l470:;
            }
            panda$core$String* $tmp482 = panda$core$MutableString$finish$R$panda$core$String(result458);
            return $tmp482;
        }
        break;
        case 148:
        {
            panda$core$Int64 $tmp483 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp483, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp484.value);
            panda$core$Object* $tmp485 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp486 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp485));
            panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp486, &$s487);
            panda$core$Object* $tmp489 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp490 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp488, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp489)));
            panda$core$String* $tmp492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp490, &$s491);
            panda$core$Object* $tmp493 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp492, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp493)));
            panda$core$String* $tmp496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp494, &$s495);
            return $tmp496;
        }
        break;
        case 149:
        {
            panda$core$Int64 $tmp497 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp497, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp498.value);
            panda$core$String* $tmp500 = (($fn499) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp500, &$s501);
            panda$core$Object* $tmp503 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp504 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp502, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp503)));
            panda$core$String* $tmp506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp504, &$s505);
            return $tmp506;
        }
        break;
        case 150:
        {
            panda$core$MutableString* $tmp508 = (panda$core$MutableString*) malloc(48);
            $tmp508->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp508->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp508, &$s510);
            result507 = $tmp508;
            separator511 = &$s512;
            {
                ITable* $tmp514 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp514->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp514 = $tmp514->next;
                }
                $fn516 $tmp515 = $tmp514->methods[0];
                panda$collections$Iterator* $tmp517 = $tmp515(((panda$collections$Iterable*) self->children));
                c$Iter513 = $tmp517;
                $l518:;
                ITable* $tmp520 = c$Iter513->$class->itable;
                while ($tmp520->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp520 = $tmp520->next;
                }
                $fn522 $tmp521 = $tmp520->methods[0];
                panda$core$Bit $tmp523 = $tmp521(c$Iter513);
                panda$core$Bit $tmp524 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp523);
                if (!$tmp524.value) goto $l519;
                {
                    ITable* $tmp526 = c$Iter513->$class->itable;
                    while ($tmp526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp526 = $tmp526->next;
                    }
                    $fn528 $tmp527 = $tmp526->methods[1];
                    panda$core$Object* $tmp529 = $tmp527(c$Iter513);
                    c525 = ((org$pandalanguage$pandac$ASTNode*) $tmp529);
                    panda$core$MutableString$append$panda$core$String(result507, separator511);
                    panda$core$MutableString$append$panda$core$Object(result507, ((panda$core$Object*) c525));
                    separator511 = &$s530;
                }
                goto $l518;
                $l519:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp531, ((panda$core$UInt8) { 41 }));
            panda$core$MutableString$append$panda$core$Char8(result507, $tmp531);
            panda$core$String* $tmp532 = panda$core$MutableString$finish$R$panda$core$String(result507);
            return $tmp532;
        }
        break;
        case 147:
        {
            panda$core$Int64 $tmp533 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp533, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp534.value);
            panda$core$Object* $tmp535 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp536 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp535));
            panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp536, &$s537);
            panda$core$Object* $tmp539 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp538, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp539)));
            panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp540, &$s541);
            panda$core$Object* $tmp543 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp544 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp542, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp543)));
            panda$core$String* $tmp546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp544, &$s545);
            panda$core$Object* $tmp547 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp546, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp547)));
            panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, &$s549);
            panda$core$Object* $tmp551 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp550, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp551)));
            panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp552, &$s553);
            return $tmp554;
        }
        break;
        case 145:
        {
            panda$core$Int64 $tmp555 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp555, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp556.value);
            panda$core$Object* $tmp557 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp558 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp557));
            panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp558, &$s559);
            panda$core$Object* $tmp561 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp560, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp561)));
            panda$core$String* $tmp564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp562, &$s563);
            panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp564, self->payload);
            panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp565, &$s566);
            panda$core$Object* $tmp568 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp567, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp568)));
            panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp569, &$s570);
            panda$core$Object* $tmp572 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp573 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp572));
            panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp573, &$s574);
            panda$core$Object* $tmp576 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp575, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp576)));
            panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, &$s578);
            panda$core$Object* $tmp580 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp579, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp580)));
            panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp581, &$s582);
            panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp571, $tmp583);
            return $tmp584;
        }
        break;
        case 146:
        {
            panda$core$Int64 $tmp585 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp585, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp586.value);
            {
                ITable* $tmp588 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp588->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp588 = $tmp588->next;
                }
                $fn590 $tmp589 = $tmp588->methods[0];
                panda$collections$Iterator* $tmp591 = $tmp589(((panda$collections$Iterable*) self->children));
                c$Iter587 = $tmp591;
                $l592:;
                ITable* $tmp594 = c$Iter587->$class->itable;
                while ($tmp594->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp594 = $tmp594->next;
                }
                $fn596 $tmp595 = $tmp594->methods[0];
                panda$core$Bit $tmp597 = $tmp595(c$Iter587);
                panda$core$Bit $tmp598 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp597);
                if (!$tmp598.value) goto $l593;
                {
                    ITable* $tmp600 = c$Iter587->$class->itable;
                    while ($tmp600->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp600 = $tmp600->next;
                    }
                    $fn602 $tmp601 = $tmp600->methods[1];
                    panda$core$Object* $tmp603 = $tmp601(c$Iter587);
                    c599 = ((org$pandalanguage$pandac$ASTNode*) $tmp603);
                    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) c599));
                }
                goto $l592;
                $l593:;
            }
            panda$core$Object* $tmp604 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp605 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp604));
            panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp605, &$s606);
            panda$core$Object* $tmp608 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp607, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp608)));
            panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp609, &$s610);
            panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp611, self->payload);
            panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp612, &$s613);
            panda$core$Object* $tmp615 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp614, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp615)));
            panda$core$String* $tmp618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp616, &$s617);
            panda$core$Object* $tmp619 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp620 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp619));
            panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp620, &$s621);
            panda$core$Object* $tmp623 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp622, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp623)));
            panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, &$s625);
            panda$core$Object* $tmp627 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp626, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp627)));
            panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp628, &$s629);
            panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp618, $tmp630);
            return $tmp631;
        }
        break;
        case 140:
        {
            panda$core$MutableString* $tmp633 = (panda$core$MutableString*) malloc(48);
            $tmp633->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp633->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp633, &$s635);
            result632 = $tmp633;
            {
                ITable* $tmp637 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp637->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp637 = $tmp637->next;
                }
                $fn639 $tmp638 = $tmp637->methods[0];
                panda$collections$Iterator* $tmp640 = $tmp638(((panda$collections$Iterable*) self->children));
                c$Iter636 = $tmp640;
                $l641:;
                ITable* $tmp643 = c$Iter636->$class->itable;
                while ($tmp643->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp643 = $tmp643->next;
                }
                $fn645 $tmp644 = $tmp643->methods[0];
                panda$core$Bit $tmp646 = $tmp644(c$Iter636);
                panda$core$Bit $tmp647 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp646);
                if (!$tmp647.value) goto $l642;
                {
                    ITable* $tmp649 = c$Iter636->$class->itable;
                    while ($tmp649->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp649 = $tmp649->next;
                    }
                    $fn651 $tmp650 = $tmp649->methods[1];
                    panda$core$Object* $tmp652 = $tmp650(c$Iter636);
                    c648 = ((org$pandalanguage$pandac$ASTNode*) $tmp652);
                    panda$core$MutableString$append$panda$core$Object(result632, ((panda$core$Object*) c648));
                    panda$core$Char8$init$panda$core$UInt8(&$tmp653, ((panda$core$UInt8) { 10 }));
                    panda$core$MutableString$append$panda$core$Char8(result632, $tmp653);
                }
                goto $l641;
                $l642:;
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp654, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result632, $tmp654);
            panda$core$String* $tmp655 = panda$core$MutableString$finish$R$panda$core$String(result632);
            return $tmp655;
        }
        break;
        case 142:
        {
            panda$core$Int64 $tmp656 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp656, ((panda$core$Int64) { 6 }));
            PANDA_ASSERT($tmp657.value);
            panda$core$MutableString* $tmp659 = (panda$core$MutableString*) malloc(48);
            $tmp659->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp659->refCount.value = 1;
            panda$core$MutableString$init($tmp659);
            result658 = $tmp659;
            panda$core$Object* $tmp661 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result658, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp661)));
            panda$core$Object* $tmp662 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result658, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp662)));
            panda$core$String* $tmp664 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s663, self->payload);
            panda$core$String* $tmp666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp664, &$s665);
            panda$core$MutableString$append$panda$core$String(result658, $tmp666);
            panda$core$Object* $tmp667 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result658, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp667)));
            panda$core$Object* $tmp668 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$Bit $tmp669 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp668)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp669.value) {
            {
                panda$core$MutableString$append$panda$core$String(result658, &$s670);
                panda$core$Object* $tmp671 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
                panda$core$MutableString$append$panda$core$Object(result658, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp671)));
            }
            }
            panda$core$Object* $tmp672 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$Bit $tmp673 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp672)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp673.value) {
            {
                panda$core$MutableString$append$panda$core$String(result658, &$s674);
                panda$core$Object* $tmp675 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
                panda$core$MutableString$append$panda$core$Object(result658, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp675)));
                panda$core$Char8$init$panda$core$UInt8(&$tmp676, ((panda$core$UInt8) { 41 }));
                panda$core$MutableString$append$panda$core$Char8(result658, $tmp676);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp677, ((panda$core$UInt8) { 32 }));
            panda$core$MutableString$append$panda$core$Char8(result658, $tmp677);
            panda$core$Object* $tmp678 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 5 }));
            panda$core$MutableString$append$panda$core$Object(result658, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp678)));
            panda$core$String* $tmp679 = panda$core$MutableString$finish$R$panda$core$String(result658);
            return $tmp679;
        }
        break;
        case 151:
        {
            panda$core$Int64 $tmp680 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp680, ((panda$core$Int64) { 5 }));
            PANDA_ASSERT($tmp681.value);
            panda$core$MutableString* $tmp683 = (panda$core$MutableString*) malloc(48);
            $tmp683->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp683->refCount.value = 1;
            panda$core$MutableString$init($tmp683);
            result682 = $tmp683;
            panda$core$Object* $tmp685 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$MutableString$append$panda$core$Object(result682, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp685)));
            panda$core$Object* $tmp686 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$MutableString$append$panda$core$Object(result682, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp686)));
            panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s687, self->payload);
            panda$core$String* $tmp690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp688, &$s689);
            panda$core$MutableString$append$panda$core$String(result682, $tmp690);
            panda$core$Object* $tmp691 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 2 }));
            panda$core$MutableString$append$panda$core$Object(result682, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp691)));
            panda$core$Char8$init$panda$core$UInt8(&$tmp692, ((panda$core$UInt8) { 32 }));
            panda$core$MutableString$append$panda$core$Char8(result682, $tmp692);
            panda$core$Object* $tmp693 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 3 }));
            panda$core$MutableString$append$panda$core$Object(result682, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp693)));
            panda$core$Object* $tmp694 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 4 }));
            panda$core$MutableString$append$panda$core$Object(result682, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp694)));
            panda$core$String* $tmp695 = panda$core$MutableString$finish$R$panda$core$String(result682);
            return $tmp695;
        }
        break;
        case 152:
        {
            panda$core$MutableString* $tmp697 = (panda$core$MutableString*) malloc(48);
            $tmp697->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp697->refCount.value = 1;
            panda$core$MutableString$init($tmp697);
            result696 = $tmp697;
            {
                ITable* $tmp700 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp700->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp700 = $tmp700->next;
                }
                $fn702 $tmp701 = $tmp700->methods[0];
                panda$collections$Iterator* $tmp703 = $tmp701(((panda$collections$Iterable*) self->children));
                c$Iter699 = $tmp703;
                $l704:;
                ITable* $tmp706 = c$Iter699->$class->itable;
                while ($tmp706->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp706 = $tmp706->next;
                }
                $fn708 $tmp707 = $tmp706->methods[0];
                panda$core$Bit $tmp709 = $tmp707(c$Iter699);
                panda$core$Bit $tmp710 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp709);
                if (!$tmp710.value) goto $l705;
                {
                    ITable* $tmp712 = c$Iter699->$class->itable;
                    while ($tmp712->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp712 = $tmp712->next;
                    }
                    $fn714 $tmp713 = $tmp712->methods[1];
                    panda$core$Object* $tmp715 = $tmp713(c$Iter699);
                    c711 = ((org$pandalanguage$pandac$ASTNode*) $tmp715);
                    panda$core$MutableString$append$panda$core$Object(result696, ((panda$core$Object*) c711));
                    panda$core$Char8$init$panda$core$UInt8(&$tmp716, ((panda$core$UInt8) { 10 }));
                    panda$core$MutableString$append$panda$core$Char8(result696, $tmp716);
                }
                goto $l704;
                $l705:;
            }
            panda$core$String* $tmp717 = panda$core$MutableString$finish$R$panda$core$String(result696);
            return $tmp717;
        }
        break;
        case 114:
        {
            return &$s718;
        }
        break;
        case 115:
        {
            return &$s719;
        }
        break;
        case 138:
        {
            return &$s720;
        }
        break;
        case 117:
        {
            return &$s721;
        }
        break;
        case 111:
        {
            panda$core$Object* $tmp722 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp723 = org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(((org$pandalanguage$pandac$ASTNode*) $tmp722));
            panda$core$String* $tmp725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp723, &$s724);
            panda$core$Object* $tmp726 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp727 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp725, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp726)));
            panda$core$String* $tmp729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp727, &$s728);
            return $tmp729;
        }
        break;
        case 123:
        {
            panda$core$Int64 $tmp730 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp730, ((panda$core$Int64) { 1 }));
            if ($tmp731.value) {
            {
                panda$core$Object* $tmp733 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s732, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp733)));
                panda$core$String* $tmp736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp734, &$s735);
                return $tmp736;
            }
            }
            panda$core$Int64 $tmp737 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(self->children);
            panda$core$Bit $tmp738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp738.value);
            panda$core$Object* $tmp740 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp741 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s739, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp740)));
            panda$core$String* $tmp743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp741, &$s742);
            panda$core$Object* $tmp744 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp743, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp744)));
            panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp745, &$s746);
            return $tmp747;
        }
        break;
        default:
        {
            panda$core$String* $tmp749 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s748, ((panda$core$Object*) wrap_panda$core$Int64(self->kind)));
            panda$core$String* $tmp751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp749, &$s750);
            return $tmp751;
        }
    }
}

