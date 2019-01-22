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
typedef frost$core$Error* (*$fn377)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn388)(org$frostlang$frostc$StubCodeGenerator$_Closure8*, org$frostlang$frostc$MethodDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn392)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn396)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn404)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn409)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn419)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn423)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn428)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn451)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn462)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn474)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn480)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn489)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn502)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn512)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Object* (*$fn550)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn557)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Object* (*$fn565)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn571)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn581)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn594)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn605)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn616)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn625)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn633)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn646)(org$frostlang$frostc$StubCodeGenerator$_Closure10*, org$frostlang$frostc$ClassDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn650)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn654)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn662)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn677)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn692)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn709)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn721)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn725)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn730)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn745)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn758)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn768)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn772)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn777)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn786)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn790)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn795)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn804)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn808)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn813)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn822)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn826)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn831)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn839)(frost$io$OutputStream*, frost$core$String*);

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
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x7d", 2, 22749, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x7d", 2, 22749, NULL };
static frost$core$String $s533 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x3f\x3a\x5c\x77\x7c\x5c\x2e\x29\x2b\x29\x5c\x2e\x28\x5c\x77\x2b\x29", 19, -9118778076962498171, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x61\x63\x6b\x61\x67\x65\x20", 8, 22940502189900249, NULL };
static frost$core$String $s555 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s573 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, 17289646011, NULL };
static frost$core$String $s596 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s658 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s660 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s668 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s716 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s753 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s760 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };

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
frost$core$Bit $tmp368 = frost$core$Bit$init$builtin_bit(false);
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block20; else goto block21;
block21:;
frost$core$Int64 $tmp370 = (frost$core$Int64) {122};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s371, $tmp370);
abort(); // unreachable
block20:;
goto block9;
block9:;
// line 125
frost$io$OutputStream** $tmp372 = &param0->out;
frost$io$OutputStream* $tmp373 = *$tmp372;
frost$core$String** $tmp374 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp375 = *$tmp374;
$fn377 $tmp376 = ($fn377) $tmp373->$class->vtable[17];
frost$core$Error* $tmp378 = $tmp376($tmp373, $tmp375);
if ($tmp378 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
*(&local0) = $tmp378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
goto block5;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// line 126
frost$collections$Array** $tmp379 = &param1->genericParameters;
frost$collections$Array* $tmp380 = *$tmp379;
frost$core$Bit $tmp381 = frost$core$Bit$init$builtin_bit($tmp380 != NULL);
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block24; else goto block25;
block24:;
// line 127
frost$io$OutputStream** $tmp383 = &param0->out;
frost$io$OutputStream* $tmp384 = *$tmp383;
frost$collections$Array** $tmp385 = &param1->genericParameters;
frost$collections$Array* $tmp386 = *$tmp385;
org$frostlang$frostc$StubCodeGenerator$_Closure8* $tmp387 = (org$frostlang$frostc$StubCodeGenerator$_Closure8*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure8$class);
org$frostlang$frostc$StubCodeGenerator$_Closure8$init$org$frostlang$frostc$StubCodeGenerator($tmp387, param0);
frost$core$MutableMethod* $tmp389 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp389, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure8$$anonymous7$org$frostlang$frostc$MethodDecl$GenericParameter$R$frost$core$String), ((frost$core$Object*) $tmp387));
ITable* $tmp390 = ((frost$collections$CollectionView*) $tmp386)->$class->itable;
while ($tmp390->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp390 = $tmp390->next;
}
$fn392 $tmp391 = $tmp390->methods[8];
frost$collections$Array* $tmp393 = $tmp391(((frost$collections$CollectionView*) $tmp386), ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp389)));
ITable* $tmp394 = ((frost$collections$CollectionView*) $tmp393)->$class->itable;
while ($tmp394->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp394 = $tmp394->next;
}
$fn396 $tmp395 = $tmp394->methods[2];
frost$core$String* $tmp397 = $tmp395(((frost$collections$CollectionView*) $tmp393), &$s398);
frost$core$String* $tmp399 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s400, $tmp397);
frost$core$String* $tmp401 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp399, &$s402);
$fn404 $tmp403 = ($fn404) $tmp384->$class->vtable[17];
frost$core$Error* $tmp405 = $tmp403($tmp384, $tmp401);
if ($tmp405 == NULL) goto block26; else goto block27;
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local0) = $tmp405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
goto block5;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
goto block25;
block25:;
// line 131
frost$io$OutputStream** $tmp406 = &param0->out;
frost$io$OutputStream* $tmp407 = *$tmp406;
$fn409 $tmp408 = ($fn409) $tmp407->$class->vtable[17];
frost$core$Error* $tmp410 = $tmp408($tmp407, &$s411);
if ($tmp410 == NULL) goto block28; else goto block29;
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
*(&local0) = $tmp410;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
goto block5;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
// line 132
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s412));
frost$core$String* $tmp413 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local1) = &$s414;
// line 133
frost$collections$Array** $tmp415 = &param1->parameters;
frost$collections$Array* $tmp416 = *$tmp415;
ITable* $tmp417 = ((frost$collections$Iterable*) $tmp416)->$class->itable;
while ($tmp417->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp417 = $tmp417->next;
}
$fn419 $tmp418 = $tmp417->methods[0];
frost$collections$Iterator* $tmp420 = $tmp418(((frost$collections$Iterable*) $tmp416));
goto block30;
block30:;
ITable* $tmp421 = $tmp420->$class->itable;
while ($tmp421->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp421 = $tmp421->next;
}
$fn423 $tmp422 = $tmp421->methods[0];
frost$core$Bit $tmp424 = $tmp422($tmp420);
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block32; else goto block31;
block31:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp426 = $tmp420->$class->itable;
while ($tmp426->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp426 = $tmp426->next;
}
$fn428 $tmp427 = $tmp426->methods[1];
frost$core$Object* $tmp429 = $tmp427($tmp420);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp429)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp430 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp429);
// line 134
frost$io$OutputStream** $tmp431 = &param0->out;
frost$io$OutputStream* $tmp432 = *$tmp431;
frost$core$String* $tmp433 = *(&local1);
frost$core$String* $tmp434 = frost$core$String$get_asString$R$frost$core$String($tmp433);
frost$core$String* $tmp435 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp434, &$s436);
org$frostlang$frostc$MethodDecl$Parameter* $tmp437 = *(&local2);
frost$core$String** $tmp438 = &$tmp437->name;
frost$core$String* $tmp439 = *$tmp438;
frost$core$String* $tmp440 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp435, $tmp439);
frost$core$String* $tmp441 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp440, &$s442);
org$frostlang$frostc$MethodDecl$Parameter* $tmp443 = *(&local2);
org$frostlang$frostc$Type** $tmp444 = &$tmp443->type;
org$frostlang$frostc$Type* $tmp445 = *$tmp444;
frost$core$String* $tmp446 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp445);
frost$core$String* $tmp447 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp441, $tmp446);
frost$core$String* $tmp448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp447, &$s449);
$fn451 $tmp450 = ($fn451) $tmp432->$class->vtable[17];
frost$core$Error* $tmp452 = $tmp450($tmp432, $tmp448);
if ($tmp452 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local0) = $tmp452;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
frost$core$Frost$unref$frost$core$Object$Q($tmp429);
org$frostlang$frostc$MethodDecl$Parameter* $tmp453 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$core$String* $tmp454 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp434));
// line 135
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s455));
frost$core$String* $tmp456 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local1) = &$s457;
frost$core$Frost$unref$frost$core$Object$Q($tmp429);
org$frostlang$frostc$MethodDecl$Parameter* $tmp458 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block30;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
// line 137
frost$io$OutputStream** $tmp459 = &param0->out;
frost$io$OutputStream* $tmp460 = *$tmp459;
$fn462 $tmp461 = ($fn462) $tmp460->$class->vtable[17];
frost$core$Error* $tmp463 = $tmp461($tmp460, &$s464);
if ($tmp463 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local0) = $tmp463;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
frost$core$String* $tmp465 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
// line 138
org$frostlang$frostc$MethodDecl$Kind* $tmp466 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp467 = *$tmp466;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp468;
$tmp468 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp468->value = $tmp467;
frost$core$Int64 $tmp469 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp470 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp469);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp471;
$tmp471 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp471->value = $tmp470;
ITable* $tmp472 = ((frost$core$Equatable*) $tmp468)->$class->itable;
while ($tmp472->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp472 = $tmp472->next;
}
$fn474 $tmp473 = $tmp472->methods[0];
frost$core$Bit $tmp475 = $tmp473(((frost$core$Equatable*) $tmp468), ((frost$core$Equatable*) $tmp471));
bool $tmp476 = $tmp475.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp471)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp468)));
if ($tmp476) goto block37; else goto block39;
block37:;
// line 139
frost$io$OutputStream** $tmp477 = &param0->out;
frost$io$OutputStream* $tmp478 = *$tmp477;
$fn480 $tmp479 = ($fn480) $tmp478->$class->vtable[17];
frost$core$Error* $tmp481 = $tmp479($tmp478, &$s482);
if ($tmp481 == NULL) goto block40; else goto block41;
block41:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
*(&local0) = $tmp481;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
frost$core$String* $tmp483 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block40:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
goto block38;
block39:;
// line 141
org$frostlang$frostc$Type** $tmp484 = &param1->returnType;
org$frostlang$frostc$Type* $tmp485 = *$tmp484;
org$frostlang$frostc$Type* $tmp486 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp487 = ((frost$core$Equatable*) $tmp485)->$class->itable;
while ($tmp487->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp487 = $tmp487->next;
}
$fn489 $tmp488 = $tmp487->methods[1];
frost$core$Bit $tmp490 = $tmp488(((frost$core$Equatable*) $tmp485), ((frost$core$Equatable*) $tmp486));
bool $tmp491 = $tmp490.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
if ($tmp491) goto block42; else goto block43;
block42:;
// line 142
frost$io$OutputStream** $tmp492 = &param0->out;
frost$io$OutputStream* $tmp493 = *$tmp492;
org$frostlang$frostc$Type** $tmp494 = &param1->returnType;
org$frostlang$frostc$Type* $tmp495 = *$tmp494;
frost$core$String* $tmp496 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp495);
frost$core$String* $tmp497 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s498, $tmp496);
frost$core$String* $tmp499 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp497, &$s500);
$fn502 $tmp501 = ($fn502) $tmp493->$class->vtable[19];
frost$core$Error* $tmp503 = $tmp501($tmp493, $tmp499);
if ($tmp503 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local0) = $tmp503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
frost$core$String* $tmp504 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
goto block43;
block43:;
goto block38;
block38:;
// line 144
org$frostlang$frostc$Annotations** $tmp505 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp506 = *$tmp505;
frost$core$Bit $tmp507 = org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit($tmp506);
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block46; else goto block47;
block46:;
// line 145
frost$io$OutputStream** $tmp509 = &param0->out;
frost$io$OutputStream* $tmp510 = *$tmp509;
$fn512 $tmp511 = ($fn512) $tmp510->$class->vtable[17];
frost$core$Error* $tmp513 = $tmp511($tmp510, &$s514);
if ($tmp513 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local0) = $tmp513;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
frost$core$String* $tmp515 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
goto block47;
block47:;
frost$core$String* $tmp516 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local1) = ((frost$core$String*) NULL);
goto block6;
block5:;
// line 149
frost$core$Error* $tmp517 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp517));
// line 150
frost$core$Int64 $tmp518 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp518);
goto block6;
block6:;
frost$core$Error* $tmp519 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$collections$ListView* local2 = NULL;
frost$core$String* local3 = NULL;
frost$core$Bit local4;
org$frostlang$frostc$Type* local5 = NULL;
org$frostlang$frostc$ChoiceCase* local6 = NULL;
org$frostlang$frostc$ClassDecl* local7 = NULL;
org$frostlang$frostc$FieldDecl* local8 = NULL;
org$frostlang$frostc$MethodDecl* local9 = NULL;
// line 157
*(&local0) = ((frost$core$Error*) NULL);
// line 158
frost$core$Weak** $tmp520 = &param0->compiler;
frost$core$Weak* $tmp521 = *$tmp520;
frost$core$Object* $tmp522 = frost$core$Weak$get$R$frost$core$Weak$T($tmp521);
frost$core$Bit $tmp523 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp522), param1);
frost$core$Bit $tmp524 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp523);
bool $tmp525 = $tmp524.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp522);
if ($tmp525) goto block3; else goto block4;
block3:;
// line 159
frost$core$Error* $tmp526 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
*(&local0) = ((frost$core$Error*) NULL);
return;
block4:;
// line 161
frost$core$String** $tmp527 = &param1->name;
frost$core$String* $tmp528 = *$tmp527;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$String* $tmp529 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local1) = $tmp528;
// line 162
frost$core$String** $tmp530 = &param1->name;
frost$core$String* $tmp531 = *$tmp530;
frost$core$RegularExpression* $tmp532 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp532, &$s533);
frost$collections$ListView* $tmp534 = frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q($tmp531, $tmp532);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$collections$ListView* $tmp535 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
*(&local2) = $tmp534;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
// line 163
frost$collections$ListView* $tmp536 = *(&local2);
frost$core$Bit $tmp537 = frost$core$Bit$init$builtin_bit($tmp536 != NULL);
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block5; else goto block6;
block5:;
// line 164
frost$core$Weak** $tmp539 = &param1->owner;
frost$core$Weak* $tmp540 = *$tmp539;
frost$core$Object* $tmp541 = frost$core$Weak$get$R$frost$core$Weak$T($tmp540);
frost$core$Bit $tmp542 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl*) $tmp541) == NULL);
bool $tmp543 = $tmp542.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp541);
if ($tmp543) goto block7; else goto block8;
block7:;
// line 165
frost$io$OutputStream** $tmp544 = &param0->out;
frost$io$OutputStream* $tmp545 = *$tmp544;
frost$collections$ListView* $tmp546 = *(&local2);
frost$core$Int64 $tmp547 = (frost$core$Int64) {0};
ITable* $tmp548 = $tmp546->$class->itable;
while ($tmp548->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp548 = $tmp548->next;
}
$fn550 $tmp549 = $tmp548->methods[0];
frost$core$Object* $tmp551 = $tmp549($tmp546, $tmp547);
frost$core$String* $tmp552 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s553, ((frost$core$String*) $tmp551));
frost$core$String* $tmp554 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp552, &$s555);
$fn557 $tmp556 = ($fn557) $tmp545->$class->vtable[19];
frost$core$Error* $tmp558 = $tmp556($tmp545, $tmp554);
if ($tmp558 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local0) = $tmp558;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$Frost$unref$frost$core$Object$Q($tmp551);
frost$collections$ListView* $tmp559 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp560 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp554));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
frost$core$Frost$unref$frost$core$Object$Q($tmp551);
goto block8;
block8:;
// line 167
frost$collections$ListView* $tmp561 = *(&local2);
frost$core$Int64 $tmp562 = (frost$core$Int64) {1};
ITable* $tmp563 = $tmp561->$class->itable;
while ($tmp563->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp563 = $tmp563->next;
}
$fn565 $tmp564 = $tmp563->methods[0];
frost$core$Object* $tmp566 = $tmp564($tmp561, $tmp562);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp566)));
frost$core$String* $tmp567 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local1) = ((frost$core$String*) $tmp566);
frost$core$Frost$unref$frost$core$Object$Q($tmp566);
goto block6;
block6:;
// line 169
frost$io$OutputStream** $tmp568 = &param0->out;
frost$io$OutputStream* $tmp569 = *$tmp568;
$fn571 $tmp570 = ($fn571) $tmp569->$class->vtable[19];
frost$core$Error* $tmp572 = $tmp570($tmp569, &$s573);
if ($tmp572 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local0) = $tmp572;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
frost$collections$ListView* $tmp574 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp575 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
// line 170
frost$io$OutputStream** $tmp576 = &param0->out;
frost$io$OutputStream* $tmp577 = *$tmp576;
org$frostlang$frostc$Annotations** $tmp578 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp579 = *$tmp578;
$fn581 $tmp580 = ($fn581) $tmp577->$class->vtable[18];
frost$core$Error* $tmp582 = $tmp580($tmp577, ((frost$core$Object*) $tmp579));
if ($tmp582 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
*(&local0) = $tmp582;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
frost$collections$ListView* $tmp583 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp584 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
// line 171
org$frostlang$frostc$ClassDecl$Kind* $tmp585 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp586 = *$tmp585;
frost$core$Int64 $tmp587 = $tmp586.$rawValue;
frost$core$Int64 $tmp588 = (frost$core$Int64) {0};
frost$core$Bit $tmp589 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp587, $tmp588);
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block16; else goto block17;
block16:;
// line 172
frost$io$OutputStream** $tmp591 = &param0->out;
frost$io$OutputStream* $tmp592 = *$tmp591;
$fn594 $tmp593 = ($fn594) $tmp592->$class->vtable[17];
frost$core$Error* $tmp595 = $tmp593($tmp592, &$s596);
if ($tmp595 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local0) = $tmp595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$collections$ListView* $tmp597 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp598 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
goto block15;
block17:;
frost$core$Int64 $tmp599 = (frost$core$Int64) {1};
frost$core$Bit $tmp600 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp587, $tmp599);
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block20; else goto block21;
block20:;
// line 173
frost$io$OutputStream** $tmp602 = &param0->out;
frost$io$OutputStream* $tmp603 = *$tmp602;
$fn605 $tmp604 = ($fn605) $tmp603->$class->vtable[17];
frost$core$Error* $tmp606 = $tmp604($tmp603, &$s607);
if ($tmp606 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local0) = $tmp606;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$collections$ListView* $tmp608 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp609 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
goto block15;
block21:;
frost$core$Int64 $tmp610 = (frost$core$Int64) {2};
frost$core$Bit $tmp611 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp587, $tmp610);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block24; else goto block15;
block24:;
// line 174
frost$io$OutputStream** $tmp613 = &param0->out;
frost$io$OutputStream* $tmp614 = *$tmp613;
$fn616 $tmp615 = ($fn616) $tmp614->$class->vtable[17];
frost$core$Error* $tmp617 = $tmp615($tmp614, &$s618);
if ($tmp617 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local0) = $tmp617;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
frost$collections$ListView* $tmp619 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp620 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
goto block15;
block15:;
// line 176
frost$io$OutputStream** $tmp621 = &param0->out;
frost$io$OutputStream* $tmp622 = *$tmp621;
frost$core$String* $tmp623 = *(&local1);
$fn625 $tmp624 = ($fn625) $tmp622->$class->vtable[17];
frost$core$Error* $tmp626 = $tmp624($tmp622, $tmp623);
if ($tmp626 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local0) = $tmp626;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
frost$collections$ListView* $tmp627 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp628 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
// line 177
frost$collections$List** $tmp629 = &param1->parameters;
frost$collections$List* $tmp630 = *$tmp629;
ITable* $tmp631 = ((frost$collections$CollectionView*) $tmp630)->$class->itable;
while ($tmp631->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp631 = $tmp631->next;
}
$fn633 $tmp632 = $tmp631->methods[0];
frost$core$Int64 $tmp634 = $tmp632(((frost$collections$CollectionView*) $tmp630));
frost$core$Int64 $tmp635 = (frost$core$Int64) {0};
int64_t $tmp636 = $tmp634.value;
int64_t $tmp637 = $tmp635.value;
bool $tmp638 = $tmp636 > $tmp637;
frost$core$Bit $tmp639 = (frost$core$Bit) {$tmp638};
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block29; else goto block30;
block29:;
// line 178
frost$io$OutputStream** $tmp641 = &param0->out;
frost$io$OutputStream* $tmp642 = *$tmp641;
frost$collections$List** $tmp643 = &param1->parameters;
frost$collections$List* $tmp644 = *$tmp643;
org$frostlang$frostc$StubCodeGenerator$_Closure10* $tmp645 = (org$frostlang$frostc$StubCodeGenerator$_Closure10*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure10$class);
org$frostlang$frostc$StubCodeGenerator$_Closure10$init$org$frostlang$frostc$StubCodeGenerator($tmp645, param0);
frost$core$MutableMethod* $tmp647 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp647, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure10$$anonymous9$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String), ((frost$core$Object*) $tmp645));
ITable* $tmp648 = ((frost$collections$CollectionView*) $tmp644)->$class->itable;
while ($tmp648->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp648 = $tmp648->next;
}
$fn650 $tmp649 = $tmp648->methods[8];
frost$collections$Array* $tmp651 = $tmp649(((frost$collections$CollectionView*) $tmp644), ((frost$core$MutableMethod*) ((frost$core$Method*) $tmp647)));
ITable* $tmp652 = ((frost$collections$CollectionView*) $tmp651)->$class->itable;
while ($tmp652->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp652 = $tmp652->next;
}
$fn654 $tmp653 = $tmp652->methods[2];
frost$core$String* $tmp655 = $tmp653(((frost$collections$CollectionView*) $tmp651), &$s656);
frost$core$String* $tmp657 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s658, $tmp655);
frost$core$String* $tmp659 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp657, &$s660);
$fn662 $tmp661 = ($fn662) $tmp642->$class->vtable[17];
frost$core$Error* $tmp663 = $tmp661($tmp642, $tmp659);
if ($tmp663 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local0) = $tmp663;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
frost$collections$ListView* $tmp664 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp665 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
goto block30;
block30:;
// line 181
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s666));
frost$core$String* $tmp667 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local3) = &$s668;
// line 182
org$frostlang$frostc$ClassDecl$Kind* $tmp669 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp670 = *$tmp669;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp671;
$tmp671 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp671->value = $tmp670;
frost$core$Int64 $tmp672 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp673 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp672);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp674;
$tmp674 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp674->value = $tmp673;
ITable* $tmp675 = ((frost$core$Equatable*) $tmp671)->$class->itable;
while ($tmp675->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp675 = $tmp675->next;
}
$fn677 $tmp676 = $tmp675->methods[1];
frost$core$Bit $tmp678 = $tmp676(((frost$core$Equatable*) $tmp671), ((frost$core$Equatable*) $tmp674));
bool $tmp679 = $tmp678.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp674)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp671)));
if ($tmp679) goto block33; else goto block34;
block33:;
// line 183
org$frostlang$frostc$Type** $tmp680 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp681 = *$tmp680;
frost$core$Bit $tmp682 = frost$core$Bit$init$builtin_bit($tmp681 != NULL);
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block37; else goto block38;
block37:;
org$frostlang$frostc$ClassDecl$Kind* $tmp684 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp685 = *$tmp684;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp686;
$tmp686 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp686->value = $tmp685;
frost$core$Int64 $tmp687 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp688 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp687);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp689;
$tmp689 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp689->value = $tmp688;
ITable* $tmp690 = ((frost$core$Equatable*) $tmp686)->$class->itable;
while ($tmp690->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp690 = $tmp690->next;
}
$fn692 $tmp691 = $tmp690->methods[1];
frost$core$Bit $tmp693 = $tmp691(((frost$core$Equatable*) $tmp686), ((frost$core$Equatable*) $tmp689));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp689)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp686)));
*(&local4) = $tmp693;
goto block39;
block38:;
*(&local4) = $tmp682;
goto block39;
block39:;
frost$core$Bit $tmp694 = *(&local4);
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block35; else goto block36;
block35:;
// line 184
frost$io$OutputStream** $tmp696 = &param0->out;
frost$io$OutputStream* $tmp697 = *$tmp696;
frost$core$String* $tmp698 = *(&local3);
frost$core$String* $tmp699 = frost$core$String$get_asString$R$frost$core$String($tmp698);
frost$core$String* $tmp700 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp699, &$s701);
org$frostlang$frostc$Type** $tmp702 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp703 = *$tmp702;
frost$core$String* $tmp704 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp703);
frost$core$String* $tmp705 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp700, $tmp704);
frost$core$String* $tmp706 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp705, &$s707);
$fn709 $tmp708 = ($fn709) $tmp697->$class->vtable[17];
frost$core$Error* $tmp710 = $tmp708($tmp697, $tmp706);
if ($tmp710 == NULL) goto block40; else goto block41;
block41:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
*(&local0) = $tmp710;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
frost$core$String* $tmp711 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp712 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp713 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block40:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
// line 185
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s714));
frost$core$String* $tmp715 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
*(&local3) = &$s716;
goto block36;
block36:;
// line 187
frost$collections$Array** $tmp717 = &param1->rawInterfaces;
frost$collections$Array* $tmp718 = *$tmp717;
ITable* $tmp719 = ((frost$collections$Iterable*) $tmp718)->$class->itable;
while ($tmp719->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp719 = $tmp719->next;
}
$fn721 $tmp720 = $tmp719->methods[0];
frost$collections$Iterator* $tmp722 = $tmp720(((frost$collections$Iterable*) $tmp718));
goto block42;
block42:;
ITable* $tmp723 = $tmp722->$class->itable;
while ($tmp723->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp723 = $tmp723->next;
}
$fn725 $tmp724 = $tmp723->methods[0];
frost$core$Bit $tmp726 = $tmp724($tmp722);
bool $tmp727 = $tmp726.value;
if ($tmp727) goto block44; else goto block43;
block43:;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp728 = $tmp722->$class->itable;
while ($tmp728->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp728 = $tmp728->next;
}
$fn730 $tmp729 = $tmp728->methods[1];
frost$core$Object* $tmp731 = $tmp729($tmp722);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp731)));
org$frostlang$frostc$Type* $tmp732 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
*(&local5) = ((org$frostlang$frostc$Type*) $tmp731);
// line 188
frost$io$OutputStream** $tmp733 = &param0->out;
frost$io$OutputStream* $tmp734 = *$tmp733;
frost$core$String* $tmp735 = *(&local3);
frost$core$String* $tmp736 = frost$core$String$get_asString$R$frost$core$String($tmp735);
frost$core$String* $tmp737 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp736, &$s738);
org$frostlang$frostc$Type* $tmp739 = *(&local5);
frost$core$String* $tmp740 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp739);
frost$core$String* $tmp741 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp737, $tmp740);
frost$core$String* $tmp742 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp741, &$s743);
$fn745 $tmp744 = ($fn745) $tmp734->$class->vtable[17];
frost$core$Error* $tmp746 = $tmp744($tmp734, $tmp742);
if ($tmp746 == NULL) goto block45; else goto block46;
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local0) = $tmp746;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
frost$core$Frost$unref$frost$core$Object$Q($tmp731);
org$frostlang$frostc$Type* $tmp747 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
frost$core$String* $tmp748 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp749 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp750 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp737));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
// line 189
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s751));
frost$core$String* $tmp752 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local3) = &$s753;
frost$core$Frost$unref$frost$core$Object$Q($tmp731);
org$frostlang$frostc$Type* $tmp754 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
goto block42;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
goto block34;
block34:;
// line 192
frost$io$OutputStream** $tmp755 = &param0->out;
frost$io$OutputStream* $tmp756 = *$tmp755;
$fn758 $tmp757 = ($fn758) $tmp756->$class->vtable[17];
frost$core$Error* $tmp759 = $tmp757($tmp756, &$s760);
if ($tmp759 == NULL) goto block47; else goto block48;
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local0) = $tmp759;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$String* $tmp761 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp762 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp763 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
// line 193
frost$collections$Array** $tmp764 = &param1->choiceCases;
frost$collections$Array* $tmp765 = *$tmp764;
ITable* $tmp766 = ((frost$collections$Iterable*) $tmp765)->$class->itable;
while ($tmp766->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp766 = $tmp766->next;
}
$fn768 $tmp767 = $tmp766->methods[0];
frost$collections$Iterator* $tmp769 = $tmp767(((frost$collections$Iterable*) $tmp765));
goto block49;
block49:;
ITable* $tmp770 = $tmp769->$class->itable;
while ($tmp770->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp770 = $tmp770->next;
}
$fn772 $tmp771 = $tmp770->methods[0];
frost$core$Bit $tmp773 = $tmp771($tmp769);
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block51; else goto block50;
block50:;
*(&local6) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp775 = $tmp769->$class->itable;
while ($tmp775->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp775 = $tmp775->next;
}
$fn777 $tmp776 = $tmp775->methods[1];
frost$core$Object* $tmp778 = $tmp776($tmp769);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp778)));
org$frostlang$frostc$ChoiceCase* $tmp779 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local6) = ((org$frostlang$frostc$ChoiceCase*) $tmp778);
// line 194
org$frostlang$frostc$ChoiceCase* $tmp780 = *(&local6);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(param0, $tmp780);
frost$core$Frost$unref$frost$core$Object$Q($tmp778);
org$frostlang$frostc$ChoiceCase* $tmp781 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local6) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block49;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
// line 196
frost$collections$Array** $tmp782 = &param1->classes;
frost$collections$Array* $tmp783 = *$tmp782;
ITable* $tmp784 = ((frost$collections$Iterable*) $tmp783)->$class->itable;
while ($tmp784->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp784 = $tmp784->next;
}
$fn786 $tmp785 = $tmp784->methods[0];
frost$collections$Iterator* $tmp787 = $tmp785(((frost$collections$Iterable*) $tmp783));
goto block52;
block52:;
ITable* $tmp788 = $tmp787->$class->itable;
while ($tmp788->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp788 = $tmp788->next;
}
$fn790 $tmp789 = $tmp788->methods[0];
frost$core$Bit $tmp791 = $tmp789($tmp787);
bool $tmp792 = $tmp791.value;
if ($tmp792) goto block54; else goto block53;
block53:;
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp793 = $tmp787->$class->itable;
while ($tmp793->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp793 = $tmp793->next;
}
$fn795 $tmp794 = $tmp793->methods[1];
frost$core$Object* $tmp796 = $tmp794($tmp787);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp796)));
org$frostlang$frostc$ClassDecl* $tmp797 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) $tmp796);
// line 197
org$frostlang$frostc$ClassDecl* $tmp798 = *(&local7);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl(param0, $tmp798);
frost$core$Frost$unref$frost$core$Object$Q($tmp796);
org$frostlang$frostc$ClassDecl* $tmp799 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
*(&local7) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block52;
block54:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
// line 199
frost$collections$Array** $tmp800 = &param1->fields;
frost$collections$Array* $tmp801 = *$tmp800;
ITable* $tmp802 = ((frost$collections$Iterable*) $tmp801)->$class->itable;
while ($tmp802->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp802 = $tmp802->next;
}
$fn804 $tmp803 = $tmp802->methods[0];
frost$collections$Iterator* $tmp805 = $tmp803(((frost$collections$Iterable*) $tmp801));
goto block55;
block55:;
ITable* $tmp806 = $tmp805->$class->itable;
while ($tmp806->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp806 = $tmp806->next;
}
$fn808 $tmp807 = $tmp806->methods[0];
frost$core$Bit $tmp809 = $tmp807($tmp805);
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block57; else goto block56;
block56:;
*(&local8) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp811 = $tmp805->$class->itable;
while ($tmp811->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp811 = $tmp811->next;
}
$fn813 $tmp812 = $tmp811->methods[1];
frost$core$Object* $tmp814 = $tmp812($tmp805);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp814)));
org$frostlang$frostc$FieldDecl* $tmp815 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
*(&local8) = ((org$frostlang$frostc$FieldDecl*) $tmp814);
// line 200
org$frostlang$frostc$FieldDecl* $tmp816 = *(&local8);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(param0, $tmp816);
frost$core$Frost$unref$frost$core$Object$Q($tmp814);
org$frostlang$frostc$FieldDecl* $tmp817 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local8) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block55;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
// line 202
frost$collections$Array** $tmp818 = &param1->methods;
frost$collections$Array* $tmp819 = *$tmp818;
ITable* $tmp820 = ((frost$collections$Iterable*) $tmp819)->$class->itable;
while ($tmp820->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp820 = $tmp820->next;
}
$fn822 $tmp821 = $tmp820->methods[0];
frost$collections$Iterator* $tmp823 = $tmp821(((frost$collections$Iterable*) $tmp819));
goto block58;
block58:;
ITable* $tmp824 = $tmp823->$class->itable;
while ($tmp824->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp824 = $tmp824->next;
}
$fn826 $tmp825 = $tmp824->methods[0];
frost$core$Bit $tmp827 = $tmp825($tmp823);
bool $tmp828 = $tmp827.value;
if ($tmp828) goto block60; else goto block59;
block59:;
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp829 = $tmp823->$class->itable;
while ($tmp829->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp829 = $tmp829->next;
}
$fn831 $tmp830 = $tmp829->methods[1];
frost$core$Object* $tmp832 = $tmp830($tmp823);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp832)));
org$frostlang$frostc$MethodDecl* $tmp833 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) $tmp832);
// line 203
org$frostlang$frostc$MethodDecl* $tmp834 = *(&local9);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(param0, $tmp834);
frost$core$Frost$unref$frost$core$Object$Q($tmp832);
org$frostlang$frostc$MethodDecl* $tmp835 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local9) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block58;
block60:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// line 205
frost$io$OutputStream** $tmp836 = &param0->out;
frost$io$OutputStream* $tmp837 = *$tmp836;
$fn839 $tmp838 = ($fn839) $tmp837->$class->vtable[17];
frost$core$Error* $tmp840 = $tmp838($tmp837, &$s841);
if ($tmp840 == NULL) goto block61; else goto block62;
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
*(&local0) = $tmp840;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$String* $tmp842 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp843 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp844 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$String* $tmp845 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp846 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp847 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 208
frost$core$Error* $tmp848 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp848));
// line 209
frost$core$Int64 $tmp849 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp849);
goto block2;
block2:;
frost$core$Error* $tmp850 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Bit local0;
// line 215
frost$core$Weak** $tmp851 = &param1->owner;
frost$core$Weak* $tmp852 = *$tmp851;
frost$core$Object* $tmp853 = frost$core$Weak$get$R$frost$core$Weak$T($tmp852);
frost$core$Bit $tmp854 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl*) $tmp853) == NULL);
bool $tmp855 = $tmp854.value;
if ($tmp855) goto block3; else goto block4;
block3:;
org$frostlang$frostc$Annotations** $tmp856 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp857 = *$tmp856;
frost$core$Bit $tmp858 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp857);
frost$core$Bit $tmp859 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp858);
*(&local0) = $tmp859;
goto block5;
block4:;
*(&local0) = $tmp854;
goto block5;
block5:;
frost$core$Bit $tmp860 = *(&local0);
bool $tmp861 = $tmp860.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp853);
if ($tmp861) goto block1; else goto block2;
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
frost$core$Weak** $tmp862 = &param0->compiler;
frost$core$Weak* $tmp863 = *$tmp862;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$io$OutputStream** $tmp864 = &param0->out;
frost$io$OutputStream* $tmp865 = *$tmp864;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
return;

}

