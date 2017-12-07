#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/UInt64.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/core/SpecializedRange.LTpanda/core/Int64.GT.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/SpecializedRange.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/SpecializedRange.LTpanda/core/Int64.Q.GT.h"


org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$core$Object* (*$fn39)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn47)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn52)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn58)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn67)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn73)(panda$core$Object*);
typedef panda$core$String* (*$fn76)(panda$core$Object*);
typedef panda$core$String* (*$fn80)(panda$core$Object*);
typedef panda$core$Object* (*$fn99)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn101)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn103)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn105)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn106)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn108)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn110)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$Object* (*$fn111)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn114)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn115)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn117)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$String* (*$fn118)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn124)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn127)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn129)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn131)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn132)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn135)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn137)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$Object* (*$fn138)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn142)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn143)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn145)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$String* (*$fn146)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn152)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn154)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn157)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn161)(panda$collections$ImmutableArray*);
typedef void (*$fn181)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn182)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn184)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn198)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn199)(panda$core$MutableString*);
typedef panda$core$Int64 (*$fn202)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn207)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn210)(panda$core$Object*);
typedef panda$core$Object* (*$fn214)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn223)(panda$core$Object*);
typedef panda$core$Object* (*$fn228)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn233)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64 (*$fn238)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn242)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn250)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn255)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn260)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn267)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn272)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn279)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn284)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn291)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64 (*$fn309)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn313)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn327)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn333)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn339)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn342)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn357)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn358)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn360)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn362)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn363)(panda$core$MutableString*);
typedef panda$core$String* (*$fn366)(panda$core$Object*);
typedef panda$core$Object* (*$fn369)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn377)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn379)(org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn382)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$ImmutableArray* (*$fn387)(panda$collections$ImmutableArray*, panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT);
typedef panda$collections$Iterator* (*$fn391)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn397)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn403)(panda$collections$Iterator*);
typedef void (*$fn405)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn406)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn409)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn410)(panda$core$MutableString*);
typedef panda$collections$Iterator* (*$fn421)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn427)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn433)(panda$collections$Iterator*);
typedef void (*$fn435)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn436)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$String* (*$fn438)(panda$core$MutableString*);
typedef panda$core$String* (*$fn441)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn450)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn456)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn462)(panda$collections$Iterator*);
typedef void (*$fn464)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn466)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn467)(panda$core$MutableString*);
typedef panda$core$Int64 (*$fn470)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn473)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn475)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn478)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn483)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn498)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn504)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn510)(panda$collections$Iterator*);
typedef void (*$fn512)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn513)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$String* (*$fn515)(panda$core$MutableString*);
typedef panda$collections$Iterator* (*$fn527)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn533)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn539)(panda$collections$Iterator*);
typedef void (*$fn541)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn542)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$String* (*$fn544)(panda$core$MutableString*);
typedef panda$collections$Iterator* (*$fn556)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn562)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn568)(panda$collections$Iterator*);
typedef void (*$fn570)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn571)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$String* (*$fn573)(panda$core$MutableString*);
typedef panda$collections$Iterator* (*$fn585)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn591)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn597)(panda$collections$Iterator*);
typedef void (*$fn599)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn600)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$String* (*$fn602)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn606)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn611)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn616)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn626)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn641)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn647)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn653)(panda$collections$Iterator*);
typedef void (*$fn655)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn656)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn659)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn660)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn664)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn669)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn674)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn679)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn684)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn691)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn696)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn704)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn710)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn715)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn720)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn728)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn733)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn741)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn747)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn752)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn757)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn771)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn777)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn783)(panda$collections$Iterator*);
typedef void (*$fn785)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn787)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn789)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn790)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn796)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn798)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$Object* (*$fn799)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn801)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn806)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn807)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn809)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$Object* (*$fn810)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn814)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn815)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn817)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$Object* (*$fn818)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn822)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn823)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn825)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn827)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn829)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn830)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn832)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$String* (*$fn833)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn839)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn841)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$Object* (*$fn842)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn844)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn849)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn850)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn852)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn854)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn855)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn857)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$Object* (*$fn858)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn860)(panda$core$MutableString*, panda$core$Object*);
typedef panda$core$String* (*$fn861)(panda$core$MutableString*);
typedef panda$collections$Iterator* (*$fn870)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn876)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn882)(panda$collections$Iterator*);
typedef void (*$fn884)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn886)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn887)(panda$core$MutableString*);

static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3D", 2, 1 };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x6F\x70\x65\x72\x61\x74\x6F\x72\x3A", 10, 1 };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x63\x6B\x61\x67\x65\x20", 8, 1 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x73\x65\x73\x20", 5, 1 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E\x2E", 3, 1 };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 1 };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x2E", 2, 1 };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 1 };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20", 3, 1 };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x65\x6C\x73\x65\x20", 6, 1 };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6F\x72\x20", 4, 1 };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x69\x6E\x20", 4, 1 };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20", 6, 1 };
static panda$core$String $s270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x6F\x20", 3, 1 };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x77\x68\x69\x6C\x65\x20", 7, 1 };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x6F\x6F\x70\x20", 5, 1 };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x20", 6, 1 };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B", 5, 1 };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65\x20", 9, 1 };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x74\x69\x6E\x75\x65", 8, 1 };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 1 };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E", 6, 1 };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 1 };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x3D\x20", 4, 1 };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 1 };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 1 };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x72\x6F\x70\x65\x72\x74\x79\x20", 9, 1 };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 1 };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x65\x74\x68\x6F\x64\x20", 7, 1 };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x20", 9, 1 };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x0A", 2, 1 };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 1 };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20", 3, 1 };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 1 };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6C\x61\x73\x73\x20", 6, 1 };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 1 };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 1 };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x41\x53\x54\x4E\x6F\x64\x65\x3A", 9, 1 };
static panda$core$String $s897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };

