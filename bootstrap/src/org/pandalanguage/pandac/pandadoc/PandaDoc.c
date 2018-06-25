#include "org/pandalanguage/pandac/pandadoc/PandaDoc.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Method.h"
#include "panda/core/Immutable.h"
#include "panda/core/Panda.h"
#include "panda/io/File.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/HashSet.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Bit.h"
#include "panda/collections/Iterator.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/core/Int64.h"
#include "panda/core/String/Index.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/Array.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ListView.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "org/pandalanguage/pandac/pandadoc/PandaDoc/XMLWriter.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "org/pandalanguage/pandac/pandadoc/LinkResolver.h"
#include "panda/io/IndentedOutputStream.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/collections/List.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/io/OutputStream.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/ImmutableArray.h"

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$pandadoc$PandaDoc$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$pandadoc$PandaDoc$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$pandadoc$PandaDoc$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$finish} };

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$PandaDoc$class_type org$pandalanguage$pandac$pandadoc$PandaDoc$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$pandadoc$PandaDoc$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$cleanup, org$pandalanguage$pandac$pandadoc$PandaDoc$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$pandadoc$PandaDoc$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File, org$pandalanguage$pandac$pandadoc$PandaDoc$simpleName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$escape$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$pandadoc$PandaDoc$splitDoc$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Pair$LTpanda$core$String$Cpanda$core$String$GT$GT, org$pandalanguage$pandac$pandadoc$PandaDoc$getMarkdown$R$org$pandalanguage$pandac$pandadoc$Markdown, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$writeSee$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$finishSees, org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$getDocComment$org$pandalanguage$pandac$MethodDecl$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$PandaDoc$stripParagraph$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeAncestors$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedFields$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$addInheritedMethods$org$pandalanguage$pandac$Type$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$HashSet$LTpanda$core$String$GT, org$pandalanguage$pandac$pandadoc$PandaDoc$simpleSignature$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedMethods$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$pandadoc$PandaDoc$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$finish} };

