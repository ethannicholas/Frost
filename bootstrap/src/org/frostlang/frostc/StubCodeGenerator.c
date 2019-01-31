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
#include "org/frostlang/frostc/Annotations.h"
#include "org/frostlang/frostc/FieldDecl/Kind.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"
#include "org/frostlang/frostc/MethodDecl/Kind.h"
#include "org/frostlang/frostc/StubCodeGenerator/_Closure10.h"
#include "org/frostlang/frostc/MethodDecl/GenericParameter.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/RegularExpression.h"
#include "org/frostlang/frostc/ClassDecl/Kind.h"
#include "frost/collections/List.h"
#include "org/frostlang/frostc/StubCodeGenerator/_Closure12.h"
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
typedef frost$collections$ListView* (*$fn116)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$Q$GT);
typedef frost$core$String* (*$fn119)(org$frostlang$frostc$StubCodeGenerator$_Closure4*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn123)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn127)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn138)(org$frostlang$frostc$StubCodeGenerator$_Closure6*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn142)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn146)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn193)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn199)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn212)(org$frostlang$frostc$StubCodeGenerator$_Closure8*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn216)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn220)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn228)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn233)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn257)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn266)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn275)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn284)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn292)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn297)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn306)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn316)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn322)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn330)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn335)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn355)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn366)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn375)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn388)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn399)(org$frostlang$frostc$StubCodeGenerator$_Closure10*, org$frostlang$frostc$MethodDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn403)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn407)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn415)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn420)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn430)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn434)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn439)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn462)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn473)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn485)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn491)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn500)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn513)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn523)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Object* (*$fn561)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn568)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Object* (*$fn576)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn582)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn592)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn605)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn616)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn627)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn636)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn644)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn657)(org$frostlang$frostc$StubCodeGenerator$_Closure12*, org$frostlang$frostc$ClassDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn661)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn665)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn673)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn688)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn703)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn719)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn731)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn735)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn740)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn755)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn768)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn778)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn782)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn787)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn796)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn800)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn805)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn814)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn818)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn823)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn832)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn836)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn841)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn849)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 38, -6371532287653990932, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s222 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s286 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s423 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s466 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x7d", 2, 22749, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s525 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b\x7d", 2, 22749, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x28\x28\x3f\x3a\x5c\x77\x7c\x5c\x2e\x29\x2b\x29\x5c\x2e\x28\x5c\x77\x2b\x29", 19, -9118778076962498171, NULL };
static frost$core$String $s564 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x61\x63\x6b\x61\x67\x65\x20", 8, 22940502189900249, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, 17289646011, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static frost$core$String $s629 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s669 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s679 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s711 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s717 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s724 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s726 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s753 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s761 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s770 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x7d", 1, 226, NULL };