panda$core$String* org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(panda$core$Int64 p_op) {
    panda$core$Int64 $match$23921;
    {
        $match$23921 = p_op;
        panda$core$Bit $tmp2 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23921, ((panda$core$Int64) { 51 }));
        if ($tmp2.value) {
        {
            return &$s3;
        }
        }
        else {
        panda$core$Bit $tmp4 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23921, ((panda$core$Int64) { 66 }));
        if ($tmp4.value) {
        {
            return &$s5;
        }
        }
        else {
        panda$core$Bit $tmp6 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23921, ((panda$core$Int64) { 54 }));
        if ($tmp6.value) {
        {
            return &$s7;
        }
        }
        else {
        panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23921, ((panda$core$Int64) { 55 }));
        if ($tmp8.value) {
        {
            return &$s9;
        }
        }
        else {
        panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23921, ((panda$core$Int64) { 53 }));
        if ($tmp10.value) {
        {
            return &$s11;
        }
        }
        else {
        panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23921, ((panda$core$Int64) { 52 }));
        if ($tmp12.value) {
        {
            return &$s13;
        }
        }
        else {
        panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23921, ((panda$core$Int64) { 68 }));
        if ($tmp14.value) {
        {
            return &$s15;
        }
        }
        else {
        panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$23921, ((panda$core$Int64) { 73 }));
        if ($tmp16.value) {
        {
            return &$s17;
        }
        }
        else {
        {
            panda$core$String* $tmp19 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s18, ((panda$core$Object*) wrap_panda$core$Int64(p_op)));
            panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp19, &$s20);
            return $tmp21;
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset) {
    panda$collections$Array* $tmp22 = (panda$collections$Array*) malloc(40);
    $tmp22->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp22->refCount.value = 1;
    panda$collections$Array$init($tmp22);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_offset, NULL, ((panda$collections$ListView*) $tmp22));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$UInt64 p_payload) {
    panda$collections$Array* $tmp24 = (panda$collections$Array*) malloc(40);
    $tmp24->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp24->refCount.value = 1;
    panda$collections$Array$init($tmp24);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_offset, ((panda$core$Object*) wrap_panda$core$UInt64(p_payload)), ((panda$collections$ListView*) $tmp24));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$String* p_payload) {
    panda$collections$Array* $tmp26 = (panda$collections$Array*) malloc(40);
    $tmp26->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp26->refCount.value = 1;
    panda$collections$Array$init($tmp26);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_offset, ((panda$core$Object*) p_payload), ((panda$collections$ListView*) $tmp26));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$Bit p_payload) {
    panda$collections$Array* $tmp28 = (panda$collections$Array*) malloc(40);
    $tmp28->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp28->refCount.value = 1;
    panda$collections$Array$init($tmp28);
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_offset, ((panda$core$Object*) wrap_panda$core$Bit(p_payload)), ((panda$collections$ListView*) $tmp28));
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$collections$ListView* p_children) {
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(self, p_kind, p_offset, NULL, p_children);
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64$panda$core$Object$Q$panda$collections$ListView$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$Object* p_payload, panda$collections$ListView* p_children) {
    self->kind = p_kind;
    self->offset = p_offset;
    self->payload = p_payload;
    panda$collections$ImmutableArray* $tmp30 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp30->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp30->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp30, p_children);
    self->children = $tmp30;
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    panda$core$Int64 $match$381632;
    panda$core$MutableString* result96;
    panda$core$MutableString* result121;
    panda$core$MutableString* result149;
    panda$core$String* separator158;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp160;
    panda$core$String* result226;
    panda$core$MutableString* result320;
    panda$collections$Iterator* child$Iter324;
    org$pandalanguage$pandac$ASTNode* child336;
    panda$core$String* c341;
    panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT $tmp351;
    panda$core$MutableString* result374;
    panda$core$String* separator383;
    panda$collections$Iterator* c$Iter385;
    panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT $tmp386;
    org$pandalanguage$pandac$ASTNode* c400;
    panda$core$MutableString* result413;
    panda$core$String* separator416;
    panda$collections$Iterator* c$Iter418;
    org$pandalanguage$pandac$ASTNode* c430;
    panda$core$MutableString* result444;
    panda$collections$Iterator* c$Iter447;
    org$pandalanguage$pandac$ASTNode* c459;
    panda$core$MutableString* result489;
    panda$core$String* separator493;
    panda$collections$Iterator* c$Iter495;
    org$pandalanguage$pandac$ASTNode* c507;
    panda$core$MutableString* result518;
    panda$core$String* separator522;
    panda$collections$Iterator* c$Iter524;
    org$pandalanguage$pandac$ASTNode* c536;
    panda$core$MutableString* result547;
    panda$core$String* separator551;
    panda$collections$Iterator* c$Iter553;
    org$pandalanguage$pandac$ASTNode* c565;
    panda$core$MutableString* result576;
    panda$core$String* separator580;
    panda$collections$Iterator* c$Iter582;
    org$pandalanguage$pandac$ASTNode* c594;
    panda$core$MutableString* result632;
    panda$core$String* separator636;
    panda$collections$Iterator* c$Iter638;
    org$pandalanguage$pandac$ASTNode* c650;
    panda$core$MutableString* result764;
    panda$collections$Iterator* c$Iter768;
    org$pandalanguage$pandac$ASTNode* c780;
    panda$core$MutableString* result793;
    panda$core$MutableString* result836;
    panda$core$MutableString* result864;
    panda$collections$Iterator* c$Iter867;
    org$pandalanguage$pandac$ASTNode* c879;
    {
        $match$381632 = self->kind;
        panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 112 }));
        if ($tmp33.value) {
        {
            panda$core$String* $tmp35 = org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp36 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s34, $tmp35);
            panda$core$String* $tmp38 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp36, &$s37);
            panda$core$Object* $tmp40 = (($fn39) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp38, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp40)));
            panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp41, &$s42);
            return $tmp43;
        }
        }
        else {
        panda$core$Bit $tmp44 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 103 }));
        if ($tmp44.value) {
        {
            panda$core$Bit $tmp45 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64$wrapper*) self->payload)->value, ((panda$core$Int64) { 101 }));
            if ($tmp45.value) {
            {
                panda$core$Object* $tmp48 = (($fn47) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp49 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s46, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp48)));
                panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp49, &$s50);
                panda$core$Object* $tmp53 = (($fn52) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp54 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp51, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp53)));
                panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp54, &$s55);
                return $tmp56;
            }
            }
            panda$core$Object* $tmp59 = (($fn58) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s57, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp59)));
            panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp60, &$s61);
            panda$core$String* $tmp63 = org$pandalanguage$pandac$ASTNode$operatorName$panda$core$Int64$R$panda$core$String(((panda$core$Int64$wrapper*) self->payload)->value);
            panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp62, $tmp63);
            panda$core$String* $tmp66 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp64, &$s65);
            panda$core$Object* $tmp68 = (($fn67) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp66, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp68)));
            panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp69, &$s70);
            return $tmp71;
        }
        }
        else {
        panda$core$Bit $tmp72 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 102 }));
        if ($tmp72.value) {
        {
            panda$core$String* $tmp74 = (($fn73) self->payload->$class->vtable[0])(self->payload);
            return $tmp74;
        }
        }
        else {
        panda$core$Bit $tmp75 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 116 }));
        if ($tmp75.value) {
        {
            panda$core$String* $tmp77 = (($fn76) self->payload->$class->vtable[0])(self->payload);
            return $tmp77;
        }
        }
        else {
        panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 113 }));
        if ($tmp78.value) {
        {
            panda$core$String* $tmp81 = (($fn80) self->payload->$class->vtable[0])(self->payload);
            panda$core$String* $tmp82 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s79, $tmp81);
            panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp82, &$s83);
            return $tmp84;
        }
        }
        else {
        panda$core$Bit $tmp85 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 100 }));
        if ($tmp85.value) {
        {
            panda$core$String* $tmp87 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s86, self->payload);
            panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp87, &$s88);
            return $tmp89;
        }
        }
        else {
        panda$core$Bit $tmp90 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 101 }));
        if ($tmp90.value) {
        {
            panda$core$String* $tmp92 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s91, self->payload);
            panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp92, &$s93);
            return $tmp94;
        }
        }
        else {
        panda$core$Bit $tmp95 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 104 }));
        if ($tmp95.value) {
        {
            panda$core$MutableString* $tmp97 = (panda$core$MutableString*) malloc(40);
            $tmp97->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp97->refCount.value = 1;
            panda$core$MutableString$init($tmp97);
            result96 = $tmp97;
            panda$core$Object* $tmp100 = (($fn99) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp100) != NULL }).value) {
            {
                panda$core$Object* $tmp102 = (($fn101) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
                (($fn103) result96->$class->vtable[5])(result96, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp102)));
            }
            }
            (($fn105) result96->$class->vtable[3])(result96, &$s104);
            panda$core$Object* $tmp107 = (($fn106) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp107) != NULL }).value) {
            {
                panda$core$Object* $tmp109 = (($fn108) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
                (($fn110) result96->$class->vtable[5])(result96, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp109)));
            }
            }
            panda$core$Object* $tmp112 = (($fn111) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 2 }));
            if (((panda$core$Bit) { ((org$pandalanguage$pandac$ASTNode*) $tmp112) != NULL }).value) {
            {
                (($fn114) result96->$class->vtable[3])(result96, &$s113);
                panda$core$Object* $tmp116 = (($fn115) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 2 }));
                (($fn117) result96->$class->vtable[5])(result96, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp116)));
            }
            }
            panda$core$String* $tmp119 = (($fn118) result96->$class->vtable[0])(result96);
            return $tmp119;
        }
        }
        else {
        panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 105 }));
        if ($tmp120.value) {
        {
            panda$core$MutableString* $tmp122 = (panda$core$MutableString*) malloc(40);
            $tmp122->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp122->refCount.value = 1;
            panda$core$MutableString$init($tmp122);
            result121 = $tmp122;
            panda$core$Object* $tmp125 = (($fn124) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp126 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp125)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp126.value) {
            {
                panda$core$Object* $tmp128 = (($fn127) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
                (($fn129) result121->$class->vtable[5])(result121, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp128)));
            }
            }
            (($fn131) result121->$class->vtable[3])(result121, &$s130);
            panda$core$Object* $tmp133 = (($fn132) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
            panda$core$Bit $tmp134 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp133)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp134.value) {
            {
                panda$core$Object* $tmp136 = (($fn135) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
                (($fn137) result121->$class->vtable[5])(result121, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp136)));
            }
            }
            panda$core$Object* $tmp139 = (($fn138) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 2 }));
            panda$core$Bit $tmp140 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp139)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp140.value) {
            {
                (($fn142) result121->$class->vtable[3])(result121, &$s141);
                panda$core$Object* $tmp144 = (($fn143) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 2 }));
                (($fn145) result121->$class->vtable[5])(result121, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp144)));
            }
            }
            panda$core$String* $tmp147 = (($fn146) result121->$class->vtable[0])(result121);
            return $tmp147;
        }
        }
        else {
        panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 107 }));
        if ($tmp148.value) {
        {
            panda$core$MutableString* $tmp150 = (panda$core$MutableString*) malloc(40);
            $tmp150->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp150->refCount.value = 1;
            panda$core$Object* $tmp153 = (($fn152) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp155 = (($fn154) ((org$pandalanguage$pandac$ASTNode*) $tmp153)->$class->vtable[0])(((org$pandalanguage$pandac$ASTNode*) $tmp153));
            panda$core$MutableString$init$panda$core$String($tmp150, $tmp155);
            result149 = $tmp150;
            (($fn157) result149->$class->vtable[3])(result149, &$s156);
            separator158 = &$s159;
            panda$core$Int64 $tmp162 = (($fn161) self->children->$class->vtable[3])(self->children);
            panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp160, ((panda$core$Int64) { 1 }), $tmp162, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp164 = $tmp160.start.value;
            panda$core$Int64 i163 = { $tmp164 };
            int64_t $tmp166 = $tmp160.end.value;
            int64_t $tmp167 = $tmp160.step.value;
            bool $tmp168 = $tmp160.inclusive.value;
            bool $tmp175 = $tmp167 > 0;
            if ($tmp175) goto $l173; else goto $l174;
            $l173:;
            if ($tmp168) goto $l176; else goto $l177;
            $l176:;
            if ($tmp164 <= $tmp166) goto $l169; else goto $l171;
            $l177:;
            if ($tmp164 < $tmp166) goto $l169; else goto $l171;
            $l174:;
            if ($tmp168) goto $l178; else goto $l179;
            $l178:;
            if ($tmp164 >= $tmp166) goto $l169; else goto $l171;
            $l179:;
            if ($tmp164 > $tmp166) goto $l169; else goto $l171;
            $l169:;
            {
                (($fn181) result149->$class->vtable[3])(result149, separator158);
                panda$core$Object* $tmp183 = (($fn182) self->children->$class->vtable[2])(self->children, i163);
                (($fn184) result149->$class->vtable[5])(result149, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp183)));
                separator158 = &$s185;
            }
            $l172:;
            if ($tmp175) goto $l187; else goto $l188;
            $l187:;
            int64_t $tmp189 = $tmp166 - i163.value;
            if ($tmp168) goto $l190; else goto $l191;
            $l190:;
            if ($tmp189 >= $tmp167) goto $l186; else goto $l171;
            $l191:;
            if ($tmp189 > $tmp167) goto $l186; else goto $l171;
            $l188:;
            int64_t $tmp193 = i163.value - $tmp166;
            if ($tmp168) goto $l194; else goto $l195;
            $l194:;
            if ($tmp193 >= -$tmp167) goto $l186; else goto $l171;
            $l195:;
            if ($tmp193 > -$tmp167) goto $l186; else goto $l171;
            $l186:;
            i163.value += $tmp167;
            goto $l169;
            $l171:;
            (($fn198) result149->$class->vtable[3])(result149, &$s197);
            panda$core$String* $tmp200 = (($fn199) result149->$class->vtable[0])(result149);
            return $tmp200;
        }
        }
        else {
        panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 106 }));
        if ($tmp201.value) {
        {
            panda$core$Int64 $tmp203 = (($fn202) self->children->$class->vtable[3])(self->children);
            panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp203, ((panda$core$Int64) { 1 }));
            if ($tmp204.value) {
            {
                panda$core$String* $tmp206 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(self->payload, &$s205);
                panda$core$Object* $tmp208 = (($fn207) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp209 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp206, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp208)));
                return $tmp209;
            }
            }
            panda$core$String* $tmp211 = (($fn210) self->payload->$class->vtable[0])(self->payload);
            return $tmp211;
        }
        }
        else {
        panda$core$Bit $tmp212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 108 }));
        if ($tmp212.value) {
        {
            panda$core$Object* $tmp215 = (($fn214) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp216 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s213, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp215)));
            panda$core$String* $tmp218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp216, &$s217);
            panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp218, self->payload);
            panda$core$String* $tmp221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp219, &$s220);
            return $tmp221;
        }
        }
        else {
        panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 116 }));
        if ($tmp222.value) {
        {
            panda$core$String* $tmp224 = (($fn223) self->payload->$class->vtable[0])(self->payload);
            return $tmp224;
        }
        }
        else {
        panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 118 }));
        if ($tmp225.value) {
        {
            panda$core$Object* $tmp229 = (($fn228) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp230 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s227, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp229)));
            panda$core$String* $tmp232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp230, &$s231);
            panda$core$Object* $tmp234 = (($fn233) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp235 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp232, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp234)));
            panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp235, &$s236);
            result226 = $tmp237;
            panda$core$Int64 $tmp239 = (($fn238) self->children->$class->vtable[3])(self->children);
            panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp239, ((panda$core$Int64) { 3 }));
            if ($tmp240.value) {
            {
                panda$core$Object* $tmp243 = (($fn242) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 2 }));
                panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s241, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp243)));
                panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, &$s245);
                panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result226, $tmp246);
                return $tmp247;
            }
            }
            return result226;
        }
        }
        else {
        panda$core$Bit $tmp248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 119 }));
        if ($tmp248.value) {
        {
            panda$core$Object* $tmp251 = (($fn250) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp252 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s249, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp251)));
            panda$core$String* $tmp254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp252, &$s253);
            panda$core$Object* $tmp256 = (($fn255) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp257 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp254, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp256)));
            panda$core$String* $tmp259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp257, &$s258);
            panda$core$Object* $tmp261 = (($fn260) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp262 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp259, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp261)));
            panda$core$String* $tmp264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp262, &$s263);
            return $tmp264;
        }
        }
        else {
        panda$core$Bit $tmp265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 121 }));
        if ($tmp265.value) {
        {
            panda$core$Object* $tmp268 = (($fn267) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp269 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s266, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp268)));
            panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp269, &$s270);
            panda$core$Object* $tmp273 = (($fn272) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp274 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp271, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp273)));
            panda$core$String* $tmp276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp274, &$s275);
            return $tmp276;
        }
        }
        else {
        panda$core$Bit $tmp277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 120 }));
        if ($tmp277.value) {
        {
            panda$core$Object* $tmp280 = (($fn279) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp281 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s278, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp280)));
            panda$core$String* $tmp283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp281, &$s282);
            panda$core$Object* $tmp285 = (($fn284) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp283, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp285)));
            panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp286, &$s287);
            return $tmp288;
        }
        }
        else {
        panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 122 }));
        if ($tmp289.value) {
        {
            panda$core$Object* $tmp292 = (($fn291) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp293 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s290, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp292)));
            panda$core$String* $tmp295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp293, &$s294);
            return $tmp295;
        }
        }
        else {
        panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 134 }));
        if ($tmp296.value) {
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s297, self->payload);
                panda$core$String* $tmp300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp298, &$s299);
                return $tmp300;
            }
            }
            return &$s301;
        }
        }
        else {
        panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 135 }));
        if ($tmp302.value) {
        {
            if (((panda$core$Bit) { self->payload != NULL }).value) {
            {
                panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s303, self->payload);
                panda$core$String* $tmp306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp304, &$s305);
                return $tmp306;
            }
            }
            return &$s307;
        }
        }
        else {
        panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 136 }));
        if ($tmp308.value) {
        {
            panda$core$Int64 $tmp310 = (($fn309) self->children->$class->vtable[3])(self->children);
            panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp310, ((panda$core$Int64) { 1 }));
            if ($tmp311.value) {
            {
                panda$core$Object* $tmp314 = (($fn313) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s312, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp314)));
                panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s316);
                return $tmp317;
            }
            }
            return &$s318;
        }
        }
        else {
        panda$core$Bit $tmp319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 126 }));
        if ($tmp319.value) {
        {
            panda$core$MutableString* $tmp321 = (panda$core$MutableString*) malloc(40);
            $tmp321->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp321->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp321, &$s323);
            result320 = $tmp321;
            {
                ITable* $tmp325 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp325->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp325 = $tmp325->next;
                }
                $fn327 $tmp326 = $tmp325->methods[0];
                panda$collections$Iterator* $tmp328 = $tmp326(((panda$collections$Iterable*) self->children));
                child$Iter324 = $tmp328;
                $l329:;
                ITable* $tmp331 = child$Iter324->$class->itable;
                while ($tmp331->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp331 = $tmp331->next;
                }
                $fn333 $tmp332 = $tmp331->methods[0];
                panda$core$Bit $tmp334 = $tmp332(child$Iter324);
                panda$core$Bit $tmp335 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp334);
                if (!$tmp335.value) goto $l330;
                {
                    ITable* $tmp337 = child$Iter324->$class->itable;
                    while ($tmp337->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp337 = $tmp337->next;
                    }
                    $fn339 $tmp338 = $tmp337->methods[1];
                    panda$core$Object* $tmp340 = $tmp338(child$Iter324);
                    child336 = ((org$pandalanguage$pandac$ASTNode*) $tmp340);
                    panda$core$String* $tmp343 = (($fn342) child336->$class->vtable[0])(child336);
                    c341 = $tmp343;
                    panda$core$Bit $tmp346 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(c341, &$s345);
                    bool $tmp344 = $tmp346.value;
                    if (!$tmp344) goto $l347;
                    panda$core$Bit $tmp349 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(c341, &$s348);
                    $tmp344 = $tmp349.value;
                    $l347:;
                    panda$core$Bit $tmp350 = { $tmp344 };
                    if ($tmp350.value) {
                    {
                        panda$core$String$Index $tmp352 = panda$core$String$start$R$panda$core$String$Index(c341);
                        panda$core$String$Index $tmp353 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(c341, $tmp352);
                        panda$core$String$Index $tmp354 = panda$core$String$end$R$panda$core$String$Index(c341);
                        panda$core$String$Index $tmp355 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(c341, $tmp354);
                        panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp351, ((panda$core$String$Index$nullable) { $tmp353, true }), ((panda$core$String$Index$nullable) { $tmp355, true }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp356 = panda$core$String$$IDX$panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(c341, $tmp351);
                        (($fn357) result320->$class->vtable[3])(result320, $tmp356);
                    }
                    }
                    else {
                    {
                        (($fn358) result320->$class->vtable[5])(result320, ((panda$core$Object*) child336));
                    }
                    }
                    (($fn360) result320->$class->vtable[3])(result320, &$s359);
                }
                goto $l329;
                $l330:;
            }
            (($fn362) result320->$class->vtable[3])(result320, &$s361);
            panda$core$String* $tmp364 = (($fn363) result320->$class->vtable[0])(result320);
            return $tmp364;
        }
        }
        else {
        panda$core$Bit $tmp365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 109 }));
        if ($tmp365.value) {
        {
            panda$core$String* $tmp367 = (($fn366) self->payload->$class->vtable[0])(self->payload);
            return $tmp367;
        }
        }
        else {
        panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 110 }));
        if ($tmp368.value) {
        {
            panda$core$Object* $tmp370 = (($fn369) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp370)), &$s371);
            return $tmp372;
        }
        }
        else {
        panda$core$Bit $tmp373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 154 }));
        if ($tmp373.value) {
        {
            panda$core$MutableString* $tmp375 = (panda$core$MutableString*) malloc(40);
            $tmp375->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp375->refCount.value = 1;
            panda$core$Object* $tmp378 = (($fn377) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp380 = (($fn379) ((org$pandalanguage$pandac$ASTNode*) $tmp378)->$class->vtable[0])(((org$pandalanguage$pandac$ASTNode*) $tmp378));
            panda$core$MutableString$init$panda$core$String($tmp375, $tmp380);
            result374 = $tmp375;
            (($fn382) result374->$class->vtable[3])(result374, &$s381);
            separator383 = &$s384;
            {
                panda$core$SpecializedRange$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp386, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                panda$collections$ImmutableArray* $tmp388 = (($fn387) self->children->$class->vtable[8])(self->children, $tmp386);
                ITable* $tmp389 = ((panda$collections$Iterable*) $tmp388)->$class->itable;
                while ($tmp389->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp389 = $tmp389->next;
                }
                $fn391 $tmp390 = $tmp389->methods[0];
                panda$collections$Iterator* $tmp392 = $tmp390(((panda$collections$Iterable*) $tmp388));
                c$Iter385 = $tmp392;
                $l393:;
                ITable* $tmp395 = c$Iter385->$class->itable;
                while ($tmp395->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp395 = $tmp395->next;
                }
                $fn397 $tmp396 = $tmp395->methods[0];
                panda$core$Bit $tmp398 = $tmp396(c$Iter385);
                panda$core$Bit $tmp399 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp398);
                if (!$tmp399.value) goto $l394;
                {
                    ITable* $tmp401 = c$Iter385->$class->itable;
                    while ($tmp401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp401 = $tmp401->next;
                    }
                    $fn403 $tmp402 = $tmp401->methods[1];
                    panda$core$Object* $tmp404 = $tmp402(c$Iter385);
                    c400 = ((org$pandalanguage$pandac$ASTNode*) $tmp404);
                    (($fn405) result374->$class->vtable[3])(result374, separator383);
                    (($fn406) result374->$class->vtable[5])(result374, ((panda$core$Object*) c400));
                    separator383 = &$s407;
                }
                goto $l393;
                $l394:;
            }
            (($fn409) result374->$class->vtable[3])(result374, &$s408);
            panda$core$String* $tmp411 = (($fn410) result374->$class->vtable[0])(result374);
            return $tmp411;
        }
        }
        else {
        panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 139 }));
        if ($tmp412.value) {
        {
            panda$core$MutableString* $tmp414 = (panda$core$MutableString*) malloc(40);
            $tmp414->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp414->refCount.value = 1;
            panda$core$MutableString$init($tmp414);
            result413 = $tmp414;
            separator416 = &$s417;
            {
                ITable* $tmp419 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp419->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp419 = $tmp419->next;
                }
                $fn421 $tmp420 = $tmp419->methods[0];
                panda$collections$Iterator* $tmp422 = $tmp420(((panda$collections$Iterable*) self->children));
                c$Iter418 = $tmp422;
                $l423:;
                ITable* $tmp425 = c$Iter418->$class->itable;
                while ($tmp425->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp425 = $tmp425->next;
                }
                $fn427 $tmp426 = $tmp425->methods[0];
                panda$core$Bit $tmp428 = $tmp426(c$Iter418);
                panda$core$Bit $tmp429 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp428);
                if (!$tmp429.value) goto $l424;
                {
                    ITable* $tmp431 = c$Iter418->$class->itable;
                    while ($tmp431->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp431 = $tmp431->next;
                    }
                    $fn433 $tmp432 = $tmp431->methods[1];
                    panda$core$Object* $tmp434 = $tmp432(c$Iter418);
                    c430 = ((org$pandalanguage$pandac$ASTNode*) $tmp434);
                    (($fn435) result413->$class->vtable[3])(result413, separator416);
                    (($fn436) result413->$class->vtable[5])(result413, ((panda$core$Object*) c430));
                    separator416 = &$s437;
                }
                goto $l423;
                $l424:;
            }
            panda$core$String* $tmp439 = (($fn438) result413->$class->vtable[0])(result413);
            return $tmp439;
        }
        }
        else {
        panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 143 }));
        if ($tmp440.value) {
        {
            panda$core$String* $tmp442 = (($fn441) self->payload->$class->vtable[0])(self->payload);
            return $tmp442;
        }
        }
        else {
        panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 144 }));
        if ($tmp443.value) {
        {
            panda$core$MutableString* $tmp445 = (panda$core$MutableString*) malloc(40);
            $tmp445->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp445->refCount.value = 1;
            panda$core$MutableString$init($tmp445);
            result444 = $tmp445;
            {
                ITable* $tmp448 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp448->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp448 = $tmp448->next;
                }
                $fn450 $tmp449 = $tmp448->methods[0];
                panda$collections$Iterator* $tmp451 = $tmp449(((panda$collections$Iterable*) self->children));
                c$Iter447 = $tmp451;
                $l452:;
                ITable* $tmp454 = c$Iter447->$class->itable;
                while ($tmp454->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp454 = $tmp454->next;
                }
                $fn456 $tmp455 = $tmp454->methods[0];
                panda$core$Bit $tmp457 = $tmp455(c$Iter447);
                panda$core$Bit $tmp458 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp457);
                if (!$tmp458.value) goto $l453;
                {
                    ITable* $tmp460 = c$Iter447->$class->itable;
                    while ($tmp460->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp460 = $tmp460->next;
                    }
                    $fn462 $tmp461 = $tmp460->methods[1];
                    panda$core$Object* $tmp463 = $tmp461(c$Iter447);
                    c459 = ((org$pandalanguage$pandac$ASTNode*) $tmp463);
                    (($fn464) result444->$class->vtable[5])(result444, ((panda$core$Object*) c459));
                    (($fn466) result444->$class->vtable[3])(result444, &$s465);
                }
                goto $l452;
                $l453:;
            }
            panda$core$String* $tmp468 = (($fn467) result444->$class->vtable[0])(result444);
            return $tmp468;
        }
        }
        else {
        panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 129 }));
        if ($tmp469.value) {
        {
            panda$core$Int64 $tmp471 = (($fn470) self->children->$class->vtable[3])(self->children);
            panda$core$Bit $tmp472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp471, ((panda$core$Int64) { 1 }));
            if ($tmp472.value) {
            {
                panda$core$Object* $tmp474 = (($fn473) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
                panda$core$String* $tmp476 = (($fn475) ((org$pandalanguage$pandac$ASTNode*) $tmp474)->$class->vtable[0])(((org$pandalanguage$pandac$ASTNode*) $tmp474));
                return $tmp476;
            }
            }
            panda$core$Object* $tmp479 = (($fn478) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s477, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp479)));
            panda$core$String* $tmp482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, &$s481);
            panda$core$Object* $tmp484 = (($fn483) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp485 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp482, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp484)));
            panda$core$String* $tmp487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp485, &$s486);
            return $tmp487;
        }
        }
        else {
        panda$core$Bit $tmp488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 130 }));
        if ($tmp488.value) {
        {
            panda$core$MutableString* $tmp490 = (panda$core$MutableString*) malloc(40);
            $tmp490->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp490->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp490, &$s492);
            result489 = $tmp490;
            separator493 = &$s494;
            {
                ITable* $tmp496 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp496->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp496 = $tmp496->next;
                }
                $fn498 $tmp497 = $tmp496->methods[0];
                panda$collections$Iterator* $tmp499 = $tmp497(((panda$collections$Iterable*) self->children));
                c$Iter495 = $tmp499;
                $l500:;
                ITable* $tmp502 = c$Iter495->$class->itable;
                while ($tmp502->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp502 = $tmp502->next;
                }
                $fn504 $tmp503 = $tmp502->methods[0];
                panda$core$Bit $tmp505 = $tmp503(c$Iter495);
                panda$core$Bit $tmp506 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp505);
                if (!$tmp506.value) goto $l501;
                {
                    ITable* $tmp508 = c$Iter495->$class->itable;
                    while ($tmp508->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp508 = $tmp508->next;
                    }
                    $fn510 $tmp509 = $tmp508->methods[1];
                    panda$core$Object* $tmp511 = $tmp509(c$Iter495);
                    c507 = ((org$pandalanguage$pandac$ASTNode*) $tmp511);
                    (($fn512) result489->$class->vtable[3])(result489, separator493);
                    (($fn513) result489->$class->vtable[5])(result489, ((panda$core$Object*) c507));
                    separator493 = &$s514;
                }
                goto $l500;
                $l501:;
            }
            panda$core$String* $tmp516 = (($fn515) result489->$class->vtable[0])(result489);
            return $tmp516;
        }
        }
        else {
        panda$core$Bit $tmp517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 131 }));
        if ($tmp517.value) {
        {
            panda$core$MutableString* $tmp519 = (panda$core$MutableString*) malloc(40);
            $tmp519->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp519->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp519, &$s521);
            result518 = $tmp519;
            separator522 = &$s523;
            {
                ITable* $tmp525 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp525->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp525 = $tmp525->next;
                }
                $fn527 $tmp526 = $tmp525->methods[0];
                panda$collections$Iterator* $tmp528 = $tmp526(((panda$collections$Iterable*) self->children));
                c$Iter524 = $tmp528;
                $l529:;
                ITable* $tmp531 = c$Iter524->$class->itable;
                while ($tmp531->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp531 = $tmp531->next;
                }
                $fn533 $tmp532 = $tmp531->methods[0];
                panda$core$Bit $tmp534 = $tmp532(c$Iter524);
                panda$core$Bit $tmp535 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp534);
                if (!$tmp535.value) goto $l530;
                {
                    ITable* $tmp537 = c$Iter524->$class->itable;
                    while ($tmp537->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp537 = $tmp537->next;
                    }
                    $fn539 $tmp538 = $tmp537->methods[1];
                    panda$core$Object* $tmp540 = $tmp538(c$Iter524);
                    c536 = ((org$pandalanguage$pandac$ASTNode*) $tmp540);
                    (($fn541) result518->$class->vtable[3])(result518, separator522);
                    (($fn542) result518->$class->vtable[5])(result518, ((panda$core$Object*) c536));
                    separator522 = &$s543;
                }
                goto $l529;
                $l530:;
            }
            panda$core$String* $tmp545 = (($fn544) result518->$class->vtable[0])(result518);
            return $tmp545;
        }
        }
        else {
        panda$core$Bit $tmp546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 133 }));
        if ($tmp546.value) {
        {
            panda$core$MutableString* $tmp548 = (panda$core$MutableString*) malloc(40);
            $tmp548->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp548->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp548, &$s550);
            result547 = $tmp548;
            separator551 = &$s552;
            {
                ITable* $tmp554 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp554->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp554 = $tmp554->next;
                }
                $fn556 $tmp555 = $tmp554->methods[0];
                panda$collections$Iterator* $tmp557 = $tmp555(((panda$collections$Iterable*) self->children));
                c$Iter553 = $tmp557;
                $l558:;
                ITable* $tmp560 = c$Iter553->$class->itable;
                while ($tmp560->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp560 = $tmp560->next;
                }
                $fn562 $tmp561 = $tmp560->methods[0];
                panda$core$Bit $tmp563 = $tmp561(c$Iter553);
                panda$core$Bit $tmp564 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp563);
                if (!$tmp564.value) goto $l559;
                {
                    ITable* $tmp566 = c$Iter553->$class->itable;
                    while ($tmp566->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp566 = $tmp566->next;
                    }
                    $fn568 $tmp567 = $tmp566->methods[1];
                    panda$core$Object* $tmp569 = $tmp567(c$Iter553);
                    c565 = ((org$pandalanguage$pandac$ASTNode*) $tmp569);
                    (($fn570) result547->$class->vtable[3])(result547, separator551);
                    (($fn571) result547->$class->vtable[5])(result547, ((panda$core$Object*) c565));
                    separator551 = &$s572;
                }
                goto $l558;
                $l559:;
            }
            panda$core$String* $tmp574 = (($fn573) result547->$class->vtable[0])(result547);
            return $tmp574;
        }
        }
        else {
        panda$core$Bit $tmp575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 132 }));
        if ($tmp575.value) {
        {
            panda$core$MutableString* $tmp577 = (panda$core$MutableString*) malloc(40);
            $tmp577->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp577->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp577, &$s579);
            result576 = $tmp577;
            separator580 = &$s581;
            {
                ITable* $tmp583 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp583->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp583 = $tmp583->next;
                }
                $fn585 $tmp584 = $tmp583->methods[0];
                panda$collections$Iterator* $tmp586 = $tmp584(((panda$collections$Iterable*) self->children));
                c$Iter582 = $tmp586;
                $l587:;
                ITable* $tmp589 = c$Iter582->$class->itable;
                while ($tmp589->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp589 = $tmp589->next;
                }
                $fn591 $tmp590 = $tmp589->methods[0];
                panda$core$Bit $tmp592 = $tmp590(c$Iter582);
                panda$core$Bit $tmp593 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp592);
                if (!$tmp593.value) goto $l588;
                {
                    ITable* $tmp595 = c$Iter582->$class->itable;
                    while ($tmp595->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp595 = $tmp595->next;
                    }
                    $fn597 $tmp596 = $tmp595->methods[1];
                    panda$core$Object* $tmp598 = $tmp596(c$Iter582);
                    c594 = ((org$pandalanguage$pandac$ASTNode*) $tmp598);
                    (($fn599) result576->$class->vtable[3])(result576, separator580);
                    (($fn600) result576->$class->vtable[5])(result576, ((panda$core$Object*) c594));
                    separator580 = &$s601;
                }
                goto $l587;
                $l588:;
            }
            panda$core$String* $tmp603 = (($fn602) result576->$class->vtable[0])(result576);
            return $tmp603;
        }
        }
        else {
        panda$core$Bit $tmp604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 148 }));
        if ($tmp604.value) {
        {
            panda$core$Object* $tmp607 = (($fn606) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s605, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp607)));
            panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp608, &$s609);
            panda$core$Object* $tmp612 = (($fn611) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp610, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp612)));
            panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp613, &$s614);
            panda$core$Object* $tmp617 = (($fn616) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp618 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp615, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp617)));
            panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp618, &$s619);
            return $tmp620;
        }
        }
        else {
        panda$core$Bit $tmp621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 149 }));
        if ($tmp621.value) {
        {
            panda$core$String* $tmp623 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s622, self->payload);
            panda$core$String* $tmp625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp623, &$s624);
            panda$core$Object* $tmp627 = (($fn626) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp625, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp627)));
            panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp628, &$s629);
            return $tmp630;
        }
        }
        else {
        panda$core$Bit $tmp631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 150 }));
        if ($tmp631.value) {
        {
            panda$core$MutableString* $tmp633 = (panda$core$MutableString*) malloc(40);
            $tmp633->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp633->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp633, &$s635);
            result632 = $tmp633;
            separator636 = &$s637;
            {
                ITable* $tmp639 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp639->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp639 = $tmp639->next;
                }
                $fn641 $tmp640 = $tmp639->methods[0];
                panda$collections$Iterator* $tmp642 = $tmp640(((panda$collections$Iterable*) self->children));
                c$Iter638 = $tmp642;
                $l643:;
                ITable* $tmp645 = c$Iter638->$class->itable;
                while ($tmp645->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp645 = $tmp645->next;
                }
                $fn647 $tmp646 = $tmp645->methods[0];
                panda$core$Bit $tmp648 = $tmp646(c$Iter638);
                panda$core$Bit $tmp649 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp648);
                if (!$tmp649.value) goto $l644;
                {
                    ITable* $tmp651 = c$Iter638->$class->itable;
                    while ($tmp651->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp651 = $tmp651->next;
                    }
                    $fn653 $tmp652 = $tmp651->methods[1];
                    panda$core$Object* $tmp654 = $tmp652(c$Iter638);
                    c650 = ((org$pandalanguage$pandac$ASTNode*) $tmp654);
                    (($fn655) result632->$class->vtable[3])(result632, separator636);
                    (($fn656) result632->$class->vtable[5])(result632, ((panda$core$Object*) c650));
                    separator636 = &$s657;
                }
                goto $l643;
                $l644:;
            }
            (($fn659) result632->$class->vtable[3])(result632, &$s658);
            panda$core$String* $tmp661 = (($fn660) result632->$class->vtable[0])(result632);
            return $tmp661;
        }
        }
        else {
        panda$core$Bit $tmp662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 147 }));
        if ($tmp662.value) {
        {
            panda$core$Object* $tmp665 = (($fn664) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp666 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s663, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp665)));
            panda$core$String* $tmp668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp666, &$s667);
            panda$core$Object* $tmp670 = (($fn669) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp671 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp668, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp670)));
            panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp671, &$s672);
            panda$core$Object* $tmp675 = (($fn674) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp673, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp675)));
            panda$core$String* $tmp678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp676, &$s677);
            panda$core$Object* $tmp680 = (($fn679) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp681 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp678, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp680)));
            panda$core$String* $tmp683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp681, &$s682);
            panda$core$Object* $tmp685 = (($fn684) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp686 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp683, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp685)));
            panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp686, &$s687);
            return $tmp688;
        }
        }
        else {
        panda$core$Bit $tmp689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 145 }));
        if ($tmp689.value) {
        {
            panda$core$Object* $tmp692 = (($fn691) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp693 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s690, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp692)));
            panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp693, &$s694);
            panda$core$Object* $tmp697 = (($fn696) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp695, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp697)));
            panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp698, &$s699);
            panda$core$String* $tmp701 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp700, self->payload);
            panda$core$String* $tmp703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp701, &$s702);
            panda$core$Object* $tmp705 = (($fn704) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp706 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp703, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp705)));
            panda$core$String* $tmp708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp706, &$s707);
            panda$core$Object* $tmp711 = (($fn710) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s709, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp711)));
            panda$core$String* $tmp714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp712, &$s713);
            panda$core$Object* $tmp716 = (($fn715) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp717 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp714, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp716)));
            panda$core$String* $tmp719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp717, &$s718);
            panda$core$Object* $tmp721 = (($fn720) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp722 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp719, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp721)));
            panda$core$String* $tmp724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp722, &$s723);
            panda$core$String* $tmp725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp708, $tmp724);
            return $tmp725;
        }
        }
        else {
        panda$core$Bit $tmp726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 146 }));
        if ($tmp726.value) {
        {
            panda$core$Object* $tmp729 = (($fn728) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp730 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s727, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp729)));
            panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp730, &$s731);
            panda$core$Object* $tmp734 = (($fn733) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp732, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp734)));
            panda$core$String* $tmp737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp735, &$s736);
            panda$core$String* $tmp738 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp737, self->payload);
            panda$core$String* $tmp740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp738, &$s739);
            panda$core$Object* $tmp742 = (($fn741) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 2 }));
            panda$core$String* $tmp743 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp740, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp742)));
            panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp743, &$s744);
            panda$core$Object* $tmp748 = (($fn747) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 3 }));
            panda$core$String* $tmp749 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s746, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp748)));
            panda$core$String* $tmp751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp749, &$s750);
            panda$core$Object* $tmp753 = (($fn752) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 4 }));
            panda$core$String* $tmp754 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp751, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp753)));
            panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp754, &$s755);
            panda$core$Object* $tmp758 = (($fn757) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 5 }));
            panda$core$String* $tmp759 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp756, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp758)));
            panda$core$String* $tmp761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp759, &$s760);
            panda$core$String* $tmp762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp745, $tmp761);
            return $tmp762;
        }
        }
        else {
        panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 140 }));
        if ($tmp763.value) {
        {
            panda$core$MutableString* $tmp765 = (panda$core$MutableString*) malloc(40);
            $tmp765->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp765->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp765, &$s767);
            result764 = $tmp765;
            {
                ITable* $tmp769 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp769->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp769 = $tmp769->next;
                }
                $fn771 $tmp770 = $tmp769->methods[0];
                panda$collections$Iterator* $tmp772 = $tmp770(((panda$collections$Iterable*) self->children));
                c$Iter768 = $tmp772;
                $l773:;
                ITable* $tmp775 = c$Iter768->$class->itable;
                while ($tmp775->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp775 = $tmp775->next;
                }
                $fn777 $tmp776 = $tmp775->methods[0];
                panda$core$Bit $tmp778 = $tmp776(c$Iter768);
                panda$core$Bit $tmp779 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp778);
                if (!$tmp779.value) goto $l774;
                {
                    ITable* $tmp781 = c$Iter768->$class->itable;
                    while ($tmp781->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp781 = $tmp781->next;
                    }
                    $fn783 $tmp782 = $tmp781->methods[1];
                    panda$core$Object* $tmp784 = $tmp782(c$Iter768);
                    c780 = ((org$pandalanguage$pandac$ASTNode*) $tmp784);
                    (($fn785) result764->$class->vtable[5])(result764, ((panda$core$Object*) c780));
                    (($fn787) result764->$class->vtable[3])(result764, &$s786);
                }
                goto $l773;
                $l774:;
            }
            (($fn789) result764->$class->vtable[3])(result764, &$s788);
            panda$core$String* $tmp791 = (($fn790) result764->$class->vtable[0])(result764);
            return $tmp791;
        }
        }
        else {
        panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 142 }));
        if ($tmp792.value) {
        {
            panda$core$MutableString* $tmp794 = (panda$core$MutableString*) malloc(40);
            $tmp794->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp794->refCount.value = 1;
            panda$core$MutableString$init($tmp794);
            result793 = $tmp794;
            panda$core$Object* $tmp797 = (($fn796) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            (($fn798) result793->$class->vtable[5])(result793, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp797)));
            panda$core$Object* $tmp800 = (($fn799) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
            (($fn801) result793->$class->vtable[5])(result793, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp800)));
            panda$core$String* $tmp803 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s802, self->payload);
            panda$core$String* $tmp805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp803, &$s804);
            (($fn806) result793->$class->vtable[3])(result793, $tmp805);
            panda$core$Object* $tmp808 = (($fn807) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 2 }));
            (($fn809) result793->$class->vtable[5])(result793, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp808)));
            panda$core$Object* $tmp811 = (($fn810) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 3 }));
            panda$core$Bit $tmp812 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp811)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp812.value) {
            {
                (($fn814) result793->$class->vtable[3])(result793, &$s813);
                panda$core$Object* $tmp816 = (($fn815) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 3 }));
                (($fn817) result793->$class->vtable[5])(result793, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp816)));
            }
            }
            panda$core$Object* $tmp819 = (($fn818) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 4 }));
            panda$core$Bit $tmp820 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp819)->kind, ((panda$core$Int64) { 138 }));
            if ($tmp820.value) {
            {
                (($fn822) result793->$class->vtable[3])(result793, &$s821);
                panda$core$Object* $tmp824 = (($fn823) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 4 }));
                (($fn825) result793->$class->vtable[5])(result793, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp824)));
                (($fn827) result793->$class->vtable[3])(result793, &$s826);
            }
            }
            (($fn829) result793->$class->vtable[3])(result793, &$s828);
            panda$core$Object* $tmp831 = (($fn830) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 5 }));
            (($fn832) result793->$class->vtable[5])(result793, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp831)));
            panda$core$String* $tmp834 = (($fn833) result793->$class->vtable[0])(result793);
            return $tmp834;
        }
        }
        else {
        panda$core$Bit $tmp835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 151 }));
        if ($tmp835.value) {
        {
            panda$core$MutableString* $tmp837 = (panda$core$MutableString*) malloc(40);
            $tmp837->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp837->refCount.value = 1;
            panda$core$MutableString$init($tmp837);
            result836 = $tmp837;
            panda$core$Object* $tmp840 = (($fn839) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 0 }));
            (($fn841) result836->$class->vtable[5])(result836, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp840)));
            panda$core$Object* $tmp843 = (($fn842) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 1 }));
            (($fn844) result836->$class->vtable[5])(result836, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp843)));
            panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s845, self->payload);
            panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp846, &$s847);
            (($fn849) result836->$class->vtable[3])(result836, $tmp848);
            panda$core$Object* $tmp851 = (($fn850) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 2 }));
            (($fn852) result836->$class->vtable[5])(result836, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp851)));
            (($fn854) result836->$class->vtable[3])(result836, &$s853);
            panda$core$Object* $tmp856 = (($fn855) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 3 }));
            (($fn857) result836->$class->vtable[5])(result836, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp856)));
            panda$core$Object* $tmp859 = (($fn858) self->children->$class->vtable[2])(self->children, ((panda$core$Int64) { 4 }));
            (($fn860) result836->$class->vtable[5])(result836, ((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp859)));
            panda$core$String* $tmp862 = (($fn861) result836->$class->vtable[0])(result836);
            return $tmp862;
        }
        }
        else {
        panda$core$Bit $tmp863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 152 }));
        if ($tmp863.value) {
        {
            panda$core$MutableString* $tmp865 = (panda$core$MutableString*) malloc(40);
            $tmp865->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp865->refCount.value = 1;
            panda$core$MutableString$init($tmp865);
            result864 = $tmp865;
            {
                ITable* $tmp868 = ((panda$collections$Iterable*) self->children)->$class->itable;
                while ($tmp868->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp868 = $tmp868->next;
                }
                $fn870 $tmp869 = $tmp868->methods[0];
                panda$collections$Iterator* $tmp871 = $tmp869(((panda$collections$Iterable*) self->children));
                c$Iter867 = $tmp871;
                $l872:;
                ITable* $tmp874 = c$Iter867->$class->itable;
                while ($tmp874->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp874 = $tmp874->next;
                }
                $fn876 $tmp875 = $tmp874->methods[0];
                panda$core$Bit $tmp877 = $tmp875(c$Iter867);
                panda$core$Bit $tmp878 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp877);
                if (!$tmp878.value) goto $l873;
                {
                    ITable* $tmp880 = c$Iter867->$class->itable;
                    while ($tmp880->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp880 = $tmp880->next;
                    }
                    $fn882 $tmp881 = $tmp880->methods[1];
                    panda$core$Object* $tmp883 = $tmp881(c$Iter867);
                    c879 = ((org$pandalanguage$pandac$ASTNode*) $tmp883);
                    (($fn884) result864->$class->vtable[5])(result864, ((panda$core$Object*) c879));
                    (($fn886) result864->$class->vtable[3])(result864, &$s885);
                }
                goto $l872;
                $l873:;
            }
            panda$core$String* $tmp888 = (($fn887) result864->$class->vtable[0])(result864);
            return $tmp888;
        }
        }
        else {
        panda$core$Bit $tmp889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 114 }));
        if ($tmp889.value) {
        {
            return &$s890;
        }
        }
        else {
        panda$core$Bit $tmp891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 115 }));
        if ($tmp891.value) {
        {
            return &$s892;
        }
        }
        else {
        panda$core$Bit $tmp893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381632, ((panda$core$Int64) { 138 }));
        if ($tmp893.value) {
        {
            return &$s894;
        }
        }
        else {
        {
            panda$core$String* $tmp896 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s895, ((panda$core$Object*) wrap_panda$core$Int64(self->kind)));
            panda$core$String* $tmp898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp896, &$s897);
            return $tmp898;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}

