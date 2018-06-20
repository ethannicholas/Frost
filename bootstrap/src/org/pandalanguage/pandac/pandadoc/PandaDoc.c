#include "org/pandalanguage/pandac/pandadoc/PandaDoc.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Array.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/pandadoc/PandaDoc/XMLWriter.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/io/IndentedOutputStream.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "panda/io/Console.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/HashSet.h"
#include "panda/collections/Key.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Method.h"
#include "panda/core/Immutable.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ImmutableArray.h"

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$pandadoc$PandaDoc$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$pandadoc$PandaDoc$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$pandadoc$PandaDoc$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$finish} };

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$PandaDoc$class_type org$pandalanguage$pandac$pandadoc$PandaDoc$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$pandadoc$PandaDoc$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$cleanup, org$pandalanguage$pandac$pandadoc$PandaDoc$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$pandadoc$PandaDoc$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File, org$pandalanguage$pandac$pandadoc$PandaDoc$simpleName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$escape$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$getDocComment$org$pandalanguage$pandac$MethodDecl$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeAncestors$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedFields$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedMethods$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$pandadoc$PandaDoc$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$finish} };

typedef panda$core$String* (*$fn44)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*, panda$core$String*);
typedef panda$core$String* (*$fn72)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn94)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn101)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn112)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn115)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn135)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$core$String* (*$fn139)(panda$collections$ListView*);
typedef void (*$fn165)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn168)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn170)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn174)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn176)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn178)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn180)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn182)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn186)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn190)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn194)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn198)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn202)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn204)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn231)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn238)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn249)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn264)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn311)(panda$collections$ListView*, panda$core$String*);
typedef void (*$fn330)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn336)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$Object* (*$fn351)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn354)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn357)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef void (*$fn359)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn361)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$Bit (*$fn379)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn384)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn386)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn410)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn411)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Annotations*);
typedef void (*$fn412)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn413)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn415)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn451)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn477)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn498)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn501)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn503)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn505)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn507)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn508)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Annotations*);
typedef void (*$fn510)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn519)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn526)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn537)(panda$collections$Iterator*);
typedef void (*$fn540)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn542)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn543)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn545)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn549)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn554)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn555)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn557)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn558)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn564)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn573)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn586)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn623)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn630)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn641)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn643)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$collections$ListView* (*$fn660)(panda$collections$ListView*, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT);
typedef void (*$fn666)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn675)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn682)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn693)(panda$collections$Iterator*);
typedef void (*$fn696)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn698)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn707)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn715)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn717)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn721)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn742)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn749)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn760)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn796)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn803)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn814)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn821)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$ListView* (*$fn857)(panda$collections$ListView*, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT);
typedef void (*$fn863)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn872)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn879)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn890)(panda$collections$Iterator*);
typedef void (*$fn893)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn895)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn904)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn912)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn914)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn918)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn929)(panda$core$Object*, org$pandalanguage$pandac$Type*);
typedef void (*$fn930)(org$pandalanguage$pandac$Type*);
typedef void (*$fn941)(panda$core$Object*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn942)(org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn953)(panda$core$Object*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn954)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$io$File* (*$fn963)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*, panda$core$String*);
typedef void (*$fn974)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn976)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn981)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn983)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn984)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn985)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn990)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn995)(panda$collections$CollectionView*, panda$core$MutableMethod*);
typedef void (*$fn997)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn998)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn999)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1004)(panda$collections$CollectionView*, panda$core$MutableMethod*);
typedef void (*$fn1009)(panda$collections$CollectionView*, panda$core$MutableMethod*);
typedef void (*$fn1011)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x50\x61\x6e\x64\x61\x44\x6f\x63", 42, 5747474735547879356, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65", 4, 224821051, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x69\x6d\x70\x6c\x65\x4e\x61\x6d\x65", 10, -2422848206215579872, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65", 4, 224821051, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 11, 4507694521940296927, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 11, 4507694521940296927, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x20\x2a\x29\x2e\x2a", 6, 1485297799044, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x63", 3, 2061711, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x70\x3e", 3, 1653735, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x29\x3c\x70\x3e\x28\x2e\x2a\x29\x3c\x5c\x2f\x70\x3e\x5c\x73\x2a", 19, -187746282861049871, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x6d\x6d\x61\x72\x79", 7, 230529490176083, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e", 11, -5937374402135118271, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x63", 3, 2061711, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72", 3, 2243930, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66", 3, 2060704, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74", 8, 21561703977373775, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79", 8, 22958674678203502, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6b\x69\x6e\x64", 4, 215384923, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x68\x65\x72\x69\x74", 8, 17802859964149620, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x46\x4f\x55\x4e\x44\x20\x4f\x56\x45\x52\x52\x49\x44\x45\x20\x4f\x4e\x3a\x20", 19, -317029310370922328, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x73\x70\x65\x63\x69\x66\x69\x65\x73\x20\x27\x40\x69\x6e\x68\x65\x72\x69\x74\x27\x2c\x20\x62\x75\x74\x20\x6e\x6f\x20\x6d\x61\x74\x63\x68\x69\x6e\x67\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x6f\x75\x6e\x64\x20\x61\x6d\x6f\x6e\x67\x20\x69\x74\x73\x20\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 77, 7383122139536139686, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x73\x70\x65\x63\x69\x66\x69\x65\x73\x20\x27\x40\x69\x6e\x68\x65\x72\x69\x74\x27\x2c\x20\x62\x75\x74\x20", 33, 1577005792040822601, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x79\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e", 32, -7234224912530298773, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64", 6, 2217751792842, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e", 8, 21889712039024771, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d\x73", 6, 2248863720545, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d\x73", 6, 2248863720545, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 9, 2155955930119440779, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 9, 2155955930119440779, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x6f\x6b\x65\x6e\x20\x6c\x69\x6e\x6b\x2e\x68\x74\x6d\x6c", 16, 8336040249104082495, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x46\x69\x65\x6c\x64\x73", 15, -7565896169200556928, NULL };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x6e\x6b", 4, 216415231, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x46\x69\x65\x6c\x64\x73", 15, -7565896169200556928, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x4d\x65\x74\x68\x6f\x64\x73", 16, -7838998677007085647, NULL };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64", 6, 2217751792842, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x6e\x6b", 4, 216415231, NULL };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s910 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64", 6, 2217751792842, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x4d\x65\x74\x68\x6f\x64\x73", 16, -7838998677007085647, NULL };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x78\x6d\x6c", 4, 152689484, NULL };
static panda$core$String $s973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73", 5, 20924353935, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x69\x6d\x70\x6c\x65\x4e\x61\x6d\x65", 10, -2422848206215579872, NULL };
static panda$core$String $s989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73", 10, 5141924857140843769, NULL };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73", 10, 5141924857140843769, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73", 5, 20924353935, NULL };

