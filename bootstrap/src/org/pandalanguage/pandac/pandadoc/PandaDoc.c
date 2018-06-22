#include "org/pandalanguage/pandac/pandadoc/PandaDoc.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/File.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/core/Panda.h"
#include "panda/collections/HashMap.h"
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
#include "panda/collections/CollectionView.h"
#include "panda/core/Equatable.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/io/IndentedOutputStream.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/HashSet.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Method.h"
#include "panda/core/Immutable.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/ImmutableArray.h"

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$pandadoc$PandaDoc$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$pandadoc$PandaDoc$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$pandadoc$PandaDoc$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$finish} };

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$PandaDoc$class_type org$pandalanguage$pandac$pandadoc$PandaDoc$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$pandadoc$PandaDoc$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$cleanup, org$pandalanguage$pandac$pandadoc$PandaDoc$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$pandadoc$PandaDoc$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File, org$pandalanguage$pandac$pandadoc$PandaDoc$simpleName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$escape$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$pandadoc$PandaDoc$splitDoc$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Pair$LTpanda$core$String$Cpanda$core$String$GT$GT, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$getDocComment$org$pandalanguage$pandac$MethodDecl$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$PandaDoc$stripParagraph$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeAncestors$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedFields$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedMethods$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$pandadoc$PandaDoc$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$finish} };

typedef panda$core$String* (*$fn47)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*, panda$core$String*);
typedef panda$core$String* (*$fn75)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn97)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn104)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn115)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn118)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn138)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$core$String* (*$fn142)(panda$collections$ListView*);
typedef void (*$fn168)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn171)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn173)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn177)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn179)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn181)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn183)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn185)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn189)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn193)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn197)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn201)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn205)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn209)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn213)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn215)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn246)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn253)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn264)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn271)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn282)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn312)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn337)(panda$collections$ListView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn351)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn358)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn369)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn397)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn403)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn433)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn439)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$Object* (*$fn454)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn457)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn460)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef void (*$fn462)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn464)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$ListView* (*$fn485)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$core$Object* (*$fn491)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn493)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$collections$ListView* (*$fn506)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$collections$Iterator* (*$fn510)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn517)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn528)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn552)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn557)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn559)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn583)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn584)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Annotations*);
typedef void (*$fn585)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn586)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn588)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn616)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Object* (*$fn655)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn669)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$ListView* (*$fn675)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$core$Object* (*$fn681)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn683)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$collections$ListView* (*$fn696)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$collections$Iterator* (*$fn700)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn707)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn718)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn752)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn762)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn764)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn766)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$core$String* (*$fn777)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn779)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$core$Bit (*$fn798)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn819)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn822)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn824)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn825)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn834)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Annotations*);
typedef void (*$fn836)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn845)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn852)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn863)(panda$collections$Iterator*);
typedef void (*$fn866)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn868)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn869)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn875)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn877)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn881)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn886)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn887)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn889)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn891)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn892)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn898)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn907)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn920)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn957)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn964)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn975)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn977)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$collections$ListView* (*$fn994)(panda$collections$ListView*, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT);
typedef void (*$fn1000)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1009)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1016)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1027)(panda$collections$Iterator*);
typedef void (*$fn1030)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1032)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn1041)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1049)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1051)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1055)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1076)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1083)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1094)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1130)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1137)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1148)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1155)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$ListView* (*$fn1191)(panda$collections$ListView*, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT);
typedef void (*$fn1197)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1206)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1213)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1224)(panda$collections$Iterator*);
typedef void (*$fn1227)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1229)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn1238)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1246)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1248)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1252)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$ListView* (*$fn1260)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$core$Object* (*$fn1266)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1268)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn1279)(panda$core$Object*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1280)(org$pandalanguage$pandac$Type*);
typedef void (*$fn1291)(panda$core$Object*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn1292)(org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn1303)(panda$core$Object*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1304)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$io$File* (*$fn1315)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*, panda$core$String*);
typedef void (*$fn1326)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1328)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn1333)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1335)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$Int64 (*$fn1347)(panda$collections$Iterator*);
typedef void (*$fn1359)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1360)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1361)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1366)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1371)(panda$collections$CollectionView*, panda$core$MutableMethod*);
typedef void (*$fn1373)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1374)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1375)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1380)(panda$collections$CollectionView*, panda$core$MutableMethod*);
typedef void (*$fn1385)(panda$collections$CollectionView*, panda$core$MutableMethod*);
typedef void (*$fn1387)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x50\x61\x6e\x64\x61\x44\x6f\x63", 42, 5747474735547879356, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x4c\x54", 3, 1507307, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x47\x54", 3, 1506802, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x51", 2, 14928, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c", 1, 145, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x43", 2, 14914, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65", 4, 224821051, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x69\x6d\x70\x6c\x65\x4e\x61\x6d\x65", 10, -2422848206215579872, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65", 4, 224821051, NULL };
static panda$core$String $s184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 11, 4507694521940296927, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 11, 4507694521940296927, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72\x3f\x5c\x6e", 5, 20201763772, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x20\x2a\x29\x2e\x2a", 6, 1485297799044, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x3f\x3d\x5b\x20\x5c\x74\x5d\x2a\x40\x5c\x77\x2b\x29", 19, -7488746236773417835, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x64\x29\x40\x28\x5c\x77\x2a\x29\x5c\x73\x2a\x28\x2e\x2a\x29", 17, -3061574336605567443, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x63", 3, 2061711, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x70\x3e", 3, 1653735, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x73\x29\x3c\x70\x3e\x28\x2e\x2a\x29\x3c\x5c\x2f\x70\x3e\x5c\x73\x2a", 19, -187746282861049871, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x6d\x6d\x61\x72\x79", 7, 230529490176083, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e", 11, -5937374402135118271, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x63", 3, 2061711, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x65", 3, 2213718, NULL };
static panda$core$String $s541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x61\x67\x20\x27\x40", 6, 2290892119052, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x6e\x20\x66\x69\x65\x6c\x64\x73", 28, -3973010739570834313, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72", 3, 2243930, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66", 3, 2060704, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74", 8, 21561703977373775, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79", 8, 22958674678203502, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6b\x69\x6e\x64", 4, 215384923, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x68\x65\x72\x69\x74", 8, 17802859964149620, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x73\x70\x65\x63\x69\x66\x69\x65\x73\x20\x27\x40\x69\x6e\x68\x65\x72\x69\x74\x27\x2c\x20\x62\x75\x74\x20\x6e\x6f\x20\x6d\x61\x74\x63\x68\x69\x6e\x67\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x6f\x75\x6e\x64\x20\x61\x6d\x6f\x6e\x67\x20\x69\x74\x73\x20\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 77, 7383122139536139686, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x73\x70\x65\x63\x69\x66\x69\x65\x73\x20\x27\x40\x69\x6e\x68\x65\x72\x69\x74\x27\x2c\x20\x62\x75\x74\x20", 33, 1577005792040822601, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x79\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e", 32, -7234224912530298773, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x70\x3e\x28\x2e\x2a\x29\x3c\x5c\x2f\x70\x3e\x5c\x73\x2a", 15, 8989676937916321750, NULL };
static panda$core$String $s725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x64\x29\x28\x5c\x53\x2b\x29\x5c\x73\x2b\x28\x2e\x2b\x29", 16, -745059115866035108, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x27\x40\x70\x61\x72\x61\x6d\x27\x20\x63\x6f\x6e\x74\x65\x6e\x74\x73\x20\x27", 27, -1875178037567031932, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x73", 7, 229300545255688, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x65", 3, 2213718, NULL };
static panda$core$String $s787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x61\x67\x20\x27\x40", 6, 2290892119052, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x6e\x20\x6d\x65\x74\x68\x6f\x64\x73", 29, 4554292315113417764, NULL };
static panda$core$String $s808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64", 6, 2217751792842, NULL };
static panda$core$String $s813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e", 8, 21889712039024771, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d\x73", 6, 2248863720545, NULL };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e", 11, -5937374402135118271, NULL };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d\x73", 6, 2248863720545, NULL };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e", 11, -5937374402135118271, NULL };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 9, 2155955930119440779, NULL };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 9, 2155955930119440779, NULL };
static panda$core$String $s924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x6f\x6b\x65\x6e\x20\x6c\x69\x6e\x6b\x2e\x68\x74\x6d\x6c", 16, 8336040249104082495, NULL };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x46\x69\x65\x6c\x64\x73", 15, -7565896169200556928, NULL };
static panda$core$String $s1029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x6e\x6b", 4, 216415231, NULL };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x46\x69\x65\x6c\x64\x73", 15, -7565896169200556928, NULL };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x4d\x65\x74\x68\x6f\x64\x73", 16, -7838998677007085647, NULL };
static panda$core$String $s1226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64", 6, 2217751792842, NULL };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x6e\x6b", 4, 216415231, NULL };
static panda$core$String $s1241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64", 6, 2217751792842, NULL };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x4d\x65\x74\x68\x6f\x64\x73", 16, -7838998677007085647, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x78\x6d\x6c", 4, 152689484, NULL };
static panda$core$String $s1325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73", 5, 20924353935, NULL };
static panda$core$String $s1327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s1329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x69\x6d\x70\x6c\x65\x4e\x61\x6d\x65", 10, -2422848206215579872, NULL };
static panda$core$String $s1336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x6f\x75\x72\x63\x65", 6, 2281854130958, NULL };
static panda$core$String $s1341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f", 3, 1504240, NULL };
static panda$core$String $s1343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x6f\x75\x72\x63\x65\x2f", 7, 230467267226805, NULL };
static panda$core$String $s1353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73", 10, 5141924857140843769, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73", 10, 5141924857140843769, NULL };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73", 5, 20924353935, NULL };

