#include "org/frostlang/frostc/StubCodeGenerator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "frost/io/OutputStream.h"
#include "frost/core/Weak.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "org/frostlang/frostc/StubCodeGenerator/_Closure2.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Array.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/StubCodeGenerator/_Closure4.h"
#include "org/frostlang/frostc/StubCodeGenerator/_Closure6.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "frost/core/Error.h"
#include "org/frostlang/frostc/StubCodeGenerator/_Closure8.h"
#include "frost/io/Console.h"
#include "frost/core/System.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/StubCodeGenerator/_Closure10.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Matcher.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/collections/List.h"
#include "org/frostlang/frostc/StubCodeGenerator/_Closure12.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "org/frostlang/frostc/IR.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } org$frostlang$frostc$StubCodeGenerator$_org$frostlang$frostc$CodeGenerator = { (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class, NULL, { org$frostlang$frostc$StubCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$StubCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$StubCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$StubCodeGenerator$finish} };

static frost$core$String $s1;
org$frostlang$frostc$StubCodeGenerator$class_type org$frostlang$frostc$StubCodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$StubCodeGenerator$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$StubCodeGenerator$cleanup, org$frostlang$frostc$StubCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String, org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$StubCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$StubCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$StubCodeGenerator$finish} };

typedef frost$core$Int (*$fn15)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn26)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$Q$GT);
typedef frost$core$String* (*$fn29)(org$frostlang$frostc$StubCodeGenerator$_Closure2*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn37)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn41)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Int (*$fn54)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn63)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn85)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$ListView* (*$fn163)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$Q$GT);
typedef frost$core$String* (*$fn166)(org$frostlang$frostc$StubCodeGenerator$_Closure4*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn174)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn178)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn198)(org$frostlang$frostc$StubCodeGenerator$_Closure6*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn206)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn210)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn302)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn313)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn326)(org$frostlang$frostc$StubCodeGenerator$_Closure8*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn334)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn338)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn346)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn356)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn366)(frost$core$Object*);
typedef frost$core$Error* (*$fn418)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn435)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn452)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn469)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn482)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn492)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn506)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn523)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn529)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn547)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn557)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn567)(frost$core$Object*);
typedef frost$core$Error* (*$fn612)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn631)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn648)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn669)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn690)(org$frostlang$frostc$StubCodeGenerator$_Closure10*, org$frostlang$frostc$MethodDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn698)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn702)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn710)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn720)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn735)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn739)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn744)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn766)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn782)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn801)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn825)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn854)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn867)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn893)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn911)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn915)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn920)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn927)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn940)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn967)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn980)(frost$core$Object*);
typedef frost$core$Object* (*$fn1094)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Error* (*$fn1106)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Object* (*$fn1125)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Error* (*$fn1136)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1152)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1174)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1194)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1214)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1229)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn1243)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1256)(org$frostlang$frostc$StubCodeGenerator$_Closure12*, org$frostlang$frostc$ClassDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn1264)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn1268)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn1276)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1299)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1316)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1336)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1354)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1358)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1363)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1377)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1396)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1412)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1416)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1421)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1430)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1434)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1439)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1448)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1452)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1457)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1466)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1470)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1475)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1483)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1502)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 38, 5549150769695652918, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s212 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s214 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e", 3, 7580368616763478972, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 8523082171760740322, NULL };
static frost$core$String $s276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e", 2, 578299168842724610, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 7588087188392006392, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 4850958444317981178, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x66\x20", 4, -6503404126614323964, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, -1568754217983211905, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 8604313941350852984, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s499 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 6240486548179417074, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s545 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 84, 3244136566661285666, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s617 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, -7952910774154584656, NULL };
static frost$core$String $s637 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 7226600790104464427, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s663 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s688 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 144, 779680818202923559, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s708 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s716 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s727 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s728 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s730 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s751 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s757 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s764 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s771 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s772 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s775 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s777 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s784 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s788 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s789 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s827 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b\x7d", 2, 645223143103797797, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s842 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s849 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s872 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s899 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s900 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s908 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e", 156, 1977603186615208662, NULL };
static frost$core$String $s932 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s933 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s942 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s947 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s969 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b\x7d", 2, 645223143103797797, NULL };
static frost$core$String $s973 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s974 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s984 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s985 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s992 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s998 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s999 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72", 97, 2372068314099982829, NULL };
static frost$core$String $s1012 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x3f\x3a\x5c\x77\x7c\x5c\x2e\x29\x2b\x29\x5c\x2e\x28\x5c\x77\x2b\x29", 19, 8050544140155638463, NULL };
static frost$core$String $s1078 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1089 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1090 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x3e", 131, -5758671458487631293, NULL };
static frost$core$String $s1099 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s1102 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x61\x63\x6b\x61\x67\x65\x20", 8, 4078896108040932673, NULL };
static frost$core$String $s1104 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x3e", 131, -5758671458487631293, NULL };
static frost$core$String $s1130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s1138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, -3042048522538760153, NULL };
static frost$core$String $s1142 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1157 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1158 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1176 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 1485954231735473549, NULL };
static frost$core$String $s1180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1181 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, -8457991779168398576, NULL };
static frost$core$String $s1200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 8239240588283385762, NULL };
static frost$core$String $s1220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1234 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1270 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1274 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1286 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1288 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65", 89, 6559565496330182789, NULL };
static frost$core$String $s1334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1347 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1375 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1382 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1389 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s1402 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1403 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s1489 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1490 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s1514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };

