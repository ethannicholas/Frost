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
typedef void (*$fn127)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn131)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn134)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn137)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Annotations* (*$fn139)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn143)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn152)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn156)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn162)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn168)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn171)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn174)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn177)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64 (*$fn179)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn182)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn184)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn186)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn192)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn194)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Object* (*$fn196)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn199)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn202)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Annotations* (*$fn204)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn210)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn214)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn220)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn226)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn230)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn232)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn238)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn244)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn250)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn256)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn258)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn266)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Bit (*$fn271)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Int64 (*$fn275)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn285)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn288)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn291)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Annotations* (*$fn293)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn299)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Bit (*$fn302)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Object* (*$fn311)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn315)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn321)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn327)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn331)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn333)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn336)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn338)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Bit (*$fn344)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn348)(org$pandalanguage$pandac$Compiler*, panda$core$Int64, panda$core$String*);
typedef panda$core$Object* (*$fn349)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn352)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn354)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$Annotations*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn360)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn375)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn378)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn381)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Annotations* (*$fn383)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn388)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn392)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn396)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn402)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn408)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn411)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn414)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn416)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn422)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn425)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn427)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn436)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn440)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn446)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn452)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn454)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn461)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn465)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn471)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn477)(panda$collections$Iterator*);
typedef void (*$fn481)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn484)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn486)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn493)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn495)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn498)(org$pandalanguage$pandac$Scanner*, panda$io$File*, panda$collections$MapView*, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn504)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*, panda$core$String*);
typedef void (*$fn505)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn508)(org$pandalanguage$pandac$Scanner*, panda$io$File*, panda$collections$MapView*, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn514)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*, panda$core$String*);
typedef void (*$fn532)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef panda$core$Object* (*$fn544)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn547)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn550)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Annotations* (*$fn552)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn557)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn561)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn565)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn571)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn577)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn580)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn583)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn585)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn594)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn598)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn604)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn610)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn612)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ASTNode*);
typedef panda$core$Object* (*$fn619)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn623)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn629)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn635)(panda$collections$Iterator*);
typedef void (*$fn639)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$ASTNode*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn642)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn644)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef org$pandalanguage$pandac$MethodDecl* (*$fn651)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn655)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn658)(org$pandalanguage$pandac$Scanner*, panda$io$File*, panda$collections$MapView*, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn664)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn667)(org$pandalanguage$pandac$Scanner*, panda$io$File*, panda$collections$MapView*, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn673)(org$pandalanguage$pandac$SymbolTable*, org$pandalanguage$pandac$Symbol*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn677)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn683)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn689)(panda$collections$Iterator*);
typedef void (*$fn691)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, panda$collections$Array*);
typedef panda$collections$Iterator* (*$fn703)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn709)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn715)(panda$collections$Iterator*);
typedef void (*$fn728)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn731)(org$pandalanguage$pandac$Scanner*, panda$io$File*, panda$collections$MapView*, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn733)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, panda$collections$Array*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn736)(org$pandalanguage$pandac$Scanner*, panda$io$File*, panda$collections$MapView*, panda$core$String*, org$pandalanguage$pandac$ASTNode*);
typedef void (*$fn738)(org$pandalanguage$pandac$Scanner*, org$pandalanguage$pandac$ClassDecl*, panda$collections$Array*);

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
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x73\x70\x65\x63\x69\x61\x6C\x69\x7A\x65", 11, 1 };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x63\x6F\x67\x6E\x69\x7A\x65\x64\x20\x61\x6E\x6E\x6F\x74\x61\x74\x69\x6F\x6E\x20\x27", 25, 1 };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x27", 1, 1 };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x75\x6E\x63\x74\x69\x6F\x6E\x73\x20\x6D\x75\x73\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6E\x20\x74\x79\x70\x65", 33, 1 };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x4F\x62\x6A\x65\x63\x74", 17, 1 };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x6E\x69\x74", 4, 1 };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x6F\x6E\x79\x6D\x6F\x75\x73", 9, 1 };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };

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
                panda$core$Bit $tmp120 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$184278, &$s119);
                if ($tmp120.value) {
                {
                    panda$core$Int64 $tmp121 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 11 }));
                    panda$core$Int64 $tmp122 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(flags60, $tmp121);
                    flags60 = $tmp122;
                }
                }
                else {
                {
                    panda$core$String* $tmp124 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s123, c73->payload);
                    panda$core$String* $tmp126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp124, &$s125);
                    (($fn127) self->compiler->$class->vtable[95])(self->compiler, c73->offset, $tmp126);
                }
                }
                }
                }
                }
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
    org$pandalanguage$pandac$Annotations* $tmp128 = (org$pandalanguage$pandac$Annotations*) malloc(24);
    $tmp128->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
    $tmp128->refCount.value = 1;
    org$pandalanguage$pandac$Annotations$init$panda$core$Int64($tmp128, flags60);
    return $tmp128;
}
void org$pandalanguage$pandac$Scanner$scanFields$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_f) {
    panda$core$String* doccomment130;
    org$pandalanguage$pandac$Annotations* annotations136;
    panda$core$Int64 kind141;
    panda$core$Int64 $match$3287142;
    panda$collections$Iterator* decl$Iter151;
    org$pandalanguage$pandac$ASTNode* decl165;
    org$pandalanguage$pandac$ASTNode* value170;
    org$pandalanguage$pandac$Type* type176;
    org$pandalanguage$pandac$FieldDecl* field189;
    panda$core$Object* $tmp132 = (($fn131) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp133 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp132)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp133.value) {
    {
        panda$core$Object* $tmp135 = (($fn134) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 0 }));
        doccomment130 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp135)->payload);
    }
    }
    else {
    {
        doccomment130 = NULL;
    }
    }
    panda$core$Object* $tmp138 = (($fn137) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp140 = (($fn139) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp138));
    annotations136 = $tmp140;
    {
        panda$core$Object* $tmp144 = (($fn143) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 2 }));
        $match$3287142 = ((org$pandalanguage$pandac$ASTNode*) $tmp144)->kind;
        panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3287142, ((panda$core$Int64) { 130 }));
        if ($tmp145.value) {
        {
            kind141 = ((panda$core$Int64) { 10000 });
        }
        }
        else {
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3287142, ((panda$core$Int64) { 131 }));
        if ($tmp146.value) {
        {
            kind141 = ((panda$core$Int64) { 10001 });
        }
        }
        else {
        panda$core$Bit $tmp147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3287142, ((panda$core$Int64) { 132 }));
        if ($tmp147.value) {
        {
            kind141 = ((panda$core$Int64) { 10002 });
            panda$core$Int64 $tmp148 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 4 }));
            panda$core$Int64 $tmp149 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations136->flags, $tmp148);
            annotations136->flags = $tmp149;
        }
        }
        else {
        panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$3287142, ((panda$core$Int64) { 133 }));
        if ($tmp150.value) {
        {
            kind141 = ((panda$core$Int64) { 10003 });
        }
        }
        }
        }
        }
    }
    {
        panda$core$Object* $tmp153 = (($fn152) p_f->children->$class->vtable[2])(p_f->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp154 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp153)->children)->$class->itable;
        while ($tmp154->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp154 = $tmp154->next;
        }
        $fn156 $tmp155 = $tmp154->methods[0];
        panda$collections$Iterator* $tmp157 = $tmp155(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp153)->children));
        decl$Iter151 = $tmp157;
        $l158:;
        ITable* $tmp160 = decl$Iter151->$class->itable;
        while ($tmp160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp160 = $tmp160->next;
        }
        $fn162 $tmp161 = $tmp160->methods[0];
        panda$core$Bit $tmp163 = $tmp161(decl$Iter151);
        panda$core$Bit $tmp164 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp163);
        if (!$tmp164.value) goto $l159;
        {
            ITable* $tmp166 = decl$Iter151->$class->itable;
            while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp166 = $tmp166->next;
            }
            $fn168 $tmp167 = $tmp166->methods[1];
            panda$core$Object* $tmp169 = $tmp167(decl$Iter151);
            decl165 = ((org$pandalanguage$pandac$ASTNode*) $tmp169);
            panda$core$Int64 $tmp172 = (($fn171) decl165->children->$class->vtable[3])(decl165->children);
            panda$core$Bit $tmp173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp172, ((panda$core$Int64) { 2 }));
            if ($tmp173.value) {
            {
                panda$core$Object* $tmp175 = (($fn174) decl165->children->$class->vtable[2])(decl165->children, ((panda$core$Int64) { 1 }));
                value170 = ((org$pandalanguage$pandac$ASTNode*) $tmp175);
            }
            }
            else {
            {
                value170 = NULL;
            }
            }
            panda$core$Object* $tmp178 = (($fn177) decl165->children->$class->vtable[2])(decl165->children, ((panda$core$Int64) { 0 }));
            panda$core$Int64 $tmp180 = (($fn179) ((org$pandalanguage$pandac$ASTNode*) $tmp178)->children->$class->vtable[3])(((org$pandalanguage$pandac$ASTNode*) $tmp178)->children);
            panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp180, ((panda$core$Int64) { 1 }));
            if ($tmp181.value) {
            {
                panda$core$Object* $tmp183 = (($fn182) decl165->children->$class->vtable[2])(decl165->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp185 = (($fn184) ((org$pandalanguage$pandac$ASTNode*) $tmp183)->children->$class->vtable[2])(((org$pandalanguage$pandac$ASTNode*) $tmp183)->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$Type* $tmp187 = (($fn186) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp185));
                type176 = $tmp187;
            }
            }
            else {
            {
                org$pandalanguage$pandac$Type* $tmp188 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                type176 = $tmp188;
            }
            }
            org$pandalanguage$pandac$FieldDecl* $tmp190 = (org$pandalanguage$pandac$FieldDecl*) malloc(97);
            $tmp190->$class = (panda$core$Class*) &org$pandalanguage$pandac$FieldDecl$class;
            $tmp190->refCount.value = 1;
            panda$core$Object* $tmp193 = (($fn192) decl165->children->$class->vtable[2])(decl165->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$FieldDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp190, p_owner, decl165->offset, doccomment130, annotations136, kind141, ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp193)->payload), type176, value170);
            field189 = $tmp190;
            (($fn194) p_owner->symbolTable->$class->vtable[2])(p_owner->symbolTable, ((org$pandalanguage$pandac$Symbol*) field189));
            panda$collections$Array$add$panda$collections$Array$T(p_owner->fields, ((panda$core$Object*) field189));
        }
        goto $l158;
        $l159:;
    }
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanInit$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_i) {
    panda$core$String* doccomment195;
    org$pandalanguage$pandac$Annotations* annotations201;
    panda$collections$Array* parameters206;
    panda$collections$Iterator* p$Iter209;
    org$pandalanguage$pandac$ASTNode* p223;
    panda$core$Object* $tmp197 = (($fn196) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp198 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp197)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp198.value) {
    {
        panda$core$Object* $tmp200 = (($fn199) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 0 }));
        doccomment195 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp200)->payload);
    }
    }
    else {
    {
        doccomment195 = NULL;
    }
    }
    panda$core$Object* $tmp203 = (($fn202) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp205 = (($fn204) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp203));
    annotations201 = $tmp205;
    panda$collections$Array* $tmp207 = (panda$collections$Array*) malloc(40);
    $tmp207->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp207->refCount.value = 1;
    panda$collections$Array$init($tmp207);
    parameters206 = $tmp207;
    {
        panda$core$Object* $tmp211 = (($fn210) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp212 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp211)->children)->$class->itable;
        while ($tmp212->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp212 = $tmp212->next;
        }
        $fn214 $tmp213 = $tmp212->methods[0];
        panda$collections$Iterator* $tmp215 = $tmp213(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp211)->children));
        p$Iter209 = $tmp215;
        $l216:;
        ITable* $tmp218 = p$Iter209->$class->itable;
        while ($tmp218->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp218 = $tmp218->next;
        }
        $fn220 $tmp219 = $tmp218->methods[0];
        panda$core$Bit $tmp221 = $tmp219(p$Iter209);
        panda$core$Bit $tmp222 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp221);
        if (!$tmp222.value) goto $l217;
        {
            ITable* $tmp224 = p$Iter209->$class->itable;
            while ($tmp224->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp224 = $tmp224->next;
            }
            $fn226 $tmp225 = $tmp224->methods[1];
            panda$core$Object* $tmp227 = $tmp225(p$Iter209);
            p223 = ((org$pandalanguage$pandac$ASTNode*) $tmp227);
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp228 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp228->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp228->refCount.value = 1;
            panda$core$Object* $tmp231 = (($fn230) p223->children->$class->vtable[2])(p223->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp233 = (($fn232) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp231));
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp228, ((panda$core$String*) p223->payload), $tmp233);
            panda$collections$Array$add$panda$collections$Array$T(parameters206, ((panda$core$Object*) $tmp228));
        }
        goto $l216;
        $l217:;
    }
    org$pandalanguage$pandac$MethodDecl* $tmp234 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
    $tmp234->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
    $tmp234->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp237 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Object* $tmp239 = (($fn238) p_i->children->$class->vtable[2])(p_i->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp234, p_owner, p_i->offset, doccomment195, annotations201, ((panda$core$Int64) { 59 }), &$s236, parameters206, $tmp237, ((org$pandalanguage$pandac$ASTNode*) $tmp239));
    return $tmp234;
}
panda$core$Int64 org$pandalanguage$pandac$Scanner$complexity$org$pandalanguage$pandac$ASTNode$R$panda$core$Int64(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ASTNode* p_node) {
    panda$core$Int64 result240;
    panda$collections$Iterator* child$Iter241;
    org$pandalanguage$pandac$ASTNode* child253;
    result240 = ((panda$core$Int64) { 1 });
    {
        ITable* $tmp242 = ((panda$collections$Iterable*) p_node->children)->$class->itable;
        while ($tmp242->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp242 = $tmp242->next;
        }
        $fn244 $tmp243 = $tmp242->methods[0];
        panda$collections$Iterator* $tmp245 = $tmp243(((panda$collections$Iterable*) p_node->children));
        child$Iter241 = $tmp245;
        $l246:;
        ITable* $tmp248 = child$Iter241->$class->itable;
        while ($tmp248->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp248 = $tmp248->next;
        }
        $fn250 $tmp249 = $tmp248->methods[0];
        panda$core$Bit $tmp251 = $tmp249(child$Iter241);
        panda$core$Bit $tmp252 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp251);
        if (!$tmp252.value) goto $l247;
        {
            ITable* $tmp254 = child$Iter241->$class->itable;
            while ($tmp254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp254 = $tmp254->next;
            }
            $fn256 $tmp255 = $tmp254->methods[1];
            panda$core$Object* $tmp257 = $tmp255(child$Iter241);
            child253 = ((org$pandalanguage$pandac$ASTNode*) $tmp257);
            panda$core$Int64 $tmp259 = (($fn258) self->$class->vtable[6])(self, child253);
            panda$core$Int64 $tmp260 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result240, $tmp259);
            result240 = $tmp260;
            panda$core$Bit $tmp261 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(result240, ((panda$core$Int64) { 50 }));
            if ($tmp261.value) {
            {
                goto $l247;
            }
            }
        }
        goto $l246;
        $l247:;
    }
    return result240;
}
panda$core$Bit org$pandalanguage$pandac$Scanner$shouldInline$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$ASTNode$Q$R$panda$core$Bit(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$Annotations* p_annotations, org$pandalanguage$pandac$ASTNode* p_body) {
    bool $tmp264 = ((panda$core$Bit) { p_body != NULL }).value;
    if (!$tmp264) goto $l265;
    panda$core$Bit $tmp267 = (($fn266) p_annotations->$class->vtable[11])(p_annotations);
    panda$core$Bit $tmp268 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp267);
    $tmp264 = $tmp268.value;
    $l265:;
    panda$core$Bit $tmp269 = { $tmp264 };
    bool $tmp263 = $tmp269.value;
    if (!$tmp263) goto $l270;
    panda$core$Bit $tmp272 = (($fn271) p_annotations->$class->vtable[9])(p_annotations);
    $tmp263 = $tmp272.value;
    $l270:;
    panda$core$Bit $tmp273 = { $tmp263 };
    bool $tmp262 = $tmp273.value;
    if (!$tmp262) goto $l274;
    panda$core$Int64 $tmp276 = (($fn275) self->$class->vtable[6])(self, p_body);
    panda$core$Bit $tmp277 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp276, ((panda$core$Int64) { 50 }));
    $tmp262 = $tmp277.value;
    $l274:;
    panda$core$Bit $tmp278 = { $tmp262 };
    return $tmp278;
}
org$pandalanguage$pandac$MethodDecl* org$pandalanguage$pandac$Scanner$scanMethod$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$MethodDecl$Q(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$ASTNode* p_m) {
    panda$core$Int64 kind279;
    panda$core$Int64 $match$6254280;
    panda$core$String* name283;
    panda$core$String* doccomment284;
    org$pandalanguage$pandac$Annotations* annotations290;
    panda$collections$Array* parameters307;
    panda$collections$Iterator* p$Iter310;
    org$pandalanguage$pandac$ASTNode* p324;
    org$pandalanguage$pandac$Type* returnType335;
    {
        $match$6254280 = p_m->kind;
        panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6254280, ((panda$core$Int64) { 145 }));
        if ($tmp281.value) {
        {
            kind279 = ((panda$core$Int64) { 57 });
        }
        }
        else {
        panda$core$Bit $tmp282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$6254280, ((panda$core$Int64) { 146 }));
        if ($tmp282.value) {
        {
            kind279 = ((panda$core$Int64) { 58 });
        }
        }
        else {
        {
        }
        }
        }
    }
    name283 = ((panda$core$String*) p_m->payload);
    panda$core$Object* $tmp286 = (($fn285) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp287 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp286)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp287.value) {
    {
        panda$core$Object* $tmp289 = (($fn288) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 0 }));
        doccomment284 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp289)->payload);
    }
    }
    else {
    {
        doccomment284 = NULL;
    }
    }
    panda$core$Object* $tmp292 = (($fn291) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp294 = (($fn293) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp292));
    annotations290 = $tmp294;
    panda$core$Bit $tmp295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_owner->classKind, ((panda$core$Int64) { 5012 }));
    if ($tmp295.value) {
    {
        panda$core$Int64 $tmp296 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
        panda$core$Int64 $tmp297 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations290->flags, $tmp296);
        annotations290->flags = $tmp297;
    }
    }
    panda$core$Bit $tmp300 = (($fn299) p_owner->annotations->$class->vtable[9])(p_owner->annotations);
    bool $tmp298 = $tmp300.value;
    if ($tmp298) goto $l301;
    panda$core$Bit $tmp303 = (($fn302) annotations290->$class->vtable[2])(annotations290);
    $tmp298 = $tmp303.value;
    $l301:;
    panda$core$Bit $tmp304 = { $tmp298 };
    if ($tmp304.value) {
    {
        panda$core$Int64 $tmp305 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 8 }));
        panda$core$Int64 $tmp306 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations290->flags, $tmp305);
        annotations290->flags = $tmp306;
    }
    }
    panda$collections$Array* $tmp308 = (panda$collections$Array*) malloc(40);
    $tmp308->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp308->refCount.value = 1;
    panda$collections$Array$init($tmp308);
    parameters307 = $tmp308;
    {
        panda$core$Object* $tmp312 = (($fn311) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 2 }));
        ITable* $tmp313 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp312)->children)->$class->itable;
        while ($tmp313->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp313 = $tmp313->next;
        }
        $fn315 $tmp314 = $tmp313->methods[0];
        panda$collections$Iterator* $tmp316 = $tmp314(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp312)->children));
        p$Iter310 = $tmp316;
        $l317:;
        ITable* $tmp319 = p$Iter310->$class->itable;
        while ($tmp319->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp319 = $tmp319->next;
        }
        $fn321 $tmp320 = $tmp319->methods[0];
        panda$core$Bit $tmp322 = $tmp320(p$Iter310);
        panda$core$Bit $tmp323 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp322);
        if (!$tmp323.value) goto $l318;
        {
            ITable* $tmp325 = p$Iter310->$class->itable;
            while ($tmp325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp325 = $tmp325->next;
            }
            $fn327 $tmp326 = $tmp325->methods[1];
            panda$core$Object* $tmp328 = $tmp326(p$Iter310);
            p324 = ((org$pandalanguage$pandac$ASTNode*) $tmp328);
            org$pandalanguage$pandac$MethodDecl$Parameter* $tmp329 = (org$pandalanguage$pandac$MethodDecl$Parameter*) malloc(32);
            $tmp329->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Parameter$class;
            $tmp329->refCount.value = 1;
            panda$core$Object* $tmp332 = (($fn331) p324->children->$class->vtable[2])(p324->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$Type* $tmp334 = (($fn333) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp332));
            org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type($tmp329, ((panda$core$String*) p324->payload), $tmp334);
            panda$collections$Array$add$panda$collections$Array$T(parameters307, ((panda$core$Object*) $tmp329));
        }
        goto $l317;
        $l318:;
    }
    panda$core$Object* $tmp337 = (($fn336) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 3 }));
    org$pandalanguage$pandac$Type* $tmp339 = (($fn338) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp337));
    returnType335 = $tmp339;
    panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(kind279, ((panda$core$Int64) { 58 }));
    bool $tmp340 = $tmp341.value;
    if (!$tmp340) goto $l342;
    org$pandalanguage$pandac$Type* $tmp343 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp345 = (($fn344) returnType335->$class->vtable[4])(returnType335, ((panda$core$Object*) $tmp343));
    $tmp340 = $tmp345.value;
    $l342:;
    panda$core$Bit $tmp346 = { $tmp340 };
    if ($tmp346.value) {
    {
        (($fn348) self->compiler->$class->vtable[95])(self->compiler, p_m->offset, &$s347);
    }
    }
    panda$core$Object* $tmp350 = (($fn349) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 4 }));
    panda$core$Bit $tmp351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp350)->kind, ((panda$core$Int64) { 126 }));
    if ($tmp351.value) {
    {
        panda$core$Object* $tmp353 = (($fn352) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 4 }));
        panda$core$Bit $tmp355 = (($fn354) self->$class->vtable[7])(self, annotations290, ((org$pandalanguage$pandac$ASTNode*) $tmp353));
        if ($tmp355.value) {
        {
            panda$core$Int64 $tmp356 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp357 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(annotations290->flags, $tmp356);
            annotations290->flags = $tmp357;
        }
        }
        org$pandalanguage$pandac$MethodDecl* $tmp358 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
        $tmp358->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp358->refCount.value = 1;
        panda$core$Object* $tmp361 = (($fn360) p_m->children->$class->vtable[2])(p_m->children, ((panda$core$Int64) { 4 }));
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp358, p_owner, p_m->offset, doccomment284, annotations290, kind279, name283, parameters307, returnType335, ((org$pandalanguage$pandac$ASTNode*) $tmp361));
        return $tmp358;
    }
    }
    else {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp362 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
        $tmp362->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp362->refCount.value = 1;
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp362, p_owner, p_m->offset, doccomment284, annotations290, kind279, name283, parameters307, returnType335, NULL);
        return $tmp362;
    }
    }
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanClass$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_cl) {
    panda$core$String* fullName364;
    panda$core$String* doccomment374;
    org$pandalanguage$pandac$Annotations* annotations380;
    panda$collections$Array* parameters385;
    panda$collections$Iterator* p$Iter391;
    org$pandalanguage$pandac$ASTNode* p405;
    org$pandalanguage$pandac$Type* bound410;
    org$pandalanguage$pandac$Type* supertype421;
    panda$collections$Array* interfaces432;
    panda$collections$Iterator* intf$Iter435;
    org$pandalanguage$pandac$ASTNode* intf449;
    org$pandalanguage$pandac$ClassDecl* result456;
    panda$core$Bit foundInit459;
    panda$collections$Iterator* c$Iter460;
    org$pandalanguage$pandac$ASTNode* c474;
    panda$core$Int64 $match$10496479;
    org$pandalanguage$pandac$MethodDecl* i483;
    org$pandalanguage$pandac$MethodDecl* m492;
    org$pandalanguage$pandac$ClassDecl* inner497;
    panda$core$Range $tmp500;
    org$pandalanguage$pandac$ClassDecl* cl507;
    panda$core$Range $tmp510;
    org$pandalanguage$pandac$MethodDecl* defaultInit521;
    panda$core$Bit $tmp366 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s365);
    if ($tmp366.value) {
    {
        panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s367, p_contextName);
        panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp368, &$s369);
        panda$core$String* $tmp371 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp370, p_cl->payload);
        panda$core$String* $tmp373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp371, &$s372);
        fullName364 = $tmp373;
    }
    }
    else {
    {
        fullName364 = ((panda$core$String*) p_cl->payload);
    }
    }
    panda$core$Object* $tmp376 = (($fn375) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp377 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp376)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp377.value) {
    {
        panda$core$Object* $tmp379 = (($fn378) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 0 }));
        doccomment374 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp379)->payload);
    }
    }
    else {
    {
        doccomment374 = NULL;
    }
    }
    panda$core$Object* $tmp382 = (($fn381) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp384 = (($fn383) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp382));
    annotations380 = $tmp384;
    panda$collections$Array* $tmp386 = (panda$collections$Array*) malloc(40);
    $tmp386->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp386->refCount.value = 1;
    panda$collections$Array$init($tmp386);
    parameters385 = $tmp386;
    panda$core$Object* $tmp389 = (($fn388) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp389)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp390.value) {
    {
        {
            panda$core$Object* $tmp393 = (($fn392) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp394 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp393)->children)->$class->itable;
            while ($tmp394->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp394 = $tmp394->next;
            }
            $fn396 $tmp395 = $tmp394->methods[0];
            panda$collections$Iterator* $tmp397 = $tmp395(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp393)->children));
            p$Iter391 = $tmp397;
            $l398:;
            ITable* $tmp400 = p$Iter391->$class->itable;
            while ($tmp400->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp400 = $tmp400->next;
            }
            $fn402 $tmp401 = $tmp400->methods[0];
            panda$core$Bit $tmp403 = $tmp401(p$Iter391);
            panda$core$Bit $tmp404 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp403);
            if (!$tmp404.value) goto $l399;
            {
                ITable* $tmp406 = p$Iter391->$class->itable;
                while ($tmp406->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp406 = $tmp406->next;
                }
                $fn408 $tmp407 = $tmp406->methods[1];
                panda$core$Object* $tmp409 = $tmp407(p$Iter391);
                p405 = ((org$pandalanguage$pandac$ASTNode*) $tmp409);
                panda$core$Int64 $tmp412 = (($fn411) p405->children->$class->vtable[3])(p405->children);
                panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp412, ((panda$core$Int64) { 1 }));
                if ($tmp413.value) {
                {
                    panda$core$Object* $tmp415 = (($fn414) p405->children->$class->vtable[2])(p405->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp417 = (($fn416) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp415));
                    bound410 = $tmp417;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp418 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound410 = $tmp418;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp419 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(56);
                $tmp419->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp419->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$panda$core$Int64$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp419, p405->offset, fullName364, ((panda$core$String*) p405->payload), bound410);
                panda$collections$Array$add$panda$collections$Array$T(parameters385, ((panda$core$Object*) $tmp419));
            }
            goto $l398;
            $l399:;
        }
    }
    }
    else {
    {
    }
    }
    panda$core$Object* $tmp423 = (($fn422) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp424 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp423)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp424.value) {
    {
        panda$core$Object* $tmp426 = (($fn425) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 3 }));
        org$pandalanguage$pandac$Type* $tmp428 = (($fn427) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp426));
        supertype421 = $tmp428;
    }
    }
    else {
    panda$core$Bit $tmp430 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(fullName364, &$s429);
    if ($tmp430.value) {
    {
        org$pandalanguage$pandac$Type* $tmp431 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
        supertype421 = $tmp431;
    }
    }
    else {
    {
        supertype421 = NULL;
    }
    }
    }
    panda$collections$Array* $tmp433 = (panda$collections$Array*) malloc(40);
    $tmp433->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp433->refCount.value = 1;
    panda$collections$Array$init($tmp433);
    interfaces432 = $tmp433;
    {
        panda$core$Object* $tmp437 = (($fn436) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp438 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp437)->children)->$class->itable;
        while ($tmp438->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp438 = $tmp438->next;
        }
        $fn440 $tmp439 = $tmp438->methods[0];
        panda$collections$Iterator* $tmp441 = $tmp439(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp437)->children));
        intf$Iter435 = $tmp441;
        $l442:;
        ITable* $tmp444 = intf$Iter435->$class->itable;
        while ($tmp444->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp444 = $tmp444->next;
        }
        $fn446 $tmp445 = $tmp444->methods[0];
        panda$core$Bit $tmp447 = $tmp445(intf$Iter435);
        panda$core$Bit $tmp448 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp447);
        if (!$tmp448.value) goto $l443;
        {
            ITable* $tmp450 = intf$Iter435->$class->itable;
            while ($tmp450->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp450 = $tmp450->next;
            }
            $fn452 $tmp451 = $tmp450->methods[1];
            panda$core$Object* $tmp453 = $tmp451(intf$Iter435);
            intf449 = ((org$pandalanguage$pandac$ASTNode*) $tmp453);
            org$pandalanguage$pandac$Type* $tmp455 = (($fn454) self->$class->vtable[2])(self, intf449);
            panda$collections$Array$add$panda$collections$Array$T(interfaces432, ((panda$core$Object*) $tmp455));
        }
        goto $l442;
        $l443:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp457 = (org$pandalanguage$pandac$ClassDecl*) malloc(161);
    $tmp457->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp457->refCount.value = 1;
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$Q$panda$collections$Array$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp457, p_source, p_cl->offset, p_aliases, doccomment374, annotations380, ((panda$core$Int64) { 5011 }), fullName364, supertype421, interfaces432, parameters385, self->compiler->root);
    result456 = $tmp457;
    foundInit459 = ((panda$core$Bit) { false });
    {
        panda$core$Object* $tmp462 = (($fn461) p_cl->children->$class->vtable[2])(p_cl->children, ((panda$core$Int64) { 5 }));
        ITable* $tmp463 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp462)->children)->$class->itable;
        while ($tmp463->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp463 = $tmp463->next;
        }
        $fn465 $tmp464 = $tmp463->methods[0];
        panda$collections$Iterator* $tmp466 = $tmp464(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp462)->children));
        c$Iter460 = $tmp466;
        $l467:;
        ITable* $tmp469 = c$Iter460->$class->itable;
        while ($tmp469->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp469 = $tmp469->next;
        }
        $fn471 $tmp470 = $tmp469->methods[0];
        panda$core$Bit $tmp472 = $tmp470(c$Iter460);
        panda$core$Bit $tmp473 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp472);
        if (!$tmp473.value) goto $l468;
        {
            ITable* $tmp475 = c$Iter460->$class->itable;
            while ($tmp475->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp475 = $tmp475->next;
            }
            $fn477 $tmp476 = $tmp475->methods[1];
            panda$core$Object* $tmp478 = $tmp476(c$Iter460);
            c474 = ((org$pandalanguage$pandac$ASTNode*) $tmp478);
            {
                $match$10496479 = c474->kind;
                panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10496479, ((panda$core$Int64) { 148 }));
                if ($tmp480.value) {
                {
                    (($fn481) self->$class->vtable[4])(self, result456, c474);
                }
                }
                else {
                panda$core$Bit $tmp482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10496479, ((panda$core$Int64) { 147 }));
                if ($tmp482.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp485 = (($fn484) self->$class->vtable[5])(self, result456, c474);
                    i483 = $tmp485;
                    if (((panda$core$Bit) { i483 != NULL }).value) {
                    {
                        (($fn486) result456->symbolTable->$class->vtable[2])(result456->symbolTable, ((org$pandalanguage$pandac$Symbol*) i483));
                        panda$collections$Array$add$panda$collections$Array$T(result456->methods, ((panda$core$Object*) i483));
                    }
                    }
                    foundInit459 = ((panda$core$Bit) { true });
                }
                }
                else {
                panda$core$Bit $tmp488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10496479, ((panda$core$Int64) { 145 }));
                bool $tmp487 = $tmp488.value;
                if ($tmp487) goto $l489;
                panda$core$Bit $tmp490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10496479, ((panda$core$Int64) { 146 }));
                $tmp487 = $tmp490.value;
                $l489:;
                panda$core$Bit $tmp491 = { $tmp487 };
                if ($tmp491.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp494 = (($fn493) self->$class->vtable[8])(self, result456, c474);
                    m492 = $tmp494;
                    if (((panda$core$Bit) { m492 != NULL }).value) {
                    {
                        (($fn495) result456->symbolTable->$class->vtable[2])(result456->symbolTable, ((org$pandalanguage$pandac$Symbol*) m492));
                        panda$collections$Array$add$panda$collections$Array$T(result456->methods, ((panda$core$Object*) m492));
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10496479, ((panda$core$Int64) { 142 }));
                if ($tmp496.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp499 = (($fn498) self->$class->vtable[9])(self, p_source, p_aliases, fullName364, c474);
                    inner497 = $tmp499;
                    if (((panda$core$Bit) { inner497 != NULL }).value) {
                    {
                        inner497->owner = result456;
                        panda$collections$Array$add$panda$collections$Array$T(result456->classes, ((panda$core$Object*) inner497));
                        panda$core$Int64 $tmp501 = panda$core$String$length$R$panda$core$Int64(fullName364);
                        panda$core$Int64 $tmp502 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp501, ((panda$core$Int64) { 1 }));
                        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp500, (((panda$core$Int64$nullable) { $tmp502, true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp502, true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp503 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) inner497)->name, $tmp500);
                        (($fn504) result456->symbolTable->$class->vtable[3])(result456->symbolTable, ((org$pandalanguage$pandac$Symbol*) inner497), $tmp503);
                        panda$collections$Array$add$panda$collections$Array$T(inner497->symbolTable->parents, ((panda$core$Object*) result456->symbolTable));
                        (($fn505) inner497->symbolTable->$class->vtable[3])(inner497->symbolTable, ((org$pandalanguage$pandac$Symbol*) result456), ((panda$core$String*) p_cl->payload));
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$10496479, ((panda$core$Int64) { 151 }));
                if ($tmp506.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp509 = (($fn508) self->$class->vtable[10])(self, p_source, p_aliases, fullName364, c474);
                    cl507 = $tmp509;
                    if (((panda$core$Bit) { cl507 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result456->classes, ((panda$core$Object*) cl507));
                        panda$core$Int64 $tmp511 = panda$core$String$length$R$panda$core$Int64(fullName364);
                        panda$core$Int64 $tmp512 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp511, ((panda$core$Int64) { 1 }));
                        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp510, (((panda$core$Int64$nullable) { $tmp512, true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp512, true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp513 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl507)->name, $tmp510);
                        (($fn514) result456->symbolTable->$class->vtable[3])(result456->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl507), $tmp513);
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
        goto $l467;
        $l468:;
    }
    panda$core$Bit $tmp516 = panda$core$Bit$$NOT$R$panda$core$Bit(foundInit459);
    bool $tmp515 = $tmp516.value;
    if (!$tmp515) goto $l517;
    panda$core$Bit $tmp519 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) result456)->name, &$s518);
    $tmp515 = $tmp519.value;
    $l517:;
    panda$core$Bit $tmp520 = { $tmp515 };
    if ($tmp520.value) {
    {
        org$pandalanguage$pandac$MethodDecl* $tmp522 = (org$pandalanguage$pandac$MethodDecl*) malloc(105);
        $tmp522->$class = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$class;
        $tmp522->refCount.value = 1;
        org$pandalanguage$pandac$Annotations* $tmp524 = (org$pandalanguage$pandac$Annotations*) malloc(24);
        $tmp524->$class = (panda$core$Class*) &org$pandalanguage$pandac$Annotations$class;
        $tmp524->refCount.value = 1;
        org$pandalanguage$pandac$Annotations$init($tmp524);
        panda$collections$Array* $tmp527 = (panda$collections$Array*) malloc(40);
        $tmp527->$class = (panda$core$Class*) &panda$collections$Array$class;
        $tmp527->refCount.value = 1;
        panda$collections$Array$init($tmp527);
        org$pandalanguage$pandac$Type* $tmp529 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ASTNode* $tmp530 = (org$pandalanguage$pandac$ASTNode*) malloc(48);
        $tmp530->$class = (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class;
        $tmp530->refCount.value = 1;
        org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$core$Int64($tmp530, ((panda$core$Int64) { 126 }), p_cl->offset);
        org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$panda$core$Int64$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ASTNode$Q($tmp522, result456, p_cl->offset, NULL, $tmp524, ((panda$core$Int64) { 59 }), &$s526, $tmp527, $tmp529, $tmp530);
        defaultInit521 = $tmp522;
        panda$collections$Array$add$panda$collections$Array$T(result456->methods, ((panda$core$Object*) defaultInit521));
        (($fn532) result456->symbolTable->$class->vtable[2])(result456->symbolTable, ((org$pandalanguage$pandac$Symbol*) defaultInit521));
    }
    }
    return result456;
}
org$pandalanguage$pandac$ClassDecl* org$pandalanguage$pandac$Scanner$scanInterface$panda$io$File$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$org$pandalanguage$pandac$ASTNode$R$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, panda$collections$MapView* p_aliases, panda$core$String* p_contextName, org$pandalanguage$pandac$ASTNode* p_intf) {
    panda$core$String* fullName533;
    panda$core$String* doccomment543;
    org$pandalanguage$pandac$Annotations* annotations549;
    panda$collections$Array* parameters554;
    panda$collections$Iterator* p$Iter560;
    org$pandalanguage$pandac$ASTNode* p574;
    org$pandalanguage$pandac$Type* bound579;
    panda$collections$Array* interfaces590;
    panda$collections$Iterator* s$Iter593;
    org$pandalanguage$pandac$ASTNode* s607;
    org$pandalanguage$pandac$ClassDecl* result614;
    panda$collections$Iterator* c$Iter618;
    org$pandalanguage$pandac$ASTNode* c632;
    panda$core$Int64 $match$14644637;
    org$pandalanguage$pandac$MethodDecl* i641;
    org$pandalanguage$pandac$MethodDecl* m650;
    org$pandalanguage$pandac$ClassDecl* cl657;
    panda$core$Range $tmp660;
    org$pandalanguage$pandac$ClassDecl* cl666;
    panda$core$Range $tmp669;
    panda$core$Bit $tmp535 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(p_contextName, &$s534);
    if ($tmp535.value) {
    {
        panda$core$String* $tmp537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s536, p_contextName);
        panda$core$String* $tmp539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp537, &$s538);
        panda$core$String* $tmp540 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp539, p_intf->payload);
        panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp540, &$s541);
        fullName533 = $tmp542;
    }
    }
    else {
    {
        fullName533 = ((panda$core$String*) p_intf->payload);
    }
    }
    panda$core$Object* $tmp545 = (($fn544) p_intf->children->$class->vtable[2])(p_intf->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp546 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp545)->kind, ((panda$core$Int64) { 138 }));
    if ($tmp546.value) {
    {
        panda$core$Object* $tmp548 = (($fn547) p_intf->children->$class->vtable[2])(p_intf->children, ((panda$core$Int64) { 0 }));
        doccomment543 = ((panda$core$String*) ((org$pandalanguage$pandac$ASTNode*) $tmp548)->payload);
    }
    }
    else {
    {
        doccomment543 = NULL;
    }
    }
    panda$core$Object* $tmp551 = (($fn550) p_intf->children->$class->vtable[2])(p_intf->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Annotations* $tmp553 = (($fn552) self->$class->vtable[3])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp551));
    annotations549 = $tmp553;
    panda$collections$Array* $tmp555 = (panda$collections$Array*) malloc(40);
    $tmp555->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp555->refCount.value = 1;
    panda$collections$Array$init($tmp555);
    parameters554 = $tmp555;
    panda$core$Object* $tmp558 = (($fn557) p_intf->children->$class->vtable[2])(p_intf->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$ASTNode*) $tmp558)->kind, ((panda$core$Int64) { 137 }));
    if ($tmp559.value) {
    {
        {
            panda$core$Object* $tmp562 = (($fn561) p_intf->children->$class->vtable[2])(p_intf->children, ((panda$core$Int64) { 2 }));
            ITable* $tmp563 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp562)->children)->$class->itable;
            while ($tmp563->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp563 = $tmp563->next;
            }
            $fn565 $tmp564 = $tmp563->methods[0];
            panda$collections$Iterator* $tmp566 = $tmp564(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp562)->children));
            p$Iter560 = $tmp566;
            $l567:;
            ITable* $tmp569 = p$Iter560->$class->itable;
            while ($tmp569->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp569 = $tmp569->next;
            }
            $fn571 $tmp570 = $tmp569->methods[0];
            panda$core$Bit $tmp572 = $tmp570(p$Iter560);
            panda$core$Bit $tmp573 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp572);
            if (!$tmp573.value) goto $l568;
            {
                ITable* $tmp575 = p$Iter560->$class->itable;
                while ($tmp575->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp575 = $tmp575->next;
                }
                $fn577 $tmp576 = $tmp575->methods[1];
                panda$core$Object* $tmp578 = $tmp576(p$Iter560);
                p574 = ((org$pandalanguage$pandac$ASTNode*) $tmp578);
                panda$core$Int64 $tmp581 = (($fn580) p574->children->$class->vtable[3])(p574->children);
                panda$core$Bit $tmp582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp581, ((panda$core$Int64) { 1 }));
                if ($tmp582.value) {
                {
                    panda$core$Object* $tmp584 = (($fn583) p574->children->$class->vtable[2])(p574->children, ((panda$core$Int64) { 0 }));
                    org$pandalanguage$pandac$Type* $tmp586 = (($fn585) self->$class->vtable[2])(self, ((org$pandalanguage$pandac$ASTNode*) $tmp584));
                    bound579 = $tmp586;
                }
                }
                else {
                {
                    org$pandalanguage$pandac$Type* $tmp587 = org$pandalanguage$pandac$Type$Any$R$org$pandalanguage$pandac$Type();
                    bound579 = $tmp587;
                }
                }
                org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp588 = (org$pandalanguage$pandac$ClassDecl$GenericParameter*) malloc(56);
                $tmp588->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$GenericParameter$class;
                $tmp588->refCount.value = 1;
                org$pandalanguage$pandac$ClassDecl$GenericParameter$init$panda$core$Int64$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type($tmp588, p574->offset, fullName533, ((panda$core$String*) p574->payload), bound579);
                panda$collections$Array$add$panda$collections$Array$T(parameters554, ((panda$core$Object*) $tmp588));
            }
            goto $l567;
            $l568:;
        }
    }
    }
    else {
    {
    }
    }
    panda$collections$Array* $tmp591 = (panda$collections$Array*) malloc(40);
    $tmp591->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp591->refCount.value = 1;
    panda$collections$Array$init($tmp591);
    interfaces590 = $tmp591;
    {
        panda$core$Object* $tmp595 = (($fn594) p_intf->children->$class->vtable[2])(p_intf->children, ((panda$core$Int64) { 3 }));
        ITable* $tmp596 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp595)->children)->$class->itable;
        while ($tmp596->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp596 = $tmp596->next;
        }
        $fn598 $tmp597 = $tmp596->methods[0];
        panda$collections$Iterator* $tmp599 = $tmp597(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp595)->children));
        s$Iter593 = $tmp599;
        $l600:;
        ITable* $tmp602 = s$Iter593->$class->itable;
        while ($tmp602->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp602 = $tmp602->next;
        }
        $fn604 $tmp603 = $tmp602->methods[0];
        panda$core$Bit $tmp605 = $tmp603(s$Iter593);
        panda$core$Bit $tmp606 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp605);
        if (!$tmp606.value) goto $l601;
        {
            ITable* $tmp608 = s$Iter593->$class->itable;
            while ($tmp608->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp608 = $tmp608->next;
            }
            $fn610 $tmp609 = $tmp608->methods[1];
            panda$core$Object* $tmp611 = $tmp609(s$Iter593);
            s607 = ((org$pandalanguage$pandac$ASTNode*) $tmp611);
            org$pandalanguage$pandac$Type* $tmp613 = (($fn612) self->$class->vtable[2])(self, s607);
            panda$collections$Array$add$panda$collections$Array$T(interfaces590, ((panda$core$Object*) $tmp613));
        }
        goto $l600;
        $l601:;
    }
    org$pandalanguage$pandac$ClassDecl* $tmp615 = (org$pandalanguage$pandac$ClassDecl*) malloc(161);
    $tmp615->$class = (panda$core$Class*) &org$pandalanguage$pandac$ClassDecl$class;
    $tmp615->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp617 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl$init$panda$io$File$panda$core$Int64$panda$collections$MapView$LTpanda$core$String$Cpanda$core$String$GT$panda$core$String$Q$org$pandalanguage$pandac$Annotations$panda$core$Int64$panda$core$String$org$pandalanguage$pandac$Type$Q$panda$collections$Array$LTorg$pandalanguage$pandac$Type$GT$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$org$pandalanguage$pandac$SymbolTable($tmp615, p_source, p_intf->offset, p_aliases, doccomment543, annotations549, ((panda$core$Int64) { 5012 }), fullName533, $tmp617, interfaces590, parameters554, self->compiler->root);
    result614 = $tmp615;
    {
        panda$core$Object* $tmp620 = (($fn619) p_intf->children->$class->vtable[2])(p_intf->children, ((panda$core$Int64) { 4 }));
        ITable* $tmp621 = ((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp620)->children)->$class->itable;
        while ($tmp621->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp621 = $tmp621->next;
        }
        $fn623 $tmp622 = $tmp621->methods[0];
        panda$collections$Iterator* $tmp624 = $tmp622(((panda$collections$Iterable*) ((org$pandalanguage$pandac$ASTNode*) $tmp620)->children));
        c$Iter618 = $tmp624;
        $l625:;
        ITable* $tmp627 = c$Iter618->$class->itable;
        while ($tmp627->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp627 = $tmp627->next;
        }
        $fn629 $tmp628 = $tmp627->methods[0];
        panda$core$Bit $tmp630 = $tmp628(c$Iter618);
        panda$core$Bit $tmp631 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp630);
        if (!$tmp631.value) goto $l626;
        {
            ITable* $tmp633 = c$Iter618->$class->itable;
            while ($tmp633->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp633 = $tmp633->next;
            }
            $fn635 $tmp634 = $tmp633->methods[1];
            panda$core$Object* $tmp636 = $tmp634(c$Iter618);
            c632 = ((org$pandalanguage$pandac$ASTNode*) $tmp636);
            {
                $match$14644637 = c632->kind;
                panda$core$Bit $tmp638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14644637, ((panda$core$Int64) { 148 }));
                if ($tmp638.value) {
                {
                    (($fn639) self->$class->vtable[4])(self, result614, c632);
                }
                }
                else {
                panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14644637, ((panda$core$Int64) { 147 }));
                if ($tmp640.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp643 = (($fn642) self->$class->vtable[5])(self, result614, c632);
                    i641 = $tmp643;
                    if (((panda$core$Bit) { i641 != NULL }).value) {
                    {
                        (($fn644) result614->symbolTable->$class->vtable[2])(result614->symbolTable, ((org$pandalanguage$pandac$Symbol*) i641));
                        panda$collections$Array$add$panda$collections$Array$T(result614->methods, ((panda$core$Object*) i641));
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14644637, ((panda$core$Int64) { 145 }));
                bool $tmp645 = $tmp646.value;
                if ($tmp645) goto $l647;
                panda$core$Bit $tmp648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14644637, ((panda$core$Int64) { 146 }));
                $tmp645 = $tmp648.value;
                $l647:;
                panda$core$Bit $tmp649 = { $tmp645 };
                if ($tmp649.value) {
                {
                    org$pandalanguage$pandac$MethodDecl* $tmp652 = (($fn651) self->$class->vtable[8])(self, result614, c632);
                    m650 = $tmp652;
                    if (((panda$core$Bit) { m650 != NULL }).value) {
                    {
                        if (((panda$core$Bit) { m650->body == NULL }).value) {
                        {
                            panda$core$Int64 $tmp653 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), ((panda$core$Int64) { 9 }));
                            panda$core$Int64 $tmp654 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(m650->annotations->flags, $tmp653);
                            m650->annotations->flags = $tmp654;
                        }
                        }
                        (($fn655) result614->symbolTable->$class->vtable[2])(result614->symbolTable, ((org$pandalanguage$pandac$Symbol*) m650));
                        panda$collections$Array$add$panda$collections$Array$T(result614->methods, ((panda$core$Object*) m650));
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14644637, ((panda$core$Int64) { 142 }));
                if ($tmp656.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp659 = (($fn658) self->$class->vtable[9])(self, p_source, p_aliases, fullName533, c632);
                    cl657 = $tmp659;
                    if (((panda$core$Bit) { cl657 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result614->classes, ((panda$core$Object*) cl657));
                        panda$core$Int64 $tmp661 = panda$core$String$length$R$panda$core$Int64(fullName533);
                        panda$core$Int64 $tmp662 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp661, ((panda$core$Int64) { 1 }));
                        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp660, (((panda$core$Int64$nullable) { $tmp662, true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp662, true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp663 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl657)->name, $tmp660);
                        (($fn664) result614->symbolTable->$class->vtable[3])(result614->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl657), $tmp663);
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$14644637, ((panda$core$Int64) { 151 }));
                if ($tmp665.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp668 = (($fn667) self->$class->vtable[10])(self, p_source, p_aliases, fullName533, c632);
                    cl666 = $tmp668;
                    if (((panda$core$Bit) { cl666 != NULL }).value) {
                    {
                        panda$collections$Array$add$panda$collections$Array$T(result614->classes, ((panda$core$Object*) cl666));
                        panda$core$Int64 $tmp670 = panda$core$String$length$R$panda$core$Int64(fullName533);
                        panda$core$Int64 $tmp671 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp670, ((panda$core$Int64) { 1 }));
                        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp669, (((panda$core$Int64$nullable) { $tmp671, true }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp671, true }).value))) : NULL), (((panda$core$Int64$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) ((panda$core$Int64$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp672 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) cl666)->name, $tmp669);
                        (($fn673) result614->symbolTable->$class->vtable[3])(result614->symbolTable, ((org$pandalanguage$pandac$Symbol*) cl666), $tmp672);
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
        goto $l625;
        $l626:;
    }
    return result614;
}
void org$pandalanguage$pandac$Scanner$addClass$org$pandalanguage$pandac$ClassDecl$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$collections$Array* p_arr) {
    panda$collections$Iterator* inner$Iter674;
    org$pandalanguage$pandac$ClassDecl* inner686;
    panda$collections$Array$add$panda$collections$Array$T(p_arr, ((panda$core$Object*) p_cl));
    {
        ITable* $tmp675 = ((panda$collections$Iterable*) p_cl->classes)->$class->itable;
        while ($tmp675->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp675 = $tmp675->next;
        }
        $fn677 $tmp676 = $tmp675->methods[0];
        panda$collections$Iterator* $tmp678 = $tmp676(((panda$collections$Iterable*) p_cl->classes));
        inner$Iter674 = $tmp678;
        $l679:;
        ITable* $tmp681 = inner$Iter674->$class->itable;
        while ($tmp681->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp681 = $tmp681->next;
        }
        $fn683 $tmp682 = $tmp681->methods[0];
        panda$core$Bit $tmp684 = $tmp682(inner$Iter674);
        panda$core$Bit $tmp685 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp684);
        if (!$tmp685.value) goto $l680;
        {
            ITable* $tmp687 = inner$Iter674->$class->itable;
            while ($tmp687->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp687 = $tmp687->next;
            }
            $fn689 $tmp688 = $tmp687->methods[1];
            panda$core$Object* $tmp690 = $tmp688(inner$Iter674);
            inner686 = ((org$pandalanguage$pandac$ClassDecl*) $tmp690);
            (($fn691) self->$class->vtable[11])(self, inner686, p_arr);
        }
        goto $l679;
        $l680:;
    }
}
panda$collections$ListView* org$pandalanguage$pandac$Scanner$scan$panda$io$File$org$pandalanguage$pandac$ASTNode$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(org$pandalanguage$pandac$Scanner* self, panda$io$File* p_source, org$pandalanguage$pandac$ASTNode* p_file) {
    panda$collections$Array* result692;
    panda$core$String* currentPackage695;
    panda$collections$HashMap* aliases697;
    panda$collections$Iterator* c$Iter700;
    org$pandalanguage$pandac$ASTNode* c712;
    panda$core$Int64 $match$16742717;
    panda$core$String* fullName720;
    panda$core$String$Index$nullable idx721;
    panda$core$String* alias724;
    panda$core$Range $tmp725;
    org$pandalanguage$pandac$ClassDecl* cl730;
    org$pandalanguage$pandac$ClassDecl* cl735;
    panda$collections$Array* $tmp693 = (panda$collections$Array*) malloc(40);
    $tmp693->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp693->refCount.value = 1;
    panda$collections$Array$init($tmp693);
    result692 = $tmp693;
    currentPackage695 = &$s696;
    panda$collections$HashMap* $tmp698 = (panda$collections$HashMap*) malloc(56);
    $tmp698->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp698->refCount.value = 1;
    panda$collections$HashMap$init($tmp698);
    aliases697 = $tmp698;
    {
        ITable* $tmp701 = ((panda$collections$Iterable*) p_file->children)->$class->itable;
        while ($tmp701->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp701 = $tmp701->next;
        }
        $fn703 $tmp702 = $tmp701->methods[0];
        panda$collections$Iterator* $tmp704 = $tmp702(((panda$collections$Iterable*) p_file->children));
        c$Iter700 = $tmp704;
        $l705:;
        ITable* $tmp707 = c$Iter700->$class->itable;
        while ($tmp707->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp707 = $tmp707->next;
        }
        $fn709 $tmp708 = $tmp707->methods[0];
        panda$core$Bit $tmp710 = $tmp708(c$Iter700);
        panda$core$Bit $tmp711 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp710);
        if (!$tmp711.value) goto $l706;
        {
            ITable* $tmp713 = c$Iter700->$class->itable;
            while ($tmp713->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp713 = $tmp713->next;
            }
            $fn715 $tmp714 = $tmp713->methods[1];
            panda$core$Object* $tmp716 = $tmp714(c$Iter700);
            c712 = ((org$pandalanguage$pandac$ASTNode*) $tmp716);
            {
                $match$16742717 = c712->kind;
                panda$core$Bit $tmp718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16742717, ((panda$core$Int64) { 100 }));
                if ($tmp718.value) {
                {
                    currentPackage695 = ((panda$core$String*) c712->payload);
                }
                }
                else {
                panda$core$Bit $tmp719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16742717, ((panda$core$Int64) { 101 }));
                if ($tmp719.value) {
                {
                    fullName720 = ((panda$core$String*) c712->payload);
                    panda$core$String$Index$nullable $tmp723 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(fullName720, &$s722);
                    idx721 = $tmp723;
                    if (((panda$core$Bit) { idx721.nonnull }).value) {
                    {
                        panda$core$String$Index $tmp726 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(fullName720, ((panda$core$String$Index) idx721.value));
                        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp725, (((panda$core$String$Index$nullable) { $tmp726, true }).nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) ((panda$core$String$Index$nullable) { $tmp726, true }).value))) : NULL), (((panda$core$String$Index$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) ((panda$core$String$Index$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
                        panda$core$String* $tmp727 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(fullName720, $tmp725);
                        alias724 = $tmp727;
                    }
                    }
                    else {
                    {
                        alias724 = fullName720;
                    }
                    }
                    (($fn728) aliases697->$class->vtable[5])(aliases697, ((panda$core$Object*) ((panda$collections$Key*) alias724)), ((panda$core$Object*) fullName720));
                }
                }
                else {
                panda$core$Bit $tmp729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16742717, ((panda$core$Int64) { 142 }));
                if ($tmp729.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp732 = (($fn731) self->$class->vtable[9])(self, p_source, ((panda$collections$MapView*) aliases697), currentPackage695, c712);
                    cl730 = $tmp732;
                    if (((panda$core$Bit) { cl730 != NULL }).value) {
                    {
                        (($fn733) self->$class->vtable[11])(self, cl730, result692);
                    }
                    }
                }
                }
                else {
                panda$core$Bit $tmp734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$16742717, ((panda$core$Int64) { 151 }));
                if ($tmp734.value) {
                {
                    org$pandalanguage$pandac$ClassDecl* $tmp737 = (($fn736) self->$class->vtable[10])(self, p_source, ((panda$collections$MapView*) aliases697), currentPackage695, c712);
                    cl735 = $tmp737;
                    if (((panda$core$Bit) { cl735 != NULL }).value) {
                    {
                        (($fn738) self->$class->vtable[11])(self, cl735, result692);
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
        goto $l705;
        $l706:;
    }
    return ((panda$collections$ListView*) result692);
}