void org$pandalanguage$pandac$pandadoc$PandaDoc$init$panda$io$File(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$io$File* p_outDir) {
    panda$core$Weak* $tmp2;
    panda$core$Weak* $tmp3;
    panda$collections$HashMap* $tmp5;
    panda$collections$HashMap* $tmp6;
    panda$io$File* $tmp8;
    panda$io$File* $tmp9;
    self->outDir = NULL;
    self->compiler = NULL;
    self->out = NULL;
    self->returns = NULL;
    self->params = NULL;
    panda$core$Weak* $tmp4 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp4, ((panda$core$Object*) NULL));
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->compiler = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$collections$HashMap* $tmp7 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->params = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    {
        $tmp8 = self->outDir;
        $tmp9 = p_outDir;
        self->outDir = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    panda$core$Weak* $tmp10;
    panda$core$Weak* $tmp11;
    panda$core$Weak* $tmp12;
    {
        $tmp10 = self->compiler;
        panda$core$Weak* $tmp13 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp13, ((panda$core$Object*) p_compiler));
        $tmp12 = $tmp13;
        $tmp11 = $tmp12;
        self->compiler = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    }
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$core$String* $returnValue14;
    panda$core$String* $tmp15;
    panda$core$String* $tmp16;
    panda$core$String* $tmp17;
    panda$core$String* $tmp18;
    panda$core$String* $tmp19;
    panda$core$String* $tmp20;
    panda$core$String* $tmp21;
    panda$core$String* $tmp22;
    panda$core$String* $tmp25 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s23, &$s24);
    $tmp22 = $tmp25;
    panda$core$String* $tmp28 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp22, &$s26, &$s27);
    $tmp21 = $tmp28;
    panda$core$String* $tmp31 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp21, &$s29, &$s30);
    $tmp20 = $tmp31;
    panda$core$String* $tmp34 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp20, &$s32, &$s33);
    $tmp19 = $tmp34;
    panda$core$String* $tmp37 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp19, &$s35, &$s36);
    $tmp18 = $tmp37;
    panda$core$String* $tmp40 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp18, &$s38, &$s39);
    $tmp17 = $tmp40;
    panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp17, p_extension);
    $tmp16 = $tmp41;
    $tmp15 = $tmp16;
    $returnValue14 = $tmp15;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    return $returnValue14;
}
panda$io$File* org$pandalanguage$pandac$pandadoc$PandaDoc$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl, panda$core$String* p_extension) {
    panda$io$File* $returnValue43;
    panda$io$File* $tmp44;
    panda$io$File* $tmp45;
    panda$core$String* $tmp46;
    panda$core$String* $tmp48 = (($fn47) self->$class->vtable[3])(self, p_cl, p_extension);
    $tmp46 = $tmp48;
    panda$io$File* $tmp49 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->outDir, $tmp46);
    $tmp45 = $tmp49;
    $tmp44 = $tmp45;
    $returnValue43 = $tmp44;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
    return $returnValue43;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$simpleName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$Type$Kind $match$71_951;
    panda$core$Int64 $tmp52;
    panda$core$String$Index$nullable index54;
    panda$core$String* $returnValue57;
    panda$core$String* $tmp58;
    panda$core$String* $tmp60;
    panda$core$String* $tmp61;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp62;
    panda$core$Bit $tmp64;
    panda$core$Int64 $tmp67;
    panda$core$String* $tmp69;
    panda$core$String* $tmp70;
    panda$core$String* $tmp71;
    panda$core$Object* $tmp72;
    panda$core$Int64 $tmp73;
    panda$core$Int64 $tmp80;
    panda$collections$Array* simpleNames85 = NULL;
    panda$collections$Array* $tmp86;
    panda$collections$Array* $tmp87;
    panda$collections$Iterator* Iter$82$1792 = NULL;
    panda$collections$Iterator* $tmp93;
    panda$collections$Iterator* $tmp94;
    org$pandalanguage$pandac$Type* s110 = NULL;
    org$pandalanguage$pandac$Type* $tmp111;
    panda$core$Object* $tmp112;
    panda$core$String* $tmp117;
    panda$core$String* $tmp122;
    panda$core$String* $tmp123;
    panda$core$String* $tmp124;
    panda$core$String* $tmp125;
    panda$core$Object* $tmp126;
    panda$core$Int64 $tmp127;
    panda$core$String* $tmp131;
    panda$collections$ListView* $tmp132;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp133;
    panda$core$Int64 $tmp134;
    panda$core$Bit $tmp135;
    panda$core$String* $tmp150;
    {
        $match$71_951 = p_t->typeKind;
        panda$core$Int64$init$builtin_int64(&$tmp52, 0);
        panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_951.$rawValue, $tmp52);
        if ($tmp53.value) {
        {
            panda$core$String$Index$nullable $tmp56 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s55);
            index54 = $tmp56;
            if (((panda$core$Bit) { !index54.nonnull }).value) {
            {
                $tmp58 = ((org$pandalanguage$pandac$Symbol*) p_t)->name;
                $returnValue57 = $tmp58;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
                return $returnValue57;
            }
            }
            panda$core$String$Index $tmp63 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(((org$pandalanguage$pandac$Symbol*) p_t)->name, ((panda$core$String$Index) index54.value));
            panda$core$Bit$init$builtin_bit(&$tmp64, false);
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp62, ((panda$core$String$Index$nullable) { $tmp63, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), $tmp64);
            panda$core$String* $tmp65 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_t)->name, $tmp62);
            $tmp61 = $tmp65;
            $tmp60 = $tmp61;
            $returnValue57 = $tmp60;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
            return $returnValue57;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp67, 1);
        panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_951.$rawValue, $tmp67);
        if ($tmp68.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp73, 0);
            panda$core$Object* $tmp74 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp73);
            $tmp72 = $tmp74;
            panda$core$String* $tmp76 = (($fn75) self->$class->vtable[5])(self, ((org$pandalanguage$pandac$Type*) $tmp72));
            $tmp71 = $tmp76;
            panda$core$String* $tmp78 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp71, &$s77);
            $tmp70 = $tmp78;
            $tmp69 = $tmp70;
            $returnValue57 = $tmp69;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
            panda$core$Panda$unref$panda$core$Object($tmp72);
            return $returnValue57;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp80, 11);
        panda$core$Bit $tmp81 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_951.$rawValue, $tmp80);
        if ($tmp81.value) {
        {
            int $tmp84;
            {
                panda$collections$Array* $tmp88 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp88);
                $tmp87 = $tmp88;
                $tmp86 = $tmp87;
                simpleNames85 = $tmp86;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
                {
                    int $tmp91;
                    {
                        ITable* $tmp95 = ((panda$collections$Iterable*) p_t->subtypes)->$class->itable;
                        while ($tmp95->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp95 = $tmp95->next;
                        }
                        $fn97 $tmp96 = $tmp95->methods[0];
                        panda$collections$Iterator* $tmp98 = $tmp96(((panda$collections$Iterable*) p_t->subtypes));
                        $tmp94 = $tmp98;
                        $tmp93 = $tmp94;
                        Iter$82$1792 = $tmp93;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
                        $l99:;
                        ITable* $tmp102 = Iter$82$1792->$class->itable;
                        while ($tmp102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp102 = $tmp102->next;
                        }
                        $fn104 $tmp103 = $tmp102->methods[0];
                        panda$core$Bit $tmp105 = $tmp103(Iter$82$1792);
                        panda$core$Bit $tmp106 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp105);
                        bool $tmp101 = $tmp106.value;
                        if (!$tmp101) goto $l100;
                        {
                            int $tmp109;
                            {
                                ITable* $tmp113 = Iter$82$1792->$class->itable;
                                while ($tmp113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp113 = $tmp113->next;
                                }
                                $fn115 $tmp114 = $tmp113->methods[1];
                                panda$core$Object* $tmp116 = $tmp114(Iter$82$1792);
                                $tmp112 = $tmp116;
                                $tmp111 = ((org$pandalanguage$pandac$Type*) $tmp112);
                                s110 = $tmp111;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp111));
                                panda$core$Panda$unref$panda$core$Object($tmp112);
                                panda$core$String* $tmp119 = (($fn118) self->$class->vtable[5])(self, s110);
                                $tmp117 = $tmp119;
                                panda$collections$Array$add$panda$collections$Array$T(simpleNames85, ((panda$core$Object*) $tmp117));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp117));
                            }
                            $tmp109 = -1;
                            goto $l107;
                            $l107:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s110));
                            s110 = NULL;
                            switch ($tmp109) {
                                case -1: goto $l120;
                            }
                            $l120:;
                        }
                        goto $l99;
                        $l100:;
                    }
                    $tmp91 = -1;
                    goto $l89;
                    $l89:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$82$1792));
                    Iter$82$1792 = NULL;
                    switch ($tmp91) {
                        case -1: goto $l121;
                    }
                    $l121:;
                }
                panda$core$Int64$init$builtin_int64(&$tmp127, 0);
                panda$core$Object* $tmp128 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(simpleNames85, $tmp127);
                $tmp126 = $tmp128;
                panda$core$String* $tmp130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((panda$core$String*) $tmp126), &$s129);
                $tmp125 = $tmp130;
                panda$core$Int64$init$builtin_int64(&$tmp134, 1);
                panda$core$Bit$init$builtin_bit(&$tmp135, false);
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp133, ((panda$core$Int64$nullable) { $tmp134, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp135);
                ITable* $tmp136 = ((panda$collections$ListView*) simpleNames85)->$class->itable;
                while ($tmp136->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp136 = $tmp136->next;
                }
                $fn138 $tmp137 = $tmp136->methods[2];
                panda$collections$ListView* $tmp139 = $tmp137(((panda$collections$ListView*) simpleNames85), $tmp133);
                $tmp132 = $tmp139;
                ITable* $tmp140 = $tmp132->$class->itable;
                while ($tmp140->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp140 = $tmp140->next;
                }
                $fn142 $tmp141 = $tmp140->methods[4];
                panda$core$String* $tmp143 = $tmp141($tmp132);
                $tmp131 = $tmp143;
                panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp125, $tmp131);
                $tmp124 = $tmp144;
                panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp124, &$s145);
                $tmp123 = $tmp146;
                $tmp122 = $tmp123;
                $returnValue57 = $tmp122;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp123));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp124));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp125));
                panda$core$Panda$unref$panda$core$Object($tmp126);
                $tmp84 = 0;
                goto $l82;
                $l147:;
                return $returnValue57;
            }
            $l82:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) simpleNames85));
            simpleNames85 = NULL;
            switch ($tmp84) {
                case 0: goto $l147;
            }
            $l149:;
        }
        }
        else {
        {
            $tmp150 = ((org$pandalanguage$pandac$Symbol*) p_t)->name;
            $returnValue57 = $tmp150;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
            return $returnValue57;
        }
        }
        }
        }
    }
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$escape$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_s) {
    panda$core$String* $returnValue152;
    panda$core$String* $tmp153;
    panda$core$String* $tmp154;
    panda$core$String* $tmp155;
    panda$core$String* $tmp156;
    panda$core$String* $tmp159 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_s, &$s157, &$s158);
    $tmp156 = $tmp159;
    panda$core$String* $tmp162 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp156, &$s160, &$s161);
    $tmp155 = $tmp162;
    panda$core$String* $tmp165 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp155, &$s163, &$s164);
    $tmp154 = $tmp165;
    $tmp153 = $tmp154;
    $returnValue152 = $tmp153;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
    return $returnValue152;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp170;
    panda$core$String* $tmp175;
    panda$core$String* $tmp176;
    (($fn168) self->out->$class->vtable[2])(self->out, &$s167);
    panda$core$String* $tmp172 = (($fn171) self->$class->vtable[6])(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    $tmp170 = $tmp172;
    (($fn173) self->out->$class->vtable[4])(self->out, &$s169, $tmp170);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
    panda$core$String* $tmp178 = (($fn177) self->$class->vtable[5])(self, p_t);
    $tmp176 = $tmp178;
    panda$core$String* $tmp180 = (($fn179) self->$class->vtable[6])(self, $tmp176);
    $tmp175 = $tmp180;
    (($fn181) self->out->$class->vtable[4])(self->out, &$s174, $tmp175);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp175));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
    (($fn183) self->out->$class->vtable[3])(self->out, &$s182);
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Annotations* p_a) {
    (($fn185) self->out->$class->vtable[2])(self->out, &$s184);
    panda$core$Bit $tmp186 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(p_a);
    if ($tmp186.value) {
    {
        (($fn189) self->out->$class->vtable[4])(self->out, &$s187, &$s188);
    }
    }
    panda$core$Bit $tmp190 = org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(p_a);
    if ($tmp190.value) {
    {
        (($fn193) self->out->$class->vtable[4])(self->out, &$s191, &$s192);
    }
    }
    panda$core$Bit $tmp194 = org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(p_a);
    if ($tmp194.value) {
    {
        (($fn197) self->out->$class->vtable[4])(self->out, &$s195, &$s196);
    }
    }
    panda$core$Bit $tmp198 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_a);
    if ($tmp198.value) {
    {
        (($fn201) self->out->$class->vtable[4])(self->out, &$s199, &$s200);
    }
    }
    panda$core$Bit $tmp202 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_a);
    if ($tmp202.value) {
    {
        (($fn205) self->out->$class->vtable[4])(self->out, &$s203, &$s204);
    }
    }
    panda$core$Bit $tmp206 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_a);
    if ($tmp206.value) {
    {
        (($fn209) self->out->$class->vtable[4])(self->out, &$s207, &$s208);
    }
    }
    panda$core$Bit $tmp210 = org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(p_a);
    if ($tmp210.value) {
    {
        (($fn213) self->out->$class->vtable[4])(self->out, &$s211, &$s212);
    }
    }
    (($fn215) self->out->$class->vtable[3])(self->out, &$s214);
}
panda$collections$ListView* org$pandalanguage$pandac$pandadoc$PandaDoc$splitDoc$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Pair$LTpanda$core$String$Cpanda$core$String$GT$GT(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_text) {
    panda$collections$Array* lines219 = NULL;
    panda$collections$Array* $tmp220;
    panda$collections$Array* $tmp221;
    panda$collections$ListView* $tmp223;
    panda$core$RegularExpression* $tmp224;
    panda$core$Object* $tmp228;
    panda$core$Int64 $tmp229;
    panda$core$Object* $tmp233;
    panda$core$Int64 $tmp234;
    panda$core$Int64 spaces236;
    panda$core$Int64 $tmp237;
    panda$collections$Iterator* Iter$140$9241 = NULL;
    panda$collections$Iterator* $tmp242;
    panda$collections$Iterator* $tmp243;
    panda$core$String* line259 = NULL;
    panda$core$String* $tmp260;
    panda$core$Object* $tmp261;
    panda$core$String* $tmp266;
    panda$core$Object* $tmp273;
    panda$collections$ListView* $tmp274;
    panda$core$RegularExpression* $tmp275;
    panda$core$Int64 $tmp279;
    panda$core$Range$LTpanda$core$Int64$GT $tmp288;
    panda$core$Int64 $tmp289;
    panda$core$Bit $tmp291;
    panda$core$String* $tmp305;
    panda$core$Object* $tmp306;
    panda$core$String* $tmp314;
    panda$core$Object* $tmp315;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp317;
    panda$core$Bit $tmp318;
    panda$collections$Array* result326 = NULL;
    panda$collections$Array* $tmp327;
    panda$collections$Array* $tmp328;
    panda$collections$ListView* split330 = NULL;
    panda$collections$ListView* $tmp331;
    panda$collections$ListView* $tmp332;
    panda$core$String* $tmp333;
    panda$core$RegularExpression* $tmp339;
    panda$collections$Iterator* Iter$153$9346 = NULL;
    panda$collections$Iterator* $tmp347;
    panda$collections$Iterator* $tmp348;
    panda$core$String* raw364 = NULL;
    panda$core$String* $tmp365;
    panda$core$Object* $tmp366;
    panda$core$String* s371 = NULL;
    panda$core$String* $tmp372;
    panda$core$String* $tmp373;
    org$pandalanguage$pandac$Pair* $tmp378;
    panda$collections$ListView* parsed384 = NULL;
    panda$collections$ListView* $tmp385;
    panda$collections$ListView* $tmp386;
    panda$core$RegularExpression* $tmp387;
    org$pandalanguage$pandac$Pair* $tmp391;
    panda$core$Object* $tmp393;
    panda$core$Int64 $tmp394;
    panda$core$Object* $tmp399;
    panda$core$Int64 $tmp400;
    panda$collections$ListView* $returnValue408;
    panda$collections$ListView* $tmp409;
    int $tmp218;
    {
        panda$collections$Array* $tmp222 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$core$RegularExpression* $tmp225 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp225, &$s226);
        $tmp224 = $tmp225;
        panda$collections$ListView* $tmp227 = panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT(p_text, $tmp224);
        $tmp223 = $tmp227;
        panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp222, ((panda$collections$CollectionView*) $tmp223));
        $tmp221 = $tmp222;
        $tmp220 = $tmp221;
        lines219 = $tmp220;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
        panda$core$Int64$init$builtin_int64(&$tmp229, 0);
        panda$core$Object* $tmp230 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(lines219, $tmp229);
        $tmp228 = $tmp230;
        panda$core$Bit $tmp232 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((panda$core$String*) $tmp228), &$s231);
        panda$core$Panda$unref$panda$core$Object($tmp228);
        if ($tmp232.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp234, 0);
            panda$core$Object* $tmp235 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(lines219, $tmp234);
            $tmp233 = $tmp235;
            panda$core$Panda$unref$panda$core$Object($tmp233);
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp237, 9223372036854775807);
        spaces236 = $tmp237;
        {
            int $tmp240;
            {
                ITable* $tmp244 = ((panda$collections$Iterable*) lines219)->$class->itable;
                while ($tmp244->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp244 = $tmp244->next;
                }
                $fn246 $tmp245 = $tmp244->methods[0];
                panda$collections$Iterator* $tmp247 = $tmp245(((panda$collections$Iterable*) lines219));
                $tmp243 = $tmp247;
                $tmp242 = $tmp243;
                Iter$140$9241 = $tmp242;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
                $l248:;
                ITable* $tmp251 = Iter$140$9241->$class->itable;
                while ($tmp251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp251 = $tmp251->next;
                }
                $fn253 $tmp252 = $tmp251->methods[0];
                panda$core$Bit $tmp254 = $tmp252(Iter$140$9241);
                panda$core$Bit $tmp255 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp254);
                bool $tmp250 = $tmp255.value;
                if (!$tmp250) goto $l249;
                {
                    int $tmp258;
                    {
                        ITable* $tmp262 = Iter$140$9241->$class->itable;
                        while ($tmp262->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp262 = $tmp262->next;
                        }
                        $fn264 $tmp263 = $tmp262->methods[1];
                        panda$core$Object* $tmp265 = $tmp263(Iter$140$9241);
                        $tmp261 = $tmp265;
                        $tmp260 = ((panda$core$String*) $tmp261);
                        line259 = $tmp260;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp260));
                        panda$core$Panda$unref$panda$core$Object($tmp261);
                        panda$core$String* $tmp267 = panda$core$String$trim$R$panda$core$String(line259);
                        $tmp266 = $tmp267;
                        ITable* $tmp269 = ((panda$core$Equatable*) $tmp266)->$class->itable;
                        while ($tmp269->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                            $tmp269 = $tmp269->next;
                        }
                        $fn271 $tmp270 = $tmp269->methods[1];
                        panda$core$Bit $tmp272 = $tmp270(((panda$core$Equatable*) $tmp266), ((panda$core$Equatable*) &$s268));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
                        if ($tmp272.value) {
                        {
                            panda$core$RegularExpression* $tmp276 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                            panda$core$RegularExpression$init$panda$core$String($tmp276, &$s277);
                            $tmp275 = $tmp276;
                            panda$collections$ListView* $tmp278 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(line259, $tmp275);
                            $tmp274 = $tmp278;
                            panda$core$Int64$init$builtin_int64(&$tmp279, 0);
                            ITable* $tmp280 = $tmp274->$class->itable;
                            while ($tmp280->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp280 = $tmp280->next;
                            }
                            $fn282 $tmp281 = $tmp280->methods[0];
                            panda$core$Object* $tmp283 = $tmp281($tmp274, $tmp279);
                            $tmp273 = $tmp283;
                            panda$core$Int64 $tmp284 = panda$core$String$byteLength$R$panda$core$Int64(((panda$core$String*) $tmp273));
                            panda$core$Int64 $tmp285 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(spaces236, $tmp284);
                            spaces236 = $tmp285;
                            panda$core$Panda$unref$panda$core$Object($tmp273);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
                        }
                        }
                    }
                    $tmp258 = -1;
                    goto $l256;
                    $l256:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) line259));
                    line259 = NULL;
                    switch ($tmp258) {
                        case -1: goto $l286;
                    }
                    $l286:;
                }
                goto $l248;
                $l249:;
            }
            $tmp240 = -1;
            goto $l238;
            $l238:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$140$9241));
            Iter$140$9241 = NULL;
            switch ($tmp240) {
                case -1: goto $l287;
            }
            $l287:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp289, 0);
        panda$core$Int64 $tmp290 = panda$collections$Array$get_count$R$panda$core$Int64(lines219);
        panda$core$Bit$init$builtin_bit(&$tmp291, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp288, $tmp289, $tmp290, $tmp291);
        int64_t $tmp293 = $tmp288.min.value;
        panda$core$Int64 i292 = { $tmp293 };
        int64_t $tmp295 = $tmp288.max.value;
        bool $tmp296 = $tmp288.inclusive.value;
        if ($tmp296) goto $l303; else goto $l304;
        $l303:;
        if ($tmp293 <= $tmp295) goto $l297; else goto $l299;
        $l304:;
        if ($tmp293 < $tmp295) goto $l297; else goto $l299;
        $l297:;
        {
            panda$core$Object* $tmp307 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(lines219, i292);
            $tmp306 = $tmp307;
            panda$core$String* $tmp308 = panda$core$String$trim$R$panda$core$String(((panda$core$String*) $tmp306));
            $tmp305 = $tmp308;
            ITable* $tmp310 = ((panda$core$Equatable*) $tmp305)->$class->itable;
            while ($tmp310->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                $tmp310 = $tmp310->next;
            }
            $fn312 $tmp311 = $tmp310->methods[1];
            panda$core$Bit $tmp313 = $tmp311(((panda$core$Equatable*) $tmp305), ((panda$core$Equatable*) &$s309));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
            panda$core$Panda$unref$panda$core$Object($tmp306);
            if ($tmp313.value) {
            {
                panda$core$Object* $tmp316 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(lines219, i292);
                $tmp315 = $tmp316;
                panda$core$Bit$init$builtin_bit(&$tmp318, false);
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp317, ((panda$core$Int64$nullable) { spaces236, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp318);
                panda$core$String* $tmp319 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((panda$core$String*) $tmp315), $tmp317);
                $tmp314 = $tmp319;
                panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(lines219, i292, ((panda$core$Object*) $tmp314));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
                panda$core$Panda$unref$panda$core$Object($tmp315);
            }
            }
        }
        $l300:;
        int64_t $tmp321 = $tmp295 - i292.value;
        if ($tmp296) goto $l322; else goto $l323;
        $l322:;
        if ((uint64_t) $tmp321 >= 1) goto $l320; else goto $l299;
        $l323:;
        if ((uint64_t) $tmp321 > 1) goto $l320; else goto $l299;
        $l320:;
        i292.value += 1;
        goto $l297;
        $l299:;
        panda$collections$Array* $tmp329 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp329);
        $tmp328 = $tmp329;
        $tmp327 = $tmp328;
        result326 = $tmp327;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
        ITable* $tmp335 = ((panda$collections$ListView*) lines219)->$class->itable;
        while ($tmp335->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp335 = $tmp335->next;
        }
        $fn337 $tmp336 = $tmp335->methods[5];
        panda$core$String* $tmp338 = $tmp336(((panda$collections$ListView*) lines219), &$s334);
        $tmp333 = $tmp338;
        panda$core$RegularExpression* $tmp340 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp340, &$s341);
        $tmp339 = $tmp340;
        panda$collections$ListView* $tmp342 = panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT($tmp333, $tmp339);
        $tmp332 = $tmp342;
        $tmp331 = $tmp332;
        split330 = $tmp331;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
        {
            int $tmp345;
            {
                ITable* $tmp349 = ((panda$collections$Iterable*) split330)->$class->itable;
                while ($tmp349->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp349 = $tmp349->next;
                }
                $fn351 $tmp350 = $tmp349->methods[0];
                panda$collections$Iterator* $tmp352 = $tmp350(((panda$collections$Iterable*) split330));
                $tmp348 = $tmp352;
                $tmp347 = $tmp348;
                Iter$153$9346 = $tmp347;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp347));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
                $l353:;
                ITable* $tmp356 = Iter$153$9346->$class->itable;
                while ($tmp356->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp356 = $tmp356->next;
                }
                $fn358 $tmp357 = $tmp356->methods[0];
                panda$core$Bit $tmp359 = $tmp357(Iter$153$9346);
                panda$core$Bit $tmp360 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp359);
                bool $tmp355 = $tmp360.value;
                if (!$tmp355) goto $l354;
                {
                    int $tmp363;
                    {
                        ITable* $tmp367 = Iter$153$9346->$class->itable;
                        while ($tmp367->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp367 = $tmp367->next;
                        }
                        $fn369 $tmp368 = $tmp367->methods[1];
                        panda$core$Object* $tmp370 = $tmp368(Iter$153$9346);
                        $tmp366 = $tmp370;
                        $tmp365 = ((panda$core$String*) $tmp366);
                        raw364 = $tmp365;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp365));
                        panda$core$Panda$unref$panda$core$Object($tmp366);
                        panda$core$String* $tmp374 = panda$core$String$trim$R$panda$core$String(raw364);
                        $tmp373 = $tmp374;
                        $tmp372 = $tmp373;
                        s371 = $tmp372;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp372));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp373));
                        panda$core$Bit $tmp376 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(s371, &$s375);
                        panda$core$Bit $tmp377 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp376);
                        if ($tmp377.value) {
                        {
                            org$pandalanguage$pandac$Pair* $tmp379 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
                            org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp379, ((panda$core$Object*) &$s380), ((panda$core$Object*) s371));
                            $tmp378 = $tmp379;
                            panda$collections$Array$add$panda$collections$Array$T(result326, ((panda$core$Object*) $tmp378));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp378));
                        }
                        }
                        else {
                        {
                            int $tmp383;
                            {
                                panda$core$RegularExpression* $tmp388 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                                panda$core$RegularExpression$init$panda$core$String($tmp388, &$s389);
                                $tmp387 = $tmp388;
                                panda$collections$ListView* $tmp390 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(s371, $tmp387);
                                $tmp386 = $tmp390;
                                $tmp385 = $tmp386;
                                parsed384 = $tmp385;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp385));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp386));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
                                if (((panda$core$Bit) { parsed384 != NULL }).value) {
                                {
                                    org$pandalanguage$pandac$Pair* $tmp392 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
                                    panda$core$Int64$init$builtin_int64(&$tmp394, 0);
                                    ITable* $tmp395 = parsed384->$class->itable;
                                    while ($tmp395->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                        $tmp395 = $tmp395->next;
                                    }
                                    $fn397 $tmp396 = $tmp395->methods[0];
                                    panda$core$Object* $tmp398 = $tmp396(parsed384, $tmp394);
                                    $tmp393 = $tmp398;
                                    panda$core$Int64$init$builtin_int64(&$tmp400, 1);
                                    ITable* $tmp401 = parsed384->$class->itable;
                                    while ($tmp401->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                        $tmp401 = $tmp401->next;
                                    }
                                    $fn403 $tmp402 = $tmp401->methods[0];
                                    panda$core$Object* $tmp404 = $tmp402(parsed384, $tmp400);
                                    $tmp399 = $tmp404;
                                    org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp392, ((panda$core$Object*) ((panda$core$String*) $tmp393)), ((panda$core$Object*) ((panda$core$String*) $tmp399)));
                                    $tmp391 = $tmp392;
                                    panda$collections$Array$add$panda$collections$Array$T(result326, ((panda$core$Object*) $tmp391));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
                                    panda$core$Panda$unref$panda$core$Object($tmp399);
                                    panda$core$Panda$unref$panda$core$Object($tmp393);
                                }
                                }
                            }
                            $tmp383 = -1;
                            goto $l381;
                            $l381:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parsed384));
                            parsed384 = NULL;
                            switch ($tmp383) {
                                case -1: goto $l405;
                            }
                            $l405:;
                        }
                        }
                    }
                    $tmp363 = -1;
                    goto $l361;
                    $l361:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s371));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) raw364));
                    raw364 = NULL;
                    s371 = NULL;
                    switch ($tmp363) {
                        case -1: goto $l406;
                    }
                    $l406:;
                }
                goto $l353;
                $l354:;
            }
            $tmp345 = -1;
            goto $l343;
            $l343:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$153$9346));
            Iter$153$9346 = NULL;
            switch ($tmp345) {
                case -1: goto $l407;
            }
            $l407:;
        }
        $tmp409 = ((panda$collections$ListView*) result326);
        $returnValue408 = $tmp409;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp409));
        $tmp218 = 0;
        goto $l216;
        $l410:;
        return $returnValue408;
    }
    $l216:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) split330));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result326));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lines219));
    lines219 = NULL;
    result326 = NULL;
    split330 = NULL;
    switch ($tmp218) {
        case 0: goto $l410;
    }
    $l412:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_doccomment) {
    panda$core$String* summary416 = NULL;
    panda$core$String$Index$nullable index417;
    panda$core$String* $tmp420;
    panda$core$String* $tmp421;
    panda$core$String* $tmp422;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp423;
    panda$core$Bit $tmp424;
    panda$core$String* $tmp426;
    panda$core$String* $tmp427;
    org$pandalanguage$pandac$pandadoc$Markdown* md428 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp429;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp430;
    panda$core$Int64 oldLevel434;
    panda$core$Int64 $tmp435;
    panda$core$String* processedSummary436 = NULL;
    panda$core$String* $tmp437;
    panda$core$String* $tmp438;
    panda$core$String* $tmp443;
    panda$core$String* $tmp444;
    panda$core$Object* $tmp445;
    panda$collections$ListView* $tmp446;
    panda$core$RegularExpression* $tmp447;
    panda$core$Int64 $tmp451;
    panda$core$String* $tmp459;
    int $tmp415;
    {
        memset(&summary416, 0, sizeof(summary416));
        panda$core$String$Index$nullable $tmp419 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(p_doccomment, &$s418);
        index417 = $tmp419;
        if (((panda$core$Bit) { index417.nonnull }).value) {
        {
            {
                $tmp420 = summary416;
                panda$core$Bit$init$builtin_bit(&$tmp424, true);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp423, ((panda$core$String$Index$nullable) { .nonnull = false }), index417, $tmp424);
                panda$core$String* $tmp425 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_doccomment, $tmp423);
                $tmp422 = $tmp425;
                $tmp421 = $tmp422;
                summary416 = $tmp421;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp421));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
            }
        }
        }
        else {
        {
            {
                $tmp426 = summary416;
                $tmp427 = p_doccomment;
                summary416 = $tmp427;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp427));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp426));
            }
        }
        }
        org$pandalanguage$pandac$pandadoc$Markdown* $tmp431 = (org$pandalanguage$pandac$pandadoc$Markdown*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$class);
        org$pandalanguage$pandac$pandadoc$Markdown$init($tmp431);
        $tmp430 = $tmp431;
        $tmp429 = $tmp430;
        md428 = $tmp429;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp429));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
        (($fn433) self->out->$class->vtable[2])(self->out, &$s432);
        oldLevel434 = self->out->out->level;
        panda$core$Int64$init$builtin_int64(&$tmp435, 0);
        self->out->out->level = $tmp435;
        panda$core$String* $tmp440 = (($fn439) md428->$class->vtable[2])(md428, summary416);
        $tmp438 = $tmp440;
        $tmp437 = $tmp438;
        processedSummary436 = $tmp437;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp437));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
        panda$core$Bit $tmp442 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(processedSummary436, &$s441);
        if ($tmp442.value) {
        {
            {
                $tmp443 = processedSummary436;
                panda$core$RegularExpression* $tmp448 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                panda$core$RegularExpression$init$panda$core$String($tmp448, &$s449);
                $tmp447 = $tmp448;
                panda$collections$ListView* $tmp450 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(processedSummary436, $tmp447);
                $tmp446 = $tmp450;
                panda$core$Int64$init$builtin_int64(&$tmp451, 0);
                ITable* $tmp452 = $tmp446->$class->itable;
                while ($tmp452->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp452 = $tmp452->next;
                }
                $fn454 $tmp453 = $tmp452->methods[0];
                panda$core$Object* $tmp455 = $tmp453($tmp446, $tmp451);
                $tmp445 = $tmp455;
                $tmp444 = ((panda$core$String*) $tmp445);
                processedSummary436 = $tmp444;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp444));
                panda$core$Panda$unref$panda$core$Object($tmp445);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
            }
        }
        }
        (($fn457) self->out->$class->vtable[4])(self->out, &$s456, processedSummary436);
        panda$core$String* $tmp461 = (($fn460) md428->$class->vtable[2])(md428, p_doccomment);
        $tmp459 = $tmp461;
        (($fn462) self->out->$class->vtable[4])(self->out, &$s458, $tmp459);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
        self->out->out->level = oldLevel434;
        (($fn464) self->out->$class->vtable[3])(self->out, &$s463);
    }
    $tmp415 = -1;
    goto $l413;
    $l413:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) processedSummary436));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) md428));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) summary416));
    md428 = NULL;
    processedSummary436 = NULL;
    switch ($tmp415) {
        case -1: goto $l465;
    }
    $l465:;
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $returnValue466;
    panda$core$Bit $tmp467 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(p_f->annotations);
    panda$core$Bit $tmp468 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp467);
    $returnValue466 = $tmp468;
    return $returnValue466;
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $returnValue470;
    panda$core$Bit $tmp472 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp473 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp472);
    bool $tmp471 = $tmp473.value;
    if (!$tmp471) goto $l474;
    panda$core$Bit $tmp475 = org$pandalanguage$pandac$Annotations$isSynthetic$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp476 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp475);
    $tmp471 = $tmp476.value;
    $l474:;
    panda$core$Bit $tmp477 = { $tmp471 };
    $returnValue470 = $tmp477;
    return $returnValue470;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$collections$ListView* split482 = NULL;
    panda$collections$ListView* $tmp483;
    panda$collections$ListView* $tmp484;
    panda$core$Object* $tmp487;
    panda$core$Int64 $tmp488;
    panda$collections$Iterator* Iter$204$13497 = NULL;
    panda$collections$Iterator* $tmp498;
    panda$collections$Iterator* $tmp499;
    panda$collections$ListView* $tmp500;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp501;
    panda$core$Int64 $tmp502;
    panda$core$Bit $tmp503;
    org$pandalanguage$pandac$Pair* tag523 = NULL;
    org$pandalanguage$pandac$Pair* $tmp524;
    panda$core$Object* $tmp525;
    panda$core$String* $match$205_17533 = NULL;
    panda$core$String* $tmp534;
    panda$core$Object* $tmp537;
    panda$core$String* $tmp539;
    panda$core$String* $tmp540;
    if (((panda$core$Bit) { p_f->doccomment != NULL }).value) {
    {
        int $tmp481;
        {
            panda$collections$ListView* $tmp486 = (($fn485) self->$class->vtable[9])(self, p_f->doccomment);
            $tmp484 = $tmp486;
            $tmp483 = $tmp484;
            split482 = $tmp483;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp483));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
            panda$core$Int64$init$builtin_int64(&$tmp488, 0);
            ITable* $tmp489 = split482->$class->itable;
            while ($tmp489->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp489 = $tmp489->next;
            }
            $fn491 $tmp490 = $tmp489->methods[0];
            panda$core$Object* $tmp492 = $tmp490(split482, $tmp488);
            $tmp487 = $tmp492;
            (($fn493) self->$class->vtable[10])(self, ((panda$core$String*) ((org$pandalanguage$pandac$Pair*) $tmp487)->second));
            panda$core$Panda$unref$panda$core$Object($tmp487);
            {
                int $tmp496;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp502, 1);
                    panda$core$Bit$init$builtin_bit(&$tmp503, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp501, ((panda$core$Int64$nullable) { $tmp502, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp503);
                    ITable* $tmp504 = split482->$class->itable;
                    while ($tmp504->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp504 = $tmp504->next;
                    }
                    $fn506 $tmp505 = $tmp504->methods[2];
                    panda$collections$ListView* $tmp507 = $tmp505(split482, $tmp501);
                    $tmp500 = $tmp507;
                    ITable* $tmp508 = ((panda$collections$Iterable*) $tmp500)->$class->itable;
                    while ($tmp508->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp508 = $tmp508->next;
                    }
                    $fn510 $tmp509 = $tmp508->methods[0];
                    panda$collections$Iterator* $tmp511 = $tmp509(((panda$collections$Iterable*) $tmp500));
                    $tmp499 = $tmp511;
                    $tmp498 = $tmp499;
                    Iter$204$13497 = $tmp498;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp498));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp499));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
                    $l512:;
                    ITable* $tmp515 = Iter$204$13497->$class->itable;
                    while ($tmp515->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp515 = $tmp515->next;
                    }
                    $fn517 $tmp516 = $tmp515->methods[0];
                    panda$core$Bit $tmp518 = $tmp516(Iter$204$13497);
                    panda$core$Bit $tmp519 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp518);
                    bool $tmp514 = $tmp519.value;
                    if (!$tmp514) goto $l513;
                    {
                        int $tmp522;
                        {
                            ITable* $tmp526 = Iter$204$13497->$class->itable;
                            while ($tmp526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp526 = $tmp526->next;
                            }
                            $fn528 $tmp527 = $tmp526->methods[1];
                            panda$core$Object* $tmp529 = $tmp527(Iter$204$13497);
                            $tmp525 = $tmp529;
                            $tmp524 = ((org$pandalanguage$pandac$Pair*) $tmp525);
                            tag523 = $tmp524;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp524));
                            panda$core$Panda$unref$panda$core$Object($tmp525);
                            int $tmp532;
                            {
                                $tmp534 = ((panda$core$String*) tag523->first);
                                $match$205_17533 = $tmp534;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp534));
                                panda$core$Bit $tmp536 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$205_17533, &$s535);
                                if ($tmp536.value) {
                                {
                                }
                                }
                                else {
                                {
                                    panda$core$Object* $tmp538 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                    $tmp537 = $tmp538;
                                    panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s541, ((panda$core$String*) tag523->first));
                                    $tmp540 = $tmp542;
                                    panda$core$String* $tmp544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp540, &$s543);
                                    $tmp539 = $tmp544;
                                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp537), ((org$pandalanguage$pandac$Symbol*) p_f)->position, $tmp539);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp539));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp540));
                                    panda$core$Panda$unref$panda$core$Object($tmp537);
                                }
                                }
                            }
                            $tmp532 = -1;
                            goto $l530;
                            $l530:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
                            switch ($tmp532) {
                                case -1: goto $l545;
                            }
                            $l545:;
                        }
                        $tmp522 = -1;
                        goto $l520;
                        $l520:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag523));
                        tag523 = NULL;
                        switch ($tmp522) {
                            case -1: goto $l546;
                        }
                        $l546:;
                    }
                    goto $l512;
                    $l513:;
                }
                $tmp496 = -1;
                goto $l494;
                $l494:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$204$13497));
                Iter$204$13497 = NULL;
                switch ($tmp496) {
                    case -1: goto $l547;
                }
                $l547:;
            }
        }
        $tmp481 = -1;
        goto $l479;
        $l479:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) split482));
        split482 = NULL;
        switch ($tmp481) {
            case -1: goto $l548;
        }
        $l548:;
    }
    }
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$String* kind560 = NULL;
    org$pandalanguage$pandac$FieldDecl$Kind $match$221_9561;
    panda$core$Int64 $tmp562;
    panda$core$String* $tmp564;
    panda$core$String* $tmp565;
    panda$core$Int64 $tmp567;
    panda$core$String* $tmp569;
    panda$core$String* $tmp570;
    panda$core$Int64 $tmp572;
    panda$core$String* $tmp574;
    panda$core$String* $tmp575;
    panda$core$Int64 $tmp577;
    panda$core$String* $tmp579;
    panda$core$String* $tmp580;
    int $tmp551;
    {
        panda$core$Bit $tmp553 = (($fn552) self->$class->vtable[11])(self, p_f);
        panda$core$Bit $tmp554 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp553);
        if ($tmp554.value) {
        {
            $tmp551 = 0;
            goto $l549;
            $l555:;
            return;
        }
        }
        (($fn557) self->out->$class->vtable[2])(self->out, &$s556);
        (($fn559) self->out->$class->vtable[4])(self->out, &$s558, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
        memset(&kind560, 0, sizeof(kind560));
        {
            $match$221_9561 = p_f->fieldKind;
            panda$core$Int64$init$builtin_int64(&$tmp562, 0);
            panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$221_9561.$rawValue, $tmp562);
            if ($tmp563.value) {
            {
                {
                    $tmp564 = kind560;
                    $tmp565 = &$s566;
                    kind560 = $tmp565;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp565));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp564));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp567, 1);
            panda$core$Bit $tmp568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$221_9561.$rawValue, $tmp567);
            if ($tmp568.value) {
            {
                {
                    $tmp569 = kind560;
                    $tmp570 = &$s571;
                    kind560 = $tmp570;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp570));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp572, 2);
            panda$core$Bit $tmp573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$221_9561.$rawValue, $tmp572);
            if ($tmp573.value) {
            {
                {
                    $tmp574 = kind560;
                    $tmp575 = &$s576;
                    kind560 = $tmp575;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp575));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp574));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp577, 3);
            panda$core$Bit $tmp578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$221_9561.$rawValue, $tmp577);
            if ($tmp578.value) {
            {
                {
                    $tmp579 = kind560;
                    $tmp580 = &$s581;
                    kind560 = $tmp580;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp580));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
                }
            }
            }
            }
            }
            }
        }
        (($fn583) self->out->$class->vtable[4])(self->out, &$s582, kind560);
        (($fn584) self->$class->vtable[8])(self, p_f->annotations);
        (($fn585) self->$class->vtable[7])(self, p_f->type);
        (($fn586) self->$class->vtable[13])(self, p_f);
        (($fn588) self->out->$class->vtable[3])(self->out, &$s587);
    }
    $tmp551 = -1;
    goto $l549;
    $l549:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) kind560));
    switch ($tmp551) {
        case -1: goto $l589;
        case 0: goto $l555;
    }
    $l589:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$getDocComment$org$pandalanguage$pandac$MethodDecl$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* $tmp592;
    org$pandalanguage$pandac$MethodDecl* overridden600 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp601;
    org$pandalanguage$pandac$MethodDecl* $tmp602;
    panda$core$Object* $tmp603;
    panda$core$Object* $tmp606;
    panda$core$String* $returnValue609;
    panda$core$String* $tmp610;
    panda$core$String* result613 = NULL;
    panda$core$String* $tmp614;
    panda$core$String* $tmp615;
    panda$core$Object* $tmp618;
    panda$core$String* $tmp620;
    panda$core$String* $tmp622;
    panda$core$String* $tmp623;
    panda$core$String* $tmp624;
    panda$core$String* $tmp630;
    panda$core$String* $tmp633;
    panda$core$String* $tmp637;
    bool $tmp590 = ((panda$core$Bit) { p_m->doccomment != NULL }).value;
    if (!$tmp590) goto $l591;
    panda$core$String* $tmp593 = panda$core$String$trim$R$panda$core$String(p_m->doccomment);
    $tmp592 = $tmp593;
    panda$core$Bit $tmp595 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp592, &$s594);
    $tmp590 = $tmp595.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
    $l591:;
    panda$core$Bit $tmp596 = { $tmp590 };
    if ($tmp596.value) {
    {
        int $tmp599;
        {
            panda$core$Object* $tmp604 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
            $tmp603 = $tmp604;
            org$pandalanguage$pandac$MethodDecl* $tmp605 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp603), p_m);
            $tmp602 = $tmp605;
            $tmp601 = $tmp602;
            overridden600 = $tmp601;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp601));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp602));
            panda$core$Panda$unref$panda$core$Object($tmp603);
            if (((panda$core$Bit) { overridden600 == NULL }).value) {
            {
                panda$core$Object* $tmp607 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp606 = $tmp607;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp606), ((org$pandalanguage$pandac$Symbol*) p_m)->position, &$s608);
                panda$core$Panda$unref$panda$core$Object($tmp606);
                $tmp610 = NULL;
                $returnValue609 = $tmp610;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp610));
                $tmp599 = 0;
                goto $l597;
                $l611:;
                return $returnValue609;
            }
            }
            panda$core$String* $tmp617 = (($fn616) self->$class->vtable[15])(self, overridden600);
            $tmp615 = $tmp617;
            $tmp614 = $tmp615;
            result613 = $tmp614;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp614));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
            if (((panda$core$Bit) { result613 == NULL }).value) {
            {
                panda$core$Object* $tmp619 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp618 = $tmp619;
                panda$core$String* $tmp625 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden600);
                $tmp624 = $tmp625;
                panda$core$String* $tmp626 = panda$core$String$convert$R$panda$core$String($tmp624);
                $tmp623 = $tmp626;
                panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp623, &$s627);
                $tmp622 = $tmp628;
                panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s621, $tmp622);
                $tmp620 = $tmp629;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp618), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp620);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp622));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
                panda$core$Panda$unref$panda$core$Object($tmp618);
                $tmp630 = NULL;
                $returnValue609 = $tmp630;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp630));
                $tmp599 = 1;
                goto $l597;
                $l631:;
                return $returnValue609;
            }
            }
            $tmp633 = result613;
            $returnValue609 = $tmp633;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp633));
            $tmp599 = 2;
            goto $l597;
            $l634:;
            return $returnValue609;
        }
        $l597:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result613));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) overridden600));
        overridden600 = NULL;
        result613 = NULL;
        switch ($tmp599) {
            case 1: goto $l631;
            case 2: goto $l634;
            case 0: goto $l611;
        }
        $l636:;
    }
    }
    $tmp637 = p_m->doccomment;
    $returnValue609 = $tmp637;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp637));
    return $returnValue609;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$stripParagraph$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_s) {
    panda$collections$ListView* parsed642 = NULL;
    panda$collections$ListView* $tmp643;
    panda$collections$ListView* $tmp644;
    panda$core$RegularExpression* $tmp645;
    panda$core$String* $returnValue649;
    panda$core$String* $tmp650;
    panda$core$Object* $tmp651;
    panda$core$Int64 $tmp652;
    panda$core$String* $tmp659;
    int $tmp641;
    {
        panda$core$RegularExpression* $tmp646 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp646, &$s647);
        $tmp645 = $tmp646;
        panda$collections$ListView* $tmp648 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(p_s, $tmp645);
        $tmp644 = $tmp648;
        $tmp643 = $tmp644;
        parsed642 = $tmp643;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp643));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
        if (((panda$core$Bit) { parsed642 != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp652, 0);
            ITable* $tmp653 = parsed642->$class->itable;
            while ($tmp653->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp653 = $tmp653->next;
            }
            $fn655 $tmp654 = $tmp653->methods[0];
            panda$core$Object* $tmp656 = $tmp654(parsed642, $tmp652);
            $tmp651 = $tmp656;
            $tmp650 = ((panda$core$String*) $tmp651);
            $returnValue649 = $tmp650;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp650));
            panda$core$Panda$unref$panda$core$Object($tmp651);
            $tmp641 = 0;
            goto $l639;
            $l657:;
            return $returnValue649;
        }
        }
        $tmp659 = p_s;
        $returnValue649 = $tmp659;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp659));
        $tmp641 = 1;
        goto $l639;
        $l660:;
        return $returnValue649;
    }
    $l639:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parsed642));
    parsed642 = NULL;
    switch ($tmp641) {
        case 1: goto $l660;
        case 0: goto $l657;
    }
    $l662:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* c666 = NULL;
    panda$core$String* $tmp667;
    panda$core$String* $tmp668;
    panda$collections$ListView* split672 = NULL;
    panda$collections$ListView* $tmp673;
    panda$collections$ListView* $tmp674;
    panda$core$Object* $tmp677;
    panda$core$Int64 $tmp678;
    panda$collections$Iterator* Iter$272$9687 = NULL;
    panda$collections$Iterator* $tmp688;
    panda$collections$Iterator* $tmp689;
    panda$collections$ListView* $tmp690;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp691;
    panda$core$Int64 $tmp692;
    panda$core$Bit $tmp693;
    org$pandalanguage$pandac$Pair* tag713 = NULL;
    org$pandalanguage$pandac$Pair* $tmp714;
    panda$core$Object* $tmp715;
    panda$core$String* $match$273_13723 = NULL;
    panda$core$String* $tmp724;
    panda$collections$ListView* split730 = NULL;
    panda$collections$ListView* $tmp731;
    panda$collections$ListView* $tmp732;
    panda$core$RegularExpression* $tmp733;
    panda$core$Object* $tmp737;
    panda$core$String* $tmp739;
    panda$core$String* $tmp740;
    panda$core$Object* $tmp748;
    panda$core$Int64 $tmp749;
    panda$core$String* $tmp754;
    panda$core$String* $tmp755;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp756;
    panda$core$Object* $tmp758;
    panda$core$Int64 $tmp759;
    panda$core$String* $tmp771;
    panda$core$String* $tmp772;
    panda$core$String* $tmp773;
    panda$core$String* $tmp774;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp775;
    panda$core$Object* $tmp783;
    panda$core$String* $tmp785;
    panda$core$String* $tmp786;
    int $tmp665;
    {
        panda$core$String* $tmp670 = (($fn669) self->$class->vtable[15])(self, p_m);
        $tmp668 = $tmp670;
        $tmp667 = $tmp668;
        c666 = $tmp667;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp667));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp668));
        if (((panda$core$Bit) { c666 == NULL }).value) {
        {
            $tmp665 = 0;
            goto $l663;
            $l671:;
            return;
        }
        }
        panda$collections$ListView* $tmp676 = (($fn675) self->$class->vtable[9])(self, c666);
        $tmp674 = $tmp676;
        $tmp673 = $tmp674;
        split672 = $tmp673;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp673));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp674));
        panda$core$Int64$init$builtin_int64(&$tmp678, 0);
        ITable* $tmp679 = split672->$class->itable;
        while ($tmp679->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp679 = $tmp679->next;
        }
        $fn681 $tmp680 = $tmp679->methods[0];
        panda$core$Object* $tmp682 = $tmp680(split672, $tmp678);
        $tmp677 = $tmp682;
        (($fn683) self->$class->vtable[10])(self, ((panda$core$String*) ((org$pandalanguage$pandac$Pair*) $tmp677)->second));
        panda$core$Panda$unref$panda$core$Object($tmp677);
        {
            int $tmp686;
            {
                panda$core$Int64$init$builtin_int64(&$tmp692, 1);
                panda$core$Bit$init$builtin_bit(&$tmp693, false);
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp691, ((panda$core$Int64$nullable) { $tmp692, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp693);
                ITable* $tmp694 = split672->$class->itable;
                while ($tmp694->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp694 = $tmp694->next;
                }
                $fn696 $tmp695 = $tmp694->methods[2];
                panda$collections$ListView* $tmp697 = $tmp695(split672, $tmp691);
                $tmp690 = $tmp697;
                ITable* $tmp698 = ((panda$collections$Iterable*) $tmp690)->$class->itable;
                while ($tmp698->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp698 = $tmp698->next;
                }
                $fn700 $tmp699 = $tmp698->methods[0];
                panda$collections$Iterator* $tmp701 = $tmp699(((panda$collections$Iterable*) $tmp690));
                $tmp689 = $tmp701;
                $tmp688 = $tmp689;
                Iter$272$9687 = $tmp688;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp688));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp689));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
                $l702:;
                ITable* $tmp705 = Iter$272$9687->$class->itable;
                while ($tmp705->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp705 = $tmp705->next;
                }
                $fn707 $tmp706 = $tmp705->methods[0];
                panda$core$Bit $tmp708 = $tmp706(Iter$272$9687);
                panda$core$Bit $tmp709 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp708);
                bool $tmp704 = $tmp709.value;
                if (!$tmp704) goto $l703;
                {
                    int $tmp712;
                    {
                        ITable* $tmp716 = Iter$272$9687->$class->itable;
                        while ($tmp716->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp716 = $tmp716->next;
                        }
                        $fn718 $tmp717 = $tmp716->methods[1];
                        panda$core$Object* $tmp719 = $tmp717(Iter$272$9687);
                        $tmp715 = $tmp719;
                        $tmp714 = ((org$pandalanguage$pandac$Pair*) $tmp715);
                        tag713 = $tmp714;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp714));
                        panda$core$Panda$unref$panda$core$Object($tmp715);
                        int $tmp722;
                        {
                            $tmp724 = ((panda$core$String*) tag713->first);
                            $match$273_13723 = $tmp724;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp724));
                            panda$core$Bit $tmp726 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$273_13723, &$s725);
                            if ($tmp726.value) {
                            {
                                int $tmp729;
                                {
                                    panda$core$RegularExpression* $tmp734 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                                    panda$core$RegularExpression$init$panda$core$String($tmp734, &$s735);
                                    $tmp733 = $tmp734;
                                    panda$collections$ListView* $tmp736 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(((panda$core$String*) tag713->second), $tmp733);
                                    $tmp732 = $tmp736;
                                    $tmp731 = $tmp732;
                                    split730 = $tmp731;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp731));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp732));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp733));
                                    if (((panda$core$Bit) { split730 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp738 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                        $tmp737 = $tmp738;
                                        panda$core$String* $tmp742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s741, ((panda$core$String*) tag713->second));
                                        $tmp740 = $tmp742;
                                        panda$core$String* $tmp744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp740, &$s743);
                                        $tmp739 = $tmp744;
                                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp737), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp739);
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp739));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp740));
                                        panda$core$Panda$unref$panda$core$Object($tmp737);
                                        $tmp729 = 0;
                                        goto $l727;
                                        $l745:;
                                        $tmp722 = 0;
                                        goto $l720;
                                        $l746:;
                                        $tmp712 = 0;
                                        goto $l710;
                                        $l747:;
                                        goto $l702;
                                    }
                                    }
                                    panda$core$Int64$init$builtin_int64(&$tmp749, 0);
                                    ITable* $tmp750 = split730->$class->itable;
                                    while ($tmp750->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                        $tmp750 = $tmp750->next;
                                    }
                                    $fn752 $tmp751 = $tmp750->methods[0];
                                    panda$core$Object* $tmp753 = $tmp751(split730, $tmp749);
                                    $tmp748 = $tmp753;
                                    org$pandalanguage$pandac$pandadoc$Markdown* $tmp757 = (org$pandalanguage$pandac$pandadoc$Markdown*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$class);
                                    org$pandalanguage$pandac$pandadoc$Markdown$init($tmp757);
                                    $tmp756 = $tmp757;
                                    panda$core$Int64$init$builtin_int64(&$tmp759, 1);
                                    ITable* $tmp760 = split730->$class->itable;
                                    while ($tmp760->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                        $tmp760 = $tmp760->next;
                                    }
                                    $fn762 $tmp761 = $tmp760->methods[0];
                                    panda$core$Object* $tmp763 = $tmp761(split730, $tmp759);
                                    $tmp758 = $tmp763;
                                    panda$core$String* $tmp765 = (($fn764) $tmp756->$class->vtable[2])($tmp756, ((panda$core$String*) $tmp758));
                                    $tmp755 = $tmp765;
                                    panda$core$String* $tmp767 = (($fn766) self->$class->vtable[16])(self, $tmp755);
                                    $tmp754 = $tmp767;
                                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->params, ((panda$collections$Key*) ((panda$core$String*) $tmp748)), ((panda$core$Object*) $tmp754));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp754));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp755));
                                    panda$core$Panda$unref$panda$core$Object($tmp758);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp756));
                                    panda$core$Panda$unref$panda$core$Object($tmp748);
                                }
                                $tmp729 = -1;
                                goto $l727;
                                $l727:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) split730));
                                split730 = NULL;
                                switch ($tmp729) {
                                    case -1: goto $l768;
                                    case 0: goto $l745;
                                }
                                $l768:;
                            }
                            }
                            else {
                            panda$core$Bit $tmp770 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$273_13723, &$s769);
                            if ($tmp770.value) {
                            {
                                {
                                    $tmp771 = self->returns;
                                    org$pandalanguage$pandac$pandadoc$Markdown* $tmp776 = (org$pandalanguage$pandac$pandadoc$Markdown*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$class);
                                    org$pandalanguage$pandac$pandadoc$Markdown$init($tmp776);
                                    $tmp775 = $tmp776;
                                    panda$core$String* $tmp778 = (($fn777) $tmp775->$class->vtable[2])($tmp775, ((panda$core$String*) tag713->second));
                                    $tmp774 = $tmp778;
                                    panda$core$String* $tmp780 = (($fn779) self->$class->vtable[16])(self, $tmp774);
                                    $tmp773 = $tmp780;
                                    $tmp772 = $tmp773;
                                    self->returns = $tmp772;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp772));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp774));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp775));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp771));
                                }
                            }
                            }
                            else {
                            panda$core$Bit $tmp782 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$273_13723, &$s781);
                            if ($tmp782.value) {
                            {
                            }
                            }
                            else {
                            {
                                panda$core$Object* $tmp784 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                $tmp783 = $tmp784;
                                panda$core$String* $tmp788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s787, ((panda$core$String*) tag713->first));
                                $tmp786 = $tmp788;
                                panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp786, &$s789);
                                $tmp785 = $tmp790;
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp783), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp785);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp786));
                                panda$core$Panda$unref$panda$core$Object($tmp783);
                            }
                            }
                            }
                            }
                        }
                        $tmp722 = -1;
                        goto $l720;
                        $l720:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
                        switch ($tmp722) {
                            case -1: goto $l791;
                            case 0: goto $l746;
                        }
                        $l791:;
                    }
                    $tmp712 = -1;
                    goto $l710;
                    $l710:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag713));
                    tag713 = NULL;
                    switch ($tmp712) {
                        case -1: goto $l792;
                        case 0: goto $l747;
                    }
                    $l792:;
                }
                goto $l702;
                $l703:;
            }
            $tmp686 = -1;
            goto $l684;
            $l684:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$272$9687));
            Iter$272$9687 = NULL;
            switch ($tmp686) {
                case -1: goto $l793;
            }
            $l793:;
        }
    }
    $tmp665 = -1;
    goto $l663;
    $l663:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) split672));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c666));
    c666 = NULL;
    split672 = NULL;
    switch ($tmp665) {
        case -1: goto $l794;
        case 0: goto $l671;
    }
    $l794:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* tag802 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind $match$295_9803;
    panda$core$Int64 $tmp804;
    panda$core$String* $tmp806;
    panda$core$String* $tmp807;
    panda$core$Int64 $tmp809;
    panda$core$String* $tmp811;
    panda$core$String* $tmp812;
    panda$core$Int64 $tmp814;
    panda$core$String* $tmp816;
    panda$core$String* $tmp817;
    panda$core$String* $tmp821;
    org$pandalanguage$pandac$Annotations* annotations826 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp827;
    panda$core$Object* $tmp828;
    panda$core$Int64 $tmp831;
    panda$collections$Iterator* Iter$312$9840 = NULL;
    panda$collections$Iterator* $tmp841;
    panda$collections$Iterator* $tmp842;
    org$pandalanguage$pandac$MethodDecl$Parameter* p858 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp859;
    panda$core$Object* $tmp860;
    panda$core$String* desc870 = NULL;
    panda$core$String* $tmp871;
    panda$core$Object* $tmp872;
    org$pandalanguage$pandac$Type* $tmp882;
    int $tmp797;
    {
        panda$core$Bit $tmp799 = (($fn798) self->$class->vtable[12])(self, p_m);
        panda$core$Bit $tmp800 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp799);
        if ($tmp800.value) {
        {
            $tmp797 = 0;
            goto $l795;
            $l801:;
            return;
        }
        }
        memset(&tag802, 0, sizeof(tag802));
        {
            $match$295_9803 = p_m->methodKind;
            panda$core$Int64$init$builtin_int64(&$tmp804, 0);
            panda$core$Bit $tmp805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$295_9803.$rawValue, $tmp804);
            if ($tmp805.value) {
            {
                {
                    $tmp806 = tag802;
                    $tmp807 = &$s808;
                    tag802 = $tmp807;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp807));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp806));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp809, 1);
            panda$core$Bit $tmp810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$295_9803.$rawValue, $tmp809);
            if ($tmp810.value) {
            {
                {
                    $tmp811 = tag802;
                    $tmp812 = &$s813;
                    tag802 = $tmp812;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp812));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp811));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp814, 2);
            panda$core$Bit $tmp815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$295_9803.$rawValue, $tmp814);
            if ($tmp815.value) {
            {
                {
                    $tmp816 = tag802;
                    $tmp817 = &$s818;
                    tag802 = $tmp817;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp817));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp816));
                }
            }
            }
            }
            }
        }
        (($fn819) self->out->$class->vtable[2])(self->out, tag802);
        panda$core$String* $tmp823 = (($fn822) self->$class->vtable[6])(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
        $tmp821 = $tmp823;
        (($fn824) self->out->$class->vtable[4])(self->out, &$s820, $tmp821);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp821));
        (($fn825) self->$class->vtable[17])(self, p_m);
        $tmp827 = p_m->annotations;
        annotations826 = $tmp827;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp827));
        panda$core$Object* $tmp829 = panda$core$Weak$get$R$panda$core$Weak$T(p_m->owner);
        $tmp828 = $tmp829;
        panda$core$Bit $tmp830 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(((org$pandalanguage$pandac$ClassDecl*) $tmp828)->annotations);
        panda$core$Panda$unref$panda$core$Object($tmp828);
        if ($tmp830.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp831, 256);
            panda$core$Int64 $tmp832 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp831);
            panda$core$Int64 $tmp833 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(annotations826->flags, $tmp832);
            annotations826->flags = $tmp833;
            (($fn834) self->$class->vtable[8])(self, annotations826);
        }
        }
        (($fn836) self->out->$class->vtable[2])(self->out, &$s835);
        {
            int $tmp839;
            {
                ITable* $tmp843 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp843->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp843 = $tmp843->next;
                }
                $fn845 $tmp844 = $tmp843->methods[0];
                panda$collections$Iterator* $tmp846 = $tmp844(((panda$collections$Iterable*) p_m->parameters));
                $tmp842 = $tmp846;
                $tmp841 = $tmp842;
                Iter$312$9840 = $tmp841;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp841));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp842));
                $l847:;
                ITable* $tmp850 = Iter$312$9840->$class->itable;
                while ($tmp850->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp850 = $tmp850->next;
                }
                $fn852 $tmp851 = $tmp850->methods[0];
                panda$core$Bit $tmp853 = $tmp851(Iter$312$9840);
                panda$core$Bit $tmp854 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp853);
                bool $tmp849 = $tmp854.value;
                if (!$tmp849) goto $l848;
                {
                    int $tmp857;
                    {
                        ITable* $tmp861 = Iter$312$9840->$class->itable;
                        while ($tmp861->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp861 = $tmp861->next;
                        }
                        $fn863 $tmp862 = $tmp861->methods[1];
                        panda$core$Object* $tmp864 = $tmp862(Iter$312$9840);
                        $tmp860 = $tmp864;
                        $tmp859 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp860);
                        p858 = $tmp859;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp859));
                        panda$core$Panda$unref$panda$core$Object($tmp860);
                        (($fn866) self->out->$class->vtable[2])(self->out, &$s865);
                        (($fn868) self->out->$class->vtable[4])(self->out, &$s867, p858->name);
                        (($fn869) self->$class->vtable[7])(self, p858->type);
                        panda$core$Object* $tmp873 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->params, ((panda$collections$Key*) p858->name));
                        $tmp872 = $tmp873;
                        $tmp871 = ((panda$core$String*) $tmp872);
                        desc870 = $tmp871;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp871));
                        panda$core$Panda$unref$panda$core$Object($tmp872);
                        if (((panda$core$Bit) { desc870 != NULL }).value) {
                        {
                            (($fn875) self->out->$class->vtable[4])(self->out, &$s874, desc870);
                        }
                        }
                        (($fn877) self->out->$class->vtable[3])(self->out, &$s876);
                    }
                    $tmp857 = -1;
                    goto $l855;
                    $l855:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc870));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p858));
                    p858 = NULL;
                    desc870 = NULL;
                    switch ($tmp857) {
                        case -1: goto $l878;
                    }
                    $l878:;
                }
                goto $l847;
                $l848:;
            }
            $tmp839 = -1;
            goto $l837;
            $l837:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$312$9840));
            Iter$312$9840 = NULL;
            switch ($tmp839) {
                case -1: goto $l879;
            }
            $l879:;
        }
        (($fn881) self->out->$class->vtable[3])(self->out, &$s880);
        org$pandalanguage$pandac$Type* $tmp883 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp882 = $tmp883;
        panda$core$Bit $tmp884 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp882);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp882));
        if ($tmp884.value) {
        {
            (($fn886) self->out->$class->vtable[2])(self->out, &$s885);
            (($fn887) self->$class->vtable[7])(self, p_m->returnType);
            if (((panda$core$Bit) { self->returns != NULL }).value) {
            {
                (($fn889) self->out->$class->vtable[4])(self->out, &$s888, self->returns);
            }
            }
            (($fn891) self->out->$class->vtable[3])(self->out, &$s890);
        }
        }
        (($fn892) self->out->$class->vtable[3])(self->out, tag802);
    }
    $tmp797 = -1;
    goto $l795;
    $l795:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations826));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag802));
    annotations826 = NULL;
    switch ($tmp797) {
        case 0: goto $l801;
        case -1: goto $l893;
    }
    $l893:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeAncestors$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Type* ancestor899 = NULL;
    org$pandalanguage$pandac$Type* $tmp900;
    org$pandalanguage$pandac$ClassDecl* ancestorClass908 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp909;
    org$pandalanguage$pandac$ClassDecl* $tmp910;
    panda$core$Object* $tmp911;
    org$pandalanguage$pandac$Type* $tmp916;
    org$pandalanguage$pandac$Type* $tmp917;
    int $tmp896;
    {
        (($fn898) self->out->$class->vtable[2])(self->out, &$s897);
        $tmp900 = p_cl->rawSuper;
        ancestor899 = $tmp900;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp900));
        $l901:;
        bool $tmp903 = ((panda$core$Bit) { ancestor899 != NULL }).value;
        if (!$tmp903) goto $l902;
        {
            int $tmp906;
            {
                (($fn907) self->$class->vtable[7])(self, ancestor899);
                panda$core$Object* $tmp912 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp911 = $tmp912;
                org$pandalanguage$pandac$ClassDecl* $tmp913 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp911), ancestor899);
                $tmp910 = $tmp913;
                $tmp909 = $tmp910;
                ancestorClass908 = $tmp909;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp909));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp910));
                panda$core$Panda$unref$panda$core$Object($tmp911);
                if (((panda$core$Bit) { ancestorClass908 == NULL }).value) {
                {
                    $tmp906 = 0;
                    goto $l904;
                    $l914:;
                    $tmp896 = 0;
                    goto $l894;
                    $l915:;
                    return;
                }
                }
                {
                    $tmp916 = ancestor899;
                    $tmp917 = ancestorClass908->rawSuper;
                    ancestor899 = $tmp917;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp917));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
                }
            }
            $tmp906 = -1;
            goto $l904;
            $l904:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestorClass908));
            ancestorClass908 = NULL;
            switch ($tmp906) {
                case -1: goto $l918;
                case 0: goto $l914;
            }
            $l918:;
        }
        goto $l901;
        $l902:;
        (($fn920) self->out->$class->vtable[3])(self->out, &$s919);
    }
    $tmp896 = -1;
    goto $l894;
    $l894:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestor899));
    ancestor899 = NULL;
    switch ($tmp896) {
        case -1: goto $l921;
        case 0: goto $l915;
    }
    $l921:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $returnValue922;
    panda$core$String* $tmp923;
    $tmp923 = &$s924;
    $returnValue922 = $tmp923;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp923));
    return $returnValue922;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedFields$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* fields929 = NULL;
    panda$collections$Array* $tmp930;
    panda$collections$Array* $tmp931;
    org$pandalanguage$pandac$Type* ancestor933 = NULL;
    org$pandalanguage$pandac$Type* $tmp934;
    org$pandalanguage$pandac$ClassDecl* ancestorClass941 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp942;
    org$pandalanguage$pandac$ClassDecl* $tmp943;
    panda$core$Object* $tmp944;
    panda$collections$Iterator* Iter$360$13952 = NULL;
    panda$collections$Iterator* $tmp953;
    panda$collections$Iterator* $tmp954;
    org$pandalanguage$pandac$FieldDecl* f970 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp971;
    panda$core$Object* $tmp972;
    panda$core$Object* $tmp979;
    org$pandalanguage$pandac$Type* $tmp983;
    org$pandalanguage$pandac$Type* $tmp984;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp986;
    panda$core$Bit $tmp987;
    panda$collections$ListView* $tmp988;
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT $tmp989;
    panda$core$Int64 $tmp990;
    panda$core$Bit $tmp991;
    panda$core$Int64 $tmp997;
    panda$collections$Iterator* Iter$372$131004 = NULL;
    panda$collections$Iterator* $tmp1005;
    panda$collections$Iterator* $tmp1006;
    org$pandalanguage$pandac$FieldDecl* f1022 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1023;
    panda$core$Object* $tmp1024;
    panda$core$String* $tmp1034;
    panda$core$String* $tmp1035;
    panda$core$String* $tmp1036;
    panda$core$String* $tmp1037;
    panda$core$String* $tmp1038;
    panda$core$Object* $tmp1039;
    int $tmp928;
    {
        panda$collections$Array* $tmp932 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp932);
        $tmp931 = $tmp932;
        $tmp930 = $tmp931;
        fields929 = $tmp930;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp930));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp931));
        $tmp934 = p_cl->rawSuper;
        ancestor933 = $tmp934;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp934));
        $l935:;
        bool $tmp937 = ((panda$core$Bit) { ancestor933 != NULL }).value;
        if (!$tmp937) goto $l936;
        {
            int $tmp940;
            {
                panda$core$Object* $tmp945 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp944 = $tmp945;
                org$pandalanguage$pandac$ClassDecl* $tmp946 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp944), ancestor933);
                $tmp943 = $tmp946;
                $tmp942 = $tmp943;
                ancestorClass941 = $tmp942;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp942));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp943));
                panda$core$Panda$unref$panda$core$Object($tmp944);
                if (((panda$core$Bit) { ancestorClass941 == NULL }).value) {
                {
                    $tmp940 = 0;
                    goto $l938;
                    $l947:;
                    $tmp928 = 0;
                    goto $l926;
                    $l948:;
                    return;
                }
                }
                {
                    int $tmp951;
                    {
                        ITable* $tmp955 = ((panda$collections$Iterable*) ancestorClass941->fields)->$class->itable;
                        while ($tmp955->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp955 = $tmp955->next;
                        }
                        $fn957 $tmp956 = $tmp955->methods[0];
                        panda$collections$Iterator* $tmp958 = $tmp956(((panda$collections$Iterable*) ancestorClass941->fields));
                        $tmp954 = $tmp958;
                        $tmp953 = $tmp954;
                        Iter$360$13952 = $tmp953;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp953));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp954));
                        $l959:;
                        ITable* $tmp962 = Iter$360$13952->$class->itable;
                        while ($tmp962->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp962 = $tmp962->next;
                        }
                        $fn964 $tmp963 = $tmp962->methods[0];
                        panda$core$Bit $tmp965 = $tmp963(Iter$360$13952);
                        panda$core$Bit $tmp966 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp965);
                        bool $tmp961 = $tmp966.value;
                        if (!$tmp961) goto $l960;
                        {
                            int $tmp969;
                            {
                                ITable* $tmp973 = Iter$360$13952->$class->itable;
                                while ($tmp973->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp973 = $tmp973->next;
                                }
                                $fn975 $tmp974 = $tmp973->methods[1];
                                panda$core$Object* $tmp976 = $tmp974(Iter$360$13952);
                                $tmp972 = $tmp976;
                                $tmp971 = ((org$pandalanguage$pandac$FieldDecl*) $tmp972);
                                f970 = $tmp971;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp971));
                                panda$core$Panda$unref$panda$core$Object($tmp972);
                                panda$core$Bit $tmp978 = (($fn977) self->$class->vtable[11])(self, f970);
                                if ($tmp978.value) {
                                {
                                    panda$core$Object* $tmp980 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                    $tmp979 = $tmp980;
                                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp979), f970);
                                    panda$core$Panda$unref$panda$core$Object($tmp979);
                                    panda$collections$Array$add$panda$collections$Array$T(fields929, ((panda$core$Object*) f970));
                                }
                                }
                            }
                            $tmp969 = -1;
                            goto $l967;
                            $l967:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f970));
                            f970 = NULL;
                            switch ($tmp969) {
                                case -1: goto $l981;
                            }
                            $l981:;
                        }
                        goto $l959;
                        $l960:;
                    }
                    $tmp951 = -1;
                    goto $l949;
                    $l949:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$360$13952));
                    Iter$360$13952 = NULL;
                    switch ($tmp951) {
                        case -1: goto $l982;
                    }
                    $l982:;
                }
                {
                    $tmp983 = ancestor933;
                    $tmp984 = ancestorClass941->rawSuper;
                    ancestor933 = $tmp984;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp984));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
                }
            }
            $tmp940 = -1;
            goto $l938;
            $l938:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestorClass941));
            ancestorClass941 = NULL;
            switch ($tmp940) {
                case 0: goto $l947;
                case -1: goto $l985;
            }
            $l985:;
        }
        goto $l935;
        $l936:;
        panda$core$Bit$init$builtin_bit(&$tmp987, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp986, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp987);
        panda$core$Int64$init$builtin_int64(&$tmp990, -1);
        panda$core$Bit$init$builtin_bit(&$tmp991, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$panda$core$Bit(&$tmp989, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp990, $tmp991);
        ITable* $tmp992 = ((panda$collections$ListView*) fields929)->$class->itable;
        while ($tmp992->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp992 = $tmp992->next;
        }
        $fn994 $tmp993 = $tmp992->methods[3];
        panda$collections$ListView* $tmp995 = $tmp993(((panda$collections$ListView*) fields929), $tmp989);
        $tmp988 = $tmp995;
        panda$collections$Array$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$Array$T$GT(fields929, $tmp986, $tmp988);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp988));
        panda$core$Int64 $tmp996 = panda$collections$Array$get_count$R$panda$core$Int64(fields929);
        panda$core$Int64$init$builtin_int64(&$tmp997, 0);
        panda$core$Bit $tmp998 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp996, $tmp997);
        if ($tmp998.value) {
        {
            (($fn1000) self->out->$class->vtable[2])(self->out, &$s999);
            {
                int $tmp1003;
                {
                    ITable* $tmp1007 = ((panda$collections$Iterable*) fields929)->$class->itable;
                    while ($tmp1007->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1007 = $tmp1007->next;
                    }
                    $fn1009 $tmp1008 = $tmp1007->methods[0];
                    panda$collections$Iterator* $tmp1010 = $tmp1008(((panda$collections$Iterable*) fields929));
                    $tmp1006 = $tmp1010;
                    $tmp1005 = $tmp1006;
                    Iter$372$131004 = $tmp1005;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1005));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1006));
                    $l1011:;
                    ITable* $tmp1014 = Iter$372$131004->$class->itable;
                    while ($tmp1014->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1014 = $tmp1014->next;
                    }
                    $fn1016 $tmp1015 = $tmp1014->methods[0];
                    panda$core$Bit $tmp1017 = $tmp1015(Iter$372$131004);
                    panda$core$Bit $tmp1018 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1017);
                    bool $tmp1013 = $tmp1018.value;
                    if (!$tmp1013) goto $l1012;
                    {
                        int $tmp1021;
                        {
                            ITable* $tmp1025 = Iter$372$131004->$class->itable;
                            while ($tmp1025->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1025 = $tmp1025->next;
                            }
                            $fn1027 $tmp1026 = $tmp1025->methods[1];
                            panda$core$Object* $tmp1028 = $tmp1026(Iter$372$131004);
                            $tmp1024 = $tmp1028;
                            $tmp1023 = ((org$pandalanguage$pandac$FieldDecl*) $tmp1024);
                            f1022 = $tmp1023;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1023));
                            panda$core$Panda$unref$panda$core$Object($tmp1024);
                            (($fn1030) self->out->$class->vtable[2])(self->out, &$s1029);
                            (($fn1032) self->out->$class->vtable[4])(self->out, &$s1031, ((org$pandalanguage$pandac$Symbol*) f1022)->name);
                            panda$core$Object* $tmp1040 = panda$core$Weak$get$R$panda$core$Weak$T(f1022->owner);
                            $tmp1039 = $tmp1040;
                            panda$core$String* $tmp1042 = (($fn1041) self->$class->vtable[20])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp1039));
                            $tmp1038 = $tmp1042;
                            panda$core$String* $tmp1043 = panda$core$String$convert$R$panda$core$String($tmp1038);
                            $tmp1037 = $tmp1043;
                            panda$core$String* $tmp1045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1037, &$s1044);
                            $tmp1036 = $tmp1045;
                            panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1036, ((org$pandalanguage$pandac$Symbol*) f1022)->name);
                            $tmp1035 = $tmp1046;
                            panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1035, &$s1047);
                            $tmp1034 = $tmp1048;
                            (($fn1049) self->out->$class->vtable[4])(self->out, &$s1033, $tmp1034);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1034));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1035));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1036));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1037));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1038));
                            panda$core$Panda$unref$panda$core$Object($tmp1039);
                            (($fn1051) self->out->$class->vtable[3])(self->out, &$s1050);
                        }
                        $tmp1021 = -1;
                        goto $l1019;
                        $l1019:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f1022));
                        f1022 = NULL;
                        switch ($tmp1021) {
                            case -1: goto $l1052;
                        }
                        $l1052:;
                    }
                    goto $l1011;
                    $l1012:;
                }
                $tmp1003 = -1;
                goto $l1001;
                $l1001:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$372$131004));
                Iter$372$131004 = NULL;
                switch ($tmp1003) {
                    case -1: goto $l1053;
                }
                $l1053:;
            }
            (($fn1055) self->out->$class->vtable[3])(self->out, &$s1054);
        }
        }
    }
    $tmp928 = -1;
    goto $l926;
    $l926:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestor933));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields929));
    fields929 = NULL;
    ancestor933 = NULL;
    switch ($tmp928) {
        case -1: goto $l1056;
        case 0: goto $l948;
    }
    $l1056:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedMethods$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* methods1060 = NULL;
    panda$collections$Array* $tmp1061;
    panda$collections$Array* $tmp1062;
    panda$collections$HashSet* overridden1064 = NULL;
    panda$collections$HashSet* $tmp1065;
    panda$collections$HashSet* $tmp1066;
    panda$collections$Iterator* Iter$385$91071 = NULL;
    panda$collections$Iterator* $tmp1072;
    panda$collections$Iterator* $tmp1073;
    org$pandalanguage$pandac$MethodDecl* m1089 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1090;
    panda$core$Object* $tmp1091;
    org$pandalanguage$pandac$MethodDecl* o1096 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1097;
    org$pandalanguage$pandac$MethodDecl* $tmp1098;
    panda$core$Object* $tmp1099;
    panda$core$String* $tmp1102;
    org$pandalanguage$pandac$Type* ancestor1106 = NULL;
    org$pandalanguage$pandac$Type* $tmp1107;
    org$pandalanguage$pandac$ClassDecl* ancestorClass1114 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1115;
    org$pandalanguage$pandac$ClassDecl* $tmp1116;
    panda$core$Object* $tmp1117;
    panda$collections$Iterator* Iter$397$131125 = NULL;
    panda$collections$Iterator* $tmp1126;
    panda$collections$Iterator* $tmp1127;
    org$pandalanguage$pandac$MethodDecl* m1143 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1144;
    panda$core$Object* $tmp1145;
    panda$core$Int64 $tmp1152;
    panda$core$String* $tmp1159;
    panda$core$Object* $tmp1167;
    org$pandalanguage$pandac$MethodDecl* o1169 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1170;
    org$pandalanguage$pandac$MethodDecl* $tmp1171;
    panda$core$Object* $tmp1172;
    panda$core$String* $tmp1175;
    org$pandalanguage$pandac$Type* $tmp1180;
    org$pandalanguage$pandac$Type* $tmp1181;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1183;
    panda$core$Bit $tmp1184;
    panda$collections$ListView* $tmp1185;
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT $tmp1186;
    panda$core$Int64 $tmp1187;
    panda$core$Bit $tmp1188;
    panda$core$Int64 $tmp1194;
    panda$collections$Iterator* Iter$414$131201 = NULL;
    panda$collections$Iterator* $tmp1202;
    panda$collections$Iterator* $tmp1203;
    org$pandalanguage$pandac$MethodDecl* m1219 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1220;
    panda$core$Object* $tmp1221;
    panda$core$String* $tmp1231;
    panda$core$String* $tmp1232;
    panda$core$String* $tmp1233;
    panda$core$String* $tmp1234;
    panda$core$String* $tmp1235;
    panda$core$Object* $tmp1236;
    int $tmp1059;
    {
        panda$collections$Array* $tmp1063 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1063);
        $tmp1062 = $tmp1063;
        $tmp1061 = $tmp1062;
        methods1060 = $tmp1061;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1061));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1062));
        panda$collections$HashSet* $tmp1067 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
        panda$collections$HashSet$init($tmp1067);
        $tmp1066 = $tmp1067;
        $tmp1065 = $tmp1066;
        overridden1064 = $tmp1065;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1065));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1066));
        {
            int $tmp1070;
            {
                ITable* $tmp1074 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
                while ($tmp1074->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1074 = $tmp1074->next;
                }
                $fn1076 $tmp1075 = $tmp1074->methods[0];
                panda$collections$Iterator* $tmp1077 = $tmp1075(((panda$collections$Iterable*) p_cl->methods));
                $tmp1073 = $tmp1077;
                $tmp1072 = $tmp1073;
                Iter$385$91071 = $tmp1072;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1072));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1073));
                $l1078:;
                ITable* $tmp1081 = Iter$385$91071->$class->itable;
                while ($tmp1081->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1081 = $tmp1081->next;
                }
                $fn1083 $tmp1082 = $tmp1081->methods[0];
                panda$core$Bit $tmp1084 = $tmp1082(Iter$385$91071);
                panda$core$Bit $tmp1085 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1084);
                bool $tmp1080 = $tmp1085.value;
                if (!$tmp1080) goto $l1079;
                {
                    int $tmp1088;
                    {
                        ITable* $tmp1092 = Iter$385$91071->$class->itable;
                        while ($tmp1092->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1092 = $tmp1092->next;
                        }
                        $fn1094 $tmp1093 = $tmp1092->methods[1];
                        panda$core$Object* $tmp1095 = $tmp1093(Iter$385$91071);
                        $tmp1091 = $tmp1095;
                        $tmp1090 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1091);
                        m1089 = $tmp1090;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1090));
                        panda$core$Panda$unref$panda$core$Object($tmp1091);
                        panda$core$Object* $tmp1100 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp1099 = $tmp1100;
                        org$pandalanguage$pandac$MethodDecl* $tmp1101 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1099), m1089);
                        $tmp1098 = $tmp1101;
                        $tmp1097 = $tmp1098;
                        o1096 = $tmp1097;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1097));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1098));
                        panda$core$Panda$unref$panda$core$Object($tmp1099);
                        if (((panda$core$Bit) { o1096 != NULL }).value) {
                        {
                            panda$core$String* $tmp1103 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(o1096);
                            $tmp1102 = $tmp1103;
                            panda$collections$HashSet$add$panda$collections$HashSet$T(overridden1064, ((panda$collections$Key*) $tmp1102));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1102));
                        }
                        }
                    }
                    $tmp1088 = -1;
                    goto $l1086;
                    $l1086:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) o1096));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1089));
                    m1089 = NULL;
                    o1096 = NULL;
                    switch ($tmp1088) {
                        case -1: goto $l1104;
                    }
                    $l1104:;
                }
                goto $l1078;
                $l1079:;
            }
            $tmp1070 = -1;
            goto $l1068;
            $l1068:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$385$91071));
            Iter$385$91071 = NULL;
            switch ($tmp1070) {
                case -1: goto $l1105;
            }
            $l1105:;
        }
        $tmp1107 = p_cl->rawSuper;
        ancestor1106 = $tmp1107;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1107));
        $l1108:;
        bool $tmp1110 = ((panda$core$Bit) { ancestor1106 != NULL }).value;
        if (!$tmp1110) goto $l1109;
        {
            int $tmp1113;
            {
                panda$core$Object* $tmp1118 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp1117 = $tmp1118;
                org$pandalanguage$pandac$ClassDecl* $tmp1119 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1117), ancestor1106);
                $tmp1116 = $tmp1119;
                $tmp1115 = $tmp1116;
                ancestorClass1114 = $tmp1115;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1115));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1116));
                panda$core$Panda$unref$panda$core$Object($tmp1117);
                if (((panda$core$Bit) { ancestorClass1114 == NULL }).value) {
                {
                    $tmp1113 = 0;
                    goto $l1111;
                    $l1120:;
                    $tmp1059 = 0;
                    goto $l1057;
                    $l1121:;
                    return;
                }
                }
                {
                    int $tmp1124;
                    {
                        ITable* $tmp1128 = ((panda$collections$Iterable*) ancestorClass1114->methods)->$class->itable;
                        while ($tmp1128->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1128 = $tmp1128->next;
                        }
                        $fn1130 $tmp1129 = $tmp1128->methods[0];
                        panda$collections$Iterator* $tmp1131 = $tmp1129(((panda$collections$Iterable*) ancestorClass1114->methods));
                        $tmp1127 = $tmp1131;
                        $tmp1126 = $tmp1127;
                        Iter$397$131125 = $tmp1126;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1126));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1127));
                        $l1132:;
                        ITable* $tmp1135 = Iter$397$131125->$class->itable;
                        while ($tmp1135->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1135 = $tmp1135->next;
                        }
                        $fn1137 $tmp1136 = $tmp1135->methods[0];
                        panda$core$Bit $tmp1138 = $tmp1136(Iter$397$131125);
                        panda$core$Bit $tmp1139 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1138);
                        bool $tmp1134 = $tmp1139.value;
                        if (!$tmp1134) goto $l1133;
                        {
                            int $tmp1142;
                            {
                                ITable* $tmp1146 = Iter$397$131125->$class->itable;
                                while ($tmp1146->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1146 = $tmp1146->next;
                                }
                                $fn1148 $tmp1147 = $tmp1146->methods[1];
                                panda$core$Object* $tmp1149 = $tmp1147(Iter$397$131125);
                                $tmp1145 = $tmp1149;
                                $tmp1144 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1145);
                                m1143 = $tmp1144;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1144));
                                panda$core$Panda$unref$panda$core$Object($tmp1145);
                                panda$core$Int64$init$builtin_int64(&$tmp1152, 2);
                                panda$core$Bit $tmp1153 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(m1143->methodKind.$rawValue, $tmp1152);
                                bool $tmp1151 = $tmp1153.value;
                                if (!$tmp1151) goto $l1154;
                                panda$core$Bit $tmp1156 = (($fn1155) self->$class->vtable[12])(self, m1143);
                                $tmp1151 = $tmp1156.value;
                                $l1154:;
                                panda$core$Bit $tmp1157 = { $tmp1151 };
                                bool $tmp1150 = $tmp1157.value;
                                if (!$tmp1150) goto $l1158;
                                panda$core$String* $tmp1160 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(m1143);
                                $tmp1159 = $tmp1160;
                                panda$core$Bit $tmp1161 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(overridden1064, ((panda$collections$Key*) $tmp1159));
                                panda$core$Bit $tmp1162 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1161);
                                $tmp1150 = $tmp1162.value;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1159));
                                $l1158:;
                                panda$core$Bit $tmp1163 = { $tmp1150 };
                                if ($tmp1163.value) {
                                {
                                    int $tmp1166;
                                    {
                                        panda$core$Object* $tmp1168 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                        $tmp1167 = $tmp1168;
                                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(((org$pandalanguage$pandac$Compiler*) $tmp1167), m1143);
                                        panda$core$Panda$unref$panda$core$Object($tmp1167);
                                        panda$collections$Array$add$panda$collections$Array$T(methods1060, ((panda$core$Object*) m1143));
                                        panda$core$Object* $tmp1173 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                        $tmp1172 = $tmp1173;
                                        org$pandalanguage$pandac$MethodDecl* $tmp1174 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1172), m1143);
                                        $tmp1171 = $tmp1174;
                                        $tmp1170 = $tmp1171;
                                        o1169 = $tmp1170;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1170));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1171));
                                        panda$core$Panda$unref$panda$core$Object($tmp1172);
                                        if (((panda$core$Bit) { o1169 != NULL }).value) {
                                        {
                                            panda$core$String* $tmp1176 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(o1169);
                                            $tmp1175 = $tmp1176;
                                            panda$collections$HashSet$add$panda$collections$HashSet$T(overridden1064, ((panda$collections$Key*) $tmp1175));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1175));
                                        }
                                        }
                                    }
                                    $tmp1166 = -1;
                                    goto $l1164;
                                    $l1164:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) o1169));
                                    o1169 = NULL;
                                    switch ($tmp1166) {
                                        case -1: goto $l1177;
                                    }
                                    $l1177:;
                                }
                                }
                            }
                            $tmp1142 = -1;
                            goto $l1140;
                            $l1140:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1143));
                            m1143 = NULL;
                            switch ($tmp1142) {
                                case -1: goto $l1178;
                            }
                            $l1178:;
                        }
                        goto $l1132;
                        $l1133:;
                    }
                    $tmp1124 = -1;
                    goto $l1122;
                    $l1122:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$397$131125));
                    Iter$397$131125 = NULL;
                    switch ($tmp1124) {
                        case -1: goto $l1179;
                    }
                    $l1179:;
                }
                {
                    $tmp1180 = ancestor1106;
                    $tmp1181 = ancestorClass1114->rawSuper;
                    ancestor1106 = $tmp1181;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1181));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1180));
                }
            }
            $tmp1113 = -1;
            goto $l1111;
            $l1111:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestorClass1114));
            ancestorClass1114 = NULL;
            switch ($tmp1113) {
                case -1: goto $l1182;
                case 0: goto $l1120;
            }
            $l1182:;
        }
        goto $l1108;
        $l1109:;
        panda$core$Bit$init$builtin_bit(&$tmp1184, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1183, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1184);
        panda$core$Int64$init$builtin_int64(&$tmp1187, -1);
        panda$core$Bit$init$builtin_bit(&$tmp1188, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$panda$core$Bit(&$tmp1186, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1187, $tmp1188);
        ITable* $tmp1189 = ((panda$collections$ListView*) methods1060)->$class->itable;
        while ($tmp1189->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1189 = $tmp1189->next;
        }
        $fn1191 $tmp1190 = $tmp1189->methods[3];
        panda$collections$ListView* $tmp1192 = $tmp1190(((panda$collections$ListView*) methods1060), $tmp1186);
        $tmp1185 = $tmp1192;
        panda$collections$Array$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$Array$T$GT(methods1060, $tmp1183, $tmp1185);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1185));
        panda$core$Int64 $tmp1193 = panda$collections$Array$get_count$R$panda$core$Int64(methods1060);
        panda$core$Int64$init$builtin_int64(&$tmp1194, 0);
        panda$core$Bit $tmp1195 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1193, $tmp1194);
        if ($tmp1195.value) {
        {
            (($fn1197) self->out->$class->vtable[2])(self->out, &$s1196);
            {
                int $tmp1200;
                {
                    ITable* $tmp1204 = ((panda$collections$Iterable*) methods1060)->$class->itable;
                    while ($tmp1204->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1204 = $tmp1204->next;
                    }
                    $fn1206 $tmp1205 = $tmp1204->methods[0];
                    panda$collections$Iterator* $tmp1207 = $tmp1205(((panda$collections$Iterable*) methods1060));
                    $tmp1203 = $tmp1207;
                    $tmp1202 = $tmp1203;
                    Iter$414$131201 = $tmp1202;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1202));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1203));
                    $l1208:;
                    ITable* $tmp1211 = Iter$414$131201->$class->itable;
                    while ($tmp1211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1211 = $tmp1211->next;
                    }
                    $fn1213 $tmp1212 = $tmp1211->methods[0];
                    panda$core$Bit $tmp1214 = $tmp1212(Iter$414$131201);
                    panda$core$Bit $tmp1215 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1214);
                    bool $tmp1210 = $tmp1215.value;
                    if (!$tmp1210) goto $l1209;
                    {
                        int $tmp1218;
                        {
                            ITable* $tmp1222 = Iter$414$131201->$class->itable;
                            while ($tmp1222->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1222 = $tmp1222->next;
                            }
                            $fn1224 $tmp1223 = $tmp1222->methods[1];
                            panda$core$Object* $tmp1225 = $tmp1223(Iter$414$131201);
                            $tmp1221 = $tmp1225;
                            $tmp1220 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1221);
                            m1219 = $tmp1220;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1220));
                            panda$core$Panda$unref$panda$core$Object($tmp1221);
                            (($fn1227) self->out->$class->vtable[2])(self->out, &$s1226);
                            (($fn1229) self->out->$class->vtable[4])(self->out, &$s1228, ((org$pandalanguage$pandac$Symbol*) m1219)->name);
                            panda$core$Object* $tmp1237 = panda$core$Weak$get$R$panda$core$Weak$T(m1219->owner);
                            $tmp1236 = $tmp1237;
                            panda$core$String* $tmp1239 = (($fn1238) self->$class->vtable[20])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp1236));
                            $tmp1235 = $tmp1239;
                            panda$core$String* $tmp1240 = panda$core$String$convert$R$panda$core$String($tmp1235);
                            $tmp1234 = $tmp1240;
                            panda$core$String* $tmp1242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1234, &$s1241);
                            $tmp1233 = $tmp1242;
                            panda$core$String* $tmp1243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1233, ((org$pandalanguage$pandac$Symbol*) m1219)->name);
                            $tmp1232 = $tmp1243;
                            panda$core$String* $tmp1245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1232, &$s1244);
                            $tmp1231 = $tmp1245;
                            (($fn1246) self->out->$class->vtable[4])(self->out, &$s1230, $tmp1231);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1231));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1232));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1233));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1234));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1235));
                            panda$core$Panda$unref$panda$core$Object($tmp1236);
                            (($fn1248) self->out->$class->vtable[3])(self->out, &$s1247);
                        }
                        $tmp1218 = -1;
                        goto $l1216;
                        $l1216:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1219));
                        m1219 = NULL;
                        switch ($tmp1218) {
                            case -1: goto $l1249;
                        }
                        $l1249:;
                    }
                    goto $l1208;
                    $l1209:;
                }
                $tmp1200 = -1;
                goto $l1198;
                $l1198:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$414$131201));
                Iter$414$131201 = NULL;
                switch ($tmp1200) {
                    case -1: goto $l1250;
                }
                $l1250:;
            }
            (($fn1252) self->out->$class->vtable[3])(self->out, &$s1251);
        }
        }
    }
    $tmp1059 = -1;
    goto $l1057;
    $l1057:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestor1106));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) overridden1064));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods1060));
    methods1060 = NULL;
    overridden1064 = NULL;
    ancestor1106 = NULL;
    switch ($tmp1059) {
        case 0: goto $l1121;
        case -1: goto $l1253;
    }
    $l1253:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$ListView* split1257 = NULL;
    panda$collections$ListView* $tmp1258;
    panda$collections$ListView* $tmp1259;
    panda$core$Object* $tmp1262;
    panda$core$Int64 $tmp1263;
    if (((panda$core$Bit) { p_cl->doccomment != NULL }).value) {
    {
        int $tmp1256;
        {
            panda$collections$ListView* $tmp1261 = (($fn1260) self->$class->vtable[9])(self, p_cl->doccomment);
            $tmp1259 = $tmp1261;
            $tmp1258 = $tmp1259;
            split1257 = $tmp1258;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1258));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1259));
            panda$core$Int64$init$builtin_int64(&$tmp1263, 0);
            ITable* $tmp1264 = split1257->$class->itable;
            while ($tmp1264->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1264 = $tmp1264->next;
            }
            $fn1266 $tmp1265 = $tmp1264->methods[0];
            panda$core$Object* $tmp1267 = $tmp1265(split1257, $tmp1263);
            $tmp1262 = $tmp1267;
            (($fn1268) self->$class->vtable[10])(self, ((panda$core$String*) ((org$pandalanguage$pandac$Pair*) $tmp1262)->second));
            panda$core$Panda$unref$panda$core$Object($tmp1262);
        }
        $tmp1256 = -1;
        goto $l1254;
        $l1254:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) split1257));
        split1257 = NULL;
        switch ($tmp1256) {
            case -1: goto $l1269;
        }
        $l1269:;
    }
    }
}
void panda$core$MutableMethod$$shim1$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar1273 = NULL;
    panda$core$MutableMethod* $tmp1274;
    panda$core$Method* $tmp1275;
    panda$core$Object* $tmp1277;
    panda$core$Object* $tmp1278;
    int $tmp1272;
    {
        panda$core$Method* $tmp1276 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1276, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1275 = $tmp1276;
        $tmp1274 = ((panda$core$MutableMethod*) $tmp1275);
        methodVar1273 = $tmp1274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1275));
        {
            $tmp1277 = methodVar1273->target;
            $tmp1278 = self->target;
            methodVar1273->target = $tmp1278;
            panda$core$Panda$ref$panda$core$Object($tmp1278);
            panda$core$Panda$unref$panda$core$Object($tmp1277);
        }
        if (methodVar1273->target) {
            (($fn1279) methodVar1273->pointer)(methodVar1273->target, ((org$pandalanguage$pandac$Type*) p_p0));
        } else {
            (($fn1280) methodVar1273->pointer)(((org$pandalanguage$pandac$Type*) p_p0));
        }
    }
    $tmp1272 = -1;
    goto $l1270;
    $l1270:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1273));
    methodVar1273 = NULL;
    switch ($tmp1272) {
        case -1: goto $l1281;
    }
    $l1281:;
}
void panda$core$MutableMethod$$shim2$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar1285 = NULL;
    panda$core$MutableMethod* $tmp1286;
    panda$core$Method* $tmp1287;
    panda$core$Object* $tmp1289;
    panda$core$Object* $tmp1290;
    int $tmp1284;
    {
        panda$core$Method* $tmp1288 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1288, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1287 = $tmp1288;
        $tmp1286 = ((panda$core$MutableMethod*) $tmp1287);
        methodVar1285 = $tmp1286;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1286));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1287));
        {
            $tmp1289 = methodVar1285->target;
            $tmp1290 = self->target;
            methodVar1285->target = $tmp1290;
            panda$core$Panda$ref$panda$core$Object($tmp1290);
            panda$core$Panda$unref$panda$core$Object($tmp1289);
        }
        if (methodVar1285->target) {
            (($fn1291) methodVar1285->pointer)(methodVar1285->target, ((org$pandalanguage$pandac$FieldDecl*) p_p0));
        } else {
            (($fn1292) methodVar1285->pointer)(((org$pandalanguage$pandac$FieldDecl*) p_p0));
        }
    }
    $tmp1284 = -1;
    goto $l1282;
    $l1282:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1285));
    methodVar1285 = NULL;
    switch ($tmp1284) {
        case -1: goto $l1293;
    }
    $l1293:;
}
void panda$core$MutableMethod$$shim3$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar1297 = NULL;
    panda$core$MutableMethod* $tmp1298;
    panda$core$Method* $tmp1299;
    panda$core$Object* $tmp1301;
    panda$core$Object* $tmp1302;
    int $tmp1296;
    {
        panda$core$Method* $tmp1300 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1300, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1299 = $tmp1300;
        $tmp1298 = ((panda$core$MutableMethod*) $tmp1299);
        methodVar1297 = $tmp1298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1299));
        {
            $tmp1301 = methodVar1297->target;
            $tmp1302 = self->target;
            methodVar1297->target = $tmp1302;
            panda$core$Panda$ref$panda$core$Object($tmp1302);
            panda$core$Panda$unref$panda$core$Object($tmp1301);
        }
        if (methodVar1297->target) {
            (($fn1303) methodVar1297->pointer)(methodVar1297->target, ((org$pandalanguage$pandac$MethodDecl*) p_p0));
        } else {
            (($fn1304) methodVar1297->pointer)(((org$pandalanguage$pandac$MethodDecl*) p_p0));
        }
    }
    $tmp1296 = -1;
    goto $l1294;
    $l1294:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1297));
    methodVar1297 = NULL;
    switch ($tmp1296) {
        case -1: goto $l1305;
    }
    $l1305:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $tmp1309;
    panda$core$String* $tmp1310;
    panda$io$File* dest1311 = NULL;
    panda$io$File* $tmp1312;
    panda$io$File* $tmp1313;
    panda$io$File* $tmp1317;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp1319;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp1320;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp1321;
    panda$io$OutputStream* $tmp1323;
    panda$core$String* $tmp1330;
    org$pandalanguage$pandac$Type* $tmp1331;
    panda$core$String* $tmp1337;
    panda$core$String* $tmp1338;
    panda$core$String* $tmp1339;
    panda$core$String* $tmp1340;
    panda$collections$Iterator* $tmp1342;
    panda$core$String* $tmp1352;
    panda$core$Int64 $tmp1363;
    int $tmp1308;
    {
        {
            $tmp1309 = self->returns;
            $tmp1310 = NULL;
            self->returns = $tmp1310;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1310));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1309));
        }
        panda$collections$HashMap$clear(self->params);
        panda$io$File* $tmp1316 = (($fn1315) self->$class->vtable[4])(self, p_cl, &$s1314);
        $tmp1313 = $tmp1316;
        $tmp1312 = $tmp1313;
        dest1311 = $tmp1312;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1312));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1313));
        panda$io$File* $tmp1318 = panda$io$File$parent$R$panda$io$File$Q(dest1311);
        $tmp1317 = $tmp1318;
        panda$io$File$createDirectories($tmp1317);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1317));
        {
            $tmp1319 = self->out;
            org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp1322 = (org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$class);
            panda$io$OutputStream* $tmp1324 = panda$io$File$openOutputStream$R$panda$io$OutputStream(dest1311);
            $tmp1323 = $tmp1324;
            org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$init$panda$io$OutputStream($tmp1322, $tmp1323);
            $tmp1321 = $tmp1322;
            $tmp1320 = $tmp1321;
            self->out = $tmp1320;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1320));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1321));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1323));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
        }
        (($fn1326) self->out->$class->vtable[2])(self->out, &$s1325);
        (($fn1328) self->out->$class->vtable[4])(self->out, &$s1327, p_cl->name);
        org$pandalanguage$pandac$Type* $tmp1332 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        $tmp1331 = $tmp1332;
        panda$core$String* $tmp1334 = (($fn1333) self->$class->vtable[5])(self, $tmp1331);
        $tmp1330 = $tmp1334;
        (($fn1335) self->out->$class->vtable[4])(self->out, &$s1329, $tmp1330);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1330));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1331));
        panda$collections$Iterator* $tmp1344 = panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(p_cl->name, &$s1343);
        $tmp1342 = $tmp1344;
        ITable* $tmp1345 = $tmp1342->$class->itable;
        while ($tmp1345->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1345 = $tmp1345->next;
        }
        $fn1347 $tmp1346 = $tmp1345->methods[2];
        panda$core$Int64 $tmp1348 = $tmp1346($tmp1342);
        panda$core$String* $tmp1349 = panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(&$s1341, $tmp1348);
        $tmp1340 = $tmp1349;
        panda$core$String* $tmp1351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1340, &$s1350);
        $tmp1339 = $tmp1351;
        panda$core$String* $tmp1355 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s1353, &$s1354);
        $tmp1352 = $tmp1355;
        panda$core$String* $tmp1356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1339, $tmp1352);
        $tmp1338 = $tmp1356;
        panda$core$String* $tmp1358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1338, &$s1357);
        $tmp1337 = $tmp1358;
        (($fn1359) self->out->$class->vtable[4])(self->out, &$s1336, $tmp1337);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1337));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1338));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1339));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1340));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1342));
        (($fn1360) self->$class->vtable[23])(self, p_cl);
        (($fn1361) self->$class->vtable[19])(self, p_cl);
        panda$core$Int64 $tmp1362 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
        panda$core$Int64$init$builtin_int64(&$tmp1363, 0);
        panda$core$Bit $tmp1364 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1362, $tmp1363);
        if ($tmp1364.value) {
        {
            (($fn1366) self->out->$class->vtable[2])(self->out, &$s1365);
            panda$core$MutableMethod* $tmp1367 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod* $tmp1368 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1368, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Type, ((panda$core$Object*) self));
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1367, (panda$core$Int8*) &panda$core$MutableMethod$$shim1$panda$collections$CollectionView$T, ((panda$core$Object*) ((panda$core$Object*) $tmp1368)));
            ITable* $tmp1369 = ((panda$collections$CollectionView*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1369->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1369 = $tmp1369->next;
            }
            $fn1371 $tmp1370 = $tmp1369->methods[3];
            $tmp1370(((panda$collections$CollectionView*) p_cl->rawInterfaces), ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1367)));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1368));
            (($fn1373) self->out->$class->vtable[3])(self->out, &$s1372);
        }
        }
        (($fn1374) self->$class->vtable[21])(self, p_cl);
        (($fn1375) self->$class->vtable[22])(self, p_cl);
        panda$core$MutableMethod* $tmp1376 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1377 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1377, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$FieldDecl, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1376, (panda$core$Int8*) &panda$core$MutableMethod$$shim2$panda$collections$CollectionView$T, ((panda$core$Object*) ((panda$core$Object*) $tmp1377)));
        ITable* $tmp1378 = ((panda$collections$CollectionView*) p_cl->fields)->$class->itable;
        while ($tmp1378->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1378 = $tmp1378->next;
        }
        $fn1380 $tmp1379 = $tmp1378->methods[3];
        $tmp1379(((panda$collections$CollectionView*) p_cl->fields), ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1376)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1376));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1377));
        panda$core$MutableMethod* $tmp1381 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1382 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1382, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1381, (panda$core$Int8*) &panda$core$MutableMethod$$shim3$panda$collections$CollectionView$T, ((panda$core$Object*) ((panda$core$Object*) $tmp1382)));
        ITable* $tmp1383 = ((panda$collections$CollectionView*) p_cl->methods)->$class->itable;
        while ($tmp1383->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1383 = $tmp1383->next;
        }
        $fn1385 $tmp1384 = $tmp1383->methods[3];
        $tmp1384(((panda$collections$CollectionView*) p_cl->methods), ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1381)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1382));
        (($fn1387) self->out->$class->vtable[3])(self->out, &$s1386);
    }
    $tmp1308 = -1;
    goto $l1306;
    $l1306:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest1311));
    dest1311 = NULL;
    switch ($tmp1308) {
        case -1: goto $l1388;
    }
    $l1388:;
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
    int $tmp1391;
    {
    }
    $tmp1391 = -1;
    goto $l1389;
    $l1389:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1391) {
        case -1: goto $l1392;
    }
    $l1392:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->outDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->returns));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->params));
}