void org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream(org$frostlang$frostc$StubCodeGenerator* param0, frost$io$OutputStream* param1) {

// line 6
FROST_ASSERT(24 == sizeof(frost$core$Weak));
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
FROST_ASSERT(24 == sizeof(frost$core$Weak));
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
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure2));
org$frostlang$frostc$StubCodeGenerator$_Closure2* $tmp28 = (org$frostlang$frostc$StubCodeGenerator$_Closure2*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure2$class);
org$frostlang$frostc$StubCodeGenerator$_Closure2$init$org$frostlang$frostc$StubCodeGenerator($tmp28, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp30 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp30, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure2$$anonymous1$org$frostlang$frostc$Type$R$frost$core$String), ((frost$core$Object*) $tmp28));
ITable* $tmp31 = ((frost$collections$CollectionView*) $tmp27)->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[8];
frost$collections$Array* $tmp34 = $tmp32(((frost$collections$CollectionView*) $tmp27), $tmp30);
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
frost$core$Int64 $tmp82 = (frost$core$Int64) {12};
frost$core$Bit $tmp83 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp82);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp85 = (frost$core$Int64) {13};
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
frost$core$Int64 $tmp100 = (frost$core$Int64) {11};
frost$core$Bit $tmp101 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp100);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block5; else goto block6;
block5:;
// line 35
org$frostlang$frostc$FixedArray* $tmp103 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp104 = (frost$core$Int64) {0};
frost$core$Object* $tmp105 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp103, $tmp104);
frost$core$String* $tmp106 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp105));
frost$core$String* $tmp107 = frost$core$String$get_asString$R$frost$core$String($tmp106);
frost$core$String* $tmp108 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp107, &$s109);
org$frostlang$frostc$FixedArray* $tmp110 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp111 = (frost$core$Int64) {1};
frost$core$Bit $tmp112 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp113 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp111, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp112);
ITable* $tmp114 = ((frost$collections$ListView*) $tmp110)->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp114 = $tmp114->next;
}
$fn116 $tmp115 = $tmp114->methods[2];
frost$collections$ListView* $tmp117 = $tmp115(((frost$collections$ListView*) $tmp110), $tmp113);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure4));
org$frostlang$frostc$StubCodeGenerator$_Closure4* $tmp118 = (org$frostlang$frostc$StubCodeGenerator$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure4$class);
org$frostlang$frostc$StubCodeGenerator$_Closure4$init$org$frostlang$frostc$StubCodeGenerator($tmp118, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp120 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp120, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure4$$anonymous3$org$frostlang$frostc$Type$R$frost$core$String), ((frost$core$Object*) $tmp118));
ITable* $tmp121 = ((frost$collections$CollectionView*) $tmp117)->$class->itable;
while ($tmp121->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp121 = $tmp121->next;
}
$fn123 $tmp122 = $tmp121->methods[8];
frost$collections$Array* $tmp124 = $tmp122(((frost$collections$CollectionView*) $tmp117), $tmp120);
ITable* $tmp125 = ((frost$collections$CollectionView*) $tmp124)->$class->itable;
while ($tmp125->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp125 = $tmp125->next;
}
$fn127 $tmp126 = $tmp125->methods[2];
frost$core$String* $tmp128 = $tmp126(((frost$collections$CollectionView*) $tmp124), &$s129);
frost$core$String* $tmp130 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp108, $tmp128);
frost$core$String* $tmp131 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp130, &$s132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
return $tmp131;
block6:;
frost$core$Int64 $tmp133 = (frost$core$Int64) {10};
frost$core$Bit $tmp134 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp133);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block7; else goto block8;
block7:;
// line 38
org$frostlang$frostc$FixedArray* $tmp136 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure6));
org$frostlang$frostc$StubCodeGenerator$_Closure6* $tmp137 = (org$frostlang$frostc$StubCodeGenerator$_Closure6*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure6$class);
org$frostlang$frostc$StubCodeGenerator$_Closure6$init$org$frostlang$frostc$StubCodeGenerator($tmp137, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp139 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp139, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure6$$anonymous5$org$frostlang$frostc$Type$R$frost$core$String), ((frost$core$Object*) $tmp137));
ITable* $tmp140 = ((frost$collections$CollectionView*) $tmp136)->$class->itable;
while ($tmp140->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp140 = $tmp140->next;
}
$fn142 $tmp141 = $tmp140->methods[8];
frost$collections$Array* $tmp143 = $tmp141(((frost$collections$CollectionView*) $tmp136), $tmp139);
ITable* $tmp144 = ((frost$collections$CollectionView*) $tmp143)->$class->itable;
while ($tmp144->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp144 = $tmp144->next;
}
$fn146 $tmp145 = $tmp144->methods[2];
frost$core$String* $tmp147 = $tmp145(((frost$collections$CollectionView*) $tmp143), &$s148);
frost$core$String* $tmp149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s150, $tmp147);
frost$core$String* $tmp151 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp149, &$s152);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
return $tmp151;
block8:;
frost$core$Int64 $tmp153 = (frost$core$Int64) {1};
frost$core$Bit $tmp154 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp153);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block9; else goto block10;
block9:;
// line 41
org$frostlang$frostc$FixedArray* $tmp156 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$Int64 $tmp157 = (frost$core$Int64) {0};
frost$core$Object* $tmp158 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp156, $tmp157);
frost$core$String* $tmp159 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp158));
frost$core$String* $tmp160 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp159, &$s161);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
frost$core$Frost$unref$frost$core$Object$Q($tmp158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
return $tmp160;
block10:;
frost$core$Int64 $tmp162 = (frost$core$Int64) {16};
frost$core$Bit $tmp163 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp162);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block11; else goto block12;
block11:;
// line 44
org$frostlang$frostc$FixedArray* $tmp165 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$String* $tmp166 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp165), &$s167);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
return $tmp166;
block12:;
frost$core$Int64 $tmp168 = (frost$core$Int64) {18};
frost$core$Bit $tmp169 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp168);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block13; else goto block14;
block13:;
// line 47
org$frostlang$frostc$FixedArray* $tmp171 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$String* $tmp172 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp171), &$s173);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
return $tmp172;
block14:;
frost$core$Int64 $tmp174 = (frost$core$Int64) {15};
frost$core$Bit $tmp175 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block15; else goto block16;
block15:;
// line 50
org$frostlang$frostc$FixedArray* $tmp177 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$String* $tmp178 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp177), &$s179);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
return $tmp178;
block16:;
frost$core$Int64 $tmp180 = (frost$core$Int64) {17};
frost$core$Bit $tmp181 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp81, $tmp180);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block17; else goto block18;
block17:;
// line 53
org$frostlang$frostc$FixedArray* $tmp183 = org$frostlang$frostc$Type$get_subtypes$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(param1);
frost$core$String* $tmp184 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp183), &$s185);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
return $tmp184;
block18:;
// line 56
frost$core$String** $tmp186 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp187 = *$tmp186;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
return $tmp187;
block1:;
goto block19;
block19:;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ChoiceCase* param1) {

frost$core$Error* local0 = NULL;
// line 62
*(&local0) = ((frost$core$Error*) NULL);
// line 63
frost$io$OutputStream** $tmp188 = &param0->out;
frost$io$OutputStream* $tmp189 = *$tmp188;
frost$core$String** $tmp190 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp191 = *$tmp190;
$fn193 $tmp192 = ($fn193) $tmp189->$class->vtable[17];
frost$core$Error* $tmp194 = $tmp192($tmp189, $tmp191);
if ($tmp194 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
*(&local0) = $tmp194;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// line 64
frost$collections$Array** $tmp195 = &param1->fields;
frost$collections$Array* $tmp196 = *$tmp195;
ITable* $tmp197 = ((frost$collections$CollectionView*) $tmp196)->$class->itable;
while ($tmp197->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp197 = $tmp197->next;
}
$fn199 $tmp198 = $tmp197->methods[0];
frost$core$Int64 $tmp200 = $tmp198(((frost$collections$CollectionView*) $tmp196));
frost$core$Int64 $tmp201 = (frost$core$Int64) {0};
int64_t $tmp202 = $tmp200.value;
int64_t $tmp203 = $tmp201.value;
bool $tmp204 = $tmp202 > $tmp203;
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block5; else goto block7;
block5:;
// line 65
frost$io$OutputStream** $tmp207 = &param0->out;
frost$io$OutputStream* $tmp208 = *$tmp207;
frost$collections$Array** $tmp209 = &param1->fields;
frost$collections$Array* $tmp210 = *$tmp209;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure8));
org$frostlang$frostc$StubCodeGenerator$_Closure8* $tmp211 = (org$frostlang$frostc$StubCodeGenerator$_Closure8*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure8$class);
org$frostlang$frostc$StubCodeGenerator$_Closure8$init$org$frostlang$frostc$StubCodeGenerator($tmp211, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp213 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp213, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure8$$anonymous7$org$frostlang$frostc$Type$R$frost$core$String), ((frost$core$Object*) $tmp211));
ITable* $tmp214 = ((frost$collections$CollectionView*) $tmp210)->$class->itable;
while ($tmp214->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp214 = $tmp214->next;
}
$fn216 $tmp215 = $tmp214->methods[8];
frost$collections$Array* $tmp217 = $tmp215(((frost$collections$CollectionView*) $tmp210), $tmp213);
ITable* $tmp218 = ((frost$collections$CollectionView*) $tmp217)->$class->itable;
while ($tmp218->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp218 = $tmp218->next;
}
$fn220 $tmp219 = $tmp218->methods[2];
frost$core$String* $tmp221 = $tmp219(((frost$collections$CollectionView*) $tmp217), &$s222);
frost$core$String* $tmp223 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s224, $tmp221);
frost$core$String* $tmp225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp223, &$s226);
$fn228 $tmp227 = ($fn228) $tmp208->$class->vtable[17];
frost$core$Error* $tmp229 = $tmp227($tmp208, $tmp225);
if ($tmp229 == NULL) goto block8; else goto block9;
block9:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local0) = $tmp229;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
goto block1;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
goto block6;
block7:;
// line 1
// line 68
frost$io$OutputStream** $tmp230 = &param0->out;
frost$io$OutputStream* $tmp231 = *$tmp230;
$fn233 $tmp232 = ($fn233) $tmp231->$class->vtable[21];
frost$core$Error* $tmp234 = $tmp232($tmp231);
if ($tmp234 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local0) = $tmp234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
goto block1;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
goto block6;
block6:;
goto block2;
block1:;
// line 72
frost$core$Error* $tmp235 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp235));
// line 73
frost$core$Int64 $tmp236 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp236);
goto block2;
block2:;
frost$core$Error* $tmp237 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$FieldDecl* param1) {

frost$core$Error* local0 = NULL;
// line 78
org$frostlang$frostc$Annotations** $tmp238 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp239 = *$tmp238;
frost$core$Bit $tmp240 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp239);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block1; else goto block2;
block1:;
// line 79
return;
block2:;
// line 81
frost$core$Weak** $tmp242 = &param0->compiler;
frost$core$Weak* $tmp243 = *$tmp242;
frost$core$Object* $tmp244 = frost$core$Weak$get$R$frost$core$Weak$T($tmp243);
frost$core$Bit $tmp245 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp244), param1);
frost$core$Bit $tmp246 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp245);
bool $tmp247 = $tmp246.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp244);
if ($tmp247) goto block3; else goto block4;
block3:;
// line 82
return;
block4:;
// line 84
*(&local0) = ((frost$core$Error*) NULL);
// line 85
org$frostlang$frostc$FieldDecl$Kind* $tmp248 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp249 = *$tmp248;
frost$core$Int64 $tmp250 = $tmp249.$rawValue;
frost$core$Int64 $tmp251 = (frost$core$Int64) {0};
frost$core$Bit $tmp252 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp250, $tmp251);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block8; else goto block9;
block8:;
// line 86
frost$io$OutputStream** $tmp254 = &param0->out;
frost$io$OutputStream* $tmp255 = *$tmp254;
$fn257 $tmp256 = ($fn257) $tmp255->$class->vtable[17];
frost$core$Error* $tmp258 = $tmp256($tmp255, &$s259);
if ($tmp258 == NULL) goto block10; else goto block11;
block11:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local0) = $tmp258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
goto block5;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
goto block7;
block9:;
frost$core$Int64 $tmp260 = (frost$core$Int64) {1};
frost$core$Bit $tmp261 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp250, $tmp260);
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block12; else goto block13;
block12:;
// line 87
frost$io$OutputStream** $tmp263 = &param0->out;
frost$io$OutputStream* $tmp264 = *$tmp263;
$fn266 $tmp265 = ($fn266) $tmp264->$class->vtable[17];
frost$core$Error* $tmp267 = $tmp265($tmp264, &$s268);
if ($tmp267 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local0) = $tmp267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
goto block5;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
goto block7;
block13:;
frost$core$Int64 $tmp269 = (frost$core$Int64) {2};
frost$core$Bit $tmp270 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp250, $tmp269);
bool $tmp271 = $tmp270.value;
if ($tmp271) goto block16; else goto block17;
block16:;
// line 88
frost$io$OutputStream** $tmp272 = &param0->out;
frost$io$OutputStream* $tmp273 = *$tmp272;
$fn275 $tmp274 = ($fn275) $tmp273->$class->vtable[17];
frost$core$Error* $tmp276 = $tmp274($tmp273, &$s277);
if ($tmp276 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
*(&local0) = $tmp276;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
goto block5;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
goto block7;
block17:;
frost$core$Int64 $tmp278 = (frost$core$Int64) {3};
frost$core$Bit $tmp279 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp250, $tmp278);
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block20; else goto block7;
block20:;
// line 89
frost$io$OutputStream** $tmp281 = &param0->out;
frost$io$OutputStream* $tmp282 = *$tmp281;
$fn284 $tmp283 = ($fn284) $tmp282->$class->vtable[17];
frost$core$Error* $tmp285 = $tmp283($tmp282, &$s286);
if ($tmp285 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
*(&local0) = $tmp285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
goto block5;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
goto block7;
block7:;
// line 91
frost$io$OutputStream** $tmp287 = &param0->out;
frost$io$OutputStream* $tmp288 = *$tmp287;
frost$core$String** $tmp289 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp290 = *$tmp289;
$fn292 $tmp291 = ($fn292) $tmp288->$class->vtable[17];
frost$core$Error* $tmp293 = $tmp291($tmp288, $tmp290);
if ($tmp293 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local0) = $tmp293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
goto block5;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// line 92
frost$io$OutputStream** $tmp294 = &param0->out;
frost$io$OutputStream* $tmp295 = *$tmp294;
$fn297 $tmp296 = ($fn297) $tmp295->$class->vtable[17];
frost$core$Error* $tmp298 = $tmp296($tmp295, &$s299);
if ($tmp298 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local0) = $tmp298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
goto block5;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// line 93
frost$io$OutputStream** $tmp300 = &param0->out;
frost$io$OutputStream* $tmp301 = *$tmp300;
org$frostlang$frostc$Type** $tmp302 = &param1->type;
org$frostlang$frostc$Type* $tmp303 = *$tmp302;
frost$core$String* $tmp304 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp303);
$fn306 $tmp305 = ($fn306) $tmp301->$class->vtable[17];
frost$core$Error* $tmp307 = $tmp305($tmp301, $tmp304);
if ($tmp307 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local0) = $tmp307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
goto block5;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// line 94
org$frostlang$frostc$FieldDecl$Kind* $tmp308 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp309 = *$tmp308;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp310;
$tmp310 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp310->value = $tmp309;
frost$core$Int64 $tmp311 = (frost$core$Int64) {2};
org$frostlang$frostc$FieldDecl$Kind $tmp312 = org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int64($tmp311);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp313;
$tmp313 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp313->value = $tmp312;
ITable* $tmp314 = ((frost$core$Equatable*) $tmp310)->$class->itable;
while ($tmp314->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[0];
frost$core$Bit $tmp317 = $tmp315(((frost$core$Equatable*) $tmp310), ((frost$core$Equatable*) $tmp313));
bool $tmp318 = $tmp317.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp313)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp310)));
if ($tmp318) goto block29; else goto block30;
block29:;
// line 95
frost$io$OutputStream** $tmp319 = &param0->out;
frost$io$OutputStream* $tmp320 = *$tmp319;
$fn322 $tmp321 = ($fn322) $tmp320->$class->vtable[17];
frost$core$Error* $tmp323 = $tmp321($tmp320, &$s324);
if ($tmp323 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
*(&local0) = $tmp323;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
goto block5;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
// line 96
frost$io$OutputStream** $tmp325 = &param0->out;
frost$io$OutputStream* $tmp326 = *$tmp325;
org$frostlang$frostc$ASTNode** $tmp327 = &param1->rawValue;
org$frostlang$frostc$ASTNode* $tmp328 = *$tmp327;
$fn330 $tmp329 = ($fn330) $tmp326->$class->vtable[18];
frost$core$Error* $tmp331 = $tmp329($tmp326, ((frost$core$Object*) $tmp328));
if ($tmp331 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
*(&local0) = $tmp331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
goto block5;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
goto block30;
block30:;
// line 98
frost$io$OutputStream** $tmp332 = &param0->out;
frost$io$OutputStream* $tmp333 = *$tmp332;
$fn335 $tmp334 = ($fn335) $tmp333->$class->vtable[21];
frost$core$Error* $tmp336 = $tmp334($tmp333);
if ($tmp336 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local0) = $tmp336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
goto block5;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
goto block6;
block5:;
// line 101
frost$core$Error* $tmp337 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp337));
// line 102
frost$core$Int64 $tmp338 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp338);
goto block6;
block6:;
frost$core$Error* $tmp339 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
// line 107
org$frostlang$frostc$Annotations** $tmp340 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp341 = *$tmp340;
frost$core$Bit $tmp342 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp341);
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block1; else goto block2;
block1:;
// line 108
return;
block2:;
// line 110
frost$core$Weak** $tmp344 = &param0->compiler;
frost$core$Weak* $tmp345 = *$tmp344;
frost$core$Object* $tmp346 = frost$core$Weak$get$R$frost$core$Weak$T($tmp345);
frost$core$Bit $tmp347 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp346), param1);
frost$core$Bit $tmp348 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp347);
bool $tmp349 = $tmp348.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp346);
if ($tmp349) goto block3; else goto block4;
block3:;
// line 111
return;
block4:;
// line 113
*(&local0) = ((frost$core$Error*) NULL);
// line 114
frost$io$OutputStream** $tmp350 = &param0->out;
frost$io$OutputStream* $tmp351 = *$tmp350;
org$frostlang$frostc$Annotations** $tmp352 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp353 = *$tmp352;
$fn355 $tmp354 = ($fn355) $tmp351->$class->vtable[18];
frost$core$Error* $tmp356 = $tmp354($tmp351, ((frost$core$Object*) $tmp353));
if ($tmp356 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local0) = $tmp356;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
goto block5;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// line 115
org$frostlang$frostc$MethodDecl$Kind* $tmp357 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp358 = *$tmp357;
frost$core$Int64 $tmp359 = $tmp358.$rawValue;
frost$core$Int64 $tmp360 = (frost$core$Int64) {0};
frost$core$Bit $tmp361 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp359, $tmp360);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block10; else goto block11;
block10:;
// line 117
frost$io$OutputStream** $tmp363 = &param0->out;
frost$io$OutputStream* $tmp364 = *$tmp363;
$fn366 $tmp365 = ($fn366) $tmp364->$class->vtable[17];
frost$core$Error* $tmp367 = $tmp365($tmp364, &$s368);
if ($tmp367 == NULL) goto block12; else goto block13;
block13:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local0) = $tmp367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
goto block5;
block12:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
goto block9;
block11:;
frost$core$Int64 $tmp369 = (frost$core$Int64) {1};
frost$core$Bit $tmp370 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp359, $tmp369);
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block14; else goto block15;
block14:;
// line 120
frost$io$OutputStream** $tmp372 = &param0->out;
frost$io$OutputStream* $tmp373 = *$tmp372;
$fn375 $tmp374 = ($fn375) $tmp373->$class->vtable[17];
frost$core$Error* $tmp376 = $tmp374($tmp373, &$s377);
if ($tmp376 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
*(&local0) = $tmp376;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
goto block5;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
goto block9;
block15:;
frost$core$Int64 $tmp378 = (frost$core$Int64) {2};
frost$core$Bit $tmp379 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp359, $tmp378);
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block18; else goto block19;
block18:;
goto block9;
block19:;
// line 125
frost$core$Int64 $tmp381 = (frost$core$Int64) {125};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s382, $tmp381);
abort(); // unreachable
block9:;
// line 128
frost$io$OutputStream** $tmp383 = &param0->out;
frost$io$OutputStream* $tmp384 = *$tmp383;
frost$core$String** $tmp385 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp386 = *$tmp385;
$fn388 $tmp387 = ($fn388) $tmp384->$class->vtable[17];
frost$core$Error* $tmp389 = $tmp387($tmp384, $tmp386);
if ($tmp389 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
*(&local0) = $tmp389;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
goto block5;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp389));
// line 129
frost$collections$Array** $tmp390 = &param1->genericParameters;
frost$collections$Array* $tmp391 = *$tmp390;
frost$core$Bit $tmp392 = frost$core$Bit$init$builtin_bit($tmp391 != NULL);
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block22; else goto block23;
block22:;
// line 130
frost$io$OutputStream** $tmp394 = &param0->out;
frost$io$OutputStream* $tmp395 = *$tmp394;
frost$collections$Array** $tmp396 = &param1->genericParameters;
frost$collections$Array* $tmp397 = *$tmp396;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure10));
org$frostlang$frostc$StubCodeGenerator$_Closure10* $tmp398 = (org$frostlang$frostc$StubCodeGenerator$_Closure10*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure10$class);
org$frostlang$frostc$StubCodeGenerator$_Closure10$init$org$frostlang$frostc$StubCodeGenerator($tmp398, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp400 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp400, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure10$$anonymous9$org$frostlang$frostc$MethodDecl$GenericParameter$R$frost$core$String), ((frost$core$Object*) $tmp398));
ITable* $tmp401 = ((frost$collections$CollectionView*) $tmp397)->$class->itable;
while ($tmp401->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp401 = $tmp401->next;
}
$fn403 $tmp402 = $tmp401->methods[8];
frost$collections$Array* $tmp404 = $tmp402(((frost$collections$CollectionView*) $tmp397), $tmp400);
ITable* $tmp405 = ((frost$collections$CollectionView*) $tmp404)->$class->itable;
while ($tmp405->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp405 = $tmp405->next;
}
$fn407 $tmp406 = $tmp405->methods[2];
frost$core$String* $tmp408 = $tmp406(((frost$collections$CollectionView*) $tmp404), &$s409);
frost$core$String* $tmp410 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s411, $tmp408);
frost$core$String* $tmp412 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp410, &$s413);
$fn415 $tmp414 = ($fn415) $tmp395->$class->vtable[17];
frost$core$Error* $tmp416 = $tmp414($tmp395, $tmp412);
if ($tmp416 == NULL) goto block24; else goto block25;
block25:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
*(&local0) = $tmp416;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
goto block5;
block24:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
goto block23;
block23:;
// line 134
frost$io$OutputStream** $tmp417 = &param0->out;
frost$io$OutputStream* $tmp418 = *$tmp417;
$fn420 $tmp419 = ($fn420) $tmp418->$class->vtable[17];
frost$core$Error* $tmp421 = $tmp419($tmp418, &$s422);
if ($tmp421 == NULL) goto block26; else goto block27;
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
*(&local0) = $tmp421;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
goto block5;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
// line 135
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s423));
frost$core$String* $tmp424 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
*(&local1) = &$s425;
// line 136
frost$collections$Array** $tmp426 = &param1->parameters;
frost$collections$Array* $tmp427 = *$tmp426;
ITable* $tmp428 = ((frost$collections$Iterable*) $tmp427)->$class->itable;
while ($tmp428->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp428 = $tmp428->next;
}
$fn430 $tmp429 = $tmp428->methods[0];
frost$collections$Iterator* $tmp431 = $tmp429(((frost$collections$Iterable*) $tmp427));
goto block28;
block28:;
ITable* $tmp432 = $tmp431->$class->itable;
while ($tmp432->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp432 = $tmp432->next;
}
$fn434 $tmp433 = $tmp432->methods[0];
frost$core$Bit $tmp435 = $tmp433($tmp431);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block30; else goto block29;
block29:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp437 = $tmp431->$class->itable;
while ($tmp437->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp437 = $tmp437->next;
}
$fn439 $tmp438 = $tmp437->methods[1];
frost$core$Object* $tmp440 = $tmp438($tmp431);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp440)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp441 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp440);
// line 137
frost$io$OutputStream** $tmp442 = &param0->out;
frost$io$OutputStream* $tmp443 = *$tmp442;
frost$core$String* $tmp444 = *(&local1);
frost$core$String* $tmp445 = frost$core$String$get_asString$R$frost$core$String($tmp444);
frost$core$String* $tmp446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp445, &$s447);
org$frostlang$frostc$MethodDecl$Parameter* $tmp448 = *(&local2);
frost$core$String** $tmp449 = &$tmp448->name;
frost$core$String* $tmp450 = *$tmp449;
frost$core$String* $tmp451 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp446, $tmp450);
frost$core$String* $tmp452 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp451, &$s453);
org$frostlang$frostc$MethodDecl$Parameter* $tmp454 = *(&local2);
org$frostlang$frostc$Type** $tmp455 = &$tmp454->type;
org$frostlang$frostc$Type* $tmp456 = *$tmp455;
frost$core$String* $tmp457 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp456);
frost$core$String* $tmp458 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp452, $tmp457);
frost$core$String* $tmp459 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp458, &$s460);
$fn462 $tmp461 = ($fn462) $tmp443->$class->vtable[17];
frost$core$Error* $tmp463 = $tmp461($tmp443, $tmp459);
if ($tmp463 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
*(&local0) = $tmp463;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$Frost$unref$frost$core$Object$Q($tmp440);
org$frostlang$frostc$MethodDecl$Parameter* $tmp464 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$core$String* $tmp465 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp465));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp457));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
// line 138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s466));
frost$core$String* $tmp467 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local1) = &$s468;
frost$core$Frost$unref$frost$core$Object$Q($tmp440);
org$frostlang$frostc$MethodDecl$Parameter* $tmp469 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block28;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
// line 140
frost$io$OutputStream** $tmp470 = &param0->out;
frost$io$OutputStream* $tmp471 = *$tmp470;
$fn473 $tmp472 = ($fn473) $tmp471->$class->vtable[17];
frost$core$Error* $tmp474 = $tmp472($tmp471, &$s475);
if ($tmp474 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local0) = $tmp474;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
frost$core$String* $tmp476 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// line 141
org$frostlang$frostc$MethodDecl$Kind* $tmp477 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp478 = *$tmp477;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp479;
$tmp479 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp479->value = $tmp478;
frost$core$Int64 $tmp480 = (frost$core$Int64) {2};
org$frostlang$frostc$MethodDecl$Kind $tmp481 = org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int64($tmp480);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp482;
$tmp482 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp482->value = $tmp481;
ITable* $tmp483 = ((frost$core$Equatable*) $tmp479)->$class->itable;
while ($tmp483->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp483 = $tmp483->next;
}
$fn485 $tmp484 = $tmp483->methods[0];
frost$core$Bit $tmp486 = $tmp484(((frost$core$Equatable*) $tmp479), ((frost$core$Equatable*) $tmp482));
bool $tmp487 = $tmp486.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp482)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp479)));
if ($tmp487) goto block35; else goto block37;
block35:;
// line 142
frost$io$OutputStream** $tmp488 = &param0->out;
frost$io$OutputStream* $tmp489 = *$tmp488;
$fn491 $tmp490 = ($fn491) $tmp489->$class->vtable[17];
frost$core$Error* $tmp492 = $tmp490($tmp489, &$s493);
if ($tmp492 == NULL) goto block38; else goto block39;
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local0) = $tmp492;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$core$String* $tmp494 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
goto block36;
block37:;
// line 144
org$frostlang$frostc$Type** $tmp495 = &param1->returnType;
org$frostlang$frostc$Type* $tmp496 = *$tmp495;
org$frostlang$frostc$Type* $tmp497 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
ITable* $tmp498 = ((frost$core$Equatable*) $tmp496)->$class->itable;
while ($tmp498->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp498 = $tmp498->next;
}
$fn500 $tmp499 = $tmp498->methods[1];
frost$core$Bit $tmp501 = $tmp499(((frost$core$Equatable*) $tmp496), ((frost$core$Equatable*) $tmp497));
bool $tmp502 = $tmp501.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
if ($tmp502) goto block40; else goto block41;
block40:;
// line 145
frost$io$OutputStream** $tmp503 = &param0->out;
frost$io$OutputStream* $tmp504 = *$tmp503;
org$frostlang$frostc$Type** $tmp505 = &param1->returnType;
org$frostlang$frostc$Type* $tmp506 = *$tmp505;
frost$core$String* $tmp507 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp506);
frost$core$String* $tmp508 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s509, $tmp507);
frost$core$String* $tmp510 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp508, &$s511);
$fn513 $tmp512 = ($fn513) $tmp504->$class->vtable[19];
frost$core$Error* $tmp514 = $tmp512($tmp504, $tmp510);
if ($tmp514 == NULL) goto block42; else goto block43;
block43:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local0) = $tmp514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$String* $tmp515 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
goto block41;
block41:;
goto block36;
block36:;
// line 147
org$frostlang$frostc$Annotations** $tmp516 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp517 = *$tmp516;
frost$core$Bit $tmp518 = org$frostlang$frostc$Annotations$get_isDefault$R$frost$core$Bit($tmp517);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block44; else goto block45;
block44:;
// line 148
frost$io$OutputStream** $tmp520 = &param0->out;
frost$io$OutputStream* $tmp521 = *$tmp520;
$fn523 $tmp522 = ($fn523) $tmp521->$class->vtable[17];
frost$core$Error* $tmp524 = $tmp522($tmp521, &$s525);
if ($tmp524 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local0) = $tmp524;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
frost$core$String* $tmp526 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
*(&local1) = ((frost$core$String*) NULL);
goto block5;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
goto block45;
block45:;
frost$core$String* $tmp527 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
*(&local1) = ((frost$core$String*) NULL);
goto block6;
block5:;
// line 152
frost$core$Error* $tmp528 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp528));
// line 153
frost$core$Int64 $tmp529 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp529);
goto block6;
block6:;
frost$core$Error* $tmp530 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
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
// line 160
*(&local0) = ((frost$core$Error*) NULL);
// line 161
frost$core$Weak** $tmp531 = &param0->compiler;
frost$core$Weak* $tmp532 = *$tmp531;
frost$core$Object* $tmp533 = frost$core$Weak$get$R$frost$core$Weak$T($tmp532);
frost$core$Bit $tmp534 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp533), param1);
frost$core$Bit $tmp535 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp534);
bool $tmp536 = $tmp535.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp533);
if ($tmp536) goto block3; else goto block4;
block3:;
// line 162
frost$core$Error* $tmp537 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
*(&local0) = ((frost$core$Error*) NULL);
return;
block4:;
// line 164
frost$core$String** $tmp538 = &param1->name;
frost$core$String* $tmp539 = *$tmp538;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
frost$core$String* $tmp540 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
*(&local1) = $tmp539;
// line 165
frost$core$String** $tmp541 = &param1->name;
frost$core$String* $tmp542 = *$tmp541;
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp543 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp543, &$s544);
frost$collections$ListView* $tmp545 = frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q($tmp542, $tmp543);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
frost$collections$ListView* $tmp546 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local2) = $tmp545;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
// line 166
frost$collections$ListView* $tmp547 = *(&local2);
frost$core$Bit $tmp548 = frost$core$Bit$init$builtin_bit($tmp547 != NULL);
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block5; else goto block6;
block5:;
// line 167
frost$core$Weak** $tmp550 = &param1->owner;
frost$core$Weak* $tmp551 = *$tmp550;
frost$core$Object* $tmp552 = frost$core$Weak$get$R$frost$core$Weak$T($tmp551);
frost$core$Bit $tmp553 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl*) $tmp552) == NULL);
bool $tmp554 = $tmp553.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp552);
if ($tmp554) goto block7; else goto block8;
block7:;
// line 168
frost$io$OutputStream** $tmp555 = &param0->out;
frost$io$OutputStream* $tmp556 = *$tmp555;
frost$collections$ListView* $tmp557 = *(&local2);
frost$core$Int64 $tmp558 = (frost$core$Int64) {0};
ITable* $tmp559 = $tmp557->$class->itable;
while ($tmp559->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp559 = $tmp559->next;
}
$fn561 $tmp560 = $tmp559->methods[0];
frost$core$Object* $tmp562 = $tmp560($tmp557, $tmp558);
frost$core$String* $tmp563 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s564, ((frost$core$String*) $tmp562));
frost$core$String* $tmp565 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp563, &$s566);
$fn568 $tmp567 = ($fn568) $tmp556->$class->vtable[19];
frost$core$Error* $tmp569 = $tmp567($tmp556, $tmp565);
if ($tmp569 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local0) = $tmp569;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
frost$core$Frost$unref$frost$core$Object$Q($tmp562);
frost$collections$ListView* $tmp570 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp571 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp563));
frost$core$Frost$unref$frost$core$Object$Q($tmp562);
goto block8;
block8:;
// line 170
frost$collections$ListView* $tmp572 = *(&local2);
frost$core$Int64 $tmp573 = (frost$core$Int64) {1};
ITable* $tmp574 = $tmp572->$class->itable;
while ($tmp574->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp574 = $tmp574->next;
}
$fn576 $tmp575 = $tmp574->methods[0];
frost$core$Object* $tmp577 = $tmp575($tmp572, $tmp573);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp577)));
frost$core$String* $tmp578 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local1) = ((frost$core$String*) $tmp577);
frost$core$Frost$unref$frost$core$Object$Q($tmp577);
goto block6;
block6:;
// line 172
frost$io$OutputStream** $tmp579 = &param0->out;
frost$io$OutputStream* $tmp580 = *$tmp579;
$fn582 $tmp581 = ($fn582) $tmp580->$class->vtable[19];
frost$core$Error* $tmp583 = $tmp581($tmp580, &$s584);
if ($tmp583 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local0) = $tmp583;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
frost$collections$ListView* $tmp585 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp586 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
// line 173
frost$io$OutputStream** $tmp587 = &param0->out;
frost$io$OutputStream* $tmp588 = *$tmp587;
org$frostlang$frostc$Annotations** $tmp589 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp590 = *$tmp589;
$fn592 $tmp591 = ($fn592) $tmp588->$class->vtable[18];
frost$core$Error* $tmp593 = $tmp591($tmp588, ((frost$core$Object*) $tmp590));
if ($tmp593 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
*(&local0) = $tmp593;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
frost$collections$ListView* $tmp594 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp595 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
// line 174
org$frostlang$frostc$ClassDecl$Kind* $tmp596 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp597 = *$tmp596;
frost$core$Int64 $tmp598 = $tmp597.$rawValue;
frost$core$Int64 $tmp599 = (frost$core$Int64) {0};
frost$core$Bit $tmp600 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp598, $tmp599);
bool $tmp601 = $tmp600.value;
if ($tmp601) goto block16; else goto block17;
block16:;
// line 175
frost$io$OutputStream** $tmp602 = &param0->out;
frost$io$OutputStream* $tmp603 = *$tmp602;
$fn605 $tmp604 = ($fn605) $tmp603->$class->vtable[17];
frost$core$Error* $tmp606 = $tmp604($tmp603, &$s607);
if ($tmp606 == NULL) goto block18; else goto block19;
block19:;
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
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
goto block15;
block17:;
frost$core$Int64 $tmp610 = (frost$core$Int64) {1};
frost$core$Bit $tmp611 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp598, $tmp610);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block20; else goto block21;
block20:;
// line 176
frost$io$OutputStream** $tmp613 = &param0->out;
frost$io$OutputStream* $tmp614 = *$tmp613;
$fn616 $tmp615 = ($fn616) $tmp614->$class->vtable[17];
frost$core$Error* $tmp617 = $tmp615($tmp614, &$s618);
if ($tmp617 == NULL) goto block22; else goto block23;
block23:;
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
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
goto block15;
block21:;
frost$core$Int64 $tmp621 = (frost$core$Int64) {2};
frost$core$Bit $tmp622 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp598, $tmp621);
bool $tmp623 = $tmp622.value;
if ($tmp623) goto block24; else goto block15;
block24:;
// line 177
frost$io$OutputStream** $tmp624 = &param0->out;
frost$io$OutputStream* $tmp625 = *$tmp624;
$fn627 $tmp626 = ($fn627) $tmp625->$class->vtable[17];
frost$core$Error* $tmp628 = $tmp626($tmp625, &$s629);
if ($tmp628 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
*(&local0) = $tmp628;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
frost$collections$ListView* $tmp630 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp631 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
goto block15;
block15:;
// line 179
frost$io$OutputStream** $tmp632 = &param0->out;
frost$io$OutputStream* $tmp633 = *$tmp632;
frost$core$String* $tmp634 = *(&local1);
$fn636 $tmp635 = ($fn636) $tmp633->$class->vtable[17];
frost$core$Error* $tmp637 = $tmp635($tmp633, $tmp634);
if ($tmp637 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
*(&local0) = $tmp637;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$collections$ListView* $tmp638 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp638));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp639 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
// line 180
frost$collections$List** $tmp640 = &param1->parameters;
frost$collections$List* $tmp641 = *$tmp640;
ITable* $tmp642 = ((frost$collections$CollectionView*) $tmp641)->$class->itable;
while ($tmp642->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp642 = $tmp642->next;
}
$fn644 $tmp643 = $tmp642->methods[0];
frost$core$Int64 $tmp645 = $tmp643(((frost$collections$CollectionView*) $tmp641));
frost$core$Int64 $tmp646 = (frost$core$Int64) {0};
int64_t $tmp647 = $tmp645.value;
int64_t $tmp648 = $tmp646.value;
bool $tmp649 = $tmp647 > $tmp648;
frost$core$Bit $tmp650 = (frost$core$Bit) {$tmp649};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block29; else goto block30;
block29:;
// line 181
frost$io$OutputStream** $tmp652 = &param0->out;
frost$io$OutputStream* $tmp653 = *$tmp652;
frost$collections$List** $tmp654 = &param1->parameters;
frost$collections$List* $tmp655 = *$tmp654;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure12));
org$frostlang$frostc$StubCodeGenerator$_Closure12* $tmp656 = (org$frostlang$frostc$StubCodeGenerator$_Closure12*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure12$class);
org$frostlang$frostc$StubCodeGenerator$_Closure12$init$org$frostlang$frostc$StubCodeGenerator($tmp656, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp658 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q($tmp658, ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure12$$anonymous11$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String), ((frost$core$Object*) $tmp656));
ITable* $tmp659 = ((frost$collections$CollectionView*) $tmp655)->$class->itable;
while ($tmp659->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp659 = $tmp659->next;
}
$fn661 $tmp660 = $tmp659->methods[8];
frost$collections$Array* $tmp662 = $tmp660(((frost$collections$CollectionView*) $tmp655), $tmp658);
ITable* $tmp663 = ((frost$collections$CollectionView*) $tmp662)->$class->itable;
while ($tmp663->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp663 = $tmp663->next;
}
$fn665 $tmp664 = $tmp663->methods[2];
frost$core$String* $tmp666 = $tmp664(((frost$collections$CollectionView*) $tmp662), &$s667);
frost$core$String* $tmp668 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s669, $tmp666);
frost$core$String* $tmp670 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp668, &$s671);
$fn673 $tmp672 = ($fn673) $tmp653->$class->vtable[17];
frost$core$Error* $tmp674 = $tmp672($tmp653, $tmp670);
if ($tmp674 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
*(&local0) = $tmp674;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$collections$ListView* $tmp675 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp676 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
goto block30;
block30:;
// line 184
*(&local3) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s677));
frost$core$String* $tmp678 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
*(&local3) = &$s679;
// line 185
org$frostlang$frostc$ClassDecl$Kind* $tmp680 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp681 = *$tmp680;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp682;
$tmp682 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp682->value = $tmp681;
frost$core$Int64 $tmp683 = (frost$core$Int64) {2};
org$frostlang$frostc$ClassDecl$Kind $tmp684 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp683);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp685;
$tmp685 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp685->value = $tmp684;
ITable* $tmp686 = ((frost$core$Equatable*) $tmp682)->$class->itable;
while ($tmp686->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp686 = $tmp686->next;
}
$fn688 $tmp687 = $tmp686->methods[1];
frost$core$Bit $tmp689 = $tmp687(((frost$core$Equatable*) $tmp682), ((frost$core$Equatable*) $tmp685));
bool $tmp690 = $tmp689.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp685)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp682)));
if ($tmp690) goto block33; else goto block34;
block33:;
// line 186
org$frostlang$frostc$Type** $tmp691 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp692 = *$tmp691;
frost$core$Bit $tmp693 = frost$core$Bit$init$builtin_bit($tmp692 != NULL);
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block37; else goto block36;
block37:;
org$frostlang$frostc$ClassDecl$Kind* $tmp695 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp696 = *$tmp695;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp697;
$tmp697 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp697->value = $tmp696;
frost$core$Int64 $tmp698 = (frost$core$Int64) {1};
org$frostlang$frostc$ClassDecl$Kind $tmp699 = org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int64($tmp698);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp700;
$tmp700 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp700->value = $tmp699;
ITable* $tmp701 = ((frost$core$Equatable*) $tmp697)->$class->itable;
while ($tmp701->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp701 = $tmp701->next;
}
$fn703 $tmp702 = $tmp701->methods[1];
frost$core$Bit $tmp704 = $tmp702(((frost$core$Equatable*) $tmp697), ((frost$core$Equatable*) $tmp700));
bool $tmp705 = $tmp704.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp700)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp697)));
if ($tmp705) goto block35; else goto block36;
block35:;
// line 187
frost$io$OutputStream** $tmp706 = &param0->out;
frost$io$OutputStream* $tmp707 = *$tmp706;
frost$core$String* $tmp708 = *(&local3);
frost$core$String* $tmp709 = frost$core$String$get_asString$R$frost$core$String($tmp708);
frost$core$String* $tmp710 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp709, &$s711);
org$frostlang$frostc$Type** $tmp712 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp713 = *$tmp712;
frost$core$String* $tmp714 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp713);
frost$core$String* $tmp715 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp710, $tmp714);
frost$core$String* $tmp716 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp715, &$s717);
$fn719 $tmp718 = ($fn719) $tmp707->$class->vtable[17];
frost$core$Error* $tmp720 = $tmp718($tmp707, $tmp716);
if ($tmp720 == NULL) goto block38; else goto block39;
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local0) = $tmp720;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$core$String* $tmp721 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp721));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp722 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp722));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp723 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
// line 188
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s724));
frost$core$String* $tmp725 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local3) = &$s726;
goto block36;
block36:;
// line 190
frost$collections$Array** $tmp727 = &param1->rawInterfaces;
frost$collections$Array* $tmp728 = *$tmp727;
ITable* $tmp729 = ((frost$collections$Iterable*) $tmp728)->$class->itable;
while ($tmp729->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp729 = $tmp729->next;
}
$fn731 $tmp730 = $tmp729->methods[0];
frost$collections$Iterator* $tmp732 = $tmp730(((frost$collections$Iterable*) $tmp728));
goto block40;
block40:;
ITable* $tmp733 = $tmp732->$class->itable;
while ($tmp733->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp733 = $tmp733->next;
}
$fn735 $tmp734 = $tmp733->methods[0];
frost$core$Bit $tmp736 = $tmp734($tmp732);
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block42; else goto block41;
block41:;
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp738 = $tmp732->$class->itable;
while ($tmp738->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp738 = $tmp738->next;
}
$fn740 $tmp739 = $tmp738->methods[1];
frost$core$Object* $tmp741 = $tmp739($tmp732);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp741)));
org$frostlang$frostc$Type* $tmp742 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local4) = ((org$frostlang$frostc$Type*) $tmp741);
// line 191
frost$io$OutputStream** $tmp743 = &param0->out;
frost$io$OutputStream* $tmp744 = *$tmp743;
frost$core$String* $tmp745 = *(&local3);
frost$core$String* $tmp746 = frost$core$String$get_asString$R$frost$core$String($tmp745);
frost$core$String* $tmp747 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp746, &$s748);
org$frostlang$frostc$Type* $tmp749 = *(&local4);
frost$core$String* $tmp750 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp749);
frost$core$String* $tmp751 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp747, $tmp750);
frost$core$String* $tmp752 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp751, &$s753);
$fn755 $tmp754 = ($fn755) $tmp744->$class->vtable[17];
frost$core$Error* $tmp756 = $tmp754($tmp744, $tmp752);
if ($tmp756 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
*(&local0) = $tmp756;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
frost$core$Frost$unref$frost$core$Object$Q($tmp741);
org$frostlang$frostc$Type* $tmp757 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
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
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
// line 192
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s761));
frost$core$String* $tmp762 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local3) = &$s763;
frost$core$Frost$unref$frost$core$Object$Q($tmp741);
org$frostlang$frostc$Type* $tmp764 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
goto block40;
block42:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
goto block34;
block34:;
// line 195
frost$io$OutputStream** $tmp765 = &param0->out;
frost$io$OutputStream* $tmp766 = *$tmp765;
$fn768 $tmp767 = ($fn768) $tmp766->$class->vtable[17];
frost$core$Error* $tmp769 = $tmp767($tmp766, &$s770);
if ($tmp769 == NULL) goto block45; else goto block46;
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
*(&local0) = $tmp769;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
frost$core$String* $tmp771 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp772 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp773 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
// line 196
frost$collections$Array** $tmp774 = &param1->choiceCases;
frost$collections$Array* $tmp775 = *$tmp774;
ITable* $tmp776 = ((frost$collections$Iterable*) $tmp775)->$class->itable;
while ($tmp776->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp776 = $tmp776->next;
}
$fn778 $tmp777 = $tmp776->methods[0];
frost$collections$Iterator* $tmp779 = $tmp777(((frost$collections$Iterable*) $tmp775));
goto block47;
block47:;
ITable* $tmp780 = $tmp779->$class->itable;
while ($tmp780->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp780 = $tmp780->next;
}
$fn782 $tmp781 = $tmp780->methods[0];
frost$core$Bit $tmp783 = $tmp781($tmp779);
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block49; else goto block48;
block48:;
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp785 = $tmp779->$class->itable;
while ($tmp785->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp785 = $tmp785->next;
}
$fn787 $tmp786 = $tmp785->methods[1];
frost$core$Object* $tmp788 = $tmp786($tmp779);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp788)));
org$frostlang$frostc$ChoiceCase* $tmp789 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) $tmp788);
// line 197
org$frostlang$frostc$ChoiceCase* $tmp790 = *(&local5);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(param0, $tmp790);
frost$core$Frost$unref$frost$core$Object$Q($tmp788);
org$frostlang$frostc$ChoiceCase* $tmp791 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
*(&local5) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block47;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
// line 199
frost$collections$Array** $tmp792 = &param1->classes;
frost$collections$Array* $tmp793 = *$tmp792;
ITable* $tmp794 = ((frost$collections$Iterable*) $tmp793)->$class->itable;
while ($tmp794->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp794 = $tmp794->next;
}
$fn796 $tmp795 = $tmp794->methods[0];
frost$collections$Iterator* $tmp797 = $tmp795(((frost$collections$Iterable*) $tmp793));
goto block50;
block50:;
ITable* $tmp798 = $tmp797->$class->itable;
while ($tmp798->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp798 = $tmp798->next;
}
$fn800 $tmp799 = $tmp798->methods[0];
frost$core$Bit $tmp801 = $tmp799($tmp797);
bool $tmp802 = $tmp801.value;
if ($tmp802) goto block52; else goto block51;
block51:;
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp803 = $tmp797->$class->itable;
while ($tmp803->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp803 = $tmp803->next;
}
$fn805 $tmp804 = $tmp803->methods[1];
frost$core$Object* $tmp806 = $tmp804($tmp797);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp806)));
org$frostlang$frostc$ClassDecl* $tmp807 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
*(&local6) = ((org$frostlang$frostc$ClassDecl*) $tmp806);
// line 200
org$frostlang$frostc$ClassDecl* $tmp808 = *(&local6);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl(param0, $tmp808);
frost$core$Frost$unref$frost$core$Object$Q($tmp806);
org$frostlang$frostc$ClassDecl* $tmp809 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
*(&local6) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block50;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// line 202
frost$collections$Array** $tmp810 = &param1->fields;
frost$collections$Array* $tmp811 = *$tmp810;
ITable* $tmp812 = ((frost$collections$Iterable*) $tmp811)->$class->itable;
while ($tmp812->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp812 = $tmp812->next;
}
$fn814 $tmp813 = $tmp812->methods[0];
frost$collections$Iterator* $tmp815 = $tmp813(((frost$collections$Iterable*) $tmp811));
goto block53;
block53:;
ITable* $tmp816 = $tmp815->$class->itable;
while ($tmp816->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp816 = $tmp816->next;
}
$fn818 $tmp817 = $tmp816->methods[0];
frost$core$Bit $tmp819 = $tmp817($tmp815);
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block55; else goto block54;
block54:;
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp821 = $tmp815->$class->itable;
while ($tmp821->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp821 = $tmp821->next;
}
$fn823 $tmp822 = $tmp821->methods[1];
frost$core$Object* $tmp824 = $tmp822($tmp815);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp824)));
org$frostlang$frostc$FieldDecl* $tmp825 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) $tmp824);
// line 203
org$frostlang$frostc$FieldDecl* $tmp826 = *(&local7);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(param0, $tmp826);
frost$core$Frost$unref$frost$core$Object$Q($tmp824);
org$frostlang$frostc$FieldDecl* $tmp827 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local7) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block53;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
// line 205
frost$collections$Array** $tmp828 = &param1->methods;
frost$collections$Array* $tmp829 = *$tmp828;
ITable* $tmp830 = ((frost$collections$Iterable*) $tmp829)->$class->itable;
while ($tmp830->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp830 = $tmp830->next;
}
$fn832 $tmp831 = $tmp830->methods[0];
frost$collections$Iterator* $tmp833 = $tmp831(((frost$collections$Iterable*) $tmp829));
goto block56;
block56:;
ITable* $tmp834 = $tmp833->$class->itable;
while ($tmp834->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp834 = $tmp834->next;
}
$fn836 $tmp835 = $tmp834->methods[0];
frost$core$Bit $tmp837 = $tmp835($tmp833);
bool $tmp838 = $tmp837.value;
if ($tmp838) goto block58; else goto block57;
block57:;
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp839 = $tmp833->$class->itable;
while ($tmp839->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp839 = $tmp839->next;
}
$fn841 $tmp840 = $tmp839->methods[1];
frost$core$Object* $tmp842 = $tmp840($tmp833);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp842)));
org$frostlang$frostc$MethodDecl* $tmp843 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) $tmp842);
// line 206
org$frostlang$frostc$MethodDecl* $tmp844 = *(&local8);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(param0, $tmp844);
frost$core$Frost$unref$frost$core$Object$Q($tmp842);
org$frostlang$frostc$MethodDecl* $tmp845 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
*(&local8) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block56;
block58:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
// line 208
frost$io$OutputStream** $tmp846 = &param0->out;
frost$io$OutputStream* $tmp847 = *$tmp846;
$fn849 $tmp848 = ($fn849) $tmp847->$class->vtable[17];
frost$core$Error* $tmp850 = $tmp848($tmp847, &$s851);
if ($tmp850 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
*(&local0) = $tmp850;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
frost$core$String* $tmp852 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp853 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp854 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
frost$core$String* $tmp855 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
*(&local3) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp856 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$String* $tmp857 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// line 211
frost$core$Error* $tmp858 = *(&local0);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp858));
// line 212
frost$core$Int64 $tmp859 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp859);
goto block2;
block2:;
frost$core$Error* $tmp860 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// line 218
frost$core$Weak** $tmp861 = &param1->owner;
frost$core$Weak* $tmp862 = *$tmp861;
frost$core$Object* $tmp863 = frost$core$Weak$get$R$frost$core$Weak$T($tmp862);
frost$core$Bit $tmp864 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl*) $tmp863) == NULL);
bool $tmp865 = $tmp864.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp863);
if ($tmp865) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Annotations** $tmp866 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp867 = *$tmp866;
frost$core$Bit $tmp868 = org$frostlang$frostc$Annotations$get_isSynthetic$R$frost$core$Bit($tmp867);
frost$core$Bit $tmp869 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp868);
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block1; else goto block2;
block1:;
// line 219
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
frost$core$Weak** $tmp871 = &param0->compiler;
frost$core$Weak* $tmp872 = *$tmp871;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
frost$io$OutputStream** $tmp873 = &param0->out;
frost$io$OutputStream* $tmp874 = *$tmp873;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp874));
return;

}