typedef void (*$fn11)(panda$core$Object*, panda$core$String*);
typedef void (*$fn12)(panda$core$String*);
typedef void (*$fn35)(panda$collections$Iterator*, panda$core$MutableMethod*);
typedef panda$core$String* (*$fn73)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*, panda$core$String*);
typedef panda$core$String* (*$fn106)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn128)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn135)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn146)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn149)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn169)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$core$String* (*$fn173)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn224)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$collections$Iterator* (*$fn228)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn235)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn246)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn249)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn280)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn308)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn311)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn313)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn317)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn319)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn321)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn342)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn344)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn347)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn349)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn352)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn354)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn358)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn362)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn366)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn370)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn374)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn378)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn382)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn384)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn415)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn422)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn433)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn440)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn451)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn481)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn506)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn520)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn527)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn538)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn566)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn572)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$pandadoc$Markdown* (*$fn610)(org$pandalanguage$pandac$pandadoc$PandaDoc*);
typedef void (*$fn613)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn620)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn622)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn625)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn628)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef void (*$fn630)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn632)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn636)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef org$pandalanguage$pandac$pandadoc$Markdown* (*$fn642)(org$pandalanguage$pandac$pandadoc$PandaDoc*);
typedef panda$core$String* (*$fn650)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn652)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn654)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn656)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$Bit (*$fn680)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$ListView* (*$fn700)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$core$Object* (*$fn706)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn708)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$collections$ListView* (*$fn721)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$collections$Iterator* (*$fn725)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn732)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn743)(panda$collections$Iterator*);
typedef void (*$fn752)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn764)(org$pandalanguage$pandac$pandadoc$PandaDoc*);
typedef panda$core$Bit (*$fn766)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn770)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn773)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn774)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn776)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$Bit (*$fn780)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn790)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn792)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn816)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn817)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Annotations*);
typedef void (*$fn818)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn819)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn821)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn849)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Object* (*$fn888)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn902)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$ListView* (*$fn908)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$core$Object* (*$fn914)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn916)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$collections$ListView* (*$fn929)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$collections$Iterator* (*$fn933)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn940)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn951)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn985)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$pandadoc$Markdown* (*$fn990)(org$pandalanguage$pandac$pandadoc$PandaDoc*);
typedef panda$core$Object* (*$fn996)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn998)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn1000)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef org$pandalanguage$pandac$pandadoc$Markdown* (*$fn1010)(org$pandalanguage$pandac$pandadoc$PandaDoc*);
typedef panda$core$String* (*$fn1012)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn1014)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn1018)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn1030)(org$pandalanguage$pandac$pandadoc$PandaDoc*);
typedef panda$core$Bit (*$fn1037)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1063)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn1066)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn1068)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1069)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1078)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Annotations*);
typedef void (*$fn1080)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1089)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1096)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1107)(panda$collections$Iterator*);
typedef void (*$fn1110)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1112)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1113)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1119)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1121)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1125)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1130)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1131)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1133)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1135)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1136)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1145)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1154)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1167)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn1176)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn1186)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn1196)(org$pandalanguage$pandac$pandadoc$LinkResolver*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$collections$Iterator* (*$fn1230)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1237)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1248)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1250)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$collections$ListView* (*$fn1267)(panda$collections$ListView*, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT);
typedef void (*$fn1271)(panda$collections$List*, panda$core$Range$LTpanda$core$Int64$Q$GT, panda$collections$ListView*);
typedef void (*$fn1276)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1285)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1292)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1303)(panda$collections$Iterator*);
typedef void (*$fn1306)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1308)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn1311)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn1313)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1315)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1319)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1339)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1346)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1357)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1372)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn1383)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1389)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*, panda$collections$Array*, panda$collections$HashSet*);
typedef panda$collections$Iterator* (*$fn1398)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1405)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1416)(panda$collections$Iterator*);
typedef void (*$fn1418)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*, panda$collections$Array*, panda$collections$HashSet*);
typedef panda$collections$Iterator* (*$fn1445)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1452)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1463)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1466)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn1482)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1513)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1520)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1531)(panda$collections$Iterator*);
typedef void (*$fn1547)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*, panda$collections$Array*, panda$collections$HashSet*);
typedef panda$collections$ListView* (*$fn1556)(panda$collections$ListView*, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT);
typedef void (*$fn1560)(panda$collections$List*, panda$core$Range$LTpanda$core$Int64$Q$GT, panda$collections$ListView*);
typedef void (*$fn1565)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1574)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1581)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1592)(panda$collections$Iterator*);
typedef void (*$fn1595)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn1599)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn1601)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn1603)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn1606)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1608)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1610)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1614)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$ListView* (*$fn1622)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$core$Object* (*$fn1628)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1630)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$collections$ListView* (*$fn1643)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$collections$Iterator* (*$fn1647)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1654)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1665)(panda$collections$Iterator*);
typedef void (*$fn1674)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn1686)(org$pandalanguage$pandac$pandadoc$PandaDoc*);
typedef void (*$fn1697)(panda$core$Object*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1698)(org$pandalanguage$pandac$Type*);
typedef void (*$fn1709)(panda$core$Object*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1710)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1721)(panda$core$Object*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn1722)(org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn1733)(panda$core$Object*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1734)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn1739)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$io$File* (*$fn1751)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*, panda$core$String*);
typedef void (*$fn1762)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1764)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn1770)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1774)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1792)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1799)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1810)(panda$collections$Iterator*);
typedef void (*$fn1835)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1841)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1846)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1851)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$Int64 (*$fn1874)(panda$collections$Iterator*);
typedef void (*$fn1886)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1887)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1888)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1893)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1898)(panda$collections$CollectionView*, panda$core$MutableMethod*);
typedef void (*$fn1900)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1901)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1902)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1907)(panda$collections$CollectionView*, panda$core$MutableMethod*);
typedef void (*$fn1912)(panda$collections$CollectionView*, panda$core$MutableMethod*);
typedef void (*$fn1917)(panda$collections$CollectionView*, panda$core$MutableMethod*);
typedef void (*$fn1919)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn1925)(panda$collections$CollectionView*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x50\x61\x6e\x64\x61\x44\x6f\x63", 42, 5747474735547879356, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s64 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s65 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x28", 5, 14839819243, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x28", 4, 146931305, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x26\x3e\x2a\x28", 6, 1498821743785, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e\x2a\x28", 5, 14840062047, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65", 4, 224821051, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x69\x6d\x70\x6c\x65\x4e\x61\x6d\x65", 10, -2422848206215579872, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x72\x6c", 3, 2235440, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x72\x6c", 3, 2235440, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65", 4, 224821051, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 11, 4507694521940296927, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 11, 4507694521940296927, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72\x3f\x5c\x6e", 5, 20201763772, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x20\x2a\x29\x2e\x2a", 6, 1485297799044, NULL };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x3f\x3d\x5b\x20\x5c\x74\x5d\x2a\x40\x5c\x77\x2b\x29", 19, -7488746236773417835, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x64\x29\x40\x28\x5c\x77\x2a\x29\x5c\x73\x2a\x28\x2e\x2a\x29", 17, -3061574336605567443, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x63", 3, 2061711, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x6d\x6d\x61\x72\x79", 7, 230529490176083, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e", 11, -5937374402135118271, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x63", 3, 2061711, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x65\x41\x6c\x73\x6f\x73", 8, 23266405537255732, NULL };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x65\x41\x6c\x73\x6f", 7, 230360450863917, NULL };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x65\x41\x6c\x73\x6f\x73", 8, 23266405537255732, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x65\x61\x6e\x75\x70\x28\x29", 9, 2177400717642211126, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 17, -1766462974584480607, NULL };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x65", 3, 2213718, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x61\x67\x20\x27\x40", 6, 2290892119052, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x6e\x20\x66\x69\x65\x6c\x64\x73", 28, -3973010739570834313, NULL };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73", 5, 20924353935, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73", 5, 20924353935, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72", 3, 2243930, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66", 3, 2060704, NULL };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74", 8, 21561703977373775, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79", 8, 22958674678203502, NULL };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6b\x69\x6e\x64", 4, 215384923, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x68\x65\x72\x69\x74", 8, 17802859964149620, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x73\x70\x65\x63\x69\x66\x69\x65\x73\x20\x27\x40\x69\x6e\x68\x65\x72\x69\x74\x27\x2c\x20\x62\x75\x74\x20\x6e\x6f\x20\x6d\x61\x74\x63\x68\x69\x6e\x67\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x6f\x75\x6e\x64\x20\x61\x6d\x6f\x6e\x67\x20\x69\x74\x73\x20\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 77, 7383122139536139686, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x73\x70\x65\x63\x69\x66\x69\x65\x73\x20\x27\x40\x69\x6e\x68\x65\x72\x69\x74\x27\x2c\x20\x62\x75\x74\x20", 33, 1577005792040822601, NULL };
static panda$core$String $s860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x79\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e", 32, -7234224912530298773, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x70\x3e\x28\x2e\x2a\x29\x3c\x5c\x2f\x70\x3e\x5c\x73\x2a", 15, 8989676937916321750, NULL };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x64\x29\x28\x5c\x53\x2b\x29\x5c\x73\x2b\x28\x2e\x2b\x29", 16, -745059115866035108, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x27\x40\x70\x61\x72\x61\x6d\x27\x20\x63\x6f\x6e\x74\x65\x6e\x74\x73\x20\x27", 27, -1875178037567031932, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x73", 7, 229300545255688, NULL };
static panda$core$String $s1016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x65", 3, 2213718, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x61\x67\x20\x27\x40", 6, 2290892119052, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x6e\x20\x6d\x65\x74\x68\x6f\x64\x73", 29, 4554292315113417764, NULL };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64", 6, 2217751792842, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e", 8, 21889712039024771, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d\x73", 6, 2248863720545, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e", 11, -5937374402135118271, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d\x73", 6, 2248863720545, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e", 11, -5937374402135118271, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 9, 2155955930119440779, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 9, 2155955930119440779, NULL };
static panda$core$String $s1275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x46\x69\x65\x6c\x64\x73", 15, -7565896169200556928, NULL };
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x6e\x6b", 4, 216415231, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x46\x69\x65\x6c\x64\x73", 15, -7565896169200556928, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x4d\x65\x74\x68\x6f\x64\x73", 16, -7838998677007085647, NULL };
static panda$core$String $s1594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64", 6, 2217751792842, NULL };
static panda$core$String $s1596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s1604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x6e\x6b", 4, 216415231, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64", 6, 2217751792842, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x4d\x65\x74\x68\x6f\x64\x73", 16, -7838998677007085647, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x65", 3, 2213718, NULL };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x61\x67\x20\x27\x40", 6, 2290892119052, NULL };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x6e\x20\x63\x6c\x61\x73\x73\x65\x73", 29, 4554281771516841858, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x78\x6d\x6c", 4, 152689484, NULL };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73", 5, 20924353935, NULL };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s1834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x69\x6d\x70\x6c\x65\x4e\x61\x6d\x65", 10, -2422848206215579872, NULL };
static panda$core$String $s1839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6b\x69\x6e\x64", 4, 215384923, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73", 5, 20924353935, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6b\x69\x6e\x64", 4, 215384923, NULL };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65", 9, 2242602512293618446, NULL };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6b\x69\x6e\x64", 4, 215384923, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65", 6, 2112957826520, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x6f\x75\x72\x63\x65", 6, 2281854130958, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f", 3, 1504240, NULL };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x6f\x75\x72\x63\x65\x2f", 7, 230467267226805, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73", 10, 5141924857140843769, NULL };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73", 10, 5141924857140843769, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73", 5, 20924353935, NULL };
static panda$core$String $s1922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void panda$core$MutableMethod$$shim1$panda$collections$Iterator$T(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar5 = NULL;
    panda$core$MutableMethod* $tmp6;
    panda$core$Method* $tmp7;
    panda$core$Object* $tmp9;
    panda$core$Object* $tmp10;
    int $tmp4;
    {
        panda$core$Method* $tmp8 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp8, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp7 = $tmp8;
        $tmp6 = ((panda$core$MutableMethod*) $tmp7);
        methodVar5 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
        {
            $tmp9 = methodVar5->target;
            $tmp10 = self->target;
            methodVar5->target = $tmp10;
            panda$core$Panda$ref$panda$core$Object($tmp10);
            panda$core$Panda$unref$panda$core$Object($tmp9);
        }
        if (methodVar5->target) {
            (($fn11) methodVar5->pointer)(methodVar5->target, ((panda$core$String*) p_p0));
        } else {
            (($fn12) methodVar5->pointer)(((panda$core$String*) p_p0));
        }
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar5));
    methodVar5 = NULL;
    switch ($tmp4) {
        case -1: goto $l13;
    }
    $l13:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$init$panda$io$File$panda$io$File$Q(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$io$File* p_outDir, panda$io$File* p_classListPath) {
    panda$core$Weak* $tmp14;
    panda$core$Weak* $tmp15;
    panda$collections$HashSet* $tmp17;
    panda$collections$HashSet* $tmp18;
    panda$collections$HashMap* $tmp20;
    panda$collections$HashMap* $tmp21;
    panda$core$Bit $tmp23;
    panda$io$File* $tmp24;
    panda$io$File* $tmp25;
    panda$io$File* $tmp26;
    panda$io$File* $tmp27;
    panda$core$Bit $tmp28;
    panda$collections$Iterator* $tmp29;
    self->outDir = NULL;
    self->compiler = NULL;
    self->out = NULL;
    self->classListPath = NULL;
    self->classList = NULL;
    self->returns = NULL;
    self->params = NULL;
    self->currentClass = NULL;
    panda$core$Weak* $tmp16 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp16, ((panda$core$Object*) NULL));
    $tmp15 = $tmp16;
    $tmp14 = $tmp15;
    self->compiler = $tmp14;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$collections$HashSet* $tmp19 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
    panda$collections$HashSet$init($tmp19);
    $tmp18 = $tmp19;
    $tmp17 = $tmp18;
    self->classList = $tmp17;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$collections$HashMap* $tmp22 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp22);
    $tmp21 = $tmp22;
    $tmp20 = $tmp21;
    self->params = $tmp20;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$core$Bit$init$builtin_bit(&$tmp23, false);
    self->haveSees = $tmp23;
    {
        $tmp24 = self->outDir;
        $tmp25 = p_outDir;
        self->outDir = $tmp25;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
    }
    if (((panda$core$Bit) { p_classListPath != NULL }).value) {
    {
        {
            $tmp26 = self->classListPath;
            $tmp27 = p_classListPath;
            self->classListPath = $tmp27;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
        }
        panda$io$File$exists$R$panda$core$Bit(&$tmp28, p_classListPath);
        if ($tmp28.value) {
        {
            panda$collections$Iterator* $tmp30 = panda$io$File$lines$R$panda$collections$Iterator$LTpanda$core$String$GT(p_classListPath);
            $tmp29 = $tmp30;
            panda$core$MutableMethod* $tmp31 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod* $tmp32 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp32, (panda$core$Int8*) &panda$collections$HashSet$add$panda$collections$HashSet$T, ((panda$core$Object*) self->classList));
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp31, (panda$core$Int8*) &panda$core$MutableMethod$$shim1$panda$collections$Iterator$T, ((panda$core$Object*) ((panda$core$Object*) $tmp32)));
            ITable* $tmp33 = $tmp29->$class->itable;
            while ($tmp33->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp33 = $tmp33->next;
            }
            $fn35 $tmp34 = $tmp33->methods[7];
            $tmp34($tmp29, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp31)));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
        }
        }
    }
    }
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp36;
    panda$core$Weak* $tmp37;
    panda$core$Weak* $tmp38;
    {
        $tmp36 = self->compiler;
        panda$core$Weak* $tmp39 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp39, ((panda$core$Object*) p_compiler));
        $tmp38 = $tmp39;
        $tmp37 = $tmp38;
        self->compiler = $tmp37;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
    }
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $returnValue40;
    panda$core$String* $tmp41;
    panda$core$String* $tmp42;
    panda$core$String* $tmp43;
    panda$core$String* $tmp44;
    panda$core$String* $tmp45;
    panda$core$String* $tmp46;
    panda$core$String* $tmp47;
    panda$core$String* $tmp48;
    panda$core$String* $tmp51 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s49, &$s50);
    $tmp48 = $tmp51;
    panda$core$String* $tmp54 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp48, &$s52, &$s53);
    $tmp47 = $tmp54;
    panda$core$String* $tmp57 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp47, &$s55, &$s56);
    $tmp46 = $tmp57;
    panda$core$String* $tmp60 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp46, &$s58, &$s59);
    $tmp45 = $tmp60;
    panda$core$String* $tmp63 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp45, &$s61, &$s62);
    $tmp44 = $tmp63;
    panda$core$String* $tmp66 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp44, &$s64, &$s65);
    $tmp43 = $tmp66;
    panda$core$String* $tmp67 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp43, p_extension);
    $tmp42 = $tmp67;
    $tmp41 = $tmp42;
    $returnValue40 = $tmp41;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
    return $returnValue40;
}
panda$io$File* org$pandalanguage$pandac$pandadoc$PandaDoc$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $returnValue69;
    panda$io$File* $tmp70;
    panda$io$File* $tmp71;
    panda$core$String* $tmp72;
    panda$core$String* $tmp74 = (($fn73) self->$class->vtable[3])(self, p_cl, p_extension);
    $tmp72 = $tmp74;
    panda$io$File* $tmp75 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp72);
    $tmp71 = $tmp75;
    $tmp70 = $tmp71;
    $returnValue69 = $tmp70;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
    return $returnValue69;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$simpleName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$Type$Kind $match$85_977;
    panda$core$Int64 $tmp79;
    panda$core$Int64 $tmp82;
    panda$core$String$Index$nullable index85;
    panda$core$String* $returnValue88;
    panda$core$String* $tmp89;
    panda$core$String* $tmp91;
    panda$core$String* $tmp92;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp93;
    panda$core$Bit $tmp95;
    panda$core$Int64 $tmp98;
    panda$core$String* $tmp100;
    panda$core$String* $tmp101;
    panda$core$String* $tmp102;
    panda$core$Object* $tmp103;
    panda$core$Int64 $tmp104;
    panda$core$Int64 $tmp111;
    panda$collections$Array* simpleNames116 = NULL;
    panda$collections$Array* $tmp117;
    panda$collections$Array* $tmp118;
    panda$collections$Iterator* Iter$96$17123 = NULL;
    panda$collections$Iterator* $tmp124;
    panda$collections$Iterator* $tmp125;
    org$pandalanguage$pandac$Type* s141 = NULL;
    org$pandalanguage$pandac$Type* $tmp142;
    panda$core$Object* $tmp143;
    panda$core$String* $tmp148;
    panda$core$String* $tmp153;
    panda$core$String* $tmp154;
    panda$core$String* $tmp155;
    panda$core$String* $tmp156;
    panda$core$Object* $tmp157;
    panda$core$Int64 $tmp158;
    panda$core$String* $tmp162;
    panda$collections$ListView* $tmp163;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp164;
    panda$core$Int64 $tmp165;
    panda$core$Bit $tmp166;
    panda$core$Int64 $tmp184;
    panda$core$Int64 $tmp187;
    panda$core$Int64 $tmp191;
    panda$core$Int64 $tmp195;
    panda$core$MutableString* result201 = NULL;
    panda$core$MutableString* $tmp202;
    panda$core$MutableString* $tmp203;
    panda$core$String* separator206 = NULL;
    panda$core$String* $tmp207;
    panda$collections$Iterator* Iter$104$17212 = NULL;
    panda$collections$Iterator* $tmp213;
    panda$collections$Iterator* $tmp214;
    panda$collections$ListView* $tmp215;
    panda$core$Range$LTpanda$core$Int64$GT $tmp216;
    panda$core$Int64 $tmp217;
    panda$core$Int64 $tmp219;
    panda$core$Bit $tmp221;
    org$pandalanguage$pandac$Type* p241 = NULL;
    org$pandalanguage$pandac$Type* $tmp242;
    panda$core$Object* $tmp243;
    panda$core$String* $tmp248;
    panda$core$String* $tmp251;
    panda$core$String* $tmp252;
    org$pandalanguage$pandac$Type$Kind $match$109_17256;
    panda$core$Int64 $tmp257;
    panda$core$Int64 $tmp260;
    panda$core$Int64 $tmp263;
    panda$core$Int64 $tmp266;
    org$pandalanguage$pandac$Type* returnType269 = NULL;
    org$pandalanguage$pandac$Type* $tmp270;
    panda$core$Object* $tmp271;
    panda$core$Int64 $tmp273;
    org$pandalanguage$pandac$Type* $tmp276;
    panda$core$String* $tmp279;
    panda$core$Char8 $tmp282;
    panda$core$UInt8 $tmp283;
    panda$core$String* $tmp284;
    panda$core$String* $tmp285;
    panda$core$String* $tmp290;
    {
        $match$85_977 = p_t->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp79, 0);
        panda$core$Bit $tmp80 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_977.$rawValue, $tmp79);
        bool $tmp78 = $tmp80.value;
        if ($tmp78) goto $l81;
        panda$core$Int64$init$builtin_int64(&$tmp82, 12);
        panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_977.$rawValue, $tmp82);
        $tmp78 = $tmp83.value;
        $l81:;
        panda$core$Bit $tmp84 = { $tmp78 };
        if ($tmp84.value) {
        {
            panda$core$String$Index$nullable $tmp87 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s86);
            index85 = $tmp87;
            if (((panda$core$Bit) { !index85.nonnull }).value) {
            {
                $tmp89 = ((org$pandalanguage$pandac$Symbol*) p_t)->name;
                $returnValue88 = $tmp89;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp89));
                return $returnValue88;
            }
            }
            panda$core$String$Index $tmp94 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_t)->name, ((panda$core$String$Index) index85.value));
            panda$core$Bit$init$builtin_bit(&$tmp95, false);
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp93, ((panda$core$String$Index$nullable) { $tmp94, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp95);
            panda$core$String* $tmp96 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_t)->name, $tmp93);
            $tmp92 = $tmp96;
            $tmp91 = $tmp92;
            $returnValue88 = $tmp91;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp91));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
            return $returnValue88;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp98, 1);
        panda$core$Bit $tmp99 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_977.$rawValue, $tmp98);
        if ($tmp99.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp104, 0);
            panda$core$Object* $tmp105 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp104);
            $tmp103 = $tmp105;
            panda$core$String* $tmp107 = (($fn106) self->$class->vtable[5])(self, ((org$pandalanguage$pandac$Type*) $tmp103));
            $tmp102 = $tmp107;
            panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp102, &$s108);
            $tmp101 = $tmp109;
            $tmp100 = $tmp101;
            $returnValue88 = $tmp100;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
            panda$core$Panda$unref$panda$core$Object($tmp103);
            return $returnValue88;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp111, 11);
        panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_977.$rawValue, $tmp111);
        if ($tmp112.value) {
        {
            int $tmp115;
            {
                panda$collections$Array* $tmp119 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp119);
                $tmp118 = $tmp119;
                $tmp117 = $tmp118;
                simpleNames116 = $tmp117;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
                {
                    int $tmp122;
                    {
                        ITable* $tmp126 = ((panda$collections$Iterable*) p_t->subtypes)->$class->itable;
                        while ($tmp126->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp126 = $tmp126->next;
                        }
                        $fn128 $tmp127 = $tmp126->methods[0];
                        panda$collections$Iterator* $tmp129 = $tmp127(((panda$collections$Iterable*) p_t->subtypes));
                        $tmp125 = $tmp129;
                        $tmp124 = $tmp125;
                        Iter$96$17123 = $tmp124;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp124));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp125));
                        $l130:;
                        ITable* $tmp133 = Iter$96$17123->$class->itable;
                        while ($tmp133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp133 = $tmp133->next;
                        }
                        $fn135 $tmp134 = $tmp133->methods[0];
                        panda$core$Bit $tmp136 = $tmp134(Iter$96$17123);
                        panda$core$Bit $tmp137 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp136);
                        bool $tmp132 = $tmp137.value;
                        if (!$tmp132) goto $l131;
                        {
                            int $tmp140;
                            {
                                ITable* $tmp144 = Iter$96$17123->$class->itable;
                                while ($tmp144->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp144 = $tmp144->next;
                                }
                                $fn146 $tmp145 = $tmp144->methods[1];
                                panda$core$Object* $tmp147 = $tmp145(Iter$96$17123);
                                $tmp143 = $tmp147;
                                $tmp142 = ((org$pandalanguage$pandac$Type*) $tmp143);
                                s141 = $tmp142;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
                                panda$core$Panda$unref$panda$core$Object($tmp143);
                                panda$core$String* $tmp150 = (($fn149) self->$class->vtable[5])(self, s141);
                                $tmp148 = $tmp150;
                                panda$collections$Array$add$panda$collections$Array$T(simpleNames116, ((panda$core$Object*) $tmp148));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
                            }
                            $tmp140 = -1;
                            goto $l138;
                            $l138:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s141));
                            s141 = NULL;
                            switch ($tmp140) {
                                case -1: goto $l151;
                            }
                            $l151:;
                        }
                        goto $l130;
                        $l131:;
                    }
                    $tmp122 = -1;
                    goto $l120;
                    $l120:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$96$17123));
                    Iter$96$17123 = NULL;
                    switch ($tmp122) {
                        case -1: goto $l152;
                    }
                    $l152:;
                }
                panda$core$Int64$init$builtin_int64(&$tmp158, 0);
                panda$core$Object* $tmp159 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(simpleNames116, $tmp158);
                $tmp157 = $tmp159;
                panda$core$String* $tmp161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((panda$core$String*) $tmp157), &$s160);
                $tmp156 = $tmp161;
                panda$core$Int64$init$builtin_int64(&$tmp165, 1);
                panda$core$Bit$init$builtin_bit(&$tmp166, false);
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp164, ((panda$core$Int64$nullable) { $tmp165, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp166);
                ITable* $tmp167 = ((panda$collections$ListView*) simpleNames116)->$class->itable;
                while ($tmp167->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp167 = $tmp167->next;
                }
                $fn169 $tmp168 = $tmp167->methods[2];
                panda$collections$ListView* $tmp170 = $tmp168(((panda$collections$ListView*) simpleNames116), $tmp164);
                $tmp163 = $tmp170;
                ITable* $tmp171 = ((panda$collections$CollectionView*) $tmp163)->$class->itable;
                while ($tmp171->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp171 = $tmp171->next;
                }
                $fn173 $tmp172 = $tmp171->methods[1];
                panda$core$String* $tmp174 = $tmp172(((panda$collections$CollectionView*) $tmp163));
                $tmp162 = $tmp174;
                panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp156, $tmp162);
                $tmp155 = $tmp175;
                panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp155, &$s176);
                $tmp154 = $tmp177;
                $tmp153 = $tmp154;
                $returnValue88 = $tmp153;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp163));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
                panda$core$Panda$unref$panda$core$Object($tmp157);
                $tmp115 = 0;
                goto $l113;
                $l178:;
                return $returnValue88;
            }
            $l113:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) simpleNames116));
            simpleNames116 = NULL;
            switch ($tmp115) {
                case 0: goto $l178;
            }
            $l180:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp184, 15);
        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_977.$rawValue, $tmp184);
        bool $tmp183 = $tmp185.value;
        if ($tmp183) goto $l186;
        panda$core$Int64$init$builtin_int64(&$tmp187, 14);
        panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_977.$rawValue, $tmp187);
        $tmp183 = $tmp188.value;
        $l186:;
        panda$core$Bit $tmp189 = { $tmp183 };
        bool $tmp182 = $tmp189.value;
        if ($tmp182) goto $l190;
        panda$core$Int64$init$builtin_int64(&$tmp191, 17);
        panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_977.$rawValue, $tmp191);
        $tmp182 = $tmp192.value;
        $l190:;
        panda$core$Bit $tmp193 = { $tmp182 };
        bool $tmp181 = $tmp193.value;
        if ($tmp181) goto $l194;
        panda$core$Int64$init$builtin_int64(&$tmp195, 16);
        panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_977.$rawValue, $tmp195);
        $tmp181 = $tmp196.value;
        $l194:;
        panda$core$Bit $tmp197 = { $tmp181 };
        if ($tmp197.value) {
        {
            int $tmp200;
            {
                panda$core$MutableString* $tmp204 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp204, &$s205);
                $tmp203 = $tmp204;
                $tmp202 = $tmp203;
                result201 = $tmp202;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp202));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
                $tmp207 = &$s208;
                separator206 = $tmp207;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp207));
                {
                    int $tmp211;
                    {
                        panda$core$Int64$init$builtin_int64(&$tmp217, 0);
                        panda$core$Int64 $tmp218 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
                        panda$core$Int64$init$builtin_int64(&$tmp219, 1);
                        panda$core$Int64 $tmp220 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp218, $tmp219);
                        panda$core$Bit$init$builtin_bit(&$tmp221, false);
                        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp216, $tmp217, $tmp220, $tmp221);
                        ITable* $tmp222 = ((panda$collections$ListView*) p_t->subtypes)->$class->itable;
                        while ($tmp222->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                            $tmp222 = $tmp222->next;
                        }
                        $fn224 $tmp223 = $tmp222->methods[1];
                        panda$collections$ListView* $tmp225 = $tmp223(((panda$collections$ListView*) p_t->subtypes), $tmp216);
                        $tmp215 = $tmp225;
                        ITable* $tmp226 = ((panda$collections$Iterable*) $tmp215)->$class->itable;
                        while ($tmp226->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp226 = $tmp226->next;
                        }
                        $fn228 $tmp227 = $tmp226->methods[0];
                        panda$collections$Iterator* $tmp229 = $tmp227(((panda$collections$Iterable*) $tmp215));
                        $tmp214 = $tmp229;
                        $tmp213 = $tmp214;
                        Iter$104$17212 = $tmp213;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp213));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
                        $l230:;
                        ITable* $tmp233 = Iter$104$17212->$class->itable;
                        while ($tmp233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp233 = $tmp233->next;
                        }
                        $fn235 $tmp234 = $tmp233->methods[0];
                        panda$core$Bit $tmp236 = $tmp234(Iter$104$17212);
                        panda$core$Bit $tmp237 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp236);
                        bool $tmp232 = $tmp237.value;
                        if (!$tmp232) goto $l231;
                        {
                            int $tmp240;
                            {
                                ITable* $tmp244 = Iter$104$17212->$class->itable;
                                while ($tmp244->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp244 = $tmp244->next;
                                }
                                $fn246 $tmp245 = $tmp244->methods[1];
                                panda$core$Object* $tmp247 = $tmp245(Iter$104$17212);
                                $tmp243 = $tmp247;
                                $tmp242 = ((org$pandalanguage$pandac$Type*) $tmp243);
                                p241 = $tmp242;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
                                panda$core$Panda$unref$panda$core$Object($tmp243);
                                panda$core$MutableString$append$panda$core$String(result201, separator206);
                                panda$core$String* $tmp250 = (($fn249) self->$class->vtable[5])(self, p241);
                                $tmp248 = $tmp250;
                                panda$core$MutableString$append$panda$core$String(result201, $tmp248);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
                                {
                                    $tmp251 = separator206;
                                    $tmp252 = &$s253;
                                    separator206 = $tmp252;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp252));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
                                }
                            }
                            $tmp240 = -1;
                            goto $l238;
                            $l238:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p241));
                            p241 = NULL;
                            switch ($tmp240) {
                                case -1: goto $l254;
                            }
                            $l254:;
                        }
                        goto $l230;
                        $l231:;
                    }
                    $tmp211 = -1;
                    goto $l209;
                    $l209:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$104$17212));
                    Iter$104$17212 = NULL;
                    switch ($tmp211) {
                        case -1: goto $l255;
                    }
                    $l255:;
                }
                {
                    $match$109_17256 = p_t->typeKind;
                    panda$core$Int64$init$builtin_int64(&$tmp257, 15);
                    panda$core$Bit $tmp258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$109_17256.$rawValue, $tmp257);
                    if ($tmp258.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result201, &$s259);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp260, 14);
                    panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$109_17256.$rawValue, $tmp260);
                    if ($tmp261.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result201, &$s262);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp263, 17);
                    panda$core$Bit $tmp264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$109_17256.$rawValue, $tmp263);
                    if ($tmp264.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result201, &$s265);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp266, 16);
                    panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$109_17256.$rawValue, $tmp266);
                    if ($tmp267.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result201, &$s268);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$Int64 $tmp272 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
                panda$core$Int64$init$builtin_int64(&$tmp273, 1);
                panda$core$Int64 $tmp274 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp272, $tmp273);
                panda$core$Object* $tmp275 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp274);
                $tmp271 = $tmp275;
                $tmp270 = ((org$pandalanguage$pandac$Type*) $tmp271);
                returnType269 = $tmp270;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp270));
                panda$core$Panda$unref$panda$core$Object($tmp271);
                org$pandalanguage$pandac$Type* $tmp277 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
                $tmp276 = $tmp277;
                panda$core$Bit $tmp278 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(returnType269, $tmp276);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
                if ($tmp278.value) {
                {
                    panda$core$String* $tmp281 = (($fn280) self->$class->vtable[5])(self, returnType269);
                    $tmp279 = $tmp281;
                    panda$core$MutableString$append$panda$core$String(result201, $tmp279);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp279));
                }
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp283, 41);
                panda$core$Char8$init$panda$core$UInt8(&$tmp282, $tmp283);
                panda$core$MutableString$append$panda$core$Char8(result201, $tmp282);
                panda$core$String* $tmp286 = panda$core$MutableString$finish$R$panda$core$String(result201);
                $tmp285 = $tmp286;
                $tmp284 = $tmp285;
                $returnValue88 = $tmp284;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp284));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
                $tmp200 = 0;
                goto $l198;
                $l287:;
                return $returnValue88;
            }
            $l198:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) returnType269));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator206));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result201));
            result201 = NULL;
            separator206 = NULL;
            returnType269 = NULL;
            switch ($tmp200) {
                case 0: goto $l287;
            }
            $l289:;
        }
        }
        else {
        {
            $tmp290 = ((org$pandalanguage$pandac$Symbol*) p_t)->name;
            $returnValue88 = $tmp290;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
            return $returnValue88;
        }
        }
        }
        }
        }
    }
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$escape$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_s) {
    panda$core$String* $returnValue292;
    panda$core$String* $tmp293;
    panda$core$String* $tmp294;
    panda$core$String* $tmp295;
    panda$core$String* $tmp296;
    panda$core$String* $tmp299 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_s, &$s297, &$s298);
    $tmp296 = $tmp299;
    panda$core$String* $tmp302 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp296, &$s300, &$s301);
    $tmp295 = $tmp302;
    panda$core$String* $tmp305 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp295, &$s303, &$s304);
    $tmp294 = $tmp305;
    $tmp293 = $tmp294;
    $returnValue292 = $tmp293;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp295));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp296));
    return $returnValue292;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp310;
    panda$core$String* $tmp315;
    panda$core$String* $tmp316;
    org$pandalanguage$pandac$ClassDecl* cl326 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp327;
    org$pandalanguage$pandac$ClassDecl* $tmp328;
    panda$core$Object* $tmp329;
    panda$core$String* $tmp334;
    org$pandalanguage$pandac$ClassDecl* $tmp335;
    panda$core$Object* $tmp336;
    panda$core$Object* $tmp338;
    panda$core$Int64 $tmp339;
    panda$core$String* $tmp346;
    (($fn308) self->out->$class->vtable[2])(self->out, &$s307);
    panda$core$String* $tmp312 = (($fn311) self->$class->vtable[6])(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    $tmp310 = $tmp312;
    (($fn313) self->out->$class->vtable[4])(self->out, &$s309, $tmp310);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
    panda$core$String* $tmp318 = (($fn317) self->$class->vtable[5])(self, p_t);
    $tmp316 = $tmp318;
    panda$core$String* $tmp320 = (($fn319) self->$class->vtable[6])(self, $tmp316);
    $tmp315 = $tmp320;
    (($fn321) self->out->$class->vtable[4])(self->out, &$s314, $tmp315);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
    panda$core$Bit $tmp322 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_t);
    if ($tmp322.value) {
    {
        int $tmp325;
        {
            panda$core$Object* $tmp330 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
            $tmp329 = $tmp330;
            org$pandalanguage$pandac$ClassDecl* $tmp331 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp329), p_t);
            $tmp328 = $tmp331;
            $tmp327 = $tmp328;
            cl326 = $tmp327;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
            panda$core$Panda$unref$panda$core$Object($tmp329);
            if (((panda$core$Bit) { cl326 != NULL }).value) {
            {
                panda$core$Bit $tmp332 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl326);
                if ($tmp332.value) {
                {
                    panda$core$Object* $tmp337 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                    $tmp336 = $tmp337;
                    panda$core$Int64$init$builtin_int64(&$tmp339, 0);
                    panda$core$Object* $tmp340 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp339);
                    $tmp338 = $tmp340;
                    org$pandalanguage$pandac$ClassDecl* $tmp341 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp336), ((org$pandalanguage$pandac$Type*) $tmp338));
                    $tmp335 = $tmp341;
                    panda$core$String* $tmp343 = (($fn342) self->$class->vtable[25])(self, $tmp335);
                    $tmp334 = $tmp343;
                    (($fn344) self->out->$class->vtable[4])(self->out, &$s333, $tmp334);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
                    panda$core$Panda$unref$panda$core$Object($tmp338);
                    panda$core$Panda$unref$panda$core$Object($tmp336);
                }
                }
                else {
                {
                    panda$core$String* $tmp348 = (($fn347) self->$class->vtable[25])(self, cl326);
                    $tmp346 = $tmp348;
                    (($fn349) self->out->$class->vtable[4])(self->out, &$s345, $tmp346);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
                }
                }
            }
            }
        }
        $tmp325 = -1;
        goto $l323;
        $l323:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl326));
        cl326 = NULL;
        switch ($tmp325) {
            case -1: goto $l350;
        }
        $l350:;
    }
    }
    (($fn352) self->out->$class->vtable[3])(self->out, &$s351);
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Annotations* p_a) {
    (($fn354) self->out->$class->vtable[2])(self->out, &$s353);
    panda$core$Bit $tmp355 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(p_a);
    if ($tmp355.value) {
    {
        (($fn358) self->out->$class->vtable[4])(self->out, &$s356, &$s357);
    }
    }
    panda$core$Bit $tmp359 = org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(p_a);
    if ($tmp359.value) {
    {
        (($fn362) self->out->$class->vtable[4])(self->out, &$s360, &$s361);
    }
    }
    panda$core$Bit $tmp363 = org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(p_a);
    if ($tmp363.value) {
    {
        (($fn366) self->out->$class->vtable[4])(self->out, &$s364, &$s365);
    }
    }
    panda$core$Bit $tmp367 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_a);
    if ($tmp367.value) {
    {
        (($fn370) self->out->$class->vtable[4])(self->out, &$s368, &$s369);
    }
    }
    panda$core$Bit $tmp371 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_a);
    if ($tmp371.value) {
    {
        (($fn374) self->out->$class->vtable[4])(self->out, &$s372, &$s373);
    }
    }
    panda$core$Bit $tmp375 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_a);
    if ($tmp375.value) {
    {
        (($fn378) self->out->$class->vtable[4])(self->out, &$s376, &$s377);
    }
    }
    panda$core$Bit $tmp379 = org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(p_a);
    if ($tmp379.value) {
    {
        (($fn382) self->out->$class->vtable[4])(self->out, &$s380, &$s381);
    }
    }
    (($fn384) self->out->$class->vtable[3])(self->out, &$s383);
}
panda$collections$ListView* org$pandalanguage$pandac$pandadoc$PandaDoc$splitDoc$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Pair$LTpanda$core$String$Cpanda$core$String$GT$GT(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_text) {
    panda$collections$Array* lines388 = NULL;
    panda$collections$Array* $tmp389;
    panda$collections$Array* $tmp390;
    panda$collections$ListView* $tmp392;
    panda$core$RegularExpression* $tmp393;
    panda$core$Object* $tmp397;
    panda$core$Int64 $tmp398;
    panda$core$Object* $tmp402;
    panda$core$Int64 $tmp403;
    panda$core$Int64 spaces405;
    panda$core$Int64 $tmp406;
    panda$collections$Iterator* Iter$191$9410 = NULL;
    panda$collections$Iterator* $tmp411;
    panda$collections$Iterator* $tmp412;
    panda$core$String* line428 = NULL;
    panda$core$String* $tmp429;
    panda$core$Object* $tmp430;
    panda$core$String* $tmp435;
    panda$core$Object* $tmp442;
    panda$collections$ListView* $tmp443;
    panda$core$RegularExpression* $tmp444;
    panda$core$Int64 $tmp448;
    panda$core$Range$LTpanda$core$Int64$GT $tmp457;
    panda$core$Int64 $tmp458;
    panda$core$Bit $tmp460;
    panda$core$String* $tmp474;
    panda$core$Object* $tmp475;
    panda$core$String* $tmp483;
    panda$core$Object* $tmp484;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp486;
    panda$core$Bit $tmp487;
    panda$collections$Array* result495 = NULL;
    panda$collections$Array* $tmp496;
    panda$collections$Array* $tmp497;
    panda$collections$ListView* split499 = NULL;
    panda$collections$ListView* $tmp500;
    panda$collections$ListView* $tmp501;
    panda$core$String* $tmp502;
    panda$core$RegularExpression* $tmp508;
    panda$collections$Iterator* Iter$204$9515 = NULL;
    panda$collections$Iterator* $tmp516;
    panda$collections$Iterator* $tmp517;
    panda$core$String* raw533 = NULL;
    panda$core$String* $tmp534;
    panda$core$Object* $tmp535;
    panda$core$String* s540 = NULL;
    panda$core$String* $tmp541;
    panda$core$String* $tmp542;
    org$pandalanguage$pandac$Pair* $tmp547;
    panda$collections$ListView* parsed553 = NULL;
    panda$collections$ListView* $tmp554;
    panda$collections$ListView* $tmp555;
    panda$core$RegularExpression* $tmp556;
    org$pandalanguage$pandac$Pair* $tmp560;
    panda$core$Object* $tmp562;
    panda$core$Int64 $tmp563;
    panda$core$Object* $tmp568;
    panda$core$Int64 $tmp569;
    panda$collections$ListView* $returnValue577;
    panda$collections$ListView* $tmp578;
    int $tmp387;
    {
        panda$collections$Array* $tmp391 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$core$RegularExpression* $tmp394 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp394, &$s395);
        $tmp393 = $tmp394;
        panda$collections$ListView* $tmp396 = panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT(p_text, $tmp393);
        $tmp392 = $tmp396;
        panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp391, ((panda$collections$CollectionView*) $tmp392));
        $tmp390 = $tmp391;
        $tmp389 = $tmp390;
        lines388 = $tmp389;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp389));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp390));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp392));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
        panda$core$Int64$init$builtin_int64(&$tmp398, 0);
        panda$core$Object* $tmp399 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(lines388, $tmp398);
        $tmp397 = $tmp399;
        panda$core$Bit $tmp401 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((panda$core$String*) $tmp397), &$s400);
        panda$core$Panda$unref$panda$core$Object($tmp397);
        if ($tmp401.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp403, 0);
            panda$core$Object* $tmp404 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(lines388, $tmp403);
            $tmp402 = $tmp404;
            panda$core$Panda$unref$panda$core$Object($tmp402);
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp406, 9223372036854775807);
        spaces405 = $tmp406;
        {
            int $tmp409;
            {
                ITable* $tmp413 = ((panda$collections$Iterable*) lines388)->$class->itable;
                while ($tmp413->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp413 = $tmp413->next;
                }
                $fn415 $tmp414 = $tmp413->methods[0];
                panda$collections$Iterator* $tmp416 = $tmp414(((panda$collections$Iterable*) lines388));
                $tmp412 = $tmp416;
                $tmp411 = $tmp412;
                Iter$191$9410 = $tmp411;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp411));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
                $l417:;
                ITable* $tmp420 = Iter$191$9410->$class->itable;
                while ($tmp420->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp420 = $tmp420->next;
                }
                $fn422 $tmp421 = $tmp420->methods[0];
                panda$core$Bit $tmp423 = $tmp421(Iter$191$9410);
                panda$core$Bit $tmp424 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp423);
                bool $tmp419 = $tmp424.value;
                if (!$tmp419) goto $l418;
                {
                    int $tmp427;
                    {
                        ITable* $tmp431 = Iter$191$9410->$class->itable;
                        while ($tmp431->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp431 = $tmp431->next;
                        }
                        $fn433 $tmp432 = $tmp431->methods[1];
                        panda$core$Object* $tmp434 = $tmp432(Iter$191$9410);
                        $tmp430 = $tmp434;
                        $tmp429 = ((panda$core$String*) $tmp430);
                        line428 = $tmp429;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp429));
                        panda$core$Panda$unref$panda$core$Object($tmp430);
                        panda$core$String* $tmp436 = panda$core$String$trim$R$panda$core$String(line428);
                        $tmp435 = $tmp436;
                        ITable* $tmp438 = ((panda$core$Equatable*) $tmp435)->$class->itable;
                        while ($tmp438->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                            $tmp438 = $tmp438->next;
                        }
                        $fn440 $tmp439 = $tmp438->methods[1];
                        panda$core$Bit $tmp441 = $tmp439(((panda$core$Equatable*) $tmp435), ((panda$core$Equatable*) &$s437));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp435));
                        if ($tmp441.value) {
                        {
                            panda$core$RegularExpression* $tmp445 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                            panda$core$RegularExpression$init$panda$core$String($tmp445, &$s446);
                            $tmp444 = $tmp445;
                            panda$collections$ListView* $tmp447 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(line428, $tmp444);
                            $tmp443 = $tmp447;
                            panda$core$Int64$init$builtin_int64(&$tmp448, 0);
                            ITable* $tmp449 = $tmp443->$class->itable;
                            while ($tmp449->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp449 = $tmp449->next;
                            }
                            $fn451 $tmp450 = $tmp449->methods[0];
                            panda$core$Object* $tmp452 = $tmp450($tmp443, $tmp448);
                            $tmp442 = $tmp452;
                            panda$core$Int64 $tmp453 = panda$core$String$byteLength$R$panda$core$Int64(((panda$core$String*) $tmp442));
                            panda$core$Int64 $tmp454 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(spaces405, $tmp453);
                            spaces405 = $tmp454;
                            panda$core$Panda$unref$panda$core$Object($tmp442);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                        }
                        }
                    }
                    $tmp427 = -1;
                    goto $l425;
                    $l425:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) line428));
                    line428 = NULL;
                    switch ($tmp427) {
                        case -1: goto $l455;
                    }
                    $l455:;
                }
                goto $l417;
                $l418:;
            }
            $tmp409 = -1;
            goto $l407;
            $l407:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$191$9410));
            Iter$191$9410 = NULL;
            switch ($tmp409) {
                case -1: goto $l456;
            }
            $l456:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp458, 0);
        panda$core$Int64 $tmp459 = panda$collections$Array$get_count$R$panda$core$Int64(lines388);
        panda$core$Bit$init$builtin_bit(&$tmp460, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp457, $tmp458, $tmp459, $tmp460);
        int64_t $tmp462 = $tmp457.min.value;
        panda$core$Int64 i461 = { $tmp462 };
        int64_t $tmp464 = $tmp457.max.value;
        bool $tmp465 = $tmp457.inclusive.value;
        if ($tmp465) goto $l472; else goto $l473;
        $l472:;
        if ($tmp462 <= $tmp464) goto $l466; else goto $l468;
        $l473:;
        if ($tmp462 < $tmp464) goto $l466; else goto $l468;
        $l466:;
        {
            panda$core$Object* $tmp476 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(lines388, i461);
            $tmp475 = $tmp476;
            panda$core$String* $tmp477 = panda$core$String$trim$R$panda$core$String(((panda$core$String*) $tmp475));
            $tmp474 = $tmp477;
            ITable* $tmp479 = ((panda$core$Equatable*) $tmp474)->$class->itable;
            while ($tmp479->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                $tmp479 = $tmp479->next;
            }
            $fn481 $tmp480 = $tmp479->methods[1];
            panda$core$Bit $tmp482 = $tmp480(((panda$core$Equatable*) $tmp474), ((panda$core$Equatable*) &$s478));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
            panda$core$Panda$unref$panda$core$Object($tmp475);
            if ($tmp482.value) {
            {
                panda$core$Object* $tmp485 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(lines388, i461);
                $tmp484 = $tmp485;
                panda$core$Bit$init$builtin_bit(&$tmp487, false);
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp486, ((panda$core$Int64$nullable) { spaces405, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp487);
                panda$core$String* $tmp488 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((panda$core$String*) $tmp484), $tmp486);
                $tmp483 = $tmp488;
                panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(lines388, i461, ((panda$core$Object*) $tmp483));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
                panda$core$Panda$unref$panda$core$Object($tmp484);
            }
            }
        }
        $l469:;
        int64_t $tmp490 = $tmp464 - i461.value;
        if ($tmp465) goto $l491; else goto $l492;
        $l491:;
        if ((uint64_t) $tmp490 >= 1) goto $l489; else goto $l468;
        $l492:;
        if ((uint64_t) $tmp490 > 1) goto $l489; else goto $l468;
        $l489:;
        i461.value += 1;
        goto $l466;
        $l468:;
        panda$collections$Array* $tmp498 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp498);
        $tmp497 = $tmp498;
        $tmp496 = $tmp497;
        result495 = $tmp496;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp496));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp497));
        ITable* $tmp504 = ((panda$collections$CollectionView*) lines388)->$class->itable;
        while ($tmp504->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp504 = $tmp504->next;
        }
        $fn506 $tmp505 = $tmp504->methods[2];
        panda$core$String* $tmp507 = $tmp505(((panda$collections$CollectionView*) lines388), &$s503);
        $tmp502 = $tmp507;
        panda$core$RegularExpression* $tmp509 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp509, &$s510);
        $tmp508 = $tmp509;
        panda$collections$ListView* $tmp511 = panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT($tmp502, $tmp508);
        $tmp501 = $tmp511;
        $tmp500 = $tmp501;
        split499 = $tmp500;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp500));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp508));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
        {
            int $tmp514;
            {
                ITable* $tmp518 = ((panda$collections$Iterable*) split499)->$class->itable;
                while ($tmp518->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp518 = $tmp518->next;
                }
                $fn520 $tmp519 = $tmp518->methods[0];
                panda$collections$Iterator* $tmp521 = $tmp519(((panda$collections$Iterable*) split499));
                $tmp517 = $tmp521;
                $tmp516 = $tmp517;
                Iter$204$9515 = $tmp516;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp516));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp517));
                $l522:;
                ITable* $tmp525 = Iter$204$9515->$class->itable;
                while ($tmp525->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp525 = $tmp525->next;
                }
                $fn527 $tmp526 = $tmp525->methods[0];
                panda$core$Bit $tmp528 = $tmp526(Iter$204$9515);
                panda$core$Bit $tmp529 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp528);
                bool $tmp524 = $tmp529.value;
                if (!$tmp524) goto $l523;
                {
                    int $tmp532;
                    {
                        ITable* $tmp536 = Iter$204$9515->$class->itable;
                        while ($tmp536->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp536 = $tmp536->next;
                        }
                        $fn538 $tmp537 = $tmp536->methods[1];
                        panda$core$Object* $tmp539 = $tmp537(Iter$204$9515);
                        $tmp535 = $tmp539;
                        $tmp534 = ((panda$core$String*) $tmp535);
                        raw533 = $tmp534;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp534));
                        panda$core$Panda$unref$panda$core$Object($tmp535);
                        panda$core$String* $tmp543 = panda$core$String$trim$R$panda$core$String(raw533);
                        $tmp542 = $tmp543;
                        $tmp541 = $tmp542;
                        s540 = $tmp541;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp541));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
                        panda$core$Bit $tmp545 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(s540, &$s544);
                        panda$core$Bit $tmp546 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp545);
                        if ($tmp546.value) {
                        {
                            org$pandalanguage$pandac$Pair* $tmp548 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
                            org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp548, ((panda$core$Object*) &$s549), ((panda$core$Object*) s540));
                            $tmp547 = $tmp548;
                            panda$collections$Array$add$panda$collections$Array$T(result495, ((panda$core$Object*) $tmp547));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
                        }
                        }
                        else {
                        {
                            int $tmp552;
                            {
                                panda$core$RegularExpression* $tmp557 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                                panda$core$RegularExpression$init$panda$core$String($tmp557, &$s558);
                                $tmp556 = $tmp557;
                                panda$collections$ListView* $tmp559 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(s540, $tmp556);
                                $tmp555 = $tmp559;
                                $tmp554 = $tmp555;
                                parsed553 = $tmp554;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp554));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp556));
                                if (((panda$core$Bit) { parsed553 != NULL }).value) {
                                {
                                    org$pandalanguage$pandac$Pair* $tmp561 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
                                    panda$core$Int64$init$builtin_int64(&$tmp563, 0);
                                    ITable* $tmp564 = parsed553->$class->itable;
                                    while ($tmp564->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                        $tmp564 = $tmp564->next;
                                    }
                                    $fn566 $tmp565 = $tmp564->methods[0];
                                    panda$core$Object* $tmp567 = $tmp565(parsed553, $tmp563);
                                    $tmp562 = $tmp567;
                                    panda$core$Int64$init$builtin_int64(&$tmp569, 1);
                                    ITable* $tmp570 = parsed553->$class->itable;
                                    while ($tmp570->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                        $tmp570 = $tmp570->next;
                                    }
                                    $fn572 $tmp571 = $tmp570->methods[0];
                                    panda$core$Object* $tmp573 = $tmp571(parsed553, $tmp569);
                                    $tmp568 = $tmp573;
                                    org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp561, ((panda$core$Object*) ((panda$core$String*) $tmp562)), ((panda$core$Object*) ((panda$core$String*) $tmp568)));
                                    $tmp560 = $tmp561;
                                    panda$collections$Array$add$panda$collections$Array$T(result495, ((panda$core$Object*) $tmp560));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp560));
                                    panda$core$Panda$unref$panda$core$Object($tmp568);
                                    panda$core$Panda$unref$panda$core$Object($tmp562);
                                }
                                }
                            }
                            $tmp552 = -1;
                            goto $l550;
                            $l550:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parsed553));
                            parsed553 = NULL;
                            switch ($tmp552) {
                                case -1: goto $l574;
                            }
                            $l574:;
                        }
                        }
                    }
                    $tmp532 = -1;
                    goto $l530;
                    $l530:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s540));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) raw533));
                    raw533 = NULL;
                    s540 = NULL;
                    switch ($tmp532) {
                        case -1: goto $l575;
                    }
                    $l575:;
                }
                goto $l522;
                $l523:;
            }
            $tmp514 = -1;
            goto $l512;
            $l512:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$204$9515));
            Iter$204$9515 = NULL;
            switch ($tmp514) {
                case -1: goto $l576;
            }
            $l576:;
        }
        $tmp578 = ((panda$collections$ListView*) result495);
        $returnValue577 = $tmp578;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp578));
        $tmp387 = 0;
        goto $l385;
        $l579:;
        return $returnValue577;
    }
    $l385:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) split499));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result495));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lines388));
    lines388 = NULL;
    result495 = NULL;
    split499 = NULL;
    switch ($tmp387) {
        case 0: goto $l579;
    }
    $l581:;
    abort();
}
org$pandalanguage$pandac$pandadoc$Markdown* org$pandalanguage$pandac$pandadoc$PandaDoc$getMarkdown$R$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$PandaDoc* self) {
    org$pandalanguage$pandac$pandadoc$Markdown* $returnValue582;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp583;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp584;
    org$pandalanguage$pandac$pandadoc$LinkResolver* $tmp587;
    panda$core$Object* $tmp589;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp585 = (org$pandalanguage$pandac$pandadoc$Markdown*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$class);
    panda$core$MutableMethod* $tmp586 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    org$pandalanguage$pandac$pandadoc$LinkResolver* $tmp588 = (org$pandalanguage$pandac$pandadoc$LinkResolver*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$LinkResolver$class);
    panda$core$Object* $tmp590 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp589 = $tmp590;
    org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ClassDecl$Q($tmp588, ((org$pandalanguage$pandac$Compiler*) $tmp589), self->currentClass);
    $tmp587 = $tmp588;
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp586, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$LinkResolver$resolve$panda$core$String$R$panda$core$String$Q, ((panda$core$Object*) $tmp587));
    org$pandalanguage$pandac$pandadoc$Markdown$init$$LPpanda$core$String$RP$EQ$AM$GT$LPpanda$core$String$Q$RP$Q($tmp585, ((panda$core$Object*) $tmp586));
    $tmp584 = $tmp585;
    $tmp583 = $tmp584;
    $returnValue582 = $tmp583;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp583));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp586));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp587));
    panda$core$Panda$unref$panda$core$Object($tmp589);
    return $returnValue582;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_doccomment) {
    panda$core$String* summary595 = NULL;
    panda$core$String$Index$nullable index596;
    panda$core$String* $tmp599;
    panda$core$String* $tmp600;
    panda$core$String* $tmp601;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp602;
    panda$core$Bit $tmp603;
    panda$core$String* $tmp605;
    panda$core$String* $tmp606;
    org$pandalanguage$pandac$pandadoc$Markdown* md607 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp608;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp609;
    panda$core$Int64 oldLevel614;
    panda$core$Int64 $tmp615;
    panda$core$String* processedSummary616 = NULL;
    panda$core$String* $tmp617;
    panda$core$String* $tmp618;
    panda$core$String* $tmp619;
    panda$core$String* $tmp627;
    int $tmp594;
    {
        memset(&summary595, 0, sizeof(summary595));
        panda$core$String$Index$nullable $tmp598 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(p_doccomment, &$s597);
        index596 = $tmp598;
        if (((panda$core$Bit) { index596.nonnull }).value) {
        {
            {
                $tmp599 = summary595;
                panda$core$Bit$init$builtin_bit(&$tmp603, true);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp602, ((panda$core$String$Index$nullable) { .nonnull = false }), index596, $tmp603);
                panda$core$String* $tmp604 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_doccomment, $tmp602);
                $tmp601 = $tmp604;
                $tmp600 = $tmp601;
                summary595 = $tmp600;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp600));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
            }
        }
        }
        else {
        {
            {
                $tmp605 = summary595;
                $tmp606 = p_doccomment;
                summary595 = $tmp606;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp606));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp605));
            }
        }
        }
        org$pandalanguage$pandac$pandadoc$Markdown* $tmp611 = (($fn610) self->$class->vtable[10])(self);
        $tmp609 = $tmp611;
        $tmp608 = $tmp609;
        md607 = $tmp608;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp608));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
        (($fn613) self->out->$class->vtable[2])(self->out, &$s612);
        oldLevel614 = self->out->out->level;
        panda$core$Int64$init$builtin_int64(&$tmp615, 0);
        self->out->out->level = $tmp615;
        panda$core$String* $tmp621 = (($fn620) md607->$class->vtable[2])(md607, summary595);
        $tmp619 = $tmp621;
        panda$core$String* $tmp623 = (($fn622) self->$class->vtable[21])(self, $tmp619);
        $tmp618 = $tmp623;
        $tmp617 = $tmp618;
        processedSummary616 = $tmp617;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
        (($fn625) self->out->$class->vtable[4])(self->out, &$s624, processedSummary616);
        panda$core$String* $tmp629 = (($fn628) md607->$class->vtable[2])(md607, p_doccomment);
        $tmp627 = $tmp629;
        (($fn630) self->out->$class->vtable[4])(self->out, &$s626, $tmp627);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp627));
        self->out->out->level = oldLevel614;
        (($fn632) self->out->$class->vtable[3])(self->out, &$s631);
    }
    $tmp594 = -1;
    goto $l592;
    $l592:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) processedSummary616));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) md607));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) summary595));
    md607 = NULL;
    processedSummary616 = NULL;
    switch ($tmp594) {
        case -1: goto $l633;
    }
    $l633:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeSee$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_s) {
    panda$core$Bit $tmp637;
    panda$core$String* $tmp639;
    panda$core$String* $tmp640;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp641;
    panda$core$String* $tmp644;
    panda$core$String* $tmp645;
    panda$core$Bit $tmp634 = panda$core$Bit$$NOT$R$panda$core$Bit(self->haveSees);
    if ($tmp634.value) {
    {
        (($fn636) self->out->$class->vtable[2])(self->out, &$s635);
        panda$core$Bit$init$builtin_bit(&$tmp637, true);
        self->haveSees = $tmp637;
    }
    }
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp643 = (($fn642) self->$class->vtable[10])(self);
    $tmp641 = $tmp643;
    panda$core$String* $tmp647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s646, p_s);
    $tmp645 = $tmp647;
    panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp645, &$s648);
    $tmp644 = $tmp649;
    panda$core$String* $tmp651 = (($fn650) $tmp641->$class->vtable[2])($tmp641, $tmp644);
    $tmp640 = $tmp651;
    panda$core$String* $tmp653 = (($fn652) self->$class->vtable[21])(self, $tmp640);
    $tmp639 = $tmp653;
    (($fn654) self->out->$class->vtable[4])(self->out, &$s638, $tmp639);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp640));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp641));
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$finishSees(org$pandalanguage$pandac$pandadoc$PandaDoc* self) {
    panda$core$Bit $tmp657;
    if (self->haveSees.value) {
    {
        (($fn656) self->out->$class->vtable[3])(self->out, &$s655);
        panda$core$Bit$init$builtin_bit(&$tmp657, false);
        self->haveSees = $tmp657;
    }
    }
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $returnValue658;
    panda$core$Bit $tmp660 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp661 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp660);
    bool $tmp659 = $tmp661.value;
    if (!$tmp659) goto $l662;
    panda$core$Bit $tmp663 = org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp664 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp663);
    $tmp659 = $tmp664.value;
    $l662:;
    panda$core$Bit $tmp665 = { $tmp659 };
    $returnValue658 = $tmp665;
    return $returnValue658;
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $returnValue667;
    panda$core$Bit $tmp668 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(p_f->annotations);
    panda$core$Bit $tmp669 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp668);
    $returnValue667 = $tmp669;
    return $returnValue667;
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* $tmp672;
    panda$core$Bit $returnValue683;
    panda$core$Bit $tmp684;
    panda$core$String* $tmp673 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(p_m);
    $tmp672 = $tmp673;
    panda$core$Bit $tmp675 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp672, &$s674);
    bool $tmp671 = $tmp675.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
    if (!$tmp671) goto $l676;
    ITable* $tmp678 = ((panda$core$Equatable*) self->currentClass->name)->$class->itable;
    while ($tmp678->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp678 = $tmp678->next;
    }
    $fn680 $tmp679 = $tmp678->methods[1];
    panda$core$Bit $tmp681 = $tmp679(((panda$core$Equatable*) self->currentClass->name), ((panda$core$Equatable*) &$s677));
    $tmp671 = $tmp681.value;
    $l676:;
    panda$core$Bit $tmp682 = { $tmp671 };
    if ($tmp682.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp684, false);
        $returnValue683 = $tmp684;
        return $returnValue683;
    }
    }
    panda$core$Bit $tmp687 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp688 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp687);
    bool $tmp686 = $tmp688.value;
    if (!$tmp686) goto $l689;
    panda$core$Bit $tmp690 = org$pandalanguage$pandac$Annotations$isSynthetic$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp691 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp690);
    $tmp686 = $tmp691.value;
    $l689:;
    panda$core$Bit $tmp692 = { $tmp686 };
    $returnValue683 = $tmp692;
    return $returnValue683;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$collections$ListView* split697 = NULL;
    panda$collections$ListView* $tmp698;
    panda$collections$ListView* $tmp699;
    panda$core$Object* $tmp702;
    panda$core$Int64 $tmp703;
    panda$collections$Iterator* Iter$278$13712 = NULL;
    panda$collections$Iterator* $tmp713;
    panda$collections$Iterator* $tmp714;
    panda$collections$ListView* $tmp715;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp716;
    panda$core$Int64 $tmp717;
    panda$core$Bit $tmp718;
    org$pandalanguage$pandac$Pair* tag738 = NULL;
    org$pandalanguage$pandac$Pair* $tmp739;
    panda$core$Object* $tmp740;
    panda$core$String* $match$279_17748 = NULL;
    panda$core$String* $tmp749;
    panda$core$Object* $tmp753;
    panda$core$String* $tmp755;
    panda$core$String* $tmp756;
    if (((panda$core$Bit) { p_f->doccomment != NULL }).value) {
    {
        int $tmp696;
        {
            panda$collections$ListView* $tmp701 = (($fn700) self->$class->vtable[9])(self, p_f->doccomment);
            $tmp699 = $tmp701;
            $tmp698 = $tmp699;
            split697 = $tmp698;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp698));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp699));
            panda$core$Int64$init$builtin_int64(&$tmp703, 0);
            ITable* $tmp704 = split697->$class->itable;
            while ($tmp704->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp704 = $tmp704->next;
            }
            $fn706 $tmp705 = $tmp704->methods[0];
            panda$core$Object* $tmp707 = $tmp705(split697, $tmp703);
            $tmp702 = $tmp707;
            (($fn708) self->$class->vtable[11])(self, ((panda$core$String*) ((org$pandalanguage$pandac$Pair*) $tmp702)->second));
            panda$core$Panda$unref$panda$core$Object($tmp702);
            {
                int $tmp711;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp717, 1);
                    panda$core$Bit$init$builtin_bit(&$tmp718, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp716, ((panda$core$Int64$nullable) { $tmp717, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp718);
                    ITable* $tmp719 = split697->$class->itable;
                    while ($tmp719->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp719 = $tmp719->next;
                    }
                    $fn721 $tmp720 = $tmp719->methods[2];
                    panda$collections$ListView* $tmp722 = $tmp720(split697, $tmp716);
                    $tmp715 = $tmp722;
                    ITable* $tmp723 = ((panda$collections$Iterable*) $tmp715)->$class->itable;
                    while ($tmp723->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp723 = $tmp723->next;
                    }
                    $fn725 $tmp724 = $tmp723->methods[0];
                    panda$collections$Iterator* $tmp726 = $tmp724(((panda$collections$Iterable*) $tmp715));
                    $tmp714 = $tmp726;
                    $tmp713 = $tmp714;
                    Iter$278$13712 = $tmp713;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp713));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp714));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp715));
                    $l727:;
                    ITable* $tmp730 = Iter$278$13712->$class->itable;
                    while ($tmp730->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp730 = $tmp730->next;
                    }
                    $fn732 $tmp731 = $tmp730->methods[0];
                    panda$core$Bit $tmp733 = $tmp731(Iter$278$13712);
                    panda$core$Bit $tmp734 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp733);
                    bool $tmp729 = $tmp734.value;
                    if (!$tmp729) goto $l728;
                    {
                        int $tmp737;
                        {
                            ITable* $tmp741 = Iter$278$13712->$class->itable;
                            while ($tmp741->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp741 = $tmp741->next;
                            }
                            $fn743 $tmp742 = $tmp741->methods[1];
                            panda$core$Object* $tmp744 = $tmp742(Iter$278$13712);
                            $tmp740 = $tmp744;
                            $tmp739 = ((org$pandalanguage$pandac$Pair*) $tmp740);
                            tag738 = $tmp739;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp739));
                            panda$core$Panda$unref$panda$core$Object($tmp740);
                            int $tmp747;
                            {
                                $tmp749 = ((panda$core$String*) tag738->first);
                                $match$279_17748 = $tmp749;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp749));
                                panda$core$Bit $tmp751 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$279_17748, &$s750);
                                if ($tmp751.value) {
                                {
                                    (($fn752) self->$class->vtable[12])(self, ((panda$core$String*) tag738->second));
                                }
                                }
                                else {
                                {
                                    panda$core$Object* $tmp754 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                    $tmp753 = $tmp754;
                                    panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s757, ((panda$core$String*) tag738->first));
                                    $tmp756 = $tmp758;
                                    panda$core$String* $tmp760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp756, &$s759);
                                    $tmp755 = $tmp760;
                                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp753), ((org$pandalanguage$pandac$Symbol*) p_f)->position, $tmp755);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp755));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp756));
                                    panda$core$Panda$unref$panda$core$Object($tmp753);
                                }
                                }
                            }
                            $tmp747 = -1;
                            goto $l745;
                            $l745:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp749));
                            switch ($tmp747) {
                                case -1: goto $l761;
                            }
                            $l761:;
                        }
                        $tmp737 = -1;
                        goto $l735;
                        $l735:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag738));
                        tag738 = NULL;
                        switch ($tmp737) {
                            case -1: goto $l762;
                        }
                        $l762:;
                    }
                    goto $l727;
                    $l728:;
                }
                $tmp711 = -1;
                goto $l709;
                $l709:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$278$13712));
                Iter$278$13712 = NULL;
                switch ($tmp711) {
                    case -1: goto $l763;
                }
                $l763:;
            }
            (($fn764) self->$class->vtable[13])(self);
        }
        $tmp696 = -1;
        goto $l694;
        $l694:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) split697));
        split697 = NULL;
        switch ($tmp696) {
            case -1: goto $l765;
        }
        $l765:;
    }
    }
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Type* $tmp771;
    panda$core$Bit $tmp767 = (($fn766) self->$class->vtable[14])(self, p_cl);
    panda$core$Bit $tmp768 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp767);
    if ($tmp768.value) {
    {
        return;
    }
    }
    (($fn770) self->out->$class->vtable[2])(self->out, &$s769);
    org$pandalanguage$pandac$Type* $tmp772 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    $tmp771 = $tmp772;
    (($fn773) self->$class->vtable[7])(self, $tmp771);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp771));
    if (((panda$core$Bit) { p_cl->doccomment != NULL }).value) {
    {
        (($fn774) self->$class->vtable[11])(self, p_cl->doccomment);
    }
    }
    (($fn776) self->out->$class->vtable[3])(self->out, &$s775);
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Object* $tmp784;
    panda$core$Int64 $tmp786;
    panda$core$String* kind793 = NULL;
    org$pandalanguage$pandac$FieldDecl$Kind $match$314_9794;
    panda$core$Int64 $tmp795;
    panda$core$String* $tmp797;
    panda$core$String* $tmp798;
    panda$core$Int64 $tmp800;
    panda$core$String* $tmp802;
    panda$core$String* $tmp803;
    panda$core$Int64 $tmp805;
    panda$core$String* $tmp807;
    panda$core$String* $tmp808;
    panda$core$Int64 $tmp810;
    panda$core$String* $tmp812;
    panda$core$String* $tmp813;
    int $tmp779;
    {
        panda$core$Bit $tmp781 = (($fn780) self->$class->vtable[15])(self, p_f);
        panda$core$Bit $tmp782 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp781);
        if ($tmp782.value) {
        {
            $tmp779 = 0;
            goto $l777;
            $l783:;
            return;
        }
        }
        panda$core$Object* $tmp785 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp784 = $tmp785;
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp784), p_f);
        panda$core$Panda$unref$panda$core$Object($tmp784);
        panda$core$Int64$init$builtin_int64(&$tmp786, 2);
        panda$core$Bit $tmp787 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_f->resolved.$rawValue, $tmp786);
        if ($tmp787.value) {
        {
            $tmp779 = 1;
            goto $l777;
            $l788:;
            return;
        }
        }
        (($fn790) self->out->$class->vtable[2])(self->out, &$s789);
        (($fn792) self->out->$class->vtable[4])(self->out, &$s791, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
        memset(&kind793, 0, sizeof(kind793));
        {
            $match$314_9794 = p_f->fieldKind;
            panda$core$Int64$init$builtin_int64(&$tmp795, 0);
            panda$core$Bit $tmp796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$314_9794.$rawValue, $tmp795);
            if ($tmp796.value) {
            {
                {
                    $tmp797 = kind793;
                    $tmp798 = &$s799;
                    kind793 = $tmp798;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp798));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp797));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp800, 1);
            panda$core$Bit $tmp801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$314_9794.$rawValue, $tmp800);
            if ($tmp801.value) {
            {
                {
                    $tmp802 = kind793;
                    $tmp803 = &$s804;
                    kind793 = $tmp803;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp803));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp802));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp805, 2);
            panda$core$Bit $tmp806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$314_9794.$rawValue, $tmp805);
            if ($tmp806.value) {
            {
                {
                    $tmp807 = kind793;
                    $tmp808 = &$s809;
                    kind793 = $tmp808;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp808));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp807));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp810, 3);
            panda$core$Bit $tmp811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$314_9794.$rawValue, $tmp810);
            if ($tmp811.value) {
            {
                {
                    $tmp812 = kind793;
                    $tmp813 = &$s814;
                    kind793 = $tmp813;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp813));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
                }
            }
            }
            }
            }
            }
        }
        (($fn816) self->out->$class->vtable[4])(self->out, &$s815, kind793);
        (($fn817) self->$class->vtable[8])(self, p_f->annotations);
        (($fn818) self->$class->vtable[7])(self, p_f->type);
        (($fn819) self->$class->vtable[17])(self, p_f);
        (($fn821) self->out->$class->vtable[3])(self->out, &$s820);
    }
    $tmp779 = -1;
    goto $l777;
    $l777:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) kind793));
    switch ($tmp779) {
        case 1: goto $l788;
        case -1: goto $l822;
        case 0: goto $l783;
    }
    $l822:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$getDocComment$org$pandalanguage$pandac$MethodDecl$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* $tmp825;
    org$pandalanguage$pandac$MethodDecl* overridden833 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp834;
    org$pandalanguage$pandac$MethodDecl* $tmp835;
    panda$core$Object* $tmp836;
    panda$core$Object* $tmp839;
    panda$core$String* $returnValue842;
    panda$core$String* $tmp843;
    panda$core$String* result846 = NULL;
    panda$core$String* $tmp847;
    panda$core$String* $tmp848;
    panda$core$Object* $tmp851;
    panda$core$String* $tmp853;
    panda$core$String* $tmp855;
    panda$core$String* $tmp856;
    panda$core$String* $tmp857;
    panda$core$String* $tmp863;
    panda$core$String* $tmp866;
    panda$core$String* $tmp870;
    bool $tmp823 = ((panda$core$Bit) { p_m->doccomment != NULL }).value;
    if (!$tmp823) goto $l824;
    panda$core$String* $tmp826 = panda$core$String$trim$R$panda$core$String(p_m->doccomment);
    $tmp825 = $tmp826;
    panda$core$Bit $tmp828 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp825, &$s827);
    $tmp823 = $tmp828.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp825));
    $l824:;
    panda$core$Bit $tmp829 = { $tmp823 };
    if ($tmp829.value) {
    {
        int $tmp832;
        {
            panda$core$Object* $tmp837 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
            $tmp836 = $tmp837;
            org$pandalanguage$pandac$MethodDecl* $tmp838 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp836), p_m);
            $tmp835 = $tmp838;
            $tmp834 = $tmp835;
            overridden833 = $tmp834;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp834));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp835));
            panda$core$Panda$unref$panda$core$Object($tmp836);
            if (((panda$core$Bit) { overridden833 == NULL }).value) {
            {
                panda$core$Object* $tmp840 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp839 = $tmp840;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp839), ((org$pandalanguage$pandac$Symbol*) p_m)->position, &$s841);
                panda$core$Panda$unref$panda$core$Object($tmp839);
                $tmp843 = NULL;
                $returnValue842 = $tmp843;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp843));
                $tmp832 = 0;
                goto $l830;
                $l844:;
                return $returnValue842;
            }
            }
            panda$core$String* $tmp850 = (($fn849) self->$class->vtable[20])(self, overridden833);
            $tmp848 = $tmp850;
            $tmp847 = $tmp848;
            result846 = $tmp847;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp847));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp848));
            if (((panda$core$Bit) { result846 == NULL }).value) {
            {
                panda$core$Object* $tmp852 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp851 = $tmp852;
                panda$core$String* $tmp858 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden833);
                $tmp857 = $tmp858;
                panda$core$String* $tmp859 = panda$core$String$convert$R$panda$core$String($tmp857);
                $tmp856 = $tmp859;
                panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp856, &$s860);
                $tmp855 = $tmp861;
                panda$core$String* $tmp862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s854, $tmp855);
                $tmp853 = $tmp862;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp851), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp853);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp853));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp855));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp856));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp857));
                panda$core$Panda$unref$panda$core$Object($tmp851);
                $tmp863 = NULL;
                $returnValue842 = $tmp863;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp863));
                $tmp832 = 1;
                goto $l830;
                $l864:;
                return $returnValue842;
            }
            }
            $tmp866 = result846;
            $returnValue842 = $tmp866;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp866));
            $tmp832 = 2;
            goto $l830;
            $l867:;
            return $returnValue842;
        }
        $l830:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result846));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) overridden833));
        overridden833 = NULL;
        result846 = NULL;
        switch ($tmp832) {
            case 0: goto $l844;
            case 2: goto $l867;
            case 1: goto $l864;
        }
        $l869:;
    }
    }
    $tmp870 = p_m->doccomment;
    $returnValue842 = $tmp870;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp870));
    return $returnValue842;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$stripParagraph$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_s) {
    panda$collections$ListView* parsed875 = NULL;
    panda$collections$ListView* $tmp876;
    panda$collections$ListView* $tmp877;
    panda$core$RegularExpression* $tmp878;
    panda$core$String* $returnValue882;
    panda$core$String* $tmp883;
    panda$core$Object* $tmp884;
    panda$core$Int64 $tmp885;
    panda$core$String* $tmp892;
    int $tmp874;
    {
        panda$core$RegularExpression* $tmp879 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp879, &$s880);
        $tmp878 = $tmp879;
        panda$collections$ListView* $tmp881 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(p_s, $tmp878);
        $tmp877 = $tmp881;
        $tmp876 = $tmp877;
        parsed875 = $tmp876;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp876));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp877));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp878));
        if (((panda$core$Bit) { parsed875 != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp885, 0);
            ITable* $tmp886 = parsed875->$class->itable;
            while ($tmp886->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp886 = $tmp886->next;
            }
            $fn888 $tmp887 = $tmp886->methods[0];
            panda$core$Object* $tmp889 = $tmp887(parsed875, $tmp885);
            $tmp884 = $tmp889;
            $tmp883 = ((panda$core$String*) $tmp884);
            $returnValue882 = $tmp883;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp883));
            panda$core$Panda$unref$panda$core$Object($tmp884);
            $tmp874 = 0;
            goto $l872;
            $l890:;
            return $returnValue882;
        }
        }
        $tmp892 = p_s;
        $returnValue882 = $tmp892;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp892));
        $tmp874 = 1;
        goto $l872;
        $l893:;
        return $returnValue882;
    }
    $l872:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parsed875));
    parsed875 = NULL;
    switch ($tmp874) {
        case 1: goto $l893;
        case 0: goto $l890;
    }
    $l895:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* c899 = NULL;
    panda$core$String* $tmp900;
    panda$core$String* $tmp901;
    panda$collections$ListView* split905 = NULL;
    panda$collections$ListView* $tmp906;
    panda$collections$ListView* $tmp907;
    panda$core$Object* $tmp910;
    panda$core$Int64 $tmp911;
    panda$collections$Iterator* Iter$365$9920 = NULL;
    panda$collections$Iterator* $tmp921;
    panda$collections$Iterator* $tmp922;
    panda$collections$ListView* $tmp923;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp924;
    panda$core$Int64 $tmp925;
    panda$core$Bit $tmp926;
    org$pandalanguage$pandac$Pair* tag946 = NULL;
    org$pandalanguage$pandac$Pair* $tmp947;
    panda$core$Object* $tmp948;
    panda$core$String* $match$366_13956 = NULL;
    panda$core$String* $tmp957;
    panda$collections$ListView* split963 = NULL;
    panda$collections$ListView* $tmp964;
    panda$collections$ListView* $tmp965;
    panda$core$RegularExpression* $tmp966;
    panda$core$Object* $tmp970;
    panda$core$String* $tmp972;
    panda$core$String* $tmp973;
    panda$core$Object* $tmp981;
    panda$core$Int64 $tmp982;
    panda$core$String* $tmp987;
    panda$core$String* $tmp988;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp989;
    panda$core$Object* $tmp992;
    panda$core$Int64 $tmp993;
    panda$core$String* $tmp1005;
    panda$core$String* $tmp1006;
    panda$core$String* $tmp1007;
    panda$core$String* $tmp1008;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp1009;
    panda$core$Object* $tmp1019;
    panda$core$String* $tmp1021;
    panda$core$String* $tmp1022;
    int $tmp898;
    {
        panda$core$String* $tmp903 = (($fn902) self->$class->vtable[20])(self, p_m);
        $tmp901 = $tmp903;
        $tmp900 = $tmp901;
        c899 = $tmp900;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp900));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp901));
        if (((panda$core$Bit) { c899 == NULL }).value) {
        {
            $tmp898 = 0;
            goto $l896;
            $l904:;
            return;
        }
        }
        panda$collections$ListView* $tmp909 = (($fn908) self->$class->vtable[9])(self, c899);
        $tmp907 = $tmp909;
        $tmp906 = $tmp907;
        split905 = $tmp906;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp906));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp907));
        panda$core$Int64$init$builtin_int64(&$tmp911, 0);
        ITable* $tmp912 = split905->$class->itable;
        while ($tmp912->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp912 = $tmp912->next;
        }
        $fn914 $tmp913 = $tmp912->methods[0];
        panda$core$Object* $tmp915 = $tmp913(split905, $tmp911);
        $tmp910 = $tmp915;
        (($fn916) self->$class->vtable[11])(self, ((panda$core$String*) ((org$pandalanguage$pandac$Pair*) $tmp910)->second));
        panda$core$Panda$unref$panda$core$Object($tmp910);
        {
            int $tmp919;
            {
                panda$core$Int64$init$builtin_int64(&$tmp925, 1);
                panda$core$Bit$init$builtin_bit(&$tmp926, false);
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp924, ((panda$core$Int64$nullable) { $tmp925, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp926);
                ITable* $tmp927 = split905->$class->itable;
                while ($tmp927->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp927 = $tmp927->next;
                }
                $fn929 $tmp928 = $tmp927->methods[2];
                panda$collections$ListView* $tmp930 = $tmp928(split905, $tmp924);
                $tmp923 = $tmp930;
                ITable* $tmp931 = ((panda$collections$Iterable*) $tmp923)->$class->itable;
                while ($tmp931->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp931 = $tmp931->next;
                }
                $fn933 $tmp932 = $tmp931->methods[0];
                panda$collections$Iterator* $tmp934 = $tmp932(((panda$collections$Iterable*) $tmp923));
                $tmp922 = $tmp934;
                $tmp921 = $tmp922;
                Iter$365$9920 = $tmp921;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp921));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp922));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp923));
                $l935:;
                ITable* $tmp938 = Iter$365$9920->$class->itable;
                while ($tmp938->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp938 = $tmp938->next;
                }
                $fn940 $tmp939 = $tmp938->methods[0];
                panda$core$Bit $tmp941 = $tmp939(Iter$365$9920);
                panda$core$Bit $tmp942 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp941);
                bool $tmp937 = $tmp942.value;
                if (!$tmp937) goto $l936;
                {
                    int $tmp945;
                    {
                        ITable* $tmp949 = Iter$365$9920->$class->itable;
                        while ($tmp949->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp949 = $tmp949->next;
                        }
                        $fn951 $tmp950 = $tmp949->methods[1];
                        panda$core$Object* $tmp952 = $tmp950(Iter$365$9920);
                        $tmp948 = $tmp952;
                        $tmp947 = ((org$pandalanguage$pandac$Pair*) $tmp948);
                        tag946 = $tmp947;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp947));
                        panda$core$Panda$unref$panda$core$Object($tmp948);
                        int $tmp955;
                        {
                            $tmp957 = ((panda$core$String*) tag946->first);
                            $match$366_13956 = $tmp957;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp957));
                            panda$core$Bit $tmp959 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$366_13956, &$s958);
                            if ($tmp959.value) {
                            {
                                int $tmp962;
                                {
                                    panda$core$RegularExpression* $tmp967 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                                    panda$core$RegularExpression$init$panda$core$String($tmp967, &$s968);
                                    $tmp966 = $tmp967;
                                    panda$collections$ListView* $tmp969 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(((panda$core$String*) tag946->second), $tmp966);
                                    $tmp965 = $tmp969;
                                    $tmp964 = $tmp965;
                                    split963 = $tmp964;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp964));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp965));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp966));
                                    if (((panda$core$Bit) { split963 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp971 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                        $tmp970 = $tmp971;
                                        panda$core$String* $tmp975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s974, ((panda$core$String*) tag946->second));
                                        $tmp973 = $tmp975;
                                        panda$core$String* $tmp977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp973, &$s976);
                                        $tmp972 = $tmp977;
                                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp970), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp972);
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp972));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp973));
                                        panda$core$Panda$unref$panda$core$Object($tmp970);
                                        $tmp962 = 0;
                                        goto $l960;
                                        $l978:;
                                        $tmp955 = 0;
                                        goto $l953;
                                        $l979:;
                                        $tmp945 = 0;
                                        goto $l943;
                                        $l980:;
                                        goto $l935;
                                    }
                                    }
                                    panda$core$Int64$init$builtin_int64(&$tmp982, 0);
                                    ITable* $tmp983 = split963->$class->itable;
                                    while ($tmp983->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                        $tmp983 = $tmp983->next;
                                    }
                                    $fn985 $tmp984 = $tmp983->methods[0];
                                    panda$core$Object* $tmp986 = $tmp984(split963, $tmp982);
                                    $tmp981 = $tmp986;
                                    org$pandalanguage$pandac$pandadoc$Markdown* $tmp991 = (($fn990) self->$class->vtable[10])(self);
                                    $tmp989 = $tmp991;
                                    panda$core$Int64$init$builtin_int64(&$tmp993, 1);
                                    ITable* $tmp994 = split963->$class->itable;
                                    while ($tmp994->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                        $tmp994 = $tmp994->next;
                                    }
                                    $fn996 $tmp995 = $tmp994->methods[0];
                                    panda$core$Object* $tmp997 = $tmp995(split963, $tmp993);
                                    $tmp992 = $tmp997;
                                    panda$core$String* $tmp999 = (($fn998) $tmp989->$class->vtable[2])($tmp989, ((panda$core$String*) $tmp992));
                                    $tmp988 = $tmp999;
                                    panda$core$String* $tmp1001 = (($fn1000) self->$class->vtable[21])(self, $tmp988);
                                    $tmp987 = $tmp1001;
                                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->params, ((panda$collections$Key*) ((panda$core$String*) $tmp981)), ((panda$core$Object*) $tmp987));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp987));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp988));
                                    panda$core$Panda$unref$panda$core$Object($tmp992);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
                                    panda$core$Panda$unref$panda$core$Object($tmp981);
                                }
                                $tmp962 = -1;
                                goto $l960;
                                $l960:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) split963));
                                split963 = NULL;
                                switch ($tmp962) {
                                    case 0: goto $l978;
                                    case -1: goto $l1002;
                                }
                                $l1002:;
                            }
                            }
                            else {
                            panda$core$Bit $tmp1004 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$366_13956, &$s1003);
                            if ($tmp1004.value) {
                            {
                                {
                                    $tmp1005 = self->returns;
                                    org$pandalanguage$pandac$pandadoc$Markdown* $tmp1011 = (($fn1010) self->$class->vtable[10])(self);
                                    $tmp1009 = $tmp1011;
                                    panda$core$String* $tmp1013 = (($fn1012) $tmp1009->$class->vtable[2])($tmp1009, ((panda$core$String*) tag946->second));
                                    $tmp1008 = $tmp1013;
                                    panda$core$String* $tmp1015 = (($fn1014) self->$class->vtable[21])(self, $tmp1008);
                                    $tmp1007 = $tmp1015;
                                    $tmp1006 = $tmp1007;
                                    self->returns = $tmp1006;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1006));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1007));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1008));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1009));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1005));
                                }
                            }
                            }
                            else {
                            panda$core$Bit $tmp1017 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$366_13956, &$s1016);
                            if ($tmp1017.value) {
                            {
                                (($fn1018) self->$class->vtable[12])(self, ((panda$core$String*) tag946->second));
                            }
                            }
                            else {
                            {
                                panda$core$Object* $tmp1020 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                $tmp1019 = $tmp1020;
                                panda$core$String* $tmp1024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1023, ((panda$core$String*) tag946->first));
                                $tmp1022 = $tmp1024;
                                panda$core$String* $tmp1026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1022, &$s1025);
                                $tmp1021 = $tmp1026;
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1019), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp1021);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1021));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1022));
                                panda$core$Panda$unref$panda$core$Object($tmp1019);
                            }
                            }
                            }
                            }
                        }
                        $tmp955 = -1;
                        goto $l953;
                        $l953:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp957));
                        switch ($tmp955) {
                            case -1: goto $l1027;
                            case 0: goto $l979;
                        }
                        $l1027:;
                    }
                    $tmp945 = -1;
                    goto $l943;
                    $l943:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag946));
                    tag946 = NULL;
                    switch ($tmp945) {
                        case -1: goto $l1028;
                        case 0: goto $l980;
                    }
                    $l1028:;
                }
                goto $l935;
                $l936:;
            }
            $tmp919 = -1;
            goto $l917;
            $l917:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$365$9920));
            Iter$365$9920 = NULL;
            switch ($tmp919) {
                case -1: goto $l1029;
            }
            $l1029:;
        }
        (($fn1030) self->$class->vtable[13])(self);
    }
    $tmp898 = -1;
    goto $l896;
    $l896:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) split905));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c899));
    c899 = NULL;
    split905 = NULL;
    switch ($tmp898) {
        case -1: goto $l1031;
        case 0: goto $l904;
    }
    $l1031:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* $tmp1035;
    panda$core$String* $tmp1036;
    panda$core$Object* $tmp1041;
    panda$core$Int64 $tmp1043;
    panda$core$String* tag1046 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind $match$396_91047;
    panda$core$Int64 $tmp1048;
    panda$core$String* $tmp1050;
    panda$core$String* $tmp1051;
    panda$core$Int64 $tmp1053;
    panda$core$String* $tmp1055;
    panda$core$String* $tmp1056;
    panda$core$Int64 $tmp1058;
    panda$core$String* $tmp1060;
    panda$core$String* $tmp1061;
    panda$core$String* $tmp1065;
    org$pandalanguage$pandac$Annotations* annotations1070 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp1071;
    panda$core$Object* $tmp1072;
    panda$core$Int64 $tmp1075;
    panda$collections$Iterator* Iter$413$91084 = NULL;
    panda$collections$Iterator* $tmp1085;
    panda$collections$Iterator* $tmp1086;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1102 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1103;
    panda$core$Object* $tmp1104;
    panda$core$String* desc1114 = NULL;
    panda$core$String* $tmp1115;
    panda$core$Object* $tmp1116;
    org$pandalanguage$pandac$Type* $tmp1126;
    int $tmp1034;
    {
        {
            $tmp1035 = self->returns;
            $tmp1036 = NULL;
            self->returns = $tmp1036;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1036));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1035));
        }
        panda$collections$HashMap$clear(self->params);
        panda$core$Bit $tmp1038 = (($fn1037) self->$class->vtable[16])(self, p_m);
        panda$core$Bit $tmp1039 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1038);
        if ($tmp1039.value) {
        {
            $tmp1034 = 0;
            goto $l1032;
            $l1040:;
            return;
        }
        }
        panda$core$Object* $tmp1042 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1041 = $tmp1042;
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(((org$pandalanguage$pandac$Compiler*) $tmp1041), p_m);
        panda$core$Panda$unref$panda$core$Object($tmp1041);
        panda$core$Int64$init$builtin_int64(&$tmp1043, 2);
        panda$core$Bit $tmp1044 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_m->resolved.$rawValue, $tmp1043);
        if ($tmp1044.value) {
        {
            $tmp1034 = 1;
            goto $l1032;
            $l1045:;
            return;
        }
        }
        memset(&tag1046, 0, sizeof(tag1046));
        {
            $match$396_91047 = p_m->methodKind;
            panda$core$Int64$init$builtin_int64(&$tmp1048, 0);
            panda$core$Bit $tmp1049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$396_91047.$rawValue, $tmp1048);
            if ($tmp1049.value) {
            {
                {
                    $tmp1050 = tag1046;
                    $tmp1051 = &$s1052;
                    tag1046 = $tmp1051;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1051));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1050));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1053, 1);
            panda$core$Bit $tmp1054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$396_91047.$rawValue, $tmp1053);
            if ($tmp1054.value) {
            {
                {
                    $tmp1055 = tag1046;
                    $tmp1056 = &$s1057;
                    tag1046 = $tmp1056;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1056));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1055));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1058, 2);
            panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$396_91047.$rawValue, $tmp1058);
            if ($tmp1059.value) {
            {
                {
                    $tmp1060 = tag1046;
                    $tmp1061 = &$s1062;
                    tag1046 = $tmp1061;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1061));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1060));
                }
            }
            }
            }
            }
        }
        (($fn1063) self->out->$class->vtable[2])(self->out, tag1046);
        panda$core$String* $tmp1067 = (($fn1066) self->$class->vtable[6])(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
        $tmp1065 = $tmp1067;
        (($fn1068) self->out->$class->vtable[4])(self->out, &$s1064, $tmp1065);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1065));
        (($fn1069) self->$class->vtable[22])(self, p_m);
        $tmp1071 = p_m->annotations;
        annotations1070 = $tmp1071;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1071));
        panda$core$Object* $tmp1073 = panda$core$Weak$get$R$panda$core$Weak$T(p_m->owner);
        $tmp1072 = $tmp1073;
        panda$core$Bit $tmp1074 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(((org$pandalanguage$pandac$ClassDecl*) $tmp1072)->annotations);
        panda$core$Panda$unref$panda$core$Object($tmp1072);
        if ($tmp1074.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1075, 256);
            panda$core$Int64 $tmp1076 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp1075);
            panda$core$Int64 $tmp1077 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(annotations1070->flags, $tmp1076);
            annotations1070->flags = $tmp1077;
            (($fn1078) self->$class->vtable[8])(self, annotations1070);
        }
        }
        (($fn1080) self->out->$class->vtable[2])(self->out, &$s1079);
        {
            int $tmp1083;
            {
                ITable* $tmp1087 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp1087->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1087 = $tmp1087->next;
                }
                $fn1089 $tmp1088 = $tmp1087->methods[0];
                panda$collections$Iterator* $tmp1090 = $tmp1088(((panda$collections$Iterable*) p_m->parameters));
                $tmp1086 = $tmp1090;
                $tmp1085 = $tmp1086;
                Iter$413$91084 = $tmp1085;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1085));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1086));
                $l1091:;
                ITable* $tmp1094 = Iter$413$91084->$class->itable;
                while ($tmp1094->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1094 = $tmp1094->next;
                }
                $fn1096 $tmp1095 = $tmp1094->methods[0];
                panda$core$Bit $tmp1097 = $tmp1095(Iter$413$91084);
                panda$core$Bit $tmp1098 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1097);
                bool $tmp1093 = $tmp1098.value;
                if (!$tmp1093) goto $l1092;
                {
                    int $tmp1101;
                    {
                        ITable* $tmp1105 = Iter$413$91084->$class->itable;
                        while ($tmp1105->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1105 = $tmp1105->next;
                        }
                        $fn1107 $tmp1106 = $tmp1105->methods[1];
                        panda$core$Object* $tmp1108 = $tmp1106(Iter$413$91084);
                        $tmp1104 = $tmp1108;
                        $tmp1103 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1104);
                        p1102 = $tmp1103;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1103));
                        panda$core$Panda$unref$panda$core$Object($tmp1104);
                        (($fn1110) self->out->$class->vtable[2])(self->out, &$s1109);
                        (($fn1112) self->out->$class->vtable[4])(self->out, &$s1111, p1102->name);
                        (($fn1113) self->$class->vtable[7])(self, p1102->type);
                        panda$core$Object* $tmp1117 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->params, ((panda$collections$Key*) p1102->name));
                        $tmp1116 = $tmp1117;
                        $tmp1115 = ((panda$core$String*) $tmp1116);
                        desc1114 = $tmp1115;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1115));
                        panda$core$Panda$unref$panda$core$Object($tmp1116);
                        if (((panda$core$Bit) { desc1114 != NULL }).value) {
                        {
                            (($fn1119) self->out->$class->vtable[4])(self->out, &$s1118, desc1114);
                        }
                        }
                        (($fn1121) self->out->$class->vtable[3])(self->out, &$s1120);
                    }
                    $tmp1101 = -1;
                    goto $l1099;
                    $l1099:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc1114));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1102));
                    p1102 = NULL;
                    desc1114 = NULL;
                    switch ($tmp1101) {
                        case -1: goto $l1122;
                    }
                    $l1122:;
                }
                goto $l1091;
                $l1092:;
            }
            $tmp1083 = -1;
            goto $l1081;
            $l1081:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$413$91084));
            Iter$413$91084 = NULL;
            switch ($tmp1083) {
                case -1: goto $l1123;
            }
            $l1123:;
        }
        (($fn1125) self->out->$class->vtable[3])(self->out, &$s1124);
        org$pandalanguage$pandac$Type* $tmp1127 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1126 = $tmp1127;
        panda$core$Bit $tmp1128 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1126);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1126));
        if ($tmp1128.value) {
        {
            (($fn1130) self->out->$class->vtable[2])(self->out, &$s1129);
            (($fn1131) self->$class->vtable[7])(self, p_m->returnType);
            if (((panda$core$Bit) { self->returns != NULL }).value) {
            {
                (($fn1133) self->out->$class->vtable[4])(self->out, &$s1132, self->returns);
            }
            }
            (($fn1135) self->out->$class->vtable[3])(self->out, &$s1134);
        }
        }
        (($fn1136) self->out->$class->vtable[3])(self->out, tag1046);
    }
    $tmp1034 = -1;
    goto $l1032;
    $l1032:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations1070));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag1046));
    annotations1070 = NULL;
    switch ($tmp1034) {
        case -1: goto $l1137;
        case 1: goto $l1045;
        case 0: goto $l1040;
    }
    $l1137:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeAncestors$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Int64 $tmp1141;
    org$pandalanguage$pandac$Type* ancestor1146 = NULL;
    org$pandalanguage$pandac$Type* $tmp1147;
    org$pandalanguage$pandac$ClassDecl* ancestorClass1155 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1156;
    org$pandalanguage$pandac$ClassDecl* $tmp1157;
    panda$core$Object* $tmp1158;
    org$pandalanguage$pandac$Type* $tmp1163;
    org$pandalanguage$pandac$Type* $tmp1164;
    int $tmp1140;
    {
        panda$core$Int64$init$builtin_int64(&$tmp1141, 0);
        panda$core$Bit $tmp1142 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_cl->classKind.$rawValue, $tmp1141);
        if ($tmp1142.value) {
        {
            $tmp1140 = 0;
            goto $l1138;
            $l1143:;
            return;
        }
        }
        (($fn1145) self->out->$class->vtable[2])(self->out, &$s1144);
        $tmp1147 = p_cl->rawSuper;
        ancestor1146 = $tmp1147;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1147));
        $l1148:;
        bool $tmp1150 = ((panda$core$Bit) { ancestor1146 != NULL }).value;
        if (!$tmp1150) goto $l1149;
        {
            int $tmp1153;
            {
                (($fn1154) self->$class->vtable[7])(self, ancestor1146);
                panda$core$Object* $tmp1159 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp1158 = $tmp1159;
                org$pandalanguage$pandac$ClassDecl* $tmp1160 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1158), ancestor1146);
                $tmp1157 = $tmp1160;
                $tmp1156 = $tmp1157;
                ancestorClass1155 = $tmp1156;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1156));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1157));
                panda$core$Panda$unref$panda$core$Object($tmp1158);
                if (((panda$core$Bit) { ancestorClass1155 == NULL }).value) {
                {
                    $tmp1153 = 0;
                    goto $l1151;
                    $l1161:;
                    $tmp1140 = 1;
                    goto $l1138;
                    $l1162:;
                    return;
                }
                }
                {
                    $tmp1163 = ancestor1146;
                    $tmp1164 = ancestorClass1155->rawSuper;
                    ancestor1146 = $tmp1164;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1164));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1163));
                }
            }
            $tmp1153 = -1;
            goto $l1151;
            $l1151:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestorClass1155));
            ancestorClass1155 = NULL;
            switch ($tmp1153) {
                case 0: goto $l1161;
                case -1: goto $l1165;
            }
            $l1165:;
        }
        goto $l1148;
        $l1149:;
        (($fn1167) self->out->$class->vtable[3])(self->out, &$s1166);
    }
    $tmp1140 = -1;
    goto $l1138;
    $l1138:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestor1146));
    ancestor1146 = NULL;
    switch ($tmp1140) {
        case -1: goto $l1168;
        case 1: goto $l1162;
        case 0: goto $l1143;
    }
    $l1168:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $returnValue1169;
    panda$core$String* $tmp1170;
    panda$core$String* $tmp1171;
    org$pandalanguage$pandac$pandadoc$LinkResolver* $tmp1172;
    panda$core$Object* $tmp1174;
    org$pandalanguage$pandac$pandadoc$LinkResolver* $tmp1173 = (org$pandalanguage$pandac$pandadoc$LinkResolver*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$LinkResolver$class);
    panda$core$Object* $tmp1175 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp1174 = $tmp1175;
    org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ClassDecl$Q($tmp1173, ((org$pandalanguage$pandac$Compiler*) $tmp1174), self->currentClass);
    $tmp1172 = $tmp1173;
    panda$core$String* $tmp1177 = (($fn1176) $tmp1172->$class->vtable[3])($tmp1172, p_cl);
    $tmp1171 = $tmp1177;
    $tmp1170 = $tmp1171;
    $returnValue1169 = $tmp1170;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1170));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1171));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1172));
    panda$core$Panda$unref$panda$core$Object($tmp1174);
    return $returnValue1169;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$linkTo$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* $returnValue1179;
    panda$core$String* $tmp1180;
    panda$core$String* $tmp1181;
    org$pandalanguage$pandac$pandadoc$LinkResolver* $tmp1182;
    panda$core$Object* $tmp1184;
    org$pandalanguage$pandac$pandadoc$LinkResolver* $tmp1183 = (org$pandalanguage$pandac$pandadoc$LinkResolver*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$LinkResolver$class);
    panda$core$Object* $tmp1185 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp1184 = $tmp1185;
    org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ClassDecl$Q($tmp1183, ((org$pandalanguage$pandac$Compiler*) $tmp1184), self->currentClass);
    $tmp1182 = $tmp1183;
    panda$core$String* $tmp1187 = (($fn1186) $tmp1182->$class->vtable[5])($tmp1182, p_m);
    $tmp1181 = $tmp1187;
    $tmp1180 = $tmp1181;
    $returnValue1179 = $tmp1180;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1180));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1181));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1182));
    panda$core$Panda$unref$panda$core$Object($tmp1184);
    return $returnValue1179;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$linkTo$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$String* $returnValue1189;
    panda$core$String* $tmp1190;
    panda$core$String* $tmp1191;
    org$pandalanguage$pandac$pandadoc$LinkResolver* $tmp1192;
    panda$core$Object* $tmp1194;
    org$pandalanguage$pandac$pandadoc$LinkResolver* $tmp1193 = (org$pandalanguage$pandac$pandadoc$LinkResolver*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$LinkResolver$class);
    panda$core$Object* $tmp1195 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp1194 = $tmp1195;
    org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ClassDecl$Q($tmp1193, ((org$pandalanguage$pandac$Compiler*) $tmp1194), self->currentClass);
    $tmp1192 = $tmp1193;
    panda$core$String* $tmp1197 = (($fn1196) $tmp1192->$class->vtable[4])($tmp1192, p_f);
    $tmp1191 = $tmp1197;
    $tmp1190 = $tmp1191;
    $returnValue1189 = $tmp1190;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1190));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1191));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1192));
    panda$core$Panda$unref$panda$core$Object($tmp1194);
    return $returnValue1189;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedFields$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* fields1202 = NULL;
    panda$collections$Array* $tmp1203;
    panda$collections$Array* $tmp1204;
    org$pandalanguage$pandac$Type* ancestor1206 = NULL;
    org$pandalanguage$pandac$Type* $tmp1207;
    org$pandalanguage$pandac$ClassDecl* ancestorClass1214 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1215;
    org$pandalanguage$pandac$ClassDecl* $tmp1216;
    panda$core$Object* $tmp1217;
    panda$collections$Iterator* Iter$472$131225 = NULL;
    panda$collections$Iterator* $tmp1226;
    panda$collections$Iterator* $tmp1227;
    org$pandalanguage$pandac$FieldDecl* f1243 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1244;
    panda$core$Object* $tmp1245;
    panda$core$Object* $tmp1252;
    org$pandalanguage$pandac$Type* $tmp1256;
    org$pandalanguage$pandac$Type* $tmp1257;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1259;
    panda$core$Bit $tmp1260;
    panda$collections$ListView* $tmp1261;
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT $tmp1262;
    panda$core$Int64 $tmp1263;
    panda$core$Bit $tmp1264;
    panda$core$Int64 $tmp1273;
    panda$collections$Iterator* Iter$484$131280 = NULL;
    panda$collections$Iterator* $tmp1281;
    panda$collections$Iterator* $tmp1282;
    org$pandalanguage$pandac$FieldDecl* f1298 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1299;
    panda$core$Object* $tmp1300;
    panda$core$String* $tmp1310;
    int $tmp1201;
    {
        panda$collections$Array* $tmp1205 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1205);
        $tmp1204 = $tmp1205;
        $tmp1203 = $tmp1204;
        fields1202 = $tmp1203;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1203));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1204));
        $tmp1207 = p_cl->rawSuper;
        ancestor1206 = $tmp1207;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1207));
        $l1208:;
        bool $tmp1210 = ((panda$core$Bit) { ancestor1206 != NULL }).value;
        if (!$tmp1210) goto $l1209;
        {
            int $tmp1213;
            {
                panda$core$Object* $tmp1218 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp1217 = $tmp1218;
                org$pandalanguage$pandac$ClassDecl* $tmp1219 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1217), ancestor1206);
                $tmp1216 = $tmp1219;
                $tmp1215 = $tmp1216;
                ancestorClass1214 = $tmp1215;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1215));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1216));
                panda$core$Panda$unref$panda$core$Object($tmp1217);
                if (((panda$core$Bit) { ancestorClass1214 == NULL }).value) {
                {
                    $tmp1213 = 0;
                    goto $l1211;
                    $l1220:;
                    $tmp1201 = 0;
                    goto $l1199;
                    $l1221:;
                    return;
                }
                }
                {
                    int $tmp1224;
                    {
                        ITable* $tmp1228 = ((panda$collections$Iterable*) ancestorClass1214->fields)->$class->itable;
                        while ($tmp1228->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1228 = $tmp1228->next;
                        }
                        $fn1230 $tmp1229 = $tmp1228->methods[0];
                        panda$collections$Iterator* $tmp1231 = $tmp1229(((panda$collections$Iterable*) ancestorClass1214->fields));
                        $tmp1227 = $tmp1231;
                        $tmp1226 = $tmp1227;
                        Iter$472$131225 = $tmp1226;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1226));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1227));
                        $l1232:;
                        ITable* $tmp1235 = Iter$472$131225->$class->itable;
                        while ($tmp1235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1235 = $tmp1235->next;
                        }
                        $fn1237 $tmp1236 = $tmp1235->methods[0];
                        panda$core$Bit $tmp1238 = $tmp1236(Iter$472$131225);
                        panda$core$Bit $tmp1239 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1238);
                        bool $tmp1234 = $tmp1239.value;
                        if (!$tmp1234) goto $l1233;
                        {
                            int $tmp1242;
                            {
                                ITable* $tmp1246 = Iter$472$131225->$class->itable;
                                while ($tmp1246->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1246 = $tmp1246->next;
                                }
                                $fn1248 $tmp1247 = $tmp1246->methods[1];
                                panda$core$Object* $tmp1249 = $tmp1247(Iter$472$131225);
                                $tmp1245 = $tmp1249;
                                $tmp1244 = ((org$pandalanguage$pandac$FieldDecl*) $tmp1245);
                                f1243 = $tmp1244;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1244));
                                panda$core$Panda$unref$panda$core$Object($tmp1245);
                                panda$core$Bit $tmp1251 = (($fn1250) self->$class->vtable[15])(self, f1243);
                                if ($tmp1251.value) {
                                {
                                    panda$core$Object* $tmp1253 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                    $tmp1252 = $tmp1253;
                                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp1252), f1243);
                                    panda$core$Panda$unref$panda$core$Object($tmp1252);
                                    panda$collections$Array$add$panda$collections$Array$T(fields1202, ((panda$core$Object*) f1243));
                                }
                                }
                            }
                            $tmp1242 = -1;
                            goto $l1240;
                            $l1240:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f1243));
                            f1243 = NULL;
                            switch ($tmp1242) {
                                case -1: goto $l1254;
                            }
                            $l1254:;
                        }
                        goto $l1232;
                        $l1233:;
                    }
                    $tmp1224 = -1;
                    goto $l1222;
                    $l1222:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$472$131225));
                    Iter$472$131225 = NULL;
                    switch ($tmp1224) {
                        case -1: goto $l1255;
                    }
                    $l1255:;
                }
                {
                    $tmp1256 = ancestor1206;
                    $tmp1257 = ancestorClass1214->rawSuper;
                    ancestor1206 = $tmp1257;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1257));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1256));
                }
            }
            $tmp1213 = -1;
            goto $l1211;
            $l1211:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestorClass1214));
            ancestorClass1214 = NULL;
            switch ($tmp1213) {
                case -1: goto $l1258;
                case 0: goto $l1220;
            }
            $l1258:;
        }
        goto $l1208;
        $l1209:;
        panda$core$Bit$init$builtin_bit(&$tmp1260, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1259, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1260);
        panda$core$Int64$init$builtin_int64(&$tmp1263, -1);
        panda$core$Bit$init$builtin_bit(&$tmp1264, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$panda$core$Bit(&$tmp1262, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1263, $tmp1264);
        ITable* $tmp1265 = ((panda$collections$ListView*) fields1202)->$class->itable;
        while ($tmp1265->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1265 = $tmp1265->next;
        }
        $fn1267 $tmp1266 = $tmp1265->methods[3];
        panda$collections$ListView* $tmp1268 = $tmp1266(((panda$collections$ListView*) fields1202), $tmp1262);
        $tmp1261 = $tmp1268;
        ITable* $tmp1269 = ((panda$collections$List*) fields1202)->$class->itable;
        while ($tmp1269->$class != (panda$core$Class*) &panda$collections$List$class) {
            $tmp1269 = $tmp1269->next;
        }
        $fn1271 $tmp1270 = $tmp1269->methods[1];
        $tmp1270(((panda$collections$List*) fields1202), $tmp1259, $tmp1261);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1261));
        panda$core$Int64 $tmp1272 = panda$collections$Array$get_count$R$panda$core$Int64(fields1202);
        panda$core$Int64$init$builtin_int64(&$tmp1273, 0);
        panda$core$Bit $tmp1274 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1272, $tmp1273);
        if ($tmp1274.value) {
        {
            (($fn1276) self->out->$class->vtable[2])(self->out, &$s1275);
            {
                int $tmp1279;
                {
                    ITable* $tmp1283 = ((panda$collections$Iterable*) fields1202)->$class->itable;
                    while ($tmp1283->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1283 = $tmp1283->next;
                    }
                    $fn1285 $tmp1284 = $tmp1283->methods[0];
                    panda$collections$Iterator* $tmp1286 = $tmp1284(((panda$collections$Iterable*) fields1202));
                    $tmp1282 = $tmp1286;
                    $tmp1281 = $tmp1282;
                    Iter$484$131280 = $tmp1281;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1281));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1282));
                    $l1287:;
                    ITable* $tmp1290 = Iter$484$131280->$class->itable;
                    while ($tmp1290->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1290 = $tmp1290->next;
                    }
                    $fn1292 $tmp1291 = $tmp1290->methods[0];
                    panda$core$Bit $tmp1293 = $tmp1291(Iter$484$131280);
                    panda$core$Bit $tmp1294 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1293);
                    bool $tmp1289 = $tmp1294.value;
                    if (!$tmp1289) goto $l1288;
                    {
                        int $tmp1297;
                        {
                            ITable* $tmp1301 = Iter$484$131280->$class->itable;
                            while ($tmp1301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1301 = $tmp1301->next;
                            }
                            $fn1303 $tmp1302 = $tmp1301->methods[1];
                            panda$core$Object* $tmp1304 = $tmp1302(Iter$484$131280);
                            $tmp1300 = $tmp1304;
                            $tmp1299 = ((org$pandalanguage$pandac$FieldDecl*) $tmp1300);
                            f1298 = $tmp1299;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1299));
                            panda$core$Panda$unref$panda$core$Object($tmp1300);
                            (($fn1306) self->out->$class->vtable[2])(self->out, &$s1305);
                            (($fn1308) self->out->$class->vtable[4])(self->out, &$s1307, ((org$pandalanguage$pandac$Symbol*) f1298)->name);
                            panda$core$String* $tmp1312 = (($fn1311) self->$class->vtable[27])(self, f1298);
                            $tmp1310 = $tmp1312;
                            (($fn1313) self->out->$class->vtable[4])(self->out, &$s1309, $tmp1310);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1310));
                            (($fn1315) self->out->$class->vtable[3])(self->out, &$s1314);
                        }
                        $tmp1297 = -1;
                        goto $l1295;
                        $l1295:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f1298));
                        f1298 = NULL;
                        switch ($tmp1297) {
                            case -1: goto $l1316;
                        }
                        $l1316:;
                    }
                    goto $l1287;
                    $l1288:;
                }
                $tmp1279 = -1;
                goto $l1277;
                $l1277:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$484$131280));
                Iter$484$131280 = NULL;
                switch ($tmp1279) {
                    case -1: goto $l1317;
                }
                $l1317:;
            }
            (($fn1319) self->out->$class->vtable[3])(self->out, &$s1318);
        }
        }
    }
    $tmp1201 = -1;
    goto $l1199;
    $l1199:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestor1206));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields1202));
    fields1202 = NULL;
    ancestor1206 = NULL;
    switch ($tmp1201) {
        case 0: goto $l1221;
        case -1: goto $l1320;
    }
    $l1320:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$addInheritedMethods$org$pandalanguage$pandac$Type$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$GT$panda$collections$HashSet$LTpanda$core$String$GT(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Type* p_t, panda$collections$Array* p_methods, panda$collections$HashSet* p_overridden) {
    org$pandalanguage$pandac$ClassDecl* cl1324 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1325;
    org$pandalanguage$pandac$ClassDecl* $tmp1326;
    panda$core$Object* $tmp1327;
    panda$collections$Iterator* Iter$500$91334 = NULL;
    panda$collections$Iterator* $tmp1335;
    panda$collections$Iterator* $tmp1336;
    org$pandalanguage$pandac$MethodDecl* m1352 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1353;
    panda$core$Object* $tmp1354;
    org$pandalanguage$pandac$MethodDecl* base1359 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1360;
    org$pandalanguage$pandac$MethodDecl* $tmp1361;
    panda$core$Object* $tmp1362;
    org$pandalanguage$pandac$MethodDecl* $tmp1365;
    org$pandalanguage$pandac$MethodDecl* $tmp1366;
    panda$core$Int64 $tmp1369;
    panda$core$String* $tmp1376;
    panda$core$Object* $tmp1381;
    panda$core$String* $tmp1385;
    panda$collections$Iterator* Iter$517$91393 = NULL;
    panda$collections$Iterator* $tmp1394;
    panda$collections$Iterator* $tmp1395;
    org$pandalanguage$pandac$Type* intf1411 = NULL;
    org$pandalanguage$pandac$Type* $tmp1412;
    panda$core$Object* $tmp1413;
    int $tmp1323;
    {
        panda$core$Object* $tmp1328 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
        $tmp1327 = $tmp1328;
        org$pandalanguage$pandac$ClassDecl* $tmp1329 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1327), p_t);
        $tmp1326 = $tmp1329;
        $tmp1325 = $tmp1326;
        cl1324 = $tmp1325;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1325));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1326));
        panda$core$Panda$unref$panda$core$Object($tmp1327);
        if (((panda$core$Bit) { cl1324 == NULL }).value) {
        {
            $tmp1323 = 0;
            goto $l1321;
            $l1330:;
            return;
        }
        }
        {
            int $tmp1333;
            {
                ITable* $tmp1337 = ((panda$collections$Iterable*) cl1324->methods)->$class->itable;
                while ($tmp1337->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1337 = $tmp1337->next;
                }
                $fn1339 $tmp1338 = $tmp1337->methods[0];
                panda$collections$Iterator* $tmp1340 = $tmp1338(((panda$collections$Iterable*) cl1324->methods));
                $tmp1336 = $tmp1340;
                $tmp1335 = $tmp1336;
                Iter$500$91334 = $tmp1335;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1335));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1336));
                $l1341:;
                ITable* $tmp1344 = Iter$500$91334->$class->itable;
                while ($tmp1344->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1344 = $tmp1344->next;
                }
                $fn1346 $tmp1345 = $tmp1344->methods[0];
                panda$core$Bit $tmp1347 = $tmp1345(Iter$500$91334);
                panda$core$Bit $tmp1348 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1347);
                bool $tmp1343 = $tmp1348.value;
                if (!$tmp1343) goto $l1342;
                {
                    int $tmp1351;
                    {
                        ITable* $tmp1355 = Iter$500$91334->$class->itable;
                        while ($tmp1355->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1355 = $tmp1355->next;
                        }
                        $fn1357 $tmp1356 = $tmp1355->methods[1];
                        panda$core$Object* $tmp1358 = $tmp1356(Iter$500$91334);
                        $tmp1354 = $tmp1358;
                        $tmp1353 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1354);
                        m1352 = $tmp1353;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1353));
                        panda$core$Panda$unref$panda$core$Object($tmp1354);
                        panda$core$Object* $tmp1363 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp1362 = $tmp1363;
                        org$pandalanguage$pandac$MethodDecl* $tmp1364 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1362), m1352);
                        $tmp1361 = $tmp1364;
                        $tmp1360 = $tmp1361;
                        base1359 = $tmp1360;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1360));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1361));
                        panda$core$Panda$unref$panda$core$Object($tmp1362);
                        if (((panda$core$Bit) { base1359 == NULL }).value) {
                        {
                            {
                                $tmp1365 = base1359;
                                $tmp1366 = m1352;
                                base1359 = $tmp1366;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1366));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1365));
                            }
                        }
                        }
                        panda$core$Int64$init$builtin_int64(&$tmp1369, 2);
                        panda$core$Bit $tmp1370 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(m1352->methodKind.$rawValue, $tmp1369);
                        bool $tmp1368 = $tmp1370.value;
                        if (!$tmp1368) goto $l1371;
                        panda$core$Bit $tmp1373 = (($fn1372) self->$class->vtable[16])(self, m1352);
                        $tmp1368 = $tmp1373.value;
                        $l1371:;
                        panda$core$Bit $tmp1374 = { $tmp1368 };
                        bool $tmp1367 = $tmp1374.value;
                        if (!$tmp1367) goto $l1375;
                        panda$core$String* $tmp1377 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(base1359);
                        $tmp1376 = $tmp1377;
                        panda$core$Bit $tmp1378 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(p_overridden, ((panda$collections$Key*) $tmp1376));
                        panda$core$Bit $tmp1379 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1378);
                        $tmp1367 = $tmp1379.value;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1376));
                        $l1375:;
                        panda$core$Bit $tmp1380 = { $tmp1367 };
                        if ($tmp1380.value) {
                        {
                            panda$core$Object* $tmp1382 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                            $tmp1381 = $tmp1382;
                            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(((org$pandalanguage$pandac$Compiler*) $tmp1381), m1352);
                            panda$core$Panda$unref$panda$core$Object($tmp1381);
                            panda$core$Bit $tmp1384 = (($fn1383) self->$class->vtable[16])(self, m1352);
                            if ($tmp1384.value) {
                            {
                                panda$collections$Array$add$panda$collections$Array$T(p_methods, ((panda$core$Object*) m1352));
                            }
                            }
                            panda$core$String* $tmp1386 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(base1359);
                            $tmp1385 = $tmp1386;
                            panda$collections$HashSet$add$panda$collections$HashSet$T(p_overridden, ((panda$collections$Key*) $tmp1385));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
                        }
                        }
                    }
                    $tmp1351 = -1;
                    goto $l1349;
                    $l1349:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1359));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1352));
                    m1352 = NULL;
                    base1359 = NULL;
                    switch ($tmp1351) {
                        case -1: goto $l1387;
                    }
                    $l1387:;
                }
                goto $l1341;
                $l1342:;
            }
            $tmp1333 = -1;
            goto $l1331;
            $l1331:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$500$91334));
            Iter$500$91334 = NULL;
            switch ($tmp1333) {
                case -1: goto $l1388;
            }
            $l1388:;
        }
        if (((panda$core$Bit) { cl1324->rawSuper != NULL }).value) {
        {
            (($fn1389) self->$class->vtable[29])(self, cl1324->rawSuper, p_methods, p_overridden);
        }
        }
        {
            int $tmp1392;
            {
                ITable* $tmp1396 = ((panda$collections$Iterable*) cl1324->rawInterfaces)->$class->itable;
                while ($tmp1396->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1396 = $tmp1396->next;
                }
                $fn1398 $tmp1397 = $tmp1396->methods[0];
                panda$collections$Iterator* $tmp1399 = $tmp1397(((panda$collections$Iterable*) cl1324->rawInterfaces));
                $tmp1395 = $tmp1399;
                $tmp1394 = $tmp1395;
                Iter$517$91393 = $tmp1394;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1394));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1395));
                $l1400:;
                ITable* $tmp1403 = Iter$517$91393->$class->itable;
                while ($tmp1403->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1403 = $tmp1403->next;
                }
                $fn1405 $tmp1404 = $tmp1403->methods[0];
                panda$core$Bit $tmp1406 = $tmp1404(Iter$517$91393);
                panda$core$Bit $tmp1407 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1406);
                bool $tmp1402 = $tmp1407.value;
                if (!$tmp1402) goto $l1401;
                {
                    int $tmp1410;
                    {
                        ITable* $tmp1414 = Iter$517$91393->$class->itable;
                        while ($tmp1414->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1414 = $tmp1414->next;
                        }
                        $fn1416 $tmp1415 = $tmp1414->methods[1];
                        panda$core$Object* $tmp1417 = $tmp1415(Iter$517$91393);
                        $tmp1413 = $tmp1417;
                        $tmp1412 = ((org$pandalanguage$pandac$Type*) $tmp1413);
                        intf1411 = $tmp1412;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1412));
                        panda$core$Panda$unref$panda$core$Object($tmp1413);
                        (($fn1418) self->$class->vtable[29])(self, intf1411, p_methods, p_overridden);
                    }
                    $tmp1410 = -1;
                    goto $l1408;
                    $l1408:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) intf1411));
                    intf1411 = NULL;
                    switch ($tmp1410) {
                        case -1: goto $l1419;
                    }
                    $l1419:;
                }
                goto $l1400;
                $l1401:;
            }
            $tmp1392 = -1;
            goto $l1390;
            $l1390:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$517$91393));
            Iter$517$91393 = NULL;
            switch ($tmp1392) {
                case -1: goto $l1420;
            }
            $l1420:;
        }
    }
    $tmp1323 = -1;
    goto $l1321;
    $l1321:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl1324));
    cl1324 = NULL;
    switch ($tmp1323) {
        case -1: goto $l1421;
        case 0: goto $l1330;
    }
    $l1421:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$simpleSignature$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1425 = NULL;
    panda$core$MutableString* $tmp1426;
    panda$core$MutableString* $tmp1427;
    panda$core$String* $tmp1429;
    panda$core$String* $tmp1430;
    panda$core$String* separator1434 = NULL;
    panda$core$String* $tmp1435;
    panda$collections$Iterator* Iter$525$91440 = NULL;
    panda$collections$Iterator* $tmp1441;
    panda$collections$Iterator* $tmp1442;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1458 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp1459;
    panda$core$Object* $tmp1460;
    panda$core$String* $tmp1465;
    panda$core$String* $tmp1468;
    panda$core$String* $tmp1469;
    panda$core$Char8 $tmp1473;
    panda$core$UInt8 $tmp1474;
    org$pandalanguage$pandac$Type* $tmp1475;
    panda$core$String* $tmp1478;
    panda$core$String* $tmp1479;
    panda$core$String* $tmp1481;
    panda$core$String* $returnValue1487;
    panda$core$String* $tmp1488;
    panda$core$String* $tmp1489;
    int $tmp1424;
    {
        panda$core$MutableString* $tmp1428 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$String* $tmp1431 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_m)->name);
        $tmp1430 = $tmp1431;
        panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1430, &$s1432);
        $tmp1429 = $tmp1433;
        panda$core$MutableString$init$panda$core$String($tmp1428, $tmp1429);
        $tmp1427 = $tmp1428;
        $tmp1426 = $tmp1427;
        result1425 = $tmp1426;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1426));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1427));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1429));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1430));
        $tmp1435 = &$s1436;
        separator1434 = $tmp1435;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1435));
        {
            int $tmp1439;
            {
                ITable* $tmp1443 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp1443->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1443 = $tmp1443->next;
                }
                $fn1445 $tmp1444 = $tmp1443->methods[0];
                panda$collections$Iterator* $tmp1446 = $tmp1444(((panda$collections$Iterable*) p_m->parameters));
                $tmp1442 = $tmp1446;
                $tmp1441 = $tmp1442;
                Iter$525$91440 = $tmp1441;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1441));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1442));
                $l1447:;
                ITable* $tmp1450 = Iter$525$91440->$class->itable;
                while ($tmp1450->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1450 = $tmp1450->next;
                }
                $fn1452 $tmp1451 = $tmp1450->methods[0];
                panda$core$Bit $tmp1453 = $tmp1451(Iter$525$91440);
                panda$core$Bit $tmp1454 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1453);
                bool $tmp1449 = $tmp1454.value;
                if (!$tmp1449) goto $l1448;
                {
                    int $tmp1457;
                    {
                        ITable* $tmp1461 = Iter$525$91440->$class->itable;
                        while ($tmp1461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1461 = $tmp1461->next;
                        }
                        $fn1463 $tmp1462 = $tmp1461->methods[1];
                        panda$core$Object* $tmp1464 = $tmp1462(Iter$525$91440);
                        $tmp1460 = $tmp1464;
                        $tmp1459 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1460);
                        p1458 = $tmp1459;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1459));
                        panda$core$Panda$unref$panda$core$Object($tmp1460);
                        panda$core$MutableString$append$panda$core$String(result1425, separator1434);
                        panda$core$String* $tmp1467 = (($fn1466) self->$class->vtable[5])(self, p1458->type);
                        $tmp1465 = $tmp1467;
                        panda$core$MutableString$append$panda$core$String(result1425, $tmp1465);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1465));
                        {
                            $tmp1468 = separator1434;
                            $tmp1469 = &$s1470;
                            separator1434 = $tmp1469;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1469));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1468));
                        }
                    }
                    $tmp1457 = -1;
                    goto $l1455;
                    $l1455:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1458));
                    p1458 = NULL;
                    switch ($tmp1457) {
                        case -1: goto $l1471;
                    }
                    $l1471:;
                }
                goto $l1447;
                $l1448:;
            }
            $tmp1439 = -1;
            goto $l1437;
            $l1437:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$525$91440));
            Iter$525$91440 = NULL;
            switch ($tmp1439) {
                case -1: goto $l1472;
            }
            $l1472:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp1474, 41);
        panda$core$Char8$init$panda$core$UInt8(&$tmp1473, $tmp1474);
        panda$core$MutableString$append$panda$core$Char8(result1425, $tmp1473);
        org$pandalanguage$pandac$Type* $tmp1476 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp1475 = $tmp1476;
        panda$core$Bit $tmp1477 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1475);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1475));
        if ($tmp1477.value) {
        {
            panda$core$String* $tmp1483 = (($fn1482) self->$class->vtable[5])(self, p_m->returnType);
            $tmp1481 = $tmp1483;
            panda$core$String* $tmp1484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1480, $tmp1481);
            $tmp1479 = $tmp1484;
            panda$core$String* $tmp1486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1479, &$s1485);
            $tmp1478 = $tmp1486;
            panda$core$MutableString$append$panda$core$String(result1425, $tmp1478);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1478));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1479));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1481));
        }
        }
        panda$core$String* $tmp1490 = panda$core$MutableString$finish$R$panda$core$String(result1425);
        $tmp1489 = $tmp1490;
        $tmp1488 = $tmp1489;
        $returnValue1487 = $tmp1488;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1488));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1489));
        $tmp1424 = 0;
        goto $l1422;
        $l1491:;
        return $returnValue1487;
    }
    $l1422:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1434));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1425));
    result1425 = NULL;
    separator1434 = NULL;
    switch ($tmp1424) {
        case 0: goto $l1491;
    }
    $l1493:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedMethods$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* methods1497 = NULL;
    panda$collections$Array* $tmp1498;
    panda$collections$Array* $tmp1499;
    panda$collections$HashSet* overridden1501 = NULL;
    panda$collections$HashSet* $tmp1502;
    panda$collections$HashSet* $tmp1503;
    panda$collections$Iterator* Iter$540$91508 = NULL;
    panda$collections$Iterator* $tmp1509;
    panda$collections$Iterator* $tmp1510;
    org$pandalanguage$pandac$MethodDecl* m1526 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1527;
    panda$core$Object* $tmp1528;
    org$pandalanguage$pandac$MethodDecl* o1533 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1534;
    org$pandalanguage$pandac$MethodDecl* $tmp1535;
    panda$core$Object* $tmp1536;
    panda$core$String* $tmp1539;
    panda$core$String* $tmp1541;
    org$pandalanguage$pandac$Type* $tmp1545;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1548;
    panda$core$Bit $tmp1549;
    panda$collections$ListView* $tmp1550;
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT $tmp1551;
    panda$core$Int64 $tmp1552;
    panda$core$Bit $tmp1553;
    panda$core$Int64 $tmp1562;
    panda$collections$Iterator* Iter$554$131569 = NULL;
    panda$collections$Iterator* $tmp1570;
    panda$collections$Iterator* $tmp1571;
    org$pandalanguage$pandac$MethodDecl* m1587 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1588;
    panda$core$Object* $tmp1589;
    panda$core$String* $tmp1597;
    panda$core$String* $tmp1598;
    panda$core$String* $tmp1605;
    int $tmp1496;
    {
        panda$collections$Array* $tmp1500 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1500);
        $tmp1499 = $tmp1500;
        $tmp1498 = $tmp1499;
        methods1497 = $tmp1498;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1498));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1499));
        panda$collections$HashSet* $tmp1504 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
        panda$collections$HashSet$init($tmp1504);
        $tmp1503 = $tmp1504;
        $tmp1502 = $tmp1503;
        overridden1501 = $tmp1502;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1502));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1503));
        {
            int $tmp1507;
            {
                ITable* $tmp1511 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
                while ($tmp1511->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1511 = $tmp1511->next;
                }
                $fn1513 $tmp1512 = $tmp1511->methods[0];
                panda$collections$Iterator* $tmp1514 = $tmp1512(((panda$collections$Iterable*) p_cl->methods));
                $tmp1510 = $tmp1514;
                $tmp1509 = $tmp1510;
                Iter$540$91508 = $tmp1509;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1509));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1510));
                $l1515:;
                ITable* $tmp1518 = Iter$540$91508->$class->itable;
                while ($tmp1518->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1518 = $tmp1518->next;
                }
                $fn1520 $tmp1519 = $tmp1518->methods[0];
                panda$core$Bit $tmp1521 = $tmp1519(Iter$540$91508);
                panda$core$Bit $tmp1522 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1521);
                bool $tmp1517 = $tmp1522.value;
                if (!$tmp1517) goto $l1516;
                {
                    int $tmp1525;
                    {
                        ITable* $tmp1529 = Iter$540$91508->$class->itable;
                        while ($tmp1529->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1529 = $tmp1529->next;
                        }
                        $fn1531 $tmp1530 = $tmp1529->methods[1];
                        panda$core$Object* $tmp1532 = $tmp1530(Iter$540$91508);
                        $tmp1528 = $tmp1532;
                        $tmp1527 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1528);
                        m1526 = $tmp1527;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1527));
                        panda$core$Panda$unref$panda$core$Object($tmp1528);
                        panda$core$Object* $tmp1537 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp1536 = $tmp1537;
                        org$pandalanguage$pandac$MethodDecl* $tmp1538 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1536), m1526);
                        $tmp1535 = $tmp1538;
                        $tmp1534 = $tmp1535;
                        o1533 = $tmp1534;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1534));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
                        panda$core$Panda$unref$panda$core$Object($tmp1536);
                        if (((panda$core$Bit) { o1533 != NULL }).value) {
                        {
                            panda$core$String* $tmp1540 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(o1533);
                            $tmp1539 = $tmp1540;
                            panda$collections$HashSet$add$panda$collections$HashSet$T(overridden1501, ((panda$collections$Key*) $tmp1539));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1539));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp1542 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(m1526);
                            $tmp1541 = $tmp1542;
                            panda$collections$HashSet$add$panda$collections$HashSet$T(overridden1501, ((panda$collections$Key*) $tmp1541));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1541));
                        }
                        }
                    }
                    $tmp1525 = -1;
                    goto $l1523;
                    $l1523:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) o1533));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1526));
                    m1526 = NULL;
                    o1533 = NULL;
                    switch ($tmp1525) {
                        case -1: goto $l1543;
                    }
                    $l1543:;
                }
                goto $l1515;
                $l1516:;
            }
            $tmp1507 = -1;
            goto $l1505;
            $l1505:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$540$91508));
            Iter$540$91508 = NULL;
            switch ($tmp1507) {
                case -1: goto $l1544;
            }
            $l1544:;
        }
        org$pandalanguage$pandac$Type* $tmp1546 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        $tmp1545 = $tmp1546;
        (($fn1547) self->$class->vtable[29])(self, $tmp1545, methods1497, overridden1501);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1545));
        panda$core$Bit$init$builtin_bit(&$tmp1549, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1548, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1549);
        panda$core$Int64$init$builtin_int64(&$tmp1552, -1);
        panda$core$Bit$init$builtin_bit(&$tmp1553, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$panda$core$Bit(&$tmp1551, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1552, $tmp1553);
        ITable* $tmp1554 = ((panda$collections$ListView*) methods1497)->$class->itable;
        while ($tmp1554->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1554 = $tmp1554->next;
        }
        $fn1556 $tmp1555 = $tmp1554->methods[3];
        panda$collections$ListView* $tmp1557 = $tmp1555(((panda$collections$ListView*) methods1497), $tmp1551);
        $tmp1550 = $tmp1557;
        ITable* $tmp1558 = ((panda$collections$List*) methods1497)->$class->itable;
        while ($tmp1558->$class != (panda$core$Class*) &panda$collections$List$class) {
            $tmp1558 = $tmp1558->next;
        }
        $fn1560 $tmp1559 = $tmp1558->methods[1];
        $tmp1559(((panda$collections$List*) methods1497), $tmp1548, $tmp1550);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1550));
        panda$core$Int64 $tmp1561 = panda$collections$Array$get_count$R$panda$core$Int64(methods1497);
        panda$core$Int64$init$builtin_int64(&$tmp1562, 0);
        panda$core$Bit $tmp1563 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1561, $tmp1562);
        if ($tmp1563.value) {
        {
            (($fn1565) self->out->$class->vtable[2])(self->out, &$s1564);
            {
                int $tmp1568;
                {
                    ITable* $tmp1572 = ((panda$collections$Iterable*) methods1497)->$class->itable;
                    while ($tmp1572->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1572 = $tmp1572->next;
                    }
                    $fn1574 $tmp1573 = $tmp1572->methods[0];
                    panda$collections$Iterator* $tmp1575 = $tmp1573(((panda$collections$Iterable*) methods1497));
                    $tmp1571 = $tmp1575;
                    $tmp1570 = $tmp1571;
                    Iter$554$131569 = $tmp1570;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1570));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
                    $l1576:;
                    ITable* $tmp1579 = Iter$554$131569->$class->itable;
                    while ($tmp1579->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1579 = $tmp1579->next;
                    }
                    $fn1581 $tmp1580 = $tmp1579->methods[0];
                    panda$core$Bit $tmp1582 = $tmp1580(Iter$554$131569);
                    panda$core$Bit $tmp1583 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1582);
                    bool $tmp1578 = $tmp1583.value;
                    if (!$tmp1578) goto $l1577;
                    {
                        int $tmp1586;
                        {
                            ITable* $tmp1590 = Iter$554$131569->$class->itable;
                            while ($tmp1590->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1590 = $tmp1590->next;
                            }
                            $fn1592 $tmp1591 = $tmp1590->methods[1];
                            panda$core$Object* $tmp1593 = $tmp1591(Iter$554$131569);
                            $tmp1589 = $tmp1593;
                            $tmp1588 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1589);
                            m1587 = $tmp1588;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1588));
                            panda$core$Panda$unref$panda$core$Object($tmp1589);
                            (($fn1595) self->out->$class->vtable[2])(self->out, &$s1594);
                            panda$core$String* $tmp1600 = (($fn1599) self->$class->vtable[30])(self, m1587);
                            $tmp1598 = $tmp1600;
                            panda$core$String* $tmp1602 = (($fn1601) self->$class->vtable[6])(self, $tmp1598);
                            $tmp1597 = $tmp1602;
                            (($fn1603) self->out->$class->vtable[4])(self->out, &$s1596, $tmp1597);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1597));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1598));
                            panda$core$String* $tmp1607 = (($fn1606) self->$class->vtable[26])(self, m1587);
                            $tmp1605 = $tmp1607;
                            (($fn1608) self->out->$class->vtable[4])(self->out, &$s1604, $tmp1605);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1605));
                            (($fn1610) self->out->$class->vtable[3])(self->out, &$s1609);
                        }
                        $tmp1586 = -1;
                        goto $l1584;
                        $l1584:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1587));
                        m1587 = NULL;
                        switch ($tmp1586) {
                            case -1: goto $l1611;
                        }
                        $l1611:;
                    }
                    goto $l1576;
                    $l1577:;
                }
                $tmp1568 = -1;
                goto $l1566;
                $l1566:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$554$131569));
                Iter$554$131569 = NULL;
                switch ($tmp1568) {
                    case -1: goto $l1612;
                }
                $l1612:;
            }
            (($fn1614) self->out->$class->vtable[3])(self->out, &$s1613);
        }
        }
    }
    $tmp1496 = -1;
    goto $l1494;
    $l1494:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) overridden1501));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods1497));
    methods1497 = NULL;
    overridden1501 = NULL;
    switch ($tmp1496) {
        case -1: goto $l1615;
    }
    $l1615:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$ListView* split1619 = NULL;
    panda$collections$ListView* $tmp1620;
    panda$collections$ListView* $tmp1621;
    panda$core$Object* $tmp1624;
    panda$core$Int64 $tmp1625;
    panda$collections$Iterator* Iter$568$131634 = NULL;
    panda$collections$Iterator* $tmp1635;
    panda$collections$Iterator* $tmp1636;
    panda$collections$ListView* $tmp1637;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1638;
    panda$core$Int64 $tmp1639;
    panda$core$Bit $tmp1640;
    org$pandalanguage$pandac$Pair* tag1660 = NULL;
    org$pandalanguage$pandac$Pair* $tmp1661;
    panda$core$Object* $tmp1662;
    panda$core$String* $match$569_171670 = NULL;
    panda$core$String* $tmp1671;
    panda$core$Object* $tmp1675;
    panda$core$String* $tmp1677;
    panda$core$String* $tmp1678;
    if (((panda$core$Bit) { p_cl->doccomment != NULL }).value) {
    {
        int $tmp1618;
        {
            panda$collections$ListView* $tmp1623 = (($fn1622) self->$class->vtable[9])(self, p_cl->doccomment);
            $tmp1621 = $tmp1623;
            $tmp1620 = $tmp1621;
            split1619 = $tmp1620;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1620));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1621));
            panda$core$Int64$init$builtin_int64(&$tmp1625, 0);
            ITable* $tmp1626 = split1619->$class->itable;
            while ($tmp1626->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1626 = $tmp1626->next;
            }
            $fn1628 $tmp1627 = $tmp1626->methods[0];
            panda$core$Object* $tmp1629 = $tmp1627(split1619, $tmp1625);
            $tmp1624 = $tmp1629;
            (($fn1630) self->$class->vtable[11])(self, ((panda$core$String*) ((org$pandalanguage$pandac$Pair*) $tmp1624)->second));
            panda$core$Panda$unref$panda$core$Object($tmp1624);
            {
                int $tmp1633;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1639, 1);
                    panda$core$Bit$init$builtin_bit(&$tmp1640, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1638, ((panda$core$Int64$nullable) { $tmp1639, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1640);
                    ITable* $tmp1641 = split1619->$class->itable;
                    while ($tmp1641->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp1641 = $tmp1641->next;
                    }
                    $fn1643 $tmp1642 = $tmp1641->methods[2];
                    panda$collections$ListView* $tmp1644 = $tmp1642(split1619, $tmp1638);
                    $tmp1637 = $tmp1644;
                    ITable* $tmp1645 = ((panda$collections$Iterable*) $tmp1637)->$class->itable;
                    while ($tmp1645->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1645 = $tmp1645->next;
                    }
                    $fn1647 $tmp1646 = $tmp1645->methods[0];
                    panda$collections$Iterator* $tmp1648 = $tmp1646(((panda$collections$Iterable*) $tmp1637));
                    $tmp1636 = $tmp1648;
                    $tmp1635 = $tmp1636;
                    Iter$568$131634 = $tmp1635;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1635));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1636));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1637));
                    $l1649:;
                    ITable* $tmp1652 = Iter$568$131634->$class->itable;
                    while ($tmp1652->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1652 = $tmp1652->next;
                    }
                    $fn1654 $tmp1653 = $tmp1652->methods[0];
                    panda$core$Bit $tmp1655 = $tmp1653(Iter$568$131634);
                    panda$core$Bit $tmp1656 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1655);
                    bool $tmp1651 = $tmp1656.value;
                    if (!$tmp1651) goto $l1650;
                    {
                        int $tmp1659;
                        {
                            ITable* $tmp1663 = Iter$568$131634->$class->itable;
                            while ($tmp1663->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1663 = $tmp1663->next;
                            }
                            $fn1665 $tmp1664 = $tmp1663->methods[1];
                            panda$core$Object* $tmp1666 = $tmp1664(Iter$568$131634);
                            $tmp1662 = $tmp1666;
                            $tmp1661 = ((org$pandalanguage$pandac$Pair*) $tmp1662);
                            tag1660 = $tmp1661;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1661));
                            panda$core$Panda$unref$panda$core$Object($tmp1662);
                            int $tmp1669;
                            {
                                $tmp1671 = ((panda$core$String*) tag1660->first);
                                $match$569_171670 = $tmp1671;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1671));
                                panda$core$Bit $tmp1673 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$569_171670, &$s1672);
                                if ($tmp1673.value) {
                                {
                                    (($fn1674) self->$class->vtable[12])(self, ((panda$core$String*) tag1660->second));
                                }
                                }
                                else {
                                {
                                    panda$core$Object* $tmp1676 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                    $tmp1675 = $tmp1676;
                                    panda$core$String* $tmp1680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1679, ((panda$core$String*) tag1660->first));
                                    $tmp1678 = $tmp1680;
                                    panda$core$String* $tmp1682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1678, &$s1681);
                                    $tmp1677 = $tmp1682;
                                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1675), p_cl->position, $tmp1677);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1677));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1678));
                                    panda$core$Panda$unref$panda$core$Object($tmp1675);
                                }
                                }
                            }
                            $tmp1669 = -1;
                            goto $l1667;
                            $l1667:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1671));
                            switch ($tmp1669) {
                                case -1: goto $l1683;
                            }
                            $l1683:;
                        }
                        $tmp1659 = -1;
                        goto $l1657;
                        $l1657:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag1660));
                        tag1660 = NULL;
                        switch ($tmp1659) {
                            case -1: goto $l1684;
                        }
                        $l1684:;
                    }
                    goto $l1649;
                    $l1650:;
                }
                $tmp1633 = -1;
                goto $l1631;
                $l1631:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$568$131634));
                Iter$568$131634 = NULL;
                switch ($tmp1633) {
                    case -1: goto $l1685;
                }
                $l1685:;
            }
            (($fn1686) self->$class->vtable[13])(self);
        }
        $tmp1618 = -1;
        goto $l1616;
        $l1616:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) split1619));
        split1619 = NULL;
        switch ($tmp1618) {
            case -1: goto $l1687;
        }
        $l1687:;
    }
    }
}
void panda$core$MutableMethod$$shim2$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar1691 = NULL;
    panda$core$MutableMethod* $tmp1692;
    panda$core$Method* $tmp1693;
    panda$core$Object* $tmp1695;
    panda$core$Object* $tmp1696;
    int $tmp1690;
    {
        panda$core$Method* $tmp1694 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1694, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1693 = $tmp1694;
        $tmp1692 = ((panda$core$MutableMethod*) $tmp1693);
        methodVar1691 = $tmp1692;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1692));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1693));
        {
            $tmp1695 = methodVar1691->target;
            $tmp1696 = self->target;
            methodVar1691->target = $tmp1696;
            panda$core$Panda$ref$panda$core$Object($tmp1696);
            panda$core$Panda$unref$panda$core$Object($tmp1695);
        }
        if (methodVar1691->target) {
            (($fn1697) methodVar1691->pointer)(methodVar1691->target, ((org$pandalanguage$pandac$Type*) p_p0));
        } else {
            (($fn1698) methodVar1691->pointer)(((org$pandalanguage$pandac$Type*) p_p0));
        }
    }
    $tmp1690 = -1;
    goto $l1688;
    $l1688:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1691));
    methodVar1691 = NULL;
    switch ($tmp1690) {
        case -1: goto $l1699;
    }
    $l1699:;
}
void panda$core$MutableMethod$$shim3$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar1703 = NULL;
    panda$core$MutableMethod* $tmp1704;
    panda$core$Method* $tmp1705;
    panda$core$Object* $tmp1707;
    panda$core$Object* $tmp1708;
    int $tmp1702;
    {
        panda$core$Method* $tmp1706 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1706, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1705 = $tmp1706;
        $tmp1704 = ((panda$core$MutableMethod*) $tmp1705);
        methodVar1703 = $tmp1704;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1704));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1705));
        {
            $tmp1707 = methodVar1703->target;
            $tmp1708 = self->target;
            methodVar1703->target = $tmp1708;
            panda$core$Panda$ref$panda$core$Object($tmp1708);
            panda$core$Panda$unref$panda$core$Object($tmp1707);
        }
        if (methodVar1703->target) {
            (($fn1709) methodVar1703->pointer)(methodVar1703->target, ((org$pandalanguage$pandac$ClassDecl*) p_p0));
        } else {
            (($fn1710) methodVar1703->pointer)(((org$pandalanguage$pandac$ClassDecl*) p_p0));
        }
    }
    $tmp1702 = -1;
    goto $l1700;
    $l1700:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1703));
    methodVar1703 = NULL;
    switch ($tmp1702) {
        case -1: goto $l1711;
    }
    $l1711:;
}
void panda$core$MutableMethod$$shim4$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar1715 = NULL;
    panda$core$MutableMethod* $tmp1716;
    panda$core$Method* $tmp1717;
    panda$core$Object* $tmp1719;
    panda$core$Object* $tmp1720;
    int $tmp1714;
    {
        panda$core$Method* $tmp1718 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1718, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1717 = $tmp1718;
        $tmp1716 = ((panda$core$MutableMethod*) $tmp1717);
        methodVar1715 = $tmp1716;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1716));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1717));
        {
            $tmp1719 = methodVar1715->target;
            $tmp1720 = self->target;
            methodVar1715->target = $tmp1720;
            panda$core$Panda$ref$panda$core$Object($tmp1720);
            panda$core$Panda$unref$panda$core$Object($tmp1719);
        }
        if (methodVar1715->target) {
            (($fn1721) methodVar1715->pointer)(methodVar1715->target, ((org$pandalanguage$pandac$FieldDecl*) p_p0));
        } else {
            (($fn1722) methodVar1715->pointer)(((org$pandalanguage$pandac$FieldDecl*) p_p0));
        }
    }
    $tmp1714 = -1;
    goto $l1712;
    $l1712:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1715));
    methodVar1715 = NULL;
    switch ($tmp1714) {
        case -1: goto $l1723;
    }
    $l1723:;
}
void panda$core$MutableMethod$$shim5$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar1727 = NULL;
    panda$core$MutableMethod* $tmp1728;
    panda$core$Method* $tmp1729;
    panda$core$Object* $tmp1731;
    panda$core$Object* $tmp1732;
    int $tmp1726;
    {
        panda$core$Method* $tmp1730 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1730, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1729 = $tmp1730;
        $tmp1728 = ((panda$core$MutableMethod*) $tmp1729);
        methodVar1727 = $tmp1728;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1728));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1729));
        {
            $tmp1731 = methodVar1727->target;
            $tmp1732 = self->target;
            methodVar1727->target = $tmp1732;
            panda$core$Panda$ref$panda$core$Object($tmp1732);
            panda$core$Panda$unref$panda$core$Object($tmp1731);
        }
        if (methodVar1727->target) {
            (($fn1733) methodVar1727->pointer)(methodVar1727->target, ((org$pandalanguage$pandac$MethodDecl*) p_p0));
        } else {
            (($fn1734) methodVar1727->pointer)(((org$pandalanguage$pandac$MethodDecl*) p_p0));
        }
    }
    $tmp1726 = -1;
    goto $l1724;
    $l1724:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1727));
    methodVar1727 = NULL;
    switch ($tmp1726) {
        case -1: goto $l1735;
    }
    $l1735:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* $tmp1743;
    org$pandalanguage$pandac$ClassDecl* $tmp1744;
    panda$io$File* dest1747 = NULL;
    panda$io$File* $tmp1748;
    panda$io$File* $tmp1749;
    panda$io$File* $tmp1753;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp1755;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp1756;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp1757;
    panda$io$OutputStream* $tmp1759;
    panda$core$String* simple1765 = NULL;
    panda$core$String* $tmp1766;
    panda$core$String* $tmp1767;
    org$pandalanguage$pandac$Type* $tmp1768;
    panda$core$Int64 $tmp1776;
    panda$core$String* separator1781 = NULL;
    panda$core$String* $tmp1782;
    panda$collections$Iterator* Iter$598$131787 = NULL;
    panda$collections$Iterator* $tmp1788;
    panda$collections$Iterator* $tmp1789;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p1805 = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1806;
    panda$core$Object* $tmp1807;
    panda$core$String* $tmp1812;
    panda$core$String* $tmp1813;
    panda$core$String* $tmp1814;
    panda$core$String* $tmp1815;
    panda$core$String* $tmp1817;
    panda$core$String* $tmp1818;
    panda$core$String* $tmp1819;
    panda$core$String* $tmp1820;
    panda$core$String* $tmp1822;
    panda$core$String* $tmp1823;
    panda$core$String* $tmp1827;
    panda$core$String* $tmp1828;
    panda$core$String* $tmp1829;
    panda$core$String* $tmp1830;
    org$pandalanguage$pandac$ClassDecl$Kind $match$606_91836;
    panda$core$Int64 $tmp1837;
    panda$core$Int64 $tmp1842;
    panda$core$Int64 $tmp1847;
    org$pandalanguage$pandac$ClassDecl* base1852 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1853;
    panda$core$Object* $tmp1857;
    org$pandalanguage$pandac$ClassDecl* $tmp1859;
    org$pandalanguage$pandac$ClassDecl* $tmp1860;
    panda$core$Object* $tmp1861;
    panda$core$String* $tmp1864;
    panda$core$String* $tmp1865;
    panda$core$String* $tmp1866;
    panda$core$String* $tmp1867;
    panda$collections$Iterator* $tmp1869;
    panda$core$String* $tmp1879;
    panda$core$Int64 $tmp1890;
    int $tmp1738;
    {
        panda$core$Bit $tmp1740 = (($fn1739) self->$class->vtable[14])(self, p_cl);
        panda$core$Bit $tmp1741 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1740);
        if ($tmp1741.value) {
        {
            $tmp1738 = 0;
            goto $l1736;
            $l1742:;
            return;
        }
        }
        {
            $tmp1743 = self->currentClass;
            $tmp1744 = p_cl;
            self->currentClass = $tmp1744;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1744));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1743));
        }
        panda$core$Bit $tmp1745 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(p_cl->annotations);
        panda$core$Bit $tmp1746 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1745);
        if ($tmp1746.value) {
        {
            panda$collections$HashSet$add$panda$collections$HashSet$T(self->classList, ((panda$collections$Key*) p_cl->name));
        }
        }
        panda$io$File* $tmp1752 = (($fn1751) self->$class->vtable[4])(self, p_cl, &$s1750);
        $tmp1749 = $tmp1752;
        $tmp1748 = $tmp1749;
        dest1747 = $tmp1748;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1748));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1749));
        panda$io$File* $tmp1754 = panda$io$File$parent$R$panda$io$File$Q(dest1747);
        $tmp1753 = $tmp1754;
        panda$io$File$createDirectories($tmp1753);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1753));
        {
            $tmp1755 = self->out;
            org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp1758 = (org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$class);
            panda$io$OutputStream* $tmp1760 = panda$io$File$openOutputStream$R$panda$io$OutputStream(dest1747);
            $tmp1759 = $tmp1760;
            org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$init$panda$io$OutputStream($tmp1758, $tmp1759);
            $tmp1757 = $tmp1758;
            $tmp1756 = $tmp1757;
            self->out = $tmp1756;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1756));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1757));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1759));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1755));
        }
        (($fn1762) self->out->$class->vtable[2])(self->out, &$s1761);
        (($fn1764) self->out->$class->vtable[4])(self->out, &$s1763, p_cl->name);
        org$pandalanguage$pandac$Type* $tmp1769 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        $tmp1768 = $tmp1769;
        panda$core$String* $tmp1771 = (($fn1770) self->$class->vtable[5])(self, $tmp1768);
        $tmp1767 = $tmp1771;
        $tmp1766 = $tmp1767;
        simple1765 = $tmp1766;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1766));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1767));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1768));
        ITable* $tmp1772 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp1772->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1772 = $tmp1772->next;
        }
        $fn1774 $tmp1773 = $tmp1772->methods[0];
        panda$core$Int64 $tmp1775 = $tmp1773(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Int64$init$builtin_int64(&$tmp1776, 0);
        panda$core$Bit $tmp1777 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1775, $tmp1776);
        if ($tmp1777.value) {
        {
            int $tmp1780;
            {
                $tmp1782 = &$s1783;
                separator1781 = $tmp1782;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1782));
                {
                    int $tmp1786;
                    {
                        ITable* $tmp1790 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
                        while ($tmp1790->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1790 = $tmp1790->next;
                        }
                        $fn1792 $tmp1791 = $tmp1790->methods[0];
                        panda$collections$Iterator* $tmp1793 = $tmp1791(((panda$collections$Iterable*) p_cl->parameters));
                        $tmp1789 = $tmp1793;
                        $tmp1788 = $tmp1789;
                        Iter$598$131787 = $tmp1788;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1788));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1789));
                        $l1794:;
                        ITable* $tmp1797 = Iter$598$131787->$class->itable;
                        while ($tmp1797->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1797 = $tmp1797->next;
                        }
                        $fn1799 $tmp1798 = $tmp1797->methods[0];
                        panda$core$Bit $tmp1800 = $tmp1798(Iter$598$131787);
                        panda$core$Bit $tmp1801 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1800);
                        bool $tmp1796 = $tmp1801.value;
                        if (!$tmp1796) goto $l1795;
                        {
                            int $tmp1804;
                            {
                                ITable* $tmp1808 = Iter$598$131787->$class->itable;
                                while ($tmp1808->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1808 = $tmp1808->next;
                                }
                                $fn1810 $tmp1809 = $tmp1808->methods[1];
                                panda$core$Object* $tmp1811 = $tmp1809(Iter$598$131787);
                                $tmp1807 = $tmp1811;
                                $tmp1806 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1807);
                                p1805 = $tmp1806;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1806));
                                panda$core$Panda$unref$panda$core$Object($tmp1807);
                                {
                                    $tmp1813 = simple1765;
                                    $tmp1812 = $tmp1813;
                                    panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(simple1765, separator1781);
                                    $tmp1815 = $tmp1816;
                                    $tmp1814 = $tmp1815;
                                    simple1765 = $tmp1814;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1814));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1815));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1812));
                                }
                                {
                                    $tmp1818 = simple1765;
                                    $tmp1817 = $tmp1818;
                                    panda$core$String* $tmp1821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(simple1765, ((org$pandalanguage$pandac$Symbol*) p1805)->name);
                                    $tmp1820 = $tmp1821;
                                    $tmp1819 = $tmp1820;
                                    simple1765 = $tmp1819;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1819));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1820));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1817));
                                }
                                {
                                    $tmp1822 = separator1781;
                                    $tmp1823 = &$s1824;
                                    separator1781 = $tmp1823;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1823));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1822));
                                }
                            }
                            $tmp1804 = -1;
                            goto $l1802;
                            $l1802:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1805));
                            p1805 = NULL;
                            switch ($tmp1804) {
                                case -1: goto $l1825;
                            }
                            $l1825:;
                        }
                        goto $l1794;
                        $l1795:;
                    }
                    $tmp1786 = -1;
                    goto $l1784;
                    $l1784:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$598$131787));
                    Iter$598$131787 = NULL;
                    switch ($tmp1786) {
                        case -1: goto $l1826;
                    }
                    $l1826:;
                }
                {
                    $tmp1828 = simple1765;
                    $tmp1827 = $tmp1828;
                    panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(simple1765, &$s1831);
                    $tmp1830 = $tmp1832;
                    $tmp1829 = $tmp1830;
                    simple1765 = $tmp1829;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1829));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1830));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1827));
                }
            }
            $tmp1780 = -1;
            goto $l1778;
            $l1778:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1781));
            separator1781 = NULL;
            switch ($tmp1780) {
                case -1: goto $l1833;
            }
            $l1833:;
        }
        }
        (($fn1835) self->out->$class->vtable[4])(self->out, &$s1834, simple1765);
        {
            $match$606_91836 = p_cl->classKind;
            panda$core$Int64$init$builtin_int64(&$tmp1837, 0);
            panda$core$Bit $tmp1838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$606_91836.$rawValue, $tmp1837);
            if ($tmp1838.value) {
            {
                (($fn1841) self->out->$class->vtable[4])(self->out, &$s1839, &$s1840);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1842, 1);
            panda$core$Bit $tmp1843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$606_91836.$rawValue, $tmp1842);
            if ($tmp1843.value) {
            {
                (($fn1846) self->out->$class->vtable[4])(self->out, &$s1844, &$s1845);
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1847, 2);
            panda$core$Bit $tmp1848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$606_91836.$rawValue, $tmp1847);
            if ($tmp1848.value) {
            {
                (($fn1851) self->out->$class->vtable[4])(self->out, &$s1849, &$s1850);
            }
            }
            }
            }
        }
        $tmp1853 = p_cl;
        base1852 = $tmp1853;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1853));
        $l1854:;
        panda$core$Object* $tmp1858 = panda$core$Weak$get$R$panda$core$Weak$T(base1852->owner);
        $tmp1857 = $tmp1858;
        bool $tmp1856 = ((panda$core$Bit) { ((org$pandalanguage$pandac$ClassDecl*) $tmp1857) != NULL }).value;
        panda$core$Panda$unref$panda$core$Object($tmp1857);
        if (!$tmp1856) goto $l1855;
        {
            {
                $tmp1859 = base1852;
                panda$core$Object* $tmp1862 = panda$core$Weak$get$R$panda$core$Weak$T(base1852->owner);
                $tmp1861 = $tmp1862;
                $tmp1860 = ((org$pandalanguage$pandac$ClassDecl*) $tmp1861);
                base1852 = $tmp1860;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1860));
                panda$core$Panda$unref$panda$core$Object($tmp1861);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1859));
            }
        }
        goto $l1854;
        $l1855:;
        panda$collections$Iterator* $tmp1871 = panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(p_cl->name, &$s1870);
        $tmp1869 = $tmp1871;
        ITable* $tmp1872 = $tmp1869->$class->itable;
        while ($tmp1872->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1872 = $tmp1872->next;
        }
        $fn1874 $tmp1873 = $tmp1872->methods[2];
        panda$core$Int64 $tmp1875 = $tmp1873($tmp1869);
        panda$core$String* $tmp1876 = panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(&$s1868, $tmp1875);
        $tmp1867 = $tmp1876;
        panda$core$String* $tmp1878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1867, &$s1877);
        $tmp1866 = $tmp1878;
        panda$core$String* $tmp1882 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(base1852->name, &$s1880, &$s1881);
        $tmp1879 = $tmp1882;
        panda$core$String* $tmp1883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1866, $tmp1879);
        $tmp1865 = $tmp1883;
        panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1865, &$s1884);
        $tmp1864 = $tmp1885;
        (($fn1886) self->out->$class->vtable[4])(self->out, &$s1863, $tmp1864);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1864));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1865));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1879));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1866));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1867));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1869));
        (($fn1887) self->$class->vtable[32])(self, p_cl);
        (($fn1888) self->$class->vtable[24])(self, p_cl);
        panda$core$Int64 $tmp1889 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
        panda$core$Int64$init$builtin_int64(&$tmp1890, 0);
        panda$core$Bit $tmp1891 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1889, $tmp1890);
        if ($tmp1891.value) {
        {
            (($fn1893) self->out->$class->vtable[2])(self->out, &$s1892);
            panda$core$MutableMethod* $tmp1894 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod* $tmp1895 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1895, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Type, ((panda$core$Object*) self));
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1894, (panda$core$Int8*) &panda$core$MutableMethod$$shim2$panda$collections$CollectionView$T, ((panda$core$Object*) ((panda$core$Object*) $tmp1895)));
            ITable* $tmp1896 = ((panda$collections$CollectionView*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1896->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1896 = $tmp1896->next;
            }
            $fn1898 $tmp1897 = $tmp1896->methods[5];
            $tmp1897(((panda$collections$CollectionView*) p_cl->rawInterfaces), ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1894)));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1894));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1895));
            (($fn1900) self->out->$class->vtable[3])(self->out, &$s1899);
        }
        }
        (($fn1901) self->$class->vtable[28])(self, p_cl);
        (($fn1902) self->$class->vtable[31])(self, p_cl);
        panda$core$MutableMethod* $tmp1903 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1904 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1904, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$ClassDecl, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1903, (panda$core$Int8*) &panda$core$MutableMethod$$shim3$panda$collections$CollectionView$T, ((panda$core$Object*) ((panda$core$Object*) $tmp1904)));
        ITable* $tmp1905 = ((panda$collections$CollectionView*) p_cl->classes)->$class->itable;
        while ($tmp1905->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1905 = $tmp1905->next;
        }
        $fn1907 $tmp1906 = $tmp1905->methods[5];
        $tmp1906(((panda$collections$CollectionView*) p_cl->classes), ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1903)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1903));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1904));
        panda$core$MutableMethod* $tmp1908 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1909 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1909, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$FieldDecl, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1908, (panda$core$Int8*) &panda$core$MutableMethod$$shim4$panda$collections$CollectionView$T, ((panda$core$Object*) ((panda$core$Object*) $tmp1909)));
        ITable* $tmp1910 = ((panda$collections$CollectionView*) p_cl->fields)->$class->itable;
        while ($tmp1910->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1910 = $tmp1910->next;
        }
        $fn1912 $tmp1911 = $tmp1910->methods[5];
        $tmp1911(((panda$collections$CollectionView*) p_cl->fields), ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1908)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1908));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1909));
        panda$core$MutableMethod* $tmp1913 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1914 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1914, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1913, (panda$core$Int8*) &panda$core$MutableMethod$$shim5$panda$collections$CollectionView$T, ((panda$core$Object*) ((panda$core$Object*) $tmp1914)));
        ITable* $tmp1915 = ((panda$collections$CollectionView*) p_cl->methods)->$class->itable;
        while ($tmp1915->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1915 = $tmp1915->next;
        }
        $fn1917 $tmp1916 = $tmp1915->methods[5];
        $tmp1916(((panda$collections$CollectionView*) p_cl->methods), ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1913)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1913));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1914));
        (($fn1919) self->out->$class->vtable[3])(self->out, &$s1918);
    }
    $tmp1738 = -1;
    goto $l1736;
    $l1736:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) base1852));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) simple1765));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest1747));
    dest1747 = NULL;
    simple1765 = NULL;
    base1852 = NULL;
    switch ($tmp1738) {
        case -1: goto $l1920;
        case 0: goto $l1742;
    }
    $l1920:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$finish(org$pandalanguage$pandac$pandadoc$PandaDoc* self) {
    panda$core$String* $tmp1921;
    if (((panda$core$Bit) { self->classListPath != NULL }).value) {
    {
        ITable* $tmp1923 = ((panda$collections$CollectionView*) self->classList)->$class->itable;
        while ($tmp1923->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1923 = $tmp1923->next;
        }
        $fn1925 $tmp1924 = $tmp1923->methods[2];
        panda$core$String* $tmp1926 = $tmp1924(((panda$collections$CollectionView*) self->classList), &$s1922);
        $tmp1921 = $tmp1926;
        panda$io$File$write$panda$core$String(self->classListPath, $tmp1921);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1921));
    }
    }
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$cleanup(org$pandalanguage$pandac$pandadoc$PandaDoc* self) {
    int $tmp1929;
    {
    }
    $tmp1929 = -1;
    goto $l1927;
    $l1927:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1929) {
        case -1: goto $l1930;
    }
    $l1930:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->outDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->classListPath));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->classList));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->returns));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->params));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentClass));
}

