#include "org/pandalanguage/pandac/Scanner.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
#include "panda/collections/Array.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/io/File.h"
#include "panda/collections/MapView.h"
#include "panda/core/Range.h"
#include "panda/collections/HashMap.h"


typedef panda$core$Object* (*$fn11)(panda$collections$ImmutableArray*, panda$core$Int64);
org$pandalanguage$pandac$Scanner$class_type org$pandalanguage$pandac$Scanner$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode, org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64, org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit, org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q, org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q, org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT, org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT} };

typedef org$pandalanguage$pandac$Type* (*$fn13)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn28)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn34)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn40)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn46)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn49)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn51)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn52)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn55)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn58)(panda$core$MutableString*);
typedef panda$collections$Iterator* (*$fn64)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn70)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn76)(panda$collections$Iterator*);
typedef void (*$fn123)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn127)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn130)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn133)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Annotations* (*$fn135)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn139)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn148)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn152)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn158)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn164)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn167)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn170)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn173)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64 (*$fn175)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn178)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn180)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn182)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn188)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn190)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Object* (*$fn192)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn195)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn198)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Annotations* (*$fn200)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn206)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn210)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn216)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn222)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn226)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn228)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn234)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn240)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn246)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn252)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn254)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn262)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Bit (*$fn267)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Int64 (*$fn271)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn281)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn284)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn287)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Annotations* (*$fn289)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn295)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Bit (*$fn298)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Object* (*$fn307)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn311)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn317)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn323)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn327)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn329)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn332)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn334)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn340)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn344)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn345)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn348)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn350)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Annotations*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn356)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn371)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn374)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn377)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Annotations* (*$fn379)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn384)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn388)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn392)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn398)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn404)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn407)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn410)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn412)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn418)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn421)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn423)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn432)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn436)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn442)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn448)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn450)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn457)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn461)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn467)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn473)(panda$collections$Iterator*);
typedef void (*$fn477)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn480)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn482)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn489)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn491)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn494)(org$pandalanguage$pandac$Scanner*, panda$io$File*, panda$collections$MapView*, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn500)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*, panda$core$String*);
typedef void (*$fn501)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn504)(org$pandalanguage$pandac$Scanner*, panda$io$File*, panda$collections$MapView*, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn510)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*, panda$core$String*);
typedef void (*$fn528)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Object* (*$fn540)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn543)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn546)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Annotations* (*$fn548)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn553)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn557)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn561)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn567)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn573)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn576)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn579)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn581)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn590)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn594)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn600)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn606)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn608)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn615)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn619)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn625)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn631)(panda$collections$Iterator*);
typedef void (*$fn635)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn638)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn640)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn647)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn651)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn654)(org$pandalanguage$pandac$Scanner*, panda$io$File*, panda$collections$MapView*, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn660)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn663)(org$pandalanguage$pandac$Scanner*, panda$io$File*, panda$collections$MapView*, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn669)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn673)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn679)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn685)(panda$collections$Iterator*);
typedef void (*$fn687)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, panda$collections$Array*);
typedef panda$collections$Iterator* (*$fn699)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn705)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn711)(panda$collections$Iterator*);
typedef void (*$fn724)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn727)(org$pandalanguage$pandac$Scanner*, panda$io$File*, panda$collections$MapView*, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn729)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, panda$collections$Array*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn732)(org$pandalanguage$pandac$Scanner*, panda$io$File*, panda$collections$MapView*, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn734)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, panda$collections$Array*);

static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x72\x6F\x74\x65\x63\x74\x65\x64", 10, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x63\x6B\x61\x67\x65", 8, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x6F\x76\x65\x72\x72\x69\x64\x65", 9, 1 };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x65\x78\x74\x65\x72\x6E\x61\x6C", 9, 1 };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x69\x6D\x70\x6C\x69\x63\x69\x74", 10, 1 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x66\x69\x6E\x61\x6C", 6, 1 };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x61\x62\x73\x74\x72\x61\x63\x74", 9, 1 };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x69\x6E\x6C\x69\x6E\x65", 7, 1 };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x63\x6F\x67\x6E\x69\x7A\x65\x64\x20\x61\x6E\x6E\x6F\x74\x61\x74\x69\x6F\x6E\x20\x27", 25, 1 };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73\x20\x6D\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 33, 1 };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x6F\x6E\x79\x6D\x6F\x75\x73", 9, 1 };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };

