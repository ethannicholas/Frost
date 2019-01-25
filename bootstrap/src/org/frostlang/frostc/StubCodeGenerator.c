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
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "org/frostlang/frostc/StubCodeGenerator/_Closure2.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Method.h"
#include "frost/collections/Array.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/StubCodeGenerator/_Closure4.h"
#include "org/frostlang/frostc/ChoiceCase.h"
#include "frost/core/Error.h"
#include "org/frostlang/frostc/StubCodeGenerator/_Closure6.h"
#include "frost/io/Console.h"
#include "frost/core/System.h"
#include "org/frostlang/frostc/FieldDecl.h"
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/StubCodeGenerator/_Closure8.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/RegularExpression.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "frost/collections/List.h"
#include "org/frostlang/frostc/StubCodeGenerator/_Closure10.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "org/frostlang/frostc/IR.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } org$frostlang$frostc$StubCodeGenerator$_org$frostlang$frostc$CodeGenerator = { (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class, NULL, { org$frostlang$frostc$StubCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$StubCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$StubCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$StubCodeGenerator$finish} };

static frost$core$String $s1;
org$frostlang$frostc$StubCodeGenerator$class_type org$frostlang$frostc$StubCodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$StubCodeGenerator$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$StubCodeGenerator$cleanup, org$frostlang$frostc$StubCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String, org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$StubCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$StubCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$StubCodeGenerator$finish} };

typedef frost$core$Int64 (*$fn15)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn26)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$Q$GT);
typedef frost$core$String* (*$fn29)(org$frostlang$frostc$StubCodeGenerator$_Closure2*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn33)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn37)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Int64 (*$fn50)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn59)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn66)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$ListView* (*$fn118)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$Q$GT);
typedef frost$core$String* (*$fn121)(org$frostlang$frostc$StubCodeGenerator$_Closure4*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn125)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn129)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn180)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn186)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn199)(org$frostlang$frostc$StubCodeGenerator$_Closure6*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn203)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn207)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn215)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn220)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn244)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn253)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn262)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn271)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn279)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn284)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn293)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn303)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn309)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn317)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn322)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn342)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn353)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn362)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn375)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn386)(org$frostlang$frostc$StubCodeGenerator$_Closure8*, org$frostlang$frostc$MethodDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn390)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn394)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn402)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn407)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn417)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn421)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn426)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn449)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn460)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn472)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn478)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn487)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn500)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn510)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Object* (*$fn548)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn555)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Object* (*$fn563)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn569)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn579)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn592)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn603)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn614)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn623)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn631)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn644)(org$frostlang$frostc$StubCodeGenerator$_Closure10*, org$frostlang$frostc$ClassDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn648)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn652)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn660)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn675)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn690)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn706)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn718)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn722)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn727)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn742)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn755)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn765)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn769)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn774)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn783)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn787)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn792)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn801)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn805)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn810)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn819)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn823)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn828)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn836)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 38, -6371532287653990932, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s246 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s264 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x7d", 2, 22749, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s512 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x7d", 2, 22749, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x3f\x3a\x5c\x77\x7c\x5c\x2e\x29\x2b\x29\x5c\x2e\x28\x5c\x77\x2b\x29", 19, -9118778076962498171, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x61\x63\x6b\x61\x67\x65\x20", 8, 22940502189900249, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, 17289646011, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s605 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s658 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s711 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s713 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s735 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s740 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s757 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };

