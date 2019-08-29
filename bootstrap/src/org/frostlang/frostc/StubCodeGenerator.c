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
typedef frost$core$Bit (*$fn80)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$ListView* (*$fn153)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$Q$GT);
typedef frost$core$String* (*$fn156)(org$frostlang$frostc$StubCodeGenerator$_Closure4*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn164)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn168)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn188)(org$frostlang$frostc$StubCodeGenerator$_Closure6*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn196)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn200)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn292)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn303)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn316)(org$frostlang$frostc$StubCodeGenerator$_Closure8*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn324)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn328)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn336)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn346)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn356)(frost$core$Object*);
typedef frost$core$Error* (*$fn403)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn420)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn437)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn454)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn467)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn477)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn491)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn508)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn514)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn527)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn537)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn547)(frost$core$Object*);
typedef frost$core$Error* (*$fn587)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn606)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn623)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn644)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn660)(org$frostlang$frostc$StubCodeGenerator$_Closure10*, org$frostlang$frostc$MethodDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn668)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn672)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn680)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn690)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn705)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn709)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn714)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn736)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn752)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn771)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn795)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn819)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn832)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn858)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn871)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn875)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn880)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn887)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn900)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn927)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn940)(frost$core$Object*);
typedef frost$core$Object* (*$fn1044)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Error* (*$fn1051)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Object* (*$fn1065)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Error* (*$fn1071)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1087)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn1109)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1129)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1149)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1164)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int (*$fn1178)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1191)(org$frostlang$frostc$StubCodeGenerator$_Closure12*, org$frostlang$frostc$ClassDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn1199)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn1203)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn1211)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1234)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1251)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1266)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1284)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1288)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1293)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1307)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1326)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1342)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1346)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1351)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1360)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1364)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1369)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1378)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1382)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1387)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1396)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1400)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1405)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1413)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1432)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 38, 5549150769695652918, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s147 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, -5808603052642294482, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e", 3, 7580368616763478972, NULL };
static frost$core$String $s251 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s254 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 8523082171760740322, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e", 2, 578299168842724610, NULL };
static frost$core$String $s281 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, -6889415344013242207, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x54\x79\x70\x65\x3e", 155, 85577287644488619, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 7588087188392006392, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 4850958444317981178, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x66\x20", 4, -6503404126614323964, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, -1568754217983211905, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s444 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 8604313941350852984, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s461 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s472 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 6240486548179417074, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s533 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, -7952910774154584656, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 7226600790104464427, NULL };
static frost$core$String $s629 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s649 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s678 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s685 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s692 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, -5808617346293461225, NULL };
static frost$core$String $s696 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s700 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s721 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s727 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s734 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s742 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s745 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s747 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s758 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s759 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s797 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b\x7d", 2, 645223143103797797, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s812 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s828 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s830 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s837 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s864 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s892 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s893 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s902 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s929 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b\x7d", 2, 645223143103797797, NULL };
static frost$core$String $s933 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s934 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s944 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s945 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s952 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s967 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x3f\x3a\x5c\x77\x7c\x5c\x2e\x29\x2b\x29\x5c\x2e\x28\x5c\x77\x2b\x29", 19, 8050544140155638463, NULL };
static frost$core$String $s1033 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };
static frost$core$String $s1047 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x61\x63\x6b\x61\x67\x65\x20", 8, 4078896108040932673, NULL };
static frost$core$String $s1049 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1056 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1057 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1073 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, -3042048522538760153, NULL };
static frost$core$String $s1077 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1078 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1092 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1093 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 1485954231735473549, NULL };
static frost$core$String $s1115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1116 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, -8457991779168398576, NULL };
static frost$core$String $s1135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1136 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 8239240588283385762, NULL };
static frost$core$String $s1155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1156 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1205 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s1207 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s1209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s1216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1217 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1300 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1305 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1321 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, -5808621744339974069, NULL };
static frost$core$String $s1328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, -5808528285851576134, NULL };
static frost$core$String $s1332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, -5808534882921345400, NULL };
static frost$core$String $s1419 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1420 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s1436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3709142759931816013, NULL };
static frost$core$String $s1437 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };
static frost$core$String $s1444 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, -4036851284011595059, NULL };

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
org$frostlang$frostc$Type** $tmp76 = &((org$frostlang$frostc$Compiler*) $tmp75)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp77 = *$tmp76;
ITable* $tmp78 = ((frost$core$Equatable*) $tmp66)->$class->itable;
while ($tmp78->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp78 = $tmp78->next;
}
$fn80 $tmp79 = $tmp78->methods[1];
frost$core$Bit $tmp81 = $tmp79(((frost$core$Equatable*) $tmp66), ((frost$core$Equatable*) $tmp77));
bool $tmp82 = $tmp81.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp75);
if ($tmp82) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:24
frost$core$String* $tmp83 = *(&local0);
org$frostlang$frostc$Type* $tmp84 = *(&local1);
frost$core$String* $tmp85 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp84);
frost$core$String* $tmp86 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp83, $tmp85);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$String* $tmp87 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local0) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:26
frost$core$String* $tmp88 = *(&local0);
frost$core$String* $tmp89 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp88, &$s90);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
org$frostlang$frostc$Type* $tmp91 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp92 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local0) = ((frost$core$String*) NULL);
return $tmp89;

}
frost$core$String* org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:30
org$frostlang$frostc$Type$Kind* $tmp93 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp94 = *$tmp93;
frost$core$Int $tmp95 = $tmp94.$rawValue;
frost$core$Int $tmp96 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:31:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96.value;
bool $tmp99 = $tmp97 == $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block2; else goto block3;
block3:;
frost$core$Int $tmp102 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:31:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp103 = $tmp95.value;
int64_t $tmp104 = $tmp102.value;
bool $tmp105 = $tmp103 == $tmp104;
frost$core$Bit $tmp106 = (frost$core$Bit) {$tmp105};
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block2; else goto block5;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:32
frost$core$String** $tmp108 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp109 = *$tmp108;
frost$core$String** $tmp110 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp111 = *$tmp110;
frost$core$String** $tmp112 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp113 = *$tmp112;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from StubCodeGenerator.frost:32:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.frost:1012:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
frost$core$Int* $tmp114 = &$tmp113->_length;
frost$core$Int $tmp115 = *$tmp114;
frost$core$String$Index $tmp116 = frost$core$String$Index$init$frost$core$Int($tmp115);
frost$core$String$Index$nullable $tmp117 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp113, &$s118, $tmp116);
frost$core$String$Index $tmp119 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp111, ((frost$core$String$Index) $tmp117.value));
frost$core$Bit $tmp120 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp121 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp119, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp120);
frost$core$String* $tmp122 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp109, $tmp121);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
return $tmp122;
block5:;
frost$core$Int $tmp123 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:34:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp124 = $tmp95.value;
int64_t $tmp125 = $tmp123.value;
bool $tmp126 = $tmp124 == $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:35
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:35:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp129 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp130 = *$tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130 != NULL};
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block13; else goto block14;
block14:;
frost$core$Int $tmp133 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s134, $tmp133, &$s135);
abort(); // unreachable
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Int $tmp136 = (frost$core$Int) {0u};
frost$core$Object* $tmp137 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp130, $tmp136);
frost$core$String* $tmp138 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp137));
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:35:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$String* $tmp139 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp138, &$s140);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:35:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp141 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp142 = *$tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142 != NULL};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block17; else goto block18;
block18:;
frost$core$Int $tmp145 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s146, $tmp145, &$s147);
abort(); // unreachable
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Int $tmp148 = (frost$core$Int) {1u};
frost$core$Bit $tmp149 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp150 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp148, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp149);
ITable* $tmp151 = ((frost$collections$ListView*) $tmp142)->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[2];
frost$collections$ListView* $tmp154 = $tmp152(((frost$collections$ListView*) $tmp142), $tmp150);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure4));
org$frostlang$frostc$StubCodeGenerator$_Closure4* $tmp155 = (org$frostlang$frostc$StubCodeGenerator$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure4$class);
org$frostlang$frostc$StubCodeGenerator$_Closure4$init$org$frostlang$frostc$StubCodeGenerator($tmp155, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp157 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:35:71
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp158 = &$tmp157->pointer;
*$tmp158 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure4$$anonymous3$org$frostlang$frostc$Type$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Object** $tmp159 = &$tmp157->target;
frost$core$Object* $tmp160 = *$tmp159;
frost$core$Frost$unref$frost$core$Object$Q($tmp160);
frost$core$Object** $tmp161 = &$tmp157->target;
*$tmp161 = ((frost$core$Object*) $tmp155);
ITable* $tmp162 = ((frost$collections$CollectionView*) $tmp154)->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[9];
frost$collections$Array* $tmp165 = $tmp163(((frost$collections$CollectionView*) $tmp154), $tmp157);
ITable* $tmp166 = ((frost$collections$CollectionView*) $tmp165)->$class->itable;
while ($tmp166->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp166 = $tmp166->next;
}
$fn168 $tmp167 = $tmp166->methods[3];
frost$core$String* $tmp169 = $tmp167(((frost$collections$CollectionView*) $tmp165), &$s170);
frost$core$String* $tmp171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp139, $tmp169);
frost$core$String* $tmp172 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp171, &$s173);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q($tmp137);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
return $tmp172;
block10:;
frost$core$Int $tmp174 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:37:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp175 = $tmp95.value;
int64_t $tmp176 = $tmp174.value;
bool $tmp177 = $tmp175 == $tmp176;
frost$core$Bit $tmp178 = (frost$core$Bit) {$tmp177};
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:38
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:38:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp180 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp181 = *$tmp180;
frost$core$Bit $tmp182 = (frost$core$Bit) {$tmp181 != NULL};
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block24; else goto block25;
block25:;
frost$core$Int $tmp184 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s185, $tmp184, &$s186);
abort(); // unreachable
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure6));
org$frostlang$frostc$StubCodeGenerator$_Closure6* $tmp187 = (org$frostlang$frostc$StubCodeGenerator$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure6$class);
org$frostlang$frostc$StubCodeGenerator$_Closure6$init$org$frostlang$frostc$StubCodeGenerator($tmp187, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp189 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:38:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp190 = &$tmp189->pointer;
*$tmp190 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure6$$anonymous5$org$frostlang$frostc$Type$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Object** $tmp191 = &$tmp189->target;
frost$core$Object* $tmp192 = *$tmp191;
frost$core$Frost$unref$frost$core$Object$Q($tmp192);
frost$core$Object** $tmp193 = &$tmp189->target;
*$tmp193 = ((frost$core$Object*) $tmp187);
ITable* $tmp194 = ((frost$collections$CollectionView*) $tmp181)->$class->itable;
while ($tmp194->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp194 = $tmp194->next;
}
$fn196 $tmp195 = $tmp194->methods[9];
frost$collections$Array* $tmp197 = $tmp195(((frost$collections$CollectionView*) $tmp181), $tmp189);
ITable* $tmp198 = ((frost$collections$CollectionView*) $tmp197)->$class->itable;
while ($tmp198->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp198 = $tmp198->next;
}
$fn200 $tmp199 = $tmp198->methods[3];
frost$core$String* $tmp201 = $tmp199(((frost$collections$CollectionView*) $tmp197), &$s202);
frost$core$String* $tmp203 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s204, $tmp201);
frost$core$String* $tmp205 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp203, &$s206);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
return $tmp205;
block21:;
frost$core$Int $tmp207 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:40:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp208 = $tmp95.value;
int64_t $tmp209 = $tmp207.value;
bool $tmp210 = $tmp208 == $tmp209;
frost$core$Bit $tmp211 = (frost$core$Bit) {$tmp210};
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:41
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:41:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp213 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp214 = *$tmp213;
frost$core$Bit $tmp215 = (frost$core$Bit) {$tmp214 != NULL};
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block31; else goto block32;
block32:;
frost$core$Int $tmp217 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s218, $tmp217, &$s219);
abort(); // unreachable
block31:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
frost$core$Int $tmp220 = (frost$core$Int) {0u};
frost$core$Object* $tmp221 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T($tmp214, $tmp220);
frost$core$String* $tmp222 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp221));
frost$core$String* $tmp223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp222, &$s224);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
frost$core$Frost$unref$frost$core$Object$Q($tmp221);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
return $tmp223;
block28:;
frost$core$Int $tmp225 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:43:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp226 = $tmp95.value;
int64_t $tmp227 = $tmp225.value;
bool $tmp228 = $tmp226 == $tmp227;
frost$core$Bit $tmp229 = (frost$core$Bit) {$tmp228};
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:44
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:44:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp231 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp232 = *$tmp231;
frost$core$Bit $tmp233 = (frost$core$Bit) {$tmp232 != NULL};
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block37; else goto block38;
block38:;
frost$core$Int $tmp235 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s236, $tmp235, &$s237);
abort(); // unreachable
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$String* $tmp238 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp232), &$s239);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
return $tmp238;
block34:;
frost$core$Int $tmp240 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:46:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp241 = $tmp95.value;
int64_t $tmp242 = $tmp240.value;
bool $tmp243 = $tmp241 == $tmp242;
frost$core$Bit $tmp244 = (frost$core$Bit) {$tmp243};
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:47
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:47:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp246 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp247 = *$tmp246;
frost$core$Bit $tmp248 = (frost$core$Bit) {$tmp247 != NULL};
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block43; else goto block44;
block44:;
frost$core$Int $tmp250 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s251, $tmp250, &$s252);
abort(); // unreachable
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$String* $tmp253 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp247), &$s254);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
return $tmp253;
block40:;
frost$core$Int $tmp255 = (frost$core$Int) {15u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:49:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp256 = $tmp95.value;
int64_t $tmp257 = $tmp255.value;
bool $tmp258 = $tmp256 == $tmp257;
frost$core$Bit $tmp259 = (frost$core$Bit) {$tmp258};
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:50
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:50:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp261 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp262 = *$tmp261;
frost$core$Bit $tmp263 = (frost$core$Bit) {$tmp262 != NULL};
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block49; else goto block50;
block50:;
frost$core$Int $tmp265 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s266, $tmp265, &$s267);
abort(); // unreachable
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$core$String* $tmp268 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp262), &$s269);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
return $tmp268;
block46:;
frost$core$Int $tmp270 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:52:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp271 = $tmp95.value;
int64_t $tmp272 = $tmp270.value;
bool $tmp273 = $tmp271 == $tmp272;
frost$core$Bit $tmp274 = (frost$core$Bit) {$tmp273};
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:53
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:53:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp276 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp277 = *$tmp276;
frost$core$Bit $tmp278 = (frost$core$Bit) {$tmp277 != NULL};
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block55; else goto block56;
block56:;
frost$core$Int $tmp280 = (frost$core$Int) {242u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s281, $tmp280, &$s282);
abort(); // unreachable
block55:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
frost$core$String* $tmp283 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp277), &$s284);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp277));
return $tmp283;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:56
frost$core$String** $tmp285 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp286 = *$tmp285;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
return $tmp286;
block1:;
goto block57;
block57:;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ChoiceCase* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:62
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:63
frost$io$OutputStream** $tmp287 = &param0->out;
frost$io$OutputStream* $tmp288 = *$tmp287;
frost$core$String** $tmp289 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp290 = *$tmp289;
$fn292 $tmp291 = ($fn292) $tmp288->$class->vtable[17];
frost$core$Error* $tmp293 = $tmp291($tmp288, $tmp290);
if ($tmp293 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
frost$core$Bit $tmp294 = (frost$core$Bit) {$tmp293 != NULL};
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block5; else goto block6;
block6:;
frost$core$Int $tmp296 = (frost$core$Int) {63u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s297, $tmp296, &$s298);
abort(); // unreachable
block5:;
*(&local0) = $tmp293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:64
frost$collections$Array** $tmp299 = &param1->fields;
frost$collections$Array* $tmp300 = *$tmp299;
ITable* $tmp301 = ((frost$collections$CollectionView*) $tmp300)->$class->itable;
while ($tmp301->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp301 = $tmp301->next;
}
$fn303 $tmp302 = $tmp301->methods[0];
frost$core$Int $tmp304 = $tmp302(((frost$collections$CollectionView*) $tmp300));
frost$core$Int $tmp305 = (frost$core$Int) {0u};
int64_t $tmp306 = $tmp304.value;
int64_t $tmp307 = $tmp305.value;
bool $tmp308 = $tmp306 > $tmp307;
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308};
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:65
frost$io$OutputStream** $tmp311 = &param0->out;
frost$io$OutputStream* $tmp312 = *$tmp311;
frost$collections$Array** $tmp313 = &param1->fields;
frost$collections$Array* $tmp314 = *$tmp313;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure8));
org$frostlang$frostc$StubCodeGenerator$_Closure8* $tmp315 = (org$frostlang$frostc$StubCodeGenerator$_Closure8*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure8$class);
org$frostlang$frostc$StubCodeGenerator$_Closure8$init$org$frostlang$frostc$StubCodeGenerator($tmp315, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp317 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:65:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp318 = &$tmp317->pointer;
*$tmp318 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure8$$anonymous7$org$frostlang$frostc$Type$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$core$Object** $tmp319 = &$tmp317->target;
frost$core$Object* $tmp320 = *$tmp319;
frost$core$Frost$unref$frost$core$Object$Q($tmp320);
frost$core$Object** $tmp321 = &$tmp317->target;
*$tmp321 = ((frost$core$Object*) $tmp315);
ITable* $tmp322 = ((frost$collections$CollectionView*) $tmp314)->$class->itable;
while ($tmp322->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp322 = $tmp322->next;
}
$fn324 $tmp323 = $tmp322->methods[9];
frost$collections$Array* $tmp325 = $tmp323(((frost$collections$CollectionView*) $tmp314), $tmp317);
ITable* $tmp326 = ((frost$collections$CollectionView*) $tmp325)->$class->itable;
while ($tmp326->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp326 = $tmp326->next;
}
$fn328 $tmp327 = $tmp326->methods[3];
frost$core$String* $tmp329 = $tmp327(((frost$collections$CollectionView*) $tmp325), &$s330);
frost$core$String* $tmp331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s332, $tmp329);
frost$core$String* $tmp333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp331, &$s334);
$fn336 $tmp335 = ($fn336) $tmp312->$class->vtable[17];
frost$core$Error* $tmp337 = $tmp335($tmp312, $tmp333);
if ($tmp337 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$Bit $tmp338 = (frost$core$Bit) {$tmp337 != NULL};
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block13; else goto block14;
block14:;
frost$core$Int $tmp340 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s341, $tmp340, &$s342);
abort(); // unreachable
block13:;
*(&local0) = $tmp337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:68
frost$io$OutputStream** $tmp343 = &param0->out;
frost$io$OutputStream* $tmp344 = *$tmp343;
$fn346 $tmp345 = ($fn346) $tmp344->$class->vtable[21];
frost$core$Error* $tmp347 = $tmp345($tmp344);
if ($tmp347 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Bit $tmp348 = (frost$core$Bit) {$tmp347 != NULL};
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block17; else goto block18;
block18:;
frost$core$Int $tmp350 = (frost$core$Int) {68u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s351, $tmp350, &$s352);
abort(); // unreachable
block17:;
*(&local0) = $tmp347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
goto block1;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
goto block8;
block8:;
frost$core$Error* $tmp353 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:72
frost$core$Error* $tmp354 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:72:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn356 $tmp355 = ($fn356) ((frost$core$Object*) $tmp354)->$class->vtable[0];
frost$core$String* $tmp357 = $tmp355(((frost$core$Object*) $tmp354));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp357);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp357));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:73
frost$core$Int $tmp358 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp358);
frost$core$Int $tmp359 = (frost$core$Int) {73u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s360, $tmp359, &$s361);
abort(); // unreachable

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$FieldDecl* param1) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$FieldDecl$Kind local1;
org$frostlang$frostc$FieldDecl$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:78
org$frostlang$frostc$Annotations** $tmp362 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp363 = *$tmp362;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from StubCodeGenerator.frost:78:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:158
frost$core$Int* $tmp364 = &$tmp363->flags;
frost$core$Int $tmp365 = *$tmp364;
frost$core$Int $tmp366 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp367 = $tmp365.value;
int64_t $tmp368 = $tmp366.value;
int64_t $tmp369 = $tmp367 & $tmp368;
frost$core$Int $tmp370 = (frost$core$Int) {$tmp369};
frost$core$Int $tmp371 = (frost$core$Int) {0u};
int64_t $tmp372 = $tmp370.value;
int64_t $tmp373 = $tmp371.value;
bool $tmp374 = $tmp372 != $tmp373;
frost$core$Bit $tmp375 = (frost$core$Bit) {$tmp374};
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:79
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:81
frost$core$Weak** $tmp377 = &param0->compiler;
frost$core$Weak* $tmp378 = *$tmp377;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:81:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp379 = &$tmp378->_valid;
frost$core$Bit $tmp380 = *$tmp379;
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block9; else goto block10;
block10:;
frost$core$Int $tmp382 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s383, $tmp382);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp384 = &$tmp378->value;
frost$core$Object* $tmp385 = *$tmp384;
frost$core$Frost$ref$frost$core$Object$Q($tmp385);
frost$core$Bit $tmp386 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp385), param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:81:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp387 = $tmp386.value;
bool $tmp388 = !$tmp387;
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
bool $tmp390 = $tmp389.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp385);
if ($tmp390) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:82
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:84
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:85
org$frostlang$frostc$FieldDecl$Kind* $tmp391 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp392 = *$tmp391;
frost$core$Int $tmp393 = $tmp392.$rawValue;
frost$core$Int $tmp394 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:86:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp395 = $tmp393.value;
int64_t $tmp396 = $tmp394.value;
bool $tmp397 = $tmp395 == $tmp396;
frost$core$Bit $tmp398 = (frost$core$Bit) {$tmp397};
bool $tmp399 = $tmp398.value;
if ($tmp399) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:86
frost$io$OutputStream** $tmp400 = &param0->out;
frost$io$OutputStream* $tmp401 = *$tmp400;
$fn403 $tmp402 = ($fn403) $tmp401->$class->vtable[17];
frost$core$Error* $tmp404 = $tmp402($tmp401, &$s405);
if ($tmp404 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$Bit $tmp406 = (frost$core$Bit) {$tmp404 != NULL};
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block20; else goto block21;
block21:;
frost$core$Int $tmp408 = (frost$core$Int) {86u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s409, $tmp408, &$s410);
abort(); // unreachable
block20:;
*(&local0) = $tmp404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
goto block12;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
goto block14;
block16:;
frost$core$Int $tmp411 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:87:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp412 = $tmp393.value;
int64_t $tmp413 = $tmp411.value;
bool $tmp414 = $tmp412 == $tmp413;
frost$core$Bit $tmp415 = (frost$core$Bit) {$tmp414};
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:87
frost$io$OutputStream** $tmp417 = &param0->out;
frost$io$OutputStream* $tmp418 = *$tmp417;
$fn420 $tmp419 = ($fn420) $tmp418->$class->vtable[17];
frost$core$Error* $tmp421 = $tmp419($tmp418, &$s422);
if ($tmp421 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
frost$core$Bit $tmp423 = (frost$core$Bit) {$tmp421 != NULL};
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block27; else goto block28;
block28:;
frost$core$Int $tmp425 = (frost$core$Int) {87u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s426, $tmp425, &$s427);
abort(); // unreachable
block27:;
*(&local0) = $tmp421;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
goto block12;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
goto block14;
block23:;
frost$core$Int $tmp428 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:88:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp429 = $tmp393.value;
int64_t $tmp430 = $tmp428.value;
bool $tmp431 = $tmp429 == $tmp430;
frost$core$Bit $tmp432 = (frost$core$Bit) {$tmp431};
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:88
frost$io$OutputStream** $tmp434 = &param0->out;
frost$io$OutputStream* $tmp435 = *$tmp434;
$fn437 $tmp436 = ($fn437) $tmp435->$class->vtable[17];
frost$core$Error* $tmp438 = $tmp436($tmp435, &$s439);
if ($tmp438 == NULL) goto block32; else goto block33;
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$Bit $tmp440 = (frost$core$Bit) {$tmp438 != NULL};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block34; else goto block35;
block35:;
frost$core$Int $tmp442 = (frost$core$Int) {88u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s443, $tmp442, &$s444);
abort(); // unreachable
block34:;
*(&local0) = $tmp438;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
goto block12;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
goto block14;
block30:;
frost$core$Int $tmp445 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:89:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp446 = $tmp393.value;
int64_t $tmp447 = $tmp445.value;
bool $tmp448 = $tmp446 == $tmp447;
frost$core$Bit $tmp449 = (frost$core$Bit) {$tmp448};
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block36; else goto block14;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:89
frost$io$OutputStream** $tmp451 = &param0->out;
frost$io$OutputStream* $tmp452 = *$tmp451;
$fn454 $tmp453 = ($fn454) $tmp452->$class->vtable[17];
frost$core$Error* $tmp455 = $tmp453($tmp452, &$s456);
if ($tmp455 == NULL) goto block38; else goto block39;
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
frost$core$Bit $tmp457 = (frost$core$Bit) {$tmp455 != NULL};
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block40; else goto block41;
block41:;
frost$core$Int $tmp459 = (frost$core$Int) {89u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s460, $tmp459, &$s461);
abort(); // unreachable
block40:;
*(&local0) = $tmp455;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
goto block12;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:91
frost$io$OutputStream** $tmp462 = &param0->out;
frost$io$OutputStream* $tmp463 = *$tmp462;
frost$core$String** $tmp464 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp465 = *$tmp464;
$fn467 $tmp466 = ($fn467) $tmp463->$class->vtable[17];
frost$core$Error* $tmp468 = $tmp466($tmp463, $tmp465);
if ($tmp468 == NULL) goto block42; else goto block43;
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
frost$core$Bit $tmp469 = (frost$core$Bit) {$tmp468 != NULL};
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block44; else goto block45;
block45:;
frost$core$Int $tmp471 = (frost$core$Int) {91u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s472, $tmp471, &$s473);
abort(); // unreachable
block44:;
*(&local0) = $tmp468;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
goto block12;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:92
frost$io$OutputStream** $tmp474 = &param0->out;
frost$io$OutputStream* $tmp475 = *$tmp474;
$fn477 $tmp476 = ($fn477) $tmp475->$class->vtable[17];
frost$core$Error* $tmp478 = $tmp476($tmp475, &$s479);
if ($tmp478 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
frost$core$Bit $tmp480 = (frost$core$Bit) {$tmp478 != NULL};
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block48; else goto block49;
block49:;
frost$core$Int $tmp482 = (frost$core$Int) {92u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s483, $tmp482, &$s484);
abort(); // unreachable
block48:;
*(&local0) = $tmp478;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
goto block12;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:93
frost$io$OutputStream** $tmp485 = &param0->out;
frost$io$OutputStream* $tmp486 = *$tmp485;
org$frostlang$frostc$Type** $tmp487 = &param1->type;
org$frostlang$frostc$Type* $tmp488 = *$tmp487;
frost$core$String* $tmp489 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp488);
$fn491 $tmp490 = ($fn491) $tmp486->$class->vtable[17];
frost$core$Error* $tmp492 = $tmp490($tmp486, $tmp489);
if ($tmp492 == NULL) goto block50; else goto block51;
block51:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$core$Bit $tmp493 = (frost$core$Bit) {$tmp492 != NULL};
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block52; else goto block53;
block53:;
frost$core$Int $tmp495 = (frost$core$Int) {93u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s496, $tmp495, &$s497);
abort(); // unreachable
block52:;
*(&local0) = $tmp492;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
goto block12;
block50:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:94
org$frostlang$frostc$FieldDecl$Kind* $tmp498 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp499 = *$tmp498;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp500;
$tmp500 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp500->value = $tmp499;
frost$core$Int $tmp501 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.FieldDecl.Kind from StubCodeGenerator.frost:94:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int* $tmp502 = &(&local2)->$rawValue;
*$tmp502 = $tmp501;
org$frostlang$frostc$FieldDecl$Kind $tmp503 = *(&local2);
*(&local1) = $tmp503;
org$frostlang$frostc$FieldDecl$Kind $tmp504 = *(&local1);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp505;
$tmp505 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp505->value = $tmp504;
ITable* $tmp506 = ((frost$core$Equatable*) $tmp500)->$class->itable;
while ($tmp506->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp506 = $tmp506->next;
}
$fn508 $tmp507 = $tmp506->methods[0];
frost$core$Bit $tmp509 = $tmp507(((frost$core$Equatable*) $tmp500), ((frost$core$Equatable*) $tmp505));
bool $tmp510 = $tmp509.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp505)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp500)));
if ($tmp510) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:95
frost$io$OutputStream** $tmp511 = &param0->out;
frost$io$OutputStream* $tmp512 = *$tmp511;
$fn514 $tmp513 = ($fn514) $tmp512->$class->vtable[17];
frost$core$Error* $tmp515 = $tmp513($tmp512, &$s516);
if ($tmp515 == NULL) goto block57; else goto block58;
block58:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Bit $tmp517 = (frost$core$Bit) {$tmp515 != NULL};
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block59; else goto block60;
block60:;
frost$core$Int $tmp519 = (frost$core$Int) {95u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s520, $tmp519, &$s521);
abort(); // unreachable
block59:;
*(&local0) = $tmp515;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
goto block12;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:96
frost$io$OutputStream** $tmp522 = &param0->out;
frost$io$OutputStream* $tmp523 = *$tmp522;
org$frostlang$frostc$ASTNode** $tmp524 = &param1->rawValue;
org$frostlang$frostc$ASTNode* $tmp525 = *$tmp524;
$fn527 $tmp526 = ($fn527) $tmp523->$class->vtable[18];
frost$core$Error* $tmp528 = $tmp526($tmp523, ((frost$core$Object*) $tmp525));
if ($tmp528 == NULL) goto block61; else goto block62;
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Bit $tmp529 = (frost$core$Bit) {$tmp528 != NULL};
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block63; else goto block64;
block64:;
frost$core$Int $tmp531 = (frost$core$Int) {96u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s532, $tmp531, &$s533);
abort(); // unreachable
block63:;
*(&local0) = $tmp528;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
goto block12;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
goto block55;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:98
frost$io$OutputStream** $tmp534 = &param0->out;
frost$io$OutputStream* $tmp535 = *$tmp534;
$fn537 $tmp536 = ($fn537) $tmp535->$class->vtable[21];
frost$core$Error* $tmp538 = $tmp536($tmp535);
if ($tmp538 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
frost$core$Bit $tmp539 = (frost$core$Bit) {$tmp538 != NULL};
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block67; else goto block68;
block68:;
frost$core$Int $tmp541 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s542, $tmp541, &$s543);
abort(); // unreachable
block67:;
*(&local0) = $tmp538;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
goto block12;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
frost$core$Error* $tmp544 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
*(&local0) = ((frost$core$Error*) NULL);
return;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:101
frost$core$Error* $tmp545 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:101:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn547 $tmp546 = ($fn547) ((frost$core$Object*) $tmp545)->$class->vtable[0];
frost$core$String* $tmp548 = $tmp546(((frost$core$Object*) $tmp545));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp548);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:102
frost$core$Int $tmp549 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp549);
frost$core$Int $tmp550 = (frost$core$Int) {102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s551, $tmp550, &$s552);
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
org$frostlang$frostc$Annotations** $tmp553 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp554 = *$tmp553;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from StubCodeGenerator.frost:107:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:158
frost$core$Int* $tmp555 = &$tmp554->flags;
frost$core$Int $tmp556 = *$tmp555;
frost$core$Int $tmp557 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp558 = $tmp556.value;
int64_t $tmp559 = $tmp557.value;
int64_t $tmp560 = $tmp558 & $tmp559;
frost$core$Int $tmp561 = (frost$core$Int) {$tmp560};
frost$core$Int $tmp562 = (frost$core$Int) {0u};
int64_t $tmp563 = $tmp561.value;
int64_t $tmp564 = $tmp562.value;
bool $tmp565 = $tmp563 != $tmp564;
frost$core$Bit $tmp566 = (frost$core$Bit) {$tmp565};
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:108
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:110
frost$core$Weak** $tmp568 = &param0->compiler;
frost$core$Weak* $tmp569 = *$tmp568;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:110:13
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp570 = &$tmp569->_valid;
frost$core$Bit $tmp571 = *$tmp570;
bool $tmp572 = $tmp571.value;
if ($tmp572) goto block9; else goto block10;
block10:;
frost$core$Int $tmp573 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s574, $tmp573);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp575 = &$tmp569->value;
frost$core$Object* $tmp576 = *$tmp575;
frost$core$Frost$ref$frost$core$Object$Q($tmp576);
frost$core$Bit $tmp577 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp576), param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:110:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp578 = $tmp577.value;
bool $tmp579 = !$tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp576);
if ($tmp581) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:111
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:113
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:114
frost$io$OutputStream** $tmp582 = &param0->out;
frost$io$OutputStream* $tmp583 = *$tmp582;
org$frostlang$frostc$Annotations** $tmp584 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp585 = *$tmp584;
$fn587 $tmp586 = ($fn587) $tmp583->$class->vtable[18];
frost$core$Error* $tmp588 = $tmp586($tmp583, ((frost$core$Object*) $tmp585));
if ($tmp588 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
frost$core$Bit $tmp589 = (frost$core$Bit) {$tmp588 != NULL};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block16; else goto block17;
block17:;
frost$core$Int $tmp591 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s592, $tmp591, &$s593);
abort(); // unreachable
block16:;
*(&local0) = $tmp588;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:115
org$frostlang$frostc$MethodDecl$Kind* $tmp594 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp595 = *$tmp594;
frost$core$Int $tmp596 = $tmp595.$rawValue;
frost$core$Int $tmp597 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:116:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp598 = $tmp596.value;
int64_t $tmp599 = $tmp597.value;
bool $tmp600 = $tmp598 == $tmp599;
frost$core$Bit $tmp601 = (frost$core$Bit) {$tmp600};
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:117
frost$io$OutputStream** $tmp603 = &param0->out;
frost$io$OutputStream* $tmp604 = *$tmp603;
$fn606 $tmp605 = ($fn606) $tmp604->$class->vtable[17];
frost$core$Error* $tmp607 = $tmp605($tmp604, &$s608);
if ($tmp607 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$core$Bit $tmp609 = (frost$core$Bit) {$tmp607 != NULL};
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block24; else goto block25;
block25:;
frost$core$Int $tmp611 = (frost$core$Int) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s612, $tmp611, &$s613);
abort(); // unreachable
block24:;
*(&local0) = $tmp607;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
goto block12;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
goto block18;
block20:;
frost$core$Int $tmp614 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:119:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp615 = $tmp596.value;
int64_t $tmp616 = $tmp614.value;
bool $tmp617 = $tmp615 == $tmp616;
frost$core$Bit $tmp618 = (frost$core$Bit) {$tmp617};
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:120
frost$io$OutputStream** $tmp620 = &param0->out;
frost$io$OutputStream* $tmp621 = *$tmp620;
$fn623 $tmp622 = ($fn623) $tmp621->$class->vtable[17];
frost$core$Error* $tmp624 = $tmp622($tmp621, &$s625);
if ($tmp624 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$Bit $tmp626 = (frost$core$Bit) {$tmp624 != NULL};
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block31; else goto block32;
block32:;
frost$core$Int $tmp628 = (frost$core$Int) {120u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s629, $tmp628, &$s630);
abort(); // unreachable
block31:;
*(&local0) = $tmp624;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
goto block12;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
goto block18;
block27:;
frost$core$Int $tmp631 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:122:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp632 = $tmp596.value;
int64_t $tmp633 = $tmp631.value;
bool $tmp634 = $tmp632 == $tmp633;
frost$core$Bit $tmp635 = (frost$core$Bit) {$tmp634};
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block33; else goto block34;
block33:;
goto block18;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:125
frost$core$Int $tmp637 = (frost$core$Int) {125u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s638, $tmp637);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:128
frost$io$OutputStream** $tmp639 = &param0->out;
frost$io$OutputStream* $tmp640 = *$tmp639;
frost$core$String** $tmp641 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp642 = *$tmp641;
$fn644 $tmp643 = ($fn644) $tmp640->$class->vtable[17];
frost$core$Error* $tmp645 = $tmp643($tmp640, $tmp642);
if ($tmp645 == NULL) goto block36; else goto block37;
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Bit $tmp646 = (frost$core$Bit) {$tmp645 != NULL};
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block38; else goto block39;
block39:;
frost$core$Int $tmp648 = (frost$core$Int) {128u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s649, $tmp648, &$s650);
abort(); // unreachable
block38:;
*(&local0) = $tmp645;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
goto block12;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:129
frost$collections$Array** $tmp651 = &param1->genericParameters;
frost$collections$Array* $tmp652 = *$tmp651;
frost$core$Bit $tmp653 = (frost$core$Bit) {$tmp652 != NULL};
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:130
frost$io$OutputStream** $tmp655 = &param0->out;
frost$io$OutputStream* $tmp656 = *$tmp655;
frost$collections$Array** $tmp657 = &param1->genericParameters;
frost$collections$Array* $tmp658 = *$tmp657;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure10));
org$frostlang$frostc$StubCodeGenerator$_Closure10* $tmp659 = (org$frostlang$frostc$StubCodeGenerator$_Closure10*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure10$class);
org$frostlang$frostc$StubCodeGenerator$_Closure10$init$org$frostlang$frostc$StubCodeGenerator($tmp659, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp661 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:131:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp662 = &$tmp661->pointer;
*$tmp662 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure10$$anonymous9$org$frostlang$frostc$MethodDecl$GenericParameter$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
frost$core$Object** $tmp663 = &$tmp661->target;
frost$core$Object* $tmp664 = *$tmp663;
frost$core$Frost$unref$frost$core$Object$Q($tmp664);
frost$core$Object** $tmp665 = &$tmp661->target;
*$tmp665 = ((frost$core$Object*) $tmp659);
ITable* $tmp666 = ((frost$collections$CollectionView*) $tmp658)->$class->itable;
while ($tmp666->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp666 = $tmp666->next;
}
$fn668 $tmp667 = $tmp666->methods[9];
frost$collections$Array* $tmp669 = $tmp667(((frost$collections$CollectionView*) $tmp658), $tmp661);
ITable* $tmp670 = ((frost$collections$CollectionView*) $tmp669)->$class->itable;
while ($tmp670->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp670 = $tmp670->next;
}
$fn672 $tmp671 = $tmp670->methods[3];
frost$core$String* $tmp673 = $tmp671(((frost$collections$CollectionView*) $tmp669), &$s674);
frost$core$String* $tmp675 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s676, $tmp673);
frost$core$String* $tmp677 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp675, &$s678);
$fn680 $tmp679 = ($fn680) $tmp656->$class->vtable[17];
frost$core$Error* $tmp681 = $tmp679($tmp656, $tmp677);
if ($tmp681 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$core$Bit $tmp682 = (frost$core$Bit) {$tmp681 != NULL};
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block45; else goto block46;
block46:;
frost$core$Int $tmp684 = (frost$core$Int) {130u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s685, $tmp684, &$s686);
abort(); // unreachable
block45:;
*(&local0) = $tmp681;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
goto block12;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:134
frost$io$OutputStream** $tmp687 = &param0->out;
frost$io$OutputStream* $tmp688 = *$tmp687;
$fn690 $tmp689 = ($fn690) $tmp688->$class->vtable[17];
frost$core$Error* $tmp691 = $tmp689($tmp688, &$s692);
if ($tmp691 == NULL) goto block47; else goto block48;
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
frost$core$Bit $tmp693 = (frost$core$Bit) {$tmp691 != NULL};
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block49; else goto block50;
block50:;
frost$core$Int $tmp695 = (frost$core$Int) {134u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s696, $tmp695, &$s697);
abort(); // unreachable
block49:;
*(&local0) = $tmp691;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
goto block12;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:135
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s698));
frost$core$String* $tmp699 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
*(&local1) = &$s700;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:136
frost$collections$Array** $tmp701 = &param1->parameters;
frost$collections$Array* $tmp702 = *$tmp701;
ITable* $tmp703 = ((frost$collections$Iterable*) $tmp702)->$class->itable;
while ($tmp703->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp703 = $tmp703->next;
}
$fn705 $tmp704 = $tmp703->methods[0];
frost$collections$Iterator* $tmp706 = $tmp704(((frost$collections$Iterable*) $tmp702));
goto block51;
block51:;
ITable* $tmp707 = $tmp706->$class->itable;
while ($tmp707->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp707 = $tmp707->next;
}
$fn709 $tmp708 = $tmp707->methods[0];
frost$core$Bit $tmp710 = $tmp708($tmp706);
bool $tmp711 = $tmp710.value;
if ($tmp711) goto block53; else goto block52;
block52:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp712 = $tmp706->$class->itable;
while ($tmp712->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp712 = $tmp712->next;
}
$fn714 $tmp713 = $tmp712->methods[1];
frost$core$Object* $tmp715 = $tmp713($tmp706);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp715)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp716 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp715);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:137
frost$io$OutputStream** $tmp717 = &param0->out;
frost$io$OutputStream* $tmp718 = *$tmp717;
frost$core$String* $tmp719 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:137:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$String* $tmp720 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp719, &$s721);
org$frostlang$frostc$MethodDecl$Parameter* $tmp722 = *(&local2);
frost$core$String** $tmp723 = &$tmp722->name;
frost$core$String* $tmp724 = *$tmp723;
frost$core$String* $tmp725 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp720, $tmp724);
frost$core$String* $tmp726 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp725, &$s727);
org$frostlang$frostc$MethodDecl$Parameter* $tmp728 = *(&local2);
org$frostlang$frostc$Type** $tmp729 = &$tmp728->type;
org$frostlang$frostc$Type* $tmp730 = *$tmp729;
frost$core$String* $tmp731 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp730);
frost$core$String* $tmp732 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp726, $tmp731);
frost$core$String* $tmp733 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp732, &$s734);
$fn736 $tmp735 = ($fn736) $tmp718->$class->vtable[17];
frost$core$Error* $tmp737 = $tmp735($tmp718, $tmp733);
if ($tmp737 == NULL) goto block55; else goto block56;
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Bit $tmp738 = (frost$core$Bit) {$tmp737 != NULL};
bool $tmp739 = $tmp738.value;
if ($tmp739) goto block57; else goto block58;
block58:;
frost$core$Int $tmp740 = (frost$core$Int) {137u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s741, $tmp740, &$s742);
abort(); // unreachable
block57:;
*(&local0) = $tmp737;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$Frost$unref$frost$core$Object$Q($tmp715);
org$frostlang$frostc$MethodDecl$Parameter* $tmp743 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
frost$core$String* $tmp744 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s745));
frost$core$String* $tmp746 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local1) = &$s747;
frost$core$Frost$unref$frost$core$Object$Q($tmp715);
org$frostlang$frostc$MethodDecl$Parameter* $tmp748 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block51;
block53:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:140
frost$io$OutputStream** $tmp749 = &param0->out;
frost$io$OutputStream* $tmp750 = *$tmp749;
$fn752 $tmp751 = ($fn752) $tmp750->$class->vtable[17];
frost$core$Error* $tmp753 = $tmp751($tmp750, &$s754);
if ($tmp753 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$Bit $tmp755 = (frost$core$Bit) {$tmp753 != NULL};
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block61; else goto block62;
block62:;
frost$core$Int $tmp757 = (frost$core$Int) {140u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s758, $tmp757, &$s759);
abort(); // unreachable
block61:;
*(&local0) = $tmp753;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$String* $tmp760 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:141
org$frostlang$frostc$MethodDecl$Kind* $tmp761 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp762 = *$tmp761;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp763;
$tmp763 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp763->value = $tmp762;
frost$core$Int $tmp764 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.MethodDecl.Kind from StubCodeGenerator.frost:141:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int* $tmp765 = &(&local4)->$rawValue;
*$tmp765 = $tmp764;
org$frostlang$frostc$MethodDecl$Kind $tmp766 = *(&local4);
*(&local3) = $tmp766;
org$frostlang$frostc$MethodDecl$Kind $tmp767 = *(&local3);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp768;
$tmp768 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp768->value = $tmp767;
ITable* $tmp769 = ((frost$core$Equatable*) $tmp763)->$class->itable;
while ($tmp769->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp769 = $tmp769->next;
}
$fn771 $tmp770 = $tmp769->methods[0];
frost$core$Bit $tmp772 = $tmp770(((frost$core$Equatable*) $tmp763), ((frost$core$Equatable*) $tmp768));
bool $tmp773 = $tmp772.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp768)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp763)));
if ($tmp773) goto block63; else goto block65;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:142
org$frostlang$frostc$Annotations** $tmp774 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp775 = *$tmp774;
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from StubCodeGenerator.frost:142:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:146
frost$core$Int* $tmp776 = &$tmp775->flags;
frost$core$Int $tmp777 = *$tmp776;
frost$core$Int $tmp778 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:146:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp779 = $tmp777.value;
int64_t $tmp780 = $tmp778.value;
int64_t $tmp781 = $tmp779 & $tmp780;
frost$core$Int $tmp782 = (frost$core$Int) {$tmp781};
frost$core$Int $tmp783 = (frost$core$Int) {0u};
int64_t $tmp784 = $tmp782.value;
int64_t $tmp785 = $tmp783.value;
bool $tmp786 = $tmp784 != $tmp785;
frost$core$Bit $tmp787 = (frost$core$Bit) {$tmp786};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:142:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp788 = $tmp787.value;
bool $tmp789 = !$tmp788;
frost$core$Bit $tmp790 = (frost$core$Bit) {$tmp789};
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:143
frost$io$OutputStream** $tmp792 = &param0->out;
frost$io$OutputStream* $tmp793 = *$tmp792;
$fn795 $tmp794 = ($fn795) $tmp793->$class->vtable[17];
frost$core$Error* $tmp796 = $tmp794($tmp793, &$s797);
if ($tmp796 == NULL) goto block72; else goto block73;
block73:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$core$Bit $tmp798 = (frost$core$Bit) {$tmp796 != NULL};
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block74; else goto block75;
block75:;
frost$core$Int $tmp800 = (frost$core$Int) {143u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s801, $tmp800, &$s802);
abort(); // unreachable
block74:;
*(&local0) = $tmp796;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
frost$core$String* $tmp803 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block72:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
goto block68;
block68:;
goto block64;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:146
org$frostlang$frostc$Type** $tmp804 = &param1->returnType;
org$frostlang$frostc$Type* $tmp805 = *$tmp804;
frost$core$Weak** $tmp806 = &param0->compiler;
frost$core$Weak* $tmp807 = *$tmp806;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:146:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp808 = &$tmp807->_valid;
frost$core$Bit $tmp809 = *$tmp808;
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block80; else goto block81;
block81:;
frost$core$Int $tmp811 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s812, $tmp811);
abort(); // unreachable
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp813 = &$tmp807->value;
frost$core$Object* $tmp814 = *$tmp813;
frost$core$Frost$ref$frost$core$Object$Q($tmp814);
org$frostlang$frostc$Type** $tmp815 = &((org$frostlang$frostc$Compiler*) $tmp814)->VOID_TYPE;
org$frostlang$frostc$Type* $tmp816 = *$tmp815;
ITable* $tmp817 = ((frost$core$Equatable*) $tmp805)->$class->itable;
while ($tmp817->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp817 = $tmp817->next;
}
$fn819 $tmp818 = $tmp817->methods[1];
frost$core$Bit $tmp820 = $tmp818(((frost$core$Equatable*) $tmp805), ((frost$core$Equatable*) $tmp816));
bool $tmp821 = $tmp820.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp814);
if ($tmp821) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:147
frost$io$OutputStream** $tmp822 = &param0->out;
frost$io$OutputStream* $tmp823 = *$tmp822;
org$frostlang$frostc$Type** $tmp824 = &param1->returnType;
org$frostlang$frostc$Type* $tmp825 = *$tmp824;
frost$core$String* $tmp826 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp825);
frost$core$String* $tmp827 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s828, $tmp826);
frost$core$String* $tmp829 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp827, &$s830);
$fn832 $tmp831 = ($fn832) $tmp823->$class->vtable[19];
frost$core$Error* $tmp833 = $tmp831($tmp823, $tmp829);
if ($tmp833 == NULL) goto block82; else goto block83;
block83:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$Bit $tmp834 = (frost$core$Bit) {$tmp833 != NULL};
bool $tmp835 = $tmp834.value;
if ($tmp835) goto block84; else goto block85;
block85:;
frost$core$Int $tmp836 = (frost$core$Int) {147u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s837, $tmp836, &$s838);
abort(); // unreachable
block84:;
*(&local0) = $tmp833;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$String* $tmp839 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block82:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
goto block77;
block77:;
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:149
org$frostlang$frostc$Annotations** $tmp840 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp841 = *$tmp840;
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from StubCodeGenerator.frost:149:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:146
frost$core$Int* $tmp842 = &$tmp841->flags;
frost$core$Int $tmp843 = *$tmp842;
frost$core$Int $tmp844 = (frost$core$Int) {1024u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:146:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp845 = $tmp843.value;
int64_t $tmp846 = $tmp844.value;
int64_t $tmp847 = $tmp845 & $tmp846;
frost$core$Int $tmp848 = (frost$core$Int) {$tmp847};
frost$core$Int $tmp849 = (frost$core$Int) {0u};
int64_t $tmp850 = $tmp848.value;
int64_t $tmp851 = $tmp849.value;
bool $tmp852 = $tmp850 != $tmp851;
frost$core$Bit $tmp853 = (frost$core$Bit) {$tmp852};
bool $tmp854 = $tmp853.value;
if ($tmp854) goto block86; else goto block88;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:150
frost$io$OutputStream** $tmp855 = &param0->out;
frost$io$OutputStream* $tmp856 = *$tmp855;
$fn858 $tmp857 = ($fn858) $tmp856->$class->vtable[17];
frost$core$Error* $tmp859 = $tmp857($tmp856, &$s860);
if ($tmp859 == NULL) goto block91; else goto block92;
block92:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$core$Bit $tmp861 = (frost$core$Bit) {$tmp859 != NULL};
bool $tmp862 = $tmp861.value;
if ($tmp862) goto block93; else goto block94;
block94:;
frost$core$Int $tmp863 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s864, $tmp863, &$s865);
abort(); // unreachable
block93:;
*(&local0) = $tmp859;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$core$String* $tmp866 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block91:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:151
org$frostlang$frostc$FixedArray** $tmp867 = &param1->body;
org$frostlang$frostc$FixedArray* $tmp868 = *$tmp867;
ITable* $tmp869 = ((frost$collections$Iterable*) $tmp868)->$class->itable;
while ($tmp869->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp869 = $tmp869->next;
}
$fn871 $tmp870 = $tmp869->methods[0];
frost$collections$Iterator* $tmp872 = $tmp870(((frost$collections$Iterable*) $tmp868));
goto block95;
block95:;
ITable* $tmp873 = $tmp872->$class->itable;
while ($tmp873->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp873 = $tmp873->next;
}
$fn875 $tmp874 = $tmp873->methods[0];
frost$core$Bit $tmp876 = $tmp874($tmp872);
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block97; else goto block96;
block96:;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp878 = $tmp872->$class->itable;
while ($tmp878->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp878 = $tmp878->next;
}
$fn880 $tmp879 = $tmp878->methods[1];
frost$core$Object* $tmp881 = $tmp879($tmp872);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp881)));
org$frostlang$frostc$ASTNode* $tmp882 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local5) = ((org$frostlang$frostc$ASTNode*) $tmp881);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:152
frost$io$OutputStream** $tmp883 = &param0->out;
frost$io$OutputStream* $tmp884 = *$tmp883;
org$frostlang$frostc$ASTNode* $tmp885 = *(&local5);
$fn887 $tmp886 = ($fn887) $tmp884->$class->vtable[20];
frost$core$Error* $tmp888 = $tmp886($tmp884, ((frost$core$Object*) $tmp885));
if ($tmp888 == NULL) goto block98; else goto block99;
block99:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
frost$core$Bit $tmp889 = (frost$core$Bit) {$tmp888 != NULL};
bool $tmp890 = $tmp889.value;
if ($tmp890) goto block100; else goto block101;
block101:;
frost$core$Int $tmp891 = (frost$core$Int) {152u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s892, $tmp891, &$s893);
abort(); // unreachable
block100:;
*(&local0) = $tmp888;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
frost$core$Frost$unref$frost$core$Object$Q($tmp881);
org$frostlang$frostc$ASTNode* $tmp894 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
frost$core$String* $tmp895 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block98:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
frost$core$Frost$unref$frost$core$Object$Q($tmp881);
org$frostlang$frostc$ASTNode* $tmp896 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block95;
block97:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:154
frost$io$OutputStream** $tmp897 = &param0->out;
frost$io$OutputStream* $tmp898 = *$tmp897;
$fn900 $tmp899 = ($fn900) $tmp898->$class->vtable[17];
frost$core$Error* $tmp901 = $tmp899($tmp898, &$s902);
if ($tmp901 == NULL) goto block102; else goto block103;
block103:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$core$Bit $tmp903 = (frost$core$Bit) {$tmp901 != NULL};
bool $tmp904 = $tmp903.value;
if ($tmp904) goto block104; else goto block105;
block105:;
frost$core$Int $tmp905 = (frost$core$Int) {154u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s906, $tmp905, &$s907);
abort(); // unreachable
block104:;
*(&local0) = $tmp901;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
frost$core$String* $tmp908 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block102:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
goto block87;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:156
org$frostlang$frostc$Annotations** $tmp909 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp910 = *$tmp909;
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from StubCodeGenerator.frost:156:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:166
frost$core$Int* $tmp911 = &$tmp910->flags;
frost$core$Int $tmp912 = *$tmp911;
frost$core$Int $tmp913 = (frost$core$Int) {32768u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:166:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp914 = $tmp912.value;
int64_t $tmp915 = $tmp913.value;
int64_t $tmp916 = $tmp914 & $tmp915;
frost$core$Int $tmp917 = (frost$core$Int) {$tmp916};
frost$core$Int $tmp918 = (frost$core$Int) {0u};
int64_t $tmp919 = $tmp917.value;
int64_t $tmp920 = $tmp918.value;
bool $tmp921 = $tmp919 != $tmp920;
frost$core$Bit $tmp922 = (frost$core$Bit) {$tmp921};
bool $tmp923 = $tmp922.value;
if ($tmp923) goto block106; else goto block107;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:157
frost$io$OutputStream** $tmp924 = &param0->out;
frost$io$OutputStream* $tmp925 = *$tmp924;
$fn927 $tmp926 = ($fn927) $tmp925->$class->vtable[17];
frost$core$Error* $tmp928 = $tmp926($tmp925, &$s929);
if ($tmp928 == NULL) goto block110; else goto block111;
block111:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Bit $tmp930 = (frost$core$Bit) {$tmp928 != NULL};
bool $tmp931 = $tmp930.value;
if ($tmp931) goto block112; else goto block113;
block113:;
frost$core$Int $tmp932 = (frost$core$Int) {157u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s933, $tmp932, &$s934);
abort(); // unreachable
block112:;
*(&local0) = $tmp928;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$String* $tmp935 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block110:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
goto block107;
block107:;
goto block87;
block87:;
frost$core$String* $tmp936 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp937 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
*(&local0) = ((frost$core$Error*) NULL);
return;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:161
frost$core$Error* $tmp938 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:161:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn940 $tmp939 = ($fn940) ((frost$core$Object*) $tmp938)->$class->vtable[0];
frost$core$String* $tmp941 = $tmp939(((frost$core$Object*) $tmp938));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp941);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:162
frost$core$Int $tmp942 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp942);
frost$core$Int $tmp943 = (frost$core$Int) {162u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s944, $tmp943, &$s945);
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
frost$core$Weak** $tmp946 = &param0->compiler;
frost$core$Weak* $tmp947 = *$tmp946;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:170:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp948 = &$tmp947->_valid;
frost$core$Bit $tmp949 = *$tmp948;
bool $tmp950 = $tmp949.value;
if ($tmp950) goto block7; else goto block8;
block8:;
frost$core$Int $tmp951 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s952, $tmp951);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp953 = &$tmp947->value;
frost$core$Object* $tmp954 = *$tmp953;
frost$core$Frost$ref$frost$core$Object$Q($tmp954);
frost$core$Bit $tmp955 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp954), param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:170:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp956 = $tmp955.value;
bool $tmp957 = !$tmp956;
frost$core$Bit $tmp958 = (frost$core$Bit) {$tmp957};
bool $tmp959 = $tmp958.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp954);
if ($tmp959) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:171
frost$core$Error* $tmp960 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
*(&local0) = ((frost$core$Error*) NULL);
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:173
frost$core$String** $tmp961 = &param1->name;
frost$core$String* $tmp962 = *$tmp961;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
frost$core$String* $tmp963 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
*(&local1) = $tmp962;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:174
frost$core$String** $tmp964 = &param1->name;
frost$core$String* $tmp965 = *$tmp964;
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp966 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp966, &$s967);
// begin inline call to function frost.core.String.parse(regex:frost.core.RegularExpression):frost.collections.ListView<frost.core.String?>? from StubCodeGenerator.frost:174:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1072
frost$core$Matcher* $tmp968 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp966, $tmp965);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
frost$core$Matcher* $tmp969 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp969));
*(&local3) = $tmp968;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp968));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1073
frost$core$Matcher* $tmp970 = *(&local3);
frost$core$Bit $tmp971;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp971, $tmp970);
bool $tmp972 = $tmp971.value;
if ($tmp972) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1074
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp973 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp973);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
frost$collections$Array* $tmp974 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local4) = $tmp973;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1075
frost$core$Int $tmp975 = (frost$core$Int) {1u};
frost$core$Matcher* $tmp976 = *(&local3);
frost$core$Int $tmp977;
frost$core$Matcher$get_groupCount$R$frost$core$Int(&$tmp977, $tmp976);
frost$core$Bit $tmp978 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp979 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp975, $tmp977, $tmp978);
frost$core$Int $tmp980 = $tmp979.min;
*(&local5) = $tmp980;
frost$core$Int $tmp981 = $tmp979.max;
frost$core$Bit $tmp982 = $tmp979.inclusive;
bool $tmp983 = $tmp982.value;
frost$core$Int $tmp984 = (frost$core$Int) {1u};
if ($tmp983) goto block16; else goto block17;
block16:;
int64_t $tmp985 = $tmp980.value;
int64_t $tmp986 = $tmp981.value;
bool $tmp987 = $tmp985 <= $tmp986;
frost$core$Bit $tmp988 = (frost$core$Bit) {$tmp987};
bool $tmp989 = $tmp988.value;
if ($tmp989) goto block13; else goto block14;
block17:;
int64_t $tmp990 = $tmp980.value;
int64_t $tmp991 = $tmp981.value;
bool $tmp992 = $tmp990 < $tmp991;
frost$core$Bit $tmp993 = (frost$core$Bit) {$tmp992};
bool $tmp994 = $tmp993.value;
if ($tmp994) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1076
frost$collections$Array* $tmp995 = *(&local4);
frost$core$Matcher* $tmp996 = *(&local3);
frost$core$Int $tmp997 = *(&local5);
frost$core$String* $tmp998 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q($tmp996, $tmp997);
frost$collections$Array$add$frost$collections$Array$T($tmp995, ((frost$core$Object*) $tmp998));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
frost$core$Int $tmp999 = *(&local5);
int64_t $tmp1000 = $tmp981.value;
int64_t $tmp1001 = $tmp999.value;
int64_t $tmp1002 = $tmp1000 - $tmp1001;
frost$core$Int $tmp1003 = (frost$core$Int) {$tmp1002};
if ($tmp983) goto block19; else goto block20;
block19:;
int64_t $tmp1004 = $tmp1003.value;
int64_t $tmp1005 = $tmp984.value;
bool $tmp1006 = $tmp1004 >= $tmp1005;
frost$core$Bit $tmp1007 = (frost$core$Bit) {$tmp1006};
bool $tmp1008 = $tmp1007.value;
if ($tmp1008) goto block18; else goto block14;
block20:;
int64_t $tmp1009 = $tmp1003.value;
int64_t $tmp1010 = $tmp984.value;
bool $tmp1011 = $tmp1009 > $tmp1010;
frost$core$Bit $tmp1012 = (frost$core$Bit) {$tmp1011};
bool $tmp1013 = $tmp1012.value;
if ($tmp1013) goto block18; else goto block14;
block18:;
int64_t $tmp1014 = $tmp999.value;
int64_t $tmp1015 = $tmp984.value;
int64_t $tmp1016 = $tmp1014 + $tmp1015;
frost$core$Int $tmp1017 = (frost$core$Int) {$tmp1016};
*(&local5) = $tmp1017;
goto block13;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1078
frost$collections$Array* $tmp1018 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1018)));
frost$collections$Array* $tmp1019 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp1020 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
*(&local3) = ((frost$core$Matcher*) NULL);
*(&local2) = ((frost$collections$ListView*) $tmp1018);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp1018)));
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1080
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp1021 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
*(&local3) = ((frost$core$Matcher*) NULL);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
goto block10;
block10:;
frost$collections$ListView* $tmp1022 = *(&local2);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
frost$collections$ListView* $tmp1023 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
*(&local6) = $tmp1022;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:175
frost$collections$ListView* $tmp1024 = *(&local6);
frost$core$Bit $tmp1025 = (frost$core$Bit) {$tmp1024 != NULL};
bool $tmp1026 = $tmp1025.value;
if ($tmp1026) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:176
frost$core$Weak** $tmp1027 = &param1->owner;
frost$core$Weak* $tmp1028 = *$tmp1027;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:176:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1029 = &$tmp1028->_valid;
frost$core$Bit $tmp1030 = *$tmp1029;
bool $tmp1031 = $tmp1030.value;
if ($tmp1031) goto block27; else goto block28;
block28:;
frost$core$Int $tmp1032 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1033, $tmp1032);
abort(); // unreachable
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1034 = &$tmp1028->value;
frost$core$Object* $tmp1035 = *$tmp1034;
frost$core$Frost$ref$frost$core$Object$Q($tmp1035);
frost$core$Bit $tmp1036 = (frost$core$Bit) {((org$frostlang$frostc$ClassDecl*) $tmp1035) == NULL};
bool $tmp1037 = $tmp1036.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1035);
if ($tmp1037) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:177
frost$io$OutputStream** $tmp1038 = &param0->out;
frost$io$OutputStream* $tmp1039 = *$tmp1038;
frost$collections$ListView* $tmp1040 = *(&local6);
frost$core$Int $tmp1041 = (frost$core$Int) {0u};
ITable* $tmp1042 = $tmp1040->$class->itable;
while ($tmp1042->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1042 = $tmp1042->next;
}
$fn1044 $tmp1043 = $tmp1042->methods[0];
frost$core$Object* $tmp1045 = $tmp1043($tmp1040, $tmp1041);
frost$core$String* $tmp1046 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1047, ((frost$core$String*) $tmp1045));
frost$core$String* $tmp1048 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1046, &$s1049);
$fn1051 $tmp1050 = ($fn1051) $tmp1039->$class->vtable[19];
frost$core$Error* $tmp1052 = $tmp1050($tmp1039, $tmp1048);
if ($tmp1052 == NULL) goto block29; else goto block30;
block30:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
frost$core$Bit $tmp1053 = (frost$core$Bit) {$tmp1052 != NULL};
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block31; else goto block32;
block32:;
frost$core$Int $tmp1055 = (frost$core$Int) {177u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1056, $tmp1055, &$s1057);
abort(); // unreachable
block31:;
*(&local0) = $tmp1052;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
frost$core$Frost$unref$frost$core$Object$Q($tmp1045);
frost$collections$ListView* $tmp1058 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1059 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$String* $tmp1060 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1060));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block29:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1052));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
frost$core$Frost$unref$frost$core$Object$Q($tmp1045);
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:179
frost$collections$ListView* $tmp1061 = *(&local6);
frost$core$Int $tmp1062 = (frost$core$Int) {1u};
ITable* $tmp1063 = $tmp1061->$class->itable;
while ($tmp1063->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1063 = $tmp1063->next;
}
$fn1065 $tmp1064 = $tmp1063->methods[0];
frost$core$Object* $tmp1066 = $tmp1064($tmp1061, $tmp1062);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp1066)));
frost$core$String* $tmp1067 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
*(&local1) = ((frost$core$String*) $tmp1066);
frost$core$Frost$unref$frost$core$Object$Q($tmp1066);
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:181
frost$io$OutputStream** $tmp1068 = &param0->out;
frost$io$OutputStream* $tmp1069 = *$tmp1068;
$fn1071 $tmp1070 = ($fn1071) $tmp1069->$class->vtable[19];
frost$core$Error* $tmp1072 = $tmp1070($tmp1069, &$s1073);
if ($tmp1072 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
frost$core$Bit $tmp1074 = (frost$core$Bit) {$tmp1072 != NULL};
bool $tmp1075 = $tmp1074.value;
if ($tmp1075) goto block35; else goto block36;
block36:;
frost$core$Int $tmp1076 = (frost$core$Int) {181u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1077, $tmp1076, &$s1078);
abort(); // unreachable
block35:;
*(&local0) = $tmp1072;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
frost$collections$ListView* $tmp1079 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1080 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$String* $tmp1081 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1072));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:182
frost$io$OutputStream** $tmp1082 = &param0->out;
frost$io$OutputStream* $tmp1083 = *$tmp1082;
org$frostlang$frostc$Annotations** $tmp1084 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1085 = *$tmp1084;
$fn1087 $tmp1086 = ($fn1087) $tmp1083->$class->vtable[18];
frost$core$Error* $tmp1088 = $tmp1086($tmp1083, ((frost$core$Object*) $tmp1085));
if ($tmp1088 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
frost$core$Bit $tmp1089 = (frost$core$Bit) {$tmp1088 != NULL};
bool $tmp1090 = $tmp1089.value;
if ($tmp1090) goto block39; else goto block40;
block40:;
frost$core$Int $tmp1091 = (frost$core$Int) {182u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1092, $tmp1091, &$s1093);
abort(); // unreachable
block39:;
*(&local0) = $tmp1088;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
frost$collections$ListView* $tmp1094 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1094));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1095 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$String* $tmp1096 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1096));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1088));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:183
org$frostlang$frostc$ClassDecl$Kind* $tmp1097 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1098 = *$tmp1097;
frost$core$Int $tmp1099 = $tmp1098.$rawValue;
frost$core$Int $tmp1100 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:184:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1101 = $tmp1099.value;
int64_t $tmp1102 = $tmp1100.value;
bool $tmp1103 = $tmp1101 == $tmp1102;
frost$core$Bit $tmp1104 = (frost$core$Bit) {$tmp1103};
bool $tmp1105 = $tmp1104.value;
if ($tmp1105) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:184
frost$io$OutputStream** $tmp1106 = &param0->out;
frost$io$OutputStream* $tmp1107 = *$tmp1106;
$fn1109 $tmp1108 = ($fn1109) $tmp1107->$class->vtable[17];
frost$core$Error* $tmp1110 = $tmp1108($tmp1107, &$s1111);
if ($tmp1110 == NULL) goto block45; else goto block46;
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
frost$core$Bit $tmp1112 = (frost$core$Bit) {$tmp1110 != NULL};
bool $tmp1113 = $tmp1112.value;
if ($tmp1113) goto block47; else goto block48;
block48:;
frost$core$Int $tmp1114 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1115, $tmp1114, &$s1116);
abort(); // unreachable
block47:;
*(&local0) = $tmp1110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
frost$collections$ListView* $tmp1117 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1118 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1118));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$String* $tmp1119 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
goto block41;
block43:;
frost$core$Int $tmp1120 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:185:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1121 = $tmp1099.value;
int64_t $tmp1122 = $tmp1120.value;
bool $tmp1123 = $tmp1121 == $tmp1122;
frost$core$Bit $tmp1124 = (frost$core$Bit) {$tmp1123};
bool $tmp1125 = $tmp1124.value;
if ($tmp1125) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:185
frost$io$OutputStream** $tmp1126 = &param0->out;
frost$io$OutputStream* $tmp1127 = *$tmp1126;
$fn1129 $tmp1128 = ($fn1129) $tmp1127->$class->vtable[17];
frost$core$Error* $tmp1130 = $tmp1128($tmp1127, &$s1131);
if ($tmp1130 == NULL) goto block52; else goto block53;
block53:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
frost$core$Bit $tmp1132 = (frost$core$Bit) {$tmp1130 != NULL};
bool $tmp1133 = $tmp1132.value;
if ($tmp1133) goto block54; else goto block55;
block55:;
frost$core$Int $tmp1134 = (frost$core$Int) {185u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1135, $tmp1134, &$s1136);
abort(); // unreachable
block54:;
*(&local0) = $tmp1130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
frost$collections$ListView* $tmp1137 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1138 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1138));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$String* $tmp1139 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
goto block41;
block50:;
frost$core$Int $tmp1140 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from StubCodeGenerator.frost:186:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1141 = $tmp1099.value;
int64_t $tmp1142 = $tmp1140.value;
bool $tmp1143 = $tmp1141 == $tmp1142;
frost$core$Bit $tmp1144 = (frost$core$Bit) {$tmp1143};
bool $tmp1145 = $tmp1144.value;
if ($tmp1145) goto block56; else goto block41;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:186
frost$io$OutputStream** $tmp1146 = &param0->out;
frost$io$OutputStream* $tmp1147 = *$tmp1146;
$fn1149 $tmp1148 = ($fn1149) $tmp1147->$class->vtable[17];
frost$core$Error* $tmp1150 = $tmp1148($tmp1147, &$s1151);
if ($tmp1150 == NULL) goto block58; else goto block59;
block59:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
frost$core$Bit $tmp1152 = (frost$core$Bit) {$tmp1150 != NULL};
bool $tmp1153 = $tmp1152.value;
if ($tmp1153) goto block60; else goto block61;
block61:;
frost$core$Int $tmp1154 = (frost$core$Int) {186u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1155, $tmp1154, &$s1156);
abort(); // unreachable
block60:;
*(&local0) = $tmp1150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
frost$collections$ListView* $tmp1157 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1158 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1158));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$String* $tmp1159 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1159));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:188
frost$io$OutputStream** $tmp1160 = &param0->out;
frost$io$OutputStream* $tmp1161 = *$tmp1160;
frost$core$String* $tmp1162 = *(&local1);
$fn1164 $tmp1163 = ($fn1164) $tmp1161->$class->vtable[17];
frost$core$Error* $tmp1165 = $tmp1163($tmp1161, $tmp1162);
if ($tmp1165 == NULL) goto block62; else goto block63;
block63:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$core$Bit $tmp1166 = (frost$core$Bit) {$tmp1165 != NULL};
bool $tmp1167 = $tmp1166.value;
if ($tmp1167) goto block64; else goto block65;
block65:;
frost$core$Int $tmp1168 = (frost$core$Int) {188u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1169, $tmp1168, &$s1170);
abort(); // unreachable
block64:;
*(&local0) = $tmp1165;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
frost$collections$ListView* $tmp1171 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1172 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$String* $tmp1173 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1173));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block62:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1165));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:189
frost$collections$List** $tmp1174 = &param1->parameters;
frost$collections$List* $tmp1175 = *$tmp1174;
ITable* $tmp1176 = ((frost$collections$CollectionView*) $tmp1175)->$class->itable;
while ($tmp1176->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1176 = $tmp1176->next;
}
$fn1178 $tmp1177 = $tmp1176->methods[0];
frost$core$Int $tmp1179 = $tmp1177(((frost$collections$CollectionView*) $tmp1175));
frost$core$Int $tmp1180 = (frost$core$Int) {0u};
int64_t $tmp1181 = $tmp1179.value;
int64_t $tmp1182 = $tmp1180.value;
bool $tmp1183 = $tmp1181 > $tmp1182;
frost$core$Bit $tmp1184 = (frost$core$Bit) {$tmp1183};
bool $tmp1185 = $tmp1184.value;
if ($tmp1185) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:190
frost$io$OutputStream** $tmp1186 = &param0->out;
frost$io$OutputStream* $tmp1187 = *$tmp1186;
frost$collections$List** $tmp1188 = &param1->parameters;
frost$collections$List* $tmp1189 = *$tmp1188;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure12));
org$frostlang$frostc$StubCodeGenerator$_Closure12* $tmp1190 = (org$frostlang$frostc$StubCodeGenerator$_Closure12*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure12$class);
org$frostlang$frostc$StubCodeGenerator$_Closure12$init$org$frostlang$frostc$StubCodeGenerator($tmp1190, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1192 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:191:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1193 = &$tmp1192->pointer;
*$tmp1193 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure12$$anonymous11$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$core$Object** $tmp1194 = &$tmp1192->target;
frost$core$Object* $tmp1195 = *$tmp1194;
frost$core$Frost$unref$frost$core$Object$Q($tmp1195);
frost$core$Object** $tmp1196 = &$tmp1192->target;
*$tmp1196 = ((frost$core$Object*) $tmp1190);
ITable* $tmp1197 = ((frost$collections$CollectionView*) $tmp1189)->$class->itable;
while ($tmp1197->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1197 = $tmp1197->next;
}
$fn1199 $tmp1198 = $tmp1197->methods[9];
frost$collections$Array* $tmp1200 = $tmp1198(((frost$collections$CollectionView*) $tmp1189), $tmp1192);
ITable* $tmp1201 = ((frost$collections$CollectionView*) $tmp1200)->$class->itable;
while ($tmp1201->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1201 = $tmp1201->next;
}
$fn1203 $tmp1202 = $tmp1201->methods[3];
frost$core$String* $tmp1204 = $tmp1202(((frost$collections$CollectionView*) $tmp1200), &$s1205);
frost$core$String* $tmp1206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1207, $tmp1204);
frost$core$String* $tmp1208 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1206, &$s1209);
$fn1211 $tmp1210 = ($fn1211) $tmp1187->$class->vtable[17];
frost$core$Error* $tmp1212 = $tmp1210($tmp1187, $tmp1208);
if ($tmp1212 == NULL) goto block69; else goto block70;
block70:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$core$Bit $tmp1213 = (frost$core$Bit) {$tmp1212 != NULL};
bool $tmp1214 = $tmp1213.value;
if ($tmp1214) goto block71; else goto block72;
block72:;
frost$core$Int $tmp1215 = (frost$core$Int) {190u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1216, $tmp1215, &$s1217);
abort(); // unreachable
block71:;
*(&local0) = $tmp1212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$collections$ListView* $tmp1218 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1219 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$String* $tmp1220 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1192));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
goto block67;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:193
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1221));
frost$core$String* $tmp1222 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
*(&local7) = &$s1223;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:194
org$frostlang$frostc$ClassDecl$Kind* $tmp1224 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1225 = *$tmp1224;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1226;
$tmp1226 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1226->value = $tmp1225;
frost$core$Int $tmp1227 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from StubCodeGenerator.frost:194:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp1228 = &(&local9)->$rawValue;
*$tmp1228 = $tmp1227;
org$frostlang$frostc$ClassDecl$Kind $tmp1229 = *(&local9);
*(&local8) = $tmp1229;
org$frostlang$frostc$ClassDecl$Kind $tmp1230 = *(&local8);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1231;
$tmp1231 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1231->value = $tmp1230;
ITable* $tmp1232 = ((frost$core$Equatable*) $tmp1226)->$class->itable;
while ($tmp1232->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1232 = $tmp1232->next;
}
$fn1234 $tmp1233 = $tmp1232->methods[1];
frost$core$Bit $tmp1235 = $tmp1233(((frost$core$Equatable*) $tmp1226), ((frost$core$Equatable*) $tmp1231));
bool $tmp1236 = $tmp1235.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1231)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1226)));
if ($tmp1236) goto block73; else goto block74;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:195
org$frostlang$frostc$Type** $tmp1237 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp1238 = *$tmp1237;
frost$core$Bit $tmp1239 = (frost$core$Bit) {$tmp1238 != NULL};
bool $tmp1240 = $tmp1239.value;
if ($tmp1240) goto block78; else goto block77;
block78:;
org$frostlang$frostc$ClassDecl$Kind* $tmp1241 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1242 = *$tmp1241;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1243;
$tmp1243 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1243->value = $tmp1242;
frost$core$Int $tmp1244 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int):org.frostlang.frostc.ClassDecl.Kind from StubCodeGenerator.frost:195:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int* $tmp1245 = &(&local11)->$rawValue;
*$tmp1245 = $tmp1244;
org$frostlang$frostc$ClassDecl$Kind $tmp1246 = *(&local11);
*(&local10) = $tmp1246;
org$frostlang$frostc$ClassDecl$Kind $tmp1247 = *(&local10);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1248;
$tmp1248 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1248->value = $tmp1247;
ITable* $tmp1249 = ((frost$core$Equatable*) $tmp1243)->$class->itable;
while ($tmp1249->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1249 = $tmp1249->next;
}
$fn1251 $tmp1250 = $tmp1249->methods[1];
frost$core$Bit $tmp1252 = $tmp1250(((frost$core$Equatable*) $tmp1243), ((frost$core$Equatable*) $tmp1248));
bool $tmp1253 = $tmp1252.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1248)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1243)));
if ($tmp1253) goto block76; else goto block77;
block76:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:196
frost$io$OutputStream** $tmp1254 = &param0->out;
frost$io$OutputStream* $tmp1255 = *$tmp1254;
frost$core$String* $tmp1256 = *(&local7);
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:196:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$String* $tmp1257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1256, &$s1258);
org$frostlang$frostc$Type** $tmp1259 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp1260 = *$tmp1259;
frost$core$String* $tmp1261 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1260);
frost$core$String* $tmp1262 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1257, $tmp1261);
frost$core$String* $tmp1263 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1262, &$s1264);
$fn1266 $tmp1265 = ($fn1266) $tmp1255->$class->vtable[17];
frost$core$Error* $tmp1267 = $tmp1265($tmp1255, $tmp1263);
if ($tmp1267 == NULL) goto block81; else goto block82;
block82:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
frost$core$Bit $tmp1268 = (frost$core$Bit) {$tmp1267 != NULL};
bool $tmp1269 = $tmp1268.value;
if ($tmp1269) goto block83; else goto block84;
block84:;
frost$core$Int $tmp1270 = (frost$core$Int) {196u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1271, $tmp1270, &$s1272);
abort(); // unreachable
block83:;
*(&local0) = $tmp1267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
frost$core$String* $tmp1273 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1274 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1275 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$String* $tmp1276 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block81:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:197
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1277));
frost$core$String* $tmp1278 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1278));
*(&local7) = &$s1279;
goto block77;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:199
frost$collections$Array** $tmp1280 = &param1->rawInterfaces;
frost$collections$Array* $tmp1281 = *$tmp1280;
ITable* $tmp1282 = ((frost$collections$Iterable*) $tmp1281)->$class->itable;
while ($tmp1282->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1282 = $tmp1282->next;
}
$fn1284 $tmp1283 = $tmp1282->methods[0];
frost$collections$Iterator* $tmp1285 = $tmp1283(((frost$collections$Iterable*) $tmp1281));
goto block85;
block85:;
ITable* $tmp1286 = $tmp1285->$class->itable;
while ($tmp1286->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1286 = $tmp1286->next;
}
$fn1288 $tmp1287 = $tmp1286->methods[0];
frost$core$Bit $tmp1289 = $tmp1287($tmp1285);
bool $tmp1290 = $tmp1289.value;
if ($tmp1290) goto block87; else goto block86;
block86:;
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1291 = $tmp1285->$class->itable;
while ($tmp1291->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1291 = $tmp1291->next;
}
$fn1293 $tmp1292 = $tmp1291->methods[1];
frost$core$Object* $tmp1294 = $tmp1292($tmp1285);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1294)));
org$frostlang$frostc$Type* $tmp1295 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp1294);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:200
frost$io$OutputStream** $tmp1296 = &param0->out;
frost$io$OutputStream* $tmp1297 = *$tmp1296;
frost$core$String* $tmp1298 = *(&local7);
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:200:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$core$String* $tmp1299 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1298, &$s1300);
org$frostlang$frostc$Type* $tmp1301 = *(&local12);
frost$core$String* $tmp1302 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1301);
frost$core$String* $tmp1303 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1299, $tmp1302);
frost$core$String* $tmp1304 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1303, &$s1305);
$fn1307 $tmp1306 = ($fn1307) $tmp1297->$class->vtable[17];
frost$core$Error* $tmp1308 = $tmp1306($tmp1297, $tmp1304);
if ($tmp1308 == NULL) goto block89; else goto block90;
block90:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
frost$core$Bit $tmp1309 = (frost$core$Bit) {$tmp1308 != NULL};
bool $tmp1310 = $tmp1309.value;
if ($tmp1310) goto block91; else goto block92;
block92:;
frost$core$Int $tmp1311 = (frost$core$Int) {200u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1312, $tmp1311, &$s1313);
abort(); // unreachable
block91:;
*(&local0) = $tmp1308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$core$Frost$unref$frost$core$Object$Q($tmp1294);
org$frostlang$frostc$Type* $tmp1314 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
frost$core$String* $tmp1315 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1315));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1316 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1317 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$String* $tmp1318 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block89:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1302));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:201
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1319));
frost$core$String* $tmp1320 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1320));
*(&local7) = &$s1321;
frost$core$Frost$unref$frost$core$Object$Q($tmp1294);
org$frostlang$frostc$Type* $tmp1322 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
goto block85;
block87:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
goto block74;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:204
frost$io$OutputStream** $tmp1323 = &param0->out;
frost$io$OutputStream* $tmp1324 = *$tmp1323;
$fn1326 $tmp1325 = ($fn1326) $tmp1324->$class->vtable[17];
frost$core$Error* $tmp1327 = $tmp1325($tmp1324, &$s1328);
if ($tmp1327 == NULL) goto block93; else goto block94;
block94:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$Bit $tmp1329 = (frost$core$Bit) {$tmp1327 != NULL};
bool $tmp1330 = $tmp1329.value;
if ($tmp1330) goto block95; else goto block96;
block96:;
frost$core$Int $tmp1331 = (frost$core$Int) {204u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1332, $tmp1331, &$s1333);
abort(); // unreachable
block95:;
*(&local0) = $tmp1327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$String* $tmp1334 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1335 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1336 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$String* $tmp1337 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block93:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:205
frost$collections$Array** $tmp1338 = &param1->choiceCases;
frost$collections$Array* $tmp1339 = *$tmp1338;
ITable* $tmp1340 = ((frost$collections$Iterable*) $tmp1339)->$class->itable;
while ($tmp1340->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1340 = $tmp1340->next;
}
$fn1342 $tmp1341 = $tmp1340->methods[0];
frost$collections$Iterator* $tmp1343 = $tmp1341(((frost$collections$Iterable*) $tmp1339));
goto block97;
block97:;
ITable* $tmp1344 = $tmp1343->$class->itable;
while ($tmp1344->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1344 = $tmp1344->next;
}
$fn1346 $tmp1345 = $tmp1344->methods[0];
frost$core$Bit $tmp1347 = $tmp1345($tmp1343);
bool $tmp1348 = $tmp1347.value;
if ($tmp1348) goto block99; else goto block98;
block98:;
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp1349 = $tmp1343->$class->itable;
while ($tmp1349->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1349 = $tmp1349->next;
}
$fn1351 $tmp1350 = $tmp1349->methods[1];
frost$core$Object* $tmp1352 = $tmp1350($tmp1343);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp1352)));
org$frostlang$frostc$ChoiceCase* $tmp1353 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) $tmp1352);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:206
org$frostlang$frostc$ChoiceCase* $tmp1354 = *(&local13);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(param0, $tmp1354);
frost$core$Frost$unref$frost$core$Object$Q($tmp1352);
org$frostlang$frostc$ChoiceCase* $tmp1355 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block97;
block99:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:208
frost$collections$Array** $tmp1356 = &param1->classes;
frost$collections$Array* $tmp1357 = *$tmp1356;
ITable* $tmp1358 = ((frost$collections$Iterable*) $tmp1357)->$class->itable;
while ($tmp1358->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1358 = $tmp1358->next;
}
$fn1360 $tmp1359 = $tmp1358->methods[0];
frost$collections$Iterator* $tmp1361 = $tmp1359(((frost$collections$Iterable*) $tmp1357));
goto block100;
block100:;
ITable* $tmp1362 = $tmp1361->$class->itable;
while ($tmp1362->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1362 = $tmp1362->next;
}
$fn1364 $tmp1363 = $tmp1362->methods[0];
frost$core$Bit $tmp1365 = $tmp1363($tmp1361);
bool $tmp1366 = $tmp1365.value;
if ($tmp1366) goto block102; else goto block101;
block101:;
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1367 = $tmp1361->$class->itable;
while ($tmp1367->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1367 = $tmp1367->next;
}
$fn1369 $tmp1368 = $tmp1367->methods[1];
frost$core$Object* $tmp1370 = $tmp1368($tmp1361);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1370)));
org$frostlang$frostc$ClassDecl* $tmp1371 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) $tmp1370);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:209
org$frostlang$frostc$ClassDecl* $tmp1372 = *(&local14);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl(param0, $tmp1372);
frost$core$Frost$unref$frost$core$Object$Q($tmp1370);
org$frostlang$frostc$ClassDecl* $tmp1373 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block100;
block102:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:211
frost$collections$Array** $tmp1374 = &param1->fields;
frost$collections$Array* $tmp1375 = *$tmp1374;
ITable* $tmp1376 = ((frost$collections$Iterable*) $tmp1375)->$class->itable;
while ($tmp1376->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1376 = $tmp1376->next;
}
$fn1378 $tmp1377 = $tmp1376->methods[0];
frost$collections$Iterator* $tmp1379 = $tmp1377(((frost$collections$Iterable*) $tmp1375));
goto block103;
block103:;
ITable* $tmp1380 = $tmp1379->$class->itable;
while ($tmp1380->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1380 = $tmp1380->next;
}
$fn1382 $tmp1381 = $tmp1380->methods[0];
frost$core$Bit $tmp1383 = $tmp1381($tmp1379);
bool $tmp1384 = $tmp1383.value;
if ($tmp1384) goto block105; else goto block104;
block104:;
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp1385 = $tmp1379->$class->itable;
while ($tmp1385->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1385 = $tmp1385->next;
}
$fn1387 $tmp1386 = $tmp1385->methods[1];
frost$core$Object* $tmp1388 = $tmp1386($tmp1379);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp1388)));
org$frostlang$frostc$FieldDecl* $tmp1389 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) $tmp1388);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:212
org$frostlang$frostc$FieldDecl* $tmp1390 = *(&local15);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(param0, $tmp1390);
frost$core$Frost$unref$frost$core$Object$Q($tmp1388);
org$frostlang$frostc$FieldDecl* $tmp1391 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block103;
block105:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:214
frost$collections$Array** $tmp1392 = &param1->methods;
frost$collections$Array* $tmp1393 = *$tmp1392;
ITable* $tmp1394 = ((frost$collections$Iterable*) $tmp1393)->$class->itable;
while ($tmp1394->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1394 = $tmp1394->next;
}
$fn1396 $tmp1395 = $tmp1394->methods[0];
frost$collections$Iterator* $tmp1397 = $tmp1395(((frost$collections$Iterable*) $tmp1393));
goto block106;
block106:;
ITable* $tmp1398 = $tmp1397->$class->itable;
while ($tmp1398->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1398 = $tmp1398->next;
}
$fn1400 $tmp1399 = $tmp1398->methods[0];
frost$core$Bit $tmp1401 = $tmp1399($tmp1397);
bool $tmp1402 = $tmp1401.value;
if ($tmp1402) goto block108; else goto block107;
block107:;
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1403 = $tmp1397->$class->itable;
while ($tmp1403->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1403 = $tmp1403->next;
}
$fn1405 $tmp1404 = $tmp1403->methods[1];
frost$core$Object* $tmp1406 = $tmp1404($tmp1397);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1406)));
org$frostlang$frostc$MethodDecl* $tmp1407 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
*(&local16) = ((org$frostlang$frostc$MethodDecl*) $tmp1406);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:215
org$frostlang$frostc$MethodDecl* $tmp1408 = *(&local16);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(param0, $tmp1408);
frost$core$Frost$unref$frost$core$Object$Q($tmp1406);
org$frostlang$frostc$MethodDecl* $tmp1409 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1409));
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block106;
block108:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:217
frost$io$OutputStream** $tmp1410 = &param0->out;
frost$io$OutputStream* $tmp1411 = *$tmp1410;
$fn1413 $tmp1412 = ($fn1413) $tmp1411->$class->vtable[17];
frost$core$Error* $tmp1414 = $tmp1412($tmp1411, &$s1415);
if ($tmp1414 == NULL) goto block109; else goto block110;
block110:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
frost$core$Bit $tmp1416 = (frost$core$Bit) {$tmp1414 != NULL};
bool $tmp1417 = $tmp1416.value;
if ($tmp1417) goto block111; else goto block112;
block112:;
frost$core$Int $tmp1418 = (frost$core$Int) {217u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1419, $tmp1418, &$s1420);
abort(); // unreachable
block111:;
*(&local0) = $tmp1414;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
frost$core$String* $tmp1421 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1422 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1422));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1423 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1423));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$String* $tmp1424 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1424));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block109:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1414));
frost$core$String* $tmp1425 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1426 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1427 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp966));
frost$core$String* $tmp1428 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Error* $tmp1429 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:220
frost$core$Error* $tmp1430 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:220:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn1432 $tmp1431 = ($fn1432) ((frost$core$Object*) $tmp1430)->$class->vtable[0];
frost$core$String* $tmp1433 = $tmp1431(((frost$core$Object*) $tmp1430));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1433);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:221
frost$core$Int $tmp1434 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1434);
frost$core$Int $tmp1435 = (frost$core$Int) {221u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1436, $tmp1435, &$s1437);
abort(); // unreachable

}
void org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:227
frost$core$Weak** $tmp1438 = &param1->owner;
frost$core$Weak* $tmp1439 = *$tmp1438;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:227:14
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:40
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.frost:40:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:45
frost$core$Bit* $tmp1440 = &$tmp1439->_valid;
frost$core$Bit $tmp1441 = *$tmp1440;
bool $tmp1442 = $tmp1441.value;
if ($tmp1442) goto block6; else goto block7;
block7:;
frost$core$Int $tmp1443 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s1444, $tmp1443);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Weak.frost:41
frost$core$Object** $tmp1445 = &$tmp1439->value;
frost$core$Object* $tmp1446 = *$tmp1445;
frost$core$Frost$ref$frost$core$Object$Q($tmp1446);
frost$core$Bit $tmp1447 = (frost$core$Bit) {((org$frostlang$frostc$ClassDecl*) $tmp1446) == NULL};
bool $tmp1448 = $tmp1447.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1446);
if ($tmp1448) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Annotations** $tmp1449 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1450 = *$tmp1449;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from StubCodeGenerator.frost:227:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:158
frost$core$Int* $tmp1451 = &$tmp1450->flags;
frost$core$Int $tmp1452 = *$tmp1451;
frost$core$Int $tmp1453 = (frost$core$Int) {8192u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Annotations.frost:158:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
int64_t $tmp1454 = $tmp1452.value;
int64_t $tmp1455 = $tmp1453.value;
int64_t $tmp1456 = $tmp1454 & $tmp1455;
frost$core$Int $tmp1457 = (frost$core$Int) {$tmp1456};
frost$core$Int $tmp1458 = (frost$core$Int) {0u};
int64_t $tmp1459 = $tmp1457.value;
int64_t $tmp1460 = $tmp1458.value;
bool $tmp1461 = $tmp1459 != $tmp1460;
frost$core$Bit $tmp1462 = (frost$core$Bit) {$tmp1461};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:227:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1463 = $tmp1462.value;
bool $tmp1464 = !$tmp1463;
frost$core$Bit $tmp1465 = (frost$core$Bit) {$tmp1464};
bool $tmp1466 = $tmp1465.value;
if ($tmp1466) goto block1; else goto block2;
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
frost$core$Weak** $tmp1467 = &param0->compiler;
frost$core$Weak* $tmp1468 = *$tmp1467;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1468));
frost$io$OutputStream** $tmp1469 = &param0->out;
frost$io$OutputStream* $tmp1470 = *$tmp1469;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1470));
return;

}

