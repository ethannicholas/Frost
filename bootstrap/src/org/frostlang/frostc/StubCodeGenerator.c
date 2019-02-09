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
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "org/frostlang/frostc/StubCodeGenerator/_Closure2.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Array.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Position.h"
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
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/collections/List.h"
#include "org/frostlang/frostc/StubCodeGenerator/_Closure12.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "org/frostlang/frostc/IR.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } org$frostlang$frostc$StubCodeGenerator$_org$frostlang$frostc$CodeGenerator = { (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class, NULL, { org$frostlang$frostc$StubCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$StubCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$StubCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$StubCodeGenerator$finish} };

static frost$core$String $s1;
org$frostlang$frostc$StubCodeGenerator$class_type org$frostlang$frostc$StubCodeGenerator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$StubCodeGenerator$_org$frostlang$frostc$CodeGenerator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$StubCodeGenerator$cleanup, org$frostlang$frostc$StubCodeGenerator$setCompiler$org$frostlang$frostc$Compiler, org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String, org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$StubCodeGenerator$end$org$frostlang$frostc$ClassDecl, org$frostlang$frostc$StubCodeGenerator$writeDeclaration$org$frostlang$frostc$MethodDecl, org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR, org$frostlang$frostc$StubCodeGenerator$finish} };

typedef frost$core$Int64 (*$fn15)(frost$collections$CollectionView*);
typedef frost$collections$ListView* (*$fn26)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$Q$GT);
typedef frost$core$String* (*$fn29)(org$frostlang$frostc$StubCodeGenerator$_Closure2*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn37)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn41)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Int64 (*$fn54)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn63)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Bit (*$fn77)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$collections$ListView* (*$fn152)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$Q$GT);
typedef frost$core$String* (*$fn155)(org$frostlang$frostc$StubCodeGenerator$_Closure4*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn163)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn167)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$String* (*$fn188)(org$frostlang$frostc$StubCodeGenerator$_Closure6*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn196)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn200)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn297)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn303)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn316)(org$frostlang$frostc$StubCodeGenerator$_Closure8*, org$frostlang$frostc$Type*);
typedef frost$collections$Array* (*$fn324)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn328)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn336)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn341)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn345)(frost$core$Object*);
typedef frost$core$Error* (*$fn390)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn402)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn414)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn426)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn434)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn439)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn448)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn460)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn466)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn474)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn479)(frost$io$OutputStream*);
typedef frost$core$String* (*$fn483)(frost$core$Object*);
typedef frost$core$Error* (*$fn521)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn535)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn547)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn563)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn574)(org$frostlang$frostc$StubCodeGenerator$_Closure10*, org$frostlang$frostc$MethodDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn582)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn586)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn594)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn599)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn609)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn613)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn618)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn640)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn651)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn665)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn689)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn705)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn718)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn739)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn747)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn751)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn756)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn763)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn771)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn793)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn800)(frost$core$Object*);
typedef frost$core$Object* (*$fn906)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn913)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Object* (*$fn922)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Error* (*$fn928)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn939)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn956)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn971)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn986)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn996)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn1005)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn1018)(org$frostlang$frostc$StubCodeGenerator$_Closure12*, org$frostlang$frostc$ClassDecl$GenericParameter*);
typedef frost$collections$Array* (*$fn1026)(frost$collections$CollectionView*, frost$core$MutableMethod*);
typedef frost$core$String* (*$fn1030)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Error* (*$fn1038)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn1056)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn1073)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn1088)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1101)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1105)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1110)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1124)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn1138)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1149)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1153)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1158)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1167)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1171)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1176)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1185)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1189)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1194)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1203)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1207)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1212)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn1220)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn1233)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72", 38, -6371532287653990932, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s47 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s184 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x79\x70\x65\x2e\x66\x72\x6f\x73\x74", 10, 739962873287867347, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static frost$core$String $s428 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 23, 3013133084420458205, NULL };
static frost$core$String $s588 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s590 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28", 1, 141, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s604 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b\x7d", 2, 22749, NULL };
static frost$core$String $s702 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x76\x6f\x69\x64", 4, 226778935, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s716 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s773 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s795 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b\x7d", 2, 22749, NULL };
static frost$core$String $s810 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s825 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x28\x28\x3f\x3a\x5c\x77\x7c\x5c\x2e\x29\x2b\x29\x5c\x2e\x28\x5c\x77\x2b\x29", 19, -9118778076962498171, NULL };
static frost$core$String $s895 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };
static frost$core$String $s909 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x61\x63\x6b\x61\x67\x65\x20", 8, 22940502189900249, NULL };
static frost$core$String $s911 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s930 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x73\x74\x75\x62", 5, 17289646011, NULL };
static frost$core$String $s958 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static frost$core$String $s973 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static frost$core$String $s988 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static frost$core$String $s1032 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s1034 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, 161, NULL };
static frost$core$String $s1036 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s1043 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1045 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s1080 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1086 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1094 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s1096 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s1117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s1133 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c", 1, 145, NULL };
static frost$core$String $s1140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7b", 1, 224, NULL };
static frost$core$String $s1222 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x7d", 1, 226, NULL };
static frost$core$String $s1243 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x73\x74\x75\x62", 9, 2046703270578891585, NULL };

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
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$Type$Kind local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:20
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
$fn37 $tmp36 = $tmp35->methods[8];
frost$collections$Array* $tmp38 = $tmp36(((frost$collections$CollectionView*) $tmp27), $tmp30);
ITable* $tmp39 = ((frost$collections$CollectionView*) $tmp38)->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[2];
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
frost$core$Int64 $tmp55 = $tmp53(((frost$collections$CollectionView*) param1));
frost$core$Int64 $tmp56 = (frost$core$Int64) {1};
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57 - $tmp58;
frost$core$Int64 $tmp60 = (frost$core$Int64) {$tmp59};
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
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from StubCodeGenerator.frost:23:35
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp67 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp68 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp69 = &(&local3)->$rawValue;
*$tmp69 = $tmp68;
org$frostlang$frostc$Type$Kind $tmp70 = *(&local3);
*(&local2) = $tmp70;
org$frostlang$frostc$Type$Kind $tmp71 = *(&local2);
org$frostlang$frostc$Position $tmp72 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp73 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp67, &$s74, $tmp71, $tmp72, $tmp73);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
ITable* $tmp75 = ((frost$core$Equatable*) $tmp66)->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[1];
frost$core$Bit $tmp78 = $tmp76(((frost$core$Equatable*) $tmp66), ((frost$core$Equatable*) $tmp67));
bool $tmp79 = $tmp78.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
if ($tmp79) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:24
frost$core$String* $tmp80 = *(&local0);
org$frostlang$frostc$Type* $tmp81 = *(&local1);
frost$core$String* $tmp82 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp81);
frost$core$String* $tmp83 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp80, $tmp82);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$String* $tmp84 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local0) = $tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
goto block3;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:26
frost$core$String* $tmp85 = *(&local0);
frost$core$String* $tmp86 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp85, &$s87);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
org$frostlang$frostc$Type* $tmp88 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp89 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
*(&local0) = ((frost$core$String*) NULL);
return $tmp86;

}
frost$core$String* org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$Type* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:30
org$frostlang$frostc$Type$Kind* $tmp90 = &param1->typeKind;
org$frostlang$frostc$Type$Kind $tmp91 = *$tmp90;
frost$core$Int64 $tmp92 = $tmp91.$rawValue;
frost$core$Int64 $tmp93 = (frost$core$Int64) {12};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:31:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp94 = $tmp92.value;
int64_t $tmp95 = $tmp93.value;
bool $tmp96 = $tmp94 == $tmp95;
frost$core$Bit $tmp97 = frost$core$Bit$init$builtin_bit($tmp96);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp99 = (frost$core$Int64) {13};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:31:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp100 = $tmp92.value;
int64_t $tmp101 = $tmp99.value;
bool $tmp102 = $tmp100 == $tmp101;
frost$core$Bit $tmp103 = frost$core$Bit$init$builtin_bit($tmp102);
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block2; else goto block5;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:32
frost$core$String** $tmp105 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp106 = *$tmp105;
frost$core$String** $tmp107 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp108 = *$tmp107;
frost$core$String** $tmp109 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp110 = *$tmp109;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from StubCodeGenerator.frost:32:61
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:229
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from String.stub:229:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:287
frost$core$Int64* $tmp111 = &$tmp110->_length;
frost$core$Int64 $tmp112 = *$tmp111;
frost$core$String$Index $tmp113 = frost$core$String$Index$init$frost$core$Int64($tmp112);
frost$core$String$Index$nullable $tmp114 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp110, &$s115, $tmp113);
frost$core$String$Index $tmp116 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp108, ((frost$core$String$Index) $tmp114.value));
frost$core$Bit $tmp117 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp118 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp116, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp117);
frost$core$String* $tmp119 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp106, $tmp118);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
return $tmp119;
block5:;
frost$core$Int64 $tmp120 = (frost$core$Int64) {11};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:34:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp121 = $tmp92.value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 == $tmp122;
frost$core$Bit $tmp124 = frost$core$Bit$init$builtin_bit($tmp123);
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:35
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:35:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp126 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp127 = *$tmp126;
frost$core$Bit $tmp128 = frost$core$Bit$init$builtin_bit($tmp127 != NULL);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp130 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s131, $tmp130);
abort(); // unreachable
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp132 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp133 = *$tmp132;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Int64 $tmp134 = (frost$core$Int64) {0};
frost$core$Object* $tmp135 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp133, $tmp134);
frost$core$String* $tmp136 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp135));
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:35:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$String* $tmp137 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp136, &$s138);
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:35:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp139 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp140 = *$tmp139;
frost$core$Bit $tmp141 = frost$core$Bit$init$builtin_bit($tmp140 != NULL);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp143 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s144, $tmp143);
abort(); // unreachable
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp145 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp146 = *$tmp145;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Int64 $tmp147 = (frost$core$Int64) {1};
frost$core$Bit $tmp148 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp149 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp147, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp148);
ITable* $tmp150 = ((frost$collections$ListView*) $tmp146)->$class->itable;
while ($tmp150->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp150 = $tmp150->next;
}
$fn152 $tmp151 = $tmp150->methods[2];
frost$collections$ListView* $tmp153 = $tmp151(((frost$collections$ListView*) $tmp146), $tmp149);
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure4));
org$frostlang$frostc$StubCodeGenerator$_Closure4* $tmp154 = (org$frostlang$frostc$StubCodeGenerator$_Closure4*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure4$class);
org$frostlang$frostc$StubCodeGenerator$_Closure4$init$org$frostlang$frostc$StubCodeGenerator($tmp154, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp156 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:35:71
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp157 = &$tmp156->pointer;
*$tmp157 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure4$$anonymous3$org$frostlang$frostc$Type$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Object** $tmp158 = &$tmp156->target;
frost$core$Object* $tmp159 = *$tmp158;
frost$core$Frost$unref$frost$core$Object$Q($tmp159);
frost$core$Object** $tmp160 = &$tmp156->target;
*$tmp160 = ((frost$core$Object*) $tmp154);
ITable* $tmp161 = ((frost$collections$CollectionView*) $tmp153)->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[8];
frost$collections$Array* $tmp164 = $tmp162(((frost$collections$CollectionView*) $tmp153), $tmp156);
ITable* $tmp165 = ((frost$collections$CollectionView*) $tmp164)->$class->itable;
while ($tmp165->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp165 = $tmp165->next;
}
$fn167 $tmp166 = $tmp165->methods[2];
frost$core$String* $tmp168 = $tmp166(((frost$collections$CollectionView*) $tmp164), &$s169);
frost$core$String* $tmp170 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp137, $tmp168);
frost$core$String* $tmp171 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp170, &$s172);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$core$Frost$unref$frost$core$Object$Q($tmp135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
return $tmp171;
block10:;
frost$core$Int64 $tmp173 = (frost$core$Int64) {10};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:37:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp174 = $tmp92.value;
int64_t $tmp175 = $tmp173.value;
bool $tmp176 = $tmp174 == $tmp175;
frost$core$Bit $tmp177 = frost$core$Bit$init$builtin_bit($tmp176);
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:38
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:38:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp179 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp180 = *$tmp179;
frost$core$Bit $tmp181 = frost$core$Bit$init$builtin_bit($tmp180 != NULL);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp183 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s184, $tmp183);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp185 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp186 = *$tmp185;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
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
ITable* $tmp194 = ((frost$collections$CollectionView*) $tmp186)->$class->itable;
while ($tmp194->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp194 = $tmp194->next;
}
$fn196 $tmp195 = $tmp194->methods[8];
frost$collections$Array* $tmp197 = $tmp195(((frost$collections$CollectionView*) $tmp186), $tmp189);
ITable* $tmp198 = ((frost$collections$CollectionView*) $tmp197)->$class->itable;
while ($tmp198->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp198 = $tmp198->next;
}
$fn200 $tmp199 = $tmp198->methods[2];
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
return $tmp205;
block21:;
frost$core$Int64 $tmp207 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:40:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp208 = $tmp92.value;
int64_t $tmp209 = $tmp207.value;
bool $tmp210 = $tmp208 == $tmp209;
frost$core$Bit $tmp211 = frost$core$Bit$init$builtin_bit($tmp210);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:41
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:41:30
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp213 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp214 = *$tmp213;
frost$core$Bit $tmp215 = frost$core$Bit$init$builtin_bit($tmp214 != NULL);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block31; else goto block32;
block32:;
frost$core$Int64 $tmp217 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s218, $tmp217);
abort(); // unreachable
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp219 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp220 = *$tmp219;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
frost$core$Int64 $tmp221 = (frost$core$Int64) {0};
frost$core$Object* $tmp222 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp220, $tmp221);
frost$core$String* $tmp223 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, ((org$frostlang$frostc$Type*) $tmp222));
frost$core$String* $tmp224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp223, &$s225);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
frost$core$Frost$unref$frost$core$Object$Q($tmp222);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
return $tmp224;
block28:;
frost$core$Int64 $tmp226 = (frost$core$Int64) {16};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:43:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp227 = $tmp92.value;
int64_t $tmp228 = $tmp226.value;
bool $tmp229 = $tmp227 == $tmp228;
frost$core$Bit $tmp230 = frost$core$Bit$init$builtin_bit($tmp229);
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block33; else goto block34;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:44
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:44:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp232 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp233 = *$tmp232;
frost$core$Bit $tmp234 = frost$core$Bit$init$builtin_bit($tmp233 != NULL);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp236 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s237, $tmp236);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp238 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp239 = *$tmp238;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$core$String* $tmp240 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp239), &$s241);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
return $tmp240;
block34:;
frost$core$Int64 $tmp242 = (frost$core$Int64) {18};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:46:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp243 = $tmp92.value;
int64_t $tmp244 = $tmp242.value;
bool $tmp245 = $tmp243 == $tmp244;
frost$core$Bit $tmp246 = frost$core$Bit$init$builtin_bit($tmp245);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:47
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:47:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp248 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp249 = *$tmp248;
frost$core$Bit $tmp250 = frost$core$Bit$init$builtin_bit($tmp249 != NULL);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block43; else goto block44;
block44:;
frost$core$Int64 $tmp252 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s253, $tmp252);
abort(); // unreachable
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp254 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp255 = *$tmp254;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$core$String* $tmp256 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp255), &$s257);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
return $tmp256;
block40:;
frost$core$Int64 $tmp258 = (frost$core$Int64) {15};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:49:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp259 = $tmp92.value;
int64_t $tmp260 = $tmp258.value;
bool $tmp261 = $tmp259 == $tmp260;
frost$core$Bit $tmp262 = frost$core$Bit$init$builtin_bit($tmp261);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:50
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:50:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp264 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp265 = *$tmp264;
frost$core$Bit $tmp266 = frost$core$Bit$init$builtin_bit($tmp265 != NULL);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block49; else goto block50;
block50:;
frost$core$Int64 $tmp268 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s269, $tmp268);
abort(); // unreachable
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp270 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp271 = *$tmp270;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$String* $tmp272 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp271), &$s273);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
return $tmp272;
block46:;
frost$core$Int64 $tmp274 = (frost$core$Int64) {17};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:52:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp275 = $tmp92.value;
int64_t $tmp276 = $tmp274.value;
bool $tmp277 = $tmp275 == $tmp276;
frost$core$Bit $tmp278 = frost$core$Bit$init$builtin_bit($tmp277);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:53
// begin inline call to function org.frostlang.frostc.Type.get_subtypes():org.frostlang.frostc.FixedArray<org.frostlang.frostc.Type> from StubCodeGenerator.frost:53:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:242
org$frostlang$frostc$FixedArray** $tmp280 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp281 = *$tmp280;
frost$core$Bit $tmp282 = frost$core$Bit$init$builtin_bit($tmp281 != NULL);
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block55; else goto block56;
block56:;
frost$core$Int64 $tmp284 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s285, $tmp284);
abort(); // unreachable
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:243
org$frostlang$frostc$FixedArray** $tmp286 = &param1->_subtypes;
org$frostlang$frostc$FixedArray* $tmp287 = *$tmp286;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
frost$core$String* $tmp288 = org$frostlang$frostc$StubCodeGenerator$methodType$frost$collections$ListView$LTorg$frostlang$frostc$Type$GT$frost$core$String$R$frost$core$String(param0, ((frost$collections$ListView*) $tmp287), &$s289);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
return $tmp288;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:56
frost$core$String** $tmp290 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp291 = *$tmp290;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
return $tmp291;
block1:;
goto block57;
block57:;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ChoiceCase* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:62
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:63
frost$io$OutputStream** $tmp292 = &param0->out;
frost$io$OutputStream* $tmp293 = *$tmp292;
frost$core$String** $tmp294 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp295 = *$tmp294;
$fn297 $tmp296 = ($fn297) $tmp293->$class->vtable[17];
frost$core$Error* $tmp298 = $tmp296($tmp293, $tmp295);
if ($tmp298 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local0) = $tmp298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:64
frost$collections$Array** $tmp299 = &param1->fields;
frost$collections$Array* $tmp300 = *$tmp299;
ITable* $tmp301 = ((frost$collections$CollectionView*) $tmp300)->$class->itable;
while ($tmp301->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp301 = $tmp301->next;
}
$fn303 $tmp302 = $tmp301->methods[0];
frost$core$Int64 $tmp304 = $tmp302(((frost$collections$CollectionView*) $tmp300));
frost$core$Int64 $tmp305 = (frost$core$Int64) {0};
int64_t $tmp306 = $tmp304.value;
int64_t $tmp307 = $tmp305.value;
bool $tmp308 = $tmp306 > $tmp307;
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308};
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block5; else goto block7;
block5:;
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
$fn324 $tmp323 = $tmp322->methods[8];
frost$collections$Array* $tmp325 = $tmp323(((frost$collections$CollectionView*) $tmp314), $tmp317);
ITable* $tmp326 = ((frost$collections$CollectionView*) $tmp325)->$class->itable;
while ($tmp326->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp326 = $tmp326->next;
}
$fn328 $tmp327 = $tmp326->methods[2];
frost$core$String* $tmp329 = $tmp327(((frost$collections$CollectionView*) $tmp325), &$s330);
frost$core$String* $tmp331 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s332, $tmp329);
frost$core$String* $tmp333 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp331, &$s334);
$fn336 $tmp335 = ($fn336) $tmp312->$class->vtable[17];
frost$core$Error* $tmp337 = $tmp335($tmp312, $tmp333);
if ($tmp337 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
*(&local0) = $tmp337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
goto block6;
block7:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:68
frost$io$OutputStream** $tmp338 = &param0->out;
frost$io$OutputStream* $tmp339 = *$tmp338;
$fn341 $tmp340 = ($fn341) $tmp339->$class->vtable[21];
frost$core$Error* $tmp342 = $tmp340($tmp339);
if ($tmp342 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local0) = $tmp342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
goto block6;
block6:;
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:72
frost$core$Error* $tmp343 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:72:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:34
$fn345 $tmp344 = ($fn345) ((frost$core$Object*) $tmp343)->$class->vtable[0];
frost$core$String* $tmp346 = $tmp344(((frost$core$Object*) $tmp343));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.stub:34:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp346);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:73
frost$core$Int64 $tmp347 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp347);
goto block2;
block2:;
frost$core$Error* $tmp348 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp348));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$FieldDecl* param1) {

frost$core$Error* local0 = NULL;
org$frostlang$frostc$FieldDecl$Kind local1;
org$frostlang$frostc$FieldDecl$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:78
org$frostlang$frostc$Annotations** $tmp349 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp350 = *$tmp349;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from StubCodeGenerator.frost:78:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int64* $tmp351 = &$tmp350->flags;
frost$core$Int64 $tmp352 = *$tmp351;
frost$core$Int64 $tmp353 = (frost$core$Int64) {8192};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:173
int64_t $tmp354 = $tmp352.value;
int64_t $tmp355 = $tmp353.value;
int64_t $tmp356 = $tmp354 & $tmp355;
frost$core$Int64 $tmp357 = frost$core$Int64$init$builtin_int64($tmp356);
frost$core$Int64 $tmp358 = (frost$core$Int64) {0};
int64_t $tmp359 = $tmp357.value;
int64_t $tmp360 = $tmp358.value;
bool $tmp361 = $tmp359 != $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:79
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:81
frost$core$Weak** $tmp364 = &param0->compiler;
frost$core$Weak* $tmp365 = *$tmp364;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:81:13
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp366 = &$tmp365->_valid;
frost$core$Bit $tmp367 = *$tmp366;
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp369 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s370, $tmp369);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp371 = &$tmp365->value;
frost$core$Object* $tmp372 = *$tmp371;
frost$core$Frost$ref$frost$core$Object$Q($tmp372);
frost$core$Bit $tmp373 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$FieldDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp372), param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:81:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp374 = $tmp373.value;
bool $tmp375 = !$tmp374;
frost$core$Bit $tmp376 = (frost$core$Bit) {$tmp375};
bool $tmp377 = $tmp376.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp372);
if ($tmp377) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:82
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:84
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:85
org$frostlang$frostc$FieldDecl$Kind* $tmp378 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp379 = *$tmp378;
frost$core$Int64 $tmp380 = $tmp379.$rawValue;
frost$core$Int64 $tmp381 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:86:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp382 = $tmp380.value;
int64_t $tmp383 = $tmp381.value;
bool $tmp384 = $tmp382 == $tmp383;
frost$core$Bit $tmp385 = frost$core$Bit$init$builtin_bit($tmp384);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:86
frost$io$OutputStream** $tmp387 = &param0->out;
frost$io$OutputStream* $tmp388 = *$tmp387;
$fn390 $tmp389 = ($fn390) $tmp388->$class->vtable[17];
frost$core$Error* $tmp391 = $tmp389($tmp388, &$s392);
if ($tmp391 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
*(&local0) = $tmp391;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
goto block12;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
goto block14;
block16:;
frost$core$Int64 $tmp393 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:87:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp394 = $tmp380.value;
int64_t $tmp395 = $tmp393.value;
bool $tmp396 = $tmp394 == $tmp395;
frost$core$Bit $tmp397 = frost$core$Bit$init$builtin_bit($tmp396);
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:87
frost$io$OutputStream** $tmp399 = &param0->out;
frost$io$OutputStream* $tmp400 = *$tmp399;
$fn402 $tmp401 = ($fn402) $tmp400->$class->vtable[17];
frost$core$Error* $tmp403 = $tmp401($tmp400, &$s404);
if ($tmp403 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local0) = $tmp403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
goto block12;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
goto block14;
block21:;
frost$core$Int64 $tmp405 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:88:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp406 = $tmp380.value;
int64_t $tmp407 = $tmp405.value;
bool $tmp408 = $tmp406 == $tmp407;
frost$core$Bit $tmp409 = frost$core$Bit$init$builtin_bit($tmp408);
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:88
frost$io$OutputStream** $tmp411 = &param0->out;
frost$io$OutputStream* $tmp412 = *$tmp411;
$fn414 $tmp413 = ($fn414) $tmp412->$class->vtable[17];
frost$core$Error* $tmp415 = $tmp413($tmp412, &$s416);
if ($tmp415 == NULL) goto block28; else goto block29;
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local0) = $tmp415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
goto block12;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
goto block14;
block26:;
frost$core$Int64 $tmp417 = (frost$core$Int64) {3};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:89:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp418 = $tmp380.value;
int64_t $tmp419 = $tmp417.value;
bool $tmp420 = $tmp418 == $tmp419;
frost$core$Bit $tmp421 = frost$core$Bit$init$builtin_bit($tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block30; else goto block14;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:89
frost$io$OutputStream** $tmp423 = &param0->out;
frost$io$OutputStream* $tmp424 = *$tmp423;
$fn426 $tmp425 = ($fn426) $tmp424->$class->vtable[17];
frost$core$Error* $tmp427 = $tmp425($tmp424, &$s428);
if ($tmp427 == NULL) goto block32; else goto block33;
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local0) = $tmp427;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
goto block12;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:91
frost$io$OutputStream** $tmp429 = &param0->out;
frost$io$OutputStream* $tmp430 = *$tmp429;
frost$core$String** $tmp431 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp432 = *$tmp431;
$fn434 $tmp433 = ($fn434) $tmp430->$class->vtable[17];
frost$core$Error* $tmp435 = $tmp433($tmp430, $tmp432);
if ($tmp435 == NULL) goto block34; else goto block35;
block35:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
*(&local0) = $tmp435;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
goto block12;
block34:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:92
frost$io$OutputStream** $tmp436 = &param0->out;
frost$io$OutputStream* $tmp437 = *$tmp436;
$fn439 $tmp438 = ($fn439) $tmp437->$class->vtable[17];
frost$core$Error* $tmp440 = $tmp438($tmp437, &$s441);
if ($tmp440 == NULL) goto block36; else goto block37;
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
*(&local0) = $tmp440;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
goto block12;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp440));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:93
frost$io$OutputStream** $tmp442 = &param0->out;
frost$io$OutputStream* $tmp443 = *$tmp442;
org$frostlang$frostc$Type** $tmp444 = &param1->type;
org$frostlang$frostc$Type* $tmp445 = *$tmp444;
frost$core$String* $tmp446 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp445);
$fn448 $tmp447 = ($fn448) $tmp443->$class->vtable[17];
frost$core$Error* $tmp449 = $tmp447($tmp443, $tmp446);
if ($tmp449 == NULL) goto block38; else goto block39;
block39:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
*(&local0) = $tmp449;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
goto block12;
block38:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:94
org$frostlang$frostc$FieldDecl$Kind* $tmp450 = &param1->fieldKind;
org$frostlang$frostc$FieldDecl$Kind $tmp451 = *$tmp450;
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp452;
$tmp452 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp452->value = $tmp451;
frost$core$Int64 $tmp453 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.FieldDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.FieldDecl.Kind from StubCodeGenerator.frost:94:44
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FieldDecl.frost:5
frost$core$Int64* $tmp454 = &(&local2)->$rawValue;
*$tmp454 = $tmp453;
org$frostlang$frostc$FieldDecl$Kind $tmp455 = *(&local2);
*(&local1) = $tmp455;
org$frostlang$frostc$FieldDecl$Kind $tmp456 = *(&local1);
org$frostlang$frostc$FieldDecl$Kind$wrapper* $tmp457;
$tmp457 = (org$frostlang$frostc$FieldDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$FieldDecl$Kind$wrapperclass);
$tmp457->value = $tmp456;
ITable* $tmp458 = ((frost$core$Equatable*) $tmp452)->$class->itable;
while ($tmp458->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp458 = $tmp458->next;
}
$fn460 $tmp459 = $tmp458->methods[0];
frost$core$Bit $tmp461 = $tmp459(((frost$core$Equatable*) $tmp452), ((frost$core$Equatable*) $tmp457));
bool $tmp462 = $tmp461.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp457)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp452)));
if ($tmp462) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:95
frost$io$OutputStream** $tmp463 = &param0->out;
frost$io$OutputStream* $tmp464 = *$tmp463;
$fn466 $tmp465 = ($fn466) $tmp464->$class->vtable[17];
frost$core$Error* $tmp467 = $tmp465($tmp464, &$s468);
if ($tmp467 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local0) = $tmp467;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
goto block12;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:96
frost$io$OutputStream** $tmp469 = &param0->out;
frost$io$OutputStream* $tmp470 = *$tmp469;
org$frostlang$frostc$ASTNode** $tmp471 = &param1->rawValue;
org$frostlang$frostc$ASTNode* $tmp472 = *$tmp471;
$fn474 $tmp473 = ($fn474) $tmp470->$class->vtable[18];
frost$core$Error* $tmp475 = $tmp473($tmp470, ((frost$core$Object*) $tmp472));
if ($tmp475 == NULL) goto block45; else goto block46;
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local0) = $tmp475;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
goto block12;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
goto block41;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:98
frost$io$OutputStream** $tmp476 = &param0->out;
frost$io$OutputStream* $tmp477 = *$tmp476;
$fn479 $tmp478 = ($fn479) $tmp477->$class->vtable[21];
frost$core$Error* $tmp480 = $tmp478($tmp477);
if ($tmp480 == NULL) goto block47; else goto block48;
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local0) = $tmp480;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
goto block12;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:101
frost$core$Error* $tmp481 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:101:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:34
$fn483 $tmp482 = ($fn483) ((frost$core$Object*) $tmp481)->$class->vtable[0];
frost$core$String* $tmp484 = $tmp482(((frost$core$Object*) $tmp481));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.stub:34:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp484);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:102
frost$core$Int64 $tmp485 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp485);
goto block13;
block13:;
frost$core$Error* $tmp486 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$MethodDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
org$frostlang$frostc$MethodDecl$Parameter* local2 = NULL;
org$frostlang$frostc$MethodDecl$Kind local3;
org$frostlang$frostc$MethodDecl$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$Type$Kind local6;
org$frostlang$frostc$ASTNode* local7 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:107
org$frostlang$frostc$Annotations** $tmp487 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp488 = *$tmp487;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from StubCodeGenerator.frost:107:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int64* $tmp489 = &$tmp488->flags;
frost$core$Int64 $tmp490 = *$tmp489;
frost$core$Int64 $tmp491 = (frost$core$Int64) {8192};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:173
int64_t $tmp492 = $tmp490.value;
int64_t $tmp493 = $tmp491.value;
int64_t $tmp494 = $tmp492 & $tmp493;
frost$core$Int64 $tmp495 = frost$core$Int64$init$builtin_int64($tmp494);
frost$core$Int64 $tmp496 = (frost$core$Int64) {0};
int64_t $tmp497 = $tmp495.value;
int64_t $tmp498 = $tmp496.value;
bool $tmp499 = $tmp497 != $tmp498;
frost$core$Bit $tmp500 = (frost$core$Bit) {$tmp499};
bool $tmp501 = $tmp500.value;
if ($tmp501) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:108
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:110
frost$core$Weak** $tmp502 = &param0->compiler;
frost$core$Weak* $tmp503 = *$tmp502;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:110:13
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp504 = &$tmp503->_valid;
frost$core$Bit $tmp505 = *$tmp504;
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp507 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s508, $tmp507);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp509 = &$tmp503->value;
frost$core$Object* $tmp510 = *$tmp509;
frost$core$Frost$ref$frost$core$Object$Q($tmp510);
frost$core$Bit $tmp511 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp510), param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:110:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp512 = $tmp511.value;
bool $tmp513 = !$tmp512;
frost$core$Bit $tmp514 = (frost$core$Bit) {$tmp513};
bool $tmp515 = $tmp514.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp510);
if ($tmp515) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:111
return;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:113
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:114
frost$io$OutputStream** $tmp516 = &param0->out;
frost$io$OutputStream* $tmp517 = *$tmp516;
org$frostlang$frostc$Annotations** $tmp518 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp519 = *$tmp518;
$fn521 $tmp520 = ($fn521) $tmp517->$class->vtable[18];
frost$core$Error* $tmp522 = $tmp520($tmp517, ((frost$core$Object*) $tmp519));
if ($tmp522 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local0) = $tmp522;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
goto block12;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:115
org$frostlang$frostc$MethodDecl$Kind* $tmp523 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp524 = *$tmp523;
frost$core$Int64 $tmp525 = $tmp524.$rawValue;
frost$core$Int64 $tmp526 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:116:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp527 = $tmp525.value;
int64_t $tmp528 = $tmp526.value;
bool $tmp529 = $tmp527 == $tmp528;
frost$core$Bit $tmp530 = frost$core$Bit$init$builtin_bit($tmp529);
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:117
frost$io$OutputStream** $tmp532 = &param0->out;
frost$io$OutputStream* $tmp533 = *$tmp532;
$fn535 $tmp534 = ($fn535) $tmp533->$class->vtable[17];
frost$core$Error* $tmp536 = $tmp534($tmp533, &$s537);
if ($tmp536 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
*(&local0) = $tmp536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
goto block12;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
goto block16;
block18:;
frost$core$Int64 $tmp538 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:119:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp539 = $tmp525.value;
int64_t $tmp540 = $tmp538.value;
bool $tmp541 = $tmp539 == $tmp540;
frost$core$Bit $tmp542 = frost$core$Bit$init$builtin_bit($tmp541);
bool $tmp543 = $tmp542.value;
if ($tmp543) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:120
frost$io$OutputStream** $tmp544 = &param0->out;
frost$io$OutputStream* $tmp545 = *$tmp544;
$fn547 $tmp546 = ($fn547) $tmp545->$class->vtable[17];
frost$core$Error* $tmp548 = $tmp546($tmp545, &$s549);
if ($tmp548 == NULL) goto block25; else goto block26;
block26:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
*(&local0) = $tmp548;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
goto block12;
block25:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
goto block16;
block23:;
frost$core$Int64 $tmp550 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:122:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp551 = $tmp525.value;
int64_t $tmp552 = $tmp550.value;
bool $tmp553 = $tmp551 == $tmp552;
frost$core$Bit $tmp554 = frost$core$Bit$init$builtin_bit($tmp553);
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block27; else goto block28;
block27:;
goto block16;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:125
frost$core$Int64 $tmp556 = (frost$core$Int64) {125};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s557, $tmp556);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:128
frost$io$OutputStream** $tmp558 = &param0->out;
frost$io$OutputStream* $tmp559 = *$tmp558;
frost$core$String** $tmp560 = &((org$frostlang$frostc$Symbol*) param1)->name;
frost$core$String* $tmp561 = *$tmp560;
$fn563 $tmp562 = ($fn563) $tmp559->$class->vtable[17];
frost$core$Error* $tmp564 = $tmp562($tmp559, $tmp561);
if ($tmp564 == NULL) goto block30; else goto block31;
block31:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local0) = $tmp564;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
goto block12;
block30:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:129
frost$collections$Array** $tmp565 = &param1->genericParameters;
frost$collections$Array* $tmp566 = *$tmp565;
frost$core$Bit $tmp567 = frost$core$Bit$init$builtin_bit($tmp566 != NULL);
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:130
frost$io$OutputStream** $tmp569 = &param0->out;
frost$io$OutputStream* $tmp570 = *$tmp569;
frost$collections$Array** $tmp571 = &param1->genericParameters;
frost$collections$Array* $tmp572 = *$tmp571;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure10));
org$frostlang$frostc$StubCodeGenerator$_Closure10* $tmp573 = (org$frostlang$frostc$StubCodeGenerator$_Closure10*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure10$class);
org$frostlang$frostc$StubCodeGenerator$_Closure10$init$org$frostlang$frostc$StubCodeGenerator($tmp573, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp575 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:131:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp576 = &$tmp575->pointer;
*$tmp576 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure10$$anonymous9$org$frostlang$frostc$MethodDecl$GenericParameter$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
frost$core$Object** $tmp577 = &$tmp575->target;
frost$core$Object* $tmp578 = *$tmp577;
frost$core$Frost$unref$frost$core$Object$Q($tmp578);
frost$core$Object** $tmp579 = &$tmp575->target;
*$tmp579 = ((frost$core$Object*) $tmp573);
ITable* $tmp580 = ((frost$collections$CollectionView*) $tmp572)->$class->itable;
while ($tmp580->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp580 = $tmp580->next;
}
$fn582 $tmp581 = $tmp580->methods[8];
frost$collections$Array* $tmp583 = $tmp581(((frost$collections$CollectionView*) $tmp572), $tmp575);
ITable* $tmp584 = ((frost$collections$CollectionView*) $tmp583)->$class->itable;
while ($tmp584->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp584 = $tmp584->next;
}
$fn586 $tmp585 = $tmp584->methods[2];
frost$core$String* $tmp587 = $tmp585(((frost$collections$CollectionView*) $tmp583), &$s588);
frost$core$String* $tmp589 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s590, $tmp587);
frost$core$String* $tmp591 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp589, &$s592);
$fn594 $tmp593 = ($fn594) $tmp570->$class->vtable[17];
frost$core$Error* $tmp595 = $tmp593($tmp570, $tmp591);
if ($tmp595 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
*(&local0) = $tmp595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
goto block12;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
goto block33;
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:134
frost$io$OutputStream** $tmp596 = &param0->out;
frost$io$OutputStream* $tmp597 = *$tmp596;
$fn599 $tmp598 = ($fn599) $tmp597->$class->vtable[17];
frost$core$Error* $tmp600 = $tmp598($tmp597, &$s601);
if ($tmp600 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local0) = $tmp600;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
goto block12;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:135
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s602));
frost$core$String* $tmp603 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local1) = &$s604;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:136
frost$collections$Array** $tmp605 = &param1->parameters;
frost$collections$Array* $tmp606 = *$tmp605;
ITable* $tmp607 = ((frost$collections$Iterable*) $tmp606)->$class->itable;
while ($tmp607->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp607 = $tmp607->next;
}
$fn609 $tmp608 = $tmp607->methods[0];
frost$collections$Iterator* $tmp610 = $tmp608(((frost$collections$Iterable*) $tmp606));
goto block39;
block39:;
ITable* $tmp611 = $tmp610->$class->itable;
while ($tmp611->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp611 = $tmp611->next;
}
$fn613 $tmp612 = $tmp611->methods[0];
frost$core$Bit $tmp614 = $tmp612($tmp610);
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block41; else goto block40;
block40:;
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
ITable* $tmp616 = $tmp610->$class->itable;
while ($tmp616->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp616 = $tmp616->next;
}
$fn618 $tmp617 = $tmp616->methods[1];
frost$core$Object* $tmp619 = $tmp617($tmp610);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp619)));
org$frostlang$frostc$MethodDecl$Parameter* $tmp620 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) $tmp619);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:137
frost$io$OutputStream** $tmp621 = &param0->out;
frost$io$OutputStream* $tmp622 = *$tmp621;
frost$core$String* $tmp623 = *(&local1);
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:137:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
frost$core$String* $tmp624 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp623, &$s625);
org$frostlang$frostc$MethodDecl$Parameter* $tmp626 = *(&local2);
frost$core$String** $tmp627 = &$tmp626->name;
frost$core$String* $tmp628 = *$tmp627;
frost$core$String* $tmp629 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp624, $tmp628);
frost$core$String* $tmp630 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp629, &$s631);
org$frostlang$frostc$MethodDecl$Parameter* $tmp632 = *(&local2);
org$frostlang$frostc$Type** $tmp633 = &$tmp632->type;
org$frostlang$frostc$Type* $tmp634 = *$tmp633;
frost$core$String* $tmp635 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp634);
frost$core$String* $tmp636 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp630, $tmp635);
frost$core$String* $tmp637 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp636, &$s638);
$fn640 $tmp639 = ($fn640) $tmp622->$class->vtable[17];
frost$core$Error* $tmp641 = $tmp639($tmp622, $tmp637);
if ($tmp641 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
*(&local0) = $tmp641;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
frost$core$Frost$unref$frost$core$Object$Q($tmp619);
org$frostlang$frostc$MethodDecl$Parameter* $tmp642 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
frost$core$String* $tmp643 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:138
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s644));
frost$core$String* $tmp645 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
*(&local1) = &$s646;
frost$core$Frost$unref$frost$core$Object$Q($tmp619);
org$frostlang$frostc$MethodDecl$Parameter* $tmp647 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local2) = ((org$frostlang$frostc$MethodDecl$Parameter*) NULL);
goto block39;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:140
frost$io$OutputStream** $tmp648 = &param0->out;
frost$io$OutputStream* $tmp649 = *$tmp648;
$fn651 $tmp650 = ($fn651) $tmp649->$class->vtable[17];
frost$core$Error* $tmp652 = $tmp650($tmp649, &$s653);
if ($tmp652 == NULL) goto block45; else goto block46;
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local0) = $tmp652;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
frost$core$String* $tmp654 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:141
org$frostlang$frostc$MethodDecl$Kind* $tmp655 = &param1->methodKind;
org$frostlang$frostc$MethodDecl$Kind $tmp656 = *$tmp655;
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp657;
$tmp657 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp657->value = $tmp656;
frost$core$Int64 $tmp658 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.MethodDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.MethodDecl.Kind from StubCodeGenerator.frost:141:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/MethodDecl.frost:7
frost$core$Int64* $tmp659 = &(&local4)->$rawValue;
*$tmp659 = $tmp658;
org$frostlang$frostc$MethodDecl$Kind $tmp660 = *(&local4);
*(&local3) = $tmp660;
org$frostlang$frostc$MethodDecl$Kind $tmp661 = *(&local3);
org$frostlang$frostc$MethodDecl$Kind$wrapper* $tmp662;
$tmp662 = (org$frostlang$frostc$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Kind$wrapperclass);
$tmp662->value = $tmp661;
ITable* $tmp663 = ((frost$core$Equatable*) $tmp657)->$class->itable;
while ($tmp663->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp663 = $tmp663->next;
}
$fn665 $tmp664 = $tmp663->methods[0];
frost$core$Bit $tmp666 = $tmp664(((frost$core$Equatable*) $tmp657), ((frost$core$Equatable*) $tmp662));
bool $tmp667 = $tmp666.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp662)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp657)));
if ($tmp667) goto block47; else goto block49;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:142
org$frostlang$frostc$Annotations** $tmp668 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp669 = *$tmp668;
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from StubCodeGenerator.frost:142:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:143
frost$core$Int64* $tmp670 = &$tmp669->flags;
frost$core$Int64 $tmp671 = *$tmp670;
frost$core$Int64 $tmp672 = (frost$core$Int64) {1024};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:143:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:173
int64_t $tmp673 = $tmp671.value;
int64_t $tmp674 = $tmp672.value;
int64_t $tmp675 = $tmp673 & $tmp674;
frost$core$Int64 $tmp676 = frost$core$Int64$init$builtin_int64($tmp675);
frost$core$Int64 $tmp677 = (frost$core$Int64) {0};
int64_t $tmp678 = $tmp676.value;
int64_t $tmp679 = $tmp677.value;
bool $tmp680 = $tmp678 != $tmp679;
frost$core$Bit $tmp681 = (frost$core$Bit) {$tmp680};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:142:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp682 = $tmp681.value;
bool $tmp683 = !$tmp682;
frost$core$Bit $tmp684 = (frost$core$Bit) {$tmp683};
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:143
frost$io$OutputStream** $tmp686 = &param0->out;
frost$io$OutputStream* $tmp687 = *$tmp686;
$fn689 $tmp688 = ($fn689) $tmp687->$class->vtable[17];
frost$core$Error* $tmp690 = $tmp688($tmp687, &$s691);
if ($tmp690 == NULL) goto block56; else goto block57;
block57:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
*(&local0) = $tmp690;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
frost$core$String* $tmp692 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
goto block52;
block52:;
goto block48;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:146
org$frostlang$frostc$Type** $tmp693 = &param1->returnType;
org$frostlang$frostc$Type* $tmp694 = *$tmp693;
// begin inline call to method org.frostlang.frostc.Type.Void():org.frostlang.frostc.Type from StubCodeGenerator.frost:146:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp695 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp696 = (frost$core$Int64) {4};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:258:33
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp697 = &(&local6)->$rawValue;
*$tmp697 = $tmp696;
org$frostlang$frostc$Type$Kind $tmp698 = *(&local6);
*(&local5) = $tmp698;
org$frostlang$frostc$Type$Kind $tmp699 = *(&local5);
org$frostlang$frostc$Position $tmp700 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp701 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp695, &$s702, $tmp699, $tmp700, $tmp701);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
ITable* $tmp703 = ((frost$core$Equatable*) $tmp694)->$class->itable;
while ($tmp703->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp703 = $tmp703->next;
}
$fn705 $tmp704 = $tmp703->methods[1];
frost$core$Bit $tmp706 = $tmp704(((frost$core$Equatable*) $tmp694), ((frost$core$Equatable*) $tmp695));
bool $tmp707 = $tmp706.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
if ($tmp707) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:147
frost$io$OutputStream** $tmp708 = &param0->out;
frost$io$OutputStream* $tmp709 = *$tmp708;
org$frostlang$frostc$Type** $tmp710 = &param1->returnType;
org$frostlang$frostc$Type* $tmp711 = *$tmp710;
frost$core$String* $tmp712 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp711);
frost$core$String* $tmp713 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s714, $tmp712);
frost$core$String* $tmp715 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp713, &$s716);
$fn718 $tmp717 = ($fn718) $tmp709->$class->vtable[19];
frost$core$Error* $tmp719 = $tmp717($tmp709, $tmp715);
if ($tmp719 == NULL) goto block62; else goto block63;
block63:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
*(&local0) = $tmp719;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
frost$core$String* $tmp720 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block62:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp719));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
goto block59;
block59:;
goto block48;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:149
org$frostlang$frostc$Annotations** $tmp721 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp722 = *$tmp721;
// begin inline call to function org.frostlang.frostc.Annotations.get_isInline():frost.core.Bit from StubCodeGenerator.frost:149:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:143
frost$core$Int64* $tmp723 = &$tmp722->flags;
frost$core$Int64 $tmp724 = *$tmp723;
frost$core$Int64 $tmp725 = (frost$core$Int64) {1024};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:143:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:173
int64_t $tmp726 = $tmp724.value;
int64_t $tmp727 = $tmp725.value;
int64_t $tmp728 = $tmp726 & $tmp727;
frost$core$Int64 $tmp729 = frost$core$Int64$init$builtin_int64($tmp728);
frost$core$Int64 $tmp730 = (frost$core$Int64) {0};
int64_t $tmp731 = $tmp729.value;
int64_t $tmp732 = $tmp730.value;
bool $tmp733 = $tmp731 != $tmp732;
frost$core$Bit $tmp734 = (frost$core$Bit) {$tmp733};
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block64; else goto block66;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:150
frost$io$OutputStream** $tmp736 = &param0->out;
frost$io$OutputStream* $tmp737 = *$tmp736;
$fn739 $tmp738 = ($fn739) $tmp737->$class->vtable[17];
frost$core$Error* $tmp740 = $tmp738($tmp737, &$s741);
if ($tmp740 == NULL) goto block69; else goto block70;
block70:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local0) = $tmp740;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
frost$core$String* $tmp742 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block69:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:151
org$frostlang$frostc$FixedArray** $tmp743 = &param1->body;
org$frostlang$frostc$FixedArray* $tmp744 = *$tmp743;
ITable* $tmp745 = ((frost$collections$Iterable*) $tmp744)->$class->itable;
while ($tmp745->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp745 = $tmp745->next;
}
$fn747 $tmp746 = $tmp745->methods[0];
frost$collections$Iterator* $tmp748 = $tmp746(((frost$collections$Iterable*) $tmp744));
goto block71;
block71:;
ITable* $tmp749 = $tmp748->$class->itable;
while ($tmp749->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp749 = $tmp749->next;
}
$fn751 $tmp750 = $tmp749->methods[0];
frost$core$Bit $tmp752 = $tmp750($tmp748);
bool $tmp753 = $tmp752.value;
if ($tmp753) goto block73; else goto block72;
block72:;
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp754 = $tmp748->$class->itable;
while ($tmp754->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp754 = $tmp754->next;
}
$fn756 $tmp755 = $tmp754->methods[1];
frost$core$Object* $tmp757 = $tmp755($tmp748);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp757)));
org$frostlang$frostc$ASTNode* $tmp758 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local7) = ((org$frostlang$frostc$ASTNode*) $tmp757);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:152
frost$io$OutputStream** $tmp759 = &param0->out;
frost$io$OutputStream* $tmp760 = *$tmp759;
org$frostlang$frostc$ASTNode* $tmp761 = *(&local7);
$fn763 $tmp762 = ($fn763) $tmp760->$class->vtable[20];
frost$core$Error* $tmp764 = $tmp762($tmp760, ((frost$core$Object*) $tmp761));
if ($tmp764 == NULL) goto block74; else goto block75;
block75:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local0) = $tmp764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$core$Frost$unref$frost$core$Object$Q($tmp757);
org$frostlang$frostc$ASTNode* $tmp765 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
frost$core$String* $tmp766 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block74:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$core$Frost$unref$frost$core$Object$Q($tmp757);
org$frostlang$frostc$ASTNode* $tmp767 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local7) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block71;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:154
frost$io$OutputStream** $tmp768 = &param0->out;
frost$io$OutputStream* $tmp769 = *$tmp768;
$fn771 $tmp770 = ($fn771) $tmp769->$class->vtable[17];
frost$core$Error* $tmp772 = $tmp770($tmp769, &$s773);
if ($tmp772 == NULL) goto block76; else goto block77;
block77:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
*(&local0) = $tmp772;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
frost$core$String* $tmp774 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block76:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
goto block65;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:156
org$frostlang$frostc$Annotations** $tmp775 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp776 = *$tmp775;
// begin inline call to function org.frostlang.frostc.Annotations.get_isDefault():frost.core.Bit from StubCodeGenerator.frost:156:34
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:163
frost$core$Int64* $tmp777 = &$tmp776->flags;
frost$core$Int64 $tmp778 = *$tmp777;
frost$core$Int64 $tmp779 = (frost$core$Int64) {32768};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:163:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:173
int64_t $tmp780 = $tmp778.value;
int64_t $tmp781 = $tmp779.value;
int64_t $tmp782 = $tmp780 & $tmp781;
frost$core$Int64 $tmp783 = frost$core$Int64$init$builtin_int64($tmp782);
frost$core$Int64 $tmp784 = (frost$core$Int64) {0};
int64_t $tmp785 = $tmp783.value;
int64_t $tmp786 = $tmp784.value;
bool $tmp787 = $tmp785 != $tmp786;
frost$core$Bit $tmp788 = (frost$core$Bit) {$tmp787};
bool $tmp789 = $tmp788.value;
if ($tmp789) goto block78; else goto block79;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:157
frost$io$OutputStream** $tmp790 = &param0->out;
frost$io$OutputStream* $tmp791 = *$tmp790;
$fn793 $tmp792 = ($fn793) $tmp791->$class->vtable[17];
frost$core$Error* $tmp794 = $tmp792($tmp791, &$s795);
if ($tmp794 == NULL) goto block82; else goto block83;
block83:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local0) = $tmp794;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
frost$core$String* $tmp796 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
*(&local1) = ((frost$core$String*) NULL);
goto block12;
block82:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
goto block79;
block79:;
goto block65;
block65:;
frost$core$String* $tmp797 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local1) = ((frost$core$String*) NULL);
goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:161
frost$core$Error* $tmp798 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:161:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:34
$fn800 $tmp799 = ($fn800) ((frost$core$Object*) $tmp798)->$class->vtable[0];
frost$core$String* $tmp801 = $tmp799(((frost$core$Object*) $tmp798));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.stub:34:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp801);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:162
frost$core$Int64 $tmp802 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp802);
goto block13;
block13:;
frost$core$Error* $tmp803 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

