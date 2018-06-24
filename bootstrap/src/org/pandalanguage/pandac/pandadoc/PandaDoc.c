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
#include "org/pandalanguage/pandac/pandadoc/PandaDoc/XMLWriter.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Equatable.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/Pair.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "org/pandalanguage/pandac/pandadoc/LinkResolver.h"
#include "panda/io/IndentedOutputStream.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/FieldDecl/Kind.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/io/OutputStream.h"
#include "panda/collections/List.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/collections/ImmutableArray.h"

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$pandadoc$PandaDoc$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$pandadoc$PandaDoc$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$pandadoc$PandaDoc$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$finish} };

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$PandaDoc$class_type org$pandalanguage$pandac$pandadoc$PandaDoc$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$pandadoc$PandaDoc$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$cleanup, org$pandalanguage$pandac$pandadoc$PandaDoc$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$pandadoc$PandaDoc$getRelativePath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File, org$pandalanguage$pandac$pandadoc$PandaDoc$simpleName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$escape$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Annotations, org$pandalanguage$pandac$pandadoc$PandaDoc$splitDoc$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Pair$LTpanda$core$String$Cpanda$core$String$GT$GT, org$pandalanguage$pandac$pandadoc$PandaDoc$getMarkdown$R$org$pandalanguage$pandac$pandadoc$Markdown, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$writeSee$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$finishSees, org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$FieldDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$getDocComment$org$pandalanguage$pandac$MethodDecl$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$PandaDoc$stripParagraph$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeAncestors$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedFields$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedMethods$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT, org$pandalanguage$pandac$pandadoc$PandaDoc$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$pandadoc$PandaDoc$finish} };

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
typedef void (*$fn199)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn202)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn204)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn208)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn210)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn212)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn214)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn216)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn220)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn224)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn228)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn232)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn236)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn240)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn244)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn246)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn277)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn284)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn295)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn302)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn313)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn343)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$String* (*$fn368)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn382)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn389)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn400)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn428)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn434)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$pandadoc$Markdown* (*$fn472)(org$pandalanguage$pandac$pandadoc$PandaDoc*);
typedef void (*$fn475)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn482)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn484)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn487)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn490)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef void (*$fn492)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn494)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn498)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef org$pandalanguage$pandac$pandadoc$Markdown* (*$fn504)(org$pandalanguage$pandac$pandadoc$PandaDoc*);
typedef panda$core$String* (*$fn512)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn514)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn516)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn518)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$ListView* (*$fn539)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$core$Object* (*$fn545)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn547)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$collections$ListView* (*$fn560)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$collections$Iterator* (*$fn564)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn571)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn582)(panda$collections$Iterator*);
typedef void (*$fn591)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn603)(org$pandalanguage$pandac$pandadoc$PandaDoc*);
typedef panda$core$Bit (*$fn608)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn613)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn615)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn639)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn640)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Annotations*);
typedef void (*$fn641)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn642)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn644)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn672)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Object* (*$fn711)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn725)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$ListView* (*$fn731)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$core$Object* (*$fn737)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn739)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$collections$ListView* (*$fn752)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$collections$Iterator* (*$fn756)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn763)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn774)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn808)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$pandadoc$Markdown* (*$fn813)(org$pandalanguage$pandac$pandadoc$PandaDoc*);
typedef panda$core$Object* (*$fn819)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn821)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn823)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef org$pandalanguage$pandac$pandadoc$Markdown* (*$fn833)(org$pandalanguage$pandac$pandadoc$PandaDoc*);
typedef panda$core$String* (*$fn835)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn837)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn841)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn853)(org$pandalanguage$pandac$pandadoc$PandaDoc*);
typedef panda$core$Bit (*$fn858)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn879)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn882)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn884)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn885)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn894)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Annotations*);
typedef void (*$fn896)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn905)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn912)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn923)(panda$collections$Iterator*);
typedef void (*$fn926)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn928)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn929)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn935)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn937)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn941)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn946)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn947)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn949)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn951)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn952)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn958)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn967)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef void (*$fn980)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1017)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1024)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1035)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1037)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$collections$ListView* (*$fn1054)(panda$collections$ListView*, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT);
typedef void (*$fn1060)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1069)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1076)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1087)(panda$collections$Iterator*);
typedef void (*$fn1090)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1092)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn1101)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1109)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1111)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1115)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1136)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1143)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1154)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1190)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1197)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1208)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1215)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$collections$ListView* (*$fn1251)(panda$collections$ListView*, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT);
typedef void (*$fn1257)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1266)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1273)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1284)(panda$collections$Iterator*);
typedef void (*$fn1287)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1289)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn1298)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1306)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1308)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1312)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$collections$ListView* (*$fn1320)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$core$Object* (*$fn1326)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1328)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef panda$collections$ListView* (*$fn1341)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);
typedef panda$collections$Iterator* (*$fn1345)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1352)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1363)(panda$collections$Iterator*);
typedef void (*$fn1372)(org$pandalanguage$pandac$pandadoc$PandaDoc*, panda$core$String*);
typedef void (*$fn1384)(org$pandalanguage$pandac$pandadoc$PandaDoc*);
typedef void (*$fn1395)(panda$core$Object*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1396)(org$pandalanguage$pandac$Type*);
typedef void (*$fn1407)(panda$core$Object*, org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn1408)(org$pandalanguage$pandac$FieldDecl*);
typedef void (*$fn1419)(panda$core$Object*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1420)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$io$File* (*$fn1435)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*, panda$core$String*);
typedef void (*$fn1446)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1448)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$String* (*$fn1454)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1458)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1476)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1483)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1494)(panda$collections$Iterator*);
typedef void (*$fn1519)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef panda$core$Int64 (*$fn1531)(panda$collections$Iterator*);
typedef void (*$fn1543)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*, panda$core$String*);
typedef void (*$fn1544)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1545)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1550)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1555)(panda$collections$CollectionView*, panda$core$MutableMethod*);
typedef void (*$fn1557)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef void (*$fn1558)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1559)(org$pandalanguage$pandac$pandadoc$PandaDoc*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1564)(panda$collections$CollectionView*, panda$core$MutableMethod*);
typedef void (*$fn1569)(panda$collections$CollectionView*, panda$core$MutableMethod*);
typedef void (*$fn1571)(org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*, panda$core$String*);
typedef panda$core$String* (*$fn1577)(panda$collections$CollectionView*, panda$core$String*);

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
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 14565458216, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65", 4, 224821051, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x69\x6d\x70\x6c\x65\x4e\x61\x6d\x65", 10, -2422848206215579872, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x79\x70\x65", 4, 224821051, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 11, 4507694521940296927, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x69\x76\x61\x74\x65", 8, 17810332767009028, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x6f\x74\x65\x63\x74\x65\x64", 10, -2784229832336829125, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x61\x63\x6b\x61\x67\x65", 8, 17810153459603481, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x63\x6c\x61\x73\x73", 6, 1744580836099, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x6f\x76\x65\x72\x72\x69\x64\x65", 9, 1798740599574062829, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x66\x69\x6e\x61\x6c", 6, 1744890057187, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e", 10, -3608189969824264708, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x77\x65\x61\x6b", 5, 17293612189, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73", 11, 4507694521940296927, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x72\x3f\x5c\x6e", 5, 20201763772, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x20\x2a\x29\x2e\x2a", 6, 1485297799044, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x28\x3f\x3d\x5b\x20\x5c\x74\x5d\x2a\x40\x5c\x77\x2b\x29", 19, -7488746236773417835, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40", 1, 165, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x64\x29\x40\x28\x5c\x77\x2a\x29\x5c\x73\x2a\x28\x2e\x2a\x29", 17, -3061574336605567443, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x63", 3, 2061711, NULL };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x6d\x6d\x61\x72\x79", 7, 230529490176083, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e", 11, -5937374402135118271, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x63", 3, 2061711, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x65\x41\x6c\x73\x6f\x73", 8, 23266405537255732, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x65\x41\x6c\x73\x6f", 7, 230360450863917, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x65\x41\x6c\x73\x6f\x73", 8, 23266405537255732, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x65", 3, 2213718, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x61\x67\x20\x27\x40", 6, 2290892119052, NULL };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x6e\x20\x66\x69\x65\x6c\x64\x73", 28, -3973010739570834313, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72", 3, 2243930, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66", 3, 2060704, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74", 8, 21561703977373775, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79", 8, 22958674678203502, NULL };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6b\x69\x6e\x64", 4, 215384923, NULL };
static panda$core$String $s643 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x69\x6e\x68\x65\x72\x69\x74", 8, 17802859964149620, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x73\x70\x65\x63\x69\x66\x69\x65\x73\x20\x27\x40\x69\x6e\x68\x65\x72\x69\x74\x27\x2c\x20\x62\x75\x74\x20\x6e\x6f\x20\x6d\x61\x74\x63\x68\x69\x6e\x67\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x6f\x75\x6e\x64\x20\x61\x6d\x6f\x6e\x67\x20\x69\x74\x73\x20\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 77, 7383122139536139686, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x73\x70\x65\x63\x69\x66\x69\x65\x73\x20\x27\x40\x69\x6e\x68\x65\x72\x69\x74\x27\x2c\x20\x62\x75\x74\x20", 33, 1577005792040822601, NULL };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x6e\x79\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e", 32, -7234224912530298773, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x70\x3e\x28\x2e\x2a\x29\x3c\x5c\x2f\x70\x3e\x5c\x73\x2a", 15, 8989676937916321750, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static panda$core$String $s791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x64\x29\x28\x5c\x53\x2b\x29\x5c\x73\x2b\x28\x2e\x2b\x29", 16, -745059115866035108, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x27\x40\x70\x61\x72\x61\x6d\x27\x20\x63\x6f\x6e\x74\x65\x6e\x74\x73\x20\x27", 27, -1875178037567031932, NULL };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x73", 7, 229300545255688, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x65", 3, 2213718, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x61\x67\x20\x27\x40", 6, 2290892119052, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x6e\x20\x6d\x65\x74\x68\x6f\x64\x73", 29, 4554292315113417764, NULL };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64", 6, 2217751792842, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e", 8, 21889712039024771, NULL };
static panda$core$String $s878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x69\x74", 4, 213374837, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d\x73", 6, 2248863720545, NULL };
static panda$core$String $s925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e", 11, -5937374402135118271, NULL };
static panda$core$String $s936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d", 5, 22265977430, NULL };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x72\x61\x6d\x73", 6, 2248863720545, NULL };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e", 11, -5937374402135118271, NULL };
static panda$core$String $s950 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 9, 2155955930119440779, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x63\x65\x73\x74\x6f\x72\x73", 9, 2155955930119440779, NULL };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x6f\x6b\x65\x6e\x20\x6c\x69\x6e\x6b\x2e\x68\x74\x6d\x6c", 16, 8336040249104082495, NULL };
static panda$core$String $s1059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x46\x69\x65\x6c\x64\x73", 15, -7565896169200556928, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s1091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x6e\x6b", 4, 216415231, NULL };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x65\x6c\x64", 5, 21233484317, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x46\x69\x65\x6c\x64\x73", 15, -7565896169200556928, NULL };
static panda$core$String $s1256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x4d\x65\x74\x68\x6f\x64\x73", 16, -7838998677007085647, NULL };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64", 6, 2217751792842, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s1290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x6e\x6b", 4, 216415231, NULL };
static panda$core$String $s1301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x23", 1, 136, NULL };
static panda$core$String $s1304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64", 6, 2217751792842, NULL };
static panda$core$String $s1311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x68\x65\x72\x69\x74\x65\x64\x4d\x65\x74\x68\x6f\x64\x73", 16, -7838998677007085647, NULL };
static panda$core$String $s1370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x65", 3, 2213718, NULL };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x61\x67\x20\x27\x40", 6, 2290892119052, NULL };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x20\x69\x73\x20\x6e\x6f\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x6e\x20\x63\x6c\x61\x73\x73\x65\x73", 29, 4554281771516841858, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x78\x6d\x6c", 4, 152689484, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73", 5, 20924353935, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x61\x6d\x65", 4, 218394118, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x6c\x74\x3b", 4, 144325322, NULL };
static panda$core$String $s1508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x67\x74\x3b", 4, 144274317, NULL };
static panda$core$String $s1518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x69\x6d\x70\x6c\x65\x4e\x61\x6d\x65", 10, -2422848206215579872, NULL };
static panda$core$String $s1520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x6f\x75\x72\x63\x65", 6, 2281854130958, NULL };
static panda$core$String $s1525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f", 3, 1504240, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x6f\x75\x72\x63\x65\x2f", 7, 230467267226805, NULL };
static panda$core$String $s1537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s1549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73", 10, 5141924857140843769, NULL };
static panda$core$String $s1556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x73", 10, 5141924857140843769, NULL };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73", 5, 20924353935, NULL };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    panda$core$String* $tmp181;
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
        {
            $tmp181 = ((org$pandalanguage$pandac$Symbol*) p_t)->name;
            $returnValue88 = $tmp181;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
            return $returnValue88;
        }
        }
        }
        }
    }
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$escape$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_s) {
    panda$core$String* $returnValue183;
    panda$core$String* $tmp184;
    panda$core$String* $tmp185;
    panda$core$String* $tmp186;
    panda$core$String* $tmp187;
    panda$core$String* $tmp190 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_s, &$s188, &$s189);
    $tmp187 = $tmp190;
    panda$core$String* $tmp193 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp187, &$s191, &$s192);
    $tmp186 = $tmp193;
    panda$core$String* $tmp196 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp186, &$s194, &$s195);
    $tmp185 = $tmp196;
    $tmp184 = $tmp185;
    $returnValue183 = $tmp184;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
    return $returnValue183;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp201;
    panda$core$String* $tmp206;
    panda$core$String* $tmp207;
    (($fn199) self->out->$class->vtable[2])(self->out, &$s198);
    panda$core$String* $tmp203 = (($fn202) self->$class->vtable[6])(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    $tmp201 = $tmp203;
    (($fn204) self->out->$class->vtable[4])(self->out, &$s200, $tmp201);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
    panda$core$String* $tmp209 = (($fn208) self->$class->vtable[5])(self, p_t);
    $tmp207 = $tmp209;
    panda$core$String* $tmp211 = (($fn210) self->$class->vtable[6])(self, $tmp207);
    $tmp206 = $tmp211;
    (($fn212) self->out->$class->vtable[4])(self->out, &$s205, $tmp206);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
    (($fn214) self->out->$class->vtable[3])(self->out, &$s213);
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Annotations(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$Annotations* p_a) {
    (($fn216) self->out->$class->vtable[2])(self->out, &$s215);
    panda$core$Bit $tmp217 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(p_a);
    if ($tmp217.value) {
    {
        (($fn220) self->out->$class->vtable[4])(self->out, &$s218, &$s219);
    }
    }
    panda$core$Bit $tmp221 = org$pandalanguage$pandac$Annotations$isProtected$R$panda$core$Bit(p_a);
    if ($tmp221.value) {
    {
        (($fn224) self->out->$class->vtable[4])(self->out, &$s222, &$s223);
    }
    }
    panda$core$Bit $tmp225 = org$pandalanguage$pandac$Annotations$isPackage$R$panda$core$Bit(p_a);
    if ($tmp225.value) {
    {
        (($fn228) self->out->$class->vtable[4])(self->out, &$s226, &$s227);
    }
    }
    panda$core$Bit $tmp229 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_a);
    if ($tmp229.value) {
    {
        (($fn232) self->out->$class->vtable[4])(self->out, &$s230, &$s231);
    }
    }
    panda$core$Bit $tmp233 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_a);
    if ($tmp233.value) {
    {
        (($fn236) self->out->$class->vtable[4])(self->out, &$s234, &$s235);
    }
    }
    panda$core$Bit $tmp237 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_a);
    if ($tmp237.value) {
    {
        (($fn240) self->out->$class->vtable[4])(self->out, &$s238, &$s239);
    }
    }
    panda$core$Bit $tmp241 = org$pandalanguage$pandac$Annotations$isWeak$R$panda$core$Bit(p_a);
    if ($tmp241.value) {
    {
        (($fn244) self->out->$class->vtable[4])(self->out, &$s242, &$s243);
    }
    }
    (($fn246) self->out->$class->vtable[3])(self->out, &$s245);
}
panda$collections$ListView* org$pandalanguage$pandac$pandadoc$PandaDoc$splitDoc$panda$core$String$R$panda$collections$ListView$LTorg$pandalanguage$pandac$Pair$LTpanda$core$String$Cpanda$core$String$GT$GT(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_text) {
    panda$collections$Array* lines250 = NULL;
    panda$collections$Array* $tmp251;
    panda$collections$Array* $tmp252;
    panda$collections$ListView* $tmp254;
    panda$core$RegularExpression* $tmp255;
    panda$core$Object* $tmp259;
    panda$core$Int64 $tmp260;
    panda$core$Object* $tmp264;
    panda$core$Int64 $tmp265;
    panda$core$Int64 spaces267;
    panda$core$Int64 $tmp268;
    panda$collections$Iterator* Iter$154$9272 = NULL;
    panda$collections$Iterator* $tmp273;
    panda$collections$Iterator* $tmp274;
    panda$core$String* line290 = NULL;
    panda$core$String* $tmp291;
    panda$core$Object* $tmp292;
    panda$core$String* $tmp297;
    panda$core$Object* $tmp304;
    panda$collections$ListView* $tmp305;
    panda$core$RegularExpression* $tmp306;
    panda$core$Int64 $tmp310;
    panda$core$Range$LTpanda$core$Int64$GT $tmp319;
    panda$core$Int64 $tmp320;
    panda$core$Bit $tmp322;
    panda$core$String* $tmp336;
    panda$core$Object* $tmp337;
    panda$core$String* $tmp345;
    panda$core$Object* $tmp346;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp348;
    panda$core$Bit $tmp349;
    panda$collections$Array* result357 = NULL;
    panda$collections$Array* $tmp358;
    panda$collections$Array* $tmp359;
    panda$collections$ListView* split361 = NULL;
    panda$collections$ListView* $tmp362;
    panda$collections$ListView* $tmp363;
    panda$core$String* $tmp364;
    panda$core$RegularExpression* $tmp370;
    panda$collections$Iterator* Iter$167$9377 = NULL;
    panda$collections$Iterator* $tmp378;
    panda$collections$Iterator* $tmp379;
    panda$core$String* raw395 = NULL;
    panda$core$String* $tmp396;
    panda$core$Object* $tmp397;
    panda$core$String* s402 = NULL;
    panda$core$String* $tmp403;
    panda$core$String* $tmp404;
    org$pandalanguage$pandac$Pair* $tmp409;
    panda$collections$ListView* parsed415 = NULL;
    panda$collections$ListView* $tmp416;
    panda$collections$ListView* $tmp417;
    panda$core$RegularExpression* $tmp418;
    org$pandalanguage$pandac$Pair* $tmp422;
    panda$core$Object* $tmp424;
    panda$core$Int64 $tmp425;
    panda$core$Object* $tmp430;
    panda$core$Int64 $tmp431;
    panda$collections$ListView* $returnValue439;
    panda$collections$ListView* $tmp440;
    int $tmp249;
    {
        panda$collections$Array* $tmp253 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$core$RegularExpression* $tmp256 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp256, &$s257);
        $tmp255 = $tmp256;
        panda$collections$ListView* $tmp258 = panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT(p_text, $tmp255);
        $tmp254 = $tmp258;
        panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp253, ((panda$collections$CollectionView*) $tmp254));
        $tmp252 = $tmp253;
        $tmp251 = $tmp252;
        lines250 = $tmp251;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp251));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp252));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
        panda$core$Int64$init$builtin_int64(&$tmp260, 0);
        panda$core$Object* $tmp261 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(lines250, $tmp260);
        $tmp259 = $tmp261;
        panda$core$Bit $tmp263 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((panda$core$String*) $tmp259), &$s262);
        panda$core$Panda$unref$panda$core$Object($tmp259);
        if ($tmp263.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp265, 0);
            panda$core$Object* $tmp266 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(lines250, $tmp265);
            $tmp264 = $tmp266;
            panda$core$Panda$unref$panda$core$Object($tmp264);
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp268, 9223372036854775807);
        spaces267 = $tmp268;
        {
            int $tmp271;
            {
                ITable* $tmp275 = ((panda$collections$Iterable*) lines250)->$class->itable;
                while ($tmp275->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp275 = $tmp275->next;
                }
                $fn277 $tmp276 = $tmp275->methods[0];
                panda$collections$Iterator* $tmp278 = $tmp276(((panda$collections$Iterable*) lines250));
                $tmp274 = $tmp278;
                $tmp273 = $tmp274;
                Iter$154$9272 = $tmp273;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp273));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
                $l279:;
                ITable* $tmp282 = Iter$154$9272->$class->itable;
                while ($tmp282->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp282 = $tmp282->next;
                }
                $fn284 $tmp283 = $tmp282->methods[0];
                panda$core$Bit $tmp285 = $tmp283(Iter$154$9272);
                panda$core$Bit $tmp286 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp285);
                bool $tmp281 = $tmp286.value;
                if (!$tmp281) goto $l280;
                {
                    int $tmp289;
                    {
                        ITable* $tmp293 = Iter$154$9272->$class->itable;
                        while ($tmp293->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp293 = $tmp293->next;
                        }
                        $fn295 $tmp294 = $tmp293->methods[1];
                        panda$core$Object* $tmp296 = $tmp294(Iter$154$9272);
                        $tmp292 = $tmp296;
                        $tmp291 = ((panda$core$String*) $tmp292);
                        line290 = $tmp291;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp291));
                        panda$core$Panda$unref$panda$core$Object($tmp292);
                        panda$core$String* $tmp298 = panda$core$String$trim$R$panda$core$String(line290);
                        $tmp297 = $tmp298;
                        ITable* $tmp300 = ((panda$core$Equatable*) $tmp297)->$class->itable;
                        while ($tmp300->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                            $tmp300 = $tmp300->next;
                        }
                        $fn302 $tmp301 = $tmp300->methods[1];
                        panda$core$Bit $tmp303 = $tmp301(((panda$core$Equatable*) $tmp297), ((panda$core$Equatable*) &$s299));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
                        if ($tmp303.value) {
                        {
                            panda$core$RegularExpression* $tmp307 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                            panda$core$RegularExpression$init$panda$core$String($tmp307, &$s308);
                            $tmp306 = $tmp307;
                            panda$collections$ListView* $tmp309 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(line290, $tmp306);
                            $tmp305 = $tmp309;
                            panda$core$Int64$init$builtin_int64(&$tmp310, 0);
                            ITable* $tmp311 = $tmp305->$class->itable;
                            while ($tmp311->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                $tmp311 = $tmp311->next;
                            }
                            $fn313 $tmp312 = $tmp311->methods[0];
                            panda$core$Object* $tmp314 = $tmp312($tmp305, $tmp310);
                            $tmp304 = $tmp314;
                            panda$core$Int64 $tmp315 = panda$core$String$byteLength$R$panda$core$Int64(((panda$core$String*) $tmp304));
                            panda$core$Int64 $tmp316 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(spaces267, $tmp315);
                            spaces267 = $tmp316;
                            panda$core$Panda$unref$panda$core$Object($tmp304);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
                        }
                        }
                    }
                    $tmp289 = -1;
                    goto $l287;
                    $l287:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) line290));
                    line290 = NULL;
                    switch ($tmp289) {
                        case -1: goto $l317;
                    }
                    $l317:;
                }
                goto $l279;
                $l280:;
            }
            $tmp271 = -1;
            goto $l269;
            $l269:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$154$9272));
            Iter$154$9272 = NULL;
            switch ($tmp271) {
                case -1: goto $l318;
            }
            $l318:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp320, 0);
        panda$core$Int64 $tmp321 = panda$collections$Array$get_count$R$panda$core$Int64(lines250);
        panda$core$Bit$init$builtin_bit(&$tmp322, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp319, $tmp320, $tmp321, $tmp322);
        int64_t $tmp324 = $tmp319.min.value;
        panda$core$Int64 i323 = { $tmp324 };
        int64_t $tmp326 = $tmp319.max.value;
        bool $tmp327 = $tmp319.inclusive.value;
        if ($tmp327) goto $l334; else goto $l335;
        $l334:;
        if ($tmp324 <= $tmp326) goto $l328; else goto $l330;
        $l335:;
        if ($tmp324 < $tmp326) goto $l328; else goto $l330;
        $l328:;
        {
            panda$core$Object* $tmp338 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(lines250, i323);
            $tmp337 = $tmp338;
            panda$core$String* $tmp339 = panda$core$String$trim$R$panda$core$String(((panda$core$String*) $tmp337));
            $tmp336 = $tmp339;
            ITable* $tmp341 = ((panda$core$Equatable*) $tmp336)->$class->itable;
            while ($tmp341->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                $tmp341 = $tmp341->next;
            }
            $fn343 $tmp342 = $tmp341->methods[1];
            panda$core$Bit $tmp344 = $tmp342(((panda$core$Equatable*) $tmp336), ((panda$core$Equatable*) &$s340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
            panda$core$Panda$unref$panda$core$Object($tmp337);
            if ($tmp344.value) {
            {
                panda$core$Object* $tmp347 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(lines250, i323);
                $tmp346 = $tmp347;
                panda$core$Bit$init$builtin_bit(&$tmp349, false);
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp348, ((panda$core$Int64$nullable) { spaces267, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp349);
                panda$core$String* $tmp350 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(((panda$core$String*) $tmp346), $tmp348);
                $tmp345 = $tmp350;
                panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(lines250, i323, ((panda$core$Object*) $tmp345));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
                panda$core$Panda$unref$panda$core$Object($tmp346);
            }
            }
        }
        $l331:;
        int64_t $tmp352 = $tmp326 - i323.value;
        if ($tmp327) goto $l353; else goto $l354;
        $l353:;
        if ((uint64_t) $tmp352 >= 1) goto $l351; else goto $l330;
        $l354:;
        if ((uint64_t) $tmp352 > 1) goto $l351; else goto $l330;
        $l351:;
        i323.value += 1;
        goto $l328;
        $l330:;
        panda$collections$Array* $tmp360 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp360);
        $tmp359 = $tmp360;
        $tmp358 = $tmp359;
        result357 = $tmp358;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp358));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
        ITable* $tmp366 = ((panda$collections$CollectionView*) lines250)->$class->itable;
        while ($tmp366->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp366 = $tmp366->next;
        }
        $fn368 $tmp367 = $tmp366->methods[2];
        panda$core$String* $tmp369 = $tmp367(((panda$collections$CollectionView*) lines250), &$s365);
        $tmp364 = $tmp369;
        panda$core$RegularExpression* $tmp371 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp371, &$s372);
        $tmp370 = $tmp371;
        panda$collections$ListView* $tmp373 = panda$core$String$split$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT($tmp364, $tmp370);
        $tmp363 = $tmp373;
        $tmp362 = $tmp363;
        split361 = $tmp362;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp362));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp363));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
        {
            int $tmp376;
            {
                ITable* $tmp380 = ((panda$collections$Iterable*) split361)->$class->itable;
                while ($tmp380->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp380 = $tmp380->next;
                }
                $fn382 $tmp381 = $tmp380->methods[0];
                panda$collections$Iterator* $tmp383 = $tmp381(((panda$collections$Iterable*) split361));
                $tmp379 = $tmp383;
                $tmp378 = $tmp379;
                Iter$167$9377 = $tmp378;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
                $l384:;
                ITable* $tmp387 = Iter$167$9377->$class->itable;
                while ($tmp387->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp387 = $tmp387->next;
                }
                $fn389 $tmp388 = $tmp387->methods[0];
                panda$core$Bit $tmp390 = $tmp388(Iter$167$9377);
                panda$core$Bit $tmp391 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp390);
                bool $tmp386 = $tmp391.value;
                if (!$tmp386) goto $l385;
                {
                    int $tmp394;
                    {
                        ITable* $tmp398 = Iter$167$9377->$class->itable;
                        while ($tmp398->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp398 = $tmp398->next;
                        }
                        $fn400 $tmp399 = $tmp398->methods[1];
                        panda$core$Object* $tmp401 = $tmp399(Iter$167$9377);
                        $tmp397 = $tmp401;
                        $tmp396 = ((panda$core$String*) $tmp397);
                        raw395 = $tmp396;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp396));
                        panda$core$Panda$unref$panda$core$Object($tmp397);
                        panda$core$String* $tmp405 = panda$core$String$trim$R$panda$core$String(raw395);
                        $tmp404 = $tmp405;
                        $tmp403 = $tmp404;
                        s402 = $tmp403;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
                        panda$core$Bit $tmp407 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(s402, &$s406);
                        panda$core$Bit $tmp408 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp407);
                        if ($tmp408.value) {
                        {
                            org$pandalanguage$pandac$Pair* $tmp410 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
                            org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp410, ((panda$core$Object*) &$s411), ((panda$core$Object*) s402));
                            $tmp409 = $tmp410;
                            panda$collections$Array$add$panda$collections$Array$T(result357, ((panda$core$Object*) $tmp409));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
                        }
                        }
                        else {
                        {
                            int $tmp414;
                            {
                                panda$core$RegularExpression* $tmp419 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                                panda$core$RegularExpression$init$panda$core$String($tmp419, &$s420);
                                $tmp418 = $tmp419;
                                panda$collections$ListView* $tmp421 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(s402, $tmp418);
                                $tmp417 = $tmp421;
                                $tmp416 = $tmp417;
                                parsed415 = $tmp416;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp418));
                                if (((panda$core$Bit) { parsed415 != NULL }).value) {
                                {
                                    org$pandalanguage$pandac$Pair* $tmp423 = (org$pandalanguage$pandac$Pair*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Pair$class);
                                    panda$core$Int64$init$builtin_int64(&$tmp425, 0);
                                    ITable* $tmp426 = parsed415->$class->itable;
                                    while ($tmp426->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                        $tmp426 = $tmp426->next;
                                    }
                                    $fn428 $tmp427 = $tmp426->methods[0];
                                    panda$core$Object* $tmp429 = $tmp427(parsed415, $tmp425);
                                    $tmp424 = $tmp429;
                                    panda$core$Int64$init$builtin_int64(&$tmp431, 1);
                                    ITable* $tmp432 = parsed415->$class->itable;
                                    while ($tmp432->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                        $tmp432 = $tmp432->next;
                                    }
                                    $fn434 $tmp433 = $tmp432->methods[0];
                                    panda$core$Object* $tmp435 = $tmp433(parsed415, $tmp431);
                                    $tmp430 = $tmp435;
                                    org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B($tmp423, ((panda$core$Object*) ((panda$core$String*) $tmp424)), ((panda$core$Object*) ((panda$core$String*) $tmp430)));
                                    $tmp422 = $tmp423;
                                    panda$collections$Array$add$panda$collections$Array$T(result357, ((panda$core$Object*) $tmp422));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
                                    panda$core$Panda$unref$panda$core$Object($tmp430);
                                    panda$core$Panda$unref$panda$core$Object($tmp424);
                                }
                                }
                            }
                            $tmp414 = -1;
                            goto $l412;
                            $l412:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parsed415));
                            parsed415 = NULL;
                            switch ($tmp414) {
                                case -1: goto $l436;
                            }
                            $l436:;
                        }
                        }
                    }
                    $tmp394 = -1;
                    goto $l392;
                    $l392:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s402));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) raw395));
                    raw395 = NULL;
                    s402 = NULL;
                    switch ($tmp394) {
                        case -1: goto $l437;
                    }
                    $l437:;
                }
                goto $l384;
                $l385:;
            }
            $tmp376 = -1;
            goto $l374;
            $l374:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$167$9377));
            Iter$167$9377 = NULL;
            switch ($tmp376) {
                case -1: goto $l438;
            }
            $l438:;
        }
        $tmp440 = ((panda$collections$ListView*) result357);
        $returnValue439 = $tmp440;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp440));
        $tmp249 = 0;
        goto $l247;
        $l441:;
        return $returnValue439;
    }
    $l247:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) split361));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result357));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lines250));
    lines250 = NULL;
    result357 = NULL;
    split361 = NULL;
    switch ($tmp249) {
        case 0: goto $l441;
    }
    $l443:;
    abort();
}
org$pandalanguage$pandac$pandadoc$Markdown* org$pandalanguage$pandac$pandadoc$PandaDoc$getMarkdown$R$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$PandaDoc* self) {
    org$pandalanguage$pandac$pandadoc$Markdown* $returnValue444;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp445;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp446;
    org$pandalanguage$pandac$pandadoc$LinkResolver* $tmp449;
    panda$core$Object* $tmp451;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp447 = (org$pandalanguage$pandac$pandadoc$Markdown*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$class);
    panda$core$MutableMethod* $tmp448 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    org$pandalanguage$pandac$pandadoc$LinkResolver* $tmp450 = (org$pandalanguage$pandac$pandadoc$LinkResolver*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$LinkResolver$class);
    panda$core$Object* $tmp452 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
    $tmp451 = $tmp452;
    org$pandalanguage$pandac$pandadoc$LinkResolver$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$ClassDecl$Q($tmp450, ((org$pandalanguage$pandac$Compiler*) $tmp451), self->currentClass);
    $tmp449 = $tmp450;
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp448, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$LinkResolver$resolve$panda$core$String$R$panda$core$String$Q, ((panda$core$Object*) $tmp449));
    org$pandalanguage$pandac$pandadoc$Markdown$init$$LPpanda$core$String$RP$EQ$AM$GT$LPpanda$core$String$Q$RP$Q($tmp447, ((panda$core$Object*) $tmp448));
    $tmp446 = $tmp447;
    $tmp445 = $tmp446;
    $returnValue444 = $tmp445;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp445));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp449));
    panda$core$Panda$unref$panda$core$Object($tmp451);
    return $returnValue444;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_doccomment) {
    panda$core$String* summary457 = NULL;
    panda$core$String$Index$nullable index458;
    panda$core$String* $tmp461;
    panda$core$String* $tmp462;
    panda$core$String* $tmp463;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp464;
    panda$core$Bit $tmp465;
    panda$core$String* $tmp467;
    panda$core$String* $tmp468;
    org$pandalanguage$pandac$pandadoc$Markdown* md469 = NULL;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp470;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp471;
    panda$core$Int64 oldLevel476;
    panda$core$Int64 $tmp477;
    panda$core$String* processedSummary478 = NULL;
    panda$core$String* $tmp479;
    panda$core$String* $tmp480;
    panda$core$String* $tmp481;
    panda$core$String* $tmp489;
    int $tmp456;
    {
        memset(&summary457, 0, sizeof(summary457));
        panda$core$String$Index$nullable $tmp460 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(p_doccomment, &$s459);
        index458 = $tmp460;
        if (((panda$core$Bit) { index458.nonnull }).value) {
        {
            {
                $tmp461 = summary457;
                panda$core$Bit$init$builtin_bit(&$tmp465, true);
                panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp464, ((panda$core$String$Index$nullable) { .nonnull = false }), index458, $tmp465);
                panda$core$String* $tmp466 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_doccomment, $tmp464);
                $tmp463 = $tmp466;
                $tmp462 = $tmp463;
                summary457 = $tmp462;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp462));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp463));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
            }
        }
        }
        else {
        {
            {
                $tmp467 = summary457;
                $tmp468 = p_doccomment;
                summary457 = $tmp468;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
            }
        }
        }
        org$pandalanguage$pandac$pandadoc$Markdown* $tmp473 = (($fn472) self->$class->vtable[10])(self);
        $tmp471 = $tmp473;
        $tmp470 = $tmp471;
        md469 = $tmp470;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp470));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
        (($fn475) self->out->$class->vtable[2])(self->out, &$s474);
        oldLevel476 = self->out->out->level;
        panda$core$Int64$init$builtin_int64(&$tmp477, 0);
        self->out->out->level = $tmp477;
        panda$core$String* $tmp483 = (($fn482) md469->$class->vtable[2])(md469, summary457);
        $tmp481 = $tmp483;
        panda$core$String* $tmp485 = (($fn484) self->$class->vtable[19])(self, $tmp481);
        $tmp480 = $tmp485;
        $tmp479 = $tmp480;
        processedSummary478 = $tmp479;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp479));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
        (($fn487) self->out->$class->vtable[4])(self->out, &$s486, processedSummary478);
        panda$core$String* $tmp491 = (($fn490) md469->$class->vtable[2])(md469, p_doccomment);
        $tmp489 = $tmp491;
        (($fn492) self->out->$class->vtable[4])(self->out, &$s488, $tmp489);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
        self->out->out->level = oldLevel476;
        (($fn494) self->out->$class->vtable[3])(self->out, &$s493);
    }
    $tmp456 = -1;
    goto $l454;
    $l454:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) processedSummary478));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) md469));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) summary457));
    md469 = NULL;
    processedSummary478 = NULL;
    switch ($tmp456) {
        case -1: goto $l495;
    }
    $l495:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeSee$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_s) {
    panda$core$Bit $tmp499;
    panda$core$String* $tmp501;
    panda$core$String* $tmp502;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp503;
    panda$core$String* $tmp506;
    panda$core$String* $tmp507;
    panda$core$Bit $tmp496 = panda$core$Bit$$NOT$R$panda$core$Bit(self->haveSees);
    if ($tmp496.value) {
    {
        (($fn498) self->out->$class->vtable[2])(self->out, &$s497);
        panda$core$Bit$init$builtin_bit(&$tmp499, true);
        self->haveSees = $tmp499;
    }
    }
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp505 = (($fn504) self->$class->vtable[10])(self);
    $tmp503 = $tmp505;
    panda$core$String* $tmp509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s508, p_s);
    $tmp507 = $tmp509;
    panda$core$String* $tmp511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp507, &$s510);
    $tmp506 = $tmp511;
    panda$core$String* $tmp513 = (($fn512) $tmp503->$class->vtable[2])($tmp503, $tmp506);
    $tmp502 = $tmp513;
    panda$core$String* $tmp515 = (($fn514) self->$class->vtable[19])(self, $tmp502);
    $tmp501 = $tmp515;
    (($fn516) self->out->$class->vtable[4])(self->out, &$s500, $tmp501);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$finishSees(org$pandalanguage$pandac$pandadoc$PandaDoc* self) {
    panda$core$Bit $tmp519;
    if (self->haveSees.value) {
    {
        (($fn518) self->out->$class->vtable[3])(self->out, &$s517);
        panda$core$Bit$init$builtin_bit(&$tmp519, false);
        self->haveSees = $tmp519;
    }
    }
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$FieldDecl$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $returnValue520;
    panda$core$Bit $tmp521 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(p_f->annotations);
    panda$core$Bit $tmp522 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp521);
    $returnValue520 = $tmp522;
    return $returnValue520;
}
panda$core$Bit org$pandalanguage$pandac$pandadoc$PandaDoc$visible$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $returnValue524;
    panda$core$Bit $tmp526 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp527 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp526);
    bool $tmp525 = $tmp527.value;
    if (!$tmp525) goto $l528;
    panda$core$Bit $tmp529 = org$pandalanguage$pandac$Annotations$isSynthetic$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp530 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp529);
    $tmp525 = $tmp530.value;
    $l528:;
    panda$core$Bit $tmp531 = { $tmp525 };
    $returnValue524 = $tmp531;
    return $returnValue524;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$collections$ListView* split536 = NULL;
    panda$collections$ListView* $tmp537;
    panda$collections$ListView* $tmp538;
    panda$core$Object* $tmp541;
    panda$core$Int64 $tmp542;
    panda$collections$Iterator* Iter$234$13551 = NULL;
    panda$collections$Iterator* $tmp552;
    panda$collections$Iterator* $tmp553;
    panda$collections$ListView* $tmp554;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp555;
    panda$core$Int64 $tmp556;
    panda$core$Bit $tmp557;
    org$pandalanguage$pandac$Pair* tag577 = NULL;
    org$pandalanguage$pandac$Pair* $tmp578;
    panda$core$Object* $tmp579;
    panda$core$String* $match$235_17587 = NULL;
    panda$core$String* $tmp588;
    panda$core$Object* $tmp592;
    panda$core$String* $tmp594;
    panda$core$String* $tmp595;
    if (((panda$core$Bit) { p_f->doccomment != NULL }).value) {
    {
        int $tmp535;
        {
            panda$collections$ListView* $tmp540 = (($fn539) self->$class->vtable[9])(self, p_f->doccomment);
            $tmp538 = $tmp540;
            $tmp537 = $tmp538;
            split536 = $tmp537;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp537));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp538));
            panda$core$Int64$init$builtin_int64(&$tmp542, 0);
            ITable* $tmp543 = split536->$class->itable;
            while ($tmp543->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp543 = $tmp543->next;
            }
            $fn545 $tmp544 = $tmp543->methods[0];
            panda$core$Object* $tmp546 = $tmp544(split536, $tmp542);
            $tmp541 = $tmp546;
            (($fn547) self->$class->vtable[11])(self, ((panda$core$String*) ((org$pandalanguage$pandac$Pair*) $tmp541)->second));
            panda$core$Panda$unref$panda$core$Object($tmp541);
            {
                int $tmp550;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp556, 1);
                    panda$core$Bit$init$builtin_bit(&$tmp557, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp555, ((panda$core$Int64$nullable) { $tmp556, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp557);
                    ITable* $tmp558 = split536->$class->itable;
                    while ($tmp558->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp558 = $tmp558->next;
                    }
                    $fn560 $tmp559 = $tmp558->methods[2];
                    panda$collections$ListView* $tmp561 = $tmp559(split536, $tmp555);
                    $tmp554 = $tmp561;
                    ITable* $tmp562 = ((panda$collections$Iterable*) $tmp554)->$class->itable;
                    while ($tmp562->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp562 = $tmp562->next;
                    }
                    $fn564 $tmp563 = $tmp562->methods[0];
                    panda$collections$Iterator* $tmp565 = $tmp563(((panda$collections$Iterable*) $tmp554));
                    $tmp553 = $tmp565;
                    $tmp552 = $tmp553;
                    Iter$234$13551 = $tmp552;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp552));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp553));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp554));
                    $l566:;
                    ITable* $tmp569 = Iter$234$13551->$class->itable;
                    while ($tmp569->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp569 = $tmp569->next;
                    }
                    $fn571 $tmp570 = $tmp569->methods[0];
                    panda$core$Bit $tmp572 = $tmp570(Iter$234$13551);
                    panda$core$Bit $tmp573 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp572);
                    bool $tmp568 = $tmp573.value;
                    if (!$tmp568) goto $l567;
                    {
                        int $tmp576;
                        {
                            ITable* $tmp580 = Iter$234$13551->$class->itable;
                            while ($tmp580->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp580 = $tmp580->next;
                            }
                            $fn582 $tmp581 = $tmp580->methods[1];
                            panda$core$Object* $tmp583 = $tmp581(Iter$234$13551);
                            $tmp579 = $tmp583;
                            $tmp578 = ((org$pandalanguage$pandac$Pair*) $tmp579);
                            tag577 = $tmp578;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp578));
                            panda$core$Panda$unref$panda$core$Object($tmp579);
                            int $tmp586;
                            {
                                $tmp588 = ((panda$core$String*) tag577->first);
                                $match$235_17587 = $tmp588;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp588));
                                panda$core$Bit $tmp590 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$235_17587, &$s589);
                                if ($tmp590.value) {
                                {
                                    (($fn591) self->$class->vtable[12])(self, ((panda$core$String*) tag577->second));
                                }
                                }
                                else {
                                {
                                    panda$core$Object* $tmp593 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                    $tmp592 = $tmp593;
                                    panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s596, ((panda$core$String*) tag577->first));
                                    $tmp595 = $tmp597;
                                    panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp595, &$s598);
                                    $tmp594 = $tmp599;
                                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp592), ((org$pandalanguage$pandac$Symbol*) p_f)->position, $tmp594);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp594));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
                                    panda$core$Panda$unref$panda$core$Object($tmp592);
                                }
                                }
                            }
                            $tmp586 = -1;
                            goto $l584;
                            $l584:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp588));
                            switch ($tmp586) {
                                case -1: goto $l600;
                            }
                            $l600:;
                        }
                        $tmp576 = -1;
                        goto $l574;
                        $l574:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag577));
                        tag577 = NULL;
                        switch ($tmp576) {
                            case -1: goto $l601;
                        }
                        $l601:;
                    }
                    goto $l566;
                    $l567:;
                }
                $tmp550 = -1;
                goto $l548;
                $l548:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$234$13551));
                Iter$234$13551 = NULL;
                switch ($tmp550) {
                    case -1: goto $l602;
                }
                $l602:;
            }
            (($fn603) self->$class->vtable[13])(self);
        }
        $tmp535 = -1;
        goto $l533;
        $l533:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) split536));
        split536 = NULL;
        switch ($tmp535) {
            case -1: goto $l604;
        }
        $l604:;
    }
    }
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$String* kind616 = NULL;
    org$pandalanguage$pandac$FieldDecl$Kind $match$253_9617;
    panda$core$Int64 $tmp618;
    panda$core$String* $tmp620;
    panda$core$String* $tmp621;
    panda$core$Int64 $tmp623;
    panda$core$String* $tmp625;
    panda$core$String* $tmp626;
    panda$core$Int64 $tmp628;
    panda$core$String* $tmp630;
    panda$core$String* $tmp631;
    panda$core$Int64 $tmp633;
    panda$core$String* $tmp635;
    panda$core$String* $tmp636;
    int $tmp607;
    {
        panda$core$Bit $tmp609 = (($fn608) self->$class->vtable[14])(self, p_f);
        panda$core$Bit $tmp610 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp609);
        if ($tmp610.value) {
        {
            $tmp607 = 0;
            goto $l605;
            $l611:;
            return;
        }
        }
        (($fn613) self->out->$class->vtable[2])(self->out, &$s612);
        (($fn615) self->out->$class->vtable[4])(self->out, &$s614, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
        memset(&kind616, 0, sizeof(kind616));
        {
            $match$253_9617 = p_f->fieldKind;
            panda$core$Int64$init$builtin_int64(&$tmp618, 0);
            panda$core$Bit $tmp619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9617.$rawValue, $tmp618);
            if ($tmp619.value) {
            {
                {
                    $tmp620 = kind616;
                    $tmp621 = &$s622;
                    kind616 = $tmp621;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp621));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp623, 1);
            panda$core$Bit $tmp624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9617.$rawValue, $tmp623);
            if ($tmp624.value) {
            {
                {
                    $tmp625 = kind616;
                    $tmp626 = &$s627;
                    kind616 = $tmp626;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp626));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp628, 2);
            panda$core$Bit $tmp629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9617.$rawValue, $tmp628);
            if ($tmp629.value) {
            {
                {
                    $tmp630 = kind616;
                    $tmp631 = &$s632;
                    kind616 = $tmp631;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp631));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp633, 3);
            panda$core$Bit $tmp634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9617.$rawValue, $tmp633);
            if ($tmp634.value) {
            {
                {
                    $tmp635 = kind616;
                    $tmp636 = &$s637;
                    kind616 = $tmp636;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp636));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
                }
            }
            }
            }
            }
            }
        }
        (($fn639) self->out->$class->vtable[4])(self->out, &$s638, kind616);
        (($fn640) self->$class->vtable[8])(self, p_f->annotations);
        (($fn641) self->$class->vtable[7])(self, p_f->type);
        (($fn642) self->$class->vtable[16])(self, p_f);
        (($fn644) self->out->$class->vtable[3])(self->out, &$s643);
    }
    $tmp607 = -1;
    goto $l605;
    $l605:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) kind616));
    switch ($tmp607) {
        case -1: goto $l645;
        case 0: goto $l611;
    }
    $l645:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$getDocComment$org$pandalanguage$pandac$MethodDecl$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* $tmp648;
    org$pandalanguage$pandac$MethodDecl* overridden656 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp657;
    org$pandalanguage$pandac$MethodDecl* $tmp658;
    panda$core$Object* $tmp659;
    panda$core$Object* $tmp662;
    panda$core$String* $returnValue665;
    panda$core$String* $tmp666;
    panda$core$String* result669 = NULL;
    panda$core$String* $tmp670;
    panda$core$String* $tmp671;
    panda$core$Object* $tmp674;
    panda$core$String* $tmp676;
    panda$core$String* $tmp678;
    panda$core$String* $tmp679;
    panda$core$String* $tmp680;
    panda$core$String* $tmp686;
    panda$core$String* $tmp689;
    panda$core$String* $tmp693;
    bool $tmp646 = ((panda$core$Bit) { p_m->doccomment != NULL }).value;
    if (!$tmp646) goto $l647;
    panda$core$String* $tmp649 = panda$core$String$trim$R$panda$core$String(p_m->doccomment);
    $tmp648 = $tmp649;
    panda$core$Bit $tmp651 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp648, &$s650);
    $tmp646 = $tmp651.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp648));
    $l647:;
    panda$core$Bit $tmp652 = { $tmp646 };
    if ($tmp652.value) {
    {
        int $tmp655;
        {
            panda$core$Object* $tmp660 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
            $tmp659 = $tmp660;
            org$pandalanguage$pandac$MethodDecl* $tmp661 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp659), p_m);
            $tmp658 = $tmp661;
            $tmp657 = $tmp658;
            overridden656 = $tmp657;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp657));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp658));
            panda$core$Panda$unref$panda$core$Object($tmp659);
            if (((panda$core$Bit) { overridden656 == NULL }).value) {
            {
                panda$core$Object* $tmp663 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp662 = $tmp663;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp662), ((org$pandalanguage$pandac$Symbol*) p_m)->position, &$s664);
                panda$core$Panda$unref$panda$core$Object($tmp662);
                $tmp666 = NULL;
                $returnValue665 = $tmp666;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp666));
                $tmp655 = 0;
                goto $l653;
                $l667:;
                return $returnValue665;
            }
            }
            panda$core$String* $tmp673 = (($fn672) self->$class->vtable[18])(self, overridden656);
            $tmp671 = $tmp673;
            $tmp670 = $tmp671;
            result669 = $tmp670;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp670));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp671));
            if (((panda$core$Bit) { result669 == NULL }).value) {
            {
                panda$core$Object* $tmp675 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp674 = $tmp675;
                panda$core$String* $tmp681 = org$pandalanguage$pandac$MethodDecl$declaration$R$panda$core$String(overridden656);
                $tmp680 = $tmp681;
                panda$core$String* $tmp682 = panda$core$String$convert$R$panda$core$String($tmp680);
                $tmp679 = $tmp682;
                panda$core$String* $tmp684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp679, &$s683);
                $tmp678 = $tmp684;
                panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s677, $tmp678);
                $tmp676 = $tmp685;
                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp674), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp676);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp676));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp678));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp680));
                panda$core$Panda$unref$panda$core$Object($tmp674);
                $tmp686 = NULL;
                $returnValue665 = $tmp686;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp686));
                $tmp655 = 1;
                goto $l653;
                $l687:;
                return $returnValue665;
            }
            }
            $tmp689 = result669;
            $returnValue665 = $tmp689;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp689));
            $tmp655 = 2;
            goto $l653;
            $l690:;
            return $returnValue665;
        }
        $l653:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result669));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) overridden656));
        overridden656 = NULL;
        result669 = NULL;
        switch ($tmp655) {
            case 1: goto $l687;
            case 2: goto $l690;
            case 0: goto $l667;
        }
        $l692:;
    }
    }
    $tmp693 = p_m->doccomment;
    $returnValue665 = $tmp693;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp693));
    return $returnValue665;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$stripParagraph$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, panda$core$String* p_s) {
    panda$collections$ListView* parsed698 = NULL;
    panda$collections$ListView* $tmp699;
    panda$collections$ListView* $tmp700;
    panda$core$RegularExpression* $tmp701;
    panda$core$String* $returnValue705;
    panda$core$String* $tmp706;
    panda$core$Object* $tmp707;
    panda$core$Int64 $tmp708;
    panda$core$String* $tmp715;
    int $tmp697;
    {
        panda$core$RegularExpression* $tmp702 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
        panda$core$RegularExpression$init$panda$core$String($tmp702, &$s703);
        $tmp701 = $tmp702;
        panda$collections$ListView* $tmp704 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(p_s, $tmp701);
        $tmp700 = $tmp704;
        $tmp699 = $tmp700;
        parsed698 = $tmp699;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp699));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp700));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
        if (((panda$core$Bit) { parsed698 != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp708, 0);
            ITable* $tmp709 = parsed698->$class->itable;
            while ($tmp709->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp709 = $tmp709->next;
            }
            $fn711 $tmp710 = $tmp709->methods[0];
            panda$core$Object* $tmp712 = $tmp710(parsed698, $tmp708);
            $tmp707 = $tmp712;
            $tmp706 = ((panda$core$String*) $tmp707);
            $returnValue705 = $tmp706;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp706));
            panda$core$Panda$unref$panda$core$Object($tmp707);
            $tmp697 = 0;
            goto $l695;
            $l713:;
            return $returnValue705;
        }
        }
        $tmp715 = p_s;
        $returnValue705 = $tmp715;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp715));
        $tmp697 = 1;
        goto $l695;
        $l716:;
        return $returnValue705;
    }
    $l695:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) parsed698));
    parsed698 = NULL;
    switch ($tmp697) {
        case 1: goto $l716;
        case 0: goto $l713;
    }
    $l718:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* c722 = NULL;
    panda$core$String* $tmp723;
    panda$core$String* $tmp724;
    panda$collections$ListView* split728 = NULL;
    panda$collections$ListView* $tmp729;
    panda$collections$ListView* $tmp730;
    panda$core$Object* $tmp733;
    panda$core$Int64 $tmp734;
    panda$collections$Iterator* Iter$304$9743 = NULL;
    panda$collections$Iterator* $tmp744;
    panda$collections$Iterator* $tmp745;
    panda$collections$ListView* $tmp746;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp747;
    panda$core$Int64 $tmp748;
    panda$core$Bit $tmp749;
    org$pandalanguage$pandac$Pair* tag769 = NULL;
    org$pandalanguage$pandac$Pair* $tmp770;
    panda$core$Object* $tmp771;
    panda$core$String* $match$305_13779 = NULL;
    panda$core$String* $tmp780;
    panda$collections$ListView* split786 = NULL;
    panda$collections$ListView* $tmp787;
    panda$collections$ListView* $tmp788;
    panda$core$RegularExpression* $tmp789;
    panda$core$Object* $tmp793;
    panda$core$String* $tmp795;
    panda$core$String* $tmp796;
    panda$core$Object* $tmp804;
    panda$core$Int64 $tmp805;
    panda$core$String* $tmp810;
    panda$core$String* $tmp811;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp812;
    panda$core$Object* $tmp815;
    panda$core$Int64 $tmp816;
    panda$core$String* $tmp828;
    panda$core$String* $tmp829;
    panda$core$String* $tmp830;
    panda$core$String* $tmp831;
    org$pandalanguage$pandac$pandadoc$Markdown* $tmp832;
    panda$core$Object* $tmp842;
    panda$core$String* $tmp844;
    panda$core$String* $tmp845;
    int $tmp721;
    {
        panda$core$String* $tmp726 = (($fn725) self->$class->vtable[18])(self, p_m);
        $tmp724 = $tmp726;
        $tmp723 = $tmp724;
        c722 = $tmp723;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp723));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp724));
        if (((panda$core$Bit) { c722 == NULL }).value) {
        {
            $tmp721 = 0;
            goto $l719;
            $l727:;
            return;
        }
        }
        panda$collections$ListView* $tmp732 = (($fn731) self->$class->vtable[9])(self, c722);
        $tmp730 = $tmp732;
        $tmp729 = $tmp730;
        split728 = $tmp729;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp729));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp730));
        panda$core$Int64$init$builtin_int64(&$tmp734, 0);
        ITable* $tmp735 = split728->$class->itable;
        while ($tmp735->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp735 = $tmp735->next;
        }
        $fn737 $tmp736 = $tmp735->methods[0];
        panda$core$Object* $tmp738 = $tmp736(split728, $tmp734);
        $tmp733 = $tmp738;
        (($fn739) self->$class->vtable[11])(self, ((panda$core$String*) ((org$pandalanguage$pandac$Pair*) $tmp733)->second));
        panda$core$Panda$unref$panda$core$Object($tmp733);
        {
            int $tmp742;
            {
                panda$core$Int64$init$builtin_int64(&$tmp748, 1);
                panda$core$Bit$init$builtin_bit(&$tmp749, false);
                panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp747, ((panda$core$Int64$nullable) { $tmp748, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp749);
                ITable* $tmp750 = split728->$class->itable;
                while ($tmp750->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp750 = $tmp750->next;
                }
                $fn752 $tmp751 = $tmp750->methods[2];
                panda$collections$ListView* $tmp753 = $tmp751(split728, $tmp747);
                $tmp746 = $tmp753;
                ITable* $tmp754 = ((panda$collections$Iterable*) $tmp746)->$class->itable;
                while ($tmp754->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp754 = $tmp754->next;
                }
                $fn756 $tmp755 = $tmp754->methods[0];
                panda$collections$Iterator* $tmp757 = $tmp755(((panda$collections$Iterable*) $tmp746));
                $tmp745 = $tmp757;
                $tmp744 = $tmp745;
                Iter$304$9743 = $tmp744;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp744));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp745));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp746));
                $l758:;
                ITable* $tmp761 = Iter$304$9743->$class->itable;
                while ($tmp761->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp761 = $tmp761->next;
                }
                $fn763 $tmp762 = $tmp761->methods[0];
                panda$core$Bit $tmp764 = $tmp762(Iter$304$9743);
                panda$core$Bit $tmp765 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp764);
                bool $tmp760 = $tmp765.value;
                if (!$tmp760) goto $l759;
                {
                    int $tmp768;
                    {
                        ITable* $tmp772 = Iter$304$9743->$class->itable;
                        while ($tmp772->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp772 = $tmp772->next;
                        }
                        $fn774 $tmp773 = $tmp772->methods[1];
                        panda$core$Object* $tmp775 = $tmp773(Iter$304$9743);
                        $tmp771 = $tmp775;
                        $tmp770 = ((org$pandalanguage$pandac$Pair*) $tmp771);
                        tag769 = $tmp770;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp770));
                        panda$core$Panda$unref$panda$core$Object($tmp771);
                        int $tmp778;
                        {
                            $tmp780 = ((panda$core$String*) tag769->first);
                            $match$305_13779 = $tmp780;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp780));
                            panda$core$Bit $tmp782 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305_13779, &$s781);
                            if ($tmp782.value) {
                            {
                                int $tmp785;
                                {
                                    panda$core$RegularExpression* $tmp790 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
                                    panda$core$RegularExpression$init$panda$core$String($tmp790, &$s791);
                                    $tmp789 = $tmp790;
                                    panda$collections$ListView* $tmp792 = panda$core$String$parse$panda$core$RegularExpression$R$panda$collections$ListView$LTpanda$core$String$GT$Q(((panda$core$String*) tag769->second), $tmp789);
                                    $tmp788 = $tmp792;
                                    $tmp787 = $tmp788;
                                    split786 = $tmp787;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp787));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp788));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp789));
                                    if (((panda$core$Bit) { split786 == NULL }).value) {
                                    {
                                        panda$core$Object* $tmp794 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                        $tmp793 = $tmp794;
                                        panda$core$String* $tmp798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s797, ((panda$core$String*) tag769->second));
                                        $tmp796 = $tmp798;
                                        panda$core$String* $tmp800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp796, &$s799);
                                        $tmp795 = $tmp800;
                                        org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp793), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp795);
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp795));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp796));
                                        panda$core$Panda$unref$panda$core$Object($tmp793);
                                        $tmp785 = 0;
                                        goto $l783;
                                        $l801:;
                                        $tmp778 = 0;
                                        goto $l776;
                                        $l802:;
                                        $tmp768 = 0;
                                        goto $l766;
                                        $l803:;
                                        goto $l758;
                                    }
                                    }
                                    panda$core$Int64$init$builtin_int64(&$tmp805, 0);
                                    ITable* $tmp806 = split786->$class->itable;
                                    while ($tmp806->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                        $tmp806 = $tmp806->next;
                                    }
                                    $fn808 $tmp807 = $tmp806->methods[0];
                                    panda$core$Object* $tmp809 = $tmp807(split786, $tmp805);
                                    $tmp804 = $tmp809;
                                    org$pandalanguage$pandac$pandadoc$Markdown* $tmp814 = (($fn813) self->$class->vtable[10])(self);
                                    $tmp812 = $tmp814;
                                    panda$core$Int64$init$builtin_int64(&$tmp816, 1);
                                    ITable* $tmp817 = split786->$class->itable;
                                    while ($tmp817->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                                        $tmp817 = $tmp817->next;
                                    }
                                    $fn819 $tmp818 = $tmp817->methods[0];
                                    panda$core$Object* $tmp820 = $tmp818(split786, $tmp816);
                                    $tmp815 = $tmp820;
                                    panda$core$String* $tmp822 = (($fn821) $tmp812->$class->vtable[2])($tmp812, ((panda$core$String*) $tmp815));
                                    $tmp811 = $tmp822;
                                    panda$core$String* $tmp824 = (($fn823) self->$class->vtable[19])(self, $tmp811);
                                    $tmp810 = $tmp824;
                                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->params, ((panda$collections$Key*) ((panda$core$String*) $tmp804)), ((panda$core$Object*) $tmp810));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp810));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp811));
                                    panda$core$Panda$unref$panda$core$Object($tmp815);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
                                    panda$core$Panda$unref$panda$core$Object($tmp804);
                                }
                                $tmp785 = -1;
                                goto $l783;
                                $l783:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) split786));
                                split786 = NULL;
                                switch ($tmp785) {
                                    case 0: goto $l801;
                                    case -1: goto $l825;
                                }
                                $l825:;
                            }
                            }
                            else {
                            panda$core$Bit $tmp827 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305_13779, &$s826);
                            if ($tmp827.value) {
                            {
                                {
                                    $tmp828 = self->returns;
                                    org$pandalanguage$pandac$pandadoc$Markdown* $tmp834 = (($fn833) self->$class->vtable[10])(self);
                                    $tmp832 = $tmp834;
                                    panda$core$String* $tmp836 = (($fn835) $tmp832->$class->vtable[2])($tmp832, ((panda$core$String*) tag769->second));
                                    $tmp831 = $tmp836;
                                    panda$core$String* $tmp838 = (($fn837) self->$class->vtable[19])(self, $tmp831);
                                    $tmp830 = $tmp838;
                                    $tmp829 = $tmp830;
                                    self->returns = $tmp829;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp829));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp830));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp831));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp832));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp828));
                                }
                            }
                            }
                            else {
                            panda$core$Bit $tmp840 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305_13779, &$s839);
                            if ($tmp840.value) {
                            {
                                (($fn841) self->$class->vtable[12])(self, ((panda$core$String*) tag769->second));
                            }
                            }
                            else {
                            {
                                panda$core$Object* $tmp843 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                $tmp842 = $tmp843;
                                panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s846, ((panda$core$String*) tag769->first));
                                $tmp845 = $tmp847;
                                panda$core$String* $tmp849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp845, &$s848);
                                $tmp844 = $tmp849;
                                org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp842), ((org$pandalanguage$pandac$Symbol*) p_m)->position, $tmp844);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp844));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp845));
                                panda$core$Panda$unref$panda$core$Object($tmp842);
                            }
                            }
                            }
                            }
                        }
                        $tmp778 = -1;
                        goto $l776;
                        $l776:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp780));
                        switch ($tmp778) {
                            case 0: goto $l802;
                            case -1: goto $l850;
                        }
                        $l850:;
                    }
                    $tmp768 = -1;
                    goto $l766;
                    $l766:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag769));
                    tag769 = NULL;
                    switch ($tmp768) {
                        case 0: goto $l803;
                        case -1: goto $l851;
                    }
                    $l851:;
                }
                goto $l758;
                $l759:;
            }
            $tmp742 = -1;
            goto $l740;
            $l740:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$304$9743));
            Iter$304$9743 = NULL;
            switch ($tmp742) {
                case -1: goto $l852;
            }
            $l852:;
        }
        (($fn853) self->$class->vtable[13])(self);
    }
    $tmp721 = -1;
    goto $l719;
    $l719:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) split728));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) c722));
    c722 = NULL;
    split728 = NULL;
    switch ($tmp721) {
        case -1: goto $l854;
        case 0: goto $l727;
    }
    $l854:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* tag862 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind $match$329_9863;
    panda$core$Int64 $tmp864;
    panda$core$String* $tmp866;
    panda$core$String* $tmp867;
    panda$core$Int64 $tmp869;
    panda$core$String* $tmp871;
    panda$core$String* $tmp872;
    panda$core$Int64 $tmp874;
    panda$core$String* $tmp876;
    panda$core$String* $tmp877;
    panda$core$String* $tmp881;
    org$pandalanguage$pandac$Annotations* annotations886 = NULL;
    org$pandalanguage$pandac$Annotations* $tmp887;
    panda$core$Object* $tmp888;
    panda$core$Int64 $tmp891;
    panda$collections$Iterator* Iter$346$9900 = NULL;
    panda$collections$Iterator* $tmp901;
    panda$collections$Iterator* $tmp902;
    org$pandalanguage$pandac$MethodDecl$Parameter* p918 = NULL;
    org$pandalanguage$pandac$MethodDecl$Parameter* $tmp919;
    panda$core$Object* $tmp920;
    panda$core$String* desc930 = NULL;
    panda$core$String* $tmp931;
    panda$core$Object* $tmp932;
    org$pandalanguage$pandac$Type* $tmp942;
    int $tmp857;
    {
        panda$core$Bit $tmp859 = (($fn858) self->$class->vtable[15])(self, p_m);
        panda$core$Bit $tmp860 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp859);
        if ($tmp860.value) {
        {
            $tmp857 = 0;
            goto $l855;
            $l861:;
            return;
        }
        }
        memset(&tag862, 0, sizeof(tag862));
        {
            $match$329_9863 = p_m->methodKind;
            panda$core$Int64$init$builtin_int64(&$tmp864, 0);
            panda$core$Bit $tmp865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_9863.$rawValue, $tmp864);
            if ($tmp865.value) {
            {
                {
                    $tmp866 = tag862;
                    $tmp867 = &$s868;
                    tag862 = $tmp867;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp867));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp866));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp869, 1);
            panda$core$Bit $tmp870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_9863.$rawValue, $tmp869);
            if ($tmp870.value) {
            {
                {
                    $tmp871 = tag862;
                    $tmp872 = &$s873;
                    tag862 = $tmp872;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp872));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
                }
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp874, 2);
            panda$core$Bit $tmp875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$329_9863.$rawValue, $tmp874);
            if ($tmp875.value) {
            {
                {
                    $tmp876 = tag862;
                    $tmp877 = &$s878;
                    tag862 = $tmp877;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp877));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp876));
                }
            }
            }
            }
            }
        }
        (($fn879) self->out->$class->vtable[2])(self->out, tag862);
        panda$core$String* $tmp883 = (($fn882) self->$class->vtable[6])(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
        $tmp881 = $tmp883;
        (($fn884) self->out->$class->vtable[4])(self->out, &$s880, $tmp881);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp881));
        (($fn885) self->$class->vtable[20])(self, p_m);
        $tmp887 = p_m->annotations;
        annotations886 = $tmp887;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp887));
        panda$core$Object* $tmp889 = panda$core$Weak$get$R$panda$core$Weak$T(p_m->owner);
        $tmp888 = $tmp889;
        panda$core$Bit $tmp890 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(((org$pandalanguage$pandac$ClassDecl*) $tmp888)->annotations);
        panda$core$Panda$unref$panda$core$Object($tmp888);
        if ($tmp890.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp891, 256);
            panda$core$Int64 $tmp892 = panda$core$Int64$$BNOT$R$panda$core$Int64($tmp891);
            panda$core$Int64 $tmp893 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(annotations886->flags, $tmp892);
            annotations886->flags = $tmp893;
            (($fn894) self->$class->vtable[8])(self, annotations886);
        }
        }
        (($fn896) self->out->$class->vtable[2])(self->out, &$s895);
        {
            int $tmp899;
            {
                ITable* $tmp903 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
                while ($tmp903->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp903 = $tmp903->next;
                }
                $fn905 $tmp904 = $tmp903->methods[0];
                panda$collections$Iterator* $tmp906 = $tmp904(((panda$collections$Iterable*) p_m->parameters));
                $tmp902 = $tmp906;
                $tmp901 = $tmp902;
                Iter$346$9900 = $tmp901;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp901));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp902));
                $l907:;
                ITable* $tmp910 = Iter$346$9900->$class->itable;
                while ($tmp910->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp910 = $tmp910->next;
                }
                $fn912 $tmp911 = $tmp910->methods[0];
                panda$core$Bit $tmp913 = $tmp911(Iter$346$9900);
                panda$core$Bit $tmp914 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp913);
                bool $tmp909 = $tmp914.value;
                if (!$tmp909) goto $l908;
                {
                    int $tmp917;
                    {
                        ITable* $tmp921 = Iter$346$9900->$class->itable;
                        while ($tmp921->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp921 = $tmp921->next;
                        }
                        $fn923 $tmp922 = $tmp921->methods[1];
                        panda$core$Object* $tmp924 = $tmp922(Iter$346$9900);
                        $tmp920 = $tmp924;
                        $tmp919 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp920);
                        p918 = $tmp919;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp919));
                        panda$core$Panda$unref$panda$core$Object($tmp920);
                        (($fn926) self->out->$class->vtable[2])(self->out, &$s925);
                        (($fn928) self->out->$class->vtable[4])(self->out, &$s927, p918->name);
                        (($fn929) self->$class->vtable[7])(self, p918->type);
                        panda$core$Object* $tmp933 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->params, ((panda$collections$Key*) p918->name));
                        $tmp932 = $tmp933;
                        $tmp931 = ((panda$core$String*) $tmp932);
                        desc930 = $tmp931;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp931));
                        panda$core$Panda$unref$panda$core$Object($tmp932);
                        if (((panda$core$Bit) { desc930 != NULL }).value) {
                        {
                            (($fn935) self->out->$class->vtable[4])(self->out, &$s934, desc930);
                        }
                        }
                        (($fn937) self->out->$class->vtable[3])(self->out, &$s936);
                    }
                    $tmp917 = -1;
                    goto $l915;
                    $l915:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) desc930));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p918));
                    p918 = NULL;
                    desc930 = NULL;
                    switch ($tmp917) {
                        case -1: goto $l938;
                    }
                    $l938:;
                }
                goto $l907;
                $l908:;
            }
            $tmp899 = -1;
            goto $l897;
            $l897:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$346$9900));
            Iter$346$9900 = NULL;
            switch ($tmp899) {
                case -1: goto $l939;
            }
            $l939:;
        }
        (($fn941) self->out->$class->vtable[3])(self->out, &$s940);
        org$pandalanguage$pandac$Type* $tmp943 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        $tmp942 = $tmp943;
        panda$core$Bit $tmp944 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp942);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp942));
        if ($tmp944.value) {
        {
            (($fn946) self->out->$class->vtable[2])(self->out, &$s945);
            (($fn947) self->$class->vtable[7])(self, p_m->returnType);
            if (((panda$core$Bit) { self->returns != NULL }).value) {
            {
                (($fn949) self->out->$class->vtable[4])(self->out, &$s948, self->returns);
            }
            }
            (($fn951) self->out->$class->vtable[3])(self->out, &$s950);
        }
        }
        (($fn952) self->out->$class->vtable[3])(self->out, tag862);
    }
    $tmp857 = -1;
    goto $l855;
    $l855:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) annotations886));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag862));
    annotations886 = NULL;
    switch ($tmp857) {
        case -1: goto $l953;
        case 0: goto $l861;
    }
    $l953:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeAncestors$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Type* ancestor959 = NULL;
    org$pandalanguage$pandac$Type* $tmp960;
    org$pandalanguage$pandac$ClassDecl* ancestorClass968 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp969;
    org$pandalanguage$pandac$ClassDecl* $tmp970;
    panda$core$Object* $tmp971;
    org$pandalanguage$pandac$Type* $tmp976;
    org$pandalanguage$pandac$Type* $tmp977;
    int $tmp956;
    {
        (($fn958) self->out->$class->vtable[2])(self->out, &$s957);
        $tmp960 = p_cl->rawSuper;
        ancestor959 = $tmp960;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp960));
        $l961:;
        bool $tmp963 = ((panda$core$Bit) { ancestor959 != NULL }).value;
        if (!$tmp963) goto $l962;
        {
            int $tmp966;
            {
                (($fn967) self->$class->vtable[7])(self, ancestor959);
                panda$core$Object* $tmp972 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp971 = $tmp972;
                org$pandalanguage$pandac$ClassDecl* $tmp973 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp971), ancestor959);
                $tmp970 = $tmp973;
                $tmp969 = $tmp970;
                ancestorClass968 = $tmp969;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp969));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp970));
                panda$core$Panda$unref$panda$core$Object($tmp971);
                if (((panda$core$Bit) { ancestorClass968 == NULL }).value) {
                {
                    $tmp966 = 0;
                    goto $l964;
                    $l974:;
                    $tmp956 = 0;
                    goto $l954;
                    $l975:;
                    return;
                }
                }
                {
                    $tmp976 = ancestor959;
                    $tmp977 = ancestorClass968->rawSuper;
                    ancestor959 = $tmp977;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp977));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp976));
                }
            }
            $tmp966 = -1;
            goto $l964;
            $l964:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestorClass968));
            ancestorClass968 = NULL;
            switch ($tmp966) {
                case -1: goto $l978;
                case 0: goto $l974;
            }
            $l978:;
        }
        goto $l961;
        $l962:;
        (($fn980) self->out->$class->vtable[3])(self->out, &$s979);
    }
    $tmp956 = -1;
    goto $l954;
    $l954:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestor959));
    ancestor959 = NULL;
    switch ($tmp956) {
        case 0: goto $l975;
        case -1: goto $l981;
    }
    $l981:;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$PandaDoc$linkTo$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* $returnValue982;
    panda$core$String* $tmp983;
    $tmp983 = &$s984;
    $returnValue982 = $tmp983;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp983));
    return $returnValue982;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedFields$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* fields989 = NULL;
    panda$collections$Array* $tmp990;
    panda$collections$Array* $tmp991;
    org$pandalanguage$pandac$Type* ancestor993 = NULL;
    org$pandalanguage$pandac$Type* $tmp994;
    org$pandalanguage$pandac$ClassDecl* ancestorClass1001 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1002;
    org$pandalanguage$pandac$ClassDecl* $tmp1003;
    panda$core$Object* $tmp1004;
    panda$collections$Iterator* Iter$394$131012 = NULL;
    panda$collections$Iterator* $tmp1013;
    panda$collections$Iterator* $tmp1014;
    org$pandalanguage$pandac$FieldDecl* f1030 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1031;
    panda$core$Object* $tmp1032;
    panda$core$Object* $tmp1039;
    org$pandalanguage$pandac$Type* $tmp1043;
    org$pandalanguage$pandac$Type* $tmp1044;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1046;
    panda$core$Bit $tmp1047;
    panda$collections$ListView* $tmp1048;
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT $tmp1049;
    panda$core$Int64 $tmp1050;
    panda$core$Bit $tmp1051;
    panda$core$Int64 $tmp1057;
    panda$collections$Iterator* Iter$406$131064 = NULL;
    panda$collections$Iterator* $tmp1065;
    panda$collections$Iterator* $tmp1066;
    org$pandalanguage$pandac$FieldDecl* f1082 = NULL;
    org$pandalanguage$pandac$FieldDecl* $tmp1083;
    panda$core$Object* $tmp1084;
    panda$core$String* $tmp1094;
    panda$core$String* $tmp1095;
    panda$core$String* $tmp1096;
    panda$core$String* $tmp1097;
    panda$core$String* $tmp1098;
    panda$core$Object* $tmp1099;
    int $tmp988;
    {
        panda$collections$Array* $tmp992 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp992);
        $tmp991 = $tmp992;
        $tmp990 = $tmp991;
        fields989 = $tmp990;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp990));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp991));
        $tmp994 = p_cl->rawSuper;
        ancestor993 = $tmp994;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp994));
        $l995:;
        bool $tmp997 = ((panda$core$Bit) { ancestor993 != NULL }).value;
        if (!$tmp997) goto $l996;
        {
            int $tmp1000;
            {
                panda$core$Object* $tmp1005 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp1004 = $tmp1005;
                org$pandalanguage$pandac$ClassDecl* $tmp1006 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1004), ancestor993);
                $tmp1003 = $tmp1006;
                $tmp1002 = $tmp1003;
                ancestorClass1001 = $tmp1002;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1002));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1003));
                panda$core$Panda$unref$panda$core$Object($tmp1004);
                if (((panda$core$Bit) { ancestorClass1001 == NULL }).value) {
                {
                    $tmp1000 = 0;
                    goto $l998;
                    $l1007:;
                    $tmp988 = 0;
                    goto $l986;
                    $l1008:;
                    return;
                }
                }
                {
                    int $tmp1011;
                    {
                        ITable* $tmp1015 = ((panda$collections$Iterable*) ancestorClass1001->fields)->$class->itable;
                        while ($tmp1015->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1015 = $tmp1015->next;
                        }
                        $fn1017 $tmp1016 = $tmp1015->methods[0];
                        panda$collections$Iterator* $tmp1018 = $tmp1016(((panda$collections$Iterable*) ancestorClass1001->fields));
                        $tmp1014 = $tmp1018;
                        $tmp1013 = $tmp1014;
                        Iter$394$131012 = $tmp1013;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1013));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1014));
                        $l1019:;
                        ITable* $tmp1022 = Iter$394$131012->$class->itable;
                        while ($tmp1022->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1022 = $tmp1022->next;
                        }
                        $fn1024 $tmp1023 = $tmp1022->methods[0];
                        panda$core$Bit $tmp1025 = $tmp1023(Iter$394$131012);
                        panda$core$Bit $tmp1026 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1025);
                        bool $tmp1021 = $tmp1026.value;
                        if (!$tmp1021) goto $l1020;
                        {
                            int $tmp1029;
                            {
                                ITable* $tmp1033 = Iter$394$131012->$class->itable;
                                while ($tmp1033->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1033 = $tmp1033->next;
                                }
                                $fn1035 $tmp1034 = $tmp1033->methods[1];
                                panda$core$Object* $tmp1036 = $tmp1034(Iter$394$131012);
                                $tmp1032 = $tmp1036;
                                $tmp1031 = ((org$pandalanguage$pandac$FieldDecl*) $tmp1032);
                                f1030 = $tmp1031;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1031));
                                panda$core$Panda$unref$panda$core$Object($tmp1032);
                                panda$core$Bit $tmp1038 = (($fn1037) self->$class->vtable[14])(self, f1030);
                                if ($tmp1038.value) {
                                {
                                    panda$core$Object* $tmp1040 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                    $tmp1039 = $tmp1040;
                                    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(((org$pandalanguage$pandac$Compiler*) $tmp1039), f1030);
                                    panda$core$Panda$unref$panda$core$Object($tmp1039);
                                    panda$collections$Array$add$panda$collections$Array$T(fields989, ((panda$core$Object*) f1030));
                                }
                                }
                            }
                            $tmp1029 = -1;
                            goto $l1027;
                            $l1027:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f1030));
                            f1030 = NULL;
                            switch ($tmp1029) {
                                case -1: goto $l1041;
                            }
                            $l1041:;
                        }
                        goto $l1019;
                        $l1020:;
                    }
                    $tmp1011 = -1;
                    goto $l1009;
                    $l1009:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$394$131012));
                    Iter$394$131012 = NULL;
                    switch ($tmp1011) {
                        case -1: goto $l1042;
                    }
                    $l1042:;
                }
                {
                    $tmp1043 = ancestor993;
                    $tmp1044 = ancestorClass1001->rawSuper;
                    ancestor993 = $tmp1044;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1044));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1043));
                }
            }
            $tmp1000 = -1;
            goto $l998;
            $l998:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestorClass1001));
            ancestorClass1001 = NULL;
            switch ($tmp1000) {
                case 0: goto $l1007;
                case -1: goto $l1045;
            }
            $l1045:;
        }
        goto $l995;
        $l996:;
        panda$core$Bit$init$builtin_bit(&$tmp1047, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1046, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1047);
        panda$core$Int64$init$builtin_int64(&$tmp1050, -1);
        panda$core$Bit$init$builtin_bit(&$tmp1051, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$panda$core$Bit(&$tmp1049, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1050, $tmp1051);
        ITable* $tmp1052 = ((panda$collections$ListView*) fields989)->$class->itable;
        while ($tmp1052->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1052 = $tmp1052->next;
        }
        $fn1054 $tmp1053 = $tmp1052->methods[3];
        panda$collections$ListView* $tmp1055 = $tmp1053(((panda$collections$ListView*) fields989), $tmp1049);
        $tmp1048 = $tmp1055;
        panda$collections$Array$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$Array$T$GT(fields989, $tmp1046, $tmp1048);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
        panda$core$Int64 $tmp1056 = panda$collections$Array$get_count$R$panda$core$Int64(fields989);
        panda$core$Int64$init$builtin_int64(&$tmp1057, 0);
        panda$core$Bit $tmp1058 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1056, $tmp1057);
        if ($tmp1058.value) {
        {
            (($fn1060) self->out->$class->vtable[2])(self->out, &$s1059);
            {
                int $tmp1063;
                {
                    ITable* $tmp1067 = ((panda$collections$Iterable*) fields989)->$class->itable;
                    while ($tmp1067->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1067 = $tmp1067->next;
                    }
                    $fn1069 $tmp1068 = $tmp1067->methods[0];
                    panda$collections$Iterator* $tmp1070 = $tmp1068(((panda$collections$Iterable*) fields989));
                    $tmp1066 = $tmp1070;
                    $tmp1065 = $tmp1066;
                    Iter$406$131064 = $tmp1065;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1065));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1066));
                    $l1071:;
                    ITable* $tmp1074 = Iter$406$131064->$class->itable;
                    while ($tmp1074->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1074 = $tmp1074->next;
                    }
                    $fn1076 $tmp1075 = $tmp1074->methods[0];
                    panda$core$Bit $tmp1077 = $tmp1075(Iter$406$131064);
                    panda$core$Bit $tmp1078 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1077);
                    bool $tmp1073 = $tmp1078.value;
                    if (!$tmp1073) goto $l1072;
                    {
                        int $tmp1081;
                        {
                            ITable* $tmp1085 = Iter$406$131064->$class->itable;
                            while ($tmp1085->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1085 = $tmp1085->next;
                            }
                            $fn1087 $tmp1086 = $tmp1085->methods[1];
                            panda$core$Object* $tmp1088 = $tmp1086(Iter$406$131064);
                            $tmp1084 = $tmp1088;
                            $tmp1083 = ((org$pandalanguage$pandac$FieldDecl*) $tmp1084);
                            f1082 = $tmp1083;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1083));
                            panda$core$Panda$unref$panda$core$Object($tmp1084);
                            (($fn1090) self->out->$class->vtable[2])(self->out, &$s1089);
                            (($fn1092) self->out->$class->vtable[4])(self->out, &$s1091, ((org$pandalanguage$pandac$Symbol*) f1082)->name);
                            panda$core$Object* $tmp1100 = panda$core$Weak$get$R$panda$core$Weak$T(f1082->owner);
                            $tmp1099 = $tmp1100;
                            panda$core$String* $tmp1102 = (($fn1101) self->$class->vtable[23])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp1099));
                            $tmp1098 = $tmp1102;
                            panda$core$String* $tmp1103 = panda$core$String$convert$R$panda$core$String($tmp1098);
                            $tmp1097 = $tmp1103;
                            panda$core$String* $tmp1105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1097, &$s1104);
                            $tmp1096 = $tmp1105;
                            panda$core$String* $tmp1106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1096, ((org$pandalanguage$pandac$Symbol*) f1082)->name);
                            $tmp1095 = $tmp1106;
                            panda$core$String* $tmp1108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1095, &$s1107);
                            $tmp1094 = $tmp1108;
                            (($fn1109) self->out->$class->vtable[4])(self->out, &$s1093, $tmp1094);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1094));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1095));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1096));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1097));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1098));
                            panda$core$Panda$unref$panda$core$Object($tmp1099);
                            (($fn1111) self->out->$class->vtable[3])(self->out, &$s1110);
                        }
                        $tmp1081 = -1;
                        goto $l1079;
                        $l1079:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f1082));
                        f1082 = NULL;
                        switch ($tmp1081) {
                            case -1: goto $l1112;
                        }
                        $l1112:;
                    }
                    goto $l1071;
                    $l1072:;
                }
                $tmp1063 = -1;
                goto $l1061;
                $l1061:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$406$131064));
                Iter$406$131064 = NULL;
                switch ($tmp1063) {
                    case -1: goto $l1113;
                }
                $l1113:;
            }
            (($fn1115) self->out->$class->vtable[3])(self->out, &$s1114);
        }
        }
    }
    $tmp988 = -1;
    goto $l986;
    $l986:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestor993));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) fields989));
    fields989 = NULL;
    ancestor993 = NULL;
    switch ($tmp988) {
        case 0: goto $l1008;
        case -1: goto $l1116;
    }
    $l1116:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeInheritedMethods$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Array* methods1120 = NULL;
    panda$collections$Array* $tmp1121;
    panda$collections$Array* $tmp1122;
    panda$collections$HashSet* overridden1124 = NULL;
    panda$collections$HashSet* $tmp1125;
    panda$collections$HashSet* $tmp1126;
    panda$collections$Iterator* Iter$419$91131 = NULL;
    panda$collections$Iterator* $tmp1132;
    panda$collections$Iterator* $tmp1133;
    org$pandalanguage$pandac$MethodDecl* m1149 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1150;
    panda$core$Object* $tmp1151;
    org$pandalanguage$pandac$MethodDecl* o1156 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1157;
    org$pandalanguage$pandac$MethodDecl* $tmp1158;
    panda$core$Object* $tmp1159;
    panda$core$String* $tmp1162;
    org$pandalanguage$pandac$Type* ancestor1166 = NULL;
    org$pandalanguage$pandac$Type* $tmp1167;
    org$pandalanguage$pandac$ClassDecl* ancestorClass1174 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp1175;
    org$pandalanguage$pandac$ClassDecl* $tmp1176;
    panda$core$Object* $tmp1177;
    panda$collections$Iterator* Iter$431$131185 = NULL;
    panda$collections$Iterator* $tmp1186;
    panda$collections$Iterator* $tmp1187;
    org$pandalanguage$pandac$MethodDecl* m1203 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1204;
    panda$core$Object* $tmp1205;
    panda$core$Int64 $tmp1212;
    panda$core$String* $tmp1219;
    panda$core$Object* $tmp1227;
    org$pandalanguage$pandac$MethodDecl* o1229 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1230;
    org$pandalanguage$pandac$MethodDecl* $tmp1231;
    panda$core$Object* $tmp1232;
    panda$core$String* $tmp1235;
    org$pandalanguage$pandac$Type* $tmp1240;
    org$pandalanguage$pandac$Type* $tmp1241;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1243;
    panda$core$Bit $tmp1244;
    panda$collections$ListView* $tmp1245;
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT $tmp1246;
    panda$core$Int64 $tmp1247;
    panda$core$Bit $tmp1248;
    panda$core$Int64 $tmp1254;
    panda$collections$Iterator* Iter$448$131261 = NULL;
    panda$collections$Iterator* $tmp1262;
    panda$collections$Iterator* $tmp1263;
    org$pandalanguage$pandac$MethodDecl* m1279 = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp1280;
    panda$core$Object* $tmp1281;
    panda$core$String* $tmp1291;
    panda$core$String* $tmp1292;
    panda$core$String* $tmp1293;
    panda$core$String* $tmp1294;
    panda$core$String* $tmp1295;
    panda$core$Object* $tmp1296;
    int $tmp1119;
    {
        panda$collections$Array* $tmp1123 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp1123);
        $tmp1122 = $tmp1123;
        $tmp1121 = $tmp1122;
        methods1120 = $tmp1121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1121));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1122));
        panda$collections$HashSet* $tmp1127 = (panda$collections$HashSet*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashSet$class);
        panda$collections$HashSet$init($tmp1127);
        $tmp1126 = $tmp1127;
        $tmp1125 = $tmp1126;
        overridden1124 = $tmp1125;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1125));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1126));
        {
            int $tmp1130;
            {
                ITable* $tmp1134 = ((panda$collections$Iterable*) p_cl->methods)->$class->itable;
                while ($tmp1134->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1134 = $tmp1134->next;
                }
                $fn1136 $tmp1135 = $tmp1134->methods[0];
                panda$collections$Iterator* $tmp1137 = $tmp1135(((panda$collections$Iterable*) p_cl->methods));
                $tmp1133 = $tmp1137;
                $tmp1132 = $tmp1133;
                Iter$419$91131 = $tmp1132;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1132));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1133));
                $l1138:;
                ITable* $tmp1141 = Iter$419$91131->$class->itable;
                while ($tmp1141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1141 = $tmp1141->next;
                }
                $fn1143 $tmp1142 = $tmp1141->methods[0];
                panda$core$Bit $tmp1144 = $tmp1142(Iter$419$91131);
                panda$core$Bit $tmp1145 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1144);
                bool $tmp1140 = $tmp1145.value;
                if (!$tmp1140) goto $l1139;
                {
                    int $tmp1148;
                    {
                        ITable* $tmp1152 = Iter$419$91131->$class->itable;
                        while ($tmp1152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1152 = $tmp1152->next;
                        }
                        $fn1154 $tmp1153 = $tmp1152->methods[1];
                        panda$core$Object* $tmp1155 = $tmp1153(Iter$419$91131);
                        $tmp1151 = $tmp1155;
                        $tmp1150 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1151);
                        m1149 = $tmp1150;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1150));
                        panda$core$Panda$unref$panda$core$Object($tmp1151);
                        panda$core$Object* $tmp1160 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                        $tmp1159 = $tmp1160;
                        org$pandalanguage$pandac$MethodDecl* $tmp1161 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1159), m1149);
                        $tmp1158 = $tmp1161;
                        $tmp1157 = $tmp1158;
                        o1156 = $tmp1157;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1157));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1158));
                        panda$core$Panda$unref$panda$core$Object($tmp1159);
                        if (((panda$core$Bit) { o1156 != NULL }).value) {
                        {
                            panda$core$String* $tmp1163 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(o1156);
                            $tmp1162 = $tmp1163;
                            panda$collections$HashSet$add$panda$collections$HashSet$T(overridden1124, ((panda$collections$Key*) $tmp1162));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1162));
                        }
                        }
                    }
                    $tmp1148 = -1;
                    goto $l1146;
                    $l1146:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) o1156));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1149));
                    m1149 = NULL;
                    o1156 = NULL;
                    switch ($tmp1148) {
                        case -1: goto $l1164;
                    }
                    $l1164:;
                }
                goto $l1138;
                $l1139:;
            }
            $tmp1130 = -1;
            goto $l1128;
            $l1128:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$419$91131));
            Iter$419$91131 = NULL;
            switch ($tmp1130) {
                case -1: goto $l1165;
            }
            $l1165:;
        }
        $tmp1167 = p_cl->rawSuper;
        ancestor1166 = $tmp1167;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1167));
        $l1168:;
        bool $tmp1170 = ((panda$core$Bit) { ancestor1166 != NULL }).value;
        if (!$tmp1170) goto $l1169;
        {
            int $tmp1173;
            {
                panda$core$Object* $tmp1178 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                $tmp1177 = $tmp1178;
                org$pandalanguage$pandac$ClassDecl* $tmp1179 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1177), ancestor1166);
                $tmp1176 = $tmp1179;
                $tmp1175 = $tmp1176;
                ancestorClass1174 = $tmp1175;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1175));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1176));
                panda$core$Panda$unref$panda$core$Object($tmp1177);
                if (((panda$core$Bit) { ancestorClass1174 == NULL }).value) {
                {
                    $tmp1173 = 0;
                    goto $l1171;
                    $l1180:;
                    $tmp1119 = 0;
                    goto $l1117;
                    $l1181:;
                    return;
                }
                }
                {
                    int $tmp1184;
                    {
                        ITable* $tmp1188 = ((panda$collections$Iterable*) ancestorClass1174->methods)->$class->itable;
                        while ($tmp1188->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1188 = $tmp1188->next;
                        }
                        $fn1190 $tmp1189 = $tmp1188->methods[0];
                        panda$collections$Iterator* $tmp1191 = $tmp1189(((panda$collections$Iterable*) ancestorClass1174->methods));
                        $tmp1187 = $tmp1191;
                        $tmp1186 = $tmp1187;
                        Iter$431$131185 = $tmp1186;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1186));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1187));
                        $l1192:;
                        ITable* $tmp1195 = Iter$431$131185->$class->itable;
                        while ($tmp1195->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1195 = $tmp1195->next;
                        }
                        $fn1197 $tmp1196 = $tmp1195->methods[0];
                        panda$core$Bit $tmp1198 = $tmp1196(Iter$431$131185);
                        panda$core$Bit $tmp1199 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1198);
                        bool $tmp1194 = $tmp1199.value;
                        if (!$tmp1194) goto $l1193;
                        {
                            int $tmp1202;
                            {
                                ITable* $tmp1206 = Iter$431$131185->$class->itable;
                                while ($tmp1206->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1206 = $tmp1206->next;
                                }
                                $fn1208 $tmp1207 = $tmp1206->methods[1];
                                panda$core$Object* $tmp1209 = $tmp1207(Iter$431$131185);
                                $tmp1205 = $tmp1209;
                                $tmp1204 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1205);
                                m1203 = $tmp1204;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1204));
                                panda$core$Panda$unref$panda$core$Object($tmp1205);
                                panda$core$Int64$init$builtin_int64(&$tmp1212, 2);
                                panda$core$Bit $tmp1213 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(m1203->methodKind.$rawValue, $tmp1212);
                                bool $tmp1211 = $tmp1213.value;
                                if (!$tmp1211) goto $l1214;
                                panda$core$Bit $tmp1216 = (($fn1215) self->$class->vtable[15])(self, m1203);
                                $tmp1211 = $tmp1216.value;
                                $l1214:;
                                panda$core$Bit $tmp1217 = { $tmp1211 };
                                bool $tmp1210 = $tmp1217.value;
                                if (!$tmp1210) goto $l1218;
                                panda$core$String* $tmp1220 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(m1203);
                                $tmp1219 = $tmp1220;
                                panda$core$Bit $tmp1221 = panda$collections$HashSet$contains$panda$collections$HashSet$T$R$panda$core$Bit(overridden1124, ((panda$collections$Key*) $tmp1219));
                                panda$core$Bit $tmp1222 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1221);
                                $tmp1210 = $tmp1222.value;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1219));
                                $l1218:;
                                panda$core$Bit $tmp1223 = { $tmp1210 };
                                if ($tmp1223.value) {
                                {
                                    int $tmp1226;
                                    {
                                        panda$core$Object* $tmp1228 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                        $tmp1227 = $tmp1228;
                                        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(((org$pandalanguage$pandac$Compiler*) $tmp1227), m1203);
                                        panda$core$Panda$unref$panda$core$Object($tmp1227);
                                        panda$collections$Array$add$panda$collections$Array$T(methods1120, ((panda$core$Object*) m1203));
                                        panda$core$Object* $tmp1233 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                        $tmp1232 = $tmp1233;
                                        org$pandalanguage$pandac$MethodDecl* $tmp1234 = org$pandalanguage$pandac$Compiler$getOverriddenMethod$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$MethodDecl$Q(((org$pandalanguage$pandac$Compiler*) $tmp1232), m1203);
                                        $tmp1231 = $tmp1234;
                                        $tmp1230 = $tmp1231;
                                        o1229 = $tmp1230;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1230));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1231));
                                        panda$core$Panda$unref$panda$core$Object($tmp1232);
                                        if (((panda$core$Bit) { o1229 != NULL }).value) {
                                        {
                                            panda$core$String* $tmp1236 = org$pandalanguage$pandac$MethodDecl$signature$R$panda$core$String(o1229);
                                            $tmp1235 = $tmp1236;
                                            panda$collections$HashSet$add$panda$collections$HashSet$T(overridden1124, ((panda$collections$Key*) $tmp1235));
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1235));
                                        }
                                        }
                                    }
                                    $tmp1226 = -1;
                                    goto $l1224;
                                    $l1224:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) o1229));
                                    o1229 = NULL;
                                    switch ($tmp1226) {
                                        case -1: goto $l1237;
                                    }
                                    $l1237:;
                                }
                                }
                            }
                            $tmp1202 = -1;
                            goto $l1200;
                            $l1200:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1203));
                            m1203 = NULL;
                            switch ($tmp1202) {
                                case -1: goto $l1238;
                            }
                            $l1238:;
                        }
                        goto $l1192;
                        $l1193:;
                    }
                    $tmp1184 = -1;
                    goto $l1182;
                    $l1182:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$431$131185));
                    Iter$431$131185 = NULL;
                    switch ($tmp1184) {
                        case -1: goto $l1239;
                    }
                    $l1239:;
                }
                {
                    $tmp1240 = ancestor1166;
                    $tmp1241 = ancestorClass1174->rawSuper;
                    ancestor1166 = $tmp1241;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1241));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1240));
                }
            }
            $tmp1173 = -1;
            goto $l1171;
            $l1171:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestorClass1174));
            ancestorClass1174 = NULL;
            switch ($tmp1173) {
                case -1: goto $l1242;
                case 0: goto $l1180;
            }
            $l1242:;
        }
        goto $l1168;
        $l1169:;
        panda$core$Bit$init$builtin_bit(&$tmp1244, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1243, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1244);
        panda$core$Int64$init$builtin_int64(&$tmp1247, -1);
        panda$core$Bit$init$builtin_bit(&$tmp1248, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$panda$core$Bit(&$tmp1246, ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1247, $tmp1248);
        ITable* $tmp1249 = ((panda$collections$ListView*) methods1120)->$class->itable;
        while ($tmp1249->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1249 = $tmp1249->next;
        }
        $fn1251 $tmp1250 = $tmp1249->methods[3];
        panda$collections$ListView* $tmp1252 = $tmp1250(((panda$collections$ListView*) methods1120), $tmp1246);
        $tmp1245 = $tmp1252;
        panda$collections$Array$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$Array$T$GT(methods1120, $tmp1243, $tmp1245);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1245));
        panda$core$Int64 $tmp1253 = panda$collections$Array$get_count$R$panda$core$Int64(methods1120);
        panda$core$Int64$init$builtin_int64(&$tmp1254, 0);
        panda$core$Bit $tmp1255 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1253, $tmp1254);
        if ($tmp1255.value) {
        {
            (($fn1257) self->out->$class->vtable[2])(self->out, &$s1256);
            {
                int $tmp1260;
                {
                    ITable* $tmp1264 = ((panda$collections$Iterable*) methods1120)->$class->itable;
                    while ($tmp1264->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1264 = $tmp1264->next;
                    }
                    $fn1266 $tmp1265 = $tmp1264->methods[0];
                    panda$collections$Iterator* $tmp1267 = $tmp1265(((panda$collections$Iterable*) methods1120));
                    $tmp1263 = $tmp1267;
                    $tmp1262 = $tmp1263;
                    Iter$448$131261 = $tmp1262;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1262));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1263));
                    $l1268:;
                    ITable* $tmp1271 = Iter$448$131261->$class->itable;
                    while ($tmp1271->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1271 = $tmp1271->next;
                    }
                    $fn1273 $tmp1272 = $tmp1271->methods[0];
                    panda$core$Bit $tmp1274 = $tmp1272(Iter$448$131261);
                    panda$core$Bit $tmp1275 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1274);
                    bool $tmp1270 = $tmp1275.value;
                    if (!$tmp1270) goto $l1269;
                    {
                        int $tmp1278;
                        {
                            ITable* $tmp1282 = Iter$448$131261->$class->itable;
                            while ($tmp1282->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1282 = $tmp1282->next;
                            }
                            $fn1284 $tmp1283 = $tmp1282->methods[1];
                            panda$core$Object* $tmp1285 = $tmp1283(Iter$448$131261);
                            $tmp1281 = $tmp1285;
                            $tmp1280 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1281);
                            m1279 = $tmp1280;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1280));
                            panda$core$Panda$unref$panda$core$Object($tmp1281);
                            (($fn1287) self->out->$class->vtable[2])(self->out, &$s1286);
                            (($fn1289) self->out->$class->vtable[4])(self->out, &$s1288, ((org$pandalanguage$pandac$Symbol*) m1279)->name);
                            panda$core$Object* $tmp1297 = panda$core$Weak$get$R$panda$core$Weak$T(m1279->owner);
                            $tmp1296 = $tmp1297;
                            panda$core$String* $tmp1299 = (($fn1298) self->$class->vtable[23])(self, ((org$pandalanguage$pandac$ClassDecl*) $tmp1296));
                            $tmp1295 = $tmp1299;
                            panda$core$String* $tmp1300 = panda$core$String$convert$R$panda$core$String($tmp1295);
                            $tmp1294 = $tmp1300;
                            panda$core$String* $tmp1302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1294, &$s1301);
                            $tmp1293 = $tmp1302;
                            panda$core$String* $tmp1303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1293, ((org$pandalanguage$pandac$Symbol*) m1279)->name);
                            $tmp1292 = $tmp1303;
                            panda$core$String* $tmp1305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1292, &$s1304);
                            $tmp1291 = $tmp1305;
                            (($fn1306) self->out->$class->vtable[4])(self->out, &$s1290, $tmp1291);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1291));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1292));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1293));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1294));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1295));
                            panda$core$Panda$unref$panda$core$Object($tmp1296);
                            (($fn1308) self->out->$class->vtable[3])(self->out, &$s1307);
                        }
                        $tmp1278 = -1;
                        goto $l1276;
                        $l1276:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m1279));
                        m1279 = NULL;
                        switch ($tmp1278) {
                            case -1: goto $l1309;
                        }
                        $l1309:;
                    }
                    goto $l1268;
                    $l1269:;
                }
                $tmp1260 = -1;
                goto $l1258;
                $l1258:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$448$131261));
                Iter$448$131261 = NULL;
                switch ($tmp1260) {
                    case -1: goto $l1310;
                }
                $l1310:;
            }
            (($fn1312) self->out->$class->vtable[3])(self->out, &$s1311);
        }
        }
    }
    $tmp1119 = -1;
    goto $l1117;
    $l1117:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) ancestor1166));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) overridden1124));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methods1120));
    methods1120 = NULL;
    overridden1124 = NULL;
    ancestor1166 = NULL;
    switch ($tmp1119) {
        case 0: goto $l1181;
        case -1: goto $l1313;
    }
    $l1313:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDoc$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$ListView* split1317 = NULL;
    panda$collections$ListView* $tmp1318;
    panda$collections$ListView* $tmp1319;
    panda$core$Object* $tmp1322;
    panda$core$Int64 $tmp1323;
    panda$collections$Iterator* Iter$462$131332 = NULL;
    panda$collections$Iterator* $tmp1333;
    panda$collections$Iterator* $tmp1334;
    panda$collections$ListView* $tmp1335;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp1336;
    panda$core$Int64 $tmp1337;
    panda$core$Bit $tmp1338;
    org$pandalanguage$pandac$Pair* tag1358 = NULL;
    org$pandalanguage$pandac$Pair* $tmp1359;
    panda$core$Object* $tmp1360;
    panda$core$String* $match$463_171368 = NULL;
    panda$core$String* $tmp1369;
    panda$core$Object* $tmp1373;
    panda$core$String* $tmp1375;
    panda$core$String* $tmp1376;
    if (((panda$core$Bit) { p_cl->doccomment != NULL }).value) {
    {
        int $tmp1316;
        {
            panda$collections$ListView* $tmp1321 = (($fn1320) self->$class->vtable[9])(self, p_cl->doccomment);
            $tmp1319 = $tmp1321;
            $tmp1318 = $tmp1319;
            split1317 = $tmp1318;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1318));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
            panda$core$Int64$init$builtin_int64(&$tmp1323, 0);
            ITable* $tmp1324 = split1317->$class->itable;
            while ($tmp1324->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1324 = $tmp1324->next;
            }
            $fn1326 $tmp1325 = $tmp1324->methods[0];
            panda$core$Object* $tmp1327 = $tmp1325(split1317, $tmp1323);
            $tmp1322 = $tmp1327;
            (($fn1328) self->$class->vtable[11])(self, ((panda$core$String*) ((org$pandalanguage$pandac$Pair*) $tmp1322)->second));
            panda$core$Panda$unref$panda$core$Object($tmp1322);
            {
                int $tmp1331;
                {
                    panda$core$Int64$init$builtin_int64(&$tmp1337, 1);
                    panda$core$Bit$init$builtin_bit(&$tmp1338, false);
                    panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp1336, ((panda$core$Int64$nullable) { $tmp1337, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp1338);
                    ITable* $tmp1339 = split1317->$class->itable;
                    while ($tmp1339->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp1339 = $tmp1339->next;
                    }
                    $fn1341 $tmp1340 = $tmp1339->methods[2];
                    panda$collections$ListView* $tmp1342 = $tmp1340(split1317, $tmp1336);
                    $tmp1335 = $tmp1342;
                    ITable* $tmp1343 = ((panda$collections$Iterable*) $tmp1335)->$class->itable;
                    while ($tmp1343->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1343 = $tmp1343->next;
                    }
                    $fn1345 $tmp1344 = $tmp1343->methods[0];
                    panda$collections$Iterator* $tmp1346 = $tmp1344(((panda$collections$Iterable*) $tmp1335));
                    $tmp1334 = $tmp1346;
                    $tmp1333 = $tmp1334;
                    Iter$462$131332 = $tmp1333;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1333));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1334));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1335));
                    $l1347:;
                    ITable* $tmp1350 = Iter$462$131332->$class->itable;
                    while ($tmp1350->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1350 = $tmp1350->next;
                    }
                    $fn1352 $tmp1351 = $tmp1350->methods[0];
                    panda$core$Bit $tmp1353 = $tmp1351(Iter$462$131332);
                    panda$core$Bit $tmp1354 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1353);
                    bool $tmp1349 = $tmp1354.value;
                    if (!$tmp1349) goto $l1348;
                    {
                        int $tmp1357;
                        {
                            ITable* $tmp1361 = Iter$462$131332->$class->itable;
                            while ($tmp1361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1361 = $tmp1361->next;
                            }
                            $fn1363 $tmp1362 = $tmp1361->methods[1];
                            panda$core$Object* $tmp1364 = $tmp1362(Iter$462$131332);
                            $tmp1360 = $tmp1364;
                            $tmp1359 = ((org$pandalanguage$pandac$Pair*) $tmp1360);
                            tag1358 = $tmp1359;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1359));
                            panda$core$Panda$unref$panda$core$Object($tmp1360);
                            int $tmp1367;
                            {
                                $tmp1369 = ((panda$core$String*) tag1358->first);
                                $match$463_171368 = $tmp1369;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1369));
                                panda$core$Bit $tmp1371 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$463_171368, &$s1370);
                                if ($tmp1371.value) {
                                {
                                    (($fn1372) self->$class->vtable[12])(self, ((panda$core$String*) tag1358->second));
                                }
                                }
                                else {
                                {
                                    panda$core$Object* $tmp1374 = panda$core$Weak$get$R$panda$core$Weak$T(self->compiler);
                                    $tmp1373 = $tmp1374;
                                    panda$core$String* $tmp1378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1377, ((panda$core$String*) tag1358->first));
                                    $tmp1376 = $tmp1378;
                                    panda$core$String* $tmp1380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1376, &$s1379);
                                    $tmp1375 = $tmp1380;
                                    org$pandalanguage$pandac$Compiler$error$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Compiler*) $tmp1373), p_cl->position, $tmp1375);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1375));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1376));
                                    panda$core$Panda$unref$panda$core$Object($tmp1373);
                                }
                                }
                            }
                            $tmp1367 = -1;
                            goto $l1365;
                            $l1365:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1369));
                            switch ($tmp1367) {
                                case -1: goto $l1381;
                            }
                            $l1381:;
                        }
                        $tmp1357 = -1;
                        goto $l1355;
                        $l1355:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) tag1358));
                        tag1358 = NULL;
                        switch ($tmp1357) {
                            case -1: goto $l1382;
                        }
                        $l1382:;
                    }
                    goto $l1347;
                    $l1348:;
                }
                $tmp1331 = -1;
                goto $l1329;
                $l1329:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$462$131332));
                Iter$462$131332 = NULL;
                switch ($tmp1331) {
                    case -1: goto $l1383;
                }
                $l1383:;
            }
            (($fn1384) self->$class->vtable[13])(self);
        }
        $tmp1316 = -1;
        goto $l1314;
        $l1314:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) split1317));
        split1317 = NULL;
        switch ($tmp1316) {
            case -1: goto $l1385;
        }
        $l1385:;
    }
    }
}
void panda$core$MutableMethod$$shim2$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar1389 = NULL;
    panda$core$MutableMethod* $tmp1390;
    panda$core$Method* $tmp1391;
    panda$core$Object* $tmp1393;
    panda$core$Object* $tmp1394;
    int $tmp1388;
    {
        panda$core$Method* $tmp1392 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1392, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1391 = $tmp1392;
        $tmp1390 = ((panda$core$MutableMethod*) $tmp1391);
        methodVar1389 = $tmp1390;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1390));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1391));
        {
            $tmp1393 = methodVar1389->target;
            $tmp1394 = self->target;
            methodVar1389->target = $tmp1394;
            panda$core$Panda$ref$panda$core$Object($tmp1394);
            panda$core$Panda$unref$panda$core$Object($tmp1393);
        }
        if (methodVar1389->target) {
            (($fn1395) methodVar1389->pointer)(methodVar1389->target, ((org$pandalanguage$pandac$Type*) p_p0));
        } else {
            (($fn1396) methodVar1389->pointer)(((org$pandalanguage$pandac$Type*) p_p0));
        }
    }
    $tmp1388 = -1;
    goto $l1386;
    $l1386:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1389));
    methodVar1389 = NULL;
    switch ($tmp1388) {
        case -1: goto $l1397;
    }
    $l1397:;
}
void panda$core$MutableMethod$$shim3$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar1401 = NULL;
    panda$core$MutableMethod* $tmp1402;
    panda$core$Method* $tmp1403;
    panda$core$Object* $tmp1405;
    panda$core$Object* $tmp1406;
    int $tmp1400;
    {
        panda$core$Method* $tmp1404 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1404, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1403 = $tmp1404;
        $tmp1402 = ((panda$core$MutableMethod*) $tmp1403);
        methodVar1401 = $tmp1402;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1402));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1403));
        {
            $tmp1405 = methodVar1401->target;
            $tmp1406 = self->target;
            methodVar1401->target = $tmp1406;
            panda$core$Panda$ref$panda$core$Object($tmp1406);
            panda$core$Panda$unref$panda$core$Object($tmp1405);
        }
        if (methodVar1401->target) {
            (($fn1407) methodVar1401->pointer)(methodVar1401->target, ((org$pandalanguage$pandac$FieldDecl*) p_p0));
        } else {
            (($fn1408) methodVar1401->pointer)(((org$pandalanguage$pandac$FieldDecl*) p_p0));
        }
    }
    $tmp1400 = -1;
    goto $l1398;
    $l1398:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1401));
    methodVar1401 = NULL;
    switch ($tmp1400) {
        case -1: goto $l1409;
    }
    $l1409:;
}
void panda$core$MutableMethod$$shim4$panda$collections$CollectionView$T(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar1413 = NULL;
    panda$core$MutableMethod* $tmp1414;
    panda$core$Method* $tmp1415;
    panda$core$Object* $tmp1417;
    panda$core$Object* $tmp1418;
    int $tmp1412;
    {
        panda$core$Method* $tmp1416 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp1416, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp1415 = $tmp1416;
        $tmp1414 = ((panda$core$MutableMethod*) $tmp1415);
        methodVar1413 = $tmp1414;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1414));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1415));
        {
            $tmp1417 = methodVar1413->target;
            $tmp1418 = self->target;
            methodVar1413->target = $tmp1418;
            panda$core$Panda$ref$panda$core$Object($tmp1418);
            panda$core$Panda$unref$panda$core$Object($tmp1417);
        }
        if (methodVar1413->target) {
            (($fn1419) methodVar1413->pointer)(methodVar1413->target, ((org$pandalanguage$pandac$MethodDecl*) p_p0));
        } else {
            (($fn1420) methodVar1413->pointer)(((org$pandalanguage$pandac$MethodDecl*) p_p0));
        }
    }
    $tmp1412 = -1;
    goto $l1410;
    $l1410:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) methodVar1413));
    methodVar1413 = NULL;
    switch ($tmp1412) {
        case -1: goto $l1421;
    }
    $l1421:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$ClassDecl* $tmp1425;
    org$pandalanguage$pandac$ClassDecl* $tmp1426;
    panda$core$String* $tmp1427;
    panda$core$String* $tmp1428;
    panda$io$File* dest1431 = NULL;
    panda$io$File* $tmp1432;
    panda$io$File* $tmp1433;
    panda$io$File* $tmp1437;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp1439;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp1440;
    org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp1441;
    panda$io$OutputStream* $tmp1443;
    panda$core$String* simple1449 = NULL;
    panda$core$String* $tmp1450;
    panda$core$String* $tmp1451;
    org$pandalanguage$pandac$Type* $tmp1452;
    panda$core$Int64 $tmp1460;
    panda$core$String* separator1465 = NULL;
    panda$core$String* $tmp1466;
    panda$collections$Iterator* Iter$491$131471 = NULL;
    panda$collections$Iterator* $tmp1472;
    panda$collections$Iterator* $tmp1473;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* p1489 = NULL;
    org$pandalanguage$pandac$ClassDecl$GenericParameter* $tmp1490;
    panda$core$Object* $tmp1491;
    panda$core$String* $tmp1496;
    panda$core$String* $tmp1497;
    panda$core$String* $tmp1498;
    panda$core$String* $tmp1499;
    panda$core$String* $tmp1501;
    panda$core$String* $tmp1502;
    panda$core$String* $tmp1503;
    panda$core$String* $tmp1504;
    panda$core$String* $tmp1506;
    panda$core$String* $tmp1507;
    panda$core$String* $tmp1511;
    panda$core$String* $tmp1512;
    panda$core$String* $tmp1513;
    panda$core$String* $tmp1514;
    panda$core$String* $tmp1521;
    panda$core$String* $tmp1522;
    panda$core$String* $tmp1523;
    panda$core$String* $tmp1524;
    panda$collections$Iterator* $tmp1526;
    panda$core$String* $tmp1536;
    panda$core$Int64 $tmp1547;
    int $tmp1424;
    {
        {
            $tmp1425 = self->currentClass;
            $tmp1426 = p_cl;
            self->currentClass = $tmp1426;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1426));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1425));
        }
        {
            $tmp1427 = self->returns;
            $tmp1428 = NULL;
            self->returns = $tmp1428;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1428));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1427));
        }
        panda$collections$HashMap$clear(self->params);
        panda$core$Bit $tmp1429 = org$pandalanguage$pandac$Annotations$isPrivate$R$panda$core$Bit(p_cl->annotations);
        panda$core$Bit $tmp1430 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1429);
        if ($tmp1430.value) {
        {
            panda$collections$HashSet$add$panda$collections$HashSet$T(self->classList, ((panda$collections$Key*) p_cl->name));
        }
        }
        panda$io$File* $tmp1436 = (($fn1435) self->$class->vtable[4])(self, p_cl, &$s1434);
        $tmp1433 = $tmp1436;
        $tmp1432 = $tmp1433;
        dest1431 = $tmp1432;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1432));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
        panda$io$File* $tmp1438 = panda$io$File$parent$R$panda$io$File$Q(dest1431);
        $tmp1437 = $tmp1438;
        panda$io$File$createDirectories($tmp1437);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1437));
        {
            $tmp1439 = self->out;
            org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter* $tmp1442 = (org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$class);
            panda$io$OutputStream* $tmp1444 = panda$io$File$openOutputStream$R$panda$io$OutputStream(dest1431);
            $tmp1443 = $tmp1444;
            org$pandalanguage$pandac$pandadoc$PandaDoc$XMLWriter$init$panda$io$OutputStream($tmp1442, $tmp1443);
            $tmp1441 = $tmp1442;
            $tmp1440 = $tmp1441;
            self->out = $tmp1440;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1440));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1441));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1443));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1439));
        }
        (($fn1446) self->out->$class->vtable[2])(self->out, &$s1445);
        (($fn1448) self->out->$class->vtable[4])(self->out, &$s1447, p_cl->name);
        org$pandalanguage$pandac$Type* $tmp1453 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        $tmp1452 = $tmp1453;
        panda$core$String* $tmp1455 = (($fn1454) self->$class->vtable[5])(self, $tmp1452);
        $tmp1451 = $tmp1455;
        $tmp1450 = $tmp1451;
        simple1449 = $tmp1450;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1450));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1451));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1452));
        ITable* $tmp1456 = ((panda$collections$CollectionView*) p_cl->parameters)->$class->itable;
        while ($tmp1456->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1456 = $tmp1456->next;
        }
        $fn1458 $tmp1457 = $tmp1456->methods[0];
        panda$core$Int64 $tmp1459 = $tmp1457(((panda$collections$CollectionView*) p_cl->parameters));
        panda$core$Int64$init$builtin_int64(&$tmp1460, 0);
        panda$core$Bit $tmp1461 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1459, $tmp1460);
        if ($tmp1461.value) {
        {
            int $tmp1464;
            {
                $tmp1466 = &$s1467;
                separator1465 = $tmp1466;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1466));
                {
                    int $tmp1470;
                    {
                        ITable* $tmp1474 = ((panda$collections$Iterable*) p_cl->parameters)->$class->itable;
                        while ($tmp1474->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1474 = $tmp1474->next;
                        }
                        $fn1476 $tmp1475 = $tmp1474->methods[0];
                        panda$collections$Iterator* $tmp1477 = $tmp1475(((panda$collections$Iterable*) p_cl->parameters));
                        $tmp1473 = $tmp1477;
                        $tmp1472 = $tmp1473;
                        Iter$491$131471 = $tmp1472;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1472));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1473));
                        $l1478:;
                        ITable* $tmp1481 = Iter$491$131471->$class->itable;
                        while ($tmp1481->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1481 = $tmp1481->next;
                        }
                        $fn1483 $tmp1482 = $tmp1481->methods[0];
                        panda$core$Bit $tmp1484 = $tmp1482(Iter$491$131471);
                        panda$core$Bit $tmp1485 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1484);
                        bool $tmp1480 = $tmp1485.value;
                        if (!$tmp1480) goto $l1479;
                        {
                            int $tmp1488;
                            {
                                ITable* $tmp1492 = Iter$491$131471->$class->itable;
                                while ($tmp1492->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1492 = $tmp1492->next;
                                }
                                $fn1494 $tmp1493 = $tmp1492->methods[1];
                                panda$core$Object* $tmp1495 = $tmp1493(Iter$491$131471);
                                $tmp1491 = $tmp1495;
                                $tmp1490 = ((org$pandalanguage$pandac$ClassDecl$GenericParameter*) $tmp1491);
                                p1489 = $tmp1490;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1490));
                                panda$core$Panda$unref$panda$core$Object($tmp1491);
                                {
                                    $tmp1497 = simple1449;
                                    $tmp1496 = $tmp1497;
                                    panda$core$String* $tmp1500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(simple1449, separator1465);
                                    $tmp1499 = $tmp1500;
                                    $tmp1498 = $tmp1499;
                                    simple1449 = $tmp1498;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1498));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1499));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1496));
                                }
                                {
                                    $tmp1502 = simple1449;
                                    $tmp1501 = $tmp1502;
                                    panda$core$String* $tmp1505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(simple1449, ((org$pandalanguage$pandac$Symbol*) p1489)->name);
                                    $tmp1504 = $tmp1505;
                                    $tmp1503 = $tmp1504;
                                    simple1449 = $tmp1503;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1503));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1504));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1501));
                                }
                                {
                                    $tmp1506 = separator1465;
                                    $tmp1507 = &$s1508;
                                    separator1465 = $tmp1507;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1507));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1506));
                                }
                            }
                            $tmp1488 = -1;
                            goto $l1486;
                            $l1486:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p1489));
                            p1489 = NULL;
                            switch ($tmp1488) {
                                case -1: goto $l1509;
                            }
                            $l1509:;
                        }
                        goto $l1478;
                        $l1479:;
                    }
                    $tmp1470 = -1;
                    goto $l1468;
                    $l1468:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$491$131471));
                    Iter$491$131471 = NULL;
                    switch ($tmp1470) {
                        case -1: goto $l1510;
                    }
                    $l1510:;
                }
                {
                    $tmp1512 = simple1449;
                    $tmp1511 = $tmp1512;
                    panda$core$String* $tmp1516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(simple1449, &$s1515);
                    $tmp1514 = $tmp1516;
                    $tmp1513 = $tmp1514;
                    simple1449 = $tmp1513;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1513));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1514));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1511));
                }
            }
            $tmp1464 = -1;
            goto $l1462;
            $l1462:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1465));
            separator1465 = NULL;
            switch ($tmp1464) {
                case -1: goto $l1517;
            }
            $l1517:;
        }
        }
        (($fn1519) self->out->$class->vtable[4])(self->out, &$s1518, simple1449);
        panda$collections$Iterator* $tmp1528 = panda$core$String$find$panda$core$String$R$panda$collections$Iterator$LTpanda$core$String$Index$GT(p_cl->name, &$s1527);
        $tmp1526 = $tmp1528;
        ITable* $tmp1529 = $tmp1526->$class->itable;
        while ($tmp1529->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1529 = $tmp1529->next;
        }
        $fn1531 $tmp1530 = $tmp1529->methods[2];
        panda$core$Int64 $tmp1532 = $tmp1530($tmp1526);
        panda$core$String* $tmp1533 = panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(&$s1525, $tmp1532);
        $tmp1524 = $tmp1533;
        panda$core$String* $tmp1535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1524, &$s1534);
        $tmp1523 = $tmp1535;
        panda$core$String* $tmp1539 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_cl->name, &$s1537, &$s1538);
        $tmp1536 = $tmp1539;
        panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1523, $tmp1536);
        $tmp1522 = $tmp1540;
        panda$core$String* $tmp1542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1522, &$s1541);
        $tmp1521 = $tmp1542;
        (($fn1543) self->out->$class->vtable[4])(self->out, &$s1520, $tmp1521);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1521));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1522));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1536));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1523));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1524));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1526));
        (($fn1544) self->$class->vtable[26])(self, p_cl);
        (($fn1545) self->$class->vtable[22])(self, p_cl);
        panda$core$Int64 $tmp1546 = panda$collections$Array$get_count$R$panda$core$Int64(p_cl->rawInterfaces);
        panda$core$Int64$init$builtin_int64(&$tmp1547, 0);
        panda$core$Bit $tmp1548 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1546, $tmp1547);
        if ($tmp1548.value) {
        {
            (($fn1550) self->out->$class->vtable[2])(self->out, &$s1549);
            panda$core$MutableMethod* $tmp1551 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod* $tmp1552 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1552, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$Type, ((panda$core$Object*) self));
            panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1551, (panda$core$Int8*) &panda$core$MutableMethod$$shim2$panda$collections$CollectionView$T, ((panda$core$Object*) ((panda$core$Object*) $tmp1552)));
            ITable* $tmp1553 = ((panda$collections$CollectionView*) p_cl->rawInterfaces)->$class->itable;
            while ($tmp1553->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1553 = $tmp1553->next;
            }
            $fn1555 $tmp1554 = $tmp1553->methods[5];
            $tmp1554(((panda$collections$CollectionView*) p_cl->rawInterfaces), ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1551)));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1552));
            (($fn1557) self->out->$class->vtable[3])(self->out, &$s1556);
        }
        }
        (($fn1558) self->$class->vtable[24])(self, p_cl);
        (($fn1559) self->$class->vtable[25])(self, p_cl);
        panda$core$MutableMethod* $tmp1560 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1561 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1561, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$FieldDecl, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1560, (panda$core$Int8*) &panda$core$MutableMethod$$shim3$panda$collections$CollectionView$T, ((panda$core$Object*) ((panda$core$Object*) $tmp1561)));
        ITable* $tmp1562 = ((panda$collections$CollectionView*) p_cl->fields)->$class->itable;
        while ($tmp1562->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1562 = $tmp1562->next;
        }
        $fn1564 $tmp1563 = $tmp1562->methods[5];
        $tmp1563(((panda$collections$CollectionView*) p_cl->fields), ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1560)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1560));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1561));
        panda$core$MutableMethod* $tmp1565 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod* $tmp1566 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1566, (panda$core$Int8*) &org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl, ((panda$core$Object*) self));
        panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp1565, (panda$core$Int8*) &panda$core$MutableMethod$$shim4$panda$collections$CollectionView$T, ((panda$core$Object*) ((panda$core$Object*) $tmp1566)));
        ITable* $tmp1567 = ((panda$collections$CollectionView*) p_cl->methods)->$class->itable;
        while ($tmp1567->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1567 = $tmp1567->next;
        }
        $fn1569 $tmp1568 = $tmp1567->methods[5];
        $tmp1568(((panda$collections$CollectionView*) p_cl->methods), ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp1565)));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1565));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1566));
        (($fn1571) self->out->$class->vtable[3])(self->out, &$s1570);
    }
    $tmp1424 = -1;
    goto $l1422;
    $l1422:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) simple1449));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest1431));
    dest1431 = NULL;
    simple1449 = NULL;
    switch ($tmp1424) {
        case -1: goto $l1572;
    }
    $l1572:;
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m) {
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$write$org$pandalanguage$pandac$MethodDecl$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$collections$ImmutableArray* p_body) {
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$pandadoc$PandaDoc* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$finish(org$pandalanguage$pandac$pandadoc$PandaDoc* self) {
    panda$core$String* $tmp1573;
    if (((panda$core$Bit) { self->classListPath != NULL }).value) {
    {
        ITable* $tmp1575 = ((panda$collections$CollectionView*) self->classList)->$class->itable;
        while ($tmp1575->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1575 = $tmp1575->next;
        }
        $fn1577 $tmp1576 = $tmp1575->methods[2];
        panda$core$String* $tmp1578 = $tmp1576(((panda$collections$CollectionView*) self->classList), &$s1574);
        $tmp1573 = $tmp1578;
        panda$io$File$write$panda$core$String(self->classListPath, $tmp1573);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1573));
    }
    }
}
void org$pandalanguage$pandac$pandadoc$PandaDoc$cleanup(org$pandalanguage$pandac$pandadoc$PandaDoc* self) {
    int $tmp1581;
    {
    }
    $tmp1581 = -1;
    goto $l1579;
    $l1579:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1581) {
        case -1: goto $l1582;
    }
    $l1582:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->outDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->out));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->classListPath));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->classList));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->returns));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->params));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->currentClass));
}