void org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream(org$frostlang$frostc$StubCodeGenerator* param0, frost$io$OutputStream* param1) {

// line 6
frost$core$Weak* $tmp2 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp2, ((frost$core$Object*) ((org$frostlang$frostc$Compiler*) NULL)));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$core$Weak** $tmp3 = &param0->compiler;
frost$core$Weak* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$core$Weak** $tmp5 = &param0->compiler;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// line 11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$OutputStream** $tmp6 = &param0->out;
frost$io$OutputStream* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$io$OutputStream** $tmp8 = &param0->out;
*$tmp8 = param1;
return;

}
void org$frostlang$frostc$StubCodeGenerator$setCompiler$org$frostlang$frostc$Compiler(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$Compiler* param1) {

// line 16
frost$core$Weak* $tmp9 = (frost$core$Weak*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Weak$class);
frost$core$Weak$init$frost$core$Weak$T($tmp9, ((frost$core$Object*) param1));
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
// line 20
ITable* $tmp13 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
frost$core$Int64 $tmp16 = $tmp14(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp17 = (frost$core$Int64) {1};
int64_t $tmp18 = $tmp16.value;
int64_t $tmp19 = $tmp17.value;
int64_t $tmp20 = $tmp18 - $tmp19;
frost$core$Int64 $tmp21 = (frost$core$Int64) {$tmp20};
frost$core$Bit $tmp22 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp23 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { .nonnull = false }), ((frost$core$Int64$nullable) { $tmp21, true }), $tmp22);
ITable* $tmp24 = param1->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp24 = $tmp24->next;
}
$fn26 $tmp25 = $tmp24->methods[2];
frost$collections$ListView* $tmp27 = $tmp25(param1, $tmp23);
org$frostlang$frostc$StubCodeGenerator$_Closure2* $tmp28 = (org$frostlang$frostc$StubCodeGenerator$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure2$class);
org$frostlang$frostc$StubCodeGenerator$_Closure2$init$org$frostlang$frostc$StubCodeGenerator($tmp28, param0);
frost$core$MutableMethod* $tmp30 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp30, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure2$$anonymous1$org$frostlang$frostc$Type$R$frost$core$String), ((frost$core$Object*) $tmp28));
ITable* $tmp31 = ((frost$collections$CollectionView*) $tmp27)->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[8];
frost$collections$Array* $tmp34 = $tmp32(((frost$collections$CollectionView*) $tmp27), ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp30)));
ITable* $tmp35 = ((frost$collections$CollectionView*) $tmp34)->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[2];
frost$core$String* $tmp38 = $tmp36(((frost$collections$CollectionView*) $tmp34), &$s39);
frost$core$String* $tmp40 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s41, $tmp38);
frost$core$String* $tmp42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s43, param2);
frost$core$String* $tmp44 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp42, &$s45);
frost$core$String* $tmp46 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp40, $tmp44);
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$String* $tmp47 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local0) = $tmp46;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// line 22
ITable* $tmp48 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[0];
frost$core$Int64 $tmp51 = $tmp49(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp52 = (frost$core$Int64) {1};
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53 - $tmp54;
frost$core$Int64 $tmp56 = (frost$core$Int64) {$tmp55};
ITable* $tmp57 = param1->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
frost$core$Object* $tmp60 = $tmp58(param1, $tmp56);
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp60)));
org$frostlang$frostc$Type* $tmp61 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local1) = ((org$frostlang$frostc$Type*) $tmp60);
frost$core$Frost$unref$frost$core$Object$Q($tmp60);
// line 23
org$frostlang$frostc$Type* $tmp62 = *(&local1);
org$frostlang$frostc$Type* $tmp63 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp64 = ((frost$core$Equatable*) $tmp62)->$class->itable;
while ($tmp64->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp64 = $tmp64->next;
}
$fn66 $tmp65 = $tmp64->methods[1];
frost$core$Bit $tmp67 = $tmp65(((frost$core$Equatable*) $tmp62), ((frost$core$Equatable*) $tmp63));
bool $tmp68 = $tmp67.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
if ($tmp68) goto block1; else goto block2;
block1:;
// line 24
frost$core$String* $tmp69 = *(&local0);
org$frostlang$frostc$Type* $tmp70 = *(&local1);
frost$core$String* $tmp71 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp70);
frost$core$String* $tmp72 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp69, $tmp71);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$String* $tmp73 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local0) = $tmp72;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
goto block2;
block2:;
// line 26
frost$core$String* $tmp74 = *(&local0);
frost$core$String* $tmp75 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp74, &$s76);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
org$frostlang$frostc$Type* $tmp77 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp78 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local0) = ((frost$core$String*) NULL);
return $tmp75;

}
frost$core$String* org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// line 30
org$frostlang$frostc$Type$Kind* $tmp79 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp80 = *$tmp79;
frost$core$Int64 $tmp81 = $tmp80.$rawValue;
frost$core$Int64 $tmp82 = (frost$core$Int64) {11};
frost$core$Bit $tmp83 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp82);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp85 = (frost$core$Int64) {12};
frost$core$Bit $tmp86 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp85);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block2; else goto block4;
block2:;
// line 32
frost$core$String** $tmp88 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp89 = *$tmp88;
frost$core$String** $tmp90 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp91 = *$tmp90;
frost$core$String** $tmp92 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp93 = *$tmp92;
frost$core$String$Index$nullable $tmp94 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp93, &$s95);
frost$core$String$Index $tmp96 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp91, ((frost$core$String$Index) $tmp94.value));
frost$core$Bit $tmp97 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp98 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp96, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp97);
frost$core$String* $tmp99 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp89, $tmp98);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
return $tmp99;
block4:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {10};
frost$core$Bit $tmp101 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp100);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block5; else goto block6;
block5:;
// line 35
org$frostlang$frostc$FixedArray** $tmp103 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp104 = *$tmp103;
frost$core$Int64 $tmp105 = (frost$core$Int64) {0};
frost$core$Object* $tmp106 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp104, $tmp105);
frost$core$String* $tmp107 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp106));
frost$core$String* $tmp108 = frost$core$String$get_asString$R$frost$core$String($tmp107);
frost$core$String* $tmp109 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp108, &$s110);
org$frostlang$frostc$FixedArray** $tmp111 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp112 = *$tmp111;
frost$core$Int64 $tmp113 = (frost$core$Int64) {1};
frost$core$Bit $tmp114 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp115 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp113, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp114);
ITable* $tmp116 = ((frost$collections$ListView*) $tmp112)->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp116 = $tmp116->next;
}
$fn118 $tmp117 = $tmp116->methods[2];
frost$collections$ListView* $tmp119 = $tmp117(((frost$collections$ListView*) $tmp112), $tmp115);
org$frostlang$frostc$StubCodeGenerator$_Closure4* $tmp120 = (org$frostlang$frostc$StubCodeGenerator$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure4$class);
org$frostlang$frostc$StubCodeGenerator$_Closure4$init$org$frostlang$frostc$StubCodeGenerator($tmp120, param0);
frost$core$MutableMethod* $tmp122 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp122, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure4$$anonymous3$org$frostlang$frostc$Type$R$frost$core$String), ((frost$core$Object*) $tmp120));
ITable* $tmp123 = ((frost$collections$CollectionView*) $tmp119)->$class->itable;
while ($tmp123->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp123 = $tmp123->next;
}
$fn125 $tmp124 = $tmp123->methods[8];
frost$collections$Array* $tmp126 = $tmp124(((frost$collections$CollectionView*) $tmp119), ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp122)));
ITable* $tmp127 = ((frost$collections$CollectionView*) $tmp126)->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[2];
frost$core$String* $tmp130 = $tmp128(((frost$collections$CollectionView*) $tmp126), &$s131);
frost$core$String* $tmp132 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp109, $tmp130);
frost$core$String* $tmp133 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp132, &$s134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q($tmp106);
return $tmp133;
block6:;
frost$core$Int64 $tmp135 = (frost$core$Int64) {1};
frost$core$Bit $tmp136 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp135);
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block7; else goto block8;
block7:;
// line 38
org$frostlang$frostc$FixedArray** $tmp138 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp139 = *$tmp138;
frost$core$Int64 $tmp140 = (frost$core$Int64) {0};
frost$core$Object* $tmp141 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp139, $tmp140);
frost$core$String* $tmp142 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp141));
frost$core$String* $tmp143 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp142, &$s144);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q($tmp141);
return $tmp143;
block8:;
frost$core$Int64 $tmp145 = (frost$core$Int64) {15};
frost$core$Bit $tmp146 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp145);
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block9; else goto block10;
block9:;
// line 41
org$frostlang$frostc$FixedArray** $tmp148 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp149 = *$tmp148;
frost$core$String* $tmp150 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp149), &$s151);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
return $tmp150;
block10:;
frost$core$Int64 $tmp152 = (frost$core$Int64) {17};
frost$core$Bit $tmp153 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp152);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block11; else goto block12;
block11:;
// line 44
org$frostlang$frostc$FixedArray** $tmp155 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp156 = *$tmp155;
frost$core$String* $tmp157 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp156), &$s158);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
return $tmp157;
block12:;
frost$core$Int64 $tmp159 = (frost$core$Int64) {14};
frost$core$Bit $tmp160 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp159);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block13; else goto block14;
block13:;
// line 47
org$frostlang$frostc$FixedArray** $tmp162 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp163 = *$tmp162;
frost$core$String* $tmp164 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp163), &$s165);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
return $tmp164;
block14:;
frost$core$Int64 $tmp166 = (frost$core$Int64) {16};
frost$core$Bit $tmp167 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp166);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block15; else goto block16;
block15:;
// line 50
org$frostlang$frostc$FixedArray** $tmp169 = &param1->subtypes;
org$frostlang$frostc$FixedArray* $tmp170 = *$tmp169;
frost$core$String* $tmp171 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp170), &$s172);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
return $tmp171;
block16:;
// line 53
frost$core$String** $tmp173 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp174 = *$tmp173;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
return $tmp174;
block1:;
goto block17;
block17:;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ChoiceCase* param1) {

frost$core$Error* local0 = NULL;
// line 59
*(&local0) = ((frost$core$Error*) NULL);
// line 60
frost$io$OutputStream** $tmp175 = &param0->out;
frost$io$OutputStream* $tmp176 = *$tmp175;
frost$core$String** $tmp177 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp178 = *$tmp177;
$fn180 $tmp179 = ($fn180) $tmp176->$class->vtable[17];
frost$core$Error* $tmp181 = $tmp179($tmp176, $tmp178);
if ($tmp181 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local0) = $tmp181;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// line 61
frost$collections$Array** $tmp182 = &param1->fields;
frost$collections$Array* $tmp183 = *$tmp182;
ITable* $tmp184 = ((frost$collections$CollectionView*) $tmp183)->$class->itable;
while ($tmp184->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp184 = $tmp184->next;
}
$fn186 $tmp185 = $tmp184->methods[0];
frost$core$Int64 $tmp187 = $tmp185(((frost$collections$CollectionView*) $tmp183));
frost$core$Int64 $tmp188 = (frost$core$Int64) {0};
int64_t $tmp189 = $tmp187.value;
int64_t $tmp190 = $tmp188.value;
bool $tmp191 = $tmp189 > $tmp190;
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block5; else goto block7;
block5:;
// line 62
frost$io$OutputStream** $tmp194 = &param0->out;
frost$io$OutputStream* $tmp195 = *$tmp194;
frost$collections$Array** $tmp196 = &param1->fields;
frost$collections$Array* $tmp197 = *$tmp196;
org$frostlang$frostc$StubCodeGenerator$_Closure6* $tmp198 = (org$frostlang$frostc$StubCodeGenerator$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure6$class);
org$frostlang$frostc$StubCodeGenerator$_Closure6$init$org$frostlang$frostc$StubCodeGenerator($tmp198, param0);
frost$core$MutableMethod* $tmp200 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp200, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure6$$anonymous5$org$frostlang$frostc$Type$R$frost$core$String), ((frost$core$Object*) $tmp198));
ITable* $tmp201 = ((frost$collections$CollectionView*) $tmp197)->$class->itable;
while ($tmp201->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp201 = $tmp201->next;
}
$fn203 $tmp202 = $tmp201->methods[8];
frost$collections$Array* $tmp204 = $tmp202(((frost$collections$CollectionView*) $tmp197), ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp200)));
ITable* $tmp205 = ((frost$collections$CollectionView*) $tmp204)->$class->itable;
while ($tmp205->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp205 = $tmp205->next;
}
$fn207 $tmp206 = $tmp205->methods[2];
frost$core$String* $tmp208 = $tmp206(((frost$collections$CollectionView*) $tmp204), &$s209);
frost$core$String* $tmp210 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s211, $tmp208);
frost$core$String* $tmp212 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp210, &$s213);
$fn215 $tmp214 = ($fn215) $tmp195->$class->vtable[17];
frost$core$Error* $tmp216 = $tmp214($tmp195, $tmp212);
if ($tmp216 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local0) = $tmp216;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp200));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
goto block6;
block7:;
// line 1
// line 65
frost$io$OutputStream** $tmp217 = &param0->out;
frost$io$OutputStream* $tmp218 = *$tmp217;
$fn220 $tmp219 = ($fn220) $tmp218->$class->vtable[21];
frost$core$Error* $tmp221 = $tmp219($tmp218);
if ($tmp221 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local0) = $tmp221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
goto block6;
block6:;
goto block2;
block1:;
// line 69
frost$core$Error* $tmp222 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp222));
// line 70
frost$core$Int64 $tmp223 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp223);
goto block2;
block2:;
frost$core$Error* $tmp224 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$FieldDecl* param1) {

frost$core$Error* local0 = NULL;
// line 75
org$frostlang$frostc$Annotations** $tmp225 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp226 = *$tmp225;
frost$core$Bit $tmp227 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp226);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block1; else goto block2;
block1:;
// line 76
return;
block2:;
// line 78
frost$core$Weak** $tmp229 = &param0->compiler;
frost$core$Weak* $tmp230 = *$tmp229;
frost$core$Object* $tmp231 = frost$core$Weak$get$R$frost$core$Weak$T($tmp230);
frost$core$Bit $tmp232 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp231), param1);
frost$core$Bit $tmp233 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp232);
bool $tmp234 = $tmp233.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp231);
if ($tmp234) goto block3; else goto block4;
block3:;
// line 79
return;
block4:;
// line 81
*(&local0) = ((frost$core$Error*) NULL);
// line 82
org$frostlang$frostc$FieldDecl$Kind* $tmp235 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp236 = *$tmp235;
frost$core$Int64 $tmp237 = $tmp236.$rawValue;
frost$core$Int64 $tmp238 = (frost$core$Int64) {0};
frost$core$Bit $tmp239 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp237, $tmp238);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block8; else goto block9;
block8:;
// line 83
frost$io$OutputStream** $tmp241 = &param0->out;
frost$io$OutputStream* $tmp242 = *$tmp241;
$fn244 $tmp243 = ($fn244) $tmp242->$class->vtable[17];
frost$core$Error* $tmp245 = $tmp243($tmp242, &$s246);
if ($tmp245 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local0) = $tmp245;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
goto block5;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
goto block7;
block9:;
frost$core$Int64 $tmp247 = (frost$core$Int64) {1};
frost$core$Bit $tmp248 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp237, $tmp247);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block12; else goto block13;
block12:;
// line 84
frost$io$OutputStream** $tmp250 = &param0->out;
frost$io$OutputStream* $tmp251 = *$tmp250;
$fn253 $tmp252 = ($fn253) $tmp251->$class->vtable[17];
frost$core$Error* $tmp254 = $tmp252($tmp251, &$s255);
if ($tmp254 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local0) = $tmp254;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
goto block5;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
goto block7;
block13:;
frost$core$Int64 $tmp256 = (frost$core$Int64) {2};
frost$core$Bit $tmp257 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp237, $tmp256);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block16; else goto block17;
block16:;
// line 85
frost$io$OutputStream** $tmp259 = &param0->out;
frost$io$OutputStream* $tmp260 = *$tmp259;
$fn262 $tmp261 = ($fn262) $tmp260->$class->vtable[17];
frost$core$Error* $tmp263 = $tmp261($tmp260, &$s264);
if ($tmp263 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local0) = $tmp263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
goto block5;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
goto block7;
block17:;
frost$core$Int64 $tmp265 = (frost$core$Int64) {3};
frost$core$Bit $tmp266 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp237, $tmp265);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block20; else goto block7;
block20:;
// line 86
frost$io$OutputStream** $tmp268 = &param0->out;
frost$io$OutputStream* $tmp269 = *$tmp268;
$fn271 $tmp270 = ($fn271) $tmp269->$class->vtable[17];
frost$core$Error* $tmp272 = $tmp270($tmp269, &$s273);
if ($tmp272 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local0) = $tmp272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
goto block5;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
goto block7;
block7:;
// line 88
frost$io$OutputStream** $tmp274 = &param0->out;
frost$io$OutputStream* $tmp275 = *$tmp274;
frost$core$String** $tmp276 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp277 = *$tmp276;
$fn279 $tmp278 = ($fn279) $tmp275->$class->vtable[17];
frost$core$Error* $tmp280 = $tmp278($tmp275, $tmp277);
if ($tmp280 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local0) = $tmp280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
goto block5;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// line 89
frost$io$OutputStream** $tmp281 = &param0->out;
frost$io$OutputStream* $tmp282 = *$tmp281;
$fn284 $tmp283 = ($fn284) $tmp282->$class->vtable[17];
frost$core$Error* $tmp285 = $tmp283($tmp282, &$s286);
if ($tmp285 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
*(&local0) = $tmp285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
goto block5;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// line 90
frost$io$OutputStream** $tmp287 = &param0->out;
frost$io$OutputStream* $tmp288 = *$tmp287;
org$frostlang$frostc$Type** $tmp289 = &param1->type;
org$frostlang$frostc$Type* $tmp290 = *$tmp289;
frost$core$String* $tmp291 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp290);
$fn293 $tmp292 = ($fn293) $tmp288->$class->vtable[17];
frost$core$Error* $tmp294 = $tmp292($tmp288, $tmp291);
if ($tmp294 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
*(&local0) = $tmp294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
goto block5;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// line 91
org$frostlang$frostc$FieldDecl$Kind* $tmp295 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp296 = *$tmp295;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp297;
$tmp297 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp297->value = $tmp296;
frost$core$Int64 $tmp298 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp299 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp298);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp300;
$tmp300 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp300->value = $tmp299;
ITable* $tmp301 = ((frost$core$Equatable*) $tmp297)->$class->itable;
while ($tmp301->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp301 = $tmp301->next;
}
$fn303 $tmp302 = $tmp301->methods[0];
frost$core$Bit $tmp304 = $tmp302(((frost$core$Equatable*) $tmp297), ((frost$core$Equatable*) $tmp300));
bool $tmp305 = $tmp304.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp300)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp297)));
if ($tmp305) goto block29; else goto block30;
block29:;
// line 92
frost$io$OutputStream** $tmp306 = &param0->out;
frost$io$OutputStream* $tmp307 = *$tmp306;
$fn309 $tmp308 = ($fn309) $tmp307->$class->vtable[17];
frost$core$Error* $tmp310 = $tmp308($tmp307, &$s311);
if ($tmp310 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
*(&local0) = $tmp310;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
goto block5;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
// line 93
frost$io$OutputStream** $tmp312 = &param0->out;
frost$io$OutputStream* $tmp313 = *$tmp312;
org$frostlang$frostc$ASTNode** $tmp314 = &param1->rawValue;
org$frostlang$frostc$ASTNode* $tmp315 = *$tmp314;
$fn317 $tmp316 = ($fn317) $tmp313->$class->vtable[18];
frost$core$Error* $tmp318 = $tmp316($tmp313, ((frost$core$Object*) $tmp315));
if ($tmp318 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local0) = $tmp318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
goto block5;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
goto block30;
block30:;
// line 95
frost$io$OutputStream** $tmp319 = &param0->out;
frost$io$OutputStream* $tmp320 = *$tmp319;
$fn322 $tmp321 = ($fn322) $tmp320->$class->vtable[21];
frost$core$Error* $tmp323 = $tmp321($tmp320);
if ($tmp323 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local0) = $tmp323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
goto block5;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
goto block6;
block5:;
// line 98
frost$core$Error* $tmp324 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp324));
// line 99
frost$core$Int64 $tmp325 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp325);
goto block6;
block6:;
frost$core$Error* $tmp326 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp326));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
// line 104
org$frostlang$frostc$Annotations** $tmp327 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp328 = *$tmp327;
frost$core$Bit $tmp329 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp328);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block1; else goto block2;
block1:;
// line 105
return;
block2:;
// line 107
frost$core$Weak** $tmp331 = &param0->compiler;
frost$core$Weak* $tmp332 = *$tmp331;
frost$core$Object* $tmp333 = frost$core$Weak$get$R$frost$core$Weak$T($tmp332);
frost$core$Bit $tmp334 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp333), param1);
frost$core$Bit $tmp335 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp334);
bool $tmp336 = $tmp335.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp333);
if ($tmp336) goto block3; else goto block4;
block3:;
// line 108
return;
block4:;
// line 110
*(&local0) = ((frost$core$Error*) NULL);
// line 111
frost$io$OutputStream** $tmp337 = &param0->out;
frost$io$OutputStream* $tmp338 = *$tmp337;
org$frostlang$frostc$Annotations** $tmp339 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp340 = *$tmp339;
$fn342 $tmp341 = ($fn342) $tmp338->$class->vtable[18];
frost$core$Error* $tmp343 = $tmp341($tmp338, ((frost$core$Object*) $tmp340));
if ($tmp343 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local0) = $tmp343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
// line 112
org$frostlang$frostc$MethodDecl$Kind* $tmp344 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp345 = *$tmp344;
frost$core$Int64 $tmp346 = $tmp345.$rawValue;
frost$core$Int64 $tmp347 = (frost$core$Int64) {0};
frost$core$Bit $tmp348 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp346, $tmp347);
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block10; else goto block11;
block10:;
// line 114
frost$io$OutputStream** $tmp350 = &param0->out;
frost$io$OutputStream* $tmp351 = *$tmp350;
$fn353 $tmp352 = ($fn353) $tmp351->$class->vtable[17];
frost$core$Error* $tmp354 = $tmp352($tmp351, &$s355);
if ($tmp354 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local0) = $tmp354;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
goto block5;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
goto block9;
block11:;
frost$core$Int64 $tmp356 = (frost$core$Int64) {1};
frost$core$Bit $tmp357 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp346, $tmp356);
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block14; else goto block15;
block14:;
// line 117
frost$io$OutputStream** $tmp359 = &param0->out;
frost$io$OutputStream* $tmp360 = *$tmp359;
$fn362 $tmp361 = ($fn362) $tmp360->$class->vtable[17];
frost$core$Error* $tmp363 = $tmp361($tmp360, &$s364);
if ($tmp363 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
*(&local0) = $tmp363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
goto block5;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
goto block9;
block15:;
frost$core$Int64 $tmp365 = (frost$core$Int64) {2};
frost$core$Bit $tmp366 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp346, $tmp365);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block18; else goto block19;
block18:;
goto block9;
block19:;
// line 122
frost$core$Int64 $tmp368 = (frost$core$Int64) {122};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s369, $tmp368);
abort(); // unreachable
block9:;
// line 125
frost$io$OutputStream** $tmp370 = &param0->out;
frost$io$OutputStream* $tmp371 = *$tmp370;
frost$core$String** $tmp372 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp373 = *$tmp372;
$fn375 $tmp374 = ($fn375) $tmp371->$class->vtable[17];
frost$core$Error* $tmp376 = $tmp374($tmp371, $tmp373);
if ($tmp376 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
*(&local0) = $tmp376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
goto block5;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
// line 126
frost$collections$Array** $tmp377 = &param1->genericParameters;
frost$collections$Array* $tmp378 = *$tmp377;
frost$core$Bit $tmp379 = frost$core$Bit$init$builtin_bit($tmp378 != NULL);
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block22; else goto block23;
block22:;
// line 127
frost$io$OutputStream** $tmp381 = &param0->out;
frost$io$OutputStream* $tmp382 = *$tmp381;
frost$collections$Array** $tmp383 = &param1->genericParameters;
frost$collections$Array* $tmp384 = *$tmp383;
org$frostlang$frostc$StubCodeGenerator$_Closure8* $tmp385 = (org$frostlang$frostc$StubCodeGenerator$_Closure8*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure8$class);
org$frostlang$frostc$StubCodeGenerator$_Closure8$init$org$frostlang$frostc$StubCodeGenerator($tmp385, param0);
frost$core$MutableMethod* $tmp387 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp387, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure8$$anonymous7$org$frostlang$frostc$MethodDecl$GenericParameter$R$frost$core$String), ((frost$core$Object*) $tmp385));
ITable* $tmp388 = ((frost$collections$CollectionView*) $tmp384)->$class->itable;
while ($tmp388->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp388 = $tmp388->next;
}
$fn390 $tmp389 = $tmp388->methods[8];
frost$collections$Array* $tmp391 = $tmp389(((frost$collections$CollectionView*) $tmp384), ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp387)));
ITable* $tmp392 = ((frost$collections$CollectionView*) $tmp391)->$class->itable;
while ($tmp392->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp392 = $tmp392->next;
}
$fn394 $tmp393 = $tmp392->methods[2];
frost$core$String* $tmp395 = $tmp393(((frost$collections$CollectionView*) $tmp391), &$s396);
frost$core$String* $tmp397 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s398, $tmp395);
frost$core$String* $tmp399 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp397, &$s400);
$fn402 $tmp401 = ($fn402) $tmp382->$class->vtable[17];
frost$core$Error* $tmp403 = $tmp401($tmp382, $tmp399);
if ($tmp403 == NULL) goto block24; else goto block25;
block25:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local0) = $tmp403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
goto block5;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
goto block23;
block23:;
// line 131
frost$io$OutputStream** $tmp404 = &param0->out;
frost$io$OutputStream* $tmp405 = *$tmp404;
$fn407 $tmp406 = ($fn407) $tmp405->$class->vtable[17];
frost$core$Error* $tmp408 = $tmp406($tmp405, &$s409);
if ($tmp408 == NULL) goto block26; else goto block27;
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local0) = $tmp408;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
goto block5;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
// line 132
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s410));
frost$core$String* $tmp411 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local1) = &$s412;
// line 133
frost$collections$Array** $tmp413 = &param1->parameters;
frost$collections$Array* $tmp414 = *$tmp413;
ITable* $tmp415 = ((frost$collections$Iterable*) $tmp414)->$class->itable;
while ($tmp415->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp415 = $tmp415->next;
}
$fn417 $tmp416 = $tmp415->methods[0];
frost$collections$Iterator* $tmp418 = $tmp416(((frost$collections$Iterable*) $tmp414));
goto block28;
block28:;
ITable* $tmp419 = $tmp418->$class->itable;
while ($tmp419->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp419 = $tmp419->next;
}
$fn421 $tmp420 = $tmp419->methods[0];
frost$core$Bit $tmp422 = $tmp420($tmp418);
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block30; else goto block29;
block29:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp424 = $tmp418->$class->itable;
while ($tmp424->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp424 = $tmp424->next;
}
$fn426 $tmp425 = $tmp424->methods[1];
frost$core$Object* $tmp427 = $tmp425($tmp418);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp427)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp428 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp427);
// line 134
frost$io$OutputStream** $tmp429 = &param0->out;
frost$io$OutputStream* $tmp430 = *$tmp429;
frost$core$String* $tmp431 = *(&local1);
frost$core$String* $tmp432 = frost$core$String$get_asString$R$frost$core$String($tmp431);
frost$core$String* $tmp433 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp432, &$s434);
org$frostlang$frostc$MethodDecl$Parameter* $tmp435 = *(&local2);
frost$core$String** $tmp436 = &$tmp435->name;
frost$core$String* $tmp437 = *$tmp436;
frost$core$String* $tmp438 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp433, $tmp437);
frost$core$String* $tmp439 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp438, &$s440);
org$frostlang$frostc$MethodDecl$Parameter* $tmp441 = *(&local2);
org$frostlang$frostc$Type** $tmp442 = &$tmp441->type;
org$frostlang$frostc$Type* $tmp443 = *$tmp442;
frost$core$String* $tmp444 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp443);
frost$core$String* $tmp445 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp439, $tmp444);
frost$core$String* $tmp446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp445, &$s447);
$fn449 $tmp448 = ($fn449) $tmp430->$class->vtable[17];
frost$core$Error* $tmp450 = $tmp448($tmp430, $tmp446);
if ($tmp450 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local0) = $tmp450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$core$Frost$unref$frost$core$Object$Q($tmp427);
org$frostlang$frostc$MethodDecl$Parameter* $tmp451 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$core$String* $tmp452 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
// line 135
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s453));
frost$core$String* $tmp454 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local1) = &$s455;
frost$core$Frost$unref$frost$core$Object$Q($tmp427);
org$frostlang$frostc$MethodDecl$Parameter* $tmp456 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block28;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
// line 137
frost$io$OutputStream** $tmp457 = &param0->out;
frost$io$OutputStream* $tmp458 = *$tmp457;
$fn460 $tmp459 = ($fn460) $tmp458->$class->vtable[17];
frost$core$Error* $tmp461 = $tmp459($tmp458, &$s462);
if ($tmp461 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local0) = $tmp461;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
frost$core$String* $tmp463 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
// line 138
org$frostlang$frostc$MethodDecl$Kind* $tmp464 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp465 = *$tmp464;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp466;
$tmp466 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp466->value = $tmp465;
frost$core$Int64 $tmp467 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp468 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp467);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp469;
$tmp469 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp469->value = $tmp468;
ITable* $tmp470 = ((frost$core$Equatable*) $tmp466)->$class->itable;
while ($tmp470->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp470 = $tmp470->next;
}
$fn472 $tmp471 = $tmp470->methods[0];
frost$core$Bit $tmp473 = $tmp471(((frost$core$Equatable*) $tmp466), ((frost$core$Equatable*) $tmp469));
bool $tmp474 = $tmp473.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp469)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp466)));
if ($tmp474) goto block35; else goto block37;
block35:;
// line 139
frost$io$OutputStream** $tmp475 = &param0->out;
frost$io$OutputStream* $tmp476 = *$tmp475;
$fn478 $tmp477 = ($fn478) $tmp476->$class->vtable[17];
frost$core$Error* $tmp479 = $tmp477($tmp476, &$s480);
if ($tmp479 == NULL) goto block38; else goto block39;
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
*(&local0) = $tmp479;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$String* $tmp481 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
goto block36;
block37:;
// line 141
org$frostlang$frostc$Type** $tmp482 = &param1->returnType;
org$frostlang$frostc$Type* $tmp483 = *$tmp482;
org$frostlang$frostc$Type* $tmp484 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp485 = ((frost$core$Equatable*) $tmp483)->$class->itable;
while ($tmp485->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp485 = $tmp485->next;
}
$fn487 $tmp486 = $tmp485->methods[1];
frost$core$Bit $tmp488 = $tmp486(((frost$core$Equatable*) $tmp483), ((frost$core$Equatable*) $tmp484));
bool $tmp489 = $tmp488.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
if ($tmp489) goto block40; else goto block41;
block40:;
// line 142
frost$io$OutputStream** $tmp490 = &param0->out;
frost$io$OutputStream* $tmp491 = *$tmp490;
org$frostlang$frostc$Type** $tmp492 = &param1->returnType;
org$frostlang$frostc$Type* $tmp493 = *$tmp492;
frost$core$String* $tmp494 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp493);
frost$core$String* $tmp495 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s496, $tmp494);
frost$core$String* $tmp497 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp495, &$s498);
$fn500 $tmp499 = ($fn500) $tmp491->$class->vtable[19];
frost$core$Error* $tmp501 = $tmp499($tmp491, $tmp497);
if ($tmp501 == NULL) goto block42; else goto block43;
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local0) = $tmp501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$String* $tmp502 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
goto block41;
block41:;
goto block36;
block36:;
// line 144
org$frostlang$frostc$Annotations** $tmp503 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp504 = *$tmp503;
frost$core$Bit $tmp505 = org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit($tmp504);
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block44; else goto block45;
block44:;
// line 145
frost$io$OutputStream** $tmp507 = &param0->out;
frost$io$OutputStream* $tmp508 = *$tmp507;
$fn510 $tmp509 = ($fn510) $tmp508->$class->vtable[17];
frost$core$Error* $tmp511 = $tmp509($tmp508, &$s512);
if ($tmp511 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
*(&local0) = $tmp511;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$core$String* $tmp513 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
goto block45;
block45:;
frost$core$String* $tmp514 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local1) = ((frost$core$String*) NULL);
goto block6;
block5:;
// line 149
frost$core$Error* $tmp515 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp515));
// line 150
frost$core$Int64 $tmp516 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp516);
goto block6;
block6:;
frost$core$Error* $tmp517 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$collections$ListView* local2 = NULL;
frost$core$String* local3 = NULL;
org$frostlang$frostc$Type* local4 = NULL;
org$frostlang$frostc$ChoiceCase* local5 = NULL;
org$frostlang$frostc$ClassDecl* local6 = NULL;
org$frostlang$frostc$FieldDecl* local7 = NULL;
org$frostlang$frostc$MethodDecl* local8 = NULL;
// line 157
*(&local0) = ((frost$core$Error*) NULL);
// line 158
frost$core$Weak** $tmp518 = &param0->compiler;
frost$core$Weak* $tmp519 = *$tmp518;
frost$core$Object* $tmp520 = frost$core$Weak$get$R$frost$core$Weak$T($tmp519);
frost$core$Bit $tmp521 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp520), param1);
frost$core$Bit $tmp522 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp521);
bool $tmp523 = $tmp522.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp520);
if ($tmp523) goto block3; else goto block4;
block3:;
// line 159
frost$core$Error* $tmp524 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local0) = ((frost$core$Error*) NULL);
return;
block4:;
// line 161
frost$core$String** $tmp525 = &param1->name;
frost$core$String* $tmp526 = *$tmp525;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
frost$core$String* $tmp527 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
*(&local1) = $tmp526;
// line 162
frost$core$String** $tmp528 = &param1->name;
frost$core$String* $tmp529 = *$tmp528;
frost$core$RegularExpression* $tmp530 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp530, &$s531);
frost$collections$ListView* $tmp532 = frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q($tmp529, $tmp530);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
frost$collections$ListView* $tmp533 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
*(&local2) = $tmp532;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
// line 163
frost$collections$ListView* $tmp534 = *(&local2);
frost$core$Bit $tmp535 = frost$core$Bit$init$builtin_bit($tmp534 != NULL);
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block5; else goto block6;
block5:;
// line 164
frost$core$Weak** $tmp537 = &param1->owner;
frost$core$Weak* $tmp538 = *$tmp537;
frost$core$Object* $tmp539 = frost$core$Weak$get$R$frost$core$Weak$T($tmp538);
frost$core$Bit $tmp540 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl*) $tmp539) == NULL);
bool $tmp541 = $tmp540.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp539);
if ($tmp541) goto block7; else goto block8;
block7:;
// line 165
frost$io$OutputStream** $tmp542 = &param0->out;
frost$io$OutputStream* $tmp543 = *$tmp542;
frost$collections$ListView* $tmp544 = *(&local2);
frost$core$Int64 $tmp545 = (frost$core$Int64) {0};
ITable* $tmp546 = $tmp544->$class->itable;
while ($tmp546->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp546 = $tmp546->next;
}
$fn548 $tmp547 = $tmp546->methods[0];
frost$core$Object* $tmp549 = $tmp547($tmp544, $tmp545);
frost$core$String* $tmp550 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s551, ((frost$core$String*) $tmp549));
frost$core$String* $tmp552 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp550, &$s553);
$fn555 $tmp554 = ($fn555) $tmp543->$class->vtable[19];
frost$core$Error* $tmp556 = $tmp554($tmp543, $tmp552);
if ($tmp556 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
*(&local0) = $tmp556;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q($tmp549);
frost$collections$ListView* $tmp557 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp558 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q($tmp549);
goto block8;
block8:;
// line 167
frost$collections$ListView* $tmp559 = *(&local2);
frost$core$Int64 $tmp560 = (frost$core$Int64) {1};
ITable* $tmp561 = $tmp559->$class->itable;
while ($tmp561->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp561 = $tmp561->next;
}
$fn563 $tmp562 = $tmp561->methods[0];
frost$core$Object* $tmp564 = $tmp562($tmp559, $tmp560);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp564)));
frost$core$String* $tmp565 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local1) = ((frost$core$String*) $tmp564);
frost$core$Frost$unref$frost$core$Object$Q($tmp564);
goto block6;
block6:;
// line 169
frost$io$OutputStream** $tmp566 = &param0->out;
frost$io$OutputStream* $tmp567 = *$tmp566;
$fn569 $tmp568 = ($fn569) $tmp567->$class->vtable[19];
frost$core$Error* $tmp570 = $tmp568($tmp567, &$s571);
if ($tmp570 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
*(&local0) = $tmp570;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$collections$ListView* $tmp572 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp573 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
// line 170
frost$io$OutputStream** $tmp574 = &param0->out;
frost$io$OutputStream* $tmp575 = *$tmp574;
org$frostlang$frostc$Annotations** $tmp576 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp577 = *$tmp576;
$fn579 $tmp578 = ($fn579) $tmp575->$class->vtable[18];
frost$core$Error* $tmp580 = $tmp578($tmp575, ((frost$core$Object*) $tmp577));
if ($tmp580 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local0) = $tmp580;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
frost$collections$ListView* $tmp581 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp582 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
// line 171
org$frostlang$frostc$ClassDecl$Kind* $tmp583 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp584 = *$tmp583;
frost$core$Int64 $tmp585 = $tmp584.$rawValue;
frost$core$Int64 $tmp586 = (frost$core$Int64) {0};
frost$core$Bit $tmp587 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp585, $tmp586);
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block16; else goto block17;
block16:;
// line 172
frost$io$OutputStream** $tmp589 = &param0->out;
frost$io$OutputStream* $tmp590 = *$tmp589;
$fn592 $tmp591 = ($fn592) $tmp590->$class->vtable[17];
frost$core$Error* $tmp593 = $tmp591($tmp590, &$s594);
if ($tmp593 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
*(&local0) = $tmp593;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
frost$collections$ListView* $tmp595 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp596 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
goto block15;
block17:;
frost$core$Int64 $tmp597 = (frost$core$Int64) {1};
frost$core$Bit $tmp598 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp585, $tmp597);
bool $tmp599 = $tmp598.value;
if ($tmp599) goto block20; else goto block21;
block20:;
// line 173
frost$io$OutputStream** $tmp600 = &param0->out;
frost$io$OutputStream* $tmp601 = *$tmp600;
$fn603 $tmp602 = ($fn603) $tmp601->$class->vtable[17];
frost$core$Error* $tmp604 = $tmp602($tmp601, &$s605);
if ($tmp604 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local0) = $tmp604;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
frost$collections$ListView* $tmp606 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp607 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
goto block15;
block21:;
frost$core$Int64 $tmp608 = (frost$core$Int64) {2};
frost$core$Bit $tmp609 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp585, $tmp608);
bool $tmp610 = $tmp609.value;
if ($tmp610) goto block24; else goto block15;
block24:;
// line 174
frost$io$OutputStream** $tmp611 = &param0->out;
frost$io$OutputStream* $tmp612 = *$tmp611;
$fn614 $tmp613 = ($fn614) $tmp612->$class->vtable[17];
frost$core$Error* $tmp615 = $tmp613($tmp612, &$s616);
if ($tmp615 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
*(&local0) = $tmp615;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$collections$ListView* $tmp617 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp618 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
goto block15;
block15:;
// line 176
frost$io$OutputStream** $tmp619 = &param0->out;
frost$io$OutputStream* $tmp620 = *$tmp619;
frost$core$String* $tmp621 = *(&local1);
$fn623 $tmp622 = ($fn623) $tmp620->$class->vtable[17];
frost$core$Error* $tmp624 = $tmp622($tmp620, $tmp621);
if ($tmp624 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
*(&local0) = $tmp624;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$collections$ListView* $tmp625 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp626 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// line 177
frost$collections$List** $tmp627 = &param1->parameters;
frost$collections$List* $tmp628 = *$tmp627;
ITable* $tmp629 = ((frost$collections$CollectionView*) $tmp628)->$class->itable;
while ($tmp629->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp629 = $tmp629->next;
}
$fn631 $tmp630 = $tmp629->methods[0];
frost$core$Int64 $tmp632 = $tmp630(((frost$collections$CollectionView*) $tmp628));
frost$core$Int64 $tmp633 = (frost$core$Int64) {0};
int64_t $tmp634 = $tmp632.value;
int64_t $tmp635 = $tmp633.value;
bool $tmp636 = $tmp634 > $tmp635;
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block29; else goto block30;
block29:;
// line 178
frost$io$OutputStream** $tmp639 = &param0->out;
frost$io$OutputStream* $tmp640 = *$tmp639;
frost$collections$List** $tmp641 = &param1->parameters;
frost$collections$List* $tmp642 = *$tmp641;
org$frostlang$frostc$StubCodeGenerator$_Closure10* $tmp643 = (org$frostlang$frostc$StubCodeGenerator$_Closure10*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure10$class);
org$frostlang$frostc$StubCodeGenerator$_Closure10$init$org$frostlang$frostc$StubCodeGenerator($tmp643, param0);
frost$core$MutableMethod* $tmp645 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp645, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure10$$anonymous9$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String), ((frost$core$Object*) $tmp643));
ITable* $tmp646 = ((frost$collections$CollectionView*) $tmp642)->$class->itable;
while ($tmp646->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp646 = $tmp646->next;
}
$fn648 $tmp647 = $tmp646->methods[8];
frost$collections$Array* $tmp649 = $tmp647(((frost$collections$CollectionView*) $tmp642), ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp645)));
ITable* $tmp650 = ((frost$collections$CollectionView*) $tmp649)->$class->itable;
while ($tmp650->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp650 = $tmp650->next;
}
$fn652 $tmp651 = $tmp650->methods[2];
frost$core$String* $tmp653 = $tmp651(((frost$collections$CollectionView*) $tmp649), &$s654);
frost$core$String* $tmp655 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s656, $tmp653);
frost$core$String* $tmp657 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp655, &$s658);
$fn660 $tmp659 = ($fn660) $tmp640->$class->vtable[17];
frost$core$Error* $tmp661 = $tmp659($tmp640, $tmp657);
if ($tmp661 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
*(&local0) = $tmp661;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
frost$collections$ListView* $tmp662 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp663 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
goto block30;
block30:;
// line 181
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s664));
frost$core$String* $tmp665 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local3) = &$s666;
// line 182
org$frostlang$frostc$ClassDecl$Kind* $tmp667 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp668 = *$tmp667;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp669;
$tmp669 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp669->value = $tmp668;
frost$core$Int64 $tmp670 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp671 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp670);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp672;
$tmp672 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp672->value = $tmp671;
ITable* $tmp673 = ((frost$core$Equatable*) $tmp669)->$class->itable;
while ($tmp673->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp673 = $tmp673->next;
}
$fn675 $tmp674 = $tmp673->methods[1];
frost$core$Bit $tmp676 = $tmp674(((frost$core$Equatable*) $tmp669), ((frost$core$Equatable*) $tmp672));
bool $tmp677 = $tmp676.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp672)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp669)));
if ($tmp677) goto block33; else goto block34;
block33:;
// line 183
org$frostlang$frostc$Type** $tmp678 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp679 = *$tmp678;
frost$core$Bit $tmp680 = frost$core$Bit$init$builtin_bit($tmp679 != NULL);
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block37; else goto block36;
block37:;
org$frostlang$frostc$ClassDecl$Kind* $tmp682 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp683 = *$tmp682;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp684;
$tmp684 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp684->value = $tmp683;
frost$core$Int64 $tmp685 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp686 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp685);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp687;
$tmp687 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp687->value = $tmp686;
ITable* $tmp688 = ((frost$core$Equatable*) $tmp684)->$class->itable;
while ($tmp688->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp688 = $tmp688->next;
}
$fn690 $tmp689 = $tmp688->methods[1];
frost$core$Bit $tmp691 = $tmp689(((frost$core$Equatable*) $tmp684), ((frost$core$Equatable*) $tmp687));
bool $tmp692 = $tmp691.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp687)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp684)));
if ($tmp692) goto block35; else goto block36;
block35:;
// line 184
frost$io$OutputStream** $tmp693 = &param0->out;
frost$io$OutputStream* $tmp694 = *$tmp693;
frost$core$String* $tmp695 = *(&local3);
frost$core$String* $tmp696 = frost$core$String$get_asString$R$frost$core$String($tmp695);
frost$core$String* $tmp697 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp696, &$s698);
org$frostlang$frostc$Type** $tmp699 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp700 = *$tmp699;
frost$core$String* $tmp701 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp700);
frost$core$String* $tmp702 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp697, $tmp701);
frost$core$String* $tmp703 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp702, &$s704);
$fn706 $tmp705 = ($fn706) $tmp694->$class->vtable[17];
frost$core$Error* $tmp707 = $tmp705($tmp694, $tmp703);
if ($tmp707 == NULL) goto block38; else goto block39;
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local0) = $tmp707;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
frost$core$String* $tmp708 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp709 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp710 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// line 185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s711));
frost$core$String* $tmp712 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local3) = &$s713;
goto block36;
block36:;
// line 187
frost$collections$Array** $tmp714 = &param1->rawInterfaces;
frost$collections$Array* $tmp715 = *$tmp714;
ITable* $tmp716 = ((frost$collections$Iterable*) $tmp715)->$class->itable;
while ($tmp716->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp716 = $tmp716->next;
}
$fn718 $tmp717 = $tmp716->methods[0];
frost$collections$Iterator* $tmp719 = $tmp717(((frost$collections$Iterable*) $tmp715));
goto block40;
block40:;
ITable* $tmp720 = $tmp719->$class->itable;
while ($tmp720->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp720 = $tmp720->next;
}
$fn722 $tmp721 = $tmp720->methods[0];
frost$core$Bit $tmp723 = $tmp721($tmp719);
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block42; else goto block41;
block41:;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp725 = $tmp719->$class->itable;
while ($tmp725->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp725 = $tmp725->next;
}
$fn727 $tmp726 = $tmp725->methods[1];
frost$core$Object* $tmp728 = $tmp726($tmp719);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp728)));
org$frostlang$frostc$Type* $tmp729 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp728);
// line 188
frost$io$OutputStream** $tmp730 = &param0->out;
frost$io$OutputStream* $tmp731 = *$tmp730;
frost$core$String* $tmp732 = *(&local3);
frost$core$String* $tmp733 = frost$core$String$get_asString$R$frost$core$String($tmp732);
frost$core$String* $tmp734 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp733, &$s735);
org$frostlang$frostc$Type* $tmp736 = *(&local4);
frost$core$String* $tmp737 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp736);
frost$core$String* $tmp738 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp734, $tmp737);
frost$core$String* $tmp739 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp738, &$s740);
$fn742 $tmp741 = ($fn742) $tmp731->$class->vtable[17];
frost$core$Error* $tmp743 = $tmp741($tmp731, $tmp739);
if ($tmp743 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local0) = $tmp743;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Frost$unref$frost$core$Object$Q($tmp728);
org$frostlang$frostc$Type* $tmp744 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$String* $tmp745 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp746 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp747 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
// line 189
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s748));
frost$core$String* $tmp749 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local3) = &$s750;
frost$core$Frost$unref$frost$core$Object$Q($tmp728);
org$frostlang$frostc$Type* $tmp751 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block40;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
goto block34;
block34:;
// line 192
frost$io$OutputStream** $tmp752 = &param0->out;
frost$io$OutputStream* $tmp753 = *$tmp752;
$fn755 $tmp754 = ($fn755) $tmp753->$class->vtable[17];
frost$core$Error* $tmp756 = $tmp754($tmp753, &$s757);
if ($tmp756 == NULL) goto block45; else goto block46;
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local0) = $tmp756;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$String* $tmp758 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp759 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp760 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
// line 193
frost$collections$Array** $tmp761 = &param1->choiceCases;
frost$collections$Array* $tmp762 = *$tmp761;
ITable* $tmp763 = ((frost$collections$Iterable*) $tmp762)->$class->itable;
while ($tmp763->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp763 = $tmp763->next;
}
$fn765 $tmp764 = $tmp763->methods[0];
frost$collections$Iterator* $tmp766 = $tmp764(((frost$collections$Iterable*) $tmp762));
goto block47;
block47:;
ITable* $tmp767 = $tmp766->$class->itable;
while ($tmp767->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp767 = $tmp767->next;
}
$fn769 $tmp768 = $tmp767->methods[0];
frost$core$Bit $tmp770 = $tmp768($tmp766);
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block49; else goto block48;
block48:;
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp772 = $tmp766->$class->itable;
while ($tmp772->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp772 = $tmp772->next;
}
$fn774 $tmp773 = $tmp772->methods[1];
frost$core$Object* $tmp775 = $tmp773($tmp766);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp775)));
org$frostlang$frostc$ChoiceCase* $tmp776 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) $tmp775);
// line 194
org$frostlang$frostc$ChoiceCase* $tmp777 = *(&local5);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(param0, $tmp777);
frost$core$Frost$unref$frost$core$Object$Q($tmp775);
org$frostlang$frostc$ChoiceCase* $tmp778 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
// line 196
frost$collections$Array** $tmp779 = &param1->classes;
frost$collections$Array* $tmp780 = *$tmp779;
ITable* $tmp781 = ((frost$collections$Iterable*) $tmp780)->$class->itable;
while ($tmp781->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp781 = $tmp781->next;
}
$fn783 $tmp782 = $tmp781->methods[0];
frost$collections$Iterator* $tmp784 = $tmp782(((frost$collections$Iterable*) $tmp780));
goto block50;
block50:;
ITable* $tmp785 = $tmp784->$class->itable;
while ($tmp785->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp785 = $tmp785->next;
}
$fn787 $tmp786 = $tmp785->methods[0];
frost$core$Bit $tmp788 = $tmp786($tmp784);
bool $tmp789 = $tmp788.value;
if ($tmp789) goto block52; else goto block51;
block51:;
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp790 = $tmp784->$class->itable;
while ($tmp790->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp790 = $tmp790->next;
}
$fn792 $tmp791 = $tmp790->methods[1];
frost$core$Object* $tmp793 = $tmp791($tmp784);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp793)));
org$frostlang$frostc$ClassDecl* $tmp794 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local6) = ((org$frostlang$frostc$ClassDecl*) $tmp793);
// line 197
org$frostlang$frostc$ClassDecl* $tmp795 = *(&local6);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl(param0, $tmp795);
frost$core$Frost$unref$frost$core$Object$Q($tmp793);
org$frostlang$frostc$ClassDecl* $tmp796 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block50;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
// line 199
frost$collections$Array** $tmp797 = &param1->fields;
frost$collections$Array* $tmp798 = *$tmp797;
ITable* $tmp799 = ((frost$collections$Iterable*) $tmp798)->$class->itable;
while ($tmp799->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp799 = $tmp799->next;
}
$fn801 $tmp800 = $tmp799->methods[0];
frost$collections$Iterator* $tmp802 = $tmp800(((frost$collections$Iterable*) $tmp798));
goto block53;
block53:;
ITable* $tmp803 = $tmp802->$class->itable;
while ($tmp803->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp803 = $tmp803->next;
}
$fn805 $tmp804 = $tmp803->methods[0];
frost$core$Bit $tmp806 = $tmp804($tmp802);
bool $tmp807 = $tmp806.value;
if ($tmp807) goto block55; else goto block54;
block54:;
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp808 = $tmp802->$class->itable;
while ($tmp808->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp808 = $tmp808->next;
}
$fn810 $tmp809 = $tmp808->methods[1];
frost$core$Object* $tmp811 = $tmp809($tmp802);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp811)));
org$frostlang$frostc$FieldDecl* $tmp812 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) $tmp811);
// line 200
org$frostlang$frostc$FieldDecl* $tmp813 = *(&local7);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(param0, $tmp813);
frost$core$Frost$unref$frost$core$Object$Q($tmp811);
org$frostlang$frostc$FieldDecl* $tmp814 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block53;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
// line 202
frost$collections$Array** $tmp815 = &param1->methods;
frost$collections$Array* $tmp816 = *$tmp815;
ITable* $tmp817 = ((frost$collections$Iterable*) $tmp816)->$class->itable;
while ($tmp817->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp817 = $tmp817->next;
}
$fn819 $tmp818 = $tmp817->methods[0];
frost$collections$Iterator* $tmp820 = $tmp818(((frost$collections$Iterable*) $tmp816));
goto block56;
block56:;
ITable* $tmp821 = $tmp820->$class->itable;
while ($tmp821->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp821 = $tmp821->next;
}
$fn823 $tmp822 = $tmp821->methods[0];
frost$core$Bit $tmp824 = $tmp822($tmp820);
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block58; else goto block57;
block57:;
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp826 = $tmp820->$class->itable;
while ($tmp826->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp826 = $tmp826->next;
}
$fn828 $tmp827 = $tmp826->methods[1];
frost$core$Object* $tmp829 = $tmp827($tmp820);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp829)));
org$frostlang$frostc$MethodDecl* $tmp830 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) $tmp829);
// line 203
org$frostlang$frostc$MethodDecl* $tmp831 = *(&local8);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(param0, $tmp831);
frost$core$Frost$unref$frost$core$Object$Q($tmp829);
org$frostlang$frostc$MethodDecl* $tmp832 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block56;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
// line 205
frost$io$OutputStream** $tmp833 = &param0->out;
frost$io$OutputStream* $tmp834 = *$tmp833;
$fn836 $tmp835 = ($fn836) $tmp834->$class->vtable[17];
frost$core$Error* $tmp837 = $tmp835($tmp834, &$s838);
if ($tmp837 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local0) = $tmp837;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$core$String* $tmp839 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp840 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp841 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
frost$core$String* $tmp842 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp843 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp844 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 208
frost$core$Error* $tmp845 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp845));
// line 209
frost$core$Int64 $tmp846 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp846);
goto block2;
block2:;
frost$core$Error* $tmp847 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// line 215
frost$core$Weak** $tmp848 = &param1->owner;
frost$core$Weak* $tmp849 = *$tmp848;
frost$core$Object* $tmp850 = frost$core$Weak$get$R$frost$core$Weak$T($tmp849);
frost$core$Bit $tmp851 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl*) $tmp850) == NULL);
bool $tmp852 = $tmp851.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp850);
if ($tmp852) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Annotations** $tmp853 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp854 = *$tmp853;
frost$core$Bit $tmp855 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp854);
frost$core$Bit $tmp856 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp855);
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block1; else goto block2;
block1:;
// line 216
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

// line 4
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Weak** $tmp858 = &param0->compiler;
frost$core$Weak* $tmp859 = *$tmp858;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
frost$io$OutputStream** $tmp860 = &param0->out;
frost$io$OutputStream* $tmp861 = *$tmp860;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
return;

}