frost$core$Error* local0 = NULL;
frost$core$String* local1 = NULL;
frost$collections$ListView* local2 = NULL;
frost$core$Matcher* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$core$Int64 local5;
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
frost$core$Weak** $tmp804 = &param0->compiler;
frost$core$Weak* $tmp805 = *$tmp804;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:170:17
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp806 = &$tmp805->_valid;
frost$core$Bit $tmp807 = *$tmp806;
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp809 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s810, $tmp809);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp811 = &$tmp805->value;
frost$core$Object* $tmp812 = *$tmp811;
frost$core$Frost$ref$frost$core$Object$Q($tmp812);
frost$core$Bit $tmp813 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$ClassDecl$R$frost$core$Bit(((org$frostlang$frostc$Compiler*) $tmp812), param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:170:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp814 = $tmp813.value;
bool $tmp815 = !$tmp814;
frost$core$Bit $tmp816 = (frost$core$Bit) {$tmp815};
bool $tmp817 = $tmp816.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp812);
if ($tmp817) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:171
frost$core$Error* $tmp818 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local0) = ((frost$core$Error*) NULL);
return;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:173
frost$core$String** $tmp819 = &param1->name;
frost$core$String* $tmp820 = *$tmp819;
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
frost$core$String* $tmp821 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local1) = $tmp820;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:174
frost$core$String** $tmp822 = &param1->name;
frost$core$String* $tmp823 = *$tmp822;
FROST_ASSERT(24 == sizeof(frost$core$RegularExpression));
frost$core$RegularExpression* $tmp824 = (frost$core$RegularExpression*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String($tmp824, &$s825);
// begin inline call to function frost.core.String.parse(regex:frost.core.RegularExpression):frost.collections.ListView<frost.core.String>? from StubCodeGenerator.frost:174:40
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:243
frost$core$Matcher* $tmp826 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher($tmp824, $tmp823);
*(&local3) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Matcher* $tmp827 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local3) = $tmp826;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:244
frost$core$Matcher* $tmp828 = *(&local3);
frost$core$Bit $tmp829;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp829, $tmp828);
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:245
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp831 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp831);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
frost$collections$Array* $tmp832 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
*(&local4) = $tmp831;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:246
frost$core$Int64 $tmp833 = (frost$core$Int64) {1};
frost$core$Matcher* $tmp834 = *(&local3);
frost$core$Int64 $tmp835;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp835, $tmp834);
frost$core$Bit $tmp836 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp837 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp833, $tmp835, $tmp836);
frost$core$Int64 $tmp838 = $tmp837.min;
*(&local5) = $tmp838;
frost$core$Int64 $tmp839 = $tmp837.max;
frost$core$Bit $tmp840 = $tmp837.inclusive;
bool $tmp841 = $tmp840.value;
frost$core$Int64 $tmp842 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:555
int64_t $tmp843 = $tmp842.value;
frost$core$UInt64 $tmp844 = (frost$core$UInt64) {((uint64_t) $tmp843)};
if ($tmp841) goto block17; else goto block18;
block17:;
int64_t $tmp845 = $tmp838.value;
int64_t $tmp846 = $tmp839.value;
bool $tmp847 = $tmp845 <= $tmp846;
frost$core$Bit $tmp848 = (frost$core$Bit) {$tmp847};
bool $tmp849 = $tmp848.value;
if ($tmp849) goto block14; else goto block15;
block18:;
int64_t $tmp850 = $tmp838.value;
int64_t $tmp851 = $tmp839.value;
bool $tmp852 = $tmp850 < $tmp851;
frost$core$Bit $tmp853 = (frost$core$Bit) {$tmp852};
bool $tmp854 = $tmp853.value;
if ($tmp854) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:247
frost$collections$Array* $tmp855 = *(&local4);
frost$core$Matcher* $tmp856 = *(&local3);
frost$core$Int64 $tmp857 = *(&local5);
frost$core$String* $tmp858 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp856, $tmp857);
frost$collections$Array$add$frost$collections$Array$T($tmp855, ((frost$core$Object*) $tmp858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
frost$core$Int64 $tmp859 = *(&local5);
int64_t $tmp860 = $tmp839.value;
int64_t $tmp861 = $tmp859.value;
int64_t $tmp862 = $tmp860 - $tmp861;
frost$core$Int64 $tmp863 = (frost$core$Int64) {$tmp862};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:555
int64_t $tmp864 = $tmp863.value;
frost$core$UInt64 $tmp865 = (frost$core$UInt64) {((uint64_t) $tmp864)};
if ($tmp841) goto block21; else goto block22;
block21:;
uint64_t $tmp866 = $tmp865.value;
uint64_t $tmp867 = $tmp844.value;
bool $tmp868 = $tmp866 >= $tmp867;
frost$core$Bit $tmp869 = (frost$core$Bit) {$tmp868};
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block19; else goto block15;
block22:;
uint64_t $tmp871 = $tmp865.value;
uint64_t $tmp872 = $tmp844.value;
bool $tmp873 = $tmp871 > $tmp872;
frost$core$Bit $tmp874 = (frost$core$Bit) {$tmp873};
bool $tmp875 = $tmp874.value;
if ($tmp875) goto block19; else goto block15;
block19:;
int64_t $tmp876 = $tmp859.value;
int64_t $tmp877 = $tmp842.value;
int64_t $tmp878 = $tmp876 + $tmp877;
frost$core$Int64 $tmp879 = (frost$core$Int64) {$tmp878};
*(&local5) = $tmp879;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:249
frost$collections$Array* $tmp880 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp880)));
frost$collections$Array* $tmp881 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp882 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
*(&local3) = ((frost$core$Matcher*) NULL);
*(&local2) = ((frost$collections$ListView*) $tmp880);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp880)));
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:251
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp883 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
*(&local3) = ((frost$core$Matcher*) NULL);
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
goto block10;
block10:;
frost$collections$ListView* $tmp884 = *(&local2);
*(&local6) = ((frost$collections$ListView*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
frost$collections$ListView* $tmp885 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local6) = $tmp884;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:175
frost$collections$ListView* $tmp886 = *(&local6);
frost$core$Bit $tmp887 = frost$core$Bit$init$builtin_bit($tmp886 != NULL);
bool $tmp888 = $tmp887.value;
if ($tmp888) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:176
frost$core$Weak** $tmp889 = &param1->owner;
frost$core$Weak* $tmp890 = *$tmp889;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:176:22
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp891 = &$tmp890->_valid;
frost$core$Bit $tmp892 = *$tmp891;
bool $tmp893 = $tmp892.value;
if ($tmp893) goto block29; else goto block30;
block30:;
frost$core$Int64 $tmp894 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s895, $tmp894);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp896 = &$tmp890->value;
frost$core$Object* $tmp897 = *$tmp896;
frost$core$Frost$ref$frost$core$Object$Q($tmp897);
frost$core$Bit $tmp898 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl*) $tmp897) == NULL);
bool $tmp899 = $tmp898.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp897);
if ($tmp899) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:177
frost$io$OutputStream** $tmp900 = &param0->out;
frost$io$OutputStream* $tmp901 = *$tmp900;
frost$collections$ListView* $tmp902 = *(&local6);
frost$core$Int64 $tmp903 = (frost$core$Int64) {0};
ITable* $tmp904 = $tmp902->$class->itable;
while ($tmp904->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp904 = $tmp904->next;
}
$fn906 $tmp905 = $tmp904->methods[0];
frost$core$Object* $tmp907 = $tmp905($tmp902, $tmp903);
frost$core$String* $tmp908 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s909, ((frost$core$String*) $tmp907));
frost$core$String* $tmp910 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp908, &$s911);
$fn913 $tmp912 = ($fn913) $tmp901->$class->vtable[19];
frost$core$Error* $tmp914 = $tmp912($tmp901, $tmp910);
if ($tmp914 == NULL) goto block31; else goto block32;
block32:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local0) = $tmp914;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
frost$core$Frost$unref$frost$core$Object$Q($tmp907);
frost$collections$ListView* $tmp915 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp915));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp916 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$String* $tmp917 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block31:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
frost$core$Frost$unref$frost$core$Object$Q($tmp907);
goto block26;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:179
frost$collections$ListView* $tmp918 = *(&local6);
frost$core$Int64 $tmp919 = (frost$core$Int64) {1};
ITable* $tmp920 = $tmp918->$class->itable;
while ($tmp920->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp920 = $tmp920->next;
}
$fn922 $tmp921 = $tmp920->methods[0];
frost$core$Object* $tmp923 = $tmp921($tmp918, $tmp919);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp923)));
frost$core$String* $tmp924 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
*(&local1) = ((frost$core$String*) $tmp923);
frost$core$Frost$unref$frost$core$Object$Q($tmp923);
goto block24;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:181
frost$io$OutputStream** $tmp925 = &param0->out;
frost$io$OutputStream* $tmp926 = *$tmp925;
$fn928 $tmp927 = ($fn928) $tmp926->$class->vtable[19];
frost$core$Error* $tmp929 = $tmp927($tmp926, &$s930);
if ($tmp929 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
*(&local0) = $tmp929;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
frost$collections$ListView* $tmp931 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp931));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp932 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$String* $tmp933 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:182
frost$io$OutputStream** $tmp934 = &param0->out;
frost$io$OutputStream* $tmp935 = *$tmp934;
org$frostlang$frostc$Annotations** $tmp936 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp937 = *$tmp936;
$fn939 $tmp938 = ($fn939) $tmp935->$class->vtable[18];
frost$core$Error* $tmp940 = $tmp938($tmp935, ((frost$core$Object*) $tmp937));
if ($tmp940 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
*(&local0) = $tmp940;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
frost$collections$ListView* $tmp941 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp942 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$String* $tmp943 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:183
org$frostlang$frostc$ClassDecl$Kind* $tmp944 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp945 = *$tmp944;
frost$core$Int64 $tmp946 = $tmp945.$rawValue;
frost$core$Int64 $tmp947 = (frost$core$Int64) {0};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:184:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp948 = $tmp946.value;
int64_t $tmp949 = $tmp947.value;
bool $tmp950 = $tmp948 == $tmp949;
frost$core$Bit $tmp951 = frost$core$Bit$init$builtin_bit($tmp950);
bool $tmp952 = $tmp951.value;
if ($tmp952) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:184
frost$io$OutputStream** $tmp953 = &param0->out;
frost$io$OutputStream* $tmp954 = *$tmp953;
$fn956 $tmp955 = ($fn956) $tmp954->$class->vtable[17];
frost$core$Error* $tmp957 = $tmp955($tmp954, &$s958);
if ($tmp957 == NULL) goto block41; else goto block42;
block42:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
*(&local0) = $tmp957;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
frost$collections$ListView* $tmp959 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp960 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$String* $tmp961 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
goto block37;
block39:;
frost$core$Int64 $tmp962 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:185:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp963 = $tmp946.value;
int64_t $tmp964 = $tmp962.value;
bool $tmp965 = $tmp963 == $tmp964;
frost$core$Bit $tmp966 = frost$core$Bit$init$builtin_bit($tmp965);
bool $tmp967 = $tmp966.value;
if ($tmp967) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:185
frost$io$OutputStream** $tmp968 = &param0->out;
frost$io$OutputStream* $tmp969 = *$tmp968;
$fn971 $tmp970 = ($fn971) $tmp969->$class->vtable[17];
frost$core$Error* $tmp972 = $tmp970($tmp969, &$s973);
if ($tmp972 == NULL) goto block46; else goto block47;
block47:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
*(&local0) = $tmp972;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
frost$collections$ListView* $tmp974 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp975 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$String* $tmp976 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block46:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp972));
goto block37;
block44:;
frost$core$Int64 $tmp977 = (frost$core$Int64) {2};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from StubCodeGenerator.frost:186:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp978 = $tmp946.value;
int64_t $tmp979 = $tmp977.value;
bool $tmp980 = $tmp978 == $tmp979;
frost$core$Bit $tmp981 = frost$core$Bit$init$builtin_bit($tmp980);
bool $tmp982 = $tmp981.value;
if ($tmp982) goto block48; else goto block37;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:186
frost$io$OutputStream** $tmp983 = &param0->out;
frost$io$OutputStream* $tmp984 = *$tmp983;
$fn986 $tmp985 = ($fn986) $tmp984->$class->vtable[17];
frost$core$Error* $tmp987 = $tmp985($tmp984, &$s988);
if ($tmp987 == NULL) goto block50; else goto block51;
block51:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
*(&local0) = $tmp987;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
frost$collections$ListView* $tmp989 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp990 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp990));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$String* $tmp991 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block50:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
goto block37;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:188
frost$io$OutputStream** $tmp992 = &param0->out;
frost$io$OutputStream* $tmp993 = *$tmp992;
frost$core$String* $tmp994 = *(&local1);
$fn996 $tmp995 = ($fn996) $tmp993->$class->vtable[17];
frost$core$Error* $tmp997 = $tmp995($tmp993, $tmp994);
if ($tmp997 == NULL) goto block52; else goto block53;
block53:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
*(&local0) = $tmp997;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
frost$collections$ListView* $tmp998 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp999 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$String* $tmp1000 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:189
frost$collections$List** $tmp1001 = &param1->parameters;
frost$collections$List* $tmp1002 = *$tmp1001;
ITable* $tmp1003 = ((frost$collections$CollectionView*) $tmp1002)->$class->itable;
while ($tmp1003->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1003 = $tmp1003->next;
}
$fn1005 $tmp1004 = $tmp1003->methods[0];
frost$core$Int64 $tmp1006 = $tmp1004(((frost$collections$CollectionView*) $tmp1002));
frost$core$Int64 $tmp1007 = (frost$core$Int64) {0};
int64_t $tmp1008 = $tmp1006.value;
int64_t $tmp1009 = $tmp1007.value;
bool $tmp1010 = $tmp1008 > $tmp1009;
frost$core$Bit $tmp1011 = (frost$core$Bit) {$tmp1010};
bool $tmp1012 = $tmp1011.value;
if ($tmp1012) goto block54; else goto block55;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:190
frost$io$OutputStream** $tmp1013 = &param0->out;
frost$io$OutputStream* $tmp1014 = *$tmp1013;
frost$collections$List** $tmp1015 = &param1->parameters;
frost$collections$List* $tmp1016 = *$tmp1015;
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$StubCodeGenerator$_Closure12));
org$frostlang$frostc$StubCodeGenerator$_Closure12* $tmp1017 = (org$frostlang$frostc$StubCodeGenerator$_Closure12*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$_Closure12$class);
org$frostlang$frostc$StubCodeGenerator$_Closure12$init$org$frostlang$frostc$StubCodeGenerator($tmp1017, param0);
FROST_ASSERT(32 == sizeof(frost$core$MutableMethod));
frost$core$MutableMethod* $tmp1019 = (frost$core$MutableMethod*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$MutableMethod$class);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from StubCodeGenerator.frost:191:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
frost$core$Int8** $tmp1020 = &$tmp1019->pointer;
*$tmp1020 = ((frost$core$Int8*) org$frostlang$frostc$StubCodeGenerator$_Closure12$$anonymous11$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$core$Object** $tmp1021 = &$tmp1019->target;
frost$core$Object* $tmp1022 = *$tmp1021;
frost$core$Frost$unref$frost$core$Object$Q($tmp1022);
frost$core$Object** $tmp1023 = &$tmp1019->target;
*$tmp1023 = ((frost$core$Object*) $tmp1017);
ITable* $tmp1024 = ((frost$collections$CollectionView*) $tmp1016)->$class->itable;
while ($tmp1024->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1024 = $tmp1024->next;
}
$fn1026 $tmp1025 = $tmp1024->methods[8];
frost$collections$Array* $tmp1027 = $tmp1025(((frost$collections$CollectionView*) $tmp1016), $tmp1019);
ITable* $tmp1028 = ((frost$collections$CollectionView*) $tmp1027)->$class->itable;
while ($tmp1028->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1028 = $tmp1028->next;
}
$fn1030 $tmp1029 = $tmp1028->methods[2];
frost$core$String* $tmp1031 = $tmp1029(((frost$collections$CollectionView*) $tmp1027), &$s1032);
frost$core$String* $tmp1033 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s1034, $tmp1031);
frost$core$String* $tmp1035 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1033, &$s1036);
$fn1038 $tmp1037 = ($fn1038) $tmp1014->$class->vtable[17];
frost$core$Error* $tmp1039 = $tmp1037($tmp1014, $tmp1035);
if ($tmp1039 == NULL) goto block57; else goto block58;
block58:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
*(&local0) = $tmp1039;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$collections$ListView* $tmp1040 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1041 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$String* $tmp1042 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1042));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1039));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1035));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
goto block55;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:193
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1043));
frost$core$String* $tmp1044 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
*(&local7) = &$s1045;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:194
org$frostlang$frostc$ClassDecl$Kind* $tmp1046 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1047 = *$tmp1046;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1048;
$tmp1048 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1048->value = $tmp1047;
frost$core$Int64 $tmp1049 = (frost$core$Int64) {2};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from StubCodeGenerator.frost:194:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp1050 = &(&local9)->$rawValue;
*$tmp1050 = $tmp1049;
org$frostlang$frostc$ClassDecl$Kind $tmp1051 = *(&local9);
*(&local8) = $tmp1051;
org$frostlang$frostc$ClassDecl$Kind $tmp1052 = *(&local8);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1053;
$tmp1053 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1053->value = $tmp1052;
ITable* $tmp1054 = ((frost$core$Equatable*) $tmp1048)->$class->itable;
while ($tmp1054->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1054 = $tmp1054->next;
}
$fn1056 $tmp1055 = $tmp1054->methods[1];
frost$core$Bit $tmp1057 = $tmp1055(((frost$core$Equatable*) $tmp1048), ((frost$core$Equatable*) $tmp1053));
bool $tmp1058 = $tmp1057.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1053)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1048)));
if ($tmp1058) goto block59; else goto block60;
block59:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:195
org$frostlang$frostc$Type** $tmp1059 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp1060 = *$tmp1059;
frost$core$Bit $tmp1061 = frost$core$Bit$init$builtin_bit($tmp1060 != NULL);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block64; else goto block63;
block64:;
org$frostlang$frostc$ClassDecl$Kind* $tmp1063 = &param1->classKind;
org$frostlang$frostc$ClassDecl$Kind $tmp1064 = *$tmp1063;
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1065;
$tmp1065 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1065->value = $tmp1064;
frost$core$Int64 $tmp1066 = (frost$core$Int64) {1};
// begin inline call to org.frostlang.frostc.ClassDecl.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.ClassDecl.Kind from StubCodeGenerator.frost:195:73
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ClassDecl.frost:5
frost$core$Int64* $tmp1067 = &(&local11)->$rawValue;
*$tmp1067 = $tmp1066;
org$frostlang$frostc$ClassDecl$Kind $tmp1068 = *(&local11);
*(&local10) = $tmp1068;
org$frostlang$frostc$ClassDecl$Kind $tmp1069 = *(&local10);
org$frostlang$frostc$ClassDecl$Kind$wrapper* $tmp1070;
$tmp1070 = (org$frostlang$frostc$ClassDecl$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$ClassDecl$Kind$wrapperclass);
$tmp1070->value = $tmp1069;
ITable* $tmp1071 = ((frost$core$Equatable*) $tmp1065)->$class->itable;
while ($tmp1071->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp1071 = $tmp1071->next;
}
$fn1073 $tmp1072 = $tmp1071->methods[1];
frost$core$Bit $tmp1074 = $tmp1072(((frost$core$Equatable*) $tmp1065), ((frost$core$Equatable*) $tmp1070));
bool $tmp1075 = $tmp1074.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1070)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp1065)));
if ($tmp1075) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:196
frost$io$OutputStream** $tmp1076 = &param0->out;
frost$io$OutputStream* $tmp1077 = *$tmp1076;
frost$core$String* $tmp1078 = *(&local7);
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:196:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
frost$core$String* $tmp1079 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1078, &$s1080);
org$frostlang$frostc$Type** $tmp1081 = &param1->rawSuper;
org$frostlang$frostc$Type* $tmp1082 = *$tmp1081;
frost$core$String* $tmp1083 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1082);
frost$core$String* $tmp1084 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1079, $tmp1083);
frost$core$String* $tmp1085 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1084, &$s1086);
$fn1088 $tmp1087 = ($fn1088) $tmp1077->$class->vtable[17];
frost$core$Error* $tmp1089 = $tmp1087($tmp1077, $tmp1085);
if ($tmp1089 == NULL) goto block67; else goto block68;
block68:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
*(&local0) = $tmp1089;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
frost$core$String* $tmp1090 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1090));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1091 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1091));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1092 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$String* $tmp1093 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1093));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block67:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1089));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1085));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1084));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1083));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:197
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1094));
frost$core$String* $tmp1095 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1095));
*(&local7) = &$s1096;
goto block63;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:199
frost$collections$Array** $tmp1097 = &param1->rawInterfaces;
frost$collections$Array* $tmp1098 = *$tmp1097;
ITable* $tmp1099 = ((frost$collections$Iterable*) $tmp1098)->$class->itable;
while ($tmp1099->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1099 = $tmp1099->next;
}
$fn1101 $tmp1100 = $tmp1099->methods[0];
frost$collections$Iterator* $tmp1102 = $tmp1100(((frost$collections$Iterable*) $tmp1098));
goto block69;
block69:;
ITable* $tmp1103 = $tmp1102->$class->itable;
while ($tmp1103->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1103 = $tmp1103->next;
}
$fn1105 $tmp1104 = $tmp1103->methods[0];
frost$core$Bit $tmp1106 = $tmp1104($tmp1102);
bool $tmp1107 = $tmp1106.value;
if ($tmp1107) goto block71; else goto block70;
block70:;
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
ITable* $tmp1108 = $tmp1102->$class->itable;
while ($tmp1108->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1108 = $tmp1108->next;
}
$fn1110 $tmp1109 = $tmp1108->methods[1];
frost$core$Object* $tmp1111 = $tmp1109($tmp1102);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Type*) $tmp1111)));
org$frostlang$frostc$Type* $tmp1112 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
*(&local12) = ((org$frostlang$frostc$Type*) $tmp1111);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:200
frost$io$OutputStream** $tmp1113 = &param0->out;
frost$io$OutputStream* $tmp1114 = *$tmp1113;
frost$core$String* $tmp1115 = *(&local7);
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubCodeGenerator.frost:200:34
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:111
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
frost$core$String* $tmp1116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1115, &$s1117);
org$frostlang$frostc$Type* $tmp1118 = *(&local12);
frost$core$String* $tmp1119 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(param0, $tmp1118);
frost$core$String* $tmp1120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1116, $tmp1119);
frost$core$String* $tmp1121 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1120, &$s1122);
$fn1124 $tmp1123 = ($fn1124) $tmp1114->$class->vtable[17];
frost$core$Error* $tmp1125 = $tmp1123($tmp1114, $tmp1121);
if ($tmp1125 == NULL) goto block73; else goto block74;
block74:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
*(&local0) = $tmp1125;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
frost$core$Frost$unref$frost$core$Object$Q($tmp1111);
org$frostlang$frostc$Type* $tmp1126 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1126));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
frost$core$String* $tmp1127 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1127));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1128 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1129 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1129));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$String* $tmp1130 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block73:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1121));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1115));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:201
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1131));
frost$core$String* $tmp1132 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1132));
*(&local7) = &$s1133;
frost$core$Frost$unref$frost$core$Object$Q($tmp1111);
org$frostlang$frostc$Type* $tmp1134 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
goto block69;
block71:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
goto block60;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:204
frost$io$OutputStream** $tmp1135 = &param0->out;
frost$io$OutputStream* $tmp1136 = *$tmp1135;
$fn1138 $tmp1137 = ($fn1138) $tmp1136->$class->vtable[17];
frost$core$Error* $tmp1139 = $tmp1137($tmp1136, &$s1140);
if ($tmp1139 == NULL) goto block75; else goto block76;
block76:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
*(&local0) = $tmp1139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
frost$core$String* $tmp1141 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1141));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1142 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1142));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1143 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$String* $tmp1144 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1144));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block75:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1139));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:205
frost$collections$Array** $tmp1145 = &param1->choiceCases;
frost$collections$Array* $tmp1146 = *$tmp1145;
ITable* $tmp1147 = ((frost$collections$Iterable*) $tmp1146)->$class->itable;
while ($tmp1147->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1147 = $tmp1147->next;
}
$fn1149 $tmp1148 = $tmp1147->methods[0];
frost$collections$Iterator* $tmp1150 = $tmp1148(((frost$collections$Iterable*) $tmp1146));
goto block77;
block77:;
ITable* $tmp1151 = $tmp1150->$class->itable;
while ($tmp1151->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1151 = $tmp1151->next;
}
$fn1153 $tmp1152 = $tmp1151->methods[0];
frost$core$Bit $tmp1154 = $tmp1152($tmp1150);
bool $tmp1155 = $tmp1154.value;
if ($tmp1155) goto block79; else goto block78;
block78:;
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) NULL);
ITable* $tmp1156 = $tmp1150->$class->itable;
while ($tmp1156->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1156 = $tmp1156->next;
}
$fn1158 $tmp1157 = $tmp1156->methods[1];
frost$core$Object* $tmp1159 = $tmp1157($tmp1150);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ChoiceCase*) $tmp1159)));
org$frostlang$frostc$ChoiceCase* $tmp1160 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) $tmp1159);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:206
org$frostlang$frostc$ChoiceCase* $tmp1161 = *(&local13);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ChoiceCase(param0, $tmp1161);
frost$core$Frost$unref$frost$core$Object$Q($tmp1159);
org$frostlang$frostc$ChoiceCase* $tmp1162 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1162));
*(&local13) = ((org$frostlang$frostc$ChoiceCase*) NULL);
goto block77;
block79:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:208
frost$collections$Array** $tmp1163 = &param1->classes;
frost$collections$Array* $tmp1164 = *$tmp1163;
ITable* $tmp1165 = ((frost$collections$Iterable*) $tmp1164)->$class->itable;
while ($tmp1165->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1165 = $tmp1165->next;
}
$fn1167 $tmp1166 = $tmp1165->methods[0];
frost$collections$Iterator* $tmp1168 = $tmp1166(((frost$collections$Iterable*) $tmp1164));
goto block80;
block80:;
ITable* $tmp1169 = $tmp1168->$class->itable;
while ($tmp1169->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1169 = $tmp1169->next;
}
$fn1171 $tmp1170 = $tmp1169->methods[0];
frost$core$Bit $tmp1172 = $tmp1170($tmp1168);
bool $tmp1173 = $tmp1172.value;
if ($tmp1173) goto block82; else goto block81;
block81:;
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1174 = $tmp1168->$class->itable;
while ($tmp1174->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1174 = $tmp1174->next;
}
$fn1176 $tmp1175 = $tmp1174->methods[1];
frost$core$Object* $tmp1177 = $tmp1175($tmp1168);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1177)));
org$frostlang$frostc$ClassDecl* $tmp1178 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) $tmp1177);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:209
org$frostlang$frostc$ClassDecl* $tmp1179 = *(&local14);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$ClassDecl(param0, $tmp1179);
frost$core$Frost$unref$frost$core$Object$Q($tmp1177);
org$frostlang$frostc$ClassDecl* $tmp1180 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
*(&local14) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block80;
block82:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:211
frost$collections$Array** $tmp1181 = &param1->fields;
frost$collections$Array* $tmp1182 = *$tmp1181;
ITable* $tmp1183 = ((frost$collections$Iterable*) $tmp1182)->$class->itable;
while ($tmp1183->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1183 = $tmp1183->next;
}
$fn1185 $tmp1184 = $tmp1183->methods[0];
frost$collections$Iterator* $tmp1186 = $tmp1184(((frost$collections$Iterable*) $tmp1182));
goto block83;
block83:;
ITable* $tmp1187 = $tmp1186->$class->itable;
while ($tmp1187->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1187 = $tmp1187->next;
}
$fn1189 $tmp1188 = $tmp1187->methods[0];
frost$core$Bit $tmp1190 = $tmp1188($tmp1186);
bool $tmp1191 = $tmp1190.value;
if ($tmp1191) goto block85; else goto block84;
block84:;
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
ITable* $tmp1192 = $tmp1186->$class->itable;
while ($tmp1192->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1192 = $tmp1192->next;
}
$fn1194 $tmp1193 = $tmp1192->methods[1];
frost$core$Object* $tmp1195 = $tmp1193($tmp1186);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$FieldDecl*) $tmp1195)));
org$frostlang$frostc$FieldDecl* $tmp1196 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1196));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) $tmp1195);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:212
org$frostlang$frostc$FieldDecl* $tmp1197 = *(&local15);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$FieldDecl(param0, $tmp1197);
frost$core$Frost$unref$frost$core$Object$Q($tmp1195);
org$frostlang$frostc$FieldDecl* $tmp1198 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
*(&local15) = ((org$frostlang$frostc$FieldDecl*) NULL);
goto block83;
block85:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:214
frost$collections$Array** $tmp1199 = &param1->methods;
frost$collections$Array* $tmp1200 = *$tmp1199;
ITable* $tmp1201 = ((frost$collections$Iterable*) $tmp1200)->$class->itable;
while ($tmp1201->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1201 = $tmp1201->next;
}
$fn1203 $tmp1202 = $tmp1201->methods[0];
frost$collections$Iterator* $tmp1204 = $tmp1202(((frost$collections$Iterable*) $tmp1200));
goto block86;
block86:;
ITable* $tmp1205 = $tmp1204->$class->itable;
while ($tmp1205->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1205 = $tmp1205->next;
}
$fn1207 $tmp1206 = $tmp1205->methods[0];
frost$core$Bit $tmp1208 = $tmp1206($tmp1204);
bool $tmp1209 = $tmp1208.value;
if ($tmp1209) goto block88; else goto block87;
block87:;
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
ITable* $tmp1210 = $tmp1204->$class->itable;
while ($tmp1210->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1210 = $tmp1210->next;
}
$fn1212 $tmp1211 = $tmp1210->methods[1];
frost$core$Object* $tmp1213 = $tmp1211($tmp1204);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp1213)));
org$frostlang$frostc$MethodDecl* $tmp1214 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
*(&local16) = ((org$frostlang$frostc$MethodDecl*) $tmp1213);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:215
org$frostlang$frostc$MethodDecl* $tmp1215 = *(&local16);
org$frostlang$frostc$StubCodeGenerator$write$org$frostlang$frostc$MethodDecl(param0, $tmp1215);
frost$core$Frost$unref$frost$core$Object$Q($tmp1213);
org$frostlang$frostc$MethodDecl* $tmp1216 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
*(&local16) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block86;
block88:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1204));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:217
frost$io$OutputStream** $tmp1217 = &param0->out;
frost$io$OutputStream* $tmp1218 = *$tmp1217;
$fn1220 $tmp1219 = ($fn1220) $tmp1218->$class->vtable[17];
frost$core$Error* $tmp1221 = $tmp1219($tmp1218, &$s1222);
if ($tmp1221 == NULL) goto block89; else goto block90;
block90:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
*(&local0) = $tmp1221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$String* $tmp1223 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1224 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1225 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$String* $tmp1226 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
*(&local1) = ((frost$core$String*) NULL);
goto block1;
block89:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1221));
frost$core$String* $tmp1227 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
*(&local7) = ((frost$core$String*) NULL);
frost$collections$ListView* $tmp1228 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
*(&local6) = ((frost$collections$ListView*) NULL);
frost$collections$ListView* $tmp1229 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
*(&local2) = ((frost$collections$ListView*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
frost$core$String* $tmp1230 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
*(&local1) = ((frost$core$String*) NULL);
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:220
frost$core$Error* $tmp1231 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from StubCodeGenerator.frost:220:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:34
$fn1233 $tmp1232 = ($fn1233) ((frost$core$Object*) $tmp1231)->$class->vtable[0];
frost$core$String* $tmp1234 = $tmp1232(((frost$core$Object*) $tmp1231));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.stub:34:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp1234);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:221
frost$core$Int64 $tmp1235 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp1235);
goto block2;
block2:;
frost$core$Error* $tmp1236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$StubCodeGenerator$start$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$StubCodeGenerator* param0, org$frostlang$frostc$ClassDecl* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:227
frost$core$Weak** $tmp1237 = &param1->owner;
frost$core$Weak* $tmp1238 = *$tmp1237;
// begin inline call to method frost.core.Weak.get():frost.core.Weak.T from StubCodeGenerator.frost:227:14
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:16
// begin inline call to function frost.core.Weak.get_valid():frost.core.Bit from Weak.stub:16:9
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:21
frost$core$Bit* $tmp1239 = &$tmp1238->_valid;
frost$core$Bit $tmp1240 = *$tmp1239;
bool $tmp1241 = $tmp1240.value;
if ($tmp1241) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp1242 = (frost$core$Int64) {16};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1243, $tmp1242);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Weak.stub:17
frost$core$Object** $tmp1244 = &$tmp1238->value;
frost$core$Object* $tmp1245 = *$tmp1244;
frost$core$Frost$ref$frost$core$Object$Q($tmp1245);
frost$core$Bit $tmp1246 = frost$core$Bit$init$builtin_bit(((org$frostlang$frostc$ClassDecl*) $tmp1245) == NULL);
bool $tmp1247 = $tmp1246.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1245);
if ($tmp1247) goto block3; else goto block2;
block3:;
org$frostlang$frostc$Annotations** $tmp1248 = &param1->annotations;
org$frostlang$frostc$Annotations* $tmp1249 = *$tmp1248;
// begin inline call to function org.frostlang.frostc.Annotations.get_isSynthetic():frost.core.Bit from StubCodeGenerator.frost:227:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Annotations.frost:155
frost$core$Int64* $tmp1250 = &$tmp1249->flags;
frost$core$Int64 $tmp1251 = *$tmp1250;
frost$core$Int64 $tmp1252 = (frost$core$Int64) {8192};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Annotations.frost:155:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:173
int64_t $tmp1253 = $tmp1251.value;
int64_t $tmp1254 = $tmp1252.value;
int64_t $tmp1255 = $tmp1253 & $tmp1254;
frost$core$Int64 $tmp1256 = frost$core$Int64$init$builtin_int64($tmp1255);
frost$core$Int64 $tmp1257 = (frost$core$Int64) {0};
int64_t $tmp1258 = $tmp1256.value;
int64_t $tmp1259 = $tmp1257.value;
bool $tmp1260 = $tmp1258 != $tmp1259;
frost$core$Bit $tmp1261 = (frost$core$Bit) {$tmp1260};
// begin inline call to function frost.core.Bit.!():frost.core.Bit from StubCodeGenerator.frost:227:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp1262 = $tmp1261.value;
bool $tmp1263 = !$tmp1262;
frost$core$Bit $tmp1264 = (frost$core$Bit) {$tmp1263};
bool $tmp1265 = $tmp1264.value;
if ($tmp1265) goto block1; else goto block2;
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
frost$core$Weak** $tmp1266 = &param0->compiler;
frost$core$Weak* $tmp1267 = *$tmp1266;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
frost$io$OutputStream** $tmp1268 = &param0->out;
frost$io$OutputStream* $tmp1269 = *$tmp1268;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1269));
return;

}