void org$pandalanguage$pandac$Scanner$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$Scanner$convertType$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_type) {
    panda$core$Int64 $match$2631;
    panda$collections$Array* children8;
    panda$collections$Array* children21;
    panda$core$MutableString* name24;
    panda$core$String* separator29;
    panda$collections$Iterator* c$Iter31;
    org$pandalanguage$pandac$ASTNode* c43;
    org$pandalanguage$pandac$Type* child48;
    {
        $match$2631 = p_type->kind;
        panda$core$Bit $tmp2 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2631, ((panda$core$Int64) { 138 }));
        if ($tmp2.value) {
        {
            org$pandalanguage$pandac$Type* $tmp3 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
            return $tmp3;
        }
        }
        else {
        panda$core$Bit $tmp4 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2631, ((panda$core$Int64) { 109 }));
        if ($tmp4.value) {
        {
            org$pandalanguage$pandac$Type* $tmp5 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp5->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp5->refCount.value = 1;
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64($tmp5, ((panda$core$String*) p_type->payload), ((panda$core$Int64) { 10 }), p_type->offset);
            return $tmp5;
        }
        }
        else {
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2631, ((panda$core$Int64) { 110 }));
        if ($tmp7.value) {
        {
            panda$collections$Array* $tmp9 = (panda$collections$Array*) malloc(40);
            $tmp9->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp9->refCount.value = 1;
            panda$collections$Array$init($tmp9);
            children8 = $tmp9;
            panda$core$Object* $tmp12 = (($fn11) p_type->children->$class->vtable[2])(p_type->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp14 = (($fn13) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp12));
            panda$collections$Array$add$panda$collections$Array$T(children8, ((panda$core$Object*) $tmp14));
            org$pandalanguage$pandac$Type* $tmp15 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp15->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp15->refCount.value = 1;
            panda$core$Object* $tmp17 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(children8, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp19 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp17))->name, &$s18);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp15, $tmp19, ((panda$core$Int64) { 11 }), p_type->offset, ((panda$collections$ListView*) children8), ((panda$core$Bit) { false }));
            return $tmp15;
        }
        }
        else {
        panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$2631, ((panda$core$Int64) { 154 }));
        if ($tmp20.value) {
        {
            panda$collections$Array* $tmp22 = (panda$collections$Array*) malloc(40);
            $tmp22->$class = (panda$core$Class*) &panda$collections$Array$class;
            $tmp22->refCount.value = 1;
            panda$collections$Array$init($tmp22);
            children21 = $tmp22;
            panda$core$MutableString* $tmp25 = (panda$core$MutableString*) malloc(40);
            $tmp25->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp25->refCount.value = 1;
            panda$core$MutableString$init$panda$core$String($tmp25, ((panda$core$String*) p_type->payload));
            name24 = $tmp25;
            (($fn28) name24->$class->vtable[3])(name24, &$s27);
            separator29 = &$s30;
            {
                ITable* $tmp32 = ((panda$collections$Iterable*) p_type->children)->$class->itable;
                while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp32 = $tmp32->next;
                }
                $fn34 $tmp33 = $tmp32->methods[0];
                panda$collections$Iterator* $tmp35 = $tmp33(((panda$collections$Iterable*) p_type->children));
                c$Iter31 = $tmp35;
                $l36:;
                ITable* $tmp38 = c$Iter31->$class->itable;
                while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp38 = $tmp38->next;
                }
                $fn40 $tmp39 = $tmp38->methods[0];
                panda$core$Bit $tmp41 = $tmp39(c$Iter31);
                panda$core$Bit $tmp42 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp41);
                if (!$tmp42.value) goto $l37;
                {
                    ITable* $tmp44 = c$Iter31->$class->itable;
                    while ($tmp44->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp44 = $tmp44->next;
                    }
                    $fn46 $tmp45 = $tmp44->methods[1];
                    panda$core$Object* $tmp47 = $tmp45(c$Iter31);
                    c43 = ((org$pandalanguage$pandac$ASTNode*) $tmp47);
                    org$pandalanguage$pandac$Type* $tmp50 = (($fn49) self->$class->vtable[2])(self, c43);
                    child48 = $tmp50;
                    panda$collections$Array$add$panda$collections$Array$T(children21, ((panda$core$Object*) child48));
                    (($fn51) name24->$class->vtable[3])(name24, separator29);
                    (($fn52) name24->$class->vtable[3])(name24, ((org$pandalanguage$pandac$Symbol*) child48)->name);
                    separator29 = &$s53;
                }
                goto $l36;
                $l37:;
            }
            (($fn55) name24->$class->vtable[3])(name24, &$s54);
            org$pandalanguage$pandac$Type* $tmp56 = (org$pandalanguage$pandac$Type*) malloc(64);
            $tmp56->$class = (panda$core$Class*) &org$pandalanguage$pandac$Type$class;
            $tmp56->refCount.value = 1;
            panda$core$String* $tmp59 = (($fn58) name24->$class->vtable[0])(name24);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$panda$core$Bit($tmp56, $tmp59, ((panda$core$Int64) { 21 }), p_type->offset, ((panda$collections$ListView*) children21), ((panda$core$Bit) { false }));
            return $tmp56;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
    }
}
org$pandalanguage$pandac$Annotations* org$pandalanguage$pandac$Scanner$convertAnnotations$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_a) {
    panda$core$Int64 flags60;
    panda$collections$Iterator* c$Iter61;
    org$pandalanguage$pandac$ASTNode* c73;
    panda$core$String* $match$184278;
    flags60 = ((panda$core$Int64) { 0 });
    {
        ITable* $tmp62 = ((panda$collections$Iterable*) p_a->children)->$class->itable;
        while ($tmp62->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp62 = $tmp62->next;
        }
        $fn64 $tmp63 = $tmp62->methods[0];
        panda$collections$Iterator* $tmp65 = $tmp63(((panda$collections$Iterable*) p_a->children));
        c$Iter61 = $tmp65;
        $l66:;
        ITable* $tmp68 = c$Iter61->$class->itable;
        while ($tmp68->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp68 = $tmp68->next;
        }
        $fn70 $tmp69 = $tmp68->methods[0];
        panda$core$Bit $tmp71 = $tmp69(c$Iter61);
        panda$core$Bit $tmp72 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp71);
        if (!$tmp72.value) goto $l67;
        {
            ITable* $tmp74 = c$Iter61->$class->itable;
            while ($tmp74->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp74 = $tmp74->next;
            }
            $fn76 $tmp75 = $tmp74->methods[1];
            panda$core$Object* $tmp77 = $tmp75(c$Iter61);
            c73 = ((org$pandalanguage$pandac$ASTNode*) $tmp77);
            {
                $match$184278 = ((panda$core$String*) c73->payload);
                panda$core$Bit $tmp80 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184278, &$s79);
                if ($tmp80.value) {
                {
                    panda$core$Int64 $tmp81 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 1 }));
                    panda$core$Int64 $tmp82 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp81);
                    flags60 = $tmp82;
                }
                }
                else {
                panda$core$Bit $tmp84 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184278, &$s83);
                if ($tmp84.value) {
                {
                    panda$core$Int64 $tmp85 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 2 }));
                    panda$core$Int64 $tmp86 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp85);
                    flags60 = $tmp86;
                }
                }
                else {
                panda$core$Bit $tmp88 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184278, &$s87);
                if ($tmp88.value) {
                {
                    panda$core$Int64 $tmp89 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 3 }));
                    panda$core$Int64 $tmp90 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp89);
                    flags60 = $tmp90;
                }
                }
                else {
                panda$core$Bit $tmp92 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184278, &$s91);
                if ($tmp92.value) {
                {
                    panda$core$Int64 $tmp93 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
                    panda$core$Int64 $tmp94 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp93);
                    flags60 = $tmp94;
                }
                }
                else {
                panda$core$Bit $tmp96 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184278, &$s95);
                if ($tmp96.value) {
                {
                    panda$core$Int64 $tmp97 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 5 }));
                    panda$core$Int64 $tmp98 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp97);
                    flags60 = $tmp98;
                }
                }
                else {
                panda$core$Bit $tmp100 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184278, &$s99);
                if ($tmp100.value) {
                {
                    panda$core$Int64 $tmp101 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 6 }));
                    panda$core$Int64 $tmp102 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp101);
                    flags60 = $tmp102;
                }
                }
                else {
                panda$core$Bit $tmp104 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184278, &$s103);
                if ($tmp104.value) {
                {
                    panda$core$Int64 $tmp105 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 7 }));
                    panda$core$Int64 $tmp106 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp105);
                    flags60 = $tmp106;
                }
                }
                else {
                panda$core$Bit $tmp108 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184278, &$s107);
                if ($tmp108.value) {
                {
                    panda$core$Int64 $tmp109 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
                    panda$core$Int64 $tmp110 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp109);
                    flags60 = $tmp110;
                }
                }
                else {
                panda$core$Bit $tmp112 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184278, &$s111);
                if ($tmp112.value) {
                {
                    panda$core$Int64 $tmp113 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                    panda$core$Int64 $tmp114 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp113);
                    flags60 = $tmp114;
                }
                }
                else {
                panda$core$Bit $tmp116 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184278, &$s115);
                if ($tmp116.value) {
                {
                    panda$core$Int64 $tmp117 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
                    panda$core$Int64 $tmp118 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp117);
                    flags60 = $tmp118;
                }
                }
                else {
                {
                    panda$core$String* $tmp120 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s119, c73->payload);
                    panda$core$String* $tmp122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp120, &$s121);
                    (($fn123) self->compiler->$class->vtable[95])(self->compiler, c73->offset, $tmp122);
                }
                }
                }
                }
                }
                }
                }
                }
                }
                }
                }
            }
        }
        goto $l66;
        $l67:;
    }
    org$pandalanguage$pandac$Annotations* $tmp124 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp124->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp124->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp124, flags60);
    return $tmp124;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_f) {
    panda$core$String* doccomment126;
    org$pandalanguage$pandac$Annotations* annotations132;
    panda$core$Int64 kind137;
    panda$core$Int64 $match$3203138;
    panda$collections$Iterator* decl$Iter147;
    org$pandalanguage$pandac$ASTNode* decl161;
    org$pandalanguage$pandac$ASTNode* value166;
    org$pandalanguage$pandac$Type* type172;
    org$pandalanguage$pandac$FieldDecl* field185;
    panda$core$Object* $tmp128 = (($fn127) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp129 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp128)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp129.value) {
    {
        panda$core$Object* $tmp131 = (($fn130) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 0 }));
        doccomment126 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp131)->payload);
    }
    }
    else {
    {
        doccomment126 = NULL;
    }
    }
    panda$core$Object* $tmp134 = (($fn133) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp136 = (($fn135) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp134));
    annotations132 = $tmp136;
    {
        panda$core$Object* $tmp140 = (($fn139) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 2 }));
        $match$3203138 = ((org$pandalanguage$pandac$ASTNode*) $tmp140)->kind;
        panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3203138, ((panda$core$Int64) { 130 }));
        if ($tmp141.value) {
        {
            kind137 = ((panda$core$Int64) { 10000 });
        }
        }
        else {
        panda$core$Bit $tmp142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3203138, ((panda$core$Int64) { 131 }));
        if ($tmp142.value) {
        {
            kind137 = ((panda$core$Int64) { 10001 });
        }
        }
        else {
        panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3203138, ((panda$core$Int64) { 132 }));
        if ($tmp143.value) {
        {
            kind137 = ((panda$core$Int64) { 10002 });
            panda$core$Int64 $tmp144 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
            panda$core$Int64 $tmp145 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations132->flags, $tmp144);
            annotations132->flags = $tmp145;
        }
        }
        else {
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3203138, ((panda$core$Int64) { 133 }));
        if ($tmp146.value) {
        {
            kind137 = ((panda$core$Int64) { 10003 });
        }
        }
        }
        }
        }
    }
    {
        panda$core$Object* $tmp149 = (($fn148) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp150 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp149)->children)->$class->itable;
        while ($tmp150->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp150 = $tmp150->next;
        }
        $fn152 $tmp151 = $tmp150->methods[0];
        panda$collections$Iterator* $tmp153 = $tmp151(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp149)->children));
        decl$Iter147 = $tmp153;
        $l154:;
        ITable* $tmp156 = decl$Iter147->$class->itable;
        while ($tmp156->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp156 = $tmp156->next;
        }
        $fn158 $tmp157 = $tmp156->methods[0];
        panda$core$Bit $tmp159 = $tmp157(decl$Iter147);
        panda$core$Bit $tmp160 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp159);
        if (!$tmp160.value) goto $l155;
        {
            ITable* $tmp162 = decl$Iter147->$class->itable;
            while ($tmp162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp162 = $tmp162->next;
            }
            $fn164 $tmp163 = $tmp162->methods[1];
            panda$core$Object* $tmp165 = $tmp163(decl$Iter147);
            decl161 = ((org$pandalanguage$pandac$ASTNode*) $tmp165);
            panda$core$Int64 $tmp168 = (($fn167) decl161->children->$class->vtable[3])(decl161->children);
            panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp168, ((panda$core$Int64) { 2 }));
            if ($tmp169.value) {
            {
                panda$core$Object* $tmp171 = (($fn170) decl161->children->$class->vtable[2])(decl161->children, ((panda$core$Int64) { 1 }));
                value166 = ((org$pandalanguage$pandac$ASTNode*) $tmp171);
            }
            }
            else {
            {
                value166 = NULL;
            }
            }
            panda$core$Object* $tmp174 = (($fn173) decl161->children->$class->vtable[2])(decl161->children, ((panda$core$Int64) { 0 }));
            panda$core$Int64 $tmp176 = (($fn175) ((org$pandalanguage$pandac$ASTNode*) $tmp174)->children->$class->vtable[3])(((org$pandalanguage$pandac$ASTNode*) $tmp174)->children);
            panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp176, ((panda$core$Int64) { 1 }));
            if ($tmp177.value) {
            {
                panda$core$Object* $tmp179 = (($fn178) decl161->children->$class->vtable[2])(decl161->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp181 = (($fn180) ((org$pandalanguage$pandac$ASTNode*) $tmp179)->children->$class->vtable[2])(((org$pandalanguage$pandac$ASTNode*) $tmp179)->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp183 = (($fn182) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp181));
                type172 = $tmp183;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp184 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                type172 = $tmp184;
            }
            }
            org$pandalanguage$pandac$FieldDecl* $tmp186 = (org$pandalanguage$pandac$FieldDecl*) malloc(97);
            $tmp186->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
            $tmp186->refCount.value = 1;
            panda$core$Object* $tmp189 = (($fn188) decl161->children->$class->vtable[2])(decl161->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp186, p_owner, decl161->offset, doccomment126, annotations132, kind137, ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp189)->payload), type172, value166);
            field185 = $tmp186;
            (($fn190) p_owner->symbolTable->$class->vtable[2])(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field185));
            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field185));
        }
        goto $l154;
        $l155:;
    }
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_i) {
    panda$core$String* doccomment191;
    org$pandalanguage$pandac$Annotations* annotations197;
    panda$collections$Array* parameters202;
    panda$collections$Iterator* p$Iter205;
    org$pandalanguage$pandac$ASTNode* p219;
    panda$core$Object* $tmp193 = (($fn192) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp194 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp193)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp194.value) {
    {
        panda$core$Object* $tmp196 = (($fn195) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 0 }));
        doccomment191 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp196)->payload);
    }
    }
    else {
    {
        doccomment191 = NULL;
    }
    }
    panda$core$Object* $tmp199 = (($fn198) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp201 = (($fn200) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp199));
    annotations197 = $tmp201;
    panda$collections$Array* $tmp203 = (panda$collections$Array*) malloc(40);
    $tmp203->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp203->refCount.value = 1;
    panda$collections$Array$init($tmp203);
    parameters202 = $tmp203;
    {
        panda$core$Object* $tmp207 = (($fn206) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp208 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp207)->children)->$class->itable;
        while ($tmp208->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp208 = $tmp208->next;
        }
        $fn210 $tmp209 = $tmp208->methods[0];
        panda$collections$Iterator* $tmp211 = $tmp209(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp207)->children));
        p$Iter205 = $tmp211;
        $l212:;
        ITable* $tmp214 = p$Iter205->$class->itable;
        while ($tmp214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp214 = $tmp214->next;
        }
        $fn216 $tmp215 = $tmp214->methods[0];
        panda$core$Bit $tmp217 = $tmp215(p$Iter205);
        panda$core$Bit $tmp218 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp217);
        if (!$tmp218.value) goto $l213;
        {
            ITable* $tmp220 = p$Iter205->$class->itable;
            while ($tmp220->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp220 = $tmp220->next;
            }
            $fn222 $tmp221 = $tmp220->methods[1];
            panda$core$Object* $tmp223 = $tmp221(p$Iter205);
            p219 = ((org$pandalanguage$pandac$ASTNode*) $tmp223);
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp224 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp224->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp224->refCount.value = 1;
            panda$core$Object* $tmp227 = (($fn226) p219->children->$class->vtable[2])(p219->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp229 = (($fn228) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp227));
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp224, ((panda$core$String*) p219->payload), $tmp229);
            panda$collections$Array$add$panda$collections$Array$T(parameters202, ((panda$core$Object*) $tmp224));
        }
        goto $l212;
        $l213:;
    }
    org$pandalanguage$pandac$MethodDecl* $tmp230 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
    $tmp230->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
    $tmp230->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp233 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Object* $tmp235 = (($fn234) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp230, p_owner, p_i->offset, doccomment191, annotations197, ((panda$core$Int64) { 59 }), &$s232, parameters202, $tmp233, ((org$pandalanguage$pandac$ASTNode*) $tmp235));
    return $tmp230;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    panda$core$Int64 result236;
    panda$collections$Iterator* child$Iter237;
    org$pandalanguage$pandac$ASTNode* child249;
    result236 = ((panda$core$Int64) { 1 });
    {
        ITable* $tmp238 = ((panda$collections$Iterable*) p_node->children)->$class->itable;
        while ($tmp238->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp238 = $tmp238->next;
        }
        $fn240 $tmp239 = $tmp238->methods[0];
        panda$collections$Iterator* $tmp241 = $tmp239(((panda$collections$Iterable*) p_node->children));
        child$Iter237 = $tmp241;
        $l242:;
        ITable* $tmp244 = child$Iter237->$class->itable;
        while ($tmp244->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp244 = $tmp244->next;
        }
        $fn246 $tmp245 = $tmp244->methods[0];
        panda$core$Bit $tmp247 = $tmp245(child$Iter237);
        panda$core$Bit $tmp248 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp247);
        if (!$tmp248.value) goto $l243;
        {
            ITable* $tmp250 = child$Iter237->$class->itable;
            while ($tmp250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp250 = $tmp250->next;
            }
            $fn252 $tmp251 = $tmp250->methods[1];
            panda$core$Object* $tmp253 = $tmp251(child$Iter237);
            child249 = ((org$pandalanguage$pandac$ASTNode*) $tmp253);
            panda$core$Int64 $tmp255 = (($fn254) self->$class->vtable[6])(self, child249);
            panda$core$Int64 $tmp256 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result236, $tmp255);
            result236 = $tmp256;
            panda$core$Bit $tmp257 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(result236, ((panda$core$Int64) { 50 }));
            if ($tmp257.value) {
            {
                goto $l243;
            }
            }
        }
        goto $l242;
        $l243:;
    }
    return result236;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ASTNode* p_body) {
    bool $tmp260 = ((panda$core$Bit) { p_body != NULL }).value;
    if (!$tmp260) goto $l261;
    panda$core$Bit $tmp263 = (($fn262) p_annotations->$class->vtable[11])(p_annotations);
    panda$core$Bit $tmp264 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp263);
    $tmp260 = $tmp264.value;
    $l261:;
    panda$core$Bit $tmp265 = { $tmp260 };
    bool $tmp259 = $tmp265.value;
    if (!$tmp259) goto $l266;
    panda$core$Bit $tmp268 = (($fn267) p_annotations->$class->vtable[9])(p_annotations);
    $tmp259 = $tmp268.value;
    $l266:;
    panda$core$Bit $tmp269 = { $tmp259 };
    bool $tmp258 = $tmp269.value;
    if (!$tmp258) goto $l270;
    panda$core$Int64 $tmp272 = (($fn271) self->$class->vtable[6])(self, p_body);
    panda$core$Bit $tmp273 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp272, ((panda$core$Int64) { 50 }));
    $tmp258 = $tmp273.value;
    $l270:;
    panda$core$Bit $tmp274 = { $tmp258 };
    return $tmp274;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_m) {
    panda$core$Int64 kind275;
    panda$core$Int64 $match$6170276;
    panda$core$String* name279;
    panda$core$String* doccomment280;
    org$pandalanguage$pandac$Annotations* annotations286;
    panda$collections$Array* parameters303;
    panda$collections$Iterator* p$Iter306;
    org$pandalanguage$pandac$ASTNode* p320;
    org$pandalanguage$pandac$Type* returnType331;
    {
        $match$6170276 = p_m->kind;
        panda$core$Bit $tmp277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6170276, ((panda$core$Int64) { 145 }));
        if ($tmp277.value) {
        {
            kind275 = ((panda$core$Int64) { 57 });
        }
        }
        else {
        panda$core$Bit $tmp278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6170276, ((panda$core$Int64) { 146 }));
        if ($tmp278.value) {
        {
            kind275 = ((panda$core$Int64) { 58 });
        }
        }
        else {
        {
        }
        }
        }
    }
    name279 = ((panda$core$String*) p_m->payload);
    panda$core$Object* $tmp282 = (($fn281) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp283 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp282)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp283.value) {
    {
        panda$core$Object* $tmp285 = (($fn284) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 0 }));
        doccomment280 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp285)->payload);
    }
    }
    else {
    {
        doccomment280 = NULL;
    }
    }
    panda$core$Object* $tmp288 = (($fn287) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp290 = (($fn289) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp288));
    annotations286 = $tmp290;
    panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp291.value) {
    {
        panda$core$Int64 $tmp292 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp293 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations286->flags, $tmp292);
        annotations286->flags = $tmp293;
    }
    }
    panda$core$Bit $tmp296 = (($fn295) p_owner->annotations->$class->vtable[9])(p_owner->annotations);
    bool $tmp294 = $tmp296.value;
    if ($tmp294) goto $l297;
    panda$core$Bit $tmp299 = (($fn298) annotations286->$class->vtable[2])(annotations286);
    $tmp294 = $tmp299.value;
    $l297:;
    panda$core$Bit $tmp300 = { $tmp294 };
    if ($tmp300.value) {
    {
        panda$core$Int64 $tmp301 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp302 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations286->flags, $tmp301);
        annotations286->flags = $tmp302;
    }
    }
    panda$collections$Array* $tmp304 = (panda$collections$Array*) malloc(40);
    $tmp304->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp304->refCount.value = 1;
    panda$collections$Array$init($tmp304);
    parameters303 = $tmp304;
    {
        panda$core$Object* $tmp308 = (($fn307) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp309 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp308)->children)->$class->itable;
        while ($tmp309->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp309 = $tmp309->next;
        }
        $fn311 $tmp310 = $tmp309->methods[0];
        panda$collections$Iterator* $tmp312 = $tmp310(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp308)->children));
        p$Iter306 = $tmp312;
        $l313:;
        ITable* $tmp315 = p$Iter306->$class->itable;
        while ($tmp315->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp315 = $tmp315->next;
        }
        $fn317 $tmp316 = $tmp315->methods[0];
        panda$core$Bit $tmp318 = $tmp316(p$Iter306);
        panda$core$Bit $tmp319 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp318);
        if (!$tmp319.value) goto $l314;
        {
            ITable* $tmp321 = p$Iter306->$class->itable;
            while ($tmp321->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp321 = $tmp321->next;
            }
            $fn323 $tmp322 = $tmp321->methods[1];
            panda$core$Object* $tmp324 = $tmp322(p$Iter306);
            p320 = ((org$pandalanguage$pandac$ASTNode*) $tmp324);
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp325 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp325->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp325->refCount.value = 1;
            panda$core$Object* $tmp328 = (($fn327) p320->children->$class->vtable[2])(p320->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp330 = (($fn329) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp328));
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp325, ((panda$core$String*) p320->payload), $tmp330);
            panda$collections$Array$add$panda$collections$Array$T(parameters303, ((panda$core$Object*) $tmp325));
        }
        goto $l313;
        $l314:;
    }
    panda$core$Object* $tmp333 = (($fn332) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type* $tmp335 = (($fn334) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp333));
    returnType331 = $tmp335;
    panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind275, ((panda$core$Int64) { 58 }));
    bool $tmp336 = $tmp337.value;
    if (!$tmp336) goto $l338;
    org$pandalanguage$pandac$Type* $tmp339 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp341 = (($fn340) returnType331->$class->vtable[4])(returnType331, ((panda$core$Object*) $tmp339));
    $tmp336 = $tmp341.value;
    $l338:;
    panda$core$Bit $tmp342 = { $tmp336 };
    if ($tmp342.value) {
    {
        (($fn344) self->compiler->$class->vtable[95])(self->compiler, p_m->offset, &$s343);
    }
    }
    panda$core$Object* $tmp346 = (($fn345) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 4 }));
    panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp346)->kind, ((panda$core$Int64) { 126 }));
    if ($tmp347.value) {
    {
        panda$core$Object* $tmp349 = (($fn348) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 4 }));
        panda$core$Bit $tmp351 = (($fn350) self->$class->vtable[7])(self, annotations286, ((org$pandalanguage$pandac$ASTNode*) $tmp349));
        if ($tmp351.value) {
        {
            panda$core$Int64 $tmp352 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp353 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations286->flags, $tmp352);
            annotations286->flags = $tmp353;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp354 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
        $tmp354->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp354->refCount.value = 1;
        panda$core$Object* $tmp357 = (($fn356) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 4 }));
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp354, p_owner, p_m->offset, doccomment280, annotations286, kind275, name279, parameters303, returnType331, ((org$pandalanguage$pandac$ASTNode*) $tmp357));
        return $tmp354;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp358 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
        $tmp358->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp358->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp358, p_owner, p_m->offset, doccomment280, annotations286, kind275, name279, parameters303, returnType331, NULL);
        return $tmp358;
    }
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl) {
    panda$core$String* fullName360;
    panda$core$String* doccomment370;
    org$pandalanguage$pandac$Annotations* annotations376;
    panda$collections$Array* parameters381;
    panda$collections$Iterator* p$Iter387;
    org$pandalanguage$pandac$ASTNode* p401;
    org$pandalanguage$pandac$Type* bound406;
    org$pandalanguage$pandac$Type* supertype417;
    panda$collections$Array* interfaces428;
    panda$collections$Iterator* intf$Iter431;
    org$pandalanguage$pandac$ASTNode* intf445;
    org$pandalanguage$pandac$ClassDecl* result452;
    panda$core$Bit foundInit455;
    panda$collections$Iterator* c$Iter456;
    org$pandalanguage$pandac$ASTNode* c470;
    panda$core$Int64 $match$10412475;
    org$pandalanguage$pandac$MethodDecl* i479;
    org$pandalanguage$pandac$MethodDecl* m488;
    org$pandalanguage$pandac$ClassDecl* inner493;
    panda$core$Range $tmp496;
    org$pandalanguage$pandac$ClassDecl* cl503;
    panda$core$Range $tmp506;
    org$pandalanguage$pandac$MethodDecl* defaultInit517;
    panda$core$Bit $tmp362 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s361);
    if ($tmp362.value) {
    {
        panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s363, p_contextName);
        panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, &$s365);
        panda$core$String* $tmp367 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp366, p_cl->payload);
        panda$core$String* $tmp369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp367, &$s368);
        fullName360 = $tmp369;
    }
    }
    else {
    {
        fullName360 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Object* $tmp372 = (($fn371) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp373 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp372)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp373.value) {
    {
        panda$core$Object* $tmp375 = (($fn374) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment370 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp375)->payload);
    }
    }
    else {
    {
        doccomment370 = NULL;
    }
    }
    panda$core$Object* $tmp378 = (($fn377) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp380 = (($fn379) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp378));
    annotations376 = $tmp380;
    panda$collections$Array* $tmp382 = (panda$collections$Array*) malloc(40);
    $tmp382->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp382->refCount.value = 1;
    panda$collections$Array$init($tmp382);
    parameters381 = $tmp382;
    panda$core$Object* $tmp385 = (($fn384) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp385)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp386.value) {
    {
        {
            panda$core$Object* $tmp389 = (($fn388) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp390 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp389)->children)->$class->itable;
            while ($tmp390->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp390 = $tmp390->next;
            }
            $fn392 $tmp391 = $tmp390->methods[0];
            panda$collections$Iterator* $tmp393 = $tmp391(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp389)->children));
            p$Iter387 = $tmp393;
            $l394:;
            ITable* $tmp396 = p$Iter387->$class->itable;
            while ($tmp396->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp396 = $tmp396->next;
            }
            $fn398 $tmp397 = $tmp396->methods[0];
            panda$core$Bit $tmp399 = $tmp397(p$Iter387);
            panda$core$Bit $tmp400 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp399);
            if (!$tmp400.value) goto $l395;
            {
                ITable* $tmp402 = p$Iter387->$class->itable;
                while ($tmp402->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp402 = $tmp402->next;
                }
                $fn404 $tmp403 = $tmp402->methods[1];
                panda$core$Object* $tmp405 = $tmp403(p$Iter387);
                p401 = ((org$pandalanguage$pandac$ASTNode*) $tmp405);
                panda$core$Int64 $tmp408 = (($fn407) p401->children->$class->vtable[3])(p401->children);
                panda$core$Bit $tmp409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp408, ((panda$core$Int64) { 1 }));
                if ($tmp409.value) {
                {
                    panda$core$Object* $tmp411 = (($fn410) p401->children->$class->vtable[2])(p401->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp413 = (($fn412) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp411));
                    bound406 = $tmp413;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp414 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound406 = $tmp414;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp415 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(56);
                $tmp415->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp415->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$panda$core$Int64$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp415, p401->offset, fullName360, ((panda$core$String*) p401->payload), bound406);
                panda$collections$Array$add$panda$collections$Array$T(parameters381, ((panda$core$Object*) $tmp415));
            }
            goto $l394;
            $l395:;
        }
    }
    }
    else {
    {
    }
    }
    panda$core$Object* $tmp419 = (($fn418) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp420 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp419)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp420.value) {
    {
        panda$core$Object* $tmp422 = (($fn421) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 3 }));
        org$pandalanguage$pandac$Type* $tmp424 = (($fn423) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp422));
        supertype417 = $tmp424;
    }
    }
    else {
    panda$core$Bit $tmp426 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(fullName360, &$s425);
    if ($tmp426.value) {
    {
        org$pandalanguage$pandac$Type* $tmp427 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        supertype417 = $tmp427;
    }
    }
    else {
    {
        supertype417 = NULL;
    }
    }
    }
    panda$collections$Array* $tmp429 = (panda$collections$Array*) malloc(40);
    $tmp429->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp429->refCount.value = 1;
    panda$collections$Array$init($tmp429);
    interfaces428 = $tmp429;
    {
        panda$core$Object* $tmp433 = (($fn432) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp434 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp433)->children)->$class->itable;
        while ($tmp434->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp434 = $tmp434->next;
        }
        $fn436 $tmp435 = $tmp434->methods[0];
        panda$collections$Iterator* $tmp437 = $tmp435(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp433)->children));
        intf$Iter431 = $tmp437;
        $l438:;
        ITable* $tmp440 = intf$Iter431->$class->itable;
        while ($tmp440->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp440 = $tmp440->next;
        }
        $fn442 $tmp441 = $tmp440->methods[0];
        panda$core$Bit $tmp443 = $tmp441(intf$Iter431);
        panda$core$Bit $tmp444 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp443);
        if (!$tmp444.value) goto $l439;
        {
            ITable* $tmp446 = intf$Iter431->$class->itable;
            while ($tmp446->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp446 = $tmp446->next;
            }
            $fn448 $tmp447 = $tmp446->methods[1];
            panda$core$Object* $tmp449 = $tmp447(intf$Iter431);
            intf445 = ((org$pandalanguage$pandac$ASTNode*) $tmp449);
            org$pandalanguage$pandac$Type* $tmp451 = (($fn450) self->$class->vtable[2])(self, intf445);
            panda$collections$Array$add$panda$collections$Array$T(interfaces428, ((panda$core$Object*) $tmp451));
        }
        goto $l438;
        $l439:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp453 = (org$pandalanguage$pandac$ClassDecl*) malloc(161);
    $tmp453->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp453->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$Q$panda$collections$Array$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp453, p_source, p_cl->offset, p_aliases, doccomment370, annotations376, ((panda$core$Int64) { 5011 }), fullName360, supertype417, interfaces428, parameters381, self->compiler->root);
    result452 = $tmp453;
    foundInit455 = ((panda$core$Bit) { false });
    {
        panda$core$Object* $tmp458 = (($fn457) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 5 }));
        ITable* $tmp459 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp458)->children)->$class->itable;
        while ($tmp459->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp459 = $tmp459->next;
        }
        $fn461 $tmp460 = $tmp459->methods[0];
        panda$collections$Iterator* $tmp462 = $tmp460(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp458)->children));
        c$Iter456 = $tmp462;
        $l463:;
        ITable* $tmp465 = c$Iter456->$class->itable;
        while ($tmp465->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp465 = $tmp465->next;
        }
        $fn467 $tmp466 = $tmp465->methods[0];
        panda$core$Bit $tmp468 = $tmp466(c$Iter456);
        panda$core$Bit $tmp469 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp468);
        if (!$tmp469.value) goto $l464;
        {
            ITable* $tmp471 = c$Iter456->$class->itable;
            while ($tmp471->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp471 = $tmp471->next;
            }
            $fn473 $tmp472 = $tmp471->methods[1];
            panda$core$Object* $tmp474 = $tmp472(c$Iter456);
            c470 = ((org$pandalanguage$pandac$ASTNode*) $tmp474);
            {
                $match$10412475 = c470->kind;
                panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10412475, ((panda$core$Int64) { 148 }));
                if ($tmp476.value) {
                {
                    (($fn477) self->$class->vtable[4])(self, result452, c470);
                }
                }
                else {
                panda$core$Bit $tmp478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10412475, ((panda$core$Int64) { 147 }));
                if ($tmp478.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp481 = (($fn480) self->$class->vtable[5])(self, result452, c470);
                    i479 = $tmp481;
                    if (((panda$core$Bit) { i479 != NULL }).value) {
                    {
                        (($fn482) result452->symbolTable->$class->vtable[2])(result452->symbolTable, ((org$pandalanguage$pandac$Symbol*) i479));
                        panda$collections$Array$add$panda$collections$Array$T(result452->methods, ((panda$core$Object*) i479));
                    }
                    }
                    foundInit455 = ((panda$core$Bit) { true });
                }
                }
                else {
                panda$core$Bit $tmp484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10412475, ((panda$core$Int64) { 145 }));
                bool $tmp483 = $tmp484.value;
                if ($tmp483) goto $l485;
                panda$core$Bit $tmp486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10412475, ((panda$core$Int64) { 146 }));
                $tmp483 = $tmp486.value;
                $l485:;
                panda$core$Bit $tmp487 = { $tmp483 };
                if ($tmp487.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp490 = (($fn489) self->$class->vtable[8])(self, result452, c470);
                    m488 = $tmp490;
                    if (((panda$core$Bit) { m488 != NULL }).value) {
                    {
                        (($fn491) result452->symbolTable->$class->vtable[2])(result452->symbolTable, ((org$pandalanguage$pandac$Symbol*) m488));
                        panda$collections$Array$add$panda$collections$Array$T(result452->methods, ((panda$core$Object*) m488));
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10412475, ((panda$core$Int64) { 142 }));
                if ($tmp492.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp495 = (($fn494) self->$class->vtable[9])(self, p_source, p_aliases, fullName360, c470);
                    inner493 = $tmp495;
                    if (((panda$core$Bit) { inner493 != NULL }).value) {
                    {
                        inner493->owner = result452;
                        panda$collections$Array$add$panda$collections$Array$T(result452->classes, ((panda$core$Object*) inner493));
                        panda$core$Int64 $tmp497 = panda$core$String$length$R$panda$core$Int64(fullName360);
                        panda$core$Int64 $tmp498 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp497, ((panda$core$Int64) { 1 }));
                        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp496, (((panda$core$Int64$nullable) { $tmp498, true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp498, true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp499 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner493)->name, $tmp496);
                        (($fn500) result452->symbolTable->$class->vtable[3])(result452->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner493), $tmp499);
                        panda$collections$Array$add$panda$collections$Array$T(inner493->symbolTable->parents, ((panda$core$Object*) result452->symbolTable));
                        (($fn501) inner493->symbolTable->$class->vtable[3])(inner493->symbolTable, ((org$pandalanguage$pandac$Symbol*) result452), ((panda$core$String*) p_cl->payload));
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10412475, ((panda$core$Int64) { 151 }));
                if ($tmp502.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp505 = (($fn504) self->$class->vtable[10])(self, p_source, p_aliases, fullName360, c470);
                    cl503 = $tmp505;
                    if (((panda$core$Bit) { cl503 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result452->classes, ((panda$core$Object*) cl503));
                        panda$core$Int64 $tmp507 = panda$core$String$length$R$panda$core$Int64(fullName360);
                        panda$core$Int64 $tmp508 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp507, ((panda$core$Int64) { 1 }));
                        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp506, (((panda$core$Int64$nullable) { $tmp508, true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp508, true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp509 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl503)->name, $tmp506);
                        (($fn510) result452->symbolTable->$class->vtable[3])(result452->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl503), $tmp509);
                    }
                    }
                }
                }
                else {
                {
                }
                }
                }
                }
                }
                }
            }
        }
        goto $l463;
        $l464:;
    }
    panda$core$Bit $tmp512 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit455);
    bool $tmp511 = $tmp512.value;
    if (!$tmp511) goto $l513;
    panda$core$Bit $tmp515 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result452)->name, &$s514);
    $tmp511 = $tmp515.value;
    $l513:;
    panda$core$Bit $tmp516 = { $tmp511 };
    if ($tmp516.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp518 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
        $tmp518->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp518->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp520 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp520->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp520->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp520);
        panda$collections$Array* $tmp523 = (panda$collections$Array*) malloc(40);
        $tmp523->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp523->refCount.value = 1;
        panda$collections$Array$init($tmp523);
        org$pandalanguage$pandac$Type* $tmp525 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp526 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp526->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp526->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp526, ((panda$core$Int64) { 126 }), p_cl->offset);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp518, result452, p_cl->offset, NULL, $tmp520, ((panda$core$Int64) { 59 }), &$s522, $tmp523, $tmp525, $tmp526);
        defaultInit517 = $tmp518;
        panda$collections$Array$add$panda$collections$Array$T(result452->methods, ((panda$core$Object*) defaultInit517));
        (($fn528) result452->symbolTable->$class->vtable[2])(result452->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit517));
    }
    }
    return result452;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_intf) {
    panda$core$String* fullName529;
    panda$core$String* doccomment539;
    org$pandalanguage$pandac$Annotations* annotations545;
    panda$collections$Array* parameters550;
    panda$collections$Iterator* p$Iter556;
    org$pandalanguage$pandac$ASTNode* p570;
    org$pandalanguage$pandac$Type* bound575;
    panda$collections$Array* interfaces586;
    panda$collections$Iterator* s$Iter589;
    org$pandalanguage$pandac$ASTNode* s603;
    org$pandalanguage$pandac$ClassDecl* result610;
    panda$collections$Iterator* c$Iter614;
    org$pandalanguage$pandac$ASTNode* c628;
    panda$core$Int64 $match$14560633;
    org$pandalanguage$pandac$MethodDecl* i637;
    org$pandalanguage$pandac$MethodDecl* m646;
    org$pandalanguage$pandac$ClassDecl* cl653;
    panda$core$Range $tmp656;
    org$pandalanguage$pandac$ClassDecl* cl662;
    panda$core$Range $tmp665;
    panda$core$Bit $tmp531 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s530);
    if ($tmp531.value) {
    {
        panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s532, p_contextName);
        panda$core$String* $tmp535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp533, &$s534);
        panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp535, p_intf->payload);
        panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp536, &$s537);
        fullName529 = $tmp538;
    }
    }
    else {
    {
        fullName529 = ((panda$core$String*) p_intf->payload);
    }
    }
    panda$core$Object* $tmp541 = (($fn540) p_intf->children->$class->vtable[2])(p_intf->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp542 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp541)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp542.value) {
    {
        panda$core$Object* $tmp544 = (($fn543) p_intf->children->$class->vtable[2])(p_intf->children, ((panda$core$Int64) { 0 }));
        doccomment539 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp544)->payload);
    }
    }
    else {
    {
        doccomment539 = NULL;
    }
    }
    panda$core$Object* $tmp547 = (($fn546) p_intf->children->$class->vtable[2])(p_intf->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp549 = (($fn548) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp547));
    annotations545 = $tmp549;
    panda$collections$Array* $tmp551 = (panda$collections$Array*) malloc(40);
    $tmp551->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp551->refCount.value = 1;
    panda$collections$Array$init($tmp551);
    parameters550 = $tmp551;
    panda$core$Object* $tmp554 = (($fn553) p_intf->children->$class->vtable[2])(p_intf->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp554)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp555.value) {
    {
        {
            panda$core$Object* $tmp558 = (($fn557) p_intf->children->$class->vtable[2])(p_intf->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp559 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp558)->children)->$class->itable;
            while ($tmp559->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp559 = $tmp559->next;
            }
            $fn561 $tmp560 = $tmp559->methods[0];
            panda$collections$Iterator* $tmp562 = $tmp560(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp558)->children));
            p$Iter556 = $tmp562;
            $l563:;
            ITable* $tmp565 = p$Iter556->$class->itable;
            while ($tmp565->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp565 = $tmp565->next;
            }
            $fn567 $tmp566 = $tmp565->methods[0];
            panda$core$Bit $tmp568 = $tmp566(p$Iter556);
            panda$core$Bit $tmp569 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp568);
            if (!$tmp569.value) goto $l564;
            {
                ITable* $tmp571 = p$Iter556->$class->itable;
                while ($tmp571->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp571 = $tmp571->next;
                }
                $fn573 $tmp572 = $tmp571->methods[1];
                panda$core$Object* $tmp574 = $tmp572(p$Iter556);
                p570 = ((org$pandalanguage$pandac$ASTNode*) $tmp574);
                panda$core$Int64 $tmp577 = (($fn576) p570->children->$class->vtable[3])(p570->children);
                panda$core$Bit $tmp578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp577, ((panda$core$Int64) { 1 }));
                if ($tmp578.value) {
                {
                    panda$core$Object* $tmp580 = (($fn579) p570->children->$class->vtable[2])(p570->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp582 = (($fn581) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp580));
                    bound575 = $tmp582;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp583 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound575 = $tmp583;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp584 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(56);
                $tmp584->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp584->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$panda$core$Int64$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp584, p570->offset, fullName529, ((panda$core$String*) p570->payload), bound575);
                panda$collections$Array$add$panda$collections$Array$T(parameters550, ((panda$core$Object*) $tmp584));
            }
            goto $l563;
            $l564:;
        }
    }
    }
    else {
    {
    }
    }
    panda$collections$Array* $tmp587 = (panda$collections$Array*) malloc(40);
    $tmp587->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp587->refCount.value = 1;
    panda$collections$Array$init($tmp587);
    interfaces586 = $tmp587;
    {
        panda$core$Object* $tmp591 = (($fn590) p_intf->children->$class->vtable[2])(p_intf->children, ((panda$core$Int64) { 3 }));
        ITable* $tmp592 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp591)->children)->$class->itable;
        while ($tmp592->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp592 = $tmp592->next;
        }
        $fn594 $tmp593 = $tmp592->methods[0];
        panda$collections$Iterator* $tmp595 = $tmp593(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp591)->children));
        s$Iter589 = $tmp595;
        $l596:;
        ITable* $tmp598 = s$Iter589->$class->itable;
        while ($tmp598->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp598 = $tmp598->next;
        }
        $fn600 $tmp599 = $tmp598->methods[0];
        panda$core$Bit $tmp601 = $tmp599(s$Iter589);
        panda$core$Bit $tmp602 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp601);
        if (!$tmp602.value) goto $l597;
        {
            ITable* $tmp604 = s$Iter589->$class->itable;
            while ($tmp604->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp604 = $tmp604->next;
            }
            $fn606 $tmp605 = $tmp604->methods[1];
            panda$core$Object* $tmp607 = $tmp605(s$Iter589);
            s603 = ((org$pandalanguage$pandac$ASTNode*) $tmp607);
            org$pandalanguage$pandac$Type* $tmp609 = (($fn608) self->$class->vtable[2])(self, s603);
            panda$collections$Array$add$panda$collections$Array$T(interfaces586, ((panda$core$Object*) $tmp609));
        }
        goto $l596;
        $l597:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp611 = (org$pandalanguage$pandac$ClassDecl*) malloc(161);
    $tmp611->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp611->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp613 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$Q$panda$collections$Array$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp611, p_source, p_intf->offset, p_aliases, doccomment539, annotations545, ((panda$core$Int64) { 5012 }), fullName529, $tmp613, interfaces586, parameters550, self->compiler->root);
    result610 = $tmp611;
    {
        panda$core$Object* $tmp616 = (($fn615) p_intf->children->$class->vtable[2])(p_intf->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp617 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp616)->children)->$class->itable;
        while ($tmp617->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp617 = $tmp617->next;
        }
        $fn619 $tmp618 = $tmp617->methods[0];
        panda$collections$Iterator* $tmp620 = $tmp618(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp616)->children));
        c$Iter614 = $tmp620;
        $l621:;
        ITable* $tmp623 = c$Iter614->$class->itable;
        while ($tmp623->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp623 = $tmp623->next;
        }
        $fn625 $tmp624 = $tmp623->methods[0];
        panda$core$Bit $tmp626 = $tmp624(c$Iter614);
        panda$core$Bit $tmp627 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp626);
        if (!$tmp627.value) goto $l622;
        {
            ITable* $tmp629 = c$Iter614->$class->itable;
            while ($tmp629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp629 = $tmp629->next;
            }
            $fn631 $tmp630 = $tmp629->methods[1];
            panda$core$Object* $tmp632 = $tmp630(c$Iter614);
            c628 = ((org$pandalanguage$pandac$ASTNode*) $tmp632);
            {
                $match$14560633 = c628->kind;
                panda$core$Bit $tmp634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14560633, ((panda$core$Int64) { 148 }));
                if ($tmp634.value) {
                {
                    (($fn635) self->$class->vtable[4])(self, result610, c628);
                }
                }
                else {
                panda$core$Bit $tmp636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14560633, ((panda$core$Int64) { 147 }));
                if ($tmp636.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp639 = (($fn638) self->$class->vtable[5])(self, result610, c628);
                    i637 = $tmp639;
                    if (((panda$core$Bit) { i637 != NULL }).value) {
                    {
                        (($fn640) result610->symbolTable->$class->vtable[2])(result610->symbolTable, ((org$pandalanguage$pandac$Symbol*) i637));
                        panda$collections$Array$add$panda$collections$Array$T(result610->methods, ((panda$core$Object*) i637));
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14560633, ((panda$core$Int64) { 145 }));
                bool $tmp641 = $tmp642.value;
                if ($tmp641) goto $l643;
                panda$core$Bit $tmp644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14560633, ((panda$core$Int64) { 146 }));
                $tmp641 = $tmp644.value;
                $l643:;
                panda$core$Bit $tmp645 = { $tmp641 };
                if ($tmp645.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp648 = (($fn647) self->$class->vtable[8])(self, result610, c628);
                    m646 = $tmp648;
                    if (((panda$core$Bit) { m646 != NULL }).value) {
                    {
                        if (((panda$core$Bit) { m646->body == NULL }).value) {
                        {
                            panda$core$Int64 $tmp649 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp650 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m646->annotations->flags, $tmp649);
                            m646->annotations->flags = $tmp650;
                        }
                        }
                        (($fn651) result610->symbolTable->$class->vtable[2])(result610->symbolTable, ((org$pandalanguage$pandac$Symbol*) m646));
                        panda$collections$Array$add$panda$collections$Array$T(result610->methods, ((panda$core$Object*) m646));
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14560633, ((panda$core$Int64) { 142 }));
                if ($tmp652.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp655 = (($fn654) self->$class->vtable[9])(self, p_source, p_aliases, fullName529, c628);
                    cl653 = $tmp655;
                    if (((panda$core$Bit) { cl653 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result610->classes, ((panda$core$Object*) cl653));
                        panda$core$Int64 $tmp657 = panda$core$String$length$R$panda$core$Int64(fullName529);
                        panda$core$Int64 $tmp658 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp657, ((panda$core$Int64) { 1 }));
                        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp656, (((panda$core$Int64$nullable) { $tmp658, true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp658, true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp659 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl653)->name, $tmp656);
                        (($fn660) result610->symbolTable->$class->vtable[3])(result610->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl653), $tmp659);
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14560633, ((panda$core$Int64) { 151 }));
                if ($tmp661.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp664 = (($fn663) self->$class->vtable[10])(self, p_source, p_aliases, fullName529, c628);
                    cl662 = $tmp664;
                    if (((panda$core$Bit) { cl662 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result610->classes, ((panda$core$Object*) cl662));
                        panda$core$Int64 $tmp666 = panda$core$String$length$R$panda$core$Int64(fullName529);
                        panda$core$Int64 $tmp667 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp666, ((panda$core$Int64) { 1 }));
                        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp665, (((panda$core$Int64$nullable) { $tmp667, true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp667, true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp668 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl662)->name, $tmp665);
                        (($fn669) result610->symbolTable->$class->vtable[3])(result610->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl662), $tmp668);
                    }
                    }
                }
                }
                else {
                {
                }
                }
                }
                }
                }
                }
            }
        }
        goto $l621;
        $l622:;
    }
    return result610;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter670;
    org$pandalanguage$pandac$ClassDecl* inner682;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp671 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp671->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp671 = $tmp671->next;
        }
        $fn673 $tmp672 = $tmp671->methods[0];
        panda$collections$Iterator* $tmp674 = $tmp672(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter670 = $tmp674;
        $l675:;
        ITable* $tmp677 = inner$Iter670->$class->itable;
        while ($tmp677->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp677 = $tmp677->next;
        }
        $fn679 $tmp678 = $tmp677->methods[0];
        panda$core$Bit $tmp680 = $tmp678(inner$Iter670);
        panda$core$Bit $tmp681 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp680);
        if (!$tmp681.value) goto $l676;
        {
            ITable* $tmp683 = inner$Iter670->$class->itable;
            while ($tmp683->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp683 = $tmp683->next;
            }
            $fn685 $tmp684 = $tmp683->methods[1];
            panda$core$Object* $tmp686 = $tmp684(inner$Iter670);
            inner682 = ((org$pandalanguage$pandac$ClassDecl*) $tmp686);
            (($fn687) self->$class->vtable[11])(self, inner682, p_arr);
        }
        goto $l675;
        $l676:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$collections$Array* result688;
    panda$core$String* currentPackage691;
    panda$collections$HashMap* aliases693;
    panda$collections$Iterator* c$Iter696;
    org$pandalanguage$pandac$ASTNode* c708;
    panda$core$Int64 $match$16658713;
    panda$core$String* fullName716;
    panda$core$String$Index$nullable idx717;
    panda$core$String* alias720;
    panda$core$Range $tmp721;
    org$pandalanguage$pandac$ClassDecl* cl726;
    org$pandalanguage$pandac$ClassDecl* cl731;
    panda$collections$Array* $tmp689 = (panda$collections$Array*) malloc(40);
    $tmp689->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp689->refCount.value = 1;
    panda$collections$Array$init($tmp689);
    result688 = $tmp689;
    currentPackage691 = &$s692;
    panda$collections$HashMap* $tmp694 = (panda$collections$HashMap*) malloc(56);
    $tmp694->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp694->refCount.value = 1;
    panda$collections$HashMap$init($tmp694);
    aliases693 = $tmp694;
    {
        ITable* $tmp697 = ((panda$collections$Iterable*) p_file->children)->$class->itable;
        while ($tmp697->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp697 = $tmp697->next;
        }
        $fn699 $tmp698 = $tmp697->methods[0];
        panda$collections$Iterator* $tmp700 = $tmp698(((panda$collections$Iterable*) p_file->children));
        c$Iter696 = $tmp700;
        $l701:;
        ITable* $tmp703 = c$Iter696->$class->itable;
        while ($tmp703->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp703 = $tmp703->next;
        }
        $fn705 $tmp704 = $tmp703->methods[0];
        panda$core$Bit $tmp706 = $tmp704(c$Iter696);
        panda$core$Bit $tmp707 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp706);
        if (!$tmp707.value) goto $l702;
        {
            ITable* $tmp709 = c$Iter696->$class->itable;
            while ($tmp709->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp709 = $tmp709->next;
            }
            $fn711 $tmp710 = $tmp709->methods[1];
            panda$core$Object* $tmp712 = $tmp710(c$Iter696);
            c708 = ((org$pandalanguage$pandac$ASTNode*) $tmp712);
            {
                $match$16658713 = c708->kind;
                panda$core$Bit $tmp714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16658713, ((panda$core$Int64) { 100 }));
                if ($tmp714.value) {
                {
                    currentPackage691 = ((panda$core$String*) c708->payload);
                }
                }
                else {
                panda$core$Bit $tmp715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16658713, ((panda$core$Int64) { 101 }));
                if ($tmp715.value) {
                {
                    fullName716 = ((panda$core$String*) c708->payload);
                    panda$core$String$Index$nullable $tmp719 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName716, &$s718);
                    idx717 = $tmp719;
                    if (((panda$core$Bit) { idx717.nonnull }).value) {
                    {
                        panda$core$String$Index $tmp722 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName716, ((panda$core$String$Index) idx717.value));
                        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp721, (((panda$core$String$Index$nullable) { $tmp722, true }).nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) ((panda$core$String$Index$nullable) { $tmp722, true }).value))) : NULL), (((panda$core$String$Index$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) ((panda$core$String$Index$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp723 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName716, $tmp721);
                        alias720 = $tmp723;
                    }
                    }
                    else {
                    {
                        alias720 = fullName716;
                    }
                    }
                    (($fn724) aliases693->$class->vtable[5])(aliases693, ((panda$core$Object*) ((panda$collections$Key*) alias720)), ((panda$core$Object*) fullName716));
                }
                }
                else {
                panda$core$Bit $tmp725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16658713, ((panda$core$Int64) { 142 }));
                if ($tmp725.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp728 = (($fn727) self->$class->vtable[9])(self, p_source, ((panda$collections$MapView*) aliases693), currentPackage691, c708);
                    cl726 = $tmp728;
                    if (((panda$core$Bit) { cl726 != NULL }).value) {
                    {
                        (($fn729) self->$class->vtable[11])(self, cl726, result688);
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16658713, ((panda$core$Int64) { 151 }));
                if ($tmp730.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp733 = (($fn732) self->$class->vtable[10])(self, p_source, ((panda$collections$MapView*) aliases693), currentPackage691, c708);
                    cl731 = $tmp733;
                    if (((panda$core$Bit) { cl731 != NULL }).value) {
                    {
                        (($fn734) self->$class->vtable[11])(self, cl731, result688);
                    }
                    }
                }
                }
                else {
                {
                }
                }
                }
                }
                }
            }
        }
        goto $l701;
        $l702:;
    }
    return ((panda$collections$ListView*) result688);
}