void org$pandalanguage$pandac$pandadoc$PandaDoc$init$panda$io$File(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$io$File* p_outDir) {
    panda$core$Weak* $tmp2;
    panda$core$Weak* $tmp3;
    panda$io$File* $tmp5;
    panda$io$File* $tmp6;
    self->outDir = NULL;
    self->compiler = NULL;
    self->out = NULL;
    panda$core$Weak* $tmp4 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp4, ((panda$core$Object*) NULL));
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->compiler = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    {
        $tmp5 = self->outDir;
        $tmp6 = p_outDir;
        self->outDir = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    }
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp7;
    panda$core$Weak* $tmp8;
    panda$core$Weak* $tmp9;
    {
        $tmp7 = self->compiler;
        panda$core$Weak* $tmp10 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp10, ((panda$core$Object*) p_compiler));
        $tmp9 = $tmp10;
        $tmp8 = $tmp9;
        self->compiler = $tmp8;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    }
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $returnValue11;
    panda$core$String* $tmp12;
    panda$core$String* $tmp13;
    panda$core$String* $tmp14;
    panda$core$String* $tmp15;
    panda$core$String* $tmp16;
    panda$core$String* $tmp17;
    panda$core$String* $tmp18;
    panda$core$String* $tmp19;
    panda$core$String* $tmp22 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s20, &$s21);
    $tmp19 = $tmp22;
    panda$core$String* $tmp25 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp19, &$s23, &$s24);
    $tmp18 = $tmp25;
    panda$core$String* $tmp28 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp18, &$s26, &$s27);
    $tmp17 = $tmp28;
    panda$core$String* $tmp31 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp17, &$s29, &$s30);
    $tmp16 = $tmp31;
    panda$core$String* $tmp34 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp16, &$s32, &$s33);
    $tmp15 = $tmp34;
    panda$core$String* $tmp37 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp15, &$s35, &$s36);
    $tmp14 = $tmp37;
    panda$core$String* $tmp38 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp14, p_extension);
    $tmp13 = $tmp38;
    $tmp12 = $tmp13;
    $returnValue11 = $tmp12;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
    return $returnValue11;
}
panda$io$File* org$pandalanguage$pandac$pandadoc$PandaDoc$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $returnValue40;
    panda$io$File* $tmp41;
    panda$io$File* $tmp42;
    panda$core$String* $tmp43;
    panda$core$String* $tmp45 = (($fn44) self->$class->vtable[3])(self, p_cl, p_extension);
    $tmp43 = $tmp45;
    panda$io$File* $tmp46 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp43);
    $tmp42 = $tmp46;
    $tmp41 = $tmp42;
    $returnValue40 = $tmp41;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    return $returnValue40;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$simpleName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$Type$Kind $match$66_948;
    panda$core$Int64 $tmp49;
    panda$core$String$Index$nullable index51;
    panda$core$String* $returnValue54;
    panda$core$String* $tmp55;
    panda$core$String* $tmp57;
    panda$core$String* $tmp58;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp59;
    panda$core$Bit $tmp61;
    panda$core$Int64 $tmp64;
    panda$core$String* $tmp66;
    panda$core$String* $tmp67;
    panda$core$String* $tmp68;
    panda$core$Object* $tmp69;
    panda$core$Int64 $tmp70;
    panda$core$Int64 $tmp77;
    panda$collections$Array* simpleNames82 = NULL;
    panda$collections$Array* $tmp83;
    panda$collections$Array* $tmp84;
    panda$collections$Iterator* Iter$77$1789 = NULL;
    panda$collections$Iterator* $tmp90;
    panda$collections$Iterator* $tmp91;
    org$pandalanguage$pandac$Type* s107 = NULL;
    org$pandalanguage$pandac$Type* $tmp108;
    panda$core$Object* $tmp109;
    panda$core$String* $tmp114;
    panda$core$String* $tmp119;
    panda$core$String* $tmp120;
    panda$core$String* $tmp121;
    panda$core$String* $tmp122;
    panda$core$Object* $tmp123;
    panda$core$Int64 $tmp124;
    panda$core$String* $tmp128;
    panda$collections$ListView* $tmp129;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp130;
    panda$core$Int64 $tmp131;
    panda$core$Bit $tmp132;
    panda$core$String* $tmp147;
    {
        $match$66_948 = p_t->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp49, 0);
        panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_948.$rawValue, $tmp49);
        if ($tmp50.value) {
        {
            panda$core$String$Index$nullable $tmp53 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s52);
            index51 = $tmp53;
            if (((panda$core$Bit) { !index51.nonnull }).value) {
            {
                $tmp55 = ((org$pandalanguage$pandac$Symbol*) p_t)->name;
                $returnValue54 = $tmp55;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp55));
                return $returnValue54;
            }
            }
            panda$core$String$Index $tmp60 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_t)->name, ((panda$core$String$Index) index51.value));
            panda$core$Bit$init$builtin_bit(&$tmp61, false);
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp59, ((panda$core$String$Index$nullable) { $tmp60, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp61);
            panda$core$String* $tmp62 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_t)->name, $tmp59);
            $tmp58 = $tmp62;
            $tmp57 = $tmp58;
            $returnValue54 = $tmp57;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
            return $returnValue54;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp64, 1);
        panda$core$Bit $tmp65 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_948.$rawValue, $tmp64);
        if ($tmp65.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp70, 0);
            panda$core$Object* $tmp71 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp70);
            $tmp69 = $tmp71;
            panda$core$String* $tmp73 = (($fn72) self->$class->vtable[5])(self, ((org$pandalanguage$pandac$Type*) $tmp69));
            $tmp68 = $tmp73;
            panda$core$String* $tmp75 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp68, &$s74);
            $tmp67 = $tmp75;
            $tmp66 = $tmp67;
            $returnValue54 = $tmp66;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp66));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
            panda$core$Panda$unref$panda$core$Object($tmp69);
            return $returnValue54;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp77, 11);
        panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$66_948.$rawValue, $tmp77);
        if ($tmp78.value) {
        {
            int $tmp81;
            {
                panda$collections$Array* $tmp85 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp85);
                $tmp84 = $tmp85;
                $tmp83 = $tmp84;
                simpleNames82 = $tmp83;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
                {
                    int $tmp88;
                    {
                        ITable* $tmp92 = ((panda$collections$Iterable*) p_t->subtypes)->$class->itable;
                        while ($tmp92->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp92 = $tmp92->next;
                        }
                        $fn94 $tmp93 = $tmp92->methods[0];
                        panda$collections$Iterator* $tmp95 = $tmp93(((panda$collections$Iterable*) p_t->subtypes));
                        $tmp91 = $tmp95;
                        $tmp90 = $tmp91;
                        Iter$77$1789 = $tmp90;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
                        $l96:;
                        ITable* $tmp99 = Iter$77$1789->$class->itable;
                        while ($tmp99->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp99 = $tmp99->next;
                        }
                        $fn101 $tmp100 = $tmp99->methods[0];
                        panda$core$Bit $tmp102 = $tmp100(Iter$77$1789);
                        panda$core$Bit $tmp103 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp102);
                        bool $tmp98 = $tmp103.value;
                        if (!$tmp98) goto $l97;
                        {
                            int $tmp106;
                            {
                                ITable* $tmp110 = Iter$77$1789->$class->itable;
                                while ($tmp110->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp110 = $tmp110->next;
                                }
                                $fn112 $tmp111 = $tmp110->methods[1];
                                panda$core$Object* $tmp113 = $tmp111(Iter$77$1789);
                                $tmp109 = $tmp113;
                                $tmp108 = ((org$pandalanguage$pandac$Type*) $tmp109);
                                s107 = $tmp108;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp108));
                                panda$core$Panda$unref$panda$core$Object($tmp109);
                                panda$core$String* $tmp116 = (($fn115) self->$class->vtable[5])(self, s107);
                                $tmp114 = $tmp116;
                                panda$collections$Array$add$panda$collections$Array$T(simpleNames82, ((panda$core$Object*) $tmp114));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
                            }
                            $tmp106 = -1;
                            goto $l104;
                            $l104:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s107));
                            s107 = NULL;
                            switch ($tmp106) {
                                case -1: goto $l117;
                            }
                            $l117:;
                        }
                        goto $l96;
                        $l97:;
                    }
                    $tmp88 = -1;
                    goto $l86;
                    $l86:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$77$1789));
                    Iter$77$1789 = NULL;
                    switch ($tmp88) {
                        case -1: goto $l118;
                    }
                    $l118:;
                }
                panda$core$Int64$init$builtin_int64(&$tmp124, 0);
                panda$core$Object* $tmp125 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(simpleNames82, $tmp124);
                $tmp123 = $tmp125;
                panda$core$String* $tmp127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((panda$core$String*) $tmp123), &$s126);
                $tmp122 = $tmp127;
                panda$core$Int64$init$builtin_int64(&$tmp131, 1);
                panda$core$Bit$init$builtin_bit(&$tmp132, false);
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp130, ((panda$core$Int64$nullable) { $tmp131, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp132);
                ITable* $tmp133 = ((panda$collections$ListView*) simpleNames82)->$class->itable;
                while ($tmp133->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp133 = $tmp133->next;
                }
                $fn135 $tmp134 = $tmp133->methods[2];
                panda$collections$ListView* $tmp136 = $tmp134(((panda$collections$ListView*) simpleNames82), $tmp130);
                $tmp129 = $tmp136;
                ITable* $tmp137 = $tmp129->$class->itable;
                while ($tmp137->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp137 = $tmp137->next;
                }
                $fn139 $tmp138 = $tmp137->methods[4];
                panda$core$String* $tmp140 = $tmp138($tmp129);
                $tmp128 = $tmp140;
                panda$core$String* $tmp141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp122, $tmp128);
                $tmp121 = $tmp141;
                panda$core$String* $tmp143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp121, &$s142);
                $tmp120 = $tmp143;
                $tmp119 = $tmp120;
                $returnValue54 = $tmp119;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp120));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
                panda$core$Panda$unref$panda$core$Object($tmp123);
                $tmp81 = 0;
                goto $l79;
                $l144:;
                return $returnValue54;
            }
            $l79:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) simpleNames82));
            simpleNames82 = NULL;
            switch ($tmp81) {
                case 0: goto $l144;
            }
            $l146:;
        }
        }
        else {
        {
            $tmp147 = ((org$pandalanguage$pandac$Symbol*) p_t)->name;
            $returnValue54 = $tmp147;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
            return $returnValue54;
        }
        }
        }
        }
    }
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$escape$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_s) {
    panda$core$String* $returnValue149;
    panda$core$String* $tmp150;
    panda$core$String* $tmp151;
    panda$core$String* $tmp152;
    panda$core$String* $tmp153;
    panda$core$String* $tmp156 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_s, &$s154, &$s155);
    $tmp153 = $tmp156;
    panda$core$String* $tmp159 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp153, &$s157, &$s158);
    $tmp152 = $tmp159;
    panda$core$String* $tmp162 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp152, &$s160, &$s161);
    $tmp151 = $tmp162;
    $tmp150 = $tmp151;
    $returnValue149 = $tmp150;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
    return $returnValue149;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp167;
    panda$core$String* $tmp172;
    panda$core$String* $tmp173;
    (($fn165) self->out->$class->vtable[2])(self->out, &$s164);
    panda$core$String* $tmp169 = (($fn168) self->$class->vtable[6])(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    $tmp167 = $tmp169;
    (($fn170) self->out->$class->vtable[4])(self->out, &$s166, $tmp167);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp167));
    panda$core$String* $tmp175 = (($fn174) self->$class->vtable[5])(self, p_t);
    $tmp173 = $tmp175;
    panda$core$String* $tmp177 = (($fn176) self->$class->vtable[6])(self, $tmp173);
    $tmp172 = $tmp177;
    (($fn178) self->out->$class->vtable[4])(self->out, &$s171, $tmp172);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
    (($fn180) self->out->$class->vtable[3])(self->out, &$s179);
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Annotations* p_a) {
    (($fn182) self->out->$class->vtable[2])(self->out, &$s181);
    panda$core$Bit $tmp183 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(p_a);
    if ($tmp183.value) {
    {
        (($fn186) self->out->$class->vtable[4])(self->out, &$s184, &$s185);
    }
    }
    panda$core$Bit $tmp187 = org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(p_a);
    if ($tmp187.value) {
    {
        (($fn190) self->out->$class->vtable[4])(self->out, &$s188, &$s189);
    }
    }
    panda$core$Bit $tmp191 = org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(p_a);
    if ($tmp191.value) {
    {
        (($fn194) self->out->$class->vtable[4])(self->out, &$s192, &$s193);
    }
    }
    panda$core$Bit $tmp195 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_a);
    if ($tmp195.value) {
    {
        (($fn198) self->out->$class->vtable[4])(self->out, &$s196, &$s197);
    }
    }
    panda$core$Bit $tmp199 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_a);
    if ($tmp199.value) {
    {
        (($fn202) self->out->$class->vtable[4])(self->out, &$s200, &$s201);
    }
    }
    (($fn204) self->out->$class->vtable[3])(self->out, &$s203);
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_rawDoccomment) {
    panda$collections$Array* lines208 = NULL;
    panda$collections$Array* $tmp209;
    panda$collections$Array* $tmp210;
    panda$core$Object* $tmp213;
    panda$core$Int64 $tmp214;
    panda$core$Object* $tmp218;
    panda$core$Int64 $tmp219;
    panda$core$Int64 spaces221;
    panda$core$Int64 $tmp222;
    panda$collections$Iterator* Iter$136$13226 = NULL;
    panda$collections$Iterator* $tmp227;
    panda$collections$Iterator* $tmp228;
    panda$core$String* line244 = NULL;
    panda$core$String* $tmp245;
    panda$core$Object* $tmp246;
    panda$core$String* $tmp251;
    panda$core$Object* $tmp255;
    panda$collections$ListView* $tmp256;
    panda$core$RegularExpression* $tmp257;
    panda$core$Int64 $tmp261;
    panda$core$Range$LTpanda$core$Int64$GT $tmp270;
    panda$core$Int64 $tmp271;
    panda$core$Bit $tmp273;
    panda$core$String* $tmp287;
    panda$core$Object* $tmp288;
    panda$core$String* $tmp293;
    panda$core$Object* $tmp294;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp296;
    panda$core$Bit $tmp297;
    panda$core$String* doccomment305 = NULL;
    panda$core$String* $tmp306;
    panda$core$String* $tmp307;
    panda$core$String* summary313 = NULL;
    panda$core$String$Index$nullable index314;
    panda$core$String* $tmp317;
    panda$core$String* $tmp318;
    panda$core$String* $tmp319;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp320;
    panda$core$Bit $tmp321;
    panda$core$String* $tmp323;
    panda$core$String* $tmp324;
    org$pandalanguage$pandac$pandadoc$Markdown* md325 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp326;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp327;
    panda$core$Int64 oldLevel331;
    panda$core$Int64 $tmp332;
    panda$core$String* processedSummary333 = NULL;
    panda$core$String* $tmp334;
    panda$core$String* $tmp335;
    panda$core$String* $tmp340;
    panda$core$String* $tmp341;
    panda$core$Object* $tmp342;
    panda$collections$ListView* $tmp343;
    panda$core$RegularExpression* $tmp344;
    panda$core$Int64 $tmp348;
    panda$core$String* $tmp356;
    if (((panda$core$Bit) { p_rawDoccomment != NULL }).value) {
    {
        int $tmp207;
        {
            panda$collections$Array* $tmp212 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(p_rawDoccomment, &$s211);
            $tmp210 = $tmp212;
            $tmp209 = $tmp210;
            lines208 = $tmp209;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp209));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
            panda$core$Int64$init$builtin_int64(&$tmp214, 0);
            panda$core$Object* $tmp215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(lines208, $tmp214);
            $tmp213 = $tmp215;
            panda$core$Bit $tmp217 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((panda$core$String*) $tmp213), &$s216);
            panda$core$Panda$unref$panda$core$Object($tmp213);
            if ($tmp217.value) {
            {
                panda$core$Int64$init$builtin_int64(&$tmp219, 0);
                panda$core$Object* $tmp220 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(lines208, $tmp219);
                $tmp218 = $tmp220;
                panda$core$Panda$unref$panda$core$Object($tmp218);
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp222, 9223372036854775807);
            spaces221 = $tmp222;
            {
                int $tmp225;
                {
                    ITable* $tmp229 = ((panda$collections$Iterable*) lines208)->$class->itable;
                    while ($tmp229->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp229 = $tmp229->next;
                    }
                    $fn231 $tmp230 = $tmp229->methods[0];
                    panda$collections$Iterator* $tmp232 = $tmp230(((panda$collections$Iterable*) lines208));
                    $tmp228 = $tmp232;
                    $tmp227 = $tmp228;
                    Iter$136$13226 = $tmp227;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp227));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
                    $l233:;
                    ITable* $tmp236 = Iter$136$13226->$class->itable;
                    while ($tmp236->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp236 = $tmp236->next;
                    }
                    $fn238 $tmp237 = $tmp236->methods[0];
                    panda$core$Bit $tmp239 = $tmp237(Iter$136$13226);
                    panda$core$Bit $tmp240 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp239);
                    bool $tmp235 = $tmp240.value;
                    if (!$tmp235) goto $l234;
                    {
                        int $tmp243;
                        {
                            ITable* $tmp247 = Iter$136$13226->$class->itable;
                            while ($tmp247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp247 = $tmp247->next;
                            }
                            $fn249 $tmp248 = $tmp247->methods[1];
                            panda$core$Object* $tmp250 = $tmp248(Iter$136$13226);
                            $tmp246 = $tmp250;
                            $tmp245 = ((panda$core$String*) $tmp246);
                            line244 = $tmp245;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp245));
                            panda$core$Panda$unref$panda$core$Object($tmp246);
                            panda$core$String* $tmp252 = panda$core$String$trim$R$panda$core$String(line244);
                            $tmp251 = $tmp252;
                            panda$core$Bit $tmp254 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp251, &$s253);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
                            if ($tmp254.value) {
                            {
                                panda$core$RegularExpression* $tmp258 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                                panda$core$RegularExpression$init$panda$core$String($tmp258, &$s259);
                                $tmp257 = $tmp258;
                                panda$collections$ListView* $tmp260 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(line244, $tmp257);
                                $tmp256 = $tmp260;
                                panda$core$Int64$init$builtin_int64(&$tmp261, 0);
                                ITable* $tmp262 = $tmp256->$class->itable;
                                while ($tmp262->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                    $tmp262 = $tmp262->next;
                                }
                                $fn264 $tmp263 = $tmp262->methods[0];
                                panda$core$Object* $tmp265 = $tmp263($tmp256, $tmp261);
                                $tmp255 = $tmp265;
                                panda$core$Int64 $tmp266 = panda$core$String$byteLength$R$panda$core$Int64(((panda$core$String*) $tmp255));
                                panda$core$Int64 $tmp267 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(spaces221, $tmp266);
                                spaces221 = $tmp267;
                                panda$core$Panda$unref$panda$core$Object($tmp255);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp256));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp257));
                            }
                            }
                        }
                        $tmp243 = -1;
                        goto $l241;
                        $l241:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) line244));
                        line244 = NULL;
                        switch ($tmp243) {
                            case -1: goto $l268;
                        }
                        $l268:;
                    }
                    goto $l233;
                    $l234:;
                }
                $tmp225 = -1;
                goto $l223;
                $l223:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$136$13226));
                Iter$136$13226 = NULL;
                switch ($tmp225) {
                    case -1: goto $l269;
                }
                $l269:;
            }
            panda$core$Int64$init$builtin_int64(&$tmp271, 0);
            panda$core$Int64 $tmp272 = panda$collections$Array$get_count$R$panda$core$Int64(lines208);
            panda$core$Bit$init$builtin_bit(&$tmp273, false);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp270, $tmp271, $tmp272, $tmp273);
            int64_t $tmp275 = $tmp270.min.value;
            panda$core$Int64 i274 = { $tmp275 };
            int64_t $tmp277 = $tmp270.max.value;
            bool $tmp278 = $tmp270.inclusive.value;
            if ($tmp278) goto $l285; else goto $l286;
            $l285:;
            if ($tmp275 <= $tmp277) goto $l279; else goto $l281;
            $l286:;
            if ($tmp275 < $tmp277) goto $l279; else goto $l281;
            $l279:;
            {
                panda$core$Object* $tmp289 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(lines208, i274);
                $tmp288 = $tmp289;
                panda$core$String* $tmp290 = panda$core$String$trim$R$panda$core$String(((panda$core$String*) $tmp288));
                $tmp287 = $tmp290;
                panda$core$Bit $tmp292 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp287, &$s291);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp287));
                panda$core$Panda$unref$panda$core$Object($tmp288);
                if ($tmp292.value) {
                {
                    panda$core$Object* $tmp295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(lines208, i274);
                    $tmp294 = $tmp295;
                    panda$core$Bit$init$builtin_bit(&$tmp297, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp296, ((panda$core$Int64$nullable) { spaces221, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp297);
                    panda$core$String* $tmp298 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((panda$core$String*) $tmp294), $tmp296);
                    $tmp293 = $tmp298;
                    panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(lines208, i274, ((panda$core$Object*) $tmp293));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
                    panda$core$Panda$unref$panda$core$Object($tmp294);
                }
                }
            }
            $l282:;
            int64_t $tmp300 = $tmp277 - i274.value;
            if ($tmp278) goto $l301; else goto $l302;
            $l301:;
            if ((uint64_t) $tmp300 >= 1) goto $l299; else goto $l281;
            $l302:;
            if ((uint64_t) $tmp300 > 1) goto $l299; else goto $l281;
            $l299:;
            i274.value += 1;
            goto $l279;
            $l281:;
            ITable* $tmp309 = ((panda$collections$ListView*) lines208)->$class->itable;
            while ($tmp309->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp309 = $tmp309->next;
            }
            $fn311 $tmp310 = $tmp309->methods[5];
            panda$core$String* $tmp312 = $tmp310(((panda$collections$ListView*) lines208), &$s308);
            $tmp307 = $tmp312;
            $tmp306 = $tmp307;
            doccomment305 = $tmp306;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
            memset(&summary313, 0, sizeof(summary313));
            panda$core$String$Index$nullable $tmp316 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(doccomment305, &$s315);
            index314 = $tmp316;
            if (((panda$core$Bit) { index314.nonnull }).value) {
            {
                {
                    $tmp317 = summary313;
                    panda$core$Bit$init$builtin_bit(&$tmp321, true);
                    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp320, ((panda$core$String$Index$nullable) { .nonnull = false }), index314, $tmp321);
                    panda$core$String* $tmp322 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(doccomment305, $tmp320);
                    $tmp319 = $tmp322;
                    $tmp318 = $tmp319;
                    summary313 = $tmp318;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp318));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
                }
            }
            }
            else {
            {
                {
                    $tmp323 = summary313;
                    $tmp324 = doccomment305;
                    summary313 = $tmp324;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp324));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
                }
            }
            }
            org$pandalanguage$pandac$pandadoc$Markdown* $tmp328 = (org$pandalanguage$pandac$pandadoc$Markdown*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$class);
            org$pandalanguage$pandac$pandadoc$Markdown$init($tmp328);
            $tmp327 = $tmp328;
            $tmp326 = $tmp327;
            md325 = $tmp326;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp326));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
            (($fn330) self->out->$class->vtable[2])(self->out, &$s329);
            oldLevel331 = self->out->out->level;
            panda$core$Int64$init$builtin_int64(&$tmp332, 0);
            self->out->out->level = $tmp332;
            panda$core$String* $tmp337 = (($fn336) md325->$class->vtable[2])(md325, summary313);
            $tmp335 = $tmp337;
            $tmp334 = $tmp335;
            processedSummary333 = $tmp334;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp334));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
            panda$core$Bit $tmp339 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(processedSummary333, &$s338);
            if ($tmp339.value) {
            {
                {
                    $tmp340 = processedSummary333;
                    panda$core$RegularExpression* $tmp345 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                    panda$core$RegularExpression$init$panda$core$String($tmp345, &$s346);
                    $tmp344 = $tmp345;
                    panda$collections$ListView* $tmp347 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(processedSummary333, $tmp344);
                    $tmp343 = $tmp347;
                    panda$core$Int64$init$builtin_int64(&$tmp348, 0);
                    ITable* $tmp349 = $tmp343->$class->itable;
                    while ($tmp349->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp349 = $tmp349->next;
                    }
                    $fn351 $tmp350 = $tmp349->methods[0];
                    panda$core$Object* $tmp352 = $tmp350($tmp343, $tmp348);
                    $tmp342 = $tmp352;
                    $tmp341 = ((panda$core$String*) $tmp342);
                    processedSummary333 = $tmp341;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp341));
                    panda$core$Panda$unref$panda$core$Object($tmp342);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
                }
            }
            }
            (($fn354) self->out->$class->vtable[4])(self->out, &$s353, processedSummary333);
            panda$core$String* $tmp358 = (($fn357) md325->$class->vtable[2])(md325, doccomment305);
            $tmp356 = $tmp358;
            (($fn359) self->out->$class->vtable[4])(self->out, &$s355, $tmp356);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
            self->out->out->level = oldLevel331;
            (($fn361) self->out->$class->vtable[3])(self->out, &$s360);
        }
        $tmp207 = -1;
        goto $l205;
        $l205:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) processedSummary333));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) md325));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) summary313));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) doccomment305));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lines208));
        lines208 = NULL;
        doccomment305 = NULL;
        md325 = NULL;
        processedSummary333 = NULL;
        switch ($tmp207) {
            case -1: goto $l362;
        }
        $l362:;
    }
    }
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $returnValue363;
    panda$core$Bit $tmp364 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(p_f->annotations);
    panda$core$Bit $tmp365 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp364);
    $returnValue363 = $tmp365;
    return $returnValue363;
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $returnValue367;
    panda$core$Bit $tmp369 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp370 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp369);
    bool $tmp368 = $tmp370.value;
    if (!$tmp368) goto $l371;
    panda$core$Bit $tmp372 = org$pandalanguage$pandac$Annotations$isSynthetic$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp373 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp372);
    $tmp368 = $tmp373.value;
    $l371:;
    panda$core$Bit $tmp374 = { $tmp368 };
    $returnValue367 = $tmp374;
    return $returnValue367;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$String* kind387 = NULL;
    org$pandalanguage$pandac$FieldDecl$Kind $match$187_9388;
    panda$core$Int64 $tmp389;
    panda$core$String* $tmp391;
    panda$core$String* $tmp392;
    panda$core$Int64 $tmp394;
    panda$core$String* $tmp396;
    panda$core$String* $tmp397;
    panda$core$Int64 $tmp399;
    panda$core$String* $tmp401;
    panda$core$String* $tmp402;
    panda$core$Int64 $tmp404;
    panda$core$String* $tmp406;
    panda$core$String* $tmp407;
    int $tmp378;
    {
        panda$core$Bit $tmp380 = (($fn379) self->$class->vtable[10])(self, p_f);
        panda$core$Bit $tmp381 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp380);
        if ($tmp381.value) {
        {
            $tmp378 = 0;
            goto $l376;
            $l382:;
            return;
        }
        }
        (($fn384) self->out->$class->vtable[2])(self->out, &$s383);
        (($fn386) self->out->$class->vtable[4])(self->out, &$s385, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
        memset(&kind387, 0, sizeof(kind387));
        {
            $match$187_9388 = p_f->fieldKind;
            panda$core$Int64$init$builtin_int64(&$tmp389, 0);
            panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$187_9388.$rawValue, $tmp389);
            if ($tmp390.value) {
            {
                {
                    $tmp391 = kind387;
                    $tmp392 = &$s393;
                    kind387 = $tmp392;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp392));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp394, 1);
            panda$core$Bit $tmp395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$187_9388.$rawValue, $tmp394);
            if ($tmp395.value) {
            {
                {
                    $tmp396 = kind387;
                    $tmp397 = &$s398;
                    kind387 = $tmp397;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp397));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp399, 2);
            panda$core$Bit $tmp400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$187_9388.$rawValue, $tmp399);
            if ($tmp400.value) {
            {
                {
                    $tmp401 = kind387;
                    $tmp402 = &$s403;
                    kind387 = $tmp402;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp404, 3);
            panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$187_9388.$rawValue, $tmp404);
            if ($tmp405.value) {
            {
                {
                    $tmp406 = kind387;
                    $tmp407 = &$s408;
                    kind387 = $tmp407;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp407));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp406));
                }
            }
            }
            }
            }
            }
        }
        (($fn410) self->out->$class->vtable[4])(self->out, &$s409, kind387);
        (($fn411) self->$class->vtable[8])(self, p_f->annotations);
        (($fn412) self->$class->vtable[7])(self, p_f->type);
        (($fn413) self->$class->vtable[9])(self, p_f->doccomment);
        (($fn415) self->out->$class->vtable[3])(self->out, &$s414);
    }
    $tmp378 = -1;
    goto $l376;
    $l376:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) kind387));
    switch ($tmp378) {
        case -1: goto $l416;
        case 0: goto $l382;
    }
    $l416:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$getDocComment$org$pandalanguage$pandac$MethodDecl$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* $tmp419;
    panda$core$String* $tmp427;
    panda$core$String* $tmp428;
    panda$core$String* $tmp430;
    org$pandalanguage$pandac$MethodDecl* overridden435 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp436;
    org$pandalanguage$pandac$MethodDecl* $tmp437;
    panda$core$Object* $tmp438;
    panda$core$Object* $tmp441;
    panda$core$String* $returnValue444;
    panda$core$String* $tmp445;
    panda$core$String* result448 = NULL;
    panda$core$String* $tmp449;
    panda$core$String* $tmp450;
    panda$core$Object* $tmp453;
    panda$core$String* $tmp455;
    panda$core$String* $tmp457;
    panda$core$String* $tmp458;
    panda$core$String* $tmp459;
    panda$core$String* $tmp465;
    panda$core$String* $tmp468;
    panda$core$String* $tmp472;
    bool $tmp417 = ((panda$core$Bit) { p_m->doccomment != NULL }).value;
    if (!$tmp417) goto $l418;
    panda$core$String* $tmp420 = panda$core$String$trim$R$panda$core$String(p_m->doccomment);
    $tmp419 = $tmp420;
    panda$core$Bit $tmp422 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp419, &$s421);
    $tmp417 = $tmp422.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
    $l418:;
    panda$core$Bit $tmp423 = { $tmp417 };
    if ($tmp423.value) {
    {
        int $tmp426;
        {
            panda$core$String* $tmp431 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(p_m);
            $tmp430 = $tmp431;
            panda$core$String* $tmp432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s429, $tmp430);
            $tmp428 = $tmp432;
            panda$core$String* $tmp434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp428, &$s433);
            $tmp427 = $tmp434;
            panda$io$Console$printLine$panda$core$String($tmp427);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
            panda$core$Object* $tmp439 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
            $tmp438 = $tmp439;
            org$pandalanguage$pandac$MethodDecl* $tmp440 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp438), p_m);
            $tmp437 = $tmp440;
            $tmp436 = $tmp437;
            overridden435 = $tmp436;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp436));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp437));
            panda$core$Panda$unref$panda$core$Object($tmp438);
            if (((panda$core$Bit) { overridden435 == NULL }).value) {
            {
                panda$core$Object* $tmp442 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp441 = $tmp442;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp441), ((org$pandalanguage$pandac$Symbol*) p_m)->position, &$s443);
                panda$core$Panda$unref$panda$core$Object($tmp441);
                $tmp445 = NULL;
                $returnValue444 = $tmp445;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp445));
                $tmp426 = 0;
                goto $l424;
                $l446:;
                return $returnValue444;
            }
            }
            panda$core$String* $tmp452 = (($fn451) self->$class->vtable[13])(self, overridden435);
            $tmp450 = $tmp452;
            $tmp449 = $tmp450;
            result448 = $tmp449;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp449));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp450));
            if (((panda$core$Bit) { result448 == NULL }).value) {
            {
                panda$core$Object* $tmp454 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp453 = $tmp454;
                panda$core$String* $tmp460 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden435);
                $tmp459 = $tmp460;
                panda$core$String* $tmp461 = panda$core$String$convert$R$panda$core$String($tmp459);
                $tmp458 = $tmp461;
                panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp458, &$s462);
                $tmp457 = $tmp463;
                panda$core$String* $tmp464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s456, $tmp457);
                $tmp455 = $tmp464;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp453), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp455);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp455));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp457));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
                panda$core$Panda$unref$panda$core$Object($tmp453);
                $tmp465 = NULL;
                $returnValue444 = $tmp465;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp465));
                $tmp426 = 1;
                goto $l424;
                $l466:;
                return $returnValue444;
            }
            }
            $tmp468 = result448;
            $returnValue444 = $tmp468;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
            $tmp426 = 2;
            goto $l424;
            $l469:;
            return $returnValue444;
        }
        $l424:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result448));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) overridden435));
        overridden435 = NULL;
        result448 = NULL;
        switch ($tmp426) {
            case 0: goto $l446;
            case 2: goto $l469;
            case 1: goto $l466;
        }
        $l471:;
    }
    }
    $tmp472 = p_m->doccomment;
    $returnValue444 = $tmp472;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp472));
    return $returnValue444;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* tag481 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind $match$229_9482;
    panda$core$Int64 $tmp483;
    panda$core$String* $tmp485;
    panda$core$String* $tmp486;
    panda$core$Int64 $tmp488;
    panda$core$String* $tmp490;
    panda$core$String* $tmp491;
    panda$core$Int64 $tmp493;
    panda$core$String* $tmp495;
    panda$core$String* $tmp496;
    panda$core$String* $tmp500;
    panda$core$String* $tmp504;
    panda$collections$Iterator* Iter$242$9514 = NULL;
    panda$collections$Iterator* $tmp515;
    panda$collections$Iterator* $tmp516;
    org$pandalanguage$pandac$MethodDecl$Parameter* p532 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp533;
    panda$core$Object* $tmp534;
    org$pandalanguage$pandac$Type* $tmp550;
    int $tmp476;
    {
        panda$core$Bit $tmp478 = (($fn477) self->$class->vtable[11])(self, p_m);
        panda$core$Bit $tmp479 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp478);
        if ($tmp479.value) {
        {
            $tmp476 = 0;
            goto $l474;
            $l480:;
            return;
        }
        }
        memset(&tag481, 0, sizeof(tag481));
        {
            $match$229_9482 = p_m->methodKind;
            panda$core$Int64$init$builtin_int64(&$tmp483, 0);
            panda$core$Bit $tmp484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$229_9482.$rawValue, $tmp483);
            if ($tmp484.value) {
            {
                {
                    $tmp485 = tag481;
                    $tmp486 = &$s487;
                    tag481 = $tmp486;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp486));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp488, 1);
            panda$core$Bit $tmp489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$229_9482.$rawValue, $tmp488);
            if ($tmp489.value) {
            {
                {
                    $tmp490 = tag481;
                    $tmp491 = &$s492;
                    tag481 = $tmp491;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp491));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp493, 2);
            panda$core$Bit $tmp494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$229_9482.$rawValue, $tmp493);
            if ($tmp494.value) {
            {
                {
                    $tmp495 = tag481;
                    $tmp496 = &$s497;
                    tag481 = $tmp496;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp496));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
                }
            }
            }
            }
            }
        }
        (($fn498) self->out->$class->vtable[2])(self->out, tag481);
        panda$core$String* $tmp502 = (($fn501) self->$class->vtable[6])(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
        $tmp500 = $tmp502;
        (($fn503) self->out->$class->vtable[4])(self->out, &$s499, $tmp500);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
        panda$core$String* $tmp506 = (($fn505) self->$class->vtable[13])(self, p_m);
        $tmp504 = $tmp506;
        (($fn507) self->$class->vtable[9])(self, $tmp504);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp504));
        (($fn508) self->$class->vtable[8])(self, p_m->annotations);
        (($fn510) self->out->$class->vtable[2])(self->out, &$s509);
        {
            int $tmp513;
            {
                ITable* $tmp517 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp517->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp517 = $tmp517->next;
                }
                $fn519 $tmp518 = $tmp517->methods[0];
                panda$collections$Iterator* $tmp520 = $tmp518(((panda$collections$Iterable*) p_m->parameters));
                $tmp516 = $tmp520;
                $tmp515 = $tmp516;
                Iter$242$9514 = $tmp515;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp515));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp516));
                $l521:;
                ITable* $tmp524 = Iter$242$9514->$class->itable;
                while ($tmp524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp524 = $tmp524->next;
                }
                $fn526 $tmp525 = $tmp524->methods[0];
                panda$core$Bit $tmp527 = $tmp525(Iter$242$9514);
                panda$core$Bit $tmp528 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp527);
                bool $tmp523 = $tmp528.value;
                if (!$tmp523) goto $l522;
                {
                    int $tmp531;
                    {
                        ITable* $tmp535 = Iter$242$9514->$class->itable;
                        while ($tmp535->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp535 = $tmp535->next;
                        }
                        $fn537 $tmp536 = $tmp535->methods[1];
                        panda$core$Object* $tmp538 = $tmp536(Iter$242$9514);
                        $tmp534 = $tmp538;
                        $tmp533 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp534);
                        p532 = $tmp533;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp533));
                        panda$core$Panda$unref$panda$core$Object($tmp534);
                        (($fn540) self->out->$class->vtable[2])(self->out, &$s539);
                        (($fn542) self->out->$class->vtable[4])(self->out, &$s541, p532->name);
                        (($fn543) self->$class->vtable[7])(self, p532->type);
                        (($fn545) self->out->$class->vtable[3])(self->out, &$s544);
                    }
                    $tmp531 = -1;
                    goto $l529;
                    $l529:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p532));
                    p532 = NULL;
                    switch ($tmp531) {
                        case -1: goto $l546;
                    }
                    $l546:;
                }
                goto $l521;
                $l522:;
            }
            $tmp513 = -1;
            goto $l511;
            $l511:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$242$9514));
            Iter$242$9514 = NULL;
            switch ($tmp513) {
                case -1: goto $l547;
            }
            $l547:;
        }
        (($fn549) self->out->$class->vtable[3])(self->out, &$s548);
        org$pandalanguage$pandac$Type* $tmp551 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp550 = $tmp551;
        panda$core$Bit $tmp552 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp550);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
        if ($tmp552.value) {
        {
            (($fn554) self->out->$class->vtable[2])(self->out, &$s553);
            (($fn555) self->$class->vtable[7])(self, p_m->returnType);
            (($fn557) self->out->$class->vtable[3])(self->out, &$s556);
        }
        }
        (($fn558) self->out->$class->vtable[3])(self->out, tag481);
    }
    $tmp476 = -1;
    goto $l474;
    $l474:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag481));
    switch ($tmp476) {
        case -1: goto $l559;
        case 0: goto $l480;
    }
    $l559:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeAncestors$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Type* ancestor565 = NULL;
    org$pandalanguage$pandac$Type* $tmp566;
    org$pandalanguage$pandac$ClassDecl* ancestorClass574 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp575;
    org$pandalanguage$pandac$ClassDecl* $tmp576;
    panda$core$Object* $tmp577;
    org$pandalanguage$pandac$Type* $tmp582;
    org$pandalanguage$pandac$Type* $tmp583;
    int $tmp562;
    {
        (($fn564) self->out->$class->vtable[2])(self->out, &$s563);
        $tmp566 = p_cl->rawSuper;
        ancestor565 = $tmp566;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp566));
        $l567:;
        bool $tmp569 = ((panda$core$Bit) { ancestor565 != NULL }).value;
        if (!$tmp569) goto $l568;
        {
            int $tmp572;
            {
                (($fn573) self->$class->vtable[7])(self, ancestor565);
                panda$core$Object* $tmp578 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp577 = $tmp578;
                org$pandalanguage$pandac$ClassDecl* $tmp579 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp577), ancestor565);
                $tmp576 = $tmp579;
                $tmp575 = $tmp576;
                ancestorClass574 = $tmp575;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp575));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
                panda$core$Panda$unref$panda$core$Object($tmp577);
                if (((panda$core$Bit) { ancestorClass574 == NULL }).value) {
                {
                    $tmp572 = 0;
                    goto $l570;
                    $l580:;
                    $tmp562 = 0;
                    goto $l560;
                    $l581:;
                    return;
                }
                }
                {
                    $tmp582 = ancestor565;
                    $tmp583 = ancestorClass574->rawSuper;
                    ancestor565 = $tmp583;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp583));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
                }
            }
            $tmp572 = -1;
            goto $l570;
            $l570:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestorClass574));
            ancestorClass574 = NULL;
            switch ($tmp572) {
                case 0: goto $l580;
                case -1: goto $l584;
            }
            $l584:;
        }
        goto $l567;
        $l568:;
        (($fn586) self->out->$class->vtable[3])(self->out, &$s585);
    }
    $tmp562 = -1;
    goto $l560;
    $l560:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestor565));
    ancestor565 = NULL;
    switch ($tmp562) {
        case -1: goto $l587;
        case 0: goto $l581;
    }
    $l587:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $returnValue588;
    panda$core$String* $tmp589;
    $tmp589 = &$s590;
    $returnValue588 = $tmp589;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp589));
    return $returnValue588;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedFields$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* fields595 = NULL;
    panda$collections$Array* $tmp596;
    panda$collections$Array* $tmp597;
    org$pandalanguage$pandac$Type* ancestor599 = NULL;
    org$pandalanguage$pandac$Type* $tmp600;
    org$pandalanguage$pandac$ClassDecl* ancestorClass607 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp608;
    org$pandalanguage$pandac$ClassDecl* $tmp609;
    panda$core$Object* $tmp610;
    panda$collections$Iterator* Iter$283$13618 = NULL;
    panda$collections$Iterator* $tmp619;
    panda$collections$Iterator* $tmp620;
    org$pandalanguage$pandac$FieldDecl* f636 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp637;
    panda$core$Object* $tmp638;
    panda$core$Object* $tmp645;
    org$pandalanguage$pandac$Type* $tmp649;
    org$pandalanguage$pandac$Type* $tmp650;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp652;
    panda$core$Bit $tmp653;
    panda$collections$ListView* $tmp654;
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT $tmp655;
    panda$core$Int64 $tmp656;
    panda$core$Bit $tmp657;
    panda$core$Int64 $tmp663;
    panda$collections$Iterator* Iter$295$13670 = NULL;
    panda$collections$Iterator* $tmp671;
    panda$collections$Iterator* $tmp672;
    org$pandalanguage$pandac$FieldDecl* f688 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp689;
    panda$core$Object* $tmp690;
    panda$core$String* $tmp700;
    panda$core$String* $tmp701;
    panda$core$String* $tmp702;
    panda$core$String* $tmp703;
    panda$core$String* $tmp704;
    panda$core$Object* $tmp705;
    int $tmp594;
    {
        panda$collections$Array* $tmp598 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp598);
        $tmp597 = $tmp598;
        $tmp596 = $tmp597;
        fields595 = $tmp596;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp596));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp597));
        $tmp600 = p_cl->rawSuper;
        ancestor599 = $tmp600;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp600));
        $l601:;
        bool $tmp603 = ((panda$core$Bit) { ancestor599 != NULL }).value;
        if (!$tmp603) goto $l602;
        {
            int $tmp606;
            {
                panda$core$Object* $tmp611 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp610 = $tmp611;
                org$pandalanguage$pandac$ClassDecl* $tmp612 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp610), ancestor599);
                $tmp609 = $tmp612;
                $tmp608 = $tmp609;
                ancestorClass607 = $tmp608;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp608));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
                panda$core$Panda$unref$panda$core$Object($tmp610);
                if (((panda$core$Bit) { ancestorClass607 == NULL }).value) {
                {
                    $tmp606 = 0;
                    goto $l604;
                    $l613:;
                    $tmp594 = 0;
                    goto $l592;
                    $l614:;
                    return;
                }
                }
                {
                    int $tmp617;
                    {
                        ITable* $tmp621 = ((panda$collections$Iterable*) ancestorClass607->fields)->$class->itable;
                        while ($tmp621->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp621 = $tmp621->next;
                        }
                        $fn623 $tmp622 = $tmp621->methods[0];
                        panda$collections$Iterator* $tmp624 = $tmp622(((panda$collections$Iterable*) ancestorClass607->fields));
                        $tmp620 = $tmp624;
                        $tmp619 = $tmp620;
                        Iter$283$13618 = $tmp619;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp619));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
                        $l625:;
                        ITable* $tmp628 = Iter$283$13618->$class->itable;
                        while ($tmp628->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp628 = $tmp628->next;
                        }
                        $fn630 $tmp629 = $tmp628->methods[0];
                        panda$core$Bit $tmp631 = $tmp629(Iter$283$13618);
                        panda$core$Bit $tmp632 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp631);
                        bool $tmp627 = $tmp632.value;
                        if (!$tmp627) goto $l626;
                        {
                            int $tmp635;
                            {
                                ITable* $tmp639 = Iter$283$13618->$class->itable;
                                while ($tmp639->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp639 = $tmp639->next;
                                }
                                $fn641 $tmp640 = $tmp639->methods[1];
                                panda$core$Object* $tmp642 = $tmp640(Iter$283$13618);
                                $tmp638 = $tmp642;
                                $tmp637 = ((org$pandalanguage$pandac$FieldDecl*) $tmp638);
                                f636 = $tmp637;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp637));
                                panda$core$Panda$unref$panda$core$Object($tmp638);
                                panda$core$Bit $tmp644 = (($fn643) self->$class->vtable[10])(self, f636);
                                if ($tmp644.value) {
                                {
                                    panda$core$Object* $tmp646 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                    $tmp645 = $tmp646;
                                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp645), f636);
                                    panda$core$Panda$unref$panda$core$Object($tmp645);
                                    panda$collections$Array$add$panda$collections$Array$T(fields595, ((panda$core$Object*) f636));
                                }
                                }
                            }
                            $tmp635 = -1;
                            goto $l633;
                            $l633:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f636));
                            f636 = NULL;
                            switch ($tmp635) {
                                case -1: goto $l647;
                            }
                            $l647:;
                        }
                        goto $l625;
                        $l626:;
                    }
                    $tmp617 = -1;
                    goto $l615;
                    $l615:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$283$13618));
                    Iter$283$13618 = NULL;
                    switch ($tmp617) {
                        case -1: goto $l648;
                    }
                    $l648:;
                }
                {
                    $tmp649 = ancestor599;
                    $tmp650 = ancestorClass607->rawSuper;
                    ancestor599 = $tmp650;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp650));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp649));
                }
            }
            $tmp606 = -1;
            goto $l604;
            $l604:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestorClass607));
            ancestorClass607 = NULL;
            switch ($tmp606) {
                case 0: goto $l613;
                case -1: goto $l651;
            }
            $l651:;
        }
        goto $l601;
        $l602:;
        panda$core$Bit$init$builtin_bit(&$tmp653, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp652, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp653);
        panda$core$Int64$init$builtin_int64(&$tmp656, -1);
        panda$core$Bit$init$builtin_bit(&$tmp657, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$panda$core$Bit(&$tmp655, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp656, $tmp657);
        ITable* $tmp658 = ((panda$collections$ListView*) fields595)->$class->itable;
        while ($tmp658->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp658 = $tmp658->next;
        }
        $fn660 $tmp659 = $tmp658->methods[3];
        panda$collections$ListView* $tmp661 = $tmp659(((panda$collections$ListView*) fields595), $tmp655);
        $tmp654 = $tmp661;
        panda$collections$Array$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$Array$T$GT(fields595, $tmp652, $tmp654);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp654));
        panda$core$Int64 $tmp662 = panda$collections$Array$get_count$R$panda$core$Int64(fields595);
        panda$core$Int64$init$builtin_int64(&$tmp663, 0);
        panda$core$Bit $tmp664 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp662, $tmp663);
        if ($tmp664.value) {
        {
            (($fn666) self->out->$class->vtable[2])(self->out, &$s665);
            {
                int $tmp669;
                {
                    ITable* $tmp673 = ((panda$collections$Iterable*) fields595)->$class->itable;
                    while ($tmp673->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp673 = $tmp673->next;
                    }
                    $fn675 $tmp674 = $tmp673->methods[0];
                    panda$collections$Iterator* $tmp676 = $tmp674(((panda$collections$Iterable*) fields595));
                    $tmp672 = $tmp676;
                    $tmp671 = $tmp672;
                    Iter$295$13670 = $tmp671;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp671));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
                    $l677:;
                    ITable* $tmp680 = Iter$295$13670->$class->itable;
                    while ($tmp680->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp680 = $tmp680->next;
                    }
                    $fn682 $tmp681 = $tmp680->methods[0];
                    panda$core$Bit $tmp683 = $tmp681(Iter$295$13670);
                    panda$core$Bit $tmp684 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp683);
                    bool $tmp679 = $tmp684.value;
                    if (!$tmp679) goto $l678;
                    {
                        int $tmp687;
                        {
                            ITable* $tmp691 = Iter$295$13670->$class->itable;
                            while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp691 = $tmp691->next;
                            }
                            $fn693 $tmp692 = $tmp691->methods[1];
                            panda$core$Object* $tmp694 = $tmp692(Iter$295$13670);
                            $tmp690 = $tmp694;
                            $tmp689 = ((org$pandalanguage$pandac$FieldDecl*) $tmp690);
                            f688 = $tmp689;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp689));
                            panda$core$Panda$unref$panda$core$Object($tmp690);
                            (($fn696) self->out->$class->vtable[2])(self->out, &$s695);
                            (($fn698) self->out->$class->vtable[4])(self->out, &$s697, ((org$pandalanguage$pandac$Symbol*) f688)->name);
                            panda$core$Object* $tmp706 = panda$core$Weak$get$R$panda$core$Weak$T(f688->owner);
                            $tmp705 = $tmp706;
                            panda$core$String* $tmp708 = (($fn707) self->$class->vtable[16])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp705));
                            $tmp704 = $tmp708;
                            panda$core$String* $tmp709 = panda$core$String$convert$R$panda$core$String($tmp704);
                            $tmp703 = $tmp709;
                            panda$core$String* $tmp711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp703, &$s710);
                            $tmp702 = $tmp711;
                            panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp702, ((org$pandalanguage$pandac$Symbol*) f688)->name);
                            $tmp701 = $tmp712;
                            panda$core$String* $tmp714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp701, &$s713);
                            $tmp700 = $tmp714;
                            (($fn715) self->out->$class->vtable[4])(self->out, &$s699, $tmp700);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp700));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp702));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp703));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp704));
                            panda$core$Panda$unref$panda$core$Object($tmp705);
                            (($fn717) self->out->$class->vtable[3])(self->out, &$s716);
                        }
                        $tmp687 = -1;
                        goto $l685;
                        $l685:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f688));
                        f688 = NULL;
                        switch ($tmp687) {
                            case -1: goto $l718;
                        }
                        $l718:;
                    }
                    goto $l677;
                    $l678:;
                }
                $tmp669 = -1;
                goto $l667;
                $l667:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$295$13670));
                Iter$295$13670 = NULL;
                switch ($tmp669) {
                    case -1: goto $l719;
                }
                $l719:;
            }
            (($fn721) self->out->$class->vtable[3])(self->out, &$s720);
        }
        }
    }
    $tmp594 = -1;
    goto $l592;
    $l592:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestor599));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields595));
    fields595 = NULL;
    ancestor599 = NULL;
    switch ($tmp594) {
        case -1: goto $l722;
        case 0: goto $l614;
    }
    $l722:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedMethods$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* methods726 = NULL;
    panda$collections$Array* $tmp727;
    panda$collections$Array* $tmp728;
    panda$collections$HashSet* overridden730 = NULL;
    panda$collections$HashSet* $tmp731;
    panda$collections$HashSet* $tmp732;
    panda$collections$Iterator* Iter$308$9737 = NULL;
    panda$collections$Iterator* $tmp738;
    panda$collections$Iterator* $tmp739;
    org$pandalanguage$pandac$MethodDecl* m755 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp756;
    panda$core$Object* $tmp757;
    org$pandalanguage$pandac$MethodDecl* o762 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp763;
    org$pandalanguage$pandac$MethodDecl* $tmp764;
    panda$core$Object* $tmp765;
    panda$core$String* $tmp768;
    org$pandalanguage$pandac$Type* ancestor772 = NULL;
    org$pandalanguage$pandac$Type* $tmp773;
    org$pandalanguage$pandac$ClassDecl* ancestorClass780 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp781;
    org$pandalanguage$pandac$ClassDecl* $tmp782;
    panda$core$Object* $tmp783;
    panda$collections$Iterator* Iter$320$13791 = NULL;
    panda$collections$Iterator* $tmp792;
    panda$collections$Iterator* $tmp793;
    org$pandalanguage$pandac$MethodDecl* m809 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp810;
    panda$core$Object* $tmp811;
    panda$core$Int64 $tmp818;
    panda$core$String* $tmp825;
    panda$core$Object* $tmp833;
    org$pandalanguage$pandac$MethodDecl* o835 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp836;
    org$pandalanguage$pandac$MethodDecl* $tmp837;
    panda$core$Object* $tmp838;
    panda$core$String* $tmp841;
    org$pandalanguage$pandac$Type* $tmp846;
    org$pandalanguage$pandac$Type* $tmp847;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp849;
    panda$core$Bit $tmp850;
    panda$collections$ListView* $tmp851;
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT $tmp852;
    panda$core$Int64 $tmp853;
    panda$core$Bit $tmp854;
    panda$core$Int64 $tmp860;
    panda$collections$Iterator* Iter$337$13867 = NULL;
    panda$collections$Iterator* $tmp868;
    panda$collections$Iterator* $tmp869;
    org$pandalanguage$pandac$MethodDecl* m885 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp886;
    panda$core$Object* $tmp887;
    panda$core$String* $tmp897;
    panda$core$String* $tmp898;
    panda$core$String* $tmp899;
    panda$core$String* $tmp900;
    panda$core$String* $tmp901;
    panda$core$Object* $tmp902;
    int $tmp725;
    {
        panda$collections$Array* $tmp729 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp729);
        $tmp728 = $tmp729;
        $tmp727 = $tmp728;
        methods726 = $tmp727;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp727));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
        panda$collections$HashSet* $tmp733 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
        panda$collections$HashSet$init($tmp733);
        $tmp732 = $tmp733;
        $tmp731 = $tmp732;
        overridden730 = $tmp731;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp731));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp732));
        {
            int $tmp736;
            {
                ITable* $tmp740 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
                while ($tmp740->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp740 = $tmp740->next;
                }
                $fn742 $tmp741 = $tmp740->methods[0];
                panda$collections$Iterator* $tmp743 = $tmp741(((panda$collections$Iterable*) p_cl->methods));
                $tmp739 = $tmp743;
                $tmp738 = $tmp739;
                Iter$308$9737 = $tmp738;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp738));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp739));
                $l744:;
                ITable* $tmp747 = Iter$308$9737->$class->itable;
                while ($tmp747->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp747 = $tmp747->next;
                }
                $fn749 $tmp748 = $tmp747->methods[0];
                panda$core$Bit $tmp750 = $tmp748(Iter$308$9737);
                panda$core$Bit $tmp751 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp750);
                bool $tmp746 = $tmp751.value;
                if (!$tmp746) goto $l745;
                {
                    int $tmp754;
                    {
                        ITable* $tmp758 = Iter$308$9737->$class->itable;
                        while ($tmp758->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp758 = $tmp758->next;
                        }
                        $fn760 $tmp759 = $tmp758->methods[1];
                        panda$core$Object* $tmp761 = $tmp759(Iter$308$9737);
                        $tmp757 = $tmp761;
                        $tmp756 = ((org$pandalanguage$pandac$MethodDecl*) $tmp757);
                        m755 = $tmp756;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp756));
                        panda$core$Panda$unref$panda$core$Object($tmp757);
                        panda$core$Object* $tmp766 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp765 = $tmp766;
                        org$pandalanguage$pandac$MethodDecl* $tmp767 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp765), m755);
                        $tmp764 = $tmp767;
                        $tmp763 = $tmp764;
                        o762 = $tmp763;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp763));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp764));
                        panda$core$Panda$unref$panda$core$Object($tmp765);
                        if (((panda$core$Bit) { o762 != NULL }).value) {
                        {
                            panda$core$String* $tmp769 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(o762);
                            $tmp768 = $tmp769;
                            panda$collections$HashSet$add$panda$collections$HashSet$T(overridden730, ((panda$collections$Key*) $tmp768));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp768));
                        }
                        }
                    }
                    $tmp754 = -1;
                    goto $l752;
                    $l752:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) o762));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m755));
                    m755 = NULL;
                    o762 = NULL;
                    switch ($tmp754) {
                        case -1: goto $l770;
                    }
                    $l770:;
                }
                goto $l744;
                $l745:;
            }
            $tmp736 = -1;
            goto $l734;
            $l734:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$308$9737));
            Iter$308$9737 = NULL;
            switch ($tmp736) {
                case -1: goto $l771;
            }
            $l771:;
        }
        $tmp773 = p_cl->rawSuper;
        ancestor772 = $tmp773;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp773));
        $l774:;
        bool $tmp776 = ((panda$core$Bit) { ancestor772 != NULL }).value;
        if (!$tmp776) goto $l775;
        {
            int $tmp779;
            {
                panda$core$Object* $tmp784 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp783 = $tmp784;
                org$pandalanguage$pandac$ClassDecl* $tmp785 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp783), ancestor772);
                $tmp782 = $tmp785;
                $tmp781 = $tmp782;
                ancestorClass780 = $tmp781;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp781));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp782));
                panda$core$Panda$unref$panda$core$Object($tmp783);
                if (((panda$core$Bit) { ancestorClass780 == NULL }).value) {
                {
                    $tmp779 = 0;
                    goto $l777;
                    $l786:;
                    $tmp725 = 0;
                    goto $l723;
                    $l787:;
                    return;
                }
                }
                {
                    int $tmp790;
                    {
                        ITable* $tmp794 = ((panda$collections$Iterable*) ancestorClass780->methods)->$class->itable;
                        while ($tmp794->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp794 = $tmp794->next;
                        }
                        $fn796 $tmp795 = $tmp794->methods[0];
                        panda$collections$Iterator* $tmp797 = $tmp795(((panda$collections$Iterable*) ancestorClass780->methods));
                        $tmp793 = $tmp797;
                        $tmp792 = $tmp793;
                        Iter$320$13791 = $tmp792;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp792));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp793));
                        $l798:;
                        ITable* $tmp801 = Iter$320$13791->$class->itable;
                        while ($tmp801->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp801 = $tmp801->next;
                        }
                        $fn803 $tmp802 = $tmp801->methods[0];
                        panda$core$Bit $tmp804 = $tmp802(Iter$320$13791);
                        panda$core$Bit $tmp805 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp804);
                        bool $tmp800 = $tmp805.value;
                        if (!$tmp800) goto $l799;
                        {
                            int $tmp808;
                            {
                                ITable* $tmp812 = Iter$320$13791->$class->itable;
                                while ($tmp812->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp812 = $tmp812->next;
                                }
                                $fn814 $tmp813 = $tmp812->methods[1];
                                panda$core$Object* $tmp815 = $tmp813(Iter$320$13791);
                                $tmp811 = $tmp815;
                                $tmp810 = ((org$pandalanguage$pandac$MethodDecl*) $tmp811);
                                m809 = $tmp810;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp810));
                                panda$core$Panda$unref$panda$core$Object($tmp811);
                                panda$core$Int64$init$builtin_int64(&$tmp818, 2);
                                panda$core$Bit $tmp819 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(m809->methodKind.$rawValue, $tmp818);
                                bool $tmp817 = $tmp819.value;
                                if (!$tmp817) goto $l820;
                                panda$core$Bit $tmp822 = (($fn821) self->$class->vtable[11])(self, m809);
                                $tmp817 = $tmp822.value;
                                $l820:;
                                panda$core$Bit $tmp823 = { $tmp817 };
                                bool $tmp816 = $tmp823.value;
                                if (!$tmp816) goto $l824;
                                panda$core$String* $tmp826 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(m809);
                                $tmp825 = $tmp826;
                                panda$core$Bit $tmp827 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(overridden730, ((panda$collections$Key*) $tmp825));
                                panda$core$Bit $tmp828 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp827);
                                $tmp816 = $tmp828.value;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp825));
                                $l824:;
                                panda$core$Bit $tmp829 = { $tmp816 };
                                if ($tmp829.value) {
                                {
                                    int $tmp832;
                                    {
                                        panda$core$Object* $tmp834 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                        $tmp833 = $tmp834;
                                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(((org$pandalanguage$pandac$Compiler*) $tmp833), m809);
                                        panda$core$Panda$unref$panda$core$Object($tmp833);
                                        panda$collections$Array$add$panda$collections$Array$T(methods726, ((panda$core$Object*) m809));
                                        panda$core$Object* $tmp839 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                        $tmp838 = $tmp839;
                                        org$pandalanguage$pandac$MethodDecl* $tmp840 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp838), m809);
                                        $tmp837 = $tmp840;
                                        $tmp836 = $tmp837;
                                        o835 = $tmp836;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp836));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp837));
                                        panda$core$Panda$unref$panda$core$Object($tmp838);
                                        if (((panda$core$Bit) { o835 != NULL }).value) {
                                        {
                                            panda$core$String* $tmp842 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(o835);
                                            $tmp841 = $tmp842;
                                            panda$collections$HashSet$add$panda$collections$HashSet$T(overridden730, ((panda$collections$Key*) $tmp841));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp841));
                                        }
                                        }
                                    }
                                    $tmp832 = -1;
                                    goto $l830;
                                    $l830:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) o835));
                                    o835 = NULL;
                                    switch ($tmp832) {
                                        case -1: goto $l843;
                                    }
                                    $l843:;
                                }
                                }
                            }
                            $tmp808 = -1;
                            goto $l806;
                            $l806:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m809));
                            m809 = NULL;
                            switch ($tmp808) {
                                case -1: goto $l844;
                            }
                            $l844:;
                        }
                        goto $l798;
                        $l799:;
                    }
                    $tmp790 = -1;
                    goto $l788;
                    $l788:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$320$13791));
                    Iter$320$13791 = NULL;
                    switch ($tmp790) {
                        case -1: goto $l845;
                    }
                    $l845:;
                }
                {
                    $tmp846 = ancestor772;
                    $tmp847 = ancestorClass780->rawSuper;
                    ancestor772 = $tmp847;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp847));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp846));
                }
            }
            $tmp779 = -1;
            goto $l777;
            $l777:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestorClass780));
            ancestorClass780 = NULL;
            switch ($tmp779) {
                case -1: goto $l848;
                case 0: goto $l786;
            }
            $l848:;
        }
        goto $l774;
        $l775:;
        panda$core$Bit$init$builtin_bit(&$tmp850, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp849, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp850);
        panda$core$Int64$init$builtin_int64(&$tmp853, -1);
        panda$core$Bit$init$builtin_bit(&$tmp854, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$panda$core$Bit(&$tmp852, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp853, $tmp854);
        ITable* $tmp855 = ((panda$collections$ListView*) methods726)->$class->itable;
        while ($tmp855->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp855 = $tmp855->next;
        }
        $fn857 $tmp856 = $tmp855->methods[3];
        panda$collections$ListView* $tmp858 = $tmp856(((panda$collections$ListView*) methods726), $tmp852);
        $tmp851 = $tmp858;
        panda$collections$Array$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$Array$T$GT(methods726, $tmp849, $tmp851);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp851));
        panda$core$Int64 $tmp859 = panda$collections$Array$get_count$R$panda$core$Int64(methods726);
        panda$core$Int64$init$builtin_int64(&$tmp860, 0);
        panda$core$Bit $tmp861 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp859, $tmp860);
        if ($tmp861.value) {
        {
            (($fn863) self->out->$class->vtable[2])(self->out, &$s862);
            {
                int $tmp866;
                {
                    ITable* $tmp870 = ((panda$collections$Iterable*) methods726)->$class->itable;
                    while ($tmp870->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp870 = $tmp870->next;
                    }
                    $fn872 $tmp871 = $tmp870->methods[0];
                    panda$collections$Iterator* $tmp873 = $tmp871(((panda$collections$Iterable*) methods726));
                    $tmp869 = $tmp873;
                    $tmp868 = $tmp869;
                    Iter$337$13867 = $tmp868;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp868));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp869));
                    $l874:;
                    ITable* $tmp877 = Iter$337$13867->$class->itable;
                    while ($tmp877->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp877 = $tmp877->next;
                    }
                    $fn879 $tmp878 = $tmp877->methods[0];
                    panda$core$Bit $tmp880 = $tmp878(Iter$337$13867);
                    panda$core$Bit $tmp881 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp880);
                    bool $tmp876 = $tmp881.value;
                    if (!$tmp876) goto $l875;
                    {
                        int $tmp884;
                        {
                            ITable* $tmp888 = Iter$337$13867->$class->itable;
                            while ($tmp888->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp888 = $tmp888->next;
                            }
                            $fn890 $tmp889 = $tmp888->methods[1];
                            panda$core$Object* $tmp891 = $tmp889(Iter$337$13867);
                            $tmp887 = $tmp891;
                            $tmp886 = ((org$pandalanguage$pandac$MethodDecl*) $tmp887);
                            m885 = $tmp886;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp886));
                            panda$core$Panda$unref$panda$core$Object($tmp887);
                            (($fn893) self->out->$class->vtable[2])(self->out, &$s892);
                            (($fn895) self->out->$class->vtable[4])(self->out, &$s894, ((org$pandalanguage$pandac$Symbol*) m885)->name);
                            panda$core$Object* $tmp903 = panda$core$Weak$get$R$panda$core$Weak$T(m885->owner);
                            $tmp902 = $tmp903;
                            panda$core$String* $tmp905 = (($fn904) self->$class->vtable[16])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp902));
                            $tmp901 = $tmp905;
                            panda$core$String* $tmp906 = panda$core$String$convert$R$panda$core$String($tmp901);
                            $tmp900 = $tmp906;
                            panda$core$String* $tmp908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp900, &$s907);
                            $tmp899 = $tmp908;
                            panda$core$String* $tmp909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp899, ((org$pandalanguage$pandac$Symbol*) m885)->name);
                            $tmp898 = $tmp909;
                            panda$core$String* $tmp911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp898, &$s910);
                            $tmp897 = $tmp911;
                            (($fn912) self->out->$class->vtable[4])(self->out, &$s896, $tmp897);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp897));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp898));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp899));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp900));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp901));
                            panda$core$Panda$unref$panda$core$Object($tmp902);
                            (($fn914) self->out->$class->vtable[3])(self->out, &$s913);
                        }
                        $tmp884 = -1;
                        goto $l882;
                        $l882:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m885));
                        m885 = NULL;
                        switch ($tmp884) {
                            case -1: goto $l915;
                        }
                        $l915:;
                    }
                    goto $l874;
                    $l875:;
                }
                $tmp866 = -1;
                goto $l864;
                $l864:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$337$13867));
                Iter$337$13867 = NULL;
                switch ($tmp866) {
                    case -1: goto $l916;
                }
                $l916:;
            }
            (($fn918) self->out->$class->vtable[3])(self->out, &$s917);
        }
        }
    }
    $tmp725 = -1;
    goto $l723;
    $l723:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestor772));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) overridden730));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods726));
    methods726 = NULL;
    overridden730 = NULL;
    ancestor772 = NULL;
    switch ($tmp725) {
        case -1: goto $l919;
        case 0: goto $l787;
    }
    $l919:;
}
void panda$core$MutableMethod$$shim1$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar923 = NULL;
    panda$core$MutableMethod* $tmp924;
    panda$core$Method* $tmp925;
    panda$core$Object* $tmp927;
    panda$core$Object* $tmp928;
    int $tmp922;
    {
        panda$core$Method* $tmp926 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp926, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp925 = $tmp926;
        $tmp924 = ((panda$core$MutableMethod*) $tmp925);
        methodVar923 = $tmp924;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp924));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp925));
        {
            $tmp927 = methodVar923->target;
            $tmp928 = self->target;
            methodVar923->target = $tmp928;
            panda$core$Panda$ref$panda$core$Object($tmp928);
            panda$core$Panda$unref$panda$core$Object($tmp927);
        }
        if (methodVar923->target) {
            (($fn929) methodVar923->pointer)(methodVar923->target, ((org$pandalanguage$pandac$Type*) p_p0));
        } else {
            (($fn930) methodVar923->pointer)(((org$pandalanguage$pandac$Type*) p_p0));
        }
    }
    $tmp922 = -1;
    goto $l920;
    $l920:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar923));
    methodVar923 = NULL;
    switch ($tmp922) {
        case -1: goto $l931;
    }
    $l931:;
}
void panda$core$MutableMethod$$shim2$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar935 = NULL;
    panda$core$MutableMethod* $tmp936;
    panda$core$Method* $tmp937;
    panda$core$Object* $tmp939;
    panda$core$Object* $tmp940;
    int $tmp934;
    {
        panda$core$Method* $tmp938 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp938, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp937 = $tmp938;
        $tmp936 = ((panda$core$MutableMethod*) $tmp937);
        methodVar935 = $tmp936;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp936));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp937));
        {
            $tmp939 = methodVar935->target;
            $tmp940 = self->target;
            methodVar935->target = $tmp940;
            panda$core$Panda$ref$panda$core$Object($tmp940);
            panda$core$Panda$unref$panda$core$Object($tmp939);
        }
        if (methodVar935->target) {
            (($fn941) methodVar935->pointer)(methodVar935->target, ((org$pandalanguage$pandac$FieldDecl*) p_p0));
        } else {
            (($fn942) methodVar935->pointer)(((org$pandalanguage$pandac$FieldDecl*) p_p0));
        }
    }
    $tmp934 = -1;
    goto $l932;
    $l932:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar935));
    methodVar935 = NULL;
    switch ($tmp934) {
        case -1: goto $l943;
    }
    $l943:;
}
void panda$core$MutableMethod$$shim3$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar947 = NULL;
    panda$core$MutableMethod* $tmp948;
    panda$core$Method* $tmp949;
    panda$core$Object* $tmp951;
    panda$core$Object* $tmp952;
    int $tmp946;
    {
        panda$core$Method* $tmp950 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp950, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp949 = $tmp950;
        $tmp948 = ((panda$core$MutableMethod*) $tmp949);
        methodVar947 = $tmp948;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp948));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp949));
        {
            $tmp951 = methodVar947->target;
            $tmp952 = self->target;
            methodVar947->target = $tmp952;
            panda$core$Panda$ref$panda$core$Object($tmp952);
            panda$core$Panda$unref$panda$core$Object($tmp951);
        }
        if (methodVar947->target) {
            (($fn953) methodVar947->pointer)(methodVar947->target, ((org$pandalanguage$pandac$MethodDecl*) p_p0));
        } else {
            (($fn954) methodVar947->pointer)(((org$pandalanguage$pandac$MethodDecl*) p_p0));
        }
    }
    $tmp946 = -1;
    goto $l944;
    $l944:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar947));
    methodVar947 = NULL;
    switch ($tmp946) {
        case -1: goto $l955;
    }
    $l955:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* dest959 = NULL;
    panda$io$File* $tmp960;
    panda$io$File* $tmp961;
    panda$io$File* $tmp965;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp967;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp968;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp969;
    panda$io$OutputStream* $tmp971;
    panda$core$String* $tmp978;
    org$pandalanguage$pandac$Type* $tmp979;
    panda$core$Int64 $tmp987;
    int $tmp958;
    {
        panda$io$File* $tmp964 = (($fn963) self->$class->vtable[4])(self, p_cl, &$s962);
        $tmp961 = $tmp964;
        $tmp960 = $tmp961;
        dest959 = $tmp960;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp960));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp961));
        panda$io$File* $tmp966 = panda$io$File$parent$R$panda$io$File$Q(dest959);
        $tmp965 = $tmp966;
        panda$io$File$createDirectories($tmp965);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp965));
        {
            $tmp967 = self->out;
            org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp970 = (org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$class);
            panda$io$OutputStream* $tmp972 = panda$io$File$openOutputStream$R$panda$io$OutputStream(dest959);
            $tmp971 = $tmp972;
            org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$init$panda$io$OutputStream($tmp970, $tmp971);
            $tmp969 = $tmp970;
            $tmp968 = $tmp969;
            self->out = $tmp968;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp968));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp971));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp967));
        }
        (($fn974) self->out->$class->vtable[2])(self->out, &$s973);
        (($fn976) self->out->$class->vtable[4])(self->out, &$s975, p_cl->name);
        org$pandalanguage$pandac$Type* $tmp980 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        $tmp979 = $tmp980;
        panda$core$String* $tmp982 = (($fn981) self->$class->vtable[5])(self, $tmp979);
        $tmp978 = $tmp982;
        (($fn983) self->out->$class->vtable[4])(self->out, &$s977, $tmp978);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp978));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp979));
        if (((panda$core$Bit) { p_cl->doccomment != NULL }).value) {
        {
            (($fn984) self->$class->vtable[9])(self, p_cl->doccomment);
        }
        }
        (($fn985) self->$class->vtable[15])(self, p_cl);
        panda$core$Int64 $tmp986 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
        panda$core$Int64$init$builtin_int64(&$tmp987, 0);
        panda$core$Bit $tmp988 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp986, $tmp987);
        if ($tmp988.value) {
        {
            (($fn990) self->out->$class->vtable[2])(self->out, &$s989);
            panda$core$MutableMethod* $tmp991 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod* $tmp992 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp992, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Type, ((panda$core$Object*) self));
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp991, (panda$core$Int8*) &panda$core$MutableMethod$$shim1$panda$collections$CollectionView$T, ((panda$core$Object*) ((panda$core$Object*) $tmp992)));
            ITable* $tmp993 = ((panda$collections$CollectionView*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp993->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp993 = $tmp993->next;
            }
            $fn995 $tmp994 = $tmp993->methods[3];
            $tmp994(((panda$collections$CollectionView*) p_cl->rawInterfaces), ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp991)));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp991));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp992));
            (($fn997) self->out->$class->vtable[3])(self->out, &$s996);
        }
        }
        (($fn998) self->$class->vtable[17])(self, p_cl);
        (($fn999) self->$class->vtable[18])(self, p_cl);
        panda$core$MutableMethod* $tmp1000 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1001 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1001, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$FieldDecl, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1000, (panda$core$Int8*) &panda$core$MutableMethod$$shim2$panda$collections$CollectionView$T, ((panda$core$Object*) ((panda$core$Object*) $tmp1001)));
        ITable* $tmp1002 = ((panda$collections$CollectionView*) p_cl->fields)->$class->itable;
        while ($tmp1002->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1002 = $tmp1002->next;
        }
        $fn1004 $tmp1003 = $tmp1002->methods[3];
        $tmp1003(((panda$collections$CollectionView*) p_cl->fields), ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1000)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1000));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1001));
        panda$core$MutableMethod* $tmp1005 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1006 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1006, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1005, (panda$core$Int8*) &panda$core$MutableMethod$$shim3$panda$collections$CollectionView$T, ((panda$core$Object*) ((panda$core$Object*) $tmp1006)));
        ITable* $tmp1007 = ((panda$collections$CollectionView*) p_cl->methods)->$class->itable;
        while ($tmp1007->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1007 = $tmp1007->next;
        }
        $fn1009 $tmp1008 = $tmp1007->methods[3];
        $tmp1008(((panda$collections$CollectionView*) p_cl->methods), ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1005)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1005));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1006));
        (($fn1011) self->out->$class->vtable[3])(self->out, &$s1010);
    }
    $tmp958 = -1;
    goto $l956;
    $l956:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest959));
    dest959 = NULL;
    switch ($tmp958) {
        case -1: goto $l1012;
    }
    $l1012:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$finish(org$pandalanguage$pandac$pandadoc$PandaDoc* self) {
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$cleanup(org$pandalanguage$pandac$pandadoc$PandaDoc* self) {
    int $tmp1015;
    {
    }
    $tmp1015 = -1;
    goto $l1013;
    $l1013:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1015) {
        case -1: goto $l1016;
    }
    $l1016:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->outDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
}