void org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream(org$frostlang$frostc$StubCodeGenerator* param0, frost$io$OutputStream* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:6
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp2 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp2, ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$Weak** $tmp3 = &param0->compiler;
frost$core$Weak* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$core$Weak** $tmp5 = &param0->compiler;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$OutputStream** $tmp6 = &param0->out;
frost$io$OutputStream* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$io$OutputStream** $tmp8 = &param0->out;
*$tmp8 = param1;
return;

}
void org$frostlang$frostc$StubCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:16
FROST_ASSERT(32 == sizeof(frost$core$Weak));
frost$core$Weak* $tmp9 = (frost$core$Weak*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T$Q($tmp9, ((frost$core$Object*) param1));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Weak** $tmp10 = &param0->compiler;
frost$core$Weak* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$core$Weak** $tmp12 = &param0->compiler;
*$tmp12 = $tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
return;

}
frost$core$String* org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(org$frostlang$frostc$StubCodeGenerator* param0, frost$collections$ListView* param1, frost$core$String* param2) {

frost$core$String* local0 = NULL;
org$frostlang$frostc$Type* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:20
ITable* $tmp13 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
frost$core$Int $tmp16 = $tmp14(((frost$collections$CollectionView*) param1));
frost$core$Int $tmp17 = (frost$core$Int) {1u};
int64_t $tmp18 = $tmp16.value;
int64_t $tmp19 = $tmp17.value;
int64_t $tmp20 = $tmp18 - $tmp19;
frost$core$Int $tmp21 = (frost$core$Int) {$tmp20};
frost$core$Bit $tmp22 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp23 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { .nonnull = false }), ((frost$core$Int$nullable) { $tmp21, true }), $tmp22);
ITable* $tmp24 = param1->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp24 = $tmp24->next;
}
$fn26 $tmp25 = $tmp24->methods[2];
frost$collections$ListView* $tmp27 = $tmp25(param1, $tmp23);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure2));
org$frostlang$frostc$StubCodeGenerator$_Closure2* $tmp28 = (org$frostlang$frostc$StubCodeGenerator$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure2$class);
org$frostlang$frostc$StubCodeGenerator$_Closure2$init$org$frostlang$frostc$StubCodeGenerator($tmp28, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp30 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:20:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp31 = &$tmp30->pointer;
*$tmp31 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure2$$anonymous1$org$frostlang$frostc$Type$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Object** $tmp32 = &$tmp30->target;
frost$core$Object* $tmp33 = *$tmp32;
frost$core$Frost$unref$frost$core$Object$Q($tmp33);
frost$core$Object** $tmp34 = &$tmp30->target;
*$tmp34 = ((frost$core$Object*) $tmp28);
ITable* $tmp35 = ((frost$collections$CollectionView*) $tmp27)->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[9];
frost$collections$Array* $tmp38 = $tmp36(((frost$collections$CollectionView*) $tmp27), $tmp30);
ITable* $tmp39 = ((frost$collections$CollectionView*) $tmp38)->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[3];
frost$core$String* $tmp42 = $tmp40(((frost$collections$CollectionView*) $tmp38), &$s43);
frost$core$String* $tmp44 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s45, $tmp42);
frost$core$String* $tmp46 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s47, param2);
frost$core$String* $tmp48 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp46, &$s49);
frost$core$String* $tmp50 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp44, $tmp48);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$String* $tmp51 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local0) = $tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:22
ITable* $tmp52 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp52->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[0];
frost$core$Int $tmp55 = $tmp53(((frost$collections$CollectionView*) param1));
frost$core$Int $tmp56 = (frost$core$Int) {1u};
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57 - $tmp58;
frost$core$Int $tmp60 = (frost$core$Int) {$tmp59};
ITable* $tmp61 = param1->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[0];
frost$core$Object* $tmp64 = $tmp62(param1, $tmp60);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp64)));
org$frostlang$frostc$Type* $tmp65 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp64);
frost$core$Frost$unref$frost$core$Object$Q($tmp64);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:23
org$frostlang$frostc$Type* $tmp66 = *(&local1);
frost$core$Weak** $tmp67 = &param0->compiler;
frost$core$Weak* $tmp68 = *$tmp67;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:23:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp69 = &$tmp68->_valid;
frost$core$Bit $tmp70 = *$tmp69;
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block6; else goto block7;
block7:;
frost$core$Int $tmp72 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s73, $tmp72);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp74 = &$tmp68->value;
frost$core$Object* $tmp75 = *$tmp74;
frost$core$Frost$ref$frost$core$Object$Q($tmp75);
frost$core$Bit $tmp76 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp75) != NULL};
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block8; else goto block9;
block9:;
frost$core$Int $tmp78 = (frost$core$Int) {23u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s79, $tmp78, &$s80);
abort(); // unreachable
block8:;
org$frostlang$frostc$Type** $tmp81 = &((org$frostlang$frostc$Compiler*) $tmp75)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp82 = *$tmp81;
ITable* $tmp83 = ((frost$core$Equatable*) $tmp66)->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[1];
frost$core$Bit $tmp86 = $tmp84(((frost$core$Equatable*) $tmp66), ((frost$core$Equatable*) $tmp82));
bool $tmp87 = $tmp86.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp75);
if ($tmp87) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:24
frost$core$String* $tmp88 = *(&local0);
org$frostlang$frostc$Type* $tmp89 = *(&local1);
frost$core$String* $tmp90 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp89);
frost$core$String* $tmp91 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp88, $tmp90);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$String* $tmp92 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local0) = $tmp91;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:26
frost$core$String* $tmp93 = *(&local0);
frost$core$String* $tmp94 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp93, &$s95);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
org$frostlang$frostc$Type* $tmp96 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp97 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
*(&local0) = ((frost$core$String*) NULL);
return $tmp94;

}
frost$core$String* org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:30
org$frostlang$frostc$Type$Kind* $tmp98 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp99 = *$tmp98;
frost$core$Int $tmp100 = $tmp99.$rawValue;
frost$core$Int $tmp101 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:31:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp102 = $tmp100.value;
int64_t $tmp103 = $tmp101.value;
bool $tmp104 = $tmp102 == $tmp103;
frost$core$Bit $tmp105 = (frost$core$Bit) {$tmp104};
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block2; else goto block3;
block3:;
frost$core$Int $tmp107 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:31:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp108 = $tmp100.value;
int64_t $tmp109 = $tmp107.value;
bool $tmp110 = $tmp108 == $tmp109;
frost$core$Bit $tmp111 = (frost$core$Bit) {$tmp110};
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block2; else goto block5;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:32
frost$core$String** $tmp113 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp114 = *$tmp113;
frost$core$String** $tmp115 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp116 = *$tmp115;
frost$core$String** $tmp117 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp118 = *$tmp117;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from StubCodeGenerator.frost:32:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp119 = &$tmp118->_length;
frost$core$Int $tmp120 = *$tmp119;
frost$core$String$Index $tmp121 = frost$core$String$Index$init$frost$core$Int($tmp120);
frost$core$String$Index$nullable $tmp122 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp118, &$s123, $tmp121);
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp122.nonnull};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block9; else goto block10;
block10:;
frost$core$Int $tmp126 = (frost$core$Int) {32u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s127, $tmp126, &$s128);
abort(); // unreachable
block9:;
frost$core$String$Index $tmp129 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp116, ((frost$core$String$Index) $tmp122.value));
frost$core$Bit $tmp130 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp131 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp129, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp130);
frost$core$String* $tmp132 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp114, $tmp131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
return $tmp132;
block5:;
frost$core$Int $tmp133 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:34:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp134 = $tmp100.value;
int64_t $tmp135 = $tmp133.value;
bool $tmp136 = $tmp134 == $tmp135;
frost$core$Bit $tmp137 = (frost$core$Bit) {$tmp136};
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:35
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:35:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp139 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp140 = *$tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140 != NULL};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block15; else goto block16;
block16:;
frost$core$Int $tmp143 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s144, $tmp143, &$s145);
abort(); // unreachable
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$core$Int $tmp146 = (frost$core$Int) {0u};
frost$core$Object* $tmp147 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp140, $tmp146);
frost$core$String* $tmp148 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp147));
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:35:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$String* $tmp149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp148, &$s150);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:35:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp151 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp152 = *$tmp151;
frost$core$Bit $tmp153 = (frost$core$Bit) {$tmp152 != NULL};
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block19; else goto block20;
block20:;
frost$core$Int $tmp155 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s156, $tmp155, &$s157);
abort(); // unreachable
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Int $tmp158 = (frost$core$Int) {1u};
frost$core$Bit $tmp159 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp160 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp158, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp159);
ITable* $tmp161 = ((frost$collections$ListView*) $tmp152)->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[2];
frost$collections$ListView* $tmp164 = $tmp162(((frost$collections$ListView*) $tmp152), $tmp160);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure4));
org$frostlang$frostc$StubCodeGenerator$_Closure4* $tmp165 = (org$frostlang$frostc$StubCodeGenerator$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure4$class);
org$frostlang$frostc$StubCodeGenerator$_Closure4$init$org$frostlang$frostc$StubCodeGenerator($tmp165, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp167 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:35:71
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp168 = &$tmp167->pointer;
*$tmp168 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure4$$anonymous3$org$frostlang$frostc$Type$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$core$Object** $tmp169 = &$tmp167->target;
frost$core$Object* $tmp170 = *$tmp169;
frost$core$Frost$unref$frost$core$Object$Q($tmp170);
frost$core$Object** $tmp171 = &$tmp167->target;
*$tmp171 = ((frost$core$Object*) $tmp165);
ITable* $tmp172 = ((frost$collections$CollectionView*) $tmp164)->$class->itable;
while ($tmp172->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp172 = $tmp172->next;
}
$fn174 $tmp173 = $tmp172->methods[9];
frost$collections$Array* $tmp175 = $tmp173(((frost$collections$CollectionView*) $tmp164), $tmp167);
ITable* $tmp176 = ((frost$collections$CollectionView*) $tmp175)->$class->itable;
while ($tmp176->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp176 = $tmp176->next;
}
$fn178 $tmp177 = $tmp176->methods[3];
frost$core$String* $tmp179 = $tmp177(((frost$collections$CollectionView*) $tmp175), &$s180);
frost$core$String* $tmp181 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp149, $tmp179);
frost$core$String* $tmp182 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp181, &$s183);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q($tmp147);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
return $tmp182;
block12:;
frost$core$Int $tmp184 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:37:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp185 = $tmp100.value;
int64_t $tmp186 = $tmp184.value;
bool $tmp187 = $tmp185 == $tmp186;
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187};
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:38
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:38:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp190 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp191 = *$tmp190;
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191 != NULL};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block26; else goto block27;
block27:;
frost$core$Int $tmp194 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s195, $tmp194, &$s196);
abort(); // unreachable
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure6));
org$frostlang$frostc$StubCodeGenerator$_Closure6* $tmp197 = (org$frostlang$frostc$StubCodeGenerator$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure6$class);
org$frostlang$frostc$StubCodeGenerator$_Closure6$init$org$frostlang$frostc$StubCodeGenerator($tmp197, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp199 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:38:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp200 = &$tmp199->pointer;
*$tmp200 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure6$$anonymous5$org$frostlang$frostc$Type$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$Object** $tmp201 = &$tmp199->target;
frost$core$Object* $tmp202 = *$tmp201;
frost$core$Frost$unref$frost$core$Object$Q($tmp202);
frost$core$Object** $tmp203 = &$tmp199->target;
*$tmp203 = ((frost$core$Object*) $tmp197);
ITable* $tmp204 = ((frost$collections$CollectionView*) $tmp191)->$class->itable;
while ($tmp204->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp204 = $tmp204->next;
}
$fn206 $tmp205 = $tmp204->methods[9];
frost$collections$Array* $tmp207 = $tmp205(((frost$collections$CollectionView*) $tmp191), $tmp199);
ITable* $tmp208 = ((frost$collections$CollectionView*) $tmp207)->$class->itable;
while ($tmp208->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp208 = $tmp208->next;
}
$fn210 $tmp209 = $tmp208->methods[3];
frost$core$String* $tmp211 = $tmp209(((frost$collections$CollectionView*) $tmp207), &$s212);
frost$core$String* $tmp213 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s214, $tmp211);
frost$core$String* $tmp215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp213, &$s216);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
return $tmp215;
block23:;
frost$core$Int $tmp217 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:40:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp218 = $tmp100.value;
int64_t $tmp219 = $tmp217.value;
bool $tmp220 = $tmp218 == $tmp219;
frost$core$Bit $tmp221 = (frost$core$Bit) {$tmp220};
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:41
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:41:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp223 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp224 = *$tmp223;
frost$core$Bit $tmp225 = (frost$core$Bit) {$tmp224 != NULL};
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block33; else goto block34;
block34:;
frost$core$Int $tmp227 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s228, $tmp227, &$s229);
abort(); // unreachable
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Int $tmp230 = (frost$core$Int) {0u};
frost$core$Object* $tmp231 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp224, $tmp230);
frost$core$String* $tmp232 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp231));
frost$core$String* $tmp233 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp232, &$s234);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q($tmp231);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
return $tmp233;
block30:;
frost$core$Int $tmp235 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:43:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp236 = $tmp100.value;
int64_t $tmp237 = $tmp235.value;
bool $tmp238 = $tmp236 == $tmp237;
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:44
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:44:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp241 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp242 = *$tmp241;
frost$core$Bit $tmp243 = (frost$core$Bit) {$tmp242 != NULL};
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block39; else goto block40;
block40:;
frost$core$Int $tmp245 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s246, $tmp245, &$s247);
abort(); // unreachable
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$core$String* $tmp248 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp242), &$s249);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
return $tmp248;
block36:;
frost$core$Int $tmp250 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:46:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp251 = $tmp100.value;
int64_t $tmp252 = $tmp250.value;
bool $tmp253 = $tmp251 == $tmp252;
frost$core$Bit $tmp254 = (frost$core$Bit) {$tmp253};
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:47
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:47:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp256 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp257 = *$tmp256;
frost$core$Bit $tmp258 = (frost$core$Bit) {$tmp257 != NULL};
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block45; else goto block46;
block46:;
frost$core$Int $tmp260 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s261, $tmp260, &$s262);
abort(); // unreachable
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$core$String* $tmp263 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp257), &$s264);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
return $tmp263;
block42:;
frost$core$Int $tmp265 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:49:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp266 = $tmp100.value;
int64_t $tmp267 = $tmp265.value;
bool $tmp268 = $tmp266 == $tmp267;
frost$core$Bit $tmp269 = (frost$core$Bit) {$tmp268};
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:50
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:50:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp271 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp272 = *$tmp271;
frost$core$Bit $tmp273 = (frost$core$Bit) {$tmp272 != NULL};
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block51; else goto block52;
block52:;
frost$core$Int $tmp275 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s276, $tmp275, &$s277);
abort(); // unreachable
block51:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$String* $tmp278 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp272), &$s279);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
return $tmp278;
block48:;
frost$core$Int $tmp280 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:52:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp281 = $tmp100.value;
int64_t $tmp282 = $tmp280.value;
bool $tmp283 = $tmp281 == $tmp282;
frost$core$Bit $tmp284 = (frost$core$Bit) {$tmp283};
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:53
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:53:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp286 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp287 = *$tmp286;
frost$core$Bit $tmp288 = (frost$core$Bit) {$tmp287 != NULL};
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block57; else goto block58;
block58:;
frost$core$Int $tmp290 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s291, $tmp290, &$s292);
abort(); // unreachable
block57:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$core$String* $tmp293 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp287), &$s294);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
return $tmp293;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:56
frost$core$String** $tmp295 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp296 = *$tmp295;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
return $tmp296;
block1:;
goto block59;
block59:;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ChoiceCase* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:62
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:63
frost$io$OutputStream** $tmp297 = &param0->out;
frost$io$OutputStream* $tmp298 = *$tmp297;
frost$core$String** $tmp299 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp300 = *$tmp299;
$fn302 $tmp301 = ($fn302) $tmp298->$class->vtable[17];
frost$core$Error* $tmp303 = $tmp301($tmp298, $tmp300);
if ($tmp303 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Bit $tmp304 = (frost$core$Bit) {$tmp303 != NULL};
bool $tmp305 = $tmp304.value;
if ($tmp305) goto block5; else goto block6;
block6:;
frost$core$Int $tmp306 = (frost$core$Int) {63u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s307, $tmp306, &$s308);
abort(); // unreachable
block5:;
*(&local0) = $tmp303;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:64
frost$collections$Array** $tmp309 = &param1->fields;
frost$collections$Array* $tmp310 = *$tmp309;
ITable* $tmp311 = ((frost$collections$CollectionView*) $tmp310)->$class->itable;
while ($tmp311->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp311 = $tmp311->next;
}
$fn313 $tmp312 = $tmp311->methods[0];
frost$core$Int $tmp314 = $tmp312(((frost$collections$CollectionView*) $tmp310));
frost$core$Int $tmp315 = (frost$core$Int) {0u};
int64_t $tmp316 = $tmp314.value;
int64_t $tmp317 = $tmp315.value;
bool $tmp318 = $tmp316 > $tmp317;
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318};
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:65
frost$io$OutputStream** $tmp321 = &param0->out;
frost$io$OutputStream* $tmp322 = *$tmp321;
frost$collections$Array** $tmp323 = &param1->fields;
frost$collections$Array* $tmp324 = *$tmp323;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure8));
org$frostlang$frostc$StubCodeGenerator$_Closure8* $tmp325 = (org$frostlang$frostc$StubCodeGenerator$_Closure8*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure8$class);
org$frostlang$frostc$StubCodeGenerator$_Closure8$init$org$frostlang$frostc$StubCodeGenerator($tmp325, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp327 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:65:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp328 = &$tmp327->pointer;
*$tmp328 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure8$$anonymous7$org$frostlang$frostc$Type$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$core$Object** $tmp329 = &$tmp327->target;
frost$core$Object* $tmp330 = *$tmp329;
frost$core$Frost$unref$frost$core$Object$Q($tmp330);
frost$core$Object** $tmp331 = &$tmp327->target;
*$tmp331 = ((frost$core$Object*) $tmp325);
ITable* $tmp332 = ((frost$collections$CollectionView*) $tmp324)->$class->itable;
while ($tmp332->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp332 = $tmp332->next;
}
$fn334 $tmp333 = $tmp332->methods[9];
frost$collections$Array* $tmp335 = $tmp333(((frost$collections$CollectionView*) $tmp324), $tmp327);
ITable* $tmp336 = ((frost$collections$CollectionView*) $tmp335)->$class->itable;
while ($tmp336->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp336 = $tmp336->next;
}
$fn338 $tmp337 = $tmp336->methods[3];
frost$core$String* $tmp339 = $tmp337(((frost$collections$CollectionView*) $tmp335), &$s340);
frost$core$String* $tmp341 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s342, $tmp339);
frost$core$String* $tmp343 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp341, &$s344);
$fn346 $tmp345 = ($fn346) $tmp322->$class->vtable[17];
frost$core$Error* $tmp347 = $tmp345($tmp322, $tmp343);
if ($tmp347 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Bit $tmp348 = (frost$core$Bit) {$tmp347 != NULL};
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block13; else goto block14;
block14:;
frost$core$Int $tmp350 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s351, $tmp350, &$s352);
abort(); // unreachable
block13:;
*(&local0) = $tmp347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:68
frost$io$OutputStream** $tmp353 = &param0->out;
frost$io$OutputStream* $tmp354 = *$tmp353;
$fn356 $tmp355 = ($fn356) $tmp354->$class->vtable[21];
frost$core$Error* $tmp357 = $tmp355($tmp354);
if ($tmp357 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357 != NULL};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block17; else goto block18;
block18:;
frost$core$Int $tmp360 = (frost$core$Int) {68u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s361, $tmp360, &$s362);
abort(); // unreachable
block17:;
*(&local0) = $tmp357;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
goto block8;
block8:;
frost$core$Error* $tmp363 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:72
frost$core$Error* $tmp364 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:72:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn366 $tmp365 = ($fn366) ((frost$core$Object*) $tmp364)->$class->vtable[0];
frost$core$String* $tmp367 = $tmp365(((frost$core$Object*) $tmp364));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp367);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:73
frost$core$Int $tmp368 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp368);
frost$core$Int $tmp369 = (frost$core$Int) {73u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s370, $tmp369, &$s371);
abort(); // unreachable

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$FieldDecl* param1) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$FieldDecl$Kind local1;
org$frostlang$frostc$FieldDecl$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:78
org$frostlang$frostc$Annotations** $tmp372 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp373 = *$tmp372;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from StubCodeGenerator.frost:78:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:158
frost$core$Int* $tmp374 = &$tmp373->flags;
frost$core$Int $tmp375 = *$tmp374;
frost$core$Int $tmp376 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp377 = $tmp375.value;
int64_t $tmp378 = $tmp376.value;
int64_t $tmp379 = $tmp377 & $tmp378;
frost$core$Int $tmp380 = (frost$core$Int) {$tmp379};
frost$core$Int $tmp381 = (frost$core$Int) {0u};
int64_t $tmp382 = $tmp380.value;
int64_t $tmp383 = $tmp381.value;
bool $tmp384 = $tmp382 != $tmp383;
frost$core$Bit $tmp385 = (frost$core$Bit) {$tmp384};
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:79
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:81
frost$core$Weak** $tmp387 = &param0->compiler;
frost$core$Weak* $tmp388 = *$tmp387;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:81:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp389 = &$tmp388->_valid;
frost$core$Bit $tmp390 = *$tmp389;
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block9; else goto block10;
block10:;
frost$core$Int $tmp392 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s393, $tmp392);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp394 = &$tmp388->value;
frost$core$Object* $tmp395 = *$tmp394;
frost$core$Frost$ref$frost$core$Object$Q($tmp395);
frost$core$Bit $tmp396 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp395) != NULL};
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block11; else goto block12;
block12:;
frost$core$Int $tmp398 = (frost$core$Int) {81u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s399, $tmp398, &$s400);
abort(); // unreachable
block11:;
frost$core$Bit $tmp401 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp395), param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:81:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp402 = $tmp401.value;
bool $tmp403 = !$tmp402;
frost$core$Bit $tmp404 = (frost$core$Bit) {$tmp403};
bool $tmp405 = $tmp404.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp395);
if ($tmp405) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:82
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:84
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:85
org$frostlang$frostc$FieldDecl$Kind* $tmp406 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp407 = *$tmp406;
frost$core$Int $tmp408 = $tmp407.$rawValue;
frost$core$Int $tmp409 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:86:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp410 = $tmp408.value;
int64_t $tmp411 = $tmp409.value;
bool $tmp412 = $tmp410 == $tmp411;
frost$core$Bit $tmp413 = (frost$core$Bit) {$tmp412};
bool $tmp414 = $tmp413.value;
if ($tmp414) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:86
frost$io$OutputStream** $tmp415 = &param0->out;
frost$io$OutputStream* $tmp416 = *$tmp415;
$fn418 $tmp417 = ($fn418) $tmp416->$class->vtable[17];
frost$core$Error* $tmp419 = $tmp417($tmp416, &$s420);
if ($tmp419 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
frost$core$Bit $tmp421 = (frost$core$Bit) {$tmp419 != NULL};
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block22; else goto block23;
block23:;
frost$core$Int $tmp423 = (frost$core$Int) {86u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s424, $tmp423, &$s425);
abort(); // unreachable
block22:;
*(&local0) = $tmp419;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
goto block14;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
goto block16;
block18:;
frost$core$Int $tmp426 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:87:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp427 = $tmp408.value;
int64_t $tmp428 = $tmp426.value;
bool $tmp429 = $tmp427 == $tmp428;
frost$core$Bit $tmp430 = (frost$core$Bit) {$tmp429};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:87
frost$io$OutputStream** $tmp432 = &param0->out;
frost$io$OutputStream* $tmp433 = *$tmp432;
$fn435 $tmp434 = ($fn435) $tmp433->$class->vtable[17];
frost$core$Error* $tmp436 = $tmp434($tmp433, &$s437);
if ($tmp436 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
frost$core$Bit $tmp438 = (frost$core$Bit) {$tmp436 != NULL};
bool $tmp439 = $tmp438.value;
if ($tmp439) goto block29; else goto block30;
block30:;
frost$core$Int $tmp440 = (frost$core$Int) {87u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s441, $tmp440, &$s442);
abort(); // unreachable
block29:;
*(&local0) = $tmp436;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
goto block14;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
goto block16;
block25:;
frost$core$Int $tmp443 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:88:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp444 = $tmp408.value;
int64_t $tmp445 = $tmp443.value;
bool $tmp446 = $tmp444 == $tmp445;
frost$core$Bit $tmp447 = (frost$core$Bit) {$tmp446};
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:88
frost$io$OutputStream** $tmp449 = &param0->out;
frost$io$OutputStream* $tmp450 = *$tmp449;
$fn452 $tmp451 = ($fn452) $tmp450->$class->vtable[17];
frost$core$Error* $tmp453 = $tmp451($tmp450, &$s454);
if ($tmp453 == NULL) goto block34; else goto block35;
block35:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
frost$core$Bit $tmp455 = (frost$core$Bit) {$tmp453 != NULL};
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block36; else goto block37;
block37:;
frost$core$Int $tmp457 = (frost$core$Int) {88u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s458, $tmp457, &$s459);
abort(); // unreachable
block36:;
*(&local0) = $tmp453;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
goto block14;
block34:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
goto block16;
block32:;
frost$core$Int $tmp460 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:89:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp461 = $tmp408.value;
int64_t $tmp462 = $tmp460.value;
bool $tmp463 = $tmp461 == $tmp462;
frost$core$Bit $tmp464 = (frost$core$Bit) {$tmp463};
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block38; else goto block16;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:89
frost$io$OutputStream** $tmp466 = &param0->out;
frost$io$OutputStream* $tmp467 = *$tmp466;
$fn469 $tmp468 = ($fn469) $tmp467->$class->vtable[17];
frost$core$Error* $tmp470 = $tmp468($tmp467, &$s471);
if ($tmp470 == NULL) goto block40; else goto block41;
block41:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
frost$core$Bit $tmp472 = (frost$core$Bit) {$tmp470 != NULL};
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block42; else goto block43;
block43:;
frost$core$Int $tmp474 = (frost$core$Int) {89u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s475, $tmp474, &$s476);
abort(); // unreachable
block42:;
*(&local0) = $tmp470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
goto block14;
block40:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
goto block16;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:91
frost$io$OutputStream** $tmp477 = &param0->out;
frost$io$OutputStream* $tmp478 = *$tmp477;
frost$core$String** $tmp479 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp480 = *$tmp479;
$fn482 $tmp481 = ($fn482) $tmp478->$class->vtable[17];
frost$core$Error* $tmp483 = $tmp481($tmp478, $tmp480);
if ($tmp483 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
frost$core$Bit $tmp484 = (frost$core$Bit) {$tmp483 != NULL};
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block46; else goto block47;
block47:;
frost$core$Int $tmp486 = (frost$core$Int) {91u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s487, $tmp486, &$s488);
abort(); // unreachable
block46:;
*(&local0) = $tmp483;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
goto block14;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:92
frost$io$OutputStream** $tmp489 = &param0->out;
frost$io$OutputStream* $tmp490 = *$tmp489;
$fn492 $tmp491 = ($fn492) $tmp490->$class->vtable[17];
frost$core$Error* $tmp493 = $tmp491($tmp490, &$s494);
if ($tmp493 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp493 != NULL};
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block50; else goto block51;
block51:;
frost$core$Int $tmp497 = (frost$core$Int) {92u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s498, $tmp497, &$s499);
abort(); // unreachable
block50:;
*(&local0) = $tmp493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
goto block14;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:93
frost$io$OutputStream** $tmp500 = &param0->out;
frost$io$OutputStream* $tmp501 = *$tmp500;
org$frostlang$frostc$Type** $tmp502 = &param1->type;
org$frostlang$frostc$Type* $tmp503 = *$tmp502;
frost$core$String* $tmp504 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp503);
$fn506 $tmp505 = ($fn506) $tmp501->$class->vtable[17];
frost$core$Error* $tmp507 = $tmp505($tmp501, $tmp504);
if ($tmp507 == NULL) goto block52; else goto block53;
block53:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$Bit $tmp508 = (frost$core$Bit) {$tmp507 != NULL};
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block54; else goto block55;
block55:;
frost$core$Int $tmp510 = (frost$core$Int) {93u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s511, $tmp510, &$s512);
abort(); // unreachable
block54:;
*(&local0) = $tmp507;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
goto block14;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:94
org$frostlang$frostc$FieldDecl$Kind* $tmp513 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp514 = *$tmp513;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp515;
$tmp515 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp515->value = $tmp514;
frost$core$Int $tmp516 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from StubCodeGenerator.frost:94:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp517 = &(&local2)->$rawValue;
*$tmp517 = $tmp516;
org$frostlang$frostc$FieldDecl$Kind $tmp518 = *(&local2);
*(&local1) = $tmp518;
org$frostlang$frostc$FieldDecl$Kind $tmp519 = *(&local1);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp520;
$tmp520 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp520->value = $tmp519;
ITable* $tmp521 = ((frost$core$Equatable*) $tmp515)->$class->itable;
while ($tmp521->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp521 = $tmp521->next;
}
$fn523 $tmp522 = $tmp521->methods[0];
frost$core$Bit $tmp524 = $tmp522(((frost$core$Equatable*) $tmp515), ((frost$core$Equatable*) $tmp520));
bool $tmp525 = $tmp524.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp520)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp515)));
if ($tmp525) goto block56; else goto block57;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:95
frost$io$OutputStream** $tmp526 = &param0->out;
frost$io$OutputStream* $tmp527 = *$tmp526;
$fn529 $tmp528 = ($fn529) $tmp527->$class->vtable[17];
frost$core$Error* $tmp530 = $tmp528($tmp527, &$s531);
if ($tmp530 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
frost$core$Bit $tmp532 = (frost$core$Bit) {$tmp530 != NULL};
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block61; else goto block62;
block62:;
frost$core$Int $tmp534 = (frost$core$Int) {95u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s535, $tmp534, &$s536);
abort(); // unreachable
block61:;
*(&local0) = $tmp530;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
goto block14;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:96
frost$io$OutputStream** $tmp537 = &param0->out;
frost$io$OutputStream* $tmp538 = *$tmp537;
org$frostlang$frostc$ASTNode** $tmp539 = &param1->rawValue;
org$frostlang$frostc$ASTNode* $tmp540 = *$tmp539;
frost$core$Bit $tmp541 = (frost$core$Bit) {$tmp540 != NULL};
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block63; else goto block64;
block64:;
frost$core$Int $tmp543 = (frost$core$Int) {96u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s544, $tmp543, &$s545);
abort(); // unreachable
block63:;
$fn547 $tmp546 = ($fn547) $tmp538->$class->vtable[18];
frost$core$Error* $tmp548 = $tmp546($tmp538, ((frost$core$Object*) $tmp540));
if ($tmp548 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
frost$core$Bit $tmp549 = (frost$core$Bit) {$tmp548 != NULL};
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block67; else goto block68;
block68:;
frost$core$Int $tmp551 = (frost$core$Int) {96u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s552, $tmp551, &$s553);
abort(); // unreachable
block67:;
*(&local0) = $tmp548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
goto block14;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
goto block57;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:98
frost$io$OutputStream** $tmp554 = &param0->out;
frost$io$OutputStream* $tmp555 = *$tmp554;
$fn557 $tmp556 = ($fn557) $tmp555->$class->vtable[21];
frost$core$Error* $tmp558 = $tmp556($tmp555);
if ($tmp558 == NULL) goto block69; else goto block70;
block70:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
frost$core$Bit $tmp559 = (frost$core$Bit) {$tmp558 != NULL};
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block71; else goto block72;
block72:;
frost$core$Int $tmp561 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s562, $tmp561, &$s563);
abort(); // unreachable
block71:;
*(&local0) = $tmp558;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
goto block14;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
frost$core$Error* $tmp564 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local0) = ((frost$core$Error*) NULL);
return;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:101
frost$core$Error* $tmp565 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:101:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn567 $tmp566 = ($fn567) ((frost$core$Object*) $tmp565)->$class->vtable[0];
frost$core$String* $tmp568 = $tmp566(((frost$core$Object*) $tmp565));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp568);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:102
frost$core$Int $tmp569 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp569);
frost$core$Int $tmp570 = (frost$core$Int) {102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s571, $tmp570, &$s572);
abort(); // unreachable

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
org$frostlang$frostc$MethodDecl$Kind local3;
org$frostlang$frostc$MethodDecl$Kind local4;
org$frostlang$frostc$ASTNode* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:107
org$frostlang$frostc$Annotations** $tmp573 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp574 = *$tmp573;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from StubCodeGenerator.frost:107:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:158
frost$core$Int* $tmp575 = &$tmp574->flags;
frost$core$Int $tmp576 = *$tmp575;
frost$core$Int $tmp577 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp578 = $tmp576.value;
int64_t $tmp579 = $tmp577.value;
int64_t $tmp580 = $tmp578 & $tmp579;
frost$core$Int $tmp581 = (frost$core$Int) {$tmp580};
frost$core$Int $tmp582 = (frost$core$Int) {0u};
int64_t $tmp583 = $tmp581.value;
int64_t $tmp584 = $tmp582.value;
bool $tmp585 = $tmp583 != $tmp584;
frost$core$Bit $tmp586 = (frost$core$Bit) {$tmp585};
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:108
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:110
frost$core$Weak** $tmp588 = &param0->compiler;
frost$core$Weak* $tmp589 = *$tmp588;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:110:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp590 = &$tmp589->_valid;
frost$core$Bit $tmp591 = *$tmp590;
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block9; else goto block10;
block10:;
frost$core$Int $tmp593 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s594, $tmp593);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp595 = &$tmp589->value;
frost$core$Object* $tmp596 = *$tmp595;
frost$core$Frost$ref$frost$core$Object$Q($tmp596);
frost$core$Bit $tmp597 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp596) != NULL};
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block11; else goto block12;
block12:;
frost$core$Int $tmp599 = (frost$core$Int) {110u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s600, $tmp599, &$s601);
abort(); // unreachable
block11:;
frost$core$Bit $tmp602 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp596), param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:110:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp603 = $tmp602.value;
bool $tmp604 = !$tmp603;
frost$core$Bit $tmp605 = (frost$core$Bit) {$tmp604};
bool $tmp606 = $tmp605.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp596);
if ($tmp606) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:111
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:113
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:114
frost$io$OutputStream** $tmp607 = &param0->out;
frost$io$OutputStream* $tmp608 = *$tmp607;
org$frostlang$frostc$Annotations** $tmp609 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp610 = *$tmp609;
$fn612 $tmp611 = ($fn612) $tmp608->$class->vtable[18];
frost$core$Error* $tmp613 = $tmp611($tmp608, ((frost$core$Object*) $tmp610));
if ($tmp613 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Bit $tmp614 = (frost$core$Bit) {$tmp613 != NULL};
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block18; else goto block19;
block19:;
frost$core$Int $tmp616 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s617, $tmp616, &$s618);
abort(); // unreachable
block18:;
*(&local0) = $tmp613;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
goto block14;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:115
org$frostlang$frostc$MethodDecl$Kind* $tmp619 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp620 = *$tmp619;
frost$core$Int $tmp621 = $tmp620.$rawValue;
frost$core$Int $tmp622 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:116:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp623 = $tmp621.value;
int64_t $tmp624 = $tmp622.value;
bool $tmp625 = $tmp623 == $tmp624;
frost$core$Bit $tmp626 = (frost$core$Bit) {$tmp625};
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:117
frost$io$OutputStream** $tmp628 = &param0->out;
frost$io$OutputStream* $tmp629 = *$tmp628;
$fn631 $tmp630 = ($fn631) $tmp629->$class->vtable[17];
frost$core$Error* $tmp632 = $tmp630($tmp629, &$s633);
if ($tmp632 == NULL) goto block24; else goto block25;
block25:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
frost$core$Bit $tmp634 = (frost$core$Bit) {$tmp632 != NULL};
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block26; else goto block27;
block27:;
frost$core$Int $tmp636 = (frost$core$Int) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s637, $tmp636, &$s638);
abort(); // unreachable
block26:;
*(&local0) = $tmp632;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
goto block14;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
goto block20;
block22:;
frost$core$Int $tmp639 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:119:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp640 = $tmp621.value;
int64_t $tmp641 = $tmp639.value;
bool $tmp642 = $tmp640 == $tmp641;
frost$core$Bit $tmp643 = (frost$core$Bit) {$tmp642};
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:120
frost$io$OutputStream** $tmp645 = &param0->out;
frost$io$OutputStream* $tmp646 = *$tmp645;
$fn648 $tmp647 = ($fn648) $tmp646->$class->vtable[17];
frost$core$Error* $tmp649 = $tmp647($tmp646, &$s650);
if ($tmp649 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$Bit $tmp651 = (frost$core$Bit) {$tmp649 != NULL};
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block33; else goto block34;
block34:;
frost$core$Int $tmp653 = (frost$core$Int) {120u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s654, $tmp653, &$s655);
abort(); // unreachable
block33:;
*(&local0) = $tmp649;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
goto block14;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
goto block20;
block29:;
frost$core$Int $tmp656 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:122:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp657 = $tmp621.value;
int64_t $tmp658 = $tmp656.value;
bool $tmp659 = $tmp657 == $tmp658;
frost$core$Bit $tmp660 = (frost$core$Bit) {$tmp659};
bool $tmp661 = $tmp660.value;
if ($tmp661) goto block35; else goto block36;
block35:;
goto block20;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:125
frost$core$Int $tmp662 = (frost$core$Int) {125u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s663, $tmp662);
abort(); // unreachable
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:128
frost$io$OutputStream** $tmp664 = &param0->out;
frost$io$OutputStream* $tmp665 = *$tmp664;
frost$core$String** $tmp666 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp667 = *$tmp666;
$fn669 $tmp668 = ($fn669) $tmp665->$class->vtable[17];
frost$core$Error* $tmp670 = $tmp668($tmp665, $tmp667);
if ($tmp670 == NULL) goto block38; else goto block39;
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
frost$core$Bit $tmp671 = (frost$core$Bit) {$tmp670 != NULL};
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block40; else goto block41;
block41:;
frost$core$Int $tmp673 = (frost$core$Int) {128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s674, $tmp673, &$s675);
abort(); // unreachable
block40:;
*(&local0) = $tmp670;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
goto block14;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:129
frost$collections$Array** $tmp676 = &param1->genericParameters;
frost$collections$Array* $tmp677 = *$tmp676;
frost$core$Bit $tmp678 = (frost$core$Bit) {$tmp677 != NULL};
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:130
frost$io$OutputStream** $tmp680 = &param0->out;
frost$io$OutputStream* $tmp681 = *$tmp680;
frost$collections$Array** $tmp682 = &param1->genericParameters;
frost$collections$Array* $tmp683 = *$tmp682;
frost$core$Bit $tmp684 = (frost$core$Bit) {$tmp683 != NULL};
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block44; else goto block45;
block45:;
frost$core$Int $tmp686 = (frost$core$Int) {131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s687, $tmp686, &$s688);
abort(); // unreachable
block44:;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure10));
org$frostlang$frostc$StubCodeGenerator$_Closure10* $tmp689 = (org$frostlang$frostc$StubCodeGenerator$_Closure10*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure10$class);
org$frostlang$frostc$StubCodeGenerator$_Closure10$init$org$frostlang$frostc$StubCodeGenerator($tmp689, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp691 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:131:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp692 = &$tmp691->pointer;
*$tmp692 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure10$$anonymous9$org$frostlang$frostc$MethodDecl$GenericParameter$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
frost$core$Object** $tmp693 = &$tmp691->target;
frost$core$Object* $tmp694 = *$tmp693;
frost$core$Frost$unref$frost$core$Object$Q($tmp694);
frost$core$Object** $tmp695 = &$tmp691->target;
*$tmp695 = ((frost$core$Object*) $tmp689);
ITable* $tmp696 = ((frost$collections$CollectionView*) $tmp683)->$class->itable;
while ($tmp696->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp696 = $tmp696->next;
}
$fn698 $tmp697 = $tmp696->methods[9];
frost$collections$Array* $tmp699 = $tmp697(((frost$collections$CollectionView*) $tmp683), $tmp691);
ITable* $tmp700 = ((frost$collections$CollectionView*) $tmp699)->$class->itable;
while ($tmp700->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp700 = $tmp700->next;
}
$fn702 $tmp701 = $tmp700->methods[3];
frost$core$String* $tmp703 = $tmp701(((frost$collections$CollectionView*) $tmp699), &$s704);
frost$core$String* $tmp705 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s706, $tmp703);
frost$core$String* $tmp707 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp705, &$s708);
$fn710 $tmp709 = ($fn710) $tmp681->$class->vtable[17];
frost$core$Error* $tmp711 = $tmp709($tmp681, $tmp707);
if ($tmp711 == NULL) goto block47; else goto block48;
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Bit $tmp712 = (frost$core$Bit) {$tmp711 != NULL};
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block49; else goto block50;
block50:;
frost$core$Int $tmp714 = (frost$core$Int) {130u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s715, $tmp714, &$s716);
abort(); // unreachable
block49:;
*(&local0) = $tmp711;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
goto block14;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
goto block43;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:134
frost$io$OutputStream** $tmp717 = &param0->out;
frost$io$OutputStream* $tmp718 = *$tmp717;
$fn720 $tmp719 = ($fn720) $tmp718->$class->vtable[17];
frost$core$Error* $tmp721 = $tmp719($tmp718, &$s722);
if ($tmp721 == NULL) goto block51; else goto block52;
block52:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
frost$core$Bit $tmp723 = (frost$core$Bit) {$tmp721 != NULL};
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block53; else goto block54;
block54:;
frost$core$Int $tmp725 = (frost$core$Int) {134u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s726, $tmp725, &$s727);
abort(); // unreachable
block53:;
*(&local0) = $tmp721;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
goto block14;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:135
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s728));
frost$core$String* $tmp729 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local1) = &$s730;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:136
frost$collections$Array** $tmp731 = &param1->parameters;
frost$collections$Array* $tmp732 = *$tmp731;
ITable* $tmp733 = ((frost$collections$Iterable*) $tmp732)->$class->itable;
while ($tmp733->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp733 = $tmp733->next;
}
$fn735 $tmp734 = $tmp733->methods[0];
frost$collections$Iterator* $tmp736 = $tmp734(((frost$collections$Iterable*) $tmp732));
goto block55;
block55:;
ITable* $tmp737 = $tmp736->$class->itable;
while ($tmp737->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp737 = $tmp737->next;
}
$fn739 $tmp738 = $tmp737->methods[0];
frost$core$Bit $tmp740 = $tmp738($tmp736);
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block57; else goto block56;
block56:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp742 = $tmp736->$class->itable;
while ($tmp742->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp742 = $tmp742->next;
}
$fn744 $tmp743 = $tmp742->methods[1];
frost$core$Object* $tmp745 = $tmp743($tmp736);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp745)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp746 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp745);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:137
frost$io$OutputStream** $tmp747 = &param0->out;
frost$io$OutputStream* $tmp748 = *$tmp747;
frost$core$String* $tmp749 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:137:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$core$String* $tmp750 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp749, &$s751);
org$frostlang$frostc$MethodDecl$Parameter* $tmp752 = *(&local2);
frost$core$String** $tmp753 = &$tmp752->name;
frost$core$String* $tmp754 = *$tmp753;
frost$core$String* $tmp755 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp750, $tmp754);
frost$core$String* $tmp756 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp755, &$s757);
org$frostlang$frostc$MethodDecl$Parameter* $tmp758 = *(&local2);
org$frostlang$frostc$Type** $tmp759 = &$tmp758->type;
org$frostlang$frostc$Type* $tmp760 = *$tmp759;
frost$core$String* $tmp761 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp760);
frost$core$String* $tmp762 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp756, $tmp761);
frost$core$String* $tmp763 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp762, &$s764);
$fn766 $tmp765 = ($fn766) $tmp748->$class->vtable[17];
frost$core$Error* $tmp767 = $tmp765($tmp748, $tmp763);
if ($tmp767 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$Bit $tmp768 = (frost$core$Bit) {$tmp767 != NULL};
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block61; else goto block62;
block62:;
frost$core$Int $tmp770 = (frost$core$Int) {137u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s771, $tmp770, &$s772);
abort(); // unreachable
block61:;
*(&local0) = $tmp767;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$core$Frost$unref$frost$core$Object$Q($tmp745);
org$frostlang$frostc$MethodDecl$Parameter* $tmp773 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$String* $tmp774 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
*(&local1) = ((frost$core$String*) NULL);
goto block14;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s775));
frost$core$String* $tmp776 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local1) = &$s777;
frost$core$Frost$unref$frost$core$Object$Q($tmp745);
org$frostlang$frostc$MethodDecl$Parameter* $tmp778 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block55;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:140
frost$io$OutputStream** $tmp779 = &param0->out;
frost$io$OutputStream* $tmp780 = *$tmp779;
$fn782 $tmp781 = ($fn782) $tmp780->$class->vtable[17];
frost$core$Error* $tmp783 = $tmp781($tmp780, &$s784);
if ($tmp783 == NULL) goto block63; else goto block64;
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$Bit $tmp785 = (frost$core$Bit) {$tmp783 != NULL};
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block65; else goto block66;
block66:;
frost$core$Int $tmp787 = (frost$core$Int) {140u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s788, $tmp787, &$s789);
abort(); // unreachable
block65:;
*(&local0) = $tmp783;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
frost$core$String* $tmp790 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
*(&local1) = ((frost$core$String*) NULL);
goto block14;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:141
org$frostlang$frostc$MethodDecl$Kind* $tmp791 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp792 = *$tmp791;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp793;
$tmp793 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp793->value = $tmp792;
frost$core$Int $tmp794 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from StubCodeGenerator.frost:141:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp795 = &(&local4)->$rawValue;
*$tmp795 = $tmp794;
org$frostlang$frostc$MethodDecl$Kind $tmp796 = *(&local4);
*(&local3) = $tmp796;
org$frostlang$frostc$MethodDecl$Kind $tmp797 = *(&local3);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp798;
$tmp798 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp798->value = $tmp797;
ITable* $tmp799 = ((frost$core$Equatable*) $tmp793)->$class->itable;
while ($tmp799->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp799 = $tmp799->next;
}
$fn801 $tmp800 = $tmp799->methods[0];
frost$core$Bit $tmp802 = $tmp800(((frost$core$Equatable*) $tmp793), ((frost$core$Equatable*) $tmp798));
bool $tmp803 = $tmp802.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp798)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp793)));
if ($tmp803) goto block67; else goto block69;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:142
org$frostlang$frostc$Annotations** $tmp804 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp805 = *$tmp804;
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from StubCodeGenerator.frost:142:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:146
frost$core$Int* $tmp806 = &$tmp805->flags;
frost$core$Int $tmp807 = *$tmp806;
frost$core$Int $tmp808 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:146:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp809 = $tmp807.value;
int64_t $tmp810 = $tmp808.value;
int64_t $tmp811 = $tmp809 & $tmp810;
frost$core$Int $tmp812 = (frost$core$Int) {$tmp811};
frost$core$Int $tmp813 = (frost$core$Int) {0u};
int64_t $tmp814 = $tmp812.value;
int64_t $tmp815 = $tmp813.value;
bool $tmp816 = $tmp814 != $tmp815;
frost$core$Bit $tmp817 = (frost$core$Bit) {$tmp816};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:142:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp818 = $tmp817.value;
bool $tmp819 = !$tmp818;
frost$core$Bit $tmp820 = (frost$core$Bit) {$tmp819};
bool $tmp821 = $tmp820.value;
if ($tmp821) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:143
frost$io$OutputStream** $tmp822 = &param0->out;
frost$io$OutputStream* $tmp823 = *$tmp822;
$fn825 $tmp824 = ($fn825) $tmp823->$class->vtable[17];
frost$core$Error* $tmp826 = $tmp824($tmp823, &$s827);
if ($tmp826 == NULL) goto block76; else goto block77;
block77:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Bit $tmp828 = (frost$core$Bit) {$tmp826 != NULL};
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block78; else goto block79;
block79:;
frost$core$Int $tmp830 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s831, $tmp830, &$s832);
abort(); // unreachable
block78:;
*(&local0) = $tmp826;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$String* $tmp833 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local1) = ((frost$core$String*) NULL);
goto block14;
block76:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
goto block72;
block72:;
goto block68;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:146
org$frostlang$frostc$Type** $tmp834 = &param1->returnType;
org$frostlang$frostc$Type* $tmp835 = *$tmp834;
frost$core$Weak** $tmp836 = &param0->compiler;
frost$core$Weak* $tmp837 = *$tmp836;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:146:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp838 = &$tmp837->_valid;
frost$core$Bit $tmp839 = *$tmp838;
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block84; else goto block85;
block85:;
frost$core$Int $tmp841 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s842, $tmp841);
abort(); // unreachable
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp843 = &$tmp837->value;
frost$core$Object* $tmp844 = *$tmp843;
frost$core$Frost$ref$frost$core$Object$Q($tmp844);
frost$core$Bit $tmp845 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp844) != NULL};
bool $tmp846 = $tmp845.value;
if ($tmp846) goto block86; else goto block87;
block87:;
frost$core$Int $tmp847 = (frost$core$Int) {146u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s848, $tmp847, &$s849);
abort(); // unreachable
block86:;
org$frostlang$frostc$Type** $tmp850 = &((org$frostlang$frostc$Compiler*) $tmp844)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp851 = *$tmp850;
ITable* $tmp852 = ((frost$core$Equatable*) $tmp835)->$class->itable;
while ($tmp852->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp852 = $tmp852->next;
}
$fn854 $tmp853 = $tmp852->methods[1];
frost$core$Bit $tmp855 = $tmp853(((frost$core$Equatable*) $tmp835), ((frost$core$Equatable*) $tmp851));
bool $tmp856 = $tmp855.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp844);
if ($tmp856) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:147
frost$io$OutputStream** $tmp857 = &param0->out;
frost$io$OutputStream* $tmp858 = *$tmp857;
org$frostlang$frostc$Type** $tmp859 = &param1->returnType;
org$frostlang$frostc$Type* $tmp860 = *$tmp859;
frost$core$String* $tmp861 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp860);
frost$core$String* $tmp862 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s863, $tmp861);
frost$core$String* $tmp864 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp862, &$s865);
$fn867 $tmp866 = ($fn867) $tmp858->$class->vtable[19];
frost$core$Error* $tmp868 = $tmp866($tmp858, $tmp864);
if ($tmp868 == NULL) goto block88; else goto block89;
block89:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Bit $tmp869 = (frost$core$Bit) {$tmp868 != NULL};
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block90; else goto block91;
block91:;
frost$core$Int $tmp871 = (frost$core$Int) {147u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s872, $tmp871, &$s873);
abort(); // unreachable
block90:;
*(&local0) = $tmp868;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
frost$core$String* $tmp874 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
*(&local1) = ((frost$core$String*) NULL);
goto block14;
block88:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
goto block81;
block81:;
goto block68;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:149
org$frostlang$frostc$Annotations** $tmp875 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp876 = *$tmp875;
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from StubCodeGenerator.frost:149:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:146
frost$core$Int* $tmp877 = &$tmp876->flags;
frost$core$Int $tmp878 = *$tmp877;
frost$core$Int $tmp879 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:146:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp880 = $tmp878.value;
int64_t $tmp881 = $tmp879.value;
int64_t $tmp882 = $tmp880 & $tmp881;
frost$core$Int $tmp883 = (frost$core$Int) {$tmp882};
frost$core$Int $tmp884 = (frost$core$Int) {0u};
int64_t $tmp885 = $tmp883.value;
int64_t $tmp886 = $tmp884.value;
bool $tmp887 = $tmp885 != $tmp886;
frost$core$Bit $tmp888 = (frost$core$Bit) {$tmp887};
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block92; else goto block94;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:150
frost$io$OutputStream** $tmp890 = &param0->out;
frost$io$OutputStream* $tmp891 = *$tmp890;
$fn893 $tmp892 = ($fn893) $tmp891->$class->vtable[17];
frost$core$Error* $tmp894 = $tmp892($tmp891, &$s895);
if ($tmp894 == NULL) goto block97; else goto block98;
block98:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
frost$core$Bit $tmp896 = (frost$core$Bit) {$tmp894 != NULL};
bool $tmp897 = $tmp896.value;
if ($tmp897) goto block99; else goto block100;
block100:;
frost$core$Int $tmp898 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s899, $tmp898, &$s900);
abort(); // unreachable
block99:;
*(&local0) = $tmp894;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
frost$core$String* $tmp901 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
*(&local1) = ((frost$core$String*) NULL);
goto block14;
block97:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:151
org$frostlang$frostc$FixedArray** $tmp902 = &param1->body;
org$frostlang$frostc$FixedArray* $tmp903 = *$tmp902;
frost$core$Bit $tmp904 = (frost$core$Bit) {$tmp903 != NULL};
bool $tmp905 = $tmp904.value;
if ($tmp905) goto block101; else goto block102;
block102:;
frost$core$Int $tmp906 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s907, $tmp906, &$s908);
abort(); // unreachable
block101:;
ITable* $tmp909 = ((frost$collections$Iterable*) $tmp903)->$class->itable;
while ($tmp909->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp909 = $tmp909->next;
}
$fn911 $tmp910 = $tmp909->methods[0];
frost$collections$Iterator* $tmp912 = $tmp910(((frost$collections$Iterable*) $tmp903));
goto block103;
block103:;
ITable* $tmp913 = $tmp912->$class->itable;
while ($tmp913->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp913 = $tmp913->next;
}
$fn915 $tmp914 = $tmp913->methods[0];
frost$core$Bit $tmp916 = $tmp914($tmp912);
bool $tmp917 = $tmp916.value;
if ($tmp917) goto block105; else goto block104;
block104:;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp918 = $tmp912->$class->itable;
while ($tmp918->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp918 = $tmp918->next;
}
$fn920 $tmp919 = $tmp918->methods[1];
frost$core$Object* $tmp921 = $tmp919($tmp912);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp921)));
org$frostlang$frostc$ASTNode* $tmp922 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
*(&local5) = ((org$frostlang$frostc$ASTNode*) $tmp921);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:152
frost$io$OutputStream** $tmp923 = &param0->out;
frost$io$OutputStream* $tmp924 = *$tmp923;
org$frostlang$frostc$ASTNode* $tmp925 = *(&local5);
$fn927 $tmp926 = ($fn927) $tmp924->$class->vtable[20];
frost$core$Error* $tmp928 = $tmp926($tmp924, ((frost$core$Object*) $tmp925));
if ($tmp928 == NULL) goto block106; else goto block107;
block107:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Bit $tmp929 = (frost$core$Bit) {$tmp928 != NULL};
bool $tmp930 = $tmp929.value;
if ($tmp930) goto block108; else goto block109;
block109:;
frost$core$Int $tmp931 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s932, $tmp931, &$s933);
abort(); // unreachable
block108:;
*(&local0) = $tmp928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Frost$unref$frost$core$Object$Q($tmp921);
org$frostlang$frostc$ASTNode* $tmp934 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
frost$core$String* $tmp935 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
*(&local1) = ((frost$core$String*) NULL);
goto block14;
block106:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Frost$unref$frost$core$Object$Q($tmp921);
org$frostlang$frostc$ASTNode* $tmp936 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block103;
block105:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:154
frost$io$OutputStream** $tmp937 = &param0->out;
frost$io$OutputStream* $tmp938 = *$tmp937;
$fn940 $tmp939 = ($fn940) $tmp938->$class->vtable[17];
frost$core$Error* $tmp941 = $tmp939($tmp938, &$s942);
if ($tmp941 == NULL) goto block110; else goto block111;
block111:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$core$Bit $tmp943 = (frost$core$Bit) {$tmp941 != NULL};
bool $tmp944 = $tmp943.value;
if ($tmp944) goto block112; else goto block113;
block113:;
frost$core$Int $tmp945 = (frost$core$Int) {154u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s946, $tmp945, &$s947);
abort(); // unreachable
block112:;
*(&local0) = $tmp941;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
frost$core$String* $tmp948 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
*(&local1) = ((frost$core$String*) NULL);
goto block14;
block110:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
goto block93;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:156
org$frostlang$frostc$Annotations** $tmp949 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp950 = *$tmp949;
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from StubCodeGenerator.frost:156:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:166
frost$core$Int* $tmp951 = &$tmp950->flags;
frost$core$Int $tmp952 = *$tmp951;
frost$core$Int $tmp953 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp954 = $tmp952.value;
int64_t $tmp955 = $tmp953.value;
int64_t $tmp956 = $tmp954 & $tmp955;
frost$core$Int $tmp957 = (frost$core$Int) {$tmp956};
frost$core$Int $tmp958 = (frost$core$Int) {0u};
int64_t $tmp959 = $tmp957.value;
int64_t $tmp960 = $tmp958.value;
bool $tmp961 = $tmp959 != $tmp960;
frost$core$Bit $tmp962 = (frost$core$Bit) {$tmp961};
bool $tmp963 = $tmp962.value;
if ($tmp963) goto block114; else goto block115;
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:157
frost$io$OutputStream** $tmp964 = &param0->out;
frost$io$OutputStream* $tmp965 = *$tmp964;
$fn967 $tmp966 = ($fn967) $tmp965->$class->vtable[17];
frost$core$Error* $tmp968 = $tmp966($tmp965, &$s969);
if ($tmp968 == NULL) goto block118; else goto block119;
block119:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$Bit $tmp970 = (frost$core$Bit) {$tmp968 != NULL};
bool $tmp971 = $tmp970.value;
if ($tmp971) goto block120; else goto block121;
block121:;
frost$core$Int $tmp972 = (frost$core$Int) {157u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s973, $tmp972, &$s974);
abort(); // unreachable
block120:;
*(&local0) = $tmp968;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$String* $tmp975 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
*(&local1) = ((frost$core$String*) NULL);
goto block14;
block118:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
goto block115;
block115:;
goto block93;
block93:;
frost$core$String* $tmp976 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp977 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local0) = ((frost$core$Error*) NULL);
return;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:161
frost$core$Error* $tmp978 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:161:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn980 $tmp979 = ($fn980) ((frost$core$Object*) $tmp978)->$class->vtable[0];
frost$core$String* $tmp981 = $tmp979(((frost$core$Object*) $tmp978));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp981);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:162
frost$core$Int $tmp982 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp982);
frost$core$Int $tmp983 = (frost$core$Int) {162u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s984, $tmp983, &$s985);
abort(); // unreachable

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$collections$ListView* local2 = NULL;
frost$core$Matcher* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$core$Int local5;
frost$collections$ListView* local6 = NULL;
frost$core$String* local7 = NULL;
org$frostlang$frostc$ClassDecl$Kind local8;
org$frostlang$frostc$ClassDecl$Kind local9;
org$frostlang$frostc$ClassDecl$Kind local10;
org$frostlang$frostc$ClassDecl$Kind local11;
org$frostlang$frostc$Type* local12 = NULL;
org$frostlang$frostc$ChoiceCase* local13 = NULL;
org$frostlang$frostc$ClassDecl* local14 = NULL;
org$frostlang$frostc$FieldDecl* local15 = NULL;
org$frostlang$frostc$MethodDecl* local16 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:169
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:170
frost$core$Weak** $tmp986 = &param0->compiler;
frost$core$Weak* $tmp987 = *$tmp986;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:170:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp988 = &$tmp987->_valid;
frost$core$Bit $tmp989 = *$tmp988;
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block7; else goto block8;
block8:;
frost$core$Int $tmp991 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s992, $tmp991);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp993 = &$tmp987->value;
frost$core$Object* $tmp994 = *$tmp993;
frost$core$Frost$ref$frost$core$Object$Q($tmp994);
frost$core$Bit $tmp995 = (frost$core$Bit) {((org$frostlang$frostc$Compiler*) $tmp994) != NULL};
bool $tmp996 = $tmp995.value;
if ($tmp996) goto block9; else goto block10;
block10:;
frost$core$Int $tmp997 = (frost$core$Int) {170u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s998, $tmp997, &$s999);
abort(); // unreachable
block9:;
frost$core$Bit $tmp1000 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp994), param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:170:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1001 = $tmp1000.value;
bool $tmp1002 = !$tmp1001;
frost$core$Bit $tmp1003 = (frost$core$Bit) {$tmp1002};
bool $tmp1004 = $tmp1003.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp994);
if ($tmp1004) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:171
frost$core$Error* $tmp1005 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
*(&local0) = ((frost$core$Error*) NULL);
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:173
frost$core$String** $tmp1006 = &param1->name;
frost$core$String* $tmp1007 = *$tmp1006;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1007));
frost$core$String* $tmp1008 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
*(&local1) = $tmp1007;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:174
frost$core$String** $tmp1009 = &param1->name;
frost$core$String* $tmp1010 = *$tmp1009;
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp1011 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp1011, &$s1012);
// begin inline call to function frost.core.String.parse(regex:frost.core.RegularExpression):frost.collections.ListView<frost.core.String?>? from StubCodeGenerator.frost:174:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1072
frost$core$Matcher* $tmp1013 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp1011, $tmp1010);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
frost$core$Matcher* $tmp1014 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
*(&local3) = $tmp1013;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1073
frost$core$Matcher* $tmp1015 = *(&local3);
frost$core$Bit $tmp1016;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp1016, $tmp1015);
bool $tmp1017 = $tmp1016.value;
if ($tmp1017) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1074
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp1018 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp1018);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
frost$collections$Array* $tmp1019 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
*(&local4) = $tmp1018;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1075
frost$core$Int $tmp1020 = (frost$core$Int) {1u};
frost$core$Matcher* $tmp1021 = *(&local3);
frost$core$Int $tmp1022;
frost$core$Matcher$get_groupCount$R$frost$core$Int(&$tmp1022, $tmp1021);
frost$core$Bit $tmp1023 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1024 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1020, $tmp1022, $tmp1023);
frost$core$Int $tmp1025 = $tmp1024.min;
*(&local5) = $tmp1025;
frost$core$Int $tmp1026 = $tmp1024.max;
frost$core$Bit $tmp1027 = $tmp1024.inclusive;
bool $tmp1028 = $tmp1027.value;
frost$core$Int $tmp1029 = (frost$core$Int) {1u};
if ($tmp1028) goto block18; else goto block19;
block18:;
int64_t $tmp1030 = $tmp1025.value;
int64_t $tmp1031 = $tmp1026.value;
bool $tmp1032 = $tmp1030 <= $tmp1031;
frost$core$Bit $tmp1033 = (frost$core$Bit) {$tmp1032};
bool $tmp1034 = $tmp1033.value;
if ($tmp1034) goto block15; else goto block16;
block19:;
int64_t $tmp1035 = $tmp1025.value;
int64_t $tmp1036 = $tmp1026.value;
bool $tmp1037 = $tmp1035 < $tmp1036;
frost$core$Bit $tmp1038 = (frost$core$Bit) {$tmp1037};
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1076
frost$collections$Array* $tmp1040 = *(&local4);
frost$core$Matcher* $tmp1041 = *(&local3);
frost$core$Int $tmp1042 = *(&local5);
frost$core$String* $tmp1043 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp1041, $tmp1042);
frost$collections$Array$add$frost$collections$Array$T($tmp1040, ((frost$core$Object*) $tmp1043));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
frost$core$Int $tmp1044 = *(&local5);
int64_t $tmp1045 = $tmp1026.value;
int64_t $tmp1046 = $tmp1044.value;
int64_t $tmp1047 = $tmp1045 - $tmp1046;
frost$core$Int $tmp1048 = (frost$core$Int) {$tmp1047};
if ($tmp1028) goto block21; else goto block22;
block21:;
int64_t $tmp1049 = $tmp1048.value;
int64_t $tmp1050 = $tmp1029.value;
bool $tmp1051 = $tmp1049 >= $tmp1050;
frost$core$Bit $tmp1052 = (frost$core$Bit) {$tmp1051};
bool $tmp1053 = $tmp1052.value;
if ($tmp1053) goto block20; else goto block16;
block22:;
int64_t $tmp1054 = $tmp1048.value;
int64_t $tmp1055 = $tmp1029.value;
bool $tmp1056 = $tmp1054 > $tmp1055;
frost$core$Bit $tmp1057 = (frost$core$Bit) {$tmp1056};
bool $tmp1058 = $tmp1057.value;
if ($tmp1058) goto block20; else goto block16;
block20:;
int64_t $tmp1059 = $tmp1044.value;
int64_t $tmp1060 = $tmp1029.value;
int64_t $tmp1061 = $tmp1059 + $tmp1060;
frost$core$Int $tmp1062 = (frost$core$Int) {$tmp1061};
*(&local5) = $tmp1062;
goto block15;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1078
frost$collections$Array* $tmp1063 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1063)));
frost$collections$Array* $tmp1064 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp1065 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1065));
*(&local3) = ((frost$core$Matcher*) NULL);
*(&local2) = ((frost$collections$ListView*) $tmp1063);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1063)));
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp1066 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
*(&local3) = ((frost$core$Matcher*) NULL);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
goto block12;
block12:;
frost$collections$ListView* $tmp1067 = *(&local2);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
frost$collections$ListView* $tmp1068 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
*(&local6) = $tmp1067;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:175
frost$collections$ListView* $tmp1069 = *(&local6);
frost$core$Bit $tmp1070 = (frost$core$Bit) {$tmp1069 != NULL};
bool $tmp1071 = $tmp1070.value;
if ($tmp1071) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:176
frost$core$Weak** $tmp1072 = &param1->owner;
frost$core$Weak* $tmp1073 = *$tmp1072;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:176:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1074 = &$tmp1073->_valid;
frost$core$Bit $tmp1075 = *$tmp1074;
bool $tmp1076 = $tmp1075.value;
if ($tmp1076) goto block29; else goto block30;
block30:;
frost$core$Int $tmp1077 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1078, $tmp1077);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1079 = &$tmp1073->value;
frost$core$Object* $tmp1080 = *$tmp1079;
frost$core$Frost$ref$frost$core$Object$Q($tmp1080);
frost$core$Bit $tmp1081 = (frost$core$Bit) {((org$frostlang$frostc$ClassDecl*) $tmp1080) == NULL};
bool $tmp1082 = $tmp1081.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1080);
if ($tmp1082) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:177
frost$io$OutputStream** $tmp1083 = &param0->out;
frost$io$OutputStream* $tmp1084 = *$tmp1083;
frost$collections$ListView* $tmp1085 = *(&local6);
frost$core$Bit $tmp1086 = (frost$core$Bit) {$tmp1085 != NULL};
bool $tmp1087 = $tmp1086.value;
if ($tmp1087) goto block31; else goto block32;
block32:;
frost$core$Int $tmp1088 = (frost$core$Int) {177u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1089, $tmp1088, &$s1090);
abort(); // unreachable
block31:;
frost$core$Int $tmp1091 = (frost$core$Int) {0u};
ITable* $tmp1092 = $tmp1085->$class->itable;
while ($tmp1092->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1092 = $tmp1092->next;
}
$fn1094 $tmp1093 = $tmp1092->methods[0];
frost$core$Object* $tmp1095 = $tmp1093($tmp1085, $tmp1091);
frost$core$Bit $tmp1096 = (frost$core$Bit) {((frost$core$String*) $tmp1095) != NULL};
bool $tmp1097 = $tmp1096.value;
if ($tmp1097) goto block33; else goto block34;
block34:;
frost$core$Int $tmp1098 = (frost$core$Int) {177u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1099, $tmp1098, &$s1100);
abort(); // unreachable
block33:;
frost$core$String* $tmp1101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1102, ((frost$core$String*) $tmp1095));
frost$core$String* $tmp1103 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1101, &$s1104);
$fn1106 $tmp1105 = ($fn1106) $tmp1084->$class->vtable[19];
frost$core$Error* $tmp1107 = $tmp1105($tmp1084, $tmp1103);
if ($tmp1107 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
frost$core$Bit $tmp1108 = (frost$core$Bit) {$tmp1107 != NULL};
bool $tmp1109 = $tmp1108.value;
if ($tmp1109) goto block37; else goto block38;
block38:;
frost$core$Int $tmp1110 = (frost$core$Int) {177u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1111, $tmp1110, &$s1112);
abort(); // unreachable
block37:;
*(&local0) = $tmp1107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
frost$core$Frost$unref$frost$core$Object$Q($tmp1095);
frost$collections$ListView* $tmp1113 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1113));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1114 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1114));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$String* $tmp1115 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1103));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
frost$core$Frost$unref$frost$core$Object$Q($tmp1095);
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:179
frost$collections$ListView* $tmp1116 = *(&local6);
frost$core$Bit $tmp1117 = (frost$core$Bit) {$tmp1116 != NULL};
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block39; else goto block40;
block40:;
frost$core$Int $tmp1119 = (frost$core$Int) {179u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1120, $tmp1119, &$s1121);
abort(); // unreachable
block39:;
frost$core$Int $tmp1122 = (frost$core$Int) {1u};
ITable* $tmp1123 = $tmp1116->$class->itable;
while ($tmp1123->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1123 = $tmp1123->next;
}
$fn1125 $tmp1124 = $tmp1123->methods[0];
frost$core$Object* $tmp1126 = $tmp1124($tmp1116, $tmp1122);
frost$core$Bit $tmp1127 = (frost$core$Bit) {((frost$core$String*) $tmp1126) != NULL};
bool $tmp1128 = $tmp1127.value;
if ($tmp1128) goto block41; else goto block42;
block42:;
frost$core$Int $tmp1129 = (frost$core$Int) {179u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1130, $tmp1129, &$s1131);
abort(); // unreachable
block41:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp1126)));
frost$core$String* $tmp1132 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
*(&local1) = ((frost$core$String*) $tmp1126);
frost$core$Frost$unref$frost$core$Object$Q($tmp1126);
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:181
frost$io$OutputStream** $tmp1133 = &param0->out;
frost$io$OutputStream* $tmp1134 = *$tmp1133;
$fn1136 $tmp1135 = ($fn1136) $tmp1134->$class->vtable[19];
frost$core$Error* $tmp1137 = $tmp1135($tmp1134, &$s1138);
if ($tmp1137 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$core$Bit $tmp1139 = (frost$core$Bit) {$tmp1137 != NULL};
bool $tmp1140 = $tmp1139.value;
if ($tmp1140) goto block45; else goto block46;
block46:;
frost$core$Int $tmp1141 = (frost$core$Int) {181u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1142, $tmp1141, &$s1143);
abort(); // unreachable
block45:;
*(&local0) = $tmp1137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$collections$ListView* $tmp1144 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1145 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$String* $tmp1146 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:182
frost$io$OutputStream** $tmp1147 = &param0->out;
frost$io$OutputStream* $tmp1148 = *$tmp1147;
org$frostlang$frostc$Annotations** $tmp1149 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1150 = *$tmp1149;
$fn1152 $tmp1151 = ($fn1152) $tmp1148->$class->vtable[18];
frost$core$Error* $tmp1153 = $tmp1151($tmp1148, ((frost$core$Object*) $tmp1150));
if ($tmp1153 == NULL) goto block47; else goto block48;
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
frost$core$Bit $tmp1154 = (frost$core$Bit) {$tmp1153 != NULL};
bool $tmp1155 = $tmp1154.value;
if ($tmp1155) goto block49; else goto block50;
block50:;
frost$core$Int $tmp1156 = (frost$core$Int) {182u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1157, $tmp1156, &$s1158);
abort(); // unreachable
block49:;
*(&local0) = $tmp1153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
frost$collections$ListView* $tmp1159 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1160 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$String* $tmp1161 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:183
org$frostlang$frostc$ClassDecl$Kind* $tmp1162 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1163 = *$tmp1162;
frost$core$Int $tmp1164 = $tmp1163.$rawValue;
frost$core$Int $tmp1165 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:184:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1166 = $tmp1164.value;
int64_t $tmp1167 = $tmp1165.value;
bool $tmp1168 = $tmp1166 == $tmp1167;
frost$core$Bit $tmp1169 = (frost$core$Bit) {$tmp1168};
bool $tmp1170 = $tmp1169.value;
if ($tmp1170) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:184
frost$io$OutputStream** $tmp1171 = &param0->out;
frost$io$OutputStream* $tmp1172 = *$tmp1171;
$fn1174 $tmp1173 = ($fn1174) $tmp1172->$class->vtable[17];
frost$core$Error* $tmp1175 = $tmp1173($tmp1172, &$s1176);
if ($tmp1175 == NULL) goto block55; else goto block56;
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
frost$core$Bit $tmp1177 = (frost$core$Bit) {$tmp1175 != NULL};
bool $tmp1178 = $tmp1177.value;
if ($tmp1178) goto block57; else goto block58;
block58:;
frost$core$Int $tmp1179 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1180, $tmp1179, &$s1181);
abort(); // unreachable
block57:;
*(&local0) = $tmp1175;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
frost$collections$ListView* $tmp1182 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1183 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$String* $tmp1184 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
goto block51;
block53:;
frost$core$Int $tmp1185 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:185:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1186 = $tmp1164.value;
int64_t $tmp1187 = $tmp1185.value;
bool $tmp1188 = $tmp1186 == $tmp1187;
frost$core$Bit $tmp1189 = (frost$core$Bit) {$tmp1188};
bool $tmp1190 = $tmp1189.value;
if ($tmp1190) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:185
frost$io$OutputStream** $tmp1191 = &param0->out;
frost$io$OutputStream* $tmp1192 = *$tmp1191;
$fn1194 $tmp1193 = ($fn1194) $tmp1192->$class->vtable[17];
frost$core$Error* $tmp1195 = $tmp1193($tmp1192, &$s1196);
if ($tmp1195 == NULL) goto block62; else goto block63;
block63:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$core$Bit $tmp1197 = (frost$core$Bit) {$tmp1195 != NULL};
bool $tmp1198 = $tmp1197.value;
if ($tmp1198) goto block64; else goto block65;
block65:;
frost$core$Int $tmp1199 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1200, $tmp1199, &$s1201);
abort(); // unreachable
block64:;
*(&local0) = $tmp1195;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$collections$ListView* $tmp1202 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1203 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$String* $tmp1204 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block62:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
goto block51;
block60:;
frost$core$Int $tmp1205 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:186:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1206 = $tmp1164.value;
int64_t $tmp1207 = $tmp1205.value;
bool $tmp1208 = $tmp1206 == $tmp1207;
frost$core$Bit $tmp1209 = (frost$core$Bit) {$tmp1208};
bool $tmp1210 = $tmp1209.value;
if ($tmp1210) goto block66; else goto block51;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:186
frost$io$OutputStream** $tmp1211 = &param0->out;
frost$io$OutputStream* $tmp1212 = *$tmp1211;
$fn1214 $tmp1213 = ($fn1214) $tmp1212->$class->vtable[17];
frost$core$Error* $tmp1215 = $tmp1213($tmp1212, &$s1216);
if ($tmp1215 == NULL) goto block68; else goto block69;
block69:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$Bit $tmp1217 = (frost$core$Bit) {$tmp1215 != NULL};
bool $tmp1218 = $tmp1217.value;
if ($tmp1218) goto block70; else goto block71;
block71:;
frost$core$Int $tmp1219 = (frost$core$Int) {186u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1220, $tmp1219, &$s1221);
abort(); // unreachable
block70:;
*(&local0) = $tmp1215;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$collections$ListView* $tmp1222 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1223 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$String* $tmp1224 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
goto block51;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:188
frost$io$OutputStream** $tmp1225 = &param0->out;
frost$io$OutputStream* $tmp1226 = *$tmp1225;
frost$core$String* $tmp1227 = *(&local1);
$fn1229 $tmp1228 = ($fn1229) $tmp1226->$class->vtable[17];
frost$core$Error* $tmp1230 = $tmp1228($tmp1226, $tmp1227);
if ($tmp1230 == NULL) goto block72; else goto block73;
block73:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
frost$core$Bit $tmp1231 = (frost$core$Bit) {$tmp1230 != NULL};
bool $tmp1232 = $tmp1231.value;
if ($tmp1232) goto block74; else goto block75;
block75:;
frost$core$Int $tmp1233 = (frost$core$Int) {188u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1234, $tmp1233, &$s1235);
abort(); // unreachable
block74:;
*(&local0) = $tmp1230;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
frost$collections$ListView* $tmp1236 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1237 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$String* $tmp1238 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block72:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:189
frost$collections$List** $tmp1239 = &param1->parameters;
frost$collections$List* $tmp1240 = *$tmp1239;
ITable* $tmp1241 = ((frost$collections$CollectionView*) $tmp1240)->$class->itable;
while ($tmp1241->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1241 = $tmp1241->next;
}
$fn1243 $tmp1242 = $tmp1241->methods[0];
frost$core$Int $tmp1244 = $tmp1242(((frost$collections$CollectionView*) $tmp1240));
frost$core$Int $tmp1245 = (frost$core$Int) {0u};
int64_t $tmp1246 = $tmp1244.value;
int64_t $tmp1247 = $tmp1245.value;
bool $tmp1248 = $tmp1246 > $tmp1247;
frost$core$Bit $tmp1249 = (frost$core$Bit) {$tmp1248};
bool $tmp1250 = $tmp1249.value;
if ($tmp1250) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:190
frost$io$OutputStream** $tmp1251 = &param0->out;
frost$io$OutputStream* $tmp1252 = *$tmp1251;
frost$collections$List** $tmp1253 = &param1->parameters;
frost$collections$List* $tmp1254 = *$tmp1253;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure12));
org$frostlang$frostc$StubCodeGenerator$_Closure12* $tmp1255 = (org$frostlang$frostc$StubCodeGenerator$_Closure12*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure12$class);
org$frostlang$frostc$StubCodeGenerator$_Closure12$init$org$frostlang$frostc$StubCodeGenerator($tmp1255, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1257 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:191:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1258 = &$tmp1257->pointer;
*$tmp1258 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure12$$anonymous11$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$core$Object** $tmp1259 = &$tmp1257->target;
frost$core$Object* $tmp1260 = *$tmp1259;
frost$core$Frost$unref$frost$core$Object$Q($tmp1260);
frost$core$Object** $tmp1261 = &$tmp1257->target;
*$tmp1261 = ((frost$core$Object*) $tmp1255);
ITable* $tmp1262 = ((frost$collections$CollectionView*) $tmp1254)->$class->itable;
while ($tmp1262->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1262 = $tmp1262->next;
}
$fn1264 $tmp1263 = $tmp1262->methods[9];
frost$collections$Array* $tmp1265 = $tmp1263(((frost$collections$CollectionView*) $tmp1254), $tmp1257);
ITable* $tmp1266 = ((frost$collections$CollectionView*) $tmp1265)->$class->itable;
while ($tmp1266->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1266 = $tmp1266->next;
}
$fn1268 $tmp1267 = $tmp1266->methods[3];
frost$core$String* $tmp1269 = $tmp1267(((frost$collections$CollectionView*) $tmp1265), &$s1270);
frost$core$String* $tmp1271 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1272, $tmp1269);
frost$core$String* $tmp1273 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1271, &$s1274);
$fn1276 $tmp1275 = ($fn1276) $tmp1252->$class->vtable[17];
frost$core$Error* $tmp1277 = $tmp1275($tmp1252, $tmp1273);
if ($tmp1277 == NULL) goto block79; else goto block80;
block80:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
frost$core$Bit $tmp1278 = (frost$core$Bit) {$tmp1277 != NULL};
bool $tmp1279 = $tmp1278.value;
if ($tmp1279) goto block81; else goto block82;
block82:;
frost$core$Int $tmp1280 = (frost$core$Int) {190u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1281, $tmp1280, &$s1282);
abort(); // unreachable
block81:;
*(&local0) = $tmp1277;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$collections$ListView* $tmp1283 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1283));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1284 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1284));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$String* $tmp1285 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block79:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1277));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1265));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
goto block77;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:193
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1286));
frost$core$String* $tmp1287 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1287));
*(&local7) = &$s1288;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:194
org$frostlang$frostc$ClassDecl$Kind* $tmp1289 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1290 = *$tmp1289;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1291;
$tmp1291 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1291->value = $tmp1290;
frost$core$Int $tmp1292 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from StubCodeGenerator.frost:194:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp1293 = &(&local9)->$rawValue;
*$tmp1293 = $tmp1292;
org$frostlang$frostc$ClassDecl$Kind $tmp1294 = *(&local9);
*(&local8) = $tmp1294;
org$frostlang$frostc$ClassDecl$Kind $tmp1295 = *(&local8);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1296;
$tmp1296 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1296->value = $tmp1295;
ITable* $tmp1297 = ((frost$core$Equatable*) $tmp1291)->$class->itable;
while ($tmp1297->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1297 = $tmp1297->next;
}
$fn1299 $tmp1298 = $tmp1297->methods[1];
frost$core$Bit $tmp1300 = $tmp1298(((frost$core$Equatable*) $tmp1291), ((frost$core$Equatable*) $tmp1296));
bool $tmp1301 = $tmp1300.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1296)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1291)));
if ($tmp1301) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:195
org$frostlang$frostc$Type** $tmp1302 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp1303 = *$tmp1302;
frost$core$Bit $tmp1304 = (frost$core$Bit) {$tmp1303 != NULL};
bool $tmp1305 = $tmp1304.value;
if ($tmp1305) goto block88; else goto block87;
block88:;
org$frostlang$frostc$ClassDecl$Kind* $tmp1306 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1307 = *$tmp1306;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1308;
$tmp1308 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1308->value = $tmp1307;
frost$core$Int $tmp1309 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from StubCodeGenerator.frost:195:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp1310 = &(&local11)->$rawValue;
*$tmp1310 = $tmp1309;
org$frostlang$frostc$ClassDecl$Kind $tmp1311 = *(&local11);
*(&local10) = $tmp1311;
org$frostlang$frostc$ClassDecl$Kind $tmp1312 = *(&local10);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1313;
$tmp1313 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1313->value = $tmp1312;
ITable* $tmp1314 = ((frost$core$Equatable*) $tmp1308)->$class->itable;
while ($tmp1314->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1314 = $tmp1314->next;
}
$fn1316 $tmp1315 = $tmp1314->methods[1];
frost$core$Bit $tmp1317 = $tmp1315(((frost$core$Equatable*) $tmp1308), ((frost$core$Equatable*) $tmp1313));
bool $tmp1318 = $tmp1317.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1313)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1308)));
if ($tmp1318) goto block86; else goto block87;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:196
frost$io$OutputStream** $tmp1319 = &param0->out;
frost$io$OutputStream* $tmp1320 = *$tmp1319;
frost$core$String* $tmp1321 = *(&local7);
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:196:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$core$String* $tmp1322 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1321, &$s1323);
org$frostlang$frostc$Type** $tmp1324 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp1325 = *$tmp1324;
frost$core$Bit $tmp1326 = (frost$core$Bit) {$tmp1325 != NULL};
bool $tmp1327 = $tmp1326.value;
if ($tmp1327) goto block91; else goto block92;
block92:;
frost$core$Int $tmp1328 = (frost$core$Int) {196u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1329, $tmp1328, &$s1330);
abort(); // unreachable
block91:;
frost$core$String* $tmp1331 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1325);
frost$core$String* $tmp1332 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1322, $tmp1331);
frost$core$String* $tmp1333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1332, &$s1334);
$fn1336 $tmp1335 = ($fn1336) $tmp1320->$class->vtable[17];
frost$core$Error* $tmp1337 = $tmp1335($tmp1320, $tmp1333);
if ($tmp1337 == NULL) goto block93; else goto block94;
block94:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$core$Bit $tmp1338 = (frost$core$Bit) {$tmp1337 != NULL};
bool $tmp1339 = $tmp1338.value;
if ($tmp1339) goto block95; else goto block96;
block96:;
frost$core$Int $tmp1340 = (frost$core$Int) {196u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1341, $tmp1340, &$s1342);
abort(); // unreachable
block95:;
*(&local0) = $tmp1337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
frost$core$String* $tmp1343 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1344 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1345 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$String* $tmp1346 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block93:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1321));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:197
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1347));
frost$core$String* $tmp1348 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
*(&local7) = &$s1349;
goto block87;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:199
frost$collections$Array** $tmp1350 = &param1->rawInterfaces;
frost$collections$Array* $tmp1351 = *$tmp1350;
ITable* $tmp1352 = ((frost$collections$Iterable*) $tmp1351)->$class->itable;
while ($tmp1352->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1352 = $tmp1352->next;
}
$fn1354 $tmp1353 = $tmp1352->methods[0];
frost$collections$Iterator* $tmp1355 = $tmp1353(((frost$collections$Iterable*) $tmp1351));
goto block97;
block97:;
ITable* $tmp1356 = $tmp1355->$class->itable;
while ($tmp1356->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1356 = $tmp1356->next;
}
$fn1358 $tmp1357 = $tmp1356->methods[0];
frost$core$Bit $tmp1359 = $tmp1357($tmp1355);
bool $tmp1360 = $tmp1359.value;
if ($tmp1360) goto block99; else goto block98;
block98:;
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1361 = $tmp1355->$class->itable;
while ($tmp1361->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1361 = $tmp1361->next;
}
$fn1363 $tmp1362 = $tmp1361->methods[1];
frost$core$Object* $tmp1364 = $tmp1362($tmp1355);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1364)));
org$frostlang$frostc$Type* $tmp1365 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1365));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp1364);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:200
frost$io$OutputStream** $tmp1366 = &param0->out;
frost$io$OutputStream* $tmp1367 = *$tmp1366;
frost$core$String* $tmp1368 = *(&local7);
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:200:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
frost$core$String* $tmp1369 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1368, &$s1370);
org$frostlang$frostc$Type* $tmp1371 = *(&local12);
frost$core$String* $tmp1372 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1371);
frost$core$String* $tmp1373 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1369, $tmp1372);
frost$core$String* $tmp1374 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1373, &$s1375);
$fn1377 $tmp1376 = ($fn1377) $tmp1367->$class->vtable[17];
frost$core$Error* $tmp1378 = $tmp1376($tmp1367, $tmp1374);
if ($tmp1378 == NULL) goto block101; else goto block102;
block102:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$Bit $tmp1379 = (frost$core$Bit) {$tmp1378 != NULL};
bool $tmp1380 = $tmp1379.value;
if ($tmp1380) goto block103; else goto block104;
block104:;
frost$core$Int $tmp1381 = (frost$core$Int) {200u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1382, $tmp1381, &$s1383);
abort(); // unreachable
block103:;
*(&local0) = $tmp1378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
frost$core$Frost$unref$frost$core$Object$Q($tmp1364);
org$frostlang$frostc$Type* $tmp1384 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$core$String* $tmp1385 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1385));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1386 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1386));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1387 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1387));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$String* $tmp1388 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block101:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:201
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1389));
frost$core$String* $tmp1390 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
*(&local7) = &$s1391;
frost$core$Frost$unref$frost$core$Object$Q($tmp1364);
org$frostlang$frostc$Type* $tmp1392 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
goto block97;
block99:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
goto block84;
block84:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:204
frost$io$OutputStream** $tmp1393 = &param0->out;
frost$io$OutputStream* $tmp1394 = *$tmp1393;
$fn1396 $tmp1395 = ($fn1396) $tmp1394->$class->vtable[17];
frost$core$Error* $tmp1397 = $tmp1395($tmp1394, &$s1398);
if ($tmp1397 == NULL) goto block105; else goto block106;
block106:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
frost$core$Bit $tmp1399 = (frost$core$Bit) {$tmp1397 != NULL};
bool $tmp1400 = $tmp1399.value;
if ($tmp1400) goto block107; else goto block108;
block108:;
frost$core$Int $tmp1401 = (frost$core$Int) {204u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1402, $tmp1401, &$s1403);
abort(); // unreachable
block107:;
*(&local0) = $tmp1397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
frost$core$String* $tmp1404 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1404));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1405 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1405));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1406 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1406));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$String* $tmp1407 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block105:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:205
frost$collections$Array** $tmp1408 = &param1->choiceCases;
frost$collections$Array* $tmp1409 = *$tmp1408;
ITable* $tmp1410 = ((frost$collections$Iterable*) $tmp1409)->$class->itable;
while ($tmp1410->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1410 = $tmp1410->next;
}
$fn1412 $tmp1411 = $tmp1410->methods[0];
frost$collections$Iterator* $tmp1413 = $tmp1411(((frost$collections$Iterable*) $tmp1409));
goto block109;
block109:;
ITable* $tmp1414 = $tmp1413->$class->itable;
while ($tmp1414->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1414 = $tmp1414->next;
}
$fn1416 $tmp1415 = $tmp1414->methods[0];
frost$core$Bit $tmp1417 = $tmp1415($tmp1413);
bool $tmp1418 = $tmp1417.value;
if ($tmp1418) goto block111; else goto block110;
block110:;
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp1419 = $tmp1413->$class->itable;
while ($tmp1419->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1419 = $tmp1419->next;
}
$fn1421 $tmp1420 = $tmp1419->methods[1];
frost$core$Object* $tmp1422 = $tmp1420($tmp1413);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp1422)));
org$frostlang$frostc$ChoiceCase* $tmp1423 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) $tmp1422);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:206
org$frostlang$frostc$ChoiceCase* $tmp1424 = *(&local13);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(param0, $tmp1424);
frost$core$Frost$unref$frost$core$Object$Q($tmp1422);
org$frostlang$frostc$ChoiceCase* $tmp1425 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block109;
block111:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:208
frost$collections$Array** $tmp1426 = &param1->classes;
frost$collections$Array* $tmp1427 = *$tmp1426;
ITable* $tmp1428 = ((frost$collections$Iterable*) $tmp1427)->$class->itable;
while ($tmp1428->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1428 = $tmp1428->next;
}
$fn1430 $tmp1429 = $tmp1428->methods[0];
frost$collections$Iterator* $tmp1431 = $tmp1429(((frost$collections$Iterable*) $tmp1427));
goto block112;
block112:;
ITable* $tmp1432 = $tmp1431->$class->itable;
while ($tmp1432->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1432 = $tmp1432->next;
}
$fn1434 $tmp1433 = $tmp1432->methods[0];
frost$core$Bit $tmp1435 = $tmp1433($tmp1431);
bool $tmp1436 = $tmp1435.value;
if ($tmp1436) goto block114; else goto block113;
block113:;
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1437 = $tmp1431->$class->itable;
while ($tmp1437->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1437 = $tmp1437->next;
}
$fn1439 $tmp1438 = $tmp1437->methods[1];
frost$core$Object* $tmp1440 = $tmp1438($tmp1431);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1440)));
org$frostlang$frostc$ClassDecl* $tmp1441 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1441));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) $tmp1440);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:209
org$frostlang$frostc$ClassDecl* $tmp1442 = *(&local14);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl(param0, $tmp1442);
frost$core$Frost$unref$frost$core$Object$Q($tmp1440);
org$frostlang$frostc$ClassDecl* $tmp1443 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1443));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block112;
block114:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:211
frost$collections$Array** $tmp1444 = &param1->fields;
frost$collections$Array* $tmp1445 = *$tmp1444;
ITable* $tmp1446 = ((frost$collections$Iterable*) $tmp1445)->$class->itable;
while ($tmp1446->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1446 = $tmp1446->next;
}
$fn1448 $tmp1447 = $tmp1446->methods[0];
frost$collections$Iterator* $tmp1449 = $tmp1447(((frost$collections$Iterable*) $tmp1445));
goto block115;
block115:;
ITable* $tmp1450 = $tmp1449->$class->itable;
while ($tmp1450->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1450 = $tmp1450->next;
}
$fn1452 $tmp1451 = $tmp1450->methods[0];
frost$core$Bit $tmp1453 = $tmp1451($tmp1449);
bool $tmp1454 = $tmp1453.value;
if ($tmp1454) goto block117; else goto block116;
block116:;
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp1455 = $tmp1449->$class->itable;
while ($tmp1455->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1455 = $tmp1455->next;
}
$fn1457 $tmp1456 = $tmp1455->methods[1];
frost$core$Object* $tmp1458 = $tmp1456($tmp1449);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp1458)));
org$frostlang$frostc$FieldDecl* $tmp1459 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1459));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) $tmp1458);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:212
org$frostlang$frostc$FieldDecl* $tmp1460 = *(&local15);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(param0, $tmp1460);
frost$core$Frost$unref$frost$core$Object$Q($tmp1458);
org$frostlang$frostc$FieldDecl* $tmp1461 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1461));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block115;
block117:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:214
frost$collections$Array** $tmp1462 = &param1->methods;
frost$collections$Array* $tmp1463 = *$tmp1462;
ITable* $tmp1464 = ((frost$collections$Iterable*) $tmp1463)->$class->itable;
while ($tmp1464->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1464 = $tmp1464->next;
}
$fn1466 $tmp1465 = $tmp1464->methods[0];
frost$collections$Iterator* $tmp1467 = $tmp1465(((frost$collections$Iterable*) $tmp1463));
goto block118;
block118:;
ITable* $tmp1468 = $tmp1467->$class->itable;
while ($tmp1468->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1468 = $tmp1468->next;
}
$fn1470 $tmp1469 = $tmp1468->methods[0];
frost$core$Bit $tmp1471 = $tmp1469($tmp1467);
bool $tmp1472 = $tmp1471.value;
if ($tmp1472) goto block120; else goto block119;
block119:;
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1473 = $tmp1467->$class->itable;
while ($tmp1473->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1473 = $tmp1473->next;
}
$fn1475 $tmp1474 = $tmp1473->methods[1];
frost$core$Object* $tmp1476 = $tmp1474($tmp1467);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1476)));
org$frostlang$frostc$MethodDecl* $tmp1477 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1477));
*(&local16) = ((org$frostlang$frostc$MethodDecl*) $tmp1476);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:215
org$frostlang$frostc$MethodDecl* $tmp1478 = *(&local16);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(param0, $tmp1478);
frost$core$Frost$unref$frost$core$Object$Q($tmp1476);
org$frostlang$frostc$MethodDecl* $tmp1479 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1479));
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block118;
block120:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1467));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:217
frost$io$OutputStream** $tmp1480 = &param0->out;
frost$io$OutputStream* $tmp1481 = *$tmp1480;
$fn1483 $tmp1482 = ($fn1483) $tmp1481->$class->vtable[17];
frost$core$Error* $tmp1484 = $tmp1482($tmp1481, &$s1485);
if ($tmp1484 == NULL) goto block121; else goto block122;
block122:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
frost$core$Bit $tmp1486 = (frost$core$Bit) {$tmp1484 != NULL};
bool $tmp1487 = $tmp1486.value;
if ($tmp1487) goto block123; else goto block124;
block124:;
frost$core$Int $tmp1488 = (frost$core$Int) {217u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1489, $tmp1488, &$s1490);
abort(); // unreachable
block123:;
*(&local0) = $tmp1484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
frost$core$String* $tmp1491 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1491));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1492 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1492));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1493 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1493));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$String* $tmp1494 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1494));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block121:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1484));
frost$core$String* $tmp1495 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1495));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1496 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1496));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1497 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1497));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$String* $tmp1498 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1498));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp1499 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1499));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:220
frost$core$Error* $tmp1500 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:220:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn1502 $tmp1501 = ($fn1502) ((frost$core$Object*) $tmp1500)->$class->vtable[0];
frost$core$String* $tmp1503 = $tmp1501(((frost$core$Object*) $tmp1500));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1503);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1503));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:221
frost$core$Int $tmp1504 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1504);
frost$core$Int $tmp1505 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1506, $tmp1505, &$s1507);
abort(); // unreachable

}
void org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:227
frost$core$Weak** $tmp1508 = &param1->owner;
frost$core$Weak* $tmp1509 = *$tmp1508;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:227:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1510 = &$tmp1509->_valid;
frost$core$Bit $tmp1511 = *$tmp1510;
bool $tmp1512 = $tmp1511.value;
if ($tmp1512) goto block6; else goto block7;
block7:;
frost$core$Int $tmp1513 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1514, $tmp1513);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1515 = &$tmp1509->value;
frost$core$Object* $tmp1516 = *$tmp1515;
frost$core$Frost$ref$frost$core$Object$Q($tmp1516);
frost$core$Bit $tmp1517 = (frost$core$Bit) {((org$frostlang$frostc$ClassDecl*) $tmp1516) == NULL};
bool $tmp1518 = $tmp1517.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1516);
if ($tmp1518) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Annotations** $tmp1519 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1520 = *$tmp1519;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from StubCodeGenerator.frost:227:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:158
frost$core$Int* $tmp1521 = &$tmp1520->flags;
frost$core$Int $tmp1522 = *$tmp1521;
frost$core$Int $tmp1523 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1524 = $tmp1522.value;
int64_t $tmp1525 = $tmp1523.value;
int64_t $tmp1526 = $tmp1524 & $tmp1525;
frost$core$Int $tmp1527 = (frost$core$Int) {$tmp1526};
frost$core$Int $tmp1528 = (frost$core$Int) {0u};
int64_t $tmp1529 = $tmp1527.value;
int64_t $tmp1530 = $tmp1528.value;
bool $tmp1531 = $tmp1529 != $tmp1530;
frost$core$Bit $tmp1532 = (frost$core$Bit) {$tmp1531};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:227:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1533 = $tmp1532.value;
bool $tmp1534 = !$tmp1533;
frost$core$Bit $tmp1535 = (frost$core$Bit) {$tmp1534};
bool $tmp1536 = $tmp1535.value;
if ($tmp1536) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:228
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl(param0, param1);
goto block2;
block2:;
return;

}
void org$frostlang$frostc$StubCodeGenerator$end$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

return;

}
void org$frostlang$frostc$StubCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1, org$frostlang$frostc$IR* param2) {

return;

}
void org$frostlang$frostc$StubCodeGenerator$finish(org$frostlang$frostc$StubCodeGenerator* param0) {

return;

}
void org$frostlang$frostc$StubCodeGenerator$cleanup(org$frostlang$frostc$StubCodeGenerator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp1537 = &param0->compiler;
frost$core$Weak* $tmp1538 = *$tmp1537;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1538));
frost$io$OutputStream** $tmp1539 = &param0->out;
frost$io$OutputStream* $tmp1540 = *$tmp1539;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1540));
return;

}

